
#ifndef HELLO_H
#define HELLO_H

#include "testS.h"

/// Implement the Test::Hello interface
class Hello
  : public virtual POA_Test::Hello
{
public:
  /// Constructor
  Hello (CORBA::ORB_ptr orb, int& result);

  /// = The skeleton methods

  /// Get an enum.
  Test::enumType get_enum() override;
  /// Transfer an enum in both directions.
  Test::enumType inout_enum(Test::enumType pin, Test::enumType& pout, Test::enumType& pinout) override;

  /// A method to shutdown the ORB
  /// This method is used to simplify the test shutdown process.
  void shutdown () override;

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  CORBA::ORB_var orb_;
  int &result_;
};

#endif /* HELLO_H */
