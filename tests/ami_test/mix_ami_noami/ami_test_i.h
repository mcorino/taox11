/**
 * @file    ami_test_i.h
 * @author  Marijke Hengstmengel
 *
 * @brief   CORBA C++11 interface ami test
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */
#ifndef TAOX11_AMI_TEST_I_H
#define TAOX11_AMI_TEST_I_H

#include "testlib/taox11_testlog.h"

#include "ami_testS.h"

class AmiMyFoo_i
: public virtual CORBA::servant_traits< A::AmiMyFoo>::base_type
{
public:
  // The AMI_Test methods.
  int32_t amifoo (int32_t) override;
  int32_t my_amifoo_attrib () override;
  void my_amifoo_attrib (int32_t) override;
};


class MyFoo_i
: public virtual CORBA::servant_traits< A::MyFoo>::base_type
{
public:
  int32_t foo (int32_t) override;
  int32_t my_foo_attrib () override;
  void my_foo_attrib (int32_t) override;
};


/// Implement the Test::Hello interface
class Hello:
    public virtual CORBA::servant_traits<A::Hello>::base_type
{
public:
  /// Constructor
  Hello(IDL::traits<CORBA::ORB>::ref_type orb,
      IDL::traits<PortableServer::POA>::ref_type poa);

  // = The skeleton methods
  IDL::traits<A::AmiMyFoo>::ref_type get_iAmiMyFoo() override;
  IDL::traits<A::MyFoo>::ref_type get_iMyFoo() override;

  void shutdown() override;
private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  IDL::traits<CORBA::ORB>::ref_type orb_;
  IDL::traits<PortableServer::POA>::ref_type poa_;
};

#endif /* TAOX11_AMI_TEST_I_H */
