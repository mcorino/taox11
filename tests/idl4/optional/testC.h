/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_HJGBAJHC_INCLUDED__
#define __RIDL_TESTC_H_HJGBAJHC_INCLUDED__

#pragma once

#include /**/ "tao/x11/base/pre.h"
#include "tao/x11/base/stddef.h"
#include "tao/x11/base/basic_traits.h"
#include "tao/x11/corba.h"
#include "map"
#include "tao/x11/base/bounded_string_t.h"
#include "tao/x11/base/bounded_type_traits_t.h"
#include "tao/x11/optional_t.h"

#include /**/ "tao/x11/base/versionx11.h"

#if TAOX11_MAJOR_VERSION != 2 || TAOX11_MINOR_VERSION != 6 || TAOX11_MICRO_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (2.6.0). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from c++11/templates/cli/hdr/typedef
/// @copydoc test.idl::StringLongMap
using StringLongMap = std::map<std::string, int32_t>;

// generated from c++11/templates/cli/hdr/typedef
/// @copydoc test.idl::bds
using bds = TAOX11_IDL::bounded_string<650>;

// generated from c++11/templates/cli/hdr/struct_pre
/// @copydoc test.idl::bar
class bar
{
public:
  // generated from c++11/templates/cli/hdr/struct_post
  bar () = default;
  ~bar () = default;
  bar (const bar&) = default;
  bar (bar&&) = default;
  /// Constructor which accepts value for all members
  explicit inline bar (
    int16_t x,
    std::string y,
    IDL::optional<int16_t> z);
  bar& operator= (const bar&) = default;
  bar& operator= (bar&&) = default;

  /// @copydoc test.idl::bar::x
  //@{
  inline void x (int16_t _x11_x) { this->x_ = _x11_x; }
  inline int16_t x () const { return this->x_; }
  inline int16_t& x () { return this->x_; }
  //@}

  /// @copydoc test.idl::bar::y
  //@{
  inline void y (const std::string& _x11_y) { this->y_ = _x11_y; }
  inline void y (std::string&& _x11_y) { this->y_ = std::move (_x11_y); }
  inline const std::string& y () const { return this->y_; }
  inline std::string& y () { return this->y_; }
  //@}

  /// @copydoc test.idl::bar::z
  //@{
  inline void z (const IDL::optional<int16_t>& _x11_z) { this->z_ = _x11_z; }
  inline void z (IDL::optional<int16_t>&& _x11_z) { this->z_ = std::move (_x11_z); }
  inline const IDL::optional<int16_t>& z () const { return this->z_; }
  inline IDL::optional<int16_t>& z () { return this->z_; }
  //@}

  /// Exchange the value of two structures in an efficient matter
  inline void swap (bar& s);

private:
  int16_t x_{};
  std::string y_{};
  IDL::optional<int16_t> z_{std::nullopt};
};// bar

inline void swap (::bar& m1, ::bar& m2) { m1.swap (m2); }

// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE::IDL
{

  // generated from c++11/templates/cli/hdr/map_idl_traits
  // Unaliased type : std::map<std::string, int32_t>
  // MD5            : 9591659AF1C35F72B6270EE9C6D3AFEF
#if !defined(_ALIAS_9591659AF1C35F72B6270EE9C6D3AFEF_TRAITS_DECL_)
#define _ALIAS_9591659AF1C35F72B6270EE9C6D3AFEF_TRAITS_DECL_

  template<>
  struct traits <::StringLongMap>
    : IDL::common_traits<::StringLongMap>
  {
    /// std::false_type or std::true_type type indicating whether
    /// this sequence is declared as bounded
    using is_bounded = std::false_type;
    /// IDL::traits<> for the key type of the sequence
    using key_traits = IDL::traits<std::string>;
    /// IDL::traits<> for the value type of the sequence
    using value_traits = IDL::traits<int32_t>;

    template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
    static inline OStrm_& write_on(
        OStrm_& os_, in_type val_,
        Formatter fmt_ = Formatter ())
    {
      return fmt_ (os_, val_);
    }

    template <typename Formatter = std::false_type>
    static inline __Writer<Formatter> write (in_type val) { return {val}; }
  };

  template <typename OStrm_, typename Fmt>
  inline OStrm_& operator <<(
      OStrm_& os,
      IDL::traits<::StringLongMap>::__Writer<Fmt> w)
  {
    using writer_t = IDL::traits<::StringLongMap>::__Writer<Fmt>;
    using formatter_t = typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter<::StringLongMap, OStrm_>,
                          typename writer_t::formatter_t>::type;
    return IDL::traits<::StringLongMap>::write_on (os, w.val_, formatter_t ());
  }

#endif

  // generated from c++11/templates/cli/hdr/string_idl_traits
  // Unaliased type : TAOX11_IDL::bounded_string<650>
  // MD5            : 8A4C2C8D2E43F29AF2FF47B029780F14
#if !defined(_ALIAS_8A4C2C8D2E43F29AF2FF47B029780F14_TRAITS_DECL_)
#define _ALIAS_8A4C2C8D2E43F29AF2FF47B029780F14_TRAITS_DECL_

  template<>
  struct traits <TAOX11_IDL::bounded_string<650>>
    : IDL::common_traits<TAOX11_IDL::bounded_string<650>>
    , IDL::bounded_traits<TAOX11_IDL::bounded_string<650>>
  {
    /// std::false_type or std::true_type type indicating whether
    /// this string is declared as bounded
    using is_bounded = std::true_type ;
    /// IDL::traits<> for the element of the string
    using element_traits = IDL::traits<char>;

    template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
    static inline OStrm_& write_on(
        OStrm_& os_, in_type val_,
        Formatter fmt_ = Formatter ())
    {
      return fmt_ (os_, val_);
    }

    template <typename Formatter = std::false_type>
    static inline __Writer<Formatter> write (in_type val) { return {val}; }
  };

  template <typename OStrm_, typename Fmt>
  inline OStrm_& operator <<(
      OStrm_& os,
      IDL::traits<TAOX11_IDL::bounded_string<650>>::__Writer<Fmt> w)
  {
    using writer_t = IDL::traits<TAOX11_IDL::bounded_string<650>>::__Writer<Fmt>;
    using formatter_t = typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter<TAOX11_IDL::bounded_string<650>, OStrm_>,
                          typename writer_t::formatter_t>::type;
    return IDL::traits<TAOX11_IDL::bounded_string<650>>::write_on (os, w.val_, formatter_t ());
  }

#endif

  // generated from c++11/templates/cli/hdr/struct_idl_traits
#if !defined (_STRUCT_BAR_TRAITS_)
#define _STRUCT_BAR_TRAITS_
  template<>
  struct traits <::bar>
    : IDL::common_traits<::bar>
  {
    template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
    static inline OStrm_& write_on(OStrm_& os_, in_type val_, Formatter fmt_ = Formatter ())
    {
      return fmt_ (os_, val_);
    }

    template <typename Formatter = std::false_type>
    static inline __Writer<Formatter> write (in_type val) { return {val}; }
  };

  template <typename OStrm_>
  struct formatter<::bar, OStrm_>;

  template <typename OStrm_, typename Fmt>
  OStrm_& operator <<(OStrm_&, IDL::traits<::bar>::__Writer<Fmt>);
#endif // _STRUCT_BAR_TRAITS_
} // namespace TAOX11_NAMESPACE::IDL

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE::IDL
{

  // generated from c++11/templates/cli/hdr/struct_idl_traits_def
  template <typename OStrm_>
  struct formatter<::bar, OStrm_>
  {
    inline OStrm_& operator ()(
        OStrm_& os_,
        const ::bar& val_)
    {
      os_ << "bar"
          << '{'
          << "x=" << IDL::traits<int16_t>::write(val_.x ())
          << ",y=" << IDL::traits<std::string>::write(val_.y ())
          << '}';
      return os_;
    }
  };

  template <typename OStrm_, typename Fmt>
  inline OStrm_& operator <<(OStrm_& os, IDL::traits<::bar>::__Writer<Fmt> w)
  {
    using writer_t = IDL::traits<::bar>::__Writer<Fmt>;
    using formatter_t = typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter<::bar, OStrm_>,
                          typename writer_t::formatter_t>::type;
    return IDL::traits<::bar>::write_on (os, w.val_, formatter_t ());
  }
} // namespace TAOX11_NAMESPACE::IDL

// generated from c++11/templates/cli/inl/struct_inl
inline ::bar::bar (
  int16_t x,
  std::string y,
  IDL::optional<int16_t> z)
  : x_ (std::move (x))
  , y_ (std::move (y))
  , z_ (std::move (z))
{
}

inline void ::bar::swap (::bar& s)
{
  std::swap (this->x_, s.x_);
  std::swap (this->y_, s.y_);
  std::swap (this->z_, s.z_);
}

// generated from c++11/templates/cli/hdr/map_os
// Unaliased type : std::map<std::string, int32_t>
// MD5            : 9591659AF1C35F72B6270EE9C6D3AFEF
#if !defined (_ALIAS_OSTREAM_9591659AF1C35F72B6270EE9C6D3AFEF_DECL_)
#define _ALIAS_OSTREAM_9591659AF1C35F72B6270EE9C6D3AFEF_DECL_

inline std::ostream& operator<< (std::ostream& strm, const ::StringLongMap& _v)
{
  return IDL::traits<::StringLongMap>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_9591659AF1C35F72B6270EE9C6D3AFEF_DECL_

// generated from c++11/templates/cli/hdr/struct_os
inline std::ostream& operator<< (std::ostream& strm, const ::bar& _v)
{
  return IDL::traits<::bar>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/post
#if !defined (TAOX11_DISABLE_INCLUDE_STUB_PROXY_HDR) && defined (__TAOX11_INCLUDE_STUB_PROXY__) && __has_include("testCP.h")
# include "testCP.h"
#endif

#include /**/ "tao/x11/base/post.h"

#endif /* __RIDL_TESTC_H_HJGBAJHC_INCLUDED__ */

// -*- END -*-
