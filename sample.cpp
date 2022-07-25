namespace std { inline namespace __1 { } }
extern "C" {
struct _PDCLIB_div_t
{
    int quot;
    int rem;
};

struct _PDCLIB_ldiv_t
{
    long int quot;
    long int rem;
};

struct _PDCLIB_lldiv_t
{
    long long int quot;
    long long int rem;
};
struct _PDCLIB_imaxdiv_t
{
    long long int quot;
    long long int rem;
};
typedef __builtin_va_list _PDCLIB_va_list;
typedef void *_PDCLIB_fd_t;
typedef void *_PDCLIB_thrd_t;
typedef struct __PDCLIB_cnd_t
{
    void *eventHandles[2];
    _Atomic int waitCount;
} _PDCLIB_cnd_t;
typedef struct __PDCLIB_mtx_t
{
    void *handle;
} _PDCLIB_mtx_t;
typedef unsigned int _PDCLIB_tss_t;
typedef int _PDCLIB_once_flag;
typedef signed char _PDCLIB_int8_t;
typedef unsigned char _PDCLIB_uint8_t;
typedef signed short _PDCLIB_int16_t;
typedef unsigned short _PDCLIB_uint16_t;
typedef signed int _PDCLIB_int32_t;
typedef unsigned int _PDCLIB_uint32_t;
typedef signed long long _PDCLIB_int64_t;
typedef unsigned long long _PDCLIB_uint64_t;
typedef int _PDCLIB_int_fast8_t;
typedef unsigned int _PDCLIB_uint_fast8_t;

typedef int _PDCLIB_int_fast16_t;
typedef unsigned int _PDCLIB_uint_fast16_t;

typedef int _PDCLIB_int_fast32_t;
typedef unsigned int _PDCLIB_uint_fast32_t;

typedef long _PDCLIB_int_fast64_t;
typedef unsigned long _PDCLIB_uint_fast64_t;
typedef int _PDCLIB_ptrdiff_t;

typedef unsigned int _PDCLIB_size_t;

typedef unsigned short _PDCLIB_wint_t;

typedef long _PDCLIB_intptr_t;
typedef unsigned long _PDCLIB_uintptr_t;

typedef long long int _PDCLIB_intmax_t;
typedef unsigned long long int _PDCLIB_uintmax_t;
struct _PDCLIB_fpos_t
{
    _PDCLIB_uint64_t offset;
    int status;
};

struct _PDCLIB_file_t
{
    _PDCLIB_fd_t handle;
    char * buffer;
    _PDCLIB_size_t bufsize;
    _PDCLIB_size_t bufidx;
    _PDCLIB_size_t bufend;
    struct _PDCLIB_fpos_t pos;
    _PDCLIB_size_t ungetidx;
    unsigned char * ungetbuf;
    unsigned int status;

    _PDCLIB_mtx_t mtx;

    char * filename;
    struct _PDCLIB_file_t * next;
};

typedef long _PDCLIB_time_t;
typedef unsigned int _PDCLIB_clock_t;

struct _PDCLIB_exitfunc_t
{
    struct _PDCLIB_exitfunc_t * next;
    void (*func)( void );
};

struct _PDCLIB_status_t
{
    int base;
    _PDCLIB_int_fast32_t flags;
    _PDCLIB_size_t n;

    _PDCLIB_size_t i;
    _PDCLIB_size_t current;
    char * s;

    _PDCLIB_size_t width;
    int prec;
    struct _PDCLIB_file_t * stream;
    _PDCLIB_va_list arg;
};

              _PDCLIB_intmax_t _PDCLIB_atomax( const char * s );

              const char * _PDCLIB_strtox_prelim( const char * p, char * sign, int * base );
              _PDCLIB_uintmax_t _PDCLIB_strtox_main( const char ** p, unsigned int base, _PDCLIB_uintmax_t error, _PDCLIB_uintmax_t limval, int limdigit, char * sign );

extern const char _PDCLIB_digits[];
extern const char _PDCLIB_Xdigits[];
              const char * _PDCLIB_print( const char * spec, struct _PDCLIB_status_t * status );
              const char * _PDCLIB_scan( const char * spec, struct _PDCLIB_status_t * status );

              unsigned int _PDCLIB_filemode( const char * mode );

              void _PDCLIB_closeall( void );

              int _PDCLIB_is_leap( int year_offset );

              char * _PDCLIB_strtok( char * s1, _PDCLIB_size_t * s1max, const char * s2, char ** ptr );
               int * _PDCLIB_errno_func( void );
struct _PDCLIB_lc_lconv_numeric_t
{
    char * decimal_point;
    char * thousands_sep;
    char * grouping;
};

struct _PDCLIB_lc_lconv_monetary_t
{
    char * mon_decimal_point;
    char * mon_thousands_sep;
    char * mon_grouping;
    char * positive_sign;
    char * negative_sign;
    char * currency_symbol;
    char * int_curr_symbol;
    char frac_digits;
    char p_cs_precedes;
    char n_cs_precedes;
    char p_sep_by_space;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_frac_digits;
    char int_p_cs_precedes;
    char int_n_cs_precedes;
    char int_p_sep_by_space;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

struct _PDCLIB_lc_numeric_monetary_t
{
    struct lconv * lconv;
    int numeric_alloced;
    int monetary_alloced;
};

extern struct _PDCLIB_lc_numeric_monetary_t _PDCLIB_lc_numeric_monetary;

struct _PDCLIB_lc_collate_t
{
    int alloced;

};

extern struct _PDCLIB_lc_collate_t _PDCLIB_lc_collate;

struct _PDCLIB_lc_ctype_entry_t
{
    _PDCLIB_uint16_t flags;
    unsigned char upper;
    unsigned char lower;
};

struct _PDCLIB_lc_ctype_t
{
    int alloced;
    int digits_low;
    int digits_high;
    int Xdigits_low;
    int Xdigits_high;
    int xdigits_low;
    int xdigits_high;
    struct _PDCLIB_lc_ctype_entry_t * entry;
};

extern struct _PDCLIB_lc_ctype_t _PDCLIB_lc_ctype;

struct _PDCLIB_lc_time_t
{
    int alloced;
    char * month_name_abbr[12];
    char * month_name_full[12];
    char * day_name_abbr[7];
    char * day_name_full[7];
    char * date_time_format;
    char * time_format_12h;
    char * date_format;
    char * time_format;
    char * am_pm[2];
};

extern struct _PDCLIB_lc_time_t _PDCLIB_lc_time;

              struct _PDCLIB_lc_lconv_numeric_t * _PDCLIB_load_lc_numeric( const char * path, const char * locale );
              struct _PDCLIB_lc_lconv_monetary_t * _PDCLIB_load_lc_monetary( const char * path, const char * locale );
              struct _PDCLIB_lc_collate_t * _PDCLIB_load_lc_collate( const char * path, const char * locale );
              struct _PDCLIB_lc_ctype_t * _PDCLIB_load_lc_ctype( const char * path, const char * locale );
              struct _PDCLIB_lc_time_t * _PDCLIB_load_lc_time( const char * path, const char * locale );
              struct _PDCLIB_lc_messages_t * _PDCLIB_load_lc_messages( const char * path, const char * locale );

typedef _PDCLIB_ptrdiff_t ptrdiff_t;

typedef _PDCLIB_size_t size_t;
}
namespace std
{
    typedef decltype(nullptr) nullptr_t;
}

namespace std { inline namespace __1 {

using ::ptrdiff_t;
using ::size_t;

typedef long double max_align_t;

} }

namespace std
{
enum class byte : unsigned char {};

constexpr byte operator| (byte __lhs, byte __rhs) noexcept
{
    return static_cast<byte>(
      static_cast<unsigned char>(
         static_cast<unsigned int>(__lhs) | static_cast<unsigned int>(__rhs)
    ));
}

constexpr byte& operator|=(byte& __lhs, byte __rhs) noexcept
{ return __lhs = __lhs | __rhs; }

constexpr byte operator& (byte __lhs, byte __rhs) noexcept
{
    return static_cast<byte>(
      static_cast<unsigned char>(
         static_cast<unsigned int>(__lhs) & static_cast<unsigned int>(__rhs)
    ));
}

constexpr byte& operator&=(byte& __lhs, byte __rhs) noexcept
{ return __lhs = __lhs & __rhs; }

constexpr byte operator^ (byte __lhs, byte __rhs) noexcept
{
    return static_cast<byte>(
      static_cast<unsigned char>(
         static_cast<unsigned int>(__lhs) ^ static_cast<unsigned int>(__rhs)
    ));
}

constexpr byte& operator^=(byte& __lhs, byte __rhs) noexcept
{ return __lhs = __lhs ^ __rhs; }

constexpr byte operator~ (byte __b) noexcept
{
    return static_cast<byte>(
      static_cast<unsigned char>(
        ~static_cast<unsigned int>(__b)
    ));
}

}
namespace std { inline namespace __1 {

template <class _T1, class _T2> struct pair;
template <class _Tp> class reference_wrapper;

template <class _Tp, _Tp __v>
struct integral_constant
{
  static constexpr const _Tp value = __v;
  typedef _Tp value_type;
  typedef integral_constant type;
  __attribute__ ((__exclude_from_explicit_instantiation__))
  constexpr operator value_type() const noexcept {return value;}

  __attribute__ ((__exclude_from_explicit_instantiation__))
  constexpr value_type operator ()() const noexcept {return value;}

};

template <class _Tp, _Tp __v>
constexpr const _Tp integral_constant<_Tp, __v>::value;

template <bool __b>
using bool_constant = integral_constant<bool, __b>;

typedef bool_constant<(true)> true_type;
typedef bool_constant<(false)> false_type;

template <bool _Val>
using _BoolConstant __attribute__((nodebug)) = integral_constant<bool, _Val>;

template <bool> struct _MetaBase;
template <>
struct _MetaBase<true> {
  template <class _Tp, class _Up>
  using _SelectImpl __attribute__((nodebug)) = _Tp;
  template <template <class...> class _FirstFn, template <class...> class, class ..._Args>
  using _SelectApplyImpl __attribute__((nodebug)) = _FirstFn<_Args...>;
  template <class _First, class...>
  using _FirstImpl __attribute__((nodebug)) = _First;
  template <class, class _Second, class...>
  using _SecondImpl __attribute__((nodebug)) = _Second;
  template <class _Tp = void>
  using _EnableIfImpl __attribute__((nodebug)) = _Tp;
  template <class _Result, class _First, class ..._Rest>
  using _OrImpl __attribute__((nodebug)) = typename _MetaBase<_First::value != true && sizeof...(_Rest) != 0>::template _OrImpl<_First, _Rest...>;
  template <class _Result, class _First, class ..._Rest>
  using _AndImpl __attribute__((nodebug)) = typename _MetaBase<_First::value == true && sizeof...(_Rest) != 0>::template _AndImpl<_First, _Rest...>;
};

template <>
struct _MetaBase<false> {
  template <class _Tp, class _Up>
  using _SelectImpl __attribute__((nodebug)) = _Up;
  template <template <class...> class, template <class...> class _SecondFn, class ..._Args>
  using _SelectApplyImpl __attribute__((nodebug)) = _SecondFn<_Args...>;
  template <class _Result, class ...>
  using _OrImpl __attribute__((nodebug)) = _Result;
  template <class _Result, class ...>
  using _AndImpl __attribute__((nodebug)) = _Result;
};
template <bool _Cond, class _Ret = void>
using _EnableIf __attribute__((nodebug)) = typename _MetaBase<_Cond>::template _EnableIfImpl<_Ret>;
template <bool _Cond, class _IfRes, class _ElseRes>
using _If __attribute__((nodebug)) = typename _MetaBase<_Cond>::template _SelectImpl<_IfRes, _ElseRes>;
template <class ..._Rest>
using _Or __attribute__((nodebug)) = typename _MetaBase< sizeof...(_Rest) != 0 >::template _OrImpl<false_type, _Rest...>;
template <class ..._Rest>
using _And __attribute__((nodebug)) = typename _MetaBase< sizeof...(_Rest) != 0 >::template _AndImpl<true_type, _Rest...>;
template <class _Pred>
struct _Not : _BoolConstant<!_Pred::value> {};
template <class ..._Args>
using _FirstType __attribute__((nodebug)) = typename _MetaBase<(sizeof...(_Args) >= 1)>::template _FirstImpl<_Args...>;
template <class ..._Args>
using _SecondType __attribute__((nodebug)) = typename _MetaBase<(sizeof...(_Args) >= 2)>::template _SecondImpl<_Args...>;

template <template <class...> class _Func, class ..._Args>
struct _Lazy : _Func<_Args...> {};

template <template <class...> class _Templ, class ..._Args, class = _Templ<_Args...> >
true_type __sfinae_test_impl(int);
template <template <class...> class, class ...>
false_type __sfinae_test_impl(...);

template <template <class ...> class _Templ, class ..._Args>
using _IsValidExpansion __attribute__((nodebug)) = decltype(std::__sfinae_test_impl<_Templ, _Args...>(0));

template <class>
struct __void_t { typedef void type; };

template <class _Tp>
struct __identity { typedef _Tp type; };

template <class _Tp, bool>
struct __dependent_type : public _Tp {};

template <bool _Bp, class _If, class _Then>
    struct conditional {typedef _If type;};
template <class _If, class _Then>
    struct conditional<false, _If, _Then> {typedef _Then type;};

template <bool _Bp, class _If, class _Then> using conditional_t = typename conditional<_Bp, _If, _Then>::type;

template <bool, class _Tp = void> struct enable_if {};
template <class _Tp> struct enable_if<true, _Tp> {typedef _Tp type;};

template <bool _Bp, class _Tp = void> using enable_if_t = typename enable_if<_Bp, _Tp>::type;

template <class _Tp, class _Up> struct is_same : public false_type {};
template <class _Tp> struct is_same<_Tp, _Tp> : public true_type {};

template <class _Tp, class _Up>
inline constexpr bool is_same_v
    = is_same<_Tp, _Up>::value;

template <class _Tp, class _Up>
using _IsSame = _BoolConstant<

    __is_same(_Tp, _Up)

>;

template <class _Tp, class _Up>
using _IsNotSame = _BoolConstant<

    !__is_same(_Tp, _Up)

>;

template <class _Tp>
inline constexpr
__attribute__((__no_sanitize__("cfi"))) __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp*
addressof(_Tp& __x) noexcept
{
    return __builtin_addressof(__x);
}

template <class _Tp> _Tp* addressof(const _Tp&&) noexcept = delete;

struct __two {char __lx[2];};

template <class _Tp> struct is_const : public false_type {};
template <class _Tp> struct is_const<_Tp const> : public true_type {};

template <class _Tp>
inline constexpr bool is_const_v
    = is_const<_Tp>::value;

template <class _Tp> struct is_volatile : public false_type {};
template <class _Tp> struct is_volatile<_Tp volatile> : public true_type {};

template <class _Tp>
inline constexpr bool is_volatile_v
    = is_volatile<_Tp>::value;

template <class _Tp> struct remove_const {typedef _Tp type;};
template <class _Tp> struct remove_const<const _Tp> {typedef _Tp type;};

template <class _Tp> using remove_const_t = typename remove_const<_Tp>::type;

template <class _Tp> struct remove_volatile {typedef _Tp type;};
template <class _Tp> struct remove_volatile<volatile _Tp> {typedef _Tp type;};

template <class _Tp> using remove_volatile_t = typename remove_volatile<_Tp>::type;

template <class _Tp> struct remove_cv
{typedef typename remove_volatile<typename remove_const<_Tp>::type>::type type;};

template <class _Tp> using remove_cv_t = typename remove_cv<_Tp>::type;

template <class _Tp> struct __libcpp_is_void : public false_type {};
template <> struct __libcpp_is_void<void> : public true_type {};

template <class _Tp> struct is_void
    : public __libcpp_is_void<typename remove_cv<_Tp>::type> {};

template <class _Tp>
inline constexpr bool is_void_v
    = is_void<_Tp>::value;

template <class _Tp> struct __is_nullptr_t_impl : public false_type {};
template <> struct __is_nullptr_t_impl<nullptr_t> : public true_type {};

template <class _Tp> struct __is_nullptr_t
    : public __is_nullptr_t_impl<typename remove_cv<_Tp>::type> {};

template <class _Tp> struct is_null_pointer
    : public __is_nullptr_t_impl<typename remove_cv<_Tp>::type> {};

template <class _Tp>
inline constexpr bool is_null_pointer_v
    = is_null_pointer<_Tp>::value;

template <class _Tp> struct __libcpp_is_integral : public false_type {};
template <> struct __libcpp_is_integral<bool> : public true_type {};
template <> struct __libcpp_is_integral<char> : public true_type {};
template <> struct __libcpp_is_integral<signed char> : public true_type {};
template <> struct __libcpp_is_integral<unsigned char> : public true_type {};

template <> struct __libcpp_is_integral<char16_t> : public true_type {};
template <> struct __libcpp_is_integral<char32_t> : public true_type {};

template <> struct __libcpp_is_integral<short> : public true_type {};
template <> struct __libcpp_is_integral<unsigned short> : public true_type {};
template <> struct __libcpp_is_integral<int> : public true_type {};
template <> struct __libcpp_is_integral<unsigned int> : public true_type {};
template <> struct __libcpp_is_integral<long> : public true_type {};
template <> struct __libcpp_is_integral<unsigned long> : public true_type {};
template <> struct __libcpp_is_integral<long long> : public true_type {};
template <> struct __libcpp_is_integral<unsigned long long> : public true_type {};

template <class _Tp> struct is_integral
    : public __libcpp_is_integral<typename remove_cv<_Tp>::type> {};

template <class _Tp>
inline constexpr bool is_integral_v
    = is_integral<_Tp>::value;

template <class _Tp> struct __libcpp_is_floating_point : public false_type {};
template <> struct __libcpp_is_floating_point<float> : public true_type {};
template <> struct __libcpp_is_floating_point<double> : public true_type {};
template <> struct __libcpp_is_floating_point<long double> : public true_type {};

template <class _Tp> struct is_floating_point
    : public __libcpp_is_floating_point<typename remove_cv<_Tp>::type> {};

template <class _Tp>
inline constexpr bool is_floating_point_v
    = is_floating_point<_Tp>::value;

template <class _Tp> struct is_array
    : public false_type {};
template <class _Tp> struct is_array<_Tp[]>
    : public true_type {};
template <class _Tp, size_t _Np> struct is_array<_Tp[_Np]>
    : public true_type {};

template <class _Tp>
inline constexpr bool is_array_v
    = is_array<_Tp>::value;

template <class _Tp> struct __libcpp_is_pointer : public false_type {};
template <class _Tp> struct __libcpp_is_pointer<_Tp*> : public true_type {};

template <class _Tp> struct __libcpp_remove_objc_qualifiers { typedef _Tp type; };
template <class _Tp> struct is_pointer
    : public __libcpp_is_pointer<typename __libcpp_remove_objc_qualifiers<typename remove_cv<_Tp>::type>::type> {};

template <class _Tp>
inline constexpr bool is_pointer_v
    = is_pointer<_Tp>::value;

template <class _Tp> struct is_lvalue_reference : public false_type {};
template <class _Tp> struct is_lvalue_reference<_Tp&> : public true_type {};

template <class _Tp> struct is_rvalue_reference : public false_type {};
template <class _Tp> struct is_rvalue_reference<_Tp&&> : public true_type {};

template <class _Tp> struct is_reference : public false_type {};
template <class _Tp> struct is_reference<_Tp&> : public true_type {};
template <class _Tp> struct is_reference<_Tp&&> : public true_type {};

template <class _Tp>
inline constexpr bool is_reference_v
    = is_reference<_Tp>::value;

template <class _Tp>
inline constexpr bool is_lvalue_reference_v
    = is_lvalue_reference<_Tp>::value;

template <class _Tp>
inline constexpr bool is_rvalue_reference_v
    = is_rvalue_reference<_Tp>::value;

template <class _Tp> struct is_union
    : public integral_constant<bool, __is_union(_Tp)> {};
template <class _Tp>
inline constexpr bool is_union_v
    = is_union<_Tp>::value;

template <class _Tp> struct is_class
    : public integral_constant<bool, __is_class(_Tp)> {};

template <class _Tp>
inline constexpr bool is_class_v
    = is_class<_Tp>::value;

template <class _Tp> struct is_function
    : public _BoolConstant<

    __is_function(_Tp)

    > {};

template <class _Tp>
inline constexpr bool is_function_v
    = is_function<_Tp>::value;

template <class _Tp> struct __libcpp_is_member_pointer {
  enum {
    __is_member = false,
    __is_func = false,
    __is_obj = false
  };
};
template <class _Tp, class _Up> struct __libcpp_is_member_pointer<_Tp _Up::*> {
  enum {
    __is_member = true,
    __is_func = is_function<_Tp>::value,
    __is_obj = !__is_func,
  };
};

template <class _Tp> struct is_member_function_pointer
    : public _BoolConstant< __libcpp_is_member_pointer<typename remove_cv<_Tp>::type>::__is_func > {};

template <class _Tp>
inline constexpr bool is_member_function_pointer_v
    = is_member_function_pointer<_Tp>::value;

template <class _Tp> struct is_member_pointer
 : public _BoolConstant< __libcpp_is_member_pointer<typename remove_cv<_Tp>::type>::__is_member > {};

template <class _Tp>
inline constexpr bool is_member_pointer_v
    = is_member_pointer<_Tp>::value;

template <class _Tp> struct is_member_object_pointer
    : public _BoolConstant< __libcpp_is_member_pointer<typename remove_cv<_Tp>::type>::__is_obj > {};

template <class _Tp>
inline constexpr bool is_member_object_pointer_v
    = is_member_object_pointer<_Tp>::value;

template <class _Tp> struct is_enum
    : public integral_constant<bool, __is_enum(_Tp)> {};

template <class _Tp>
inline constexpr bool is_enum_v
    = is_enum<_Tp>::value;

template <class _Tp> struct is_arithmetic
    : public integral_constant<bool, is_integral<_Tp>::value ||
                                     is_floating_point<_Tp>::value> {};

template <class _Tp>
inline constexpr bool is_arithmetic_v
    = is_arithmetic<_Tp>::value;

template <class _Tp> struct is_fundamental
    : public integral_constant<bool, is_void<_Tp>::value ||
                                     __is_nullptr_t<_Tp>::value ||
                                     is_arithmetic<_Tp>::value> {};

template <class _Tp>
inline constexpr bool is_fundamental_v
    = is_fundamental<_Tp>::value;

template <class _Tp> struct is_scalar
    : public integral_constant<bool, is_arithmetic<_Tp>::value ||
                                     is_member_pointer<_Tp>::value ||
                                     is_pointer<_Tp>::value ||
                                     __is_nullptr_t<_Tp>::value ||
                                     is_enum<_Tp>::value > {};

template <> struct is_scalar<nullptr_t> : public true_type {};

template <class _Tp>
inline constexpr bool is_scalar_v
    = is_scalar<_Tp>::value;

template <class _Tp> struct is_object
    : public integral_constant<bool, is_scalar<_Tp>::value ||
                                     is_array<_Tp>::value ||
                                     is_union<_Tp>::value ||
                                     is_class<_Tp>::value > {};

template <class _Tp>
inline constexpr bool is_object_v
    = is_object<_Tp>::value;

template <class _Tp> struct is_compound
    : public integral_constant<bool, !is_fundamental<_Tp>::value> {};

template <class _Tp>
inline constexpr bool is_compound_v
    = is_compound<_Tp>::value;

struct __is_referenceable_impl {
    template <class _Tp> static _Tp& __test(int);
    template <class _Tp> static __two __test(...);
};

template <class _Tp>
struct __is_referenceable : integral_constant<bool,
    _IsNotSame<decltype(__is_referenceable_impl::__test<_Tp>(0)), __two>::value> {};

template <class _Tp> struct add_const {
  typedef __attribute__((nodebug)) const _Tp type;
};

template <class _Tp> using add_const_t = typename add_const<_Tp>::type;

template <class _Tp> struct add_volatile {
  typedef __attribute__((nodebug)) volatile _Tp type;
};

template <class _Tp> using add_volatile_t = typename add_volatile<_Tp>::type;

template <class _Tp> struct add_cv {
  typedef __attribute__((nodebug)) const volatile _Tp type;
};

template <class _Tp> using add_cv_t = typename add_cv<_Tp>::type;

template <class _Tp> struct remove_reference {typedef __attribute__((nodebug)) _Tp type;};
template <class _Tp> struct remove_reference<_Tp&> {typedef __attribute__((nodebug)) _Tp type;};
template <class _Tp> struct remove_reference<_Tp&&> {typedef __attribute__((nodebug)) _Tp type;};

template <class _Tp> using remove_reference_t = typename remove_reference<_Tp>::type;

template <class _Tp, bool = __is_referenceable<_Tp>::value> struct __add_lvalue_reference_impl { typedef __attribute__((nodebug)) _Tp type; };
template <class _Tp > struct __add_lvalue_reference_impl<_Tp, true> { typedef __attribute__((nodebug)) _Tp& type; };

template <class _Tp> struct add_lvalue_reference
{typedef __attribute__((nodebug)) typename __add_lvalue_reference_impl<_Tp>::type type;};

template <class _Tp> using add_lvalue_reference_t = typename add_lvalue_reference<_Tp>::type;

template <class _Tp, bool = __is_referenceable<_Tp>::value> struct __add_rvalue_reference_impl { typedef __attribute__((nodebug)) _Tp type; };
template <class _Tp > struct __add_rvalue_reference_impl<_Tp, true> { typedef __attribute__((nodebug)) _Tp&& type; };

template <class _Tp> struct add_rvalue_reference
{typedef __attribute__((nodebug)) typename __add_rvalue_reference_impl<_Tp>::type type;};

template <class _Tp> using add_rvalue_reference_t = typename add_rvalue_reference<_Tp>::type;

template <class _Tp> _Tp&& __declval(int);
template <class _Tp> _Tp __declval(long);

template <class _Tp>
decltype(std::__1::__declval<_Tp>(0))
declval() noexcept;

template <class _Tp>
struct __uncvref {
    typedef __attribute__((nodebug)) typename remove_cv<typename remove_reference<_Tp>::type>::type type;
};

template <class _Tp>
struct __unconstref {
    typedef __attribute__((nodebug)) typename remove_const<typename remove_reference<_Tp>::type>::type type;
};

template <class _Tp>
using __uncvref_t __attribute__((nodebug)) = typename __uncvref<_Tp>::type;

template <class _Tp, class _Up>
struct __is_same_uncvref : _IsSame<typename __uncvref<_Tp>::type,
                                   typename __uncvref<_Up>::type> {};

struct __any
{
    __any(...);
};

template <class _Tp> struct remove_pointer {typedef __attribute__((nodebug)) _Tp type;};
template <class _Tp> struct remove_pointer<_Tp*> {typedef __attribute__((nodebug)) _Tp type;};
template <class _Tp> struct remove_pointer<_Tp* const> {typedef __attribute__((nodebug)) _Tp type;};
template <class _Tp> struct remove_pointer<_Tp* volatile> {typedef __attribute__((nodebug)) _Tp type;};
template <class _Tp> struct remove_pointer<_Tp* const volatile> {typedef __attribute__((nodebug)) _Tp type;};

template <class _Tp> using remove_pointer_t = typename remove_pointer<_Tp>::type;

template <class _Tp,
        bool = __is_referenceable<_Tp>::value ||
                _IsSame<typename remove_cv<_Tp>::type, void>::value>
struct __add_pointer_impl
    {typedef __attribute__((nodebug)) typename remove_reference<_Tp>::type* type;};
template <class _Tp> struct __add_pointer_impl<_Tp, false>
    {typedef __attribute__((nodebug)) _Tp type;};

template <class _Tp> struct add_pointer
    {typedef __attribute__((nodebug)) typename __add_pointer_impl<_Tp>::type type;};

template <class _Tp> using add_pointer_t = typename add_pointer<_Tp>::type;

template <class _Tp, bool = is_integral<_Tp>::value>
struct __libcpp_is_signed_impl : public bool_constant<(_Tp(-1) < _Tp(0))> {};

template <class _Tp>
struct __libcpp_is_signed_impl<_Tp, false> : public true_type {};

template <class _Tp, bool = is_arithmetic<_Tp>::value>
struct __libcpp_is_signed : public __libcpp_is_signed_impl<_Tp> {};

template <class _Tp> struct __libcpp_is_signed<_Tp, false> : public false_type {};

template <class _Tp> struct is_signed : public __libcpp_is_signed<_Tp> {};

template <class _Tp>
inline constexpr bool is_signed_v
    = is_signed<_Tp>::value;

template <class _Tp, bool = is_integral<_Tp>::value>
struct __libcpp_is_unsigned_impl : public bool_constant<(_Tp(0) < _Tp(-1))> {};

template <class _Tp>
struct __libcpp_is_unsigned_impl<_Tp, false> : public false_type {};

template <class _Tp, bool = is_arithmetic<_Tp>::value>
struct __libcpp_is_unsigned : public __libcpp_is_unsigned_impl<_Tp> {};

template <class _Tp> struct __libcpp_is_unsigned<_Tp, false> : public false_type {};

template <class _Tp> struct is_unsigned : public __libcpp_is_unsigned<_Tp> {};

template <class _Tp>
inline constexpr bool is_unsigned_v
    = is_unsigned<_Tp>::value;

template <class _Tp> struct rank
    : public integral_constant<size_t, 0> {};
template <class _Tp> struct rank<_Tp[]>
    : public integral_constant<size_t, rank<_Tp>::value + 1> {};
template <class _Tp, size_t _Np> struct rank<_Tp[_Np]>
    : public integral_constant<size_t, rank<_Tp>::value + 1> {};

template <class _Tp>
inline constexpr size_t rank_v
    = rank<_Tp>::value;

template <class _Tp, unsigned _Ip = 0> struct extent
    : public integral_constant<size_t, 0> {};
template <class _Tp> struct extent<_Tp[], 0>
    : public integral_constant<size_t, 0> {};
template <class _Tp, unsigned _Ip> struct extent<_Tp[], _Ip>
    : public integral_constant<size_t, extent<_Tp, _Ip-1>::value> {};
template <class _Tp, size_t _Np> struct extent<_Tp[_Np], 0>
    : public integral_constant<size_t, _Np> {};
template <class _Tp, size_t _Np, unsigned _Ip> struct extent<_Tp[_Np], _Ip>
    : public integral_constant<size_t, extent<_Tp, _Ip-1>::value> {};

template <class _Tp, unsigned _Ip = 0>
inline constexpr size_t extent_v
    = extent<_Tp, _Ip>::value;

template <class _Tp> struct remove_extent
    {typedef _Tp type;};
template <class _Tp> struct remove_extent<_Tp[]>
    {typedef _Tp type;};
template <class _Tp, size_t _Np> struct remove_extent<_Tp[_Np]>
    {typedef _Tp type;};

template <class _Tp> using remove_extent_t = typename remove_extent<_Tp>::type;

template <class _Tp> struct remove_all_extents
    {typedef _Tp type;};
template <class _Tp> struct remove_all_extents<_Tp[]>
    {typedef typename remove_all_extents<_Tp>::type type;};
template <class _Tp, size_t _Np> struct remove_all_extents<_Tp[_Np]>
    {typedef typename remove_all_extents<_Tp>::type type;};

template <class _Tp> using remove_all_extents_t = typename remove_all_extents<_Tp>::type;

template <class _Up, bool>
struct __decay {
    typedef __attribute__((nodebug)) typename remove_cv<_Up>::type type;
};

template <class _Up>
struct __decay<_Up, true> {
public:
    typedef __attribute__((nodebug)) typename conditional
                     <
                         is_array<_Up>::value,
                         typename remove_extent<_Up>::type*,
                         typename conditional
                         <
                              is_function<_Up>::value,
                              typename add_pointer<_Up>::type,
                              typename remove_cv<_Up>::type
                         >::type
                     >::type type;
};

template <class _Tp>
struct decay
{
private:
    typedef __attribute__((nodebug)) typename remove_reference<_Tp>::type _Up;
public:
    typedef __attribute__((nodebug)) typename __decay<_Up, __is_referenceable<_Up>::value>::type type;
};

template <class _Tp> using decay_t = typename decay<_Tp>::type;

template <class _Tp> struct is_abstract
    : public integral_constant<bool, __is_abstract(_Tp)> {};

template <class _Tp>
inline constexpr bool is_abstract_v
    = is_abstract<_Tp>::value;

template <class _Tp> struct
__libcpp_is_final : public integral_constant<bool, __is_final(_Tp)> {};

template <class _Tp> struct
is_final : public integral_constant<bool, __is_final(_Tp)> {};

template <class _Tp>
inline constexpr bool is_final_v
    = is_final<_Tp>::value;

template <class _Tp> struct
is_aggregate : public integral_constant<bool, __is_aggregate(_Tp)> {};

template <class _Tp>
inline constexpr bool is_aggregate_v
    = is_aggregate<_Tp>::value;

template <class _Bp, class _Dp>
struct is_base_of
    : public integral_constant<bool, __is_base_of(_Bp, _Dp)> {};

template <class _Bp, class _Dp>
inline constexpr bool is_base_of_v
    = is_base_of<_Bp, _Dp>::value;

template <class _T1, class _T2> struct is_convertible
    : public integral_constant<bool, __is_convertible_to(_T1, _T2) &&
                                     !is_abstract<_T2>::value> {};

template <class _From, class _To>
inline constexpr bool is_convertible_v
    = is_convertible<_From, _To>::value;

template <class _Tp>
struct is_empty
    : public integral_constant<bool, __is_empty(_Tp)> {};
template <class _Tp>
inline constexpr bool is_empty_v
    = is_empty<_Tp>::value;

template <class _Tp>
struct is_polymorphic
    : public integral_constant<bool, __is_polymorphic(_Tp)> {};
template <class _Tp>
inline constexpr bool is_polymorphic_v
    = is_polymorphic<_Tp>::value;

template <class _Tp> struct has_virtual_destructor
    : public integral_constant<bool, __has_virtual_destructor(_Tp)> {};
template <class _Tp>
inline constexpr bool has_virtual_destructor_v
    = has_virtual_destructor<_Tp>::value;

template <class _Tp> struct has_unique_object_representations
    : public integral_constant<bool,
       __has_unique_object_representations(remove_cv_t<remove_all_extents_t<_Tp>>)> {};

template <class _Tp>
inline constexpr bool has_unique_object_representations_v
    = has_unique_object_representations<_Tp>::value;

template <class _Tp> struct alignment_of
    : public integral_constant<size_t, alignof(_Tp)> {};

template <class _Tp>
inline constexpr size_t alignment_of_v
    = alignment_of<_Tp>::value;

template <class _Hp, class _Tp>
struct __type_list
{
    typedef _Hp _Head;
    typedef _Tp _Tail;
};

struct __nat
{

    __nat() = delete;
    __nat(const __nat&) = delete;
    __nat& operator=(const __nat&) = delete;
    ~__nat() = delete;

};

template <class _Tp>
struct __align_type
{
    static const size_t value = __alignof(_Tp);
    typedef _Tp type;
};

struct __struct_double {long double __lx;};
struct __struct_double4 {double __lx[4];};

typedef
    __type_list<__align_type<unsigned char>,
    __type_list<__align_type<unsigned short>,
    __type_list<__align_type<unsigned int>,
    __type_list<__align_type<unsigned long>,
    __type_list<__align_type<unsigned long long>,
    __type_list<__align_type<double>,
    __type_list<__align_type<long double>,
    __type_list<__align_type<__struct_double>,
    __type_list<__align_type<__struct_double4>,
    __type_list<__align_type<int*>,
    __nat
    > > > > > > > > > > __all_types;

template <size_t _Align>
struct alignas(_Align) __fallback_overaligned {};

template <class _TL, size_t _Align> struct __find_pod;

template <class _Hp, size_t _Align>
struct __find_pod<__type_list<_Hp, __nat>, _Align>
{
    typedef typename conditional<
                             _Align == _Hp::value,
                             typename _Hp::type,
                             __fallback_overaligned<_Align>
                         >::type type;
};

template <class _Hp, class _Tp, size_t _Align>
struct __find_pod<__type_list<_Hp, _Tp>, _Align>
{
    typedef typename conditional<
                             _Align == _Hp::value,
                             typename _Hp::type,
                             typename __find_pod<_Tp, _Align>::type
                         >::type type;
};

template <class _TL, size_t _Len> struct __find_max_align;

template <class _Hp, size_t _Len>
struct __find_max_align<__type_list<_Hp, __nat>, _Len> : public integral_constant<size_t, _Hp::value> {};

template <size_t _Len, size_t _A1, size_t _A2>
struct __select_align
{
private:
    static const size_t __min = _A2 < _A1 ? _A2 : _A1;
    static const size_t __max = _A1 < _A2 ? _A2 : _A1;
public:
    static const size_t value = _Len < __max ? __min : __max;
};

template <class _Hp, class _Tp, size_t _Len>
struct __find_max_align<__type_list<_Hp, _Tp>, _Len>
    : public integral_constant<size_t, __select_align<_Len, _Hp::value, __find_max_align<_Tp, _Len>::value>::value> {};

template <size_t _Len, size_t _Align = __find_max_align<__all_types, _Len>::value>
struct aligned_storage
{
    typedef typename __find_pod<__all_types, _Align>::type _Aligner;
    union type
    {
        _Aligner __align;
        unsigned char __data[(_Len + _Align - 1)/_Align * _Align];
    };
};

template <size_t _Len, size_t _Align = __find_max_align<__all_types, _Len>::value>
    using aligned_storage_t = typename aligned_storage<_Len, _Align>::type;
template <size_t _Len>struct aligned_storage<_Len, 0x1>{ struct alignas(0x1) type { unsigned char __lx[(_Len + 0x1 - 1)/0x1 * 0x1]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x2>{ struct alignas(0x2) type { unsigned char __lx[(_Len + 0x2 - 1)/0x2 * 0x2]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x4>{ struct alignas(0x4) type { unsigned char __lx[(_Len + 0x4 - 1)/0x4 * 0x4]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x8>{ struct alignas(0x8) type { unsigned char __lx[(_Len + 0x8 - 1)/0x8 * 0x8]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x10>{ struct alignas(0x10) type { unsigned char __lx[(_Len + 0x10 - 1)/0x10 * 0x10]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x20>{ struct alignas(0x20) type { unsigned char __lx[(_Len + 0x20 - 1)/0x20 * 0x20]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x40>{ struct alignas(0x40) type { unsigned char __lx[(_Len + 0x40 - 1)/0x40 * 0x40]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x80>{ struct alignas(0x80) type { unsigned char __lx[(_Len + 0x80 - 1)/0x80 * 0x80]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x100>{ struct alignas(0x100) type { unsigned char __lx[(_Len + 0x100 - 1)/0x100 * 0x100]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x200>{ struct alignas(0x200) type { unsigned char __lx[(_Len + 0x200 - 1)/0x200 * 0x200]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x400>{ struct alignas(0x400) type { unsigned char __lx[(_Len + 0x400 - 1)/0x400 * 0x400]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x800>{ struct alignas(0x800) type { unsigned char __lx[(_Len + 0x800 - 1)/0x800 * 0x800]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x1000>{ struct alignas(0x1000) type { unsigned char __lx[(_Len + 0x1000 - 1)/0x1000 * 0x1000]; };};
template <size_t _Len>struct aligned_storage<_Len, 0x2000>{ struct alignas(0x2000) type { unsigned char __lx[(_Len + 0x2000 - 1)/0x2000 * 0x2000]; };};
template <size_t _I0, size_t ..._In>
struct __static_max;

template <size_t _I0>
struct __static_max<_I0>
{
    static const size_t value = _I0;
};

template <size_t _I0, size_t _I1, size_t ..._In>
struct __static_max<_I0, _I1, _In...>
{
    static const size_t value = _I0 >= _I1 ? __static_max<_I0, _In...>::value :
                                             __static_max<_I1, _In...>::value;
};

template <size_t _Len, class _Type0, class ..._Types>
struct aligned_union
{
    static const size_t alignment_value = __static_max<__alignof(_Type0),
                                                       __alignof(_Types)...>::value;
    static const size_t __len = __static_max<_Len, sizeof(_Type0),
                                             sizeof(_Types)...>::value;
    typedef typename aligned_storage<__len, alignment_value>::type type;
};

template <size_t _Len, class ..._Types> using aligned_union_t = typename aligned_union<_Len, _Types...>::type;

template <class _Tp>
struct __numeric_type
{
   static void __test(...);
   static float __test(float);
   static double __test(char);
   static double __test(int);
   static double __test(unsigned);
   static double __test(long);
   static double __test(unsigned long);
   static double __test(long long);
   static double __test(unsigned long long);
   static double __test(double);
   static long double __test(long double);

   typedef decltype(__test(declval<_Tp>())) type;
   static const bool value = _IsNotSame<type, void>::value;
};

template <>
struct __numeric_type<void>
{
   static const bool value = true;
};

template <class _A1, class _A2 = void, class _A3 = void,
          bool = __numeric_type<_A1>::value &&
                 __numeric_type<_A2>::value &&
                 __numeric_type<_A3>::value>
class __promote_imp
{
public:
    static const bool value = false;
};

template <class _A1, class _A2, class _A3>
class __promote_imp<_A1, _A2, _A3, true>
{
private:
    typedef typename __promote_imp<_A1>::type __type1;
    typedef typename __promote_imp<_A2>::type __type2;
    typedef typename __promote_imp<_A3>::type __type3;
public:
    typedef decltype(__type1() + __type2() + __type3()) type;
    static const bool value = true;
};

template <class _A1, class _A2>
class __promote_imp<_A1, _A2, void, true>
{
private:
    typedef typename __promote_imp<_A1>::type __type1;
    typedef typename __promote_imp<_A2>::type __type2;
public:
    typedef decltype(__type1() + __type2()) type;
    static const bool value = true;
};

template <class _A1>
class __promote_imp<_A1, void, void, true>
{
public:
    typedef typename __numeric_type<_A1>::type type;
    static const bool value = true;
};

template <class _A1, class _A2 = void, class _A3 = void>
class __promote : public __promote_imp<_A1, _A2, _A3> {};

typedef
    __type_list<signed char,
    __type_list<signed short,
    __type_list<signed int,
    __type_list<signed long,
    __type_list<signed long long,

    __nat

    > > > > > __signed_types;

typedef
    __type_list<unsigned char,
    __type_list<unsigned short,
    __type_list<unsigned int,
    __type_list<unsigned long,
    __type_list<unsigned long long,

    __nat

    > > > > > __unsigned_types;

template <class _TypeList, size_t _Size, bool = _Size <= sizeof(typename _TypeList::_Head)> struct __find_first;

template <class _Hp, class _Tp, size_t _Size>
struct __find_first<__type_list<_Hp, _Tp>, _Size, true>
{
    typedef __attribute__((nodebug)) _Hp type;
};

template <class _Hp, class _Tp, size_t _Size>
struct __find_first<__type_list<_Hp, _Tp>, _Size, false>
{
    typedef __attribute__((nodebug)) typename __find_first<_Tp, _Size>::type type;
};

template <class _Tp, class _Up, bool = is_const<typename remove_reference<_Tp>::type>::value,
                             bool = is_volatile<typename remove_reference<_Tp>::type>::value>
struct __apply_cv
{
    typedef __attribute__((nodebug)) _Up type;
};

template <class _Tp, class _Up>
struct __apply_cv<_Tp, _Up, true, false>
{
    typedef __attribute__((nodebug)) const _Up type;
};

template <class _Tp, class _Up>
struct __apply_cv<_Tp, _Up, false, true>
{
    typedef volatile _Up type;
};

template <class _Tp, class _Up>
struct __apply_cv<_Tp, _Up, true, true>
{
    typedef const volatile _Up type;
};

template <class _Tp, class _Up>
struct __apply_cv<_Tp&, _Up, false, false>
{
    typedef _Up& type;
};

template <class _Tp, class _Up>
struct __apply_cv<_Tp&, _Up, true, false>
{
    typedef const _Up& type;
};

template <class _Tp, class _Up>
struct __apply_cv<_Tp&, _Up, false, true>
{
    typedef volatile _Up& type;
};

template <class _Tp, class _Up>
struct __apply_cv<_Tp&, _Up, true, true>
{
    typedef const volatile _Up& type;
};

template <class _Tp, bool = is_integral<_Tp>::value || is_enum<_Tp>::value>
struct __make_signed {};

template <class _Tp>
struct __make_signed<_Tp, true>
{
    typedef typename __find_first<__signed_types, sizeof(_Tp)>::type type;
};

template <> struct __make_signed<bool, true> {};
template <> struct __make_signed< signed short, true> {typedef short type;};
template <> struct __make_signed<unsigned short, true> {typedef short type;};
template <> struct __make_signed< signed int, true> {typedef int type;};
template <> struct __make_signed<unsigned int, true> {typedef int type;};
template <> struct __make_signed< signed long, true> {typedef long type;};
template <> struct __make_signed<unsigned long, true> {typedef long type;};
template <> struct __make_signed< signed long long, true> {typedef long long type;};
template <> struct __make_signed<unsigned long long, true> {typedef long long type;};

template <class _Tp>
struct make_signed
{
    typedef typename __apply_cv<_Tp, typename __make_signed<typename remove_cv<_Tp>::type>::type>::type type;
};

template <class _Tp> using make_signed_t = typename make_signed<_Tp>::type;

template <class _Tp, bool = is_integral<_Tp>::value || is_enum<_Tp>::value>
struct __make_unsigned {};

template <class _Tp>
struct __make_unsigned<_Tp, true>
{
    typedef typename __find_first<__unsigned_types, sizeof(_Tp)>::type type;
};

template <> struct __make_unsigned<bool, true> {};
template <> struct __make_unsigned< signed short, true> {typedef unsigned short type;};
template <> struct __make_unsigned<unsigned short, true> {typedef unsigned short type;};
template <> struct __make_unsigned< signed int, true> {typedef unsigned int type;};
template <> struct __make_unsigned<unsigned int, true> {typedef unsigned int type;};
template <> struct __make_unsigned< signed long, true> {typedef unsigned long type;};
template <> struct __make_unsigned<unsigned long, true> {typedef unsigned long type;};
template <> struct __make_unsigned< signed long long, true> {typedef unsigned long long type;};
template <> struct __make_unsigned<unsigned long long, true> {typedef unsigned long long type;};

template <class _Tp>
struct make_unsigned
{
    typedef typename __apply_cv<_Tp, typename __make_unsigned<typename remove_cv<_Tp>::type>::type>::type type;
};

template <class _Tp> using make_unsigned_t = typename make_unsigned<_Tp>::type;

template <class _Tp, class _Up, class = void>
struct __common_type2_imp {};

template <class _Tp, class _Up>
struct __common_type2_imp<_Tp, _Up,
                          typename __void_t<decltype(
                                            true ? std::__1::declval<_Tp>() : std::__1::declval<_Up>()
                                            )>::type>
{
  typedef __attribute__((nodebug)) typename decay<decltype(
                         true ? std::__1::declval<_Tp>() : std::__1::declval<_Up>()
                         )>::type type;
};

template <class, class = void>
struct __common_type_impl {};

template <class... Tp>
struct __common_types;
template <class... _Tp>
struct common_type;
template <class _Tp, class _Up>
struct __common_type_impl<
    __common_types<_Tp, _Up>,
    typename __void_t<typename common_type<_Tp, _Up>::type>::type>
{
  typedef typename common_type<_Tp, _Up>::type type;
};

template <class _Tp, class _Up, class _Vp , class... _Rest>
struct __common_type_impl<
    __common_types<_Tp, _Up, _Vp , _Rest...>,
    typename __void_t<typename common_type<_Tp, _Up>::type>::type>
    : __common_type_impl<__common_types<typename common_type<_Tp, _Up>::type,
                                        _Vp , _Rest...> > {
};

template <>
struct common_type<> {};

template <class _Tp>
struct common_type<_Tp>
    : public common_type<_Tp, _Tp> {};

template <class _Tp, class _Up>
struct common_type<_Tp, _Up>
    : conditional<
        _IsSame<_Tp, typename decay<_Tp>::type>::value && _IsSame<_Up, typename decay<_Up>::type>::value,
        __common_type2_imp<_Tp, _Up>,
        common_type<typename decay<_Tp>::type, typename decay<_Up>::type>
    >::type
{};

template <class _Tp, class _Up, class _Vp , class... _Rest>
struct
    common_type<_Tp, _Up, _Vp , _Rest...>
    : __common_type_impl<
          __common_types<_Tp, _Up, _Vp , _Rest...> > {};

template <class ..._Tp> using common_type_t = typename common_type<_Tp...>::type;

template<typename, typename _Tp> struct __select_2nd { typedef __attribute__((nodebug)) _Tp type; };

template <class _Tp, class _Arg>
typename __select_2nd<decltype((std::__1::declval<_Tp>() = std::__1::declval<_Arg>())), true_type>::type
__is_assignable_test(int);

template <class, class>
false_type __is_assignable_test(...);

template <class _Tp, class _Arg, bool = is_void<_Tp>::value || is_void<_Arg>::value>
struct __is_assignable_imp
    : public decltype((std::__1::__is_assignable_test<_Tp, _Arg>(0))) {};

template <class _Tp, class _Arg>
struct __is_assignable_imp<_Tp, _Arg, true>
    : public false_type
{
};

template <class _Tp, class _Arg>
struct is_assignable
    : public __is_assignable_imp<_Tp, _Arg> {};

template <class _Tp, class _Arg>
inline constexpr bool is_assignable_v
    = is_assignable<_Tp, _Arg>::value;

template <class _Tp> struct is_copy_assignable
    : public is_assignable<typename add_lvalue_reference<_Tp>::type,
                  typename add_lvalue_reference<typename add_const<_Tp>::type>::type> {};

template <class _Tp>
inline constexpr bool is_copy_assignable_v
    = is_copy_assignable<_Tp>::value;

template <class _Tp> struct is_move_assignable
    : public is_assignable<typename add_lvalue_reference<_Tp>::type,
                           typename add_rvalue_reference<_Tp>::type> {};

template <class _Tp>
inline constexpr bool is_move_assignable_v
    = is_move_assignable<_Tp>::value;
template <class>
struct __is_destructible_apply { typedef int type; };

template <typename _Tp>
struct __is_destructor_wellformed {
    template <typename _Tp1>
    static char __test (
        typename __is_destructible_apply<decltype(std::__1::declval<_Tp1&>().~_Tp1())>::type
    );

    template <typename _Tp1>
    static __two __test (...);

    static const bool value = sizeof(__test<_Tp>(12)) == sizeof(char);
};

template <class _Tp, bool>
struct __destructible_imp;

template <class _Tp>
struct __destructible_imp<_Tp, false>
   : public std::__1::integral_constant<bool,
        __is_destructor_wellformed<typename std::__1::remove_all_extents<_Tp>::type>::value> {};

template <class _Tp>
struct __destructible_imp<_Tp, true>
    : public std::__1::true_type {};

template <class _Tp, bool>
struct __destructible_false;

template <class _Tp>
struct __destructible_false<_Tp, false> : public __destructible_imp<_Tp, std::__1::is_reference<_Tp>::value> {};

template <class _Tp>
struct __destructible_false<_Tp, true> : public std::__1::false_type {};

template <class _Tp>
struct is_destructible
    : public __destructible_false<_Tp, std::__1::is_function<_Tp>::value> {};

template <class _Tp>
struct is_destructible<_Tp[]>
    : public std::__1::false_type {};

template <>
struct is_destructible<void>
    : public std::__1::false_type {};

template <class _Tp>
inline constexpr bool is_destructible_v
    = is_destructible<_Tp>::value;

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename remove_reference<_Tp>::type&&
move(_Tp&& __t) noexcept
{
    typedef __attribute__((nodebug)) typename remove_reference<_Tp>::type _Up;
    return static_cast<_Up&&>(__t);
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_Tp&&
forward(typename remove_reference<_Tp>::type& __t) noexcept
{
    return static_cast<_Tp&&>(__t);
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_Tp&&
forward(typename remove_reference<_Tp>::type&& __t) noexcept
{
    static_assert(!is_lvalue_reference<_Tp>::value,
                  "can not forward an rvalue as an lvalue");
    return static_cast<_Tp&&>(__t);
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename decay<_Tp>::type
__decay_copy(_Tp&& __t)
{
    return std::__1::forward<_Tp>(__t);
}

template <class _MP, bool _IsMemberFunctionPtr, bool _IsMemberObjectPtr>
struct __member_pointer_traits_imp
{
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...), true, false>
{
    typedef _Class _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...), true, false>
{
    typedef _Class _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param..., ...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) const, true, false>
{
    typedef _Class const _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) const, true, false>
{
    typedef _Class const _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param..., ...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) volatile, true, false>
{
    typedef _Class volatile _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) volatile, true, false>
{
    typedef _Class volatile _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param..., ...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) const volatile, true, false>
{
    typedef _Class const volatile _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) const volatile, true, false>
{
    typedef _Class const volatile _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param..., ...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) &, true, false>
{
    typedef _Class& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) &, true, false>
{
    typedef _Class& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param..., ...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) const&, true, false>
{
    typedef _Class const& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) const&, true, false>
{
    typedef _Class const& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param..., ...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) volatile&, true, false>
{
    typedef _Class volatile& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) volatile&, true, false>
{
    typedef _Class volatile& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param..., ...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) const volatile&, true, false>
{
    typedef _Class const volatile& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) const volatile&, true, false>
{
    typedef _Class const volatile& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param..., ...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) &&, true, false>
{
    typedef _Class&& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) &&, true, false>
{
    typedef _Class&& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param..., ...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) const&&, true, false>
{
    typedef _Class const&& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) const&&, true, false>
{
    typedef _Class const&& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param..., ...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) volatile&&, true, false>
{
    typedef _Class volatile&& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) volatile&&, true, false>
{
    typedef _Class volatile&& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param..., ...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) const volatile&&, true, false>
{
    typedef _Class const volatile&& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param...);
};

template <class _Rp, class _Class, class ..._Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) const volatile&&, true, false>
{
    typedef _Class const volatile&& _ClassType;
    typedef _Rp _ReturnType;
    typedef _Rp (_FnType) (_Param..., ...);
};

template <class _Rp, class _Class>
struct __member_pointer_traits_imp<_Rp _Class::*, false, true>
{
    typedef _Class _ClassType;
    typedef _Rp _ReturnType;
};

template <class _MP>
struct __member_pointer_traits
    : public __member_pointer_traits_imp<typename remove_cv<_MP>::type,
                    is_member_function_pointer<_MP>::value,
                    is_member_object_pointer<_MP>::value>
{

};

template <class _DecayedFp>
struct __member_pointer_class_type {};

template <class _Ret, class _ClassType>
struct __member_pointer_class_type<_Ret _ClassType::*> {
  typedef _ClassType type;
};

template <class _Callable> class result_of;

namespace __is_construct
{
struct __nat {};
}

template <class _Tp, class ..._Args>
struct is_constructible
    : public integral_constant<bool, __is_constructible(_Tp, _Args...)>
    {};
template <class _Tp, class ..._Args>
inline constexpr bool is_constructible_v
    = is_constructible<_Tp, _Args...>::value;

template <class _Tp>
struct is_default_constructible
    : public is_constructible<_Tp>
    {};

template <class _Tp>
inline constexpr bool is_default_constructible_v
    = is_default_constructible<_Tp>::value;

template <class _Tp>
void __test_implicit_default_constructible(_Tp);

template <class _Tp, class = void, bool = is_default_constructible<_Tp>::value>
struct __is_implicitly_default_constructible
    : false_type
{ };

template <class _Tp>
struct __is_implicitly_default_constructible<_Tp, decltype(__test_implicit_default_constructible<_Tp const&>({})), true>
    : true_type
{ };

template <class _Tp>
struct __is_implicitly_default_constructible<_Tp, decltype(__test_implicit_default_constructible<_Tp const&>({})), false>
    : false_type
{ };

template <class _Tp>
struct is_copy_constructible
    : public is_constructible<_Tp,
                  typename add_lvalue_reference<typename add_const<_Tp>::type>::type> {};

template <class _Tp>
inline constexpr bool is_copy_constructible_v
    = is_copy_constructible<_Tp>::value;

template <class _Tp>
struct is_move_constructible
    : public is_constructible<_Tp, typename add_rvalue_reference<_Tp>::type>
    {};

template <class _Tp>
inline constexpr bool is_move_constructible_v
    = is_move_constructible<_Tp>::value;

template <class _Tp, class... _Args>
struct is_trivially_constructible
    : integral_constant<bool, __is_trivially_constructible(_Tp, _Args...)>
{
};
template <class _Tp, class... _Args>
inline constexpr bool is_trivially_constructible_v
    = is_trivially_constructible<_Tp, _Args...>::value;

template <class _Tp> struct is_trivially_default_constructible
    : public is_trivially_constructible<_Tp>
    {};

template <class _Tp>
inline constexpr bool is_trivially_default_constructible_v
    = is_trivially_default_constructible<_Tp>::value;

template <class _Tp> struct is_trivially_copy_constructible
    : public is_trivially_constructible<_Tp, typename add_lvalue_reference<const _Tp>::type>
    {};

template <class _Tp>
inline constexpr bool is_trivially_copy_constructible_v
    = is_trivially_copy_constructible<_Tp>::value;

template <class _Tp> struct is_trivially_move_constructible
    : public is_trivially_constructible<_Tp, typename add_rvalue_reference<_Tp>::type>
    {};

template <class _Tp>
inline constexpr bool is_trivially_move_constructible_v
    = is_trivially_move_constructible<_Tp>::value;

template <class _Tp, class _Arg>
struct is_trivially_assignable
    : integral_constant<bool, __is_trivially_assignable(_Tp, _Arg)>
{
};
template <class _Tp, class _Arg>
inline constexpr bool is_trivially_assignable_v
    = is_trivially_assignable<_Tp, _Arg>::value;

template <class _Tp> struct is_trivially_copy_assignable
    : public is_trivially_assignable<typename add_lvalue_reference<_Tp>::type,
                  typename add_lvalue_reference<typename add_const<_Tp>::type>::type> {};

template <class _Tp>
inline constexpr bool is_trivially_copy_assignable_v
    = is_trivially_copy_assignable<_Tp>::value;

template <class _Tp> struct is_trivially_move_assignable
    : public is_trivially_assignable<typename add_lvalue_reference<_Tp>::type,
                                     typename add_rvalue_reference<_Tp>::type>
    {};

template <class _Tp>
inline constexpr bool is_trivially_move_assignable_v
    = is_trivially_move_assignable<_Tp>::value;

template <class _Tp> struct is_trivially_destructible
    : public integral_constant<bool, __is_trivially_destructible(_Tp)> {};
template <class _Tp>
inline constexpr bool is_trivially_destructible_v
    = is_trivially_destructible<_Tp>::value;

template <class _Tp, class... _Args>
struct is_nothrow_constructible
    : public integral_constant<bool, __is_nothrow_constructible(_Tp, _Args...)> {};
template <class _Tp, class ..._Args>
inline constexpr bool is_nothrow_constructible_v
    = is_nothrow_constructible<_Tp, _Args...>::value;

template <class _Tp> struct is_nothrow_default_constructible
    : public is_nothrow_constructible<_Tp>
    {};

template <class _Tp>
inline constexpr bool is_nothrow_default_constructible_v
    = is_nothrow_default_constructible<_Tp>::value;

template <class _Tp> struct is_nothrow_copy_constructible
    : public is_nothrow_constructible<_Tp,
                  typename add_lvalue_reference<typename add_const<_Tp>::type>::type> {};

template <class _Tp>
inline constexpr bool is_nothrow_copy_constructible_v
    = is_nothrow_copy_constructible<_Tp>::value;

template <class _Tp> struct is_nothrow_move_constructible
    : public is_nothrow_constructible<_Tp, typename add_rvalue_reference<_Tp>::type>
    {};

template <class _Tp>
inline constexpr bool is_nothrow_move_constructible_v
    = is_nothrow_move_constructible<_Tp>::value;

template <class _Tp, class _Arg>
struct is_nothrow_assignable
    : public integral_constant<bool, __is_nothrow_assignable(_Tp, _Arg)> {};
template <class _Tp, class _Arg>
inline constexpr bool is_nothrow_assignable_v
    = is_nothrow_assignable<_Tp, _Arg>::value;

template <class _Tp> struct is_nothrow_copy_assignable
    : public is_nothrow_assignable<typename add_lvalue_reference<_Tp>::type,
                  typename add_lvalue_reference<typename add_const<_Tp>::type>::type> {};

template <class _Tp>
inline constexpr bool is_nothrow_copy_assignable_v
    = is_nothrow_copy_assignable<_Tp>::value;

template <class _Tp> struct is_nothrow_move_assignable
    : public is_nothrow_assignable<typename add_lvalue_reference<_Tp>::type,
                                     typename add_rvalue_reference<_Tp>::type>
    {};

template <class _Tp>
inline constexpr bool is_nothrow_move_assignable_v
    = is_nothrow_move_assignable<_Tp>::value;

template <bool, class _Tp> struct __libcpp_is_nothrow_destructible;

template <class _Tp>
struct __libcpp_is_nothrow_destructible<false, _Tp>
    : public false_type
{
};

template <class _Tp>
struct __libcpp_is_nothrow_destructible<true, _Tp>
    : public integral_constant<bool, noexcept(std::__1::declval<_Tp>().~_Tp()) >
{
};

template <class _Tp>
struct is_nothrow_destructible
    : public __libcpp_is_nothrow_destructible<is_destructible<_Tp>::value, _Tp>
{
};

template <class _Tp, size_t _Ns>
struct is_nothrow_destructible<_Tp[_Ns]>
    : public is_nothrow_destructible<_Tp>
{
};

template <class _Tp>
struct is_nothrow_destructible<_Tp&>
    : public true_type
{
};

template <class _Tp>
struct is_nothrow_destructible<_Tp&&>
    : public true_type
{
};
template <class _Tp>
inline constexpr bool is_nothrow_destructible_v
    = is_nothrow_destructible<_Tp>::value;

template <class _Tp> struct is_pod
    : public integral_constant<bool, __is_pod(_Tp)> {};
template <class _Tp>
inline constexpr bool is_pod_v
    = is_pod<_Tp>::value;

template <class _Tp> struct is_literal_type
    : public integral_constant<bool, __is_literal_type(_Tp)>
    {};

template <class _Tp>
inline constexpr bool is_literal_type_v
    = is_literal_type<_Tp>::value;

template <class _Tp> struct is_standard_layout

    : public integral_constant<bool, __is_standard_layout(_Tp)>

    {};

template <class _Tp>
inline constexpr bool is_standard_layout_v
    = is_standard_layout<_Tp>::value;

template <class _Tp> struct is_trivially_copyable

    : public integral_constant<bool, __is_trivially_copyable(_Tp)>

    {};

template <class _Tp>
inline constexpr bool is_trivially_copyable_v
    = is_trivially_copyable<_Tp>::value;

template <class _Tp> struct is_trivial

    : public integral_constant<bool, __is_trivial(_Tp)>

    {};

template <class _Tp>
inline constexpr bool is_trivial_v
    = is_trivial<_Tp>::value;

template <class _Tp> struct __is_reference_wrapper_impl : public false_type {};
template <class _Tp> struct __is_reference_wrapper_impl<reference_wrapper<_Tp> > : public true_type {};
template <class _Tp> struct __is_reference_wrapper
    : public __is_reference_wrapper_impl<typename remove_cv<_Tp>::type> {};

template <class _Fp, class _A0,
         class _DecayFp = typename decay<_Fp>::type,
         class _DecayA0 = typename decay<_A0>::type,
         class _ClassT = typename __member_pointer_class_type<_DecayFp>::type>
using __enable_if_bullet1 = typename enable_if
    <
        is_member_function_pointer<_DecayFp>::value
        && is_base_of<_ClassT, _DecayA0>::value
    >::type;

template <class _Fp, class _A0,
         class _DecayFp = typename decay<_Fp>::type,
         class _DecayA0 = typename decay<_A0>::type>
using __enable_if_bullet2 = typename enable_if
    <
        is_member_function_pointer<_DecayFp>::value
        && __is_reference_wrapper<_DecayA0>::value
    >::type;

template <class _Fp, class _A0,
         class _DecayFp = typename decay<_Fp>::type,
         class _DecayA0 = typename decay<_A0>::type,
         class _ClassT = typename __member_pointer_class_type<_DecayFp>::type>
using __enable_if_bullet3 = typename enable_if
    <
        is_member_function_pointer<_DecayFp>::value
        && !is_base_of<_ClassT, _DecayA0>::value
        && !__is_reference_wrapper<_DecayA0>::value
    >::type;

template <class _Fp, class _A0,
         class _DecayFp = typename decay<_Fp>::type,
         class _DecayA0 = typename decay<_A0>::type,
         class _ClassT = typename __member_pointer_class_type<_DecayFp>::type>
using __enable_if_bullet4 = typename enable_if
    <
        is_member_object_pointer<_DecayFp>::value
        && is_base_of<_ClassT, _DecayA0>::value
    >::type;

template <class _Fp, class _A0,
         class _DecayFp = typename decay<_Fp>::type,
         class _DecayA0 = typename decay<_A0>::type>
using __enable_if_bullet5 = typename enable_if
    <
        is_member_object_pointer<_DecayFp>::value
        && __is_reference_wrapper<_DecayA0>::value
    >::type;

template <class _Fp, class _A0,
         class _DecayFp = typename decay<_Fp>::type,
         class _DecayA0 = typename decay<_A0>::type,
         class _ClassT = typename __member_pointer_class_type<_DecayFp>::type>
using __enable_if_bullet6 = typename enable_if
    <
        is_member_object_pointer<_DecayFp>::value
        && !is_base_of<_ClassT, _DecayA0>::value
        && !__is_reference_wrapper<_DecayA0>::value
    >::type;
template <class ..._Args>
auto __invoke(__any, _Args&& ...__args) -> __nat;

template <class ..._Args>
auto __invoke_constexpr(__any, _Args&& ...__args) -> __nat;

template <class _Fp, class _A0, class ..._Args,
          class = __enable_if_bullet1<_Fp, _A0>>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
auto
__invoke(_Fp&& __f, _A0&& __a0, _Args&& ...__args)
noexcept(noexcept((std::__1::forward<_A0>(__a0).*__f)(std::__1::forward<_Args>(__args)...))) -> decltype((std::__1::forward<_A0>(__a0).*__f)(std::__1::forward<_Args>(__args)...)) { return (std::__1::forward<_A0>(__a0).*__f)(std::__1::forward<_Args>(__args)...); }

template <class _Fp, class _A0, class ..._Args,
          class = __enable_if_bullet1<_Fp, _A0>>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr auto
__invoke_constexpr(_Fp&& __f, _A0&& __a0, _Args&& ...__args)
noexcept(noexcept((std::__1::forward<_A0>(__a0).*__f)(std::__1::forward<_Args>(__args)...))) -> decltype((std::__1::forward<_A0>(__a0).*__f)(std::__1::forward<_Args>(__args)...)) { return (std::__1::forward<_A0>(__a0).*__f)(std::__1::forward<_Args>(__args)...); }

template <class _Fp, class _A0, class ..._Args,
          class = __enable_if_bullet2<_Fp, _A0>>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
auto
__invoke(_Fp&& __f, _A0&& __a0, _Args&& ...__args)
noexcept(noexcept((__a0.get().*__f)(std::__1::forward<_Args>(__args)...))) -> decltype((__a0.get().*__f)(std::__1::forward<_Args>(__args)...)) { return (__a0.get().*__f)(std::__1::forward<_Args>(__args)...); }

template <class _Fp, class _A0, class ..._Args,
          class = __enable_if_bullet2<_Fp, _A0>>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr auto
__invoke_constexpr(_Fp&& __f, _A0&& __a0, _Args&& ...__args)
noexcept(noexcept((__a0.get().*__f)(std::__1::forward<_Args>(__args)...))) -> decltype((__a0.get().*__f)(std::__1::forward<_Args>(__args)...)) { return (__a0.get().*__f)(std::__1::forward<_Args>(__args)...); }

template <class _Fp, class _A0, class ..._Args,
          class = __enable_if_bullet3<_Fp, _A0>>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
auto
__invoke(_Fp&& __f, _A0&& __a0, _Args&& ...__args)
noexcept(noexcept(((*std::__1::forward<_A0>(__a0)).*__f)(std::__1::forward<_Args>(__args)...))) -> decltype(((*std::__1::forward<_A0>(__a0)).*__f)(std::__1::forward<_Args>(__args)...)) { return ((*std::__1::forward<_A0>(__a0)).*__f)(std::__1::forward<_Args>(__args)...); }

template <class _Fp, class _A0, class ..._Args,
          class = __enable_if_bullet3<_Fp, _A0>>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr auto
__invoke_constexpr(_Fp&& __f, _A0&& __a0, _Args&& ...__args)
noexcept(noexcept(((*std::__1::forward<_A0>(__a0)).*__f)(std::__1::forward<_Args>(__args)...))) -> decltype(((*std::__1::forward<_A0>(__a0)).*__f)(std::__1::forward<_Args>(__args)...)) { return ((*std::__1::forward<_A0>(__a0)).*__f)(std::__1::forward<_Args>(__args)...); }

template <class _Fp, class _A0,
          class = __enable_if_bullet4<_Fp, _A0>>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
auto
__invoke(_Fp&& __f, _A0&& __a0)
noexcept(noexcept(std::__1::forward<_A0>(__a0).*__f)) -> decltype(std::__1::forward<_A0>(__a0).*__f) { return std::__1::forward<_A0>(__a0).*__f; }

template <class _Fp, class _A0,
          class = __enable_if_bullet4<_Fp, _A0>>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr auto
__invoke_constexpr(_Fp&& __f, _A0&& __a0)
noexcept(noexcept(std::__1::forward<_A0>(__a0).*__f)) -> decltype(std::__1::forward<_A0>(__a0).*__f) { return std::__1::forward<_A0>(__a0).*__f; }

template <class _Fp, class _A0,
          class = __enable_if_bullet5<_Fp, _A0>>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
auto
__invoke(_Fp&& __f, _A0&& __a0)
noexcept(noexcept(__a0.get().*__f)) -> decltype(__a0.get().*__f) { return __a0.get().*__f; }

template <class _Fp, class _A0,
          class = __enable_if_bullet5<_Fp, _A0>>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr auto
__invoke_constexpr(_Fp&& __f, _A0&& __a0)
noexcept(noexcept(__a0.get().*__f)) -> decltype(__a0.get().*__f) { return __a0.get().*__f; }

template <class _Fp, class _A0,
          class = __enable_if_bullet6<_Fp, _A0>>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
auto
__invoke(_Fp&& __f, _A0&& __a0)
noexcept(noexcept((*std::__1::forward<_A0>(__a0)).*__f)) -> decltype((*std::__1::forward<_A0>(__a0)).*__f) { return (*std::__1::forward<_A0>(__a0)).*__f; }

template <class _Fp, class _A0,
          class = __enable_if_bullet6<_Fp, _A0>>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr auto
__invoke_constexpr(_Fp&& __f, _A0&& __a0)
noexcept(noexcept((*std::__1::forward<_A0>(__a0)).*__f)) -> decltype((*std::__1::forward<_A0>(__a0)).*__f) { return (*std::__1::forward<_A0>(__a0)).*__f; }

template <class _Fp, class ..._Args>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
auto
__invoke(_Fp&& __f, _Args&& ...__args)
noexcept(noexcept(std::__1::forward<_Fp>(__f)(std::__1::forward<_Args>(__args)...))) -> decltype(std::__1::forward<_Fp>(__f)(std::__1::forward<_Args>(__args)...)) { return std::__1::forward<_Fp>(__f)(std::__1::forward<_Args>(__args)...); }

template <class _Fp, class ..._Args>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr auto
__invoke_constexpr(_Fp&& __f, _Args&& ...__args)
noexcept(noexcept(std::__1::forward<_Fp>(__f)(std::__1::forward<_Args>(__args)...))) -> decltype(std::__1::forward<_Fp>(__f)(std::__1::forward<_Args>(__args)...)) { return std::__1::forward<_Fp>(__f)(std::__1::forward<_Args>(__args)...); }

template <class _Ret, class _Fp, class ..._Args>
struct __invokable_r
{
  template <class _XFp, class ..._XArgs>
  static auto __try_call(int) -> decltype(
    std::__1::__invoke(std::__1::declval<_XFp>(), std::__1::declval<_XArgs>()...));
  template <class _XFp, class ..._XArgs>
  static __nat __try_call(...);

  using _Result = decltype(__try_call<_Fp, _Args...>(0));

  using type =
  typename conditional<
      _IsNotSame<_Result, __nat>::value,
      typename conditional<
          is_void<_Ret>::value,
          true_type,
          is_convertible<_Result, _Ret>
      >::type,
      false_type
  >::type;
  static const bool value = type::value;
};
template <class _Fp, class ..._Args>
using __invokable = __invokable_r<void, _Fp, _Args...>;

template <bool _IsInvokable, bool _IsCVVoid, class _Ret, class _Fp, class ..._Args>
struct __nothrow_invokable_r_imp {
  static const bool value = false;
};

template <class _Ret, class _Fp, class ..._Args>
struct __nothrow_invokable_r_imp<true, false, _Ret, _Fp, _Args...>
{
    typedef __nothrow_invokable_r_imp _ThisT;

    template <class _Tp>
    static void __test_noexcept(_Tp) noexcept;

    static const bool value = noexcept(_ThisT::__test_noexcept<_Ret>(
        std::__1::__invoke(std::__1::declval<_Fp>(), std::__1::declval<_Args>()...)));
};

template <class _Ret, class _Fp, class ..._Args>
struct __nothrow_invokable_r_imp<true, true, _Ret, _Fp, _Args...>
{
    static const bool value = noexcept(
        std::__1::__invoke(std::__1::declval<_Fp>(), std::__1::declval<_Args>()...));
};

template <class _Ret, class _Fp, class ..._Args>
using __nothrow_invokable_r =
    __nothrow_invokable_r_imp<
            __invokable_r<_Ret, _Fp, _Args...>::value,
            is_void<_Ret>::value,
            _Ret, _Fp, _Args...
    >;

template <class _Fp, class ..._Args>
using __nothrow_invokable =
    __nothrow_invokable_r_imp<
            __invokable<_Fp, _Args...>::value,
            true, void, _Fp, _Args...
    >;

template <class _Fp, class ..._Args>
struct __invoke_of
    : public enable_if<
        __invokable<_Fp, _Args...>::value,
        typename __invokable_r<void, _Fp, _Args...>::_Result>
{
};

template <class _Fp, class ..._Args>
class result_of<_Fp(_Args...)>
    : public __invoke_of<_Fp, _Args...>
{
};

template <class _Tp> using result_of_t = typename result_of<_Tp>::type;

template <class _Fn, class... _Args>
struct invoke_result
    : __invoke_of<_Fn, _Args...>
{
};

template <class _Fn, class... _Args>
using invoke_result_t = typename invoke_result<_Fn, _Args...>::type;

template <class _Fn, class ..._Args>
struct is_invocable
    : integral_constant<bool, __invokable<_Fn, _Args...>::value> {};

template <class _Ret, class _Fn, class ..._Args>
struct is_invocable_r
    : integral_constant<bool, __invokable_r<_Ret, _Fn, _Args...>::value> {};

template <class _Fn, class ..._Args>
inline constexpr bool is_invocable_v
    = is_invocable<_Fn, _Args...>::value;

template <class _Ret, class _Fn, class ..._Args>
inline constexpr bool is_invocable_r_v
    = is_invocable_r<_Ret, _Fn, _Args...>::value;

template <class _Fn, class ..._Args>
struct is_nothrow_invocable
    : integral_constant<bool, __nothrow_invokable<_Fn, _Args...>::value> {};

template <class _Ret, class _Fn, class ..._Args>
struct is_nothrow_invocable_r
    : integral_constant<bool, __nothrow_invokable_r<_Ret, _Fn, _Args...>::value> {};

template <class _Fn, class ..._Args>
inline constexpr bool is_nothrow_invocable_v
    = is_nothrow_invocable<_Fn, _Args...>::value;

template <class _Ret, class _Fn, class ..._Args>
inline constexpr bool is_nothrow_invocable_r_v
    = is_nothrow_invocable_r<_Ret, _Fn, _Args...>::value;

template <class _Tp> struct __is_swappable;
template <class _Tp> struct __is_nothrow_swappable;

template <class _ForwardIterator1, class _ForwardIterator2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_ForwardIterator2
swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 __first2);

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))

typename enable_if
<
    is_move_constructible<_Tp>::value &&
    is_move_assignable<_Tp>::value
>::type

swap(_Tp& __x, _Tp& __y) noexcept(is_nothrow_move_constructible<_Tp>::value && is_nothrow_move_assignable<_Tp>::value)

{
    _Tp __t(std::__1::move(__x));
    __x = std::__1::move(__y);
    __y = std::__1::move(__t);
}

template<class _Tp, size_t _Np>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if<
    __is_swappable<_Tp>::value
>::type
swap(_Tp (&__a)[_Np], _Tp (&__b)[_Np]) noexcept(__is_nothrow_swappable<_Tp>::value)
{
    std::__1::swap_ranges(__a, __a + _Np, __b);
}

template <class _ForwardIterator1, class _ForwardIterator2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_ForwardIterator2
swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 __first2)
{
    for(; __first1 != __last1; ++__first1, (void) ++__first2)
        swap(*__first1, *__first2);
    return __first2;
}

template <class _ForwardIterator1, class _ForwardIterator2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void
iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)

               noexcept(noexcept(swap(*std::__1::declval<_ForwardIterator1>(), *std::__1::declval<_ForwardIterator2>())))

{
    swap(*__a, *__b);
}

namespace __detail
{

template <class _Tp, class _Up = _Tp,
          bool _NotVoid = !is_void<_Tp>::value && !is_void<_Up>::value>
struct __swappable_with
{
    template <class _LHS, class _RHS>
    static decltype(swap(std::__1::declval<_LHS>(), std::__1::declval<_RHS>()))
    __test_swap(int);
    template <class, class>
    static __nat __test_swap(long);

    typedef decltype((__test_swap<_Tp, _Up>(0))) __swap1;
    typedef decltype((__test_swap<_Up, _Tp>(0))) __swap2;

    static const bool value = _IsNotSame<__swap1, __nat>::value
                           && _IsNotSame<__swap2, __nat>::value;
};

template <class _Tp, class _Up>
struct __swappable_with<_Tp, _Up, false> : false_type {};

template <class _Tp, class _Up = _Tp, bool _Swappable = __swappable_with<_Tp, _Up>::value>
struct __nothrow_swappable_with {
  static const bool value =

      noexcept(swap(std::__1::declval<_Tp>(), std::__1::declval<_Up>()))
  && noexcept(swap(std::__1::declval<_Up>(), std::__1::declval<_Tp>()));

};

template <class _Tp, class _Up>
struct __nothrow_swappable_with<_Tp, _Up, false> : false_type {};

}

template <class _Tp>
struct __is_swappable
    : public integral_constant<bool, __detail::__swappable_with<_Tp&>::value>
{
};

template <class _Tp>
struct __is_nothrow_swappable
    : public integral_constant<bool, __detail::__nothrow_swappable_with<_Tp&>::value>
{
};

template <class _Tp, class _Up>
struct is_swappable_with
    : public integral_constant<bool, __detail::__swappable_with<_Tp, _Up>::value>
{
};

template <class _Tp>
struct is_swappable
    : public conditional<
        __is_referenceable<_Tp>::value,
        is_swappable_with<
            typename add_lvalue_reference<_Tp>::type,
            typename add_lvalue_reference<_Tp>::type>,
        false_type
    >::type
{
};

template <class _Tp, class _Up>
struct is_nothrow_swappable_with
    : public integral_constant<bool, __detail::__nothrow_swappable_with<_Tp, _Up>::value>
{
};

template <class _Tp>
struct is_nothrow_swappable
    : public conditional<
        __is_referenceable<_Tp>::value,
        is_nothrow_swappable_with<
            typename add_lvalue_reference<_Tp>::type,
            typename add_lvalue_reference<_Tp>::type>,
        false_type
    >::type
{
};

template <class _Tp, class _Up>
inline constexpr bool is_swappable_with_v
    = is_swappable_with<_Tp, _Up>::value;

template <class _Tp>
inline constexpr bool is_swappable_v
    = is_swappable<_Tp>::value;

template <class _Tp, class _Up>
inline constexpr bool is_nothrow_swappable_with_v
    = is_nothrow_swappable_with<_Tp, _Up>::value;

template <class _Tp>
inline constexpr bool is_nothrow_swappable_v
    = is_nothrow_swappable<_Tp>::value;

template <class _Tp, bool = is_enum<_Tp>::value> struct __underlying_type_impl;

template <class _Tp>
struct __underlying_type_impl<_Tp, false> {};

template <class _Tp>
struct __underlying_type_impl<_Tp, true>
{
    typedef __underlying_type(_Tp) type;
};

template <class _Tp>
struct underlying_type : __underlying_type_impl<_Tp, is_enum<_Tp>::value> {};

template <class _Tp> using underlying_type_t = typename underlying_type<_Tp>::type;

template <class _Tp, bool = is_enum<_Tp>::value>
struct __sfinae_underlying_type
{
    typedef typename underlying_type<_Tp>::type type;
    typedef decltype(((type)1) + 0) __promoted_type;
};

template <class _Tp>
struct __sfinae_underlying_type<_Tp, false> {};

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __convert_to_integral(int __val) { return __val; }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
unsigned __convert_to_integral(unsigned __val) { return __val; }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
long __convert_to_integral(long __val) { return __val; }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
unsigned long __convert_to_integral(unsigned long __val) { return __val; }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
long long __convert_to_integral(long long __val) { return __val; }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
unsigned long long __convert_to_integral(unsigned long long __val) {return __val; }

template<typename _Fp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename enable_if<is_floating_point<_Fp>::value, long long>::type
 __convert_to_integral(_Fp __val) { return __val; }
template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename __sfinae_underlying_type<_Tp>::__promoted_type
__convert_to_integral(_Tp __val) { return __val; }

template <class _Tp>
struct __has_operator_addressof_member_imp
{
    template <class _Up>
        static auto __test(int)
            -> typename __select_2nd<decltype(std::__1::declval<_Up>().operator&()), true_type>::type;
    template <class>
        static auto __test(long) -> false_type;

    static const bool value = decltype(__test<_Tp>(0))::value;
};

template <class _Tp>
struct __has_operator_addressof_free_imp
{
    template <class _Up>
        static auto __test(int)
            -> typename __select_2nd<decltype(operator&(std::__1::declval<_Up>())), true_type>::type;
    template <class>
        static auto __test(long) -> false_type;

    static const bool value = decltype(__test<_Tp>(0))::value;
};

template <class _Tp>
struct __has_operator_addressof
    : public integral_constant<bool, __has_operator_addressof_member_imp<_Tp>::value
                                  || __has_operator_addressof_free_imp<_Tp>::value>
{};

template <class...> using void_t = void;

template <class... _Args>
struct conjunction : _And<_Args...> {};
template<class... _Args>
inline constexpr bool conjunction_v
    = conjunction<_Args...>::value;

template <class... _Args>
struct disjunction : _Or<_Args...> {};
template<class... _Args>
inline constexpr bool disjunction_v
    = disjunction<_Args...>::value;

template <class _Tp>
struct negation : _Not<_Tp> {};
template<class _Tp>
inline constexpr bool negation_v
    = negation<_Tp>::value;

struct __extract_key_fail_tag {};
struct __extract_key_self_tag {};
struct __extract_key_first_tag {};

template <class _ValTy, class _Key,
          class _RawValTy = typename __unconstref<_ValTy>::type>
struct __can_extract_key
    : conditional<_IsSame<_RawValTy, _Key>::value, __extract_key_self_tag,
                  __extract_key_fail_tag>::type {};

template <class _Pair, class _Key, class _First, class _Second>
struct __can_extract_key<_Pair, _Key, pair<_First, _Second>>
    : conditional<_IsSame<typename remove_const<_First>::type, _Key>::value,
                  __extract_key_first_tag, __extract_key_fail_tag>::type {};

template <class _ValTy, class _Key, class _ContainerValueTy,
          class _RawValTy = typename __unconstref<_ValTy>::type>
struct __can_extract_map_key
    : integral_constant<bool, _IsSame<_RawValTy, _Key>::value> {};

template <class _ValTy, class _Key, class _RawValTy>
struct __can_extract_map_key<_ValTy, _Key, _Key, _RawValTy>
    : false_type {};
inline constexpr
bool __libcpp_is_constant_evaluated() noexcept { return __builtin_is_constant_evaluated(); }

template <class _CharT>
using _IsCharLikeType = _And<is_standard_layout<_CharT>, is_trivial<_CharT> >;

} }

namespace std
{
template <class _Integer>
  constexpr typename enable_if<is_integral_v<_Integer>, byte>::type &
  operator<<=(byte& __lhs, _Integer __shift) noexcept
  { return __lhs = __lhs << __shift; }

template <class _Integer>
  constexpr typename enable_if<is_integral_v<_Integer>, byte>::type
  operator<< (byte __lhs, _Integer __shift) noexcept
  { return static_cast<byte>(static_cast<unsigned char>(static_cast<unsigned int>(__lhs) << __shift)); }

template <class _Integer>
  constexpr typename enable_if<is_integral_v<_Integer>, byte>::type &
  operator>>=(byte& __lhs, _Integer __shift) noexcept
  { return __lhs = __lhs >> __shift; }

template <class _Integer>
  constexpr typename enable_if<is_integral_v<_Integer>, byte>::type
  operator>> (byte __lhs, _Integer __shift) noexcept
  { return static_cast<byte>(static_cast<unsigned char>(static_cast<unsigned int>(__lhs) >> __shift)); }

template <class _Integer>
  constexpr typename enable_if<is_integral_v<_Integer>, _Integer>::type
  to_integer(byte __b) noexcept { return static_cast<_Integer>(__b); }

}
namespace std
{

template<class _Ep>
class initializer_list
{
    const _Ep* __begin_;
    size_t __size_;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr
    initializer_list(const _Ep* __b, size_t __s) noexcept
        : __begin_(__b),
          __size_(__s)
        {}
public:
    typedef _Ep value_type;
    typedef const _Ep& reference;
    typedef const _Ep& const_reference;
    typedef size_t size_type;

    typedef const _Ep* iterator;
    typedef const _Ep* const_iterator;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr
    initializer_list() noexcept : __begin_(nullptr), __size_(0) {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr
    size_t size() const noexcept {return __size_;}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr
    const _Ep* begin() const noexcept {return __begin_;}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr
    const _Ep* end() const noexcept {return __begin_ + __size_;}
};

template<class _Ep>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr
const _Ep*
begin(initializer_list<_Ep> __il) noexcept
{
    return __il.begin();
}

template<class _Ep>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr
const _Ep*
end(initializer_list<_Ep> __il) noexcept
{
    return __il.end();
}

}
extern "C" {
               void * memcpy( void * s1, const void * s2, size_t n );

               void * memmove( void * s1, const void * s2, size_t n );

               char * strcpy( char * s1, const char * s2 );
               char * strncpy( char * s1, const char * s2, size_t n );
               char * strcat( char * s1, const char * s2 );

               char * strncat( char * s1, const char * s2, size_t n );

               int memcmp( const void * s1, const void * s2, size_t n );

               int strcmp( const char * s1, const char * s2 );
               int strcoll( const char * s1, const char * s2 );

               int strncmp( const char * s1, const char * s2, size_t n );

               size_t strxfrm( char * s1, const char * s2, size_t n );

               void * memchr( const void * s, int c, size_t n );

               char * strchr( const char * s, int c );

               size_t strcspn( const char * s1, const char * s2 );

               char * strpbrk( const char * s1, const char * s2 );

               char * strrchr( const char * s, int c );

               size_t strspn( const char * s1, const char * s2 );

               char * strstr( const char * s1, const char * s2 );
               char * strtok( char * s1, const char * s2 );

               void * memset( void * s, int c, size_t n );

               char * strerror( int errnum );

               size_t strlen( const char * s );

}
extern "C" {

char *strdup (const char *s);

static char *_strdup (const char *s)
{
    return strdup(s);
}

int _strnicmp (const char *s1, const char *s2, size_t n);
int _stricmp (const char *s1, const char *s2);

__attribute__((deprecated)) static int strnicmp (const char *s1, const char *s2, size_t n)
{
    return _strnicmp(s1, s2, n);
}

__attribute__((deprecated)) static int stricmp (const char *s1, const char *s2)
{
    return _stricmp(s1, s2);
}

}
inline static char *__nxdk_strchr (const char *__s, int __c)
{
    return static_cast<char *>(strchr(__s, __c));
}

inline static __attribute__ ((__enable_if__(true, ""))) const char *strchr (const char *__s, int __c)
{
    return __nxdk_strchr(__s, __c);
}

inline static __attribute__ ((__enable_if__(true, ""))) char *strchr (char *__s, int __c)
{
    return __nxdk_strchr(__s, __c);
}

inline static char *__nxdk_strpbrk (const char *__s1, const char *__s2)
{
    return static_cast<char *>(strpbrk(__s1, __s2));
}

inline static __attribute__ ((__enable_if__(true, ""))) const char *strpbrk (const char *__s1, const char *__s2)
{
    return __nxdk_strpbrk(__s1, __s2);
}

inline static __attribute__ ((__enable_if__(true, ""))) char *strpbrk (char *__s1, char *__s2)
{
    return __nxdk_strpbrk(__s1, __s2);
}

inline static char *__nxdk_strrchr (const char *__s, int __c)
{
    return static_cast<char *>(strrchr(__s, __c));
}

inline static __attribute__ ((__enable_if__(true, ""))) const char *strrchr (const char *__s, int __c)
{
    return __nxdk_strrchr(__s, __c);
}

inline static __attribute__ ((__enable_if__(true, ""))) char *strrchr (char *__s, int __c)
{
    return __nxdk_strrchr(__s, __c);
}

inline static void *__nxdk_memchr (const void *__s, int __c, size_t __n)
{
    return static_cast<void *>(memchr(__s, __c, __n));
}

inline static __attribute__ ((__enable_if__(true, ""))) const void *memchr (const void *__s, int __c, size_t __n)
{
    return __nxdk_memchr(__s, __c, __n);
}

inline static __attribute__ ((__enable_if__(true, ""))) void *memchr (void *__s, int __c, size_t __n)
{
    return __nxdk_memchr(__s, __c, __n);
}

inline static char *__nxdk_strstr (const char *__s1, const char *__s2)
{
    return static_cast<char *>(strstr(__s1, __s2));
}

inline static __attribute__ ((__enable_if__(true, ""))) const char *strstr (const char *__s1, const char *__s2)
{
    return __nxdk_strstr(__s1, __s2);
}

inline static __attribute__ ((__enable_if__(true, ""))) char *strstr (char *__s1, const char *__s2)
{
    return __nxdk_strstr(__s1, __s2);
}
namespace std { inline namespace __1 {

using ::size_t;
using ::memcpy;
using ::memmove;
using ::strcpy;
using ::strncpy;
using ::strcat;
using ::strncat;
using ::memcmp;
using ::strcmp;
using ::strncmp;
using ::strcoll;
using ::strxfrm;
using ::memchr;
using ::strchr;
using ::strcspn;
using ::strpbrk;
using ::strrchr;
using ::strspn;
using ::strstr;

using ::strtok;

using ::memset;
using ::strerror;
using ::strlen;

} }
namespace std { inline namespace __1 {

template <class _Tp> struct tuple_size;

template <class _Tp, class...>
using __enable_if_tuple_size_imp = _Tp;

template <class _Tp>
struct tuple_size<__enable_if_tuple_size_imp<
    const _Tp,
    typename enable_if<!is_volatile<_Tp>::value>::type,
    integral_constant<size_t, sizeof(tuple_size<_Tp>)>>>
    : public integral_constant<size_t, tuple_size<_Tp>::value> {};

template <class _Tp>
struct tuple_size<__enable_if_tuple_size_imp<
    volatile _Tp,
    typename enable_if<!is_const<_Tp>::value>::type,
    integral_constant<size_t, sizeof(tuple_size<_Tp>)>>>
    : public integral_constant<size_t, tuple_size<_Tp>::value> {};

template <class _Tp>
struct tuple_size<__enable_if_tuple_size_imp<
    const volatile _Tp,
    integral_constant<size_t, sizeof(tuple_size<_Tp>)>>>
    : public integral_constant<size_t, tuple_size<_Tp>::value> {};

template <size_t _Ip, class _Tp> struct tuple_element;

template <size_t _Ip, class _Tp>
struct tuple_element<_Ip, const _Tp>
{
    typedef __attribute__((nodebug)) typename add_const<typename tuple_element<_Ip, _Tp>::type>::type type;
};

template <size_t _Ip, class _Tp>
struct tuple_element<_Ip, volatile _Tp>
{
    typedef __attribute__((nodebug)) typename add_volatile<typename tuple_element<_Ip, _Tp>::type>::type type;
};

template <size_t _Ip, class _Tp>
struct tuple_element<_Ip, const volatile _Tp>
{
    typedef __attribute__((nodebug)) typename add_cv<typename tuple_element<_Ip, _Tp>::type>::type type;
};

template <class _Tp> struct __tuple_like : false_type {};

template <class _Tp> struct __tuple_like<const _Tp> : public __tuple_like<_Tp> {};
template <class _Tp> struct __tuple_like<volatile _Tp> : public __tuple_like<_Tp> {};
template <class _Tp> struct __tuple_like<const volatile _Tp> : public __tuple_like<_Tp> {};

template <size_t...> struct __tuple_indices {};

template <class _IdxType, _IdxType... _Values>
struct __integer_sequence {
  template <template <class _OIdxType, _OIdxType...> class _ToIndexSeq, class _ToIndexType>
  using __convert = _ToIndexSeq<_ToIndexType, _Values...>;

  template <size_t _Sp>
  using __to_tuple_indices = __tuple_indices<(_Values + _Sp)...>;
};

template <size_t _Ep, size_t _Sp>
using __make_indices_imp =
    typename __make_integer_seq<__integer_sequence, size_t, _Ep - _Sp>::template
    __to_tuple_indices<_Sp>;

template <size_t _Ep, size_t _Sp = 0>
struct __make_tuple_indices
{
    static_assert(_Sp <= _Ep, "__make_tuple_indices input error");
    typedef __make_indices_imp<_Ep, _Sp> type;
};

template <class ..._Tp> class tuple;

template <class... _Tp> struct __tuple_like<tuple<_Tp...> > : true_type {};

template <class ..._Tp>
struct tuple_size<tuple<_Tp...> >
    : public integral_constant<size_t, sizeof...(_Tp)>
{
};

template <size_t _Ip, class ..._Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename tuple_element<_Ip, tuple<_Tp...> >::type&
get(tuple<_Tp...>&) noexcept;

template <size_t _Ip, class ..._Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
const typename tuple_element<_Ip, tuple<_Tp...> >::type&
get(const tuple<_Tp...>&) noexcept;

template <size_t _Ip, class ..._Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename tuple_element<_Ip, tuple<_Tp...> >::type&&
get(tuple<_Tp...>&&) noexcept;

template <size_t _Ip, class ..._Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
const typename tuple_element<_Ip, tuple<_Tp...> >::type&&
get(const tuple<_Tp...>&&) noexcept;

template <class _T1, class _T2> struct __tuple_like<pair<_T1, _T2> > : true_type {};

template <size_t _Ip, class _T1, class _T2>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename tuple_element<_Ip, pair<_T1, _T2> >::type&
get(pair<_T1, _T2>&) noexcept;

template <size_t _Ip, class _T1, class _T2>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
const typename tuple_element<_Ip, pair<_T1, _T2> >::type&
get(const pair<_T1, _T2>&) noexcept;

template <size_t _Ip, class _T1, class _T2>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename tuple_element<_Ip, pair<_T1, _T2> >::type&&
get(pair<_T1, _T2>&&) noexcept;

template <size_t _Ip, class _T1, class _T2>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
const typename tuple_element<_Ip, pair<_T1, _T2> >::type&&
get(const pair<_T1, _T2>&&) noexcept;

template <class _Tp, size_t _Size> struct array;

template <class _Tp, size_t _Size> struct __tuple_like<array<_Tp, _Size> > : true_type {};

template <size_t _Ip, class _Tp, size_t _Size>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_Tp&
get(array<_Tp, _Size>&) noexcept;

template <size_t _Ip, class _Tp, size_t _Size>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
const _Tp&
get(const array<_Tp, _Size>&) noexcept;

template <size_t _Ip, class _Tp, size_t _Size>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_Tp&&
get(array<_Tp, _Size>&&) noexcept;

template <size_t _Ip, class _Tp, size_t _Size>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
const _Tp&&
get(const array<_Tp, _Size>&&) noexcept;

template <class ..._Tp> struct __tuple_types {};
template <size_t _Ip, class ..._Types>
struct tuple_element<_Ip, __tuple_types<_Types...>>
{
    static_assert(_Ip < sizeof...(_Types), "tuple_element index out of range");
    typedef __attribute__((nodebug)) __type_pack_element<_Ip, _Types...> type;
};

template <class ..._Tp>
struct tuple_size<__tuple_types<_Tp...> >
    : public integral_constant<size_t, sizeof...(_Tp)>
{
};

template <class... _Tp> struct __tuple_like<__tuple_types<_Tp...> > : true_type {};

template <bool _ApplyLV, bool _ApplyConst, bool _ApplyVolatile>
struct __apply_cv_mf;
template <>
struct __apply_cv_mf<false, false, false> {
  template <class _Tp> using __apply = _Tp;
};
template <>
struct __apply_cv_mf<false, true, false> {
  template <class _Tp> using __apply __attribute__((nodebug)) = const _Tp;
};
template <>
struct __apply_cv_mf<false, false, true> {
  template <class _Tp> using __apply __attribute__((nodebug)) = volatile _Tp;
};
template <>
struct __apply_cv_mf<false, true, true> {
  template <class _Tp> using __apply __attribute__((nodebug)) = const volatile _Tp;
};
template <>
struct __apply_cv_mf<true, false, false> {
  template <class _Tp> using __apply __attribute__((nodebug)) = _Tp&;
};
template <>
struct __apply_cv_mf<true, true, false> {
  template <class _Tp> using __apply __attribute__((nodebug)) = const _Tp&;
};
template <>
struct __apply_cv_mf<true, false, true> {
  template <class _Tp> using __apply __attribute__((nodebug)) = volatile _Tp&;
};
template <>
struct __apply_cv_mf<true, true, true> {
  template <class _Tp> using __apply __attribute__((nodebug)) = const volatile _Tp&;
};
template <class _Tp, class _RawTp = typename remove_reference<_Tp>::type>
using __apply_cv_t __attribute__((nodebug)) = __apply_cv_mf<
    is_lvalue_reference<_Tp>::value,
    is_const<_RawTp>::value,
    is_volatile<_RawTp>::value>;
template <class _TupleTypes, class _TupleIndices>
struct __make_tuple_types_flat;

template <template <class...> class _Tuple, class ..._Types, size_t ..._Idx>
struct __make_tuple_types_flat<_Tuple<_Types...>, __tuple_indices<_Idx...>> {

  template <class _Tp, class _ApplyFn = __apply_cv_t<_Tp>>
  using __apply_quals __attribute__((nodebug)) = __tuple_types<
      typename _ApplyFn::template __apply<__type_pack_element<_Idx, _Types...>>...
    >;
};

template <class _Vt, size_t _Np, size_t ..._Idx>
struct __make_tuple_types_flat<array<_Vt, _Np>, __tuple_indices<_Idx...>> {
  template <size_t>
  using __value_type = _Vt;
  template <class _Tp, class _ApplyFn = __apply_cv_t<_Tp>>
  using __apply_quals = __tuple_types<
      typename _ApplyFn::template __apply<__value_type<_Idx>>...
    >;
};

template <class _Tp, size_t _Ep = tuple_size<typename remove_reference<_Tp>::type>::value,
          size_t _Sp = 0,
          bool _SameSize = (_Ep == tuple_size<typename remove_reference<_Tp>::type>::value)>
struct __make_tuple_types
{
    static_assert(_Sp <= _Ep, "__make_tuple_types input error");
    using _RawTp = typename remove_cv<typename remove_reference<_Tp>::type>::type;
    using _Maker = __make_tuple_types_flat<_RawTp, typename __make_tuple_indices<_Ep, _Sp>::type>;
    using type = typename _Maker::template __apply_quals<_Tp>;
};

template <class ..._Types, size_t _Ep>
struct __make_tuple_types<tuple<_Types...>, _Ep, 0, true> {
  typedef __attribute__((nodebug)) __tuple_types<_Types...> type;
};

template <class ..._Types, size_t _Ep>
struct __make_tuple_types<__tuple_types<_Types...>, _Ep, 0, true> {
  typedef __attribute__((nodebug)) __tuple_types<_Types...> type;
};

template <bool ..._Preds>
struct __all_dummy;

template <bool ..._Pred>
using __all = _IsSame<__all_dummy<_Pred...>, __all_dummy<((void)_Pred, true)...>>;

struct __tuple_sfinae_base {
  template <template <class, class...> class _Trait,
            class ..._LArgs, class ..._RArgs>
  static auto __do_test(__tuple_types<_LArgs...>, __tuple_types<_RArgs...>)
    -> __all<typename enable_if<_Trait<_LArgs, _RArgs>::value, bool>::type{true}...>;
  template <template <class...> class>
  static auto __do_test(...) -> false_type;

  template <class _FromArgs, class _ToArgs>
  using __constructible = decltype(__do_test<is_constructible>(_ToArgs{}, _FromArgs{}));
  template <class _FromArgs, class _ToArgs>
  using __convertible = decltype(__do_test<is_convertible>(_FromArgs{}, _ToArgs{}));
  template <class _FromArgs, class _ToArgs>
  using __assignable = decltype(__do_test<is_assignable>(_ToArgs{}, _FromArgs{}));
};

template <class _Tp, class _Up, bool = __tuple_like<typename remove_reference<_Tp>::type>::value,
                                bool = __tuple_like<_Up>::value>
struct __tuple_convertible
    : public false_type {};

template <class _Tp, class _Up>
struct __tuple_convertible<_Tp, _Up, true, true>
    : public __tuple_sfinae_base::__convertible<
      typename __make_tuple_types<_Tp>::type
    , typename __make_tuple_types<_Up>::type
    >
{};

template <class _Tp, class _Up, bool = __tuple_like<typename remove_reference<_Tp>::type>::value,
                                bool = __tuple_like<_Up>::value>
struct __tuple_constructible
    : public false_type {};

template <class _Tp, class _Up>
struct __tuple_constructible<_Tp, _Up, true, true>
    : public __tuple_sfinae_base::__constructible<
      typename __make_tuple_types<_Tp>::type
    , typename __make_tuple_types<_Up>::type
    >
{};

template <class _Tp, class _Up, bool = __tuple_like<typename remove_reference<_Tp>::type>::value,
                                bool = __tuple_like<_Up>::value>
struct __tuple_assignable
    : public false_type {};

template <class _Tp, class _Up>
struct __tuple_assignable<_Tp, _Up, true, true>
    : public __tuple_sfinae_base::__assignable<
      typename __make_tuple_types<_Tp>::type
    , typename __make_tuple_types<_Up&>::type
    >
{};

template <size_t _Ip, class ..._Tp>
struct tuple_element<_Ip, tuple<_Tp...> >
{
    typedef __attribute__((nodebug)) typename tuple_element<_Ip, __tuple_types<_Tp...> >::type type;
};

template <size_t _Ip, class ..._Tp>
using tuple_element_t __attribute__((nodebug)) = typename tuple_element <_Ip, _Tp...>::type;

template <bool _IsTuple, class _SizeTrait, size_t _Expected>
struct __tuple_like_with_size_imp : false_type {};

template <class _SizeTrait, size_t _Expected>
struct __tuple_like_with_size_imp<true, _SizeTrait, _Expected>
    : integral_constant<bool, _SizeTrait::value == _Expected> {};

template <class _Tuple, size_t _ExpectedSize,
          class _RawTuple = typename __uncvref<_Tuple>::type>
using __tuple_like_with_size __attribute__((nodebug)) = __tuple_like_with_size_imp<
                                   __tuple_like<_RawTuple>::value,
                                   tuple_size<_RawTuple>, _ExpectedSize
                              >;

struct __check_tuple_constructor_fail {

    static constexpr bool __enable_explicit_default() { return false; }
    static constexpr bool __enable_implicit_default() { return false; }
    template <class ...>
    static constexpr bool __enable_explicit() { return false; }
    template <class ...>
    static constexpr bool __enable_implicit() { return false; }
    template <class ...>
    static constexpr bool __enable_assign() { return false; }
};

template <bool _CanCopy, bool _CanMove>
struct __sfinae_ctor_base {};
template <>
struct __sfinae_ctor_base<false, false> {
  __sfinae_ctor_base() = default;
  __sfinae_ctor_base(__sfinae_ctor_base const&) = delete;
  __sfinae_ctor_base(__sfinae_ctor_base &&) = delete;
  __sfinae_ctor_base& operator=(__sfinae_ctor_base const&) = default;
  __sfinae_ctor_base& operator=(__sfinae_ctor_base&&) = default;
};
template <>
struct __sfinae_ctor_base<true, false> {
  __sfinae_ctor_base() = default;
  __sfinae_ctor_base(__sfinae_ctor_base const&) = default;
  __sfinae_ctor_base(__sfinae_ctor_base &&) = delete;
  __sfinae_ctor_base& operator=(__sfinae_ctor_base const&) = default;
  __sfinae_ctor_base& operator=(__sfinae_ctor_base&&) = default;
};
template <>
struct __sfinae_ctor_base<false, true> {
  __sfinae_ctor_base() = default;
  __sfinae_ctor_base(__sfinae_ctor_base const&) = delete;
  __sfinae_ctor_base(__sfinae_ctor_base &&) = default;
  __sfinae_ctor_base& operator=(__sfinae_ctor_base const&) = default;
  __sfinae_ctor_base& operator=(__sfinae_ctor_base&&) = default;
};

template <bool _CanCopy, bool _CanMove>
struct __sfinae_assign_base {};
template <>
struct __sfinae_assign_base<false, false> {
  __sfinae_assign_base() = default;
  __sfinae_assign_base(__sfinae_assign_base const&) = default;
  __sfinae_assign_base(__sfinae_assign_base &&) = default;
  __sfinae_assign_base& operator=(__sfinae_assign_base const&) = delete;
  __sfinae_assign_base& operator=(__sfinae_assign_base&&) = delete;
};
template <>
struct __sfinae_assign_base<true, false> {
  __sfinae_assign_base() = default;
  __sfinae_assign_base(__sfinae_assign_base const&) = default;
  __sfinae_assign_base(__sfinae_assign_base &&) = default;
  __sfinae_assign_base& operator=(__sfinae_assign_base const&) = default;
  __sfinae_assign_base& operator=(__sfinae_assign_base&&) = delete;
};
template <>
struct __sfinae_assign_base<false, true> {
  __sfinae_assign_base() = default;
  __sfinae_assign_base(__sfinae_assign_base const&) = default;
  __sfinae_assign_base(__sfinae_assign_base &&) = default;
  __sfinae_assign_base& operator=(__sfinae_assign_base const&) = delete;
  __sfinae_assign_base& operator=(__sfinae_assign_base&&) = default;
};

} }
extern "C" {
typedef _PDCLIB_int8_t int8_t;
typedef _PDCLIB_int16_t int16_t;
typedef _PDCLIB_int32_t int32_t;
typedef _PDCLIB_int64_t int64_t;

typedef _PDCLIB_uint8_t uint8_t;
typedef _PDCLIB_uint16_t uint16_t;
typedef _PDCLIB_uint32_t uint32_t;
typedef _PDCLIB_uint64_t uint64_t;
typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;

typedef _PDCLIB_int_fast8_t int_fast8_t;
typedef _PDCLIB_int_fast16_t int_fast16_t;
typedef _PDCLIB_int_fast32_t int_fast32_t;
typedef _PDCLIB_int_fast64_t int_fast64_t;

typedef _PDCLIB_uint_fast8_t uint_fast8_t;
typedef _PDCLIB_uint_fast16_t uint_fast16_t;
typedef _PDCLIB_uint_fast32_t uint_fast32_t;
typedef _PDCLIB_uint_fast64_t uint_fast64_t;

typedef _PDCLIB_intptr_t intptr_t;
typedef _PDCLIB_uintptr_t uintptr_t;

typedef _PDCLIB_intmax_t intmax_t;
typedef _PDCLIB_uintmax_t uintmax_t;
}
namespace std { inline namespace __1 {

using::int8_t;
using::int16_t;
using::int32_t;
using::int64_t;

using::uint8_t;
using::uint16_t;
using::uint32_t;
using::uint64_t;

using::int_least8_t;
using::int_least16_t;
using::int_least32_t;
using::int_least64_t;

using::uint_least8_t;
using::uint_least16_t;
using::uint_least32_t;
using::uint_least64_t;

using::int_fast8_t;
using::int_fast16_t;
using::int_fast32_t;
using::int_fast64_t;

using::uint_fast8_t;
using::uint_fast16_t;
using::uint_fast32_t;
using::uint_fast64_t;

using::intptr_t;
using::uintptr_t;

using::intmax_t;
using::uintmax_t;

} }
extern "C++" {

using std::nullptr_t;
}

typedef long double max_align_t;
extern "C" {

typedef _PDCLIB_wint_t wint_t;

typedef int wctrans_t;
typedef int wctype_t;
               int iswalnum( wint_t wc );

               int iswalpha( wint_t wc );

               int iswblank( wint_t wc );

               int iswcntrl( wint_t wc );

               int iswdigit( wint_t wc );

               int iswgraph( wint_t wc );

               int iswlower( wint_t wc );

               int iswprint( wint_t wc );

               int iswpunct( wint_t wc );

               int iswspace( wint_t wc );

               int iswupper( wint_t wc );

               int iswxdigit( wint_t wc );

               int iswctype( wint_t wc, wctype_t desc );
               wctype_t wctype( const char * property );

               wint_t towlower( wint_t wc );

               wint_t towupper( wint_t wc );

               wint_t towctrans( wint_t wc, wctrans_t desc );
               wctrans_t wctrans( const char * property );
}
typedef struct XBOXRT_mbstate {
    union {
        uint64_t _St64[15];
        uint32_t _St32[31];
        uint16_t _St16[62];
        unsigned char _StUC[124];
        signed char _StSC[124];
                 char _StC [124];
    };
    uint16_t _Surrogate;
    unsigned char _PendState;
             char _PendChar;
} XBOXRT_mbstate_t;

typedef XBOXRT_mbstate_t mbstate_t;

struct tm;

extern "C" {

int mbsinit( const mbstate_t * ps );

size_t mbrlen(const char *s, size_t n, mbstate_t *ps);
wint_t btowc(int c);
int wctob(wint_t c);

}

namespace std { inline namespace __1 {

class ios_base;

template<class _CharT> struct char_traits;
template<> struct char_traits<char>;

template<> struct char_traits<char16_t>;
template<> struct char_traits<char32_t>;

template<class _Tp> class allocator;

template <class _CharT, class _Traits = char_traits<_CharT> >
    class basic_ios;

template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
    class basic_stringbuf;

template <class _CharT, class _Traits = char_traits<_CharT> >
    class basic_filebuf;
typedef basic_ios<char> ios;

typedef basic_stringbuf<char> stringbuf;

typedef basic_filebuf<char> filebuf;

template <class _State> class fpos;
typedef fpos<mbstate_t> streampos;

typedef long long streamoff;

template <class _CharT,
          class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
    class basic_string;
typedef basic_string<char, char_traits<char>, allocator<char> > string;

template <class _Tp, class _Alloc = allocator<_Tp> >
class vector;

} }
extern "C" {
               double atof( const char * nptr );
               double strtod( const char * nptr, char * * endptr );
               float strtof( const char * nptr, char * * endptr );
               long double strtold( const char * nptr, char * * endptr );
               long int strtol( const char * nptr, char * * endptr, int base );
               long long int strtoll( const char * nptr, char * * endptr, int base );
               unsigned long int strtoul( const char * nptr, char * * endptr, int base );
               unsigned long long int strtoull( const char * nptr, char * * endptr, int base );
               int atoi( const char * nptr );
               long int atol( const char * nptr );
               long long int atoll( const char * nptr );

extern unsigned long int _PDCLIB_seed;
               int rand( void );

               void srand( unsigned int seed );

               void * malloc( size_t size );

               void * calloc( size_t nmemb, size_t size );

               void * aligned_alloc( size_t alignment, size_t size );

               void free( void * ptr );
               void * realloc( void * ptr, size_t size );
                                void abort( void );

               int at_quick_exit( void (*func)( void ) );

               int atexit( void (*func)( void ) );

                                void exit( int status );

                                void quick_exit( int status );

                                void _Exit( int status );
               char * getenv( const char * name );

               int system( const char * string );
               void * bsearch( const void * key, const void * base, size_t nmemb, size_t size, int (*compar)( const void *, const void * ) );
               void qsort( void * base, size_t nmemb, size_t size, int (*compar)( const void *, const void * ) );

               int abs( int j );
               long int labs( long int j );
               long long int llabs( long long int j );

typedef struct _PDCLIB_div_t div_t;
typedef struct _PDCLIB_ldiv_t ldiv_t;
typedef struct _PDCLIB_lldiv_t lldiv_t;

               div_t div( int numer, int denom );
               ldiv_t ldiv( long int numer, long int denom );
               lldiv_t lldiv( long long int numer, long long int denom );
}
extern "C" {

unsigned short _byteswap_ushort (unsigned short val);
unsigned long _byteswap_ulong (unsigned long val);
unsigned __int64 _byteswap_uint64 (unsigned __int64 val);

typedef void (__cdecl *_purecall_handler)(void);

_purecall_handler __cdecl _get_purecall_handler (void);
_purecall_handler __cdecl _set_purecall_handler (_purecall_handler function);
}
inline static long abs (long __x) noexcept
{
    return labs(__x);
}

inline static long long abs (long long __x) noexcept
{
    return llabs(__x);
}

inline static ldiv_t div (long __x, long __y) noexcept
{
    return ldiv(__x, __y);
}

inline static lldiv_t div (long long __x, long long __y) noexcept
{
    return lldiv(__x, __y);
}

static void *_aligned_malloc (size_t size, size_t alignment)
{
    return aligned_alloc(alignment, size);
}

static void _aligned_free (void *memblock)
{
    free(memblock);
}
extern "C" {

typedef float float_t;
typedef double double_t;
double acos(double x);
float acosf(float x);
long double acosl(long double x);

double asin(double x);
float asinf(float x);
long double asinl(long double x);

double atan(double x);
float atanf(float x);
long double atanl(long double x);

double atan2(double y, double x);
float atan2f(float y, float x);
long double atan2l(long double y, long double x);

double cos(double x);
float cosf(float x);
long double cosl(long double x);

double sin(double x);
float sinf(float x);
long double sinl(long double x);

double tan(double x);
float tanf(float x);
long double tanl(long double x);

double acosh(double x);
float acoshf(float x);
long double acoshl(long double x);

double asinh(double x);
float asinhf(float x);
long double asinhl(long double x);

double atanh(double x);
float atanhf(float x);
long double atanhl(long double x);

double cosh(double x);
float coshf(float x);
long double coshl(long double x);

double sinh(double x);
float sinhf(float x);
long double sinhl(long double x);

double tanh(double x);
float tanhf(float x);
long double tanhl(long double x);

double exp(double x);
float expf(float x);
long double expl(long double x);

double exp2(double x);
float exp2f(float x);
long double exp2l(long double x);

double expm1(double x);
float expm1f(float x);
long double expm1l(long double x);

double frexp(double value, int *exp);
float frexpf(float value, int *exp);
long double frexpl(long double value, int *exp);

int ilogb(double x);
int ilogbf(float x);
int ilogbl(long double x);

double ldexp(double x, int exp);
float ldexpf(float x, int exp);
long double ldexpl(long double x, int exp);

double log(double x);
float logf(float x);
long double logl(long double x);

double log10(double x);
float log10f(float x);
long double log10l(long double x);

double log1p(double x);
float log1pf(float x);
long double log1pl(long double x);

double log2(double x);
float log2f(float x);
long double log2l(long double x);

double logb(double x);
float logbf(float x);
long double logbl(long double x);

double modf(double value, double *iptr);
float modff(float value, float *iptr);
long double modfl(long double value, long double *iptr);

double scalbn(double x, int n);
float scalbnf(float x, int n);
long double scalbnl(long double x, int n);
double scalbln(double x, long int n);
float scalblnf(float x, long int n);
long double scalblnl(long double x, long int n);

double cbrt(double x);
float cbrtf(float x);
long double cbrtl(long double x);

double fabs(double x);
float fabsf(float x);
long double fabsl(long double x);

double hypot(double x, double y);
float hypotf(float x, float y);
long double hypotl(long double x, long double y);

double pow(double x, double y);
float powf(float x, float y);
long double powl(long double x, long double y);

double sqrt(double x);
float sqrtf(float x);
long double sqrtl(long double x);

double erf(double x);
float erff(float x);
long double erfl(long double x);

double erfc(double x);
float erfcf(float x);
long double erfcl(long double x);

double lgamma(double x);
float lgammaf(float x);
long double lgammal(long double x);

double tgamma(double x);
float tgammaf(float x);
long double tgammal(long double x);

double ceil(double x);
float ceilf(float x);
long double ceill(long double x);

double floor(double x);
float floorf(float x);
long double floorl(long double x);

double nearbyint(double x);
float nearbyintf(float x);
long double nearbyintl(long double x);

double rint(double x);
float rintf(float x);
long double rintl(long double x);

long int lrint(double x);
long int lrintf(float x);
long int lrintl(long double x);
long long int llrint(double x);
long long int llrintf(float x);
long long int llrintl(long double x);

double round(double x);
float roundf(float x);
long double roundl(long double x);

long int lround(double x);
long int lroundf(float x);
long int lroundl(long double x);
long long int llround(double x);
long long int llroundf(float x);
long long int llroundl(long double x);

double trunc(double x);
float truncf(float x);
long double truncl(long double x);

double fmod(double x, double y);
float fmodf(float x, float y);
long double fmodl(long double x, long double y);

double remainder(double x, double y);
float remainderf(float x, float y);
long double remainderl(long double x, long double y);

double remquo(double x, double y, int *quo);
float remquof(float x, float y, int *quo);
long double remquol(long double x, long double y, int *quo);

double copysign(double x, double y);
float copysignf(float x, float y);
long double copysignl(long double x, long double y);

double nan(const char *tagp);
float nanf(const char *tagp);
long double nanl(const char *tagp);

double nextafter(double x, double y);
float nextafterf(float x, float y);
long double nextafterl(long double x, long double y);

double nexttoward(double x, long double y);
float nexttowardf(float x, long double y);
long double nexttowardl(long double x, long double y);

double fdim(double x, double y);
float fdimf(float x, float y);
long double fdiml(long double x, long double y);

double fmax(double x, double y);
float fmaxf(float x, float y);
long double fmaxl(long double x, long double y);

double fmin(double x, double y);
float fminf(float x, float y);
long double fminl(long double x, long double y);

double fma(double x, double y, double z);
float fmaf(float x, float y, float z);
long double fmal(long double x, long double y, long double z);

}
extern "C++" {
namespace std { inline namespace __1 {

enum float_round_style
{
    round_indeterminate = -1,
    round_toward_zero = 0,
    round_to_nearest = 1,
    round_toward_infinity = 2,
    round_toward_neg_infinity = 3
};

enum float_denorm_style
{
    denorm_indeterminate = -1,
    denorm_absent = 0,
    denorm_present = 1
};

template <class _Tp, bool = is_arithmetic<_Tp>::value>
class __libcpp_numeric_limits
{
protected:
    typedef _Tp type;

    static constexpr const bool is_specialized = false;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type min() noexcept {return type();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type max() noexcept {return type();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type lowest() noexcept {return type();}

    static constexpr const int digits = 0;
    static constexpr const int digits10 = 0;
    static constexpr const int max_digits10 = 0;
    static constexpr const bool is_signed = false;
    static constexpr const bool is_integer = false;
    static constexpr const bool is_exact = false;
    static constexpr const int radix = 0;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type epsilon() noexcept {return type();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type round_error() noexcept {return type();}

    static constexpr const int min_exponent = 0;
    static constexpr const int min_exponent10 = 0;
    static constexpr const int max_exponent = 0;
    static constexpr const int max_exponent10 = 0;

    static constexpr const bool has_infinity = false;
    static constexpr const bool has_quiet_NaN = false;
    static constexpr const bool has_signaling_NaN = false;
    static constexpr const float_denorm_style has_denorm = denorm_absent;
    static constexpr const bool has_denorm_loss = false;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type infinity() noexcept {return type();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type quiet_NaN() noexcept {return type();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type signaling_NaN() noexcept {return type();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type denorm_min() noexcept {return type();}

    static constexpr const bool is_iec559 = false;
    static constexpr const bool is_bounded = false;
    static constexpr const bool is_modulo = false;

    static constexpr const bool traps = false;
    static constexpr const bool tinyness_before = false;
    static constexpr const float_round_style round_style = round_toward_zero;
};

template <class _Tp, int __digits, bool _IsSigned>
struct __libcpp_compute_min
{
    static constexpr const _Tp value = _Tp(_Tp(1) << __digits);
};

template <class _Tp, int __digits>
struct __libcpp_compute_min<_Tp, __digits, false>
{
    static constexpr const _Tp value = _Tp(0);
};

template <class _Tp>
class __libcpp_numeric_limits<_Tp, true>
{
protected:
    typedef _Tp type;

    static constexpr const bool is_specialized = true;

    static constexpr const bool is_signed = type(-1) < type(0);
    static constexpr const int digits = static_cast<int>(sizeof(type) * 8 - is_signed);
    static constexpr const int digits10 = digits * 3 / 10;
    static constexpr const int max_digits10 = 0;
    static constexpr const type __min = __libcpp_compute_min<type, digits, is_signed>::value;
    static constexpr const type __max = is_signed ? type(type(~0) ^ __min) : type(~0);
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type min() noexcept {return __min;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type max() noexcept {return __max;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type lowest() noexcept {return min();}

    static constexpr const bool is_integer = true;
    static constexpr const bool is_exact = true;
    static constexpr const int radix = 2;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type epsilon() noexcept {return type(0);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type round_error() noexcept {return type(0);}

    static constexpr const int min_exponent = 0;
    static constexpr const int min_exponent10 = 0;
    static constexpr const int max_exponent = 0;
    static constexpr const int max_exponent10 = 0;

    static constexpr const bool has_infinity = false;
    static constexpr const bool has_quiet_NaN = false;
    static constexpr const bool has_signaling_NaN = false;
    static constexpr const float_denorm_style has_denorm = denorm_absent;
    static constexpr const bool has_denorm_loss = false;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type infinity() noexcept {return type(0);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type quiet_NaN() noexcept {return type(0);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type signaling_NaN() noexcept {return type(0);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type denorm_min() noexcept {return type(0);}

    static constexpr const bool is_iec559 = false;
    static constexpr const bool is_bounded = true;
    static constexpr const bool is_modulo = !std::__1::is_signed<_Tp>::value;

    static constexpr const bool traps = true;

    static constexpr const bool tinyness_before = false;
    static constexpr const float_round_style round_style = round_toward_zero;
};

template <>
class __libcpp_numeric_limits<bool, true>
{
protected:
    typedef bool type;

    static constexpr const bool is_specialized = true;

    static constexpr const bool is_signed = false;
    static constexpr const int digits = 1;
    static constexpr const int digits10 = 0;
    static constexpr const int max_digits10 = 0;
    static constexpr const type __min = false;
    static constexpr const type __max = true;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type min() noexcept {return __min;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type max() noexcept {return __max;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type lowest() noexcept {return min();}

    static constexpr const bool is_integer = true;
    static constexpr const bool is_exact = true;
    static constexpr const int radix = 2;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type epsilon() noexcept {return type(0);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type round_error() noexcept {return type(0);}

    static constexpr const int min_exponent = 0;
    static constexpr const int min_exponent10 = 0;
    static constexpr const int max_exponent = 0;
    static constexpr const int max_exponent10 = 0;

    static constexpr const bool has_infinity = false;
    static constexpr const bool has_quiet_NaN = false;
    static constexpr const bool has_signaling_NaN = false;
    static constexpr const float_denorm_style has_denorm = denorm_absent;
    static constexpr const bool has_denorm_loss = false;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type infinity() noexcept {return type(0);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type quiet_NaN() noexcept {return type(0);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type signaling_NaN() noexcept {return type(0);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type denorm_min() noexcept {return type(0);}

    static constexpr const bool is_iec559 = false;
    static constexpr const bool is_bounded = true;
    static constexpr const bool is_modulo = false;

    static constexpr const bool traps = false;
    static constexpr const bool tinyness_before = false;
    static constexpr const float_round_style round_style = round_toward_zero;
};

template <>
class __libcpp_numeric_limits<float, true>
{
protected:
    typedef float type;

    static constexpr const bool is_specialized = true;

    static constexpr const bool is_signed = true;
    static constexpr const int digits = 24;
    static constexpr const int digits10 = 6;
    static constexpr const int max_digits10 = 2+(digits * 30103l)/100000l;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type min() noexcept {return 1.17549435e-38F;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type max() noexcept {return 3.40282347e+38F;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type lowest() noexcept {return -max();}

    static constexpr const bool is_integer = false;
    static constexpr const bool is_exact = false;
    static constexpr const int radix = 2;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type epsilon() noexcept {return 1.19209290e-7F;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type round_error() noexcept {return 0.5F;}

    static constexpr const int min_exponent = (-125);
    static constexpr const int min_exponent10 = (-37);
    static constexpr const int max_exponent = 128;
    static constexpr const int max_exponent10 = 38;

    static constexpr const bool has_infinity = true;
    static constexpr const bool has_quiet_NaN = true;
    static constexpr const bool has_signaling_NaN = true;
    static constexpr const float_denorm_style has_denorm = denorm_present;
    static constexpr const bool has_denorm_loss = false;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type infinity() noexcept {return __builtin_huge_valf();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type quiet_NaN() noexcept {return __builtin_nanf("");}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type signaling_NaN() noexcept {return __builtin_nansf("");}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type denorm_min() noexcept {return 1.40129846e-45F;}

    static constexpr const bool is_iec559 = true;
    static constexpr const bool is_bounded = true;
    static constexpr const bool is_modulo = false;

    static constexpr const bool traps = false;
    static constexpr const bool tinyness_before = false;
    static constexpr const float_round_style round_style = round_to_nearest;
};

template <>
class __libcpp_numeric_limits<double, true>
{
protected:
    typedef double type;

    static constexpr const bool is_specialized = true;

    static constexpr const bool is_signed = true;
    static constexpr const int digits = 53;
    static constexpr const int digits10 = 15;
    static constexpr const int max_digits10 = 2+(digits * 30103l)/100000l;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type min() noexcept {return 2.2250738585072014e-308;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type max() noexcept {return 1.7976931348623157e+308;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type lowest() noexcept {return -max();}

    static constexpr const bool is_integer = false;
    static constexpr const bool is_exact = false;
    static constexpr const int radix = 2;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type epsilon() noexcept {return 2.2204460492503131e-16;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type round_error() noexcept {return 0.5;}

    static constexpr const int min_exponent = (-1021);
    static constexpr const int min_exponent10 = (-307);
    static constexpr const int max_exponent = 1024;
    static constexpr const int max_exponent10 = 308;

    static constexpr const bool has_infinity = true;
    static constexpr const bool has_quiet_NaN = true;
    static constexpr const bool has_signaling_NaN = true;
    static constexpr const float_denorm_style has_denorm = denorm_present;
    static constexpr const bool has_denorm_loss = false;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type infinity() noexcept {return __builtin_huge_val();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type quiet_NaN() noexcept {return __builtin_nan("");}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type signaling_NaN() noexcept {return __builtin_nans("");}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type denorm_min() noexcept {return 4.9406564584124654e-324;}

    static constexpr const bool is_iec559 = true;
    static constexpr const bool is_bounded = true;
    static constexpr const bool is_modulo = false;

    static constexpr const bool traps = false;
    static constexpr const bool tinyness_before = false;
    static constexpr const float_round_style round_style = round_to_nearest;
};

template <>
class __libcpp_numeric_limits<long double, true>
{
protected:
    typedef long double type;

    static constexpr const bool is_specialized = true;

    static constexpr const bool is_signed = true;
    static constexpr const int digits = 53;
    static constexpr const int digits10 = 15;
    static constexpr const int max_digits10 = 2+(digits * 30103l)/100000l;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type min() noexcept {return 2.2250738585072014e-308L;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type max() noexcept {return 1.7976931348623157e+308L;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type lowest() noexcept {return -max();}

    static constexpr const bool is_integer = false;
    static constexpr const bool is_exact = false;
    static constexpr const int radix = 2;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type epsilon() noexcept {return 2.2204460492503131e-16L;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type round_error() noexcept {return 0.5L;}

    static constexpr const int min_exponent = (-1021);
    static constexpr const int min_exponent10 = (-307);
    static constexpr const int max_exponent = 1024;
    static constexpr const int max_exponent10 = 308;

    static constexpr const bool has_infinity = true;
    static constexpr const bool has_quiet_NaN = true;
    static constexpr const bool has_signaling_NaN = true;
    static constexpr const float_denorm_style has_denorm = denorm_present;
    static constexpr const bool has_denorm_loss = false;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type infinity() noexcept {return __builtin_huge_vall();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type quiet_NaN() noexcept {return __builtin_nanl("");}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type signaling_NaN() noexcept {return __builtin_nansl("");}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type denorm_min() noexcept {return 4.9406564584124654e-324L;}

    static constexpr const bool is_iec559 = true;

    static constexpr const bool is_bounded = true;
    static constexpr const bool is_modulo = false;

    static constexpr const bool traps = false;
    static constexpr const bool tinyness_before = false;
    static constexpr const float_round_style round_style = round_to_nearest;
};

template <class _Tp>
class numeric_limits
    : private __libcpp_numeric_limits<typename remove_cv<_Tp>::type>
{
    typedef __libcpp_numeric_limits<typename remove_cv<_Tp>::type> __base;
    typedef typename __base::type type;
public:
    static constexpr const bool is_specialized = __base::is_specialized;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type min() noexcept {return __base::min();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type max() noexcept {return __base::max();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type lowest() noexcept {return __base::lowest();}

    static constexpr const int digits = __base::digits;
    static constexpr const int digits10 = __base::digits10;
    static constexpr const int max_digits10 = __base::max_digits10;
    static constexpr const bool is_signed = __base::is_signed;
    static constexpr const bool is_integer = __base::is_integer;
    static constexpr const bool is_exact = __base::is_exact;
    static constexpr const int radix = __base::radix;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type epsilon() noexcept {return __base::epsilon();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type round_error() noexcept {return __base::round_error();}

    static constexpr const int min_exponent = __base::min_exponent;
    static constexpr const int min_exponent10 = __base::min_exponent10;
    static constexpr const int max_exponent = __base::max_exponent;
    static constexpr const int max_exponent10 = __base::max_exponent10;

    static constexpr const bool has_infinity = __base::has_infinity;
    static constexpr const bool has_quiet_NaN = __base::has_quiet_NaN;
    static constexpr const bool has_signaling_NaN = __base::has_signaling_NaN;
    static constexpr const float_denorm_style has_denorm = __base::has_denorm;
    static constexpr const bool has_denorm_loss = __base::has_denorm_loss;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type infinity() noexcept {return __base::infinity();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type quiet_NaN() noexcept {return __base::quiet_NaN();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type signaling_NaN() noexcept {return __base::signaling_NaN();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type denorm_min() noexcept {return __base::denorm_min();}

    static constexpr const bool is_iec559 = __base::is_iec559;
    static constexpr const bool is_bounded = __base::is_bounded;
    static constexpr const bool is_modulo = __base::is_modulo;

    static constexpr const bool traps = __base::traps;
    static constexpr const bool tinyness_before = __base::tinyness_before;
    static constexpr const float_round_style round_style = __base::round_style;
};

template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::is_specialized;
template <class _Tp>
    constexpr const int numeric_limits<_Tp>::digits;
template <class _Tp>
    constexpr const int numeric_limits<_Tp>::digits10;
template <class _Tp>
    constexpr const int numeric_limits<_Tp>::max_digits10;
template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::is_signed;
template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::is_integer;
template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::is_exact;
template <class _Tp>
    constexpr const int numeric_limits<_Tp>::radix;
template <class _Tp>
    constexpr const int numeric_limits<_Tp>::min_exponent;
template <class _Tp>
    constexpr const int numeric_limits<_Tp>::min_exponent10;
template <class _Tp>
    constexpr const int numeric_limits<_Tp>::max_exponent;
template <class _Tp>
    constexpr const int numeric_limits<_Tp>::max_exponent10;
template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::has_infinity;
template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::has_quiet_NaN;
template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::has_signaling_NaN;
template <class _Tp>
    constexpr const float_denorm_style numeric_limits<_Tp>::has_denorm;
template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::has_denorm_loss;
template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::is_iec559;
template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::is_bounded;
template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::is_modulo;
template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::traps;
template <class _Tp>
    constexpr const bool numeric_limits<_Tp>::tinyness_before;
template <class _Tp>
    constexpr const float_round_style numeric_limits<_Tp>::round_style;

template <class _Tp>
class numeric_limits<const _Tp>
    : private numeric_limits<_Tp>
{
    typedef numeric_limits<_Tp> __base;
    typedef _Tp type;
public:
    static constexpr const bool is_specialized = __base::is_specialized;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type min() noexcept {return __base::min();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type max() noexcept {return __base::max();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type lowest() noexcept {return __base::lowest();}

    static constexpr const int digits = __base::digits;
    static constexpr const int digits10 = __base::digits10;
    static constexpr const int max_digits10 = __base::max_digits10;
    static constexpr const bool is_signed = __base::is_signed;
    static constexpr const bool is_integer = __base::is_integer;
    static constexpr const bool is_exact = __base::is_exact;
    static constexpr const int radix = __base::radix;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type epsilon() noexcept {return __base::epsilon();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type round_error() noexcept {return __base::round_error();}

    static constexpr const int min_exponent = __base::min_exponent;
    static constexpr const int min_exponent10 = __base::min_exponent10;
    static constexpr const int max_exponent = __base::max_exponent;
    static constexpr const int max_exponent10 = __base::max_exponent10;

    static constexpr const bool has_infinity = __base::has_infinity;
    static constexpr const bool has_quiet_NaN = __base::has_quiet_NaN;
    static constexpr const bool has_signaling_NaN = __base::has_signaling_NaN;
    static constexpr const float_denorm_style has_denorm = __base::has_denorm;
    static constexpr const bool has_denorm_loss = __base::has_denorm_loss;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type infinity() noexcept {return __base::infinity();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type quiet_NaN() noexcept {return __base::quiet_NaN();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type signaling_NaN() noexcept {return __base::signaling_NaN();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type denorm_min() noexcept {return __base::denorm_min();}

    static constexpr const bool is_iec559 = __base::is_iec559;
    static constexpr const bool is_bounded = __base::is_bounded;
    static constexpr const bool is_modulo = __base::is_modulo;

    static constexpr const bool traps = __base::traps;
    static constexpr const bool tinyness_before = __base::tinyness_before;
    static constexpr const float_round_style round_style = __base::round_style;
};

template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::is_specialized;
template <class _Tp>
    constexpr const int numeric_limits<const _Tp>::digits;
template <class _Tp>
    constexpr const int numeric_limits<const _Tp>::digits10;
template <class _Tp>
    constexpr const int numeric_limits<const _Tp>::max_digits10;
template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::is_signed;
template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::is_integer;
template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::is_exact;
template <class _Tp>
    constexpr const int numeric_limits<const _Tp>::radix;
template <class _Tp>
    constexpr const int numeric_limits<const _Tp>::min_exponent;
template <class _Tp>
    constexpr const int numeric_limits<const _Tp>::min_exponent10;
template <class _Tp>
    constexpr const int numeric_limits<const _Tp>::max_exponent;
template <class _Tp>
    constexpr const int numeric_limits<const _Tp>::max_exponent10;
template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::has_infinity;
template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::has_quiet_NaN;
template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::has_signaling_NaN;
template <class _Tp>
    constexpr const float_denorm_style numeric_limits<const _Tp>::has_denorm;
template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::has_denorm_loss;
template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::is_iec559;
template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::is_bounded;
template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::is_modulo;
template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::traps;
template <class _Tp>
    constexpr const bool numeric_limits<const _Tp>::tinyness_before;
template <class _Tp>
    constexpr const float_round_style numeric_limits<const _Tp>::round_style;

template <class _Tp>
class numeric_limits<volatile _Tp>
    : private numeric_limits<_Tp>
{
    typedef numeric_limits<_Tp> __base;
    typedef _Tp type;
public:
    static constexpr const bool is_specialized = __base::is_specialized;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type min() noexcept {return __base::min();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type max() noexcept {return __base::max();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type lowest() noexcept {return __base::lowest();}

    static constexpr const int digits = __base::digits;
    static constexpr const int digits10 = __base::digits10;
    static constexpr const int max_digits10 = __base::max_digits10;
    static constexpr const bool is_signed = __base::is_signed;
    static constexpr const bool is_integer = __base::is_integer;
    static constexpr const bool is_exact = __base::is_exact;
    static constexpr const int radix = __base::radix;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type epsilon() noexcept {return __base::epsilon();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type round_error() noexcept {return __base::round_error();}

    static constexpr const int min_exponent = __base::min_exponent;
    static constexpr const int min_exponent10 = __base::min_exponent10;
    static constexpr const int max_exponent = __base::max_exponent;
    static constexpr const int max_exponent10 = __base::max_exponent10;

    static constexpr const bool has_infinity = __base::has_infinity;
    static constexpr const bool has_quiet_NaN = __base::has_quiet_NaN;
    static constexpr const bool has_signaling_NaN = __base::has_signaling_NaN;
    static constexpr const float_denorm_style has_denorm = __base::has_denorm;
    static constexpr const bool has_denorm_loss = __base::has_denorm_loss;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type infinity() noexcept {return __base::infinity();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type quiet_NaN() noexcept {return __base::quiet_NaN();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type signaling_NaN() noexcept {return __base::signaling_NaN();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type denorm_min() noexcept {return __base::denorm_min();}

    static constexpr const bool is_iec559 = __base::is_iec559;
    static constexpr const bool is_bounded = __base::is_bounded;
    static constexpr const bool is_modulo = __base::is_modulo;

    static constexpr const bool traps = __base::traps;
    static constexpr const bool tinyness_before = __base::tinyness_before;
    static constexpr const float_round_style round_style = __base::round_style;
};

template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::is_specialized;
template <class _Tp>
    constexpr const int numeric_limits<volatile _Tp>::digits;
template <class _Tp>
    constexpr const int numeric_limits<volatile _Tp>::digits10;
template <class _Tp>
    constexpr const int numeric_limits<volatile _Tp>::max_digits10;
template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::is_signed;
template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::is_integer;
template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::is_exact;
template <class _Tp>
    constexpr const int numeric_limits<volatile _Tp>::radix;
template <class _Tp>
    constexpr const int numeric_limits<volatile _Tp>::min_exponent;
template <class _Tp>
    constexpr const int numeric_limits<volatile _Tp>::min_exponent10;
template <class _Tp>
    constexpr const int numeric_limits<volatile _Tp>::max_exponent;
template <class _Tp>
    constexpr const int numeric_limits<volatile _Tp>::max_exponent10;
template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::has_infinity;
template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::has_quiet_NaN;
template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::has_signaling_NaN;
template <class _Tp>
    constexpr const float_denorm_style numeric_limits<volatile _Tp>::has_denorm;
template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::has_denorm_loss;
template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::is_iec559;
template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::is_bounded;
template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::is_modulo;
template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::traps;
template <class _Tp>
    constexpr const bool numeric_limits<volatile _Tp>::tinyness_before;
template <class _Tp>
    constexpr const float_round_style numeric_limits<volatile _Tp>::round_style;

template <class _Tp>
class numeric_limits<const volatile _Tp>
    : private numeric_limits<_Tp>
{
    typedef numeric_limits<_Tp> __base;
    typedef _Tp type;
public:
    static constexpr const bool is_specialized = __base::is_specialized;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type min() noexcept {return __base::min();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type max() noexcept {return __base::max();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type lowest() noexcept {return __base::lowest();}

    static constexpr const int digits = __base::digits;
    static constexpr const int digits10 = __base::digits10;
    static constexpr const int max_digits10 = __base::max_digits10;
    static constexpr const bool is_signed = __base::is_signed;
    static constexpr const bool is_integer = __base::is_integer;
    static constexpr const bool is_exact = __base::is_exact;
    static constexpr const int radix = __base::radix;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type epsilon() noexcept {return __base::epsilon();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type round_error() noexcept {return __base::round_error();}

    static constexpr const int min_exponent = __base::min_exponent;
    static constexpr const int min_exponent10 = __base::min_exponent10;
    static constexpr const int max_exponent = __base::max_exponent;
    static constexpr const int max_exponent10 = __base::max_exponent10;

    static constexpr const bool has_infinity = __base::has_infinity;
    static constexpr const bool has_quiet_NaN = __base::has_quiet_NaN;
    static constexpr const bool has_signaling_NaN = __base::has_signaling_NaN;
    static constexpr const float_denorm_style has_denorm = __base::has_denorm;
    static constexpr const bool has_denorm_loss = __base::has_denorm_loss;
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type infinity() noexcept {return __base::infinity();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type quiet_NaN() noexcept {return __base::quiet_NaN();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type signaling_NaN() noexcept {return __base::signaling_NaN();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr type denorm_min() noexcept {return __base::denorm_min();}

    static constexpr const bool is_iec559 = __base::is_iec559;
    static constexpr const bool is_bounded = __base::is_bounded;
    static constexpr const bool is_modulo = __base::is_modulo;

    static constexpr const bool traps = __base::traps;
    static constexpr const bool tinyness_before = __base::tinyness_before;
    static constexpr const float_round_style round_style = __base::round_style;
};

template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::is_specialized;
template <class _Tp>
    constexpr const int numeric_limits<const volatile _Tp>::digits;
template <class _Tp>
    constexpr const int numeric_limits<const volatile _Tp>::digits10;
template <class _Tp>
    constexpr const int numeric_limits<const volatile _Tp>::max_digits10;
template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::is_signed;
template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::is_integer;
template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::is_exact;
template <class _Tp>
    constexpr const int numeric_limits<const volatile _Tp>::radix;
template <class _Tp>
    constexpr const int numeric_limits<const volatile _Tp>::min_exponent;
template <class _Tp>
    constexpr const int numeric_limits<const volatile _Tp>::min_exponent10;
template <class _Tp>
    constexpr const int numeric_limits<const volatile _Tp>::max_exponent;
template <class _Tp>
    constexpr const int numeric_limits<const volatile _Tp>::max_exponent10;
template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::has_infinity;
template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::has_quiet_NaN;
template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::has_signaling_NaN;
template <class _Tp>
    constexpr const float_denorm_style numeric_limits<const volatile _Tp>::has_denorm;
template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::has_denorm_loss;
template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::is_iec559;
template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::is_bounded;
template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::is_modulo;
template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::traps;
template <class _Tp>
    constexpr const bool numeric_limits<const volatile _Tp>::tinyness_before;
template <class _Tp>
    constexpr const float_round_style numeric_limits<const volatile _Tp>::round_style;

} }
}
namespace std { inline namespace __1 {

using ::size_t;
using ::div_t;
using ::ldiv_t;

using ::lldiv_t;

using ::atof;
using ::atoi;
using ::atol;

using ::atoll;

using ::strtod;
using ::strtof;
using ::strtold;
using ::strtol;

using ::strtoll;

using ::strtoul;

using ::strtoull;

using ::rand;
using ::srand;
using ::calloc;
using ::free;
using ::malloc;
using ::realloc;
using ::abort;
using ::atexit;
using ::exit;
using ::_Exit;

using ::getenv;
using ::system;

using ::bsearch;
using ::qsort;
using ::abs;
using ::labs;

using ::llabs;

using ::div;
using ::ldiv;

using ::lldiv;
using ::at_quick_exit;
using ::quick_exit;

} }
extern "C" {
typedef struct _PDCLIB_fpos_t fpos_t;
typedef struct _PDCLIB_file_t FILE;
extern FILE * stdin;
extern FILE * stdout;
extern FILE * stderr;

               int remove( const char * filename );

               int rename( const char * oldpath, const char * newpath );

               int printf( const char * format, ... );

               int scanf( const char * format, ... );

               int snprintf( char * s, size_t n, const char * format, ... );

               int sprintf( char * s, const char * format, ... );

               int sscanf( const char * s, const char * format, ... );

               int vprintf( const char * format, _PDCLIB_va_list arg );

               int vscanf( const char * format, _PDCLIB_va_list arg );

               int vsnprintf( char * s, size_t n, const char * format, _PDCLIB_va_list arg );

               int vsprintf( char * s, const char * format, _PDCLIB_va_list arg );

               void perror( const char * s );
}
namespace std { inline namespace __1 {

using ::FILE;
using ::fpos_t;
using ::size_t;

using ::snprintf;
using ::sprintf;
using ::sscanf;
using ::vsnprintf;
using ::vsprintf;
using ::perror;
using ::remove;
using ::rename;

} }
namespace std { inline namespace __1 {

struct __libcpp_debug_info {
  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
  __libcpp_debug_info()
      : __file_(nullptr), __line_(-1), __pred_(nullptr), __msg_(nullptr) {}
  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
  __libcpp_debug_info(const char* __f, int __l, const char* __p, const char* __m)
    : __file_(__f), __line_(__l), __pred_(__p), __msg_(__m) {}

                   std::string what() const;

  const char* __file_;
  int __line_;
  const char* __pred_;
  const char* __msg_;
};

typedef void(*__libcpp_debug_function_type)(__libcpp_debug_info const&);

extern __libcpp_debug_function_type __libcpp_debug_function;

[[noreturn]]
void __libcpp_abort_debug_function(__libcpp_debug_info const&);

bool __libcpp_set_debug_function(__libcpp_debug_function_type __func);

} }
namespace std { inline namespace __1 {

namespace rel_ops
{

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator!=(const _Tp& __x, const _Tp& __y)
{
    return !(__x == __y);
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator> (const _Tp& __x, const _Tp& __y)
{
    return __y < __x;
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator<=(const _Tp& __x, const _Tp& __y)
{
    return !(__y < __x);
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator>=(const _Tp& __x, const _Tp& __y)
{
    return !(__x < __y);
}

}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr

typename conditional
<
    !is_nothrow_move_constructible<_Tp>::value && is_copy_constructible<_Tp>::value,
    const _Tp&,
    _Tp&&
>::type

move_if_noexcept(_Tp& __x) noexcept
{
    return std::__1::move(__x);
}

template <class _Tp> constexpr add_const_t<_Tp>& as_const(_Tp& __t) noexcept { return __t; }
template <class _Tp> void as_const(const _Tp&&) = delete;

struct piecewise_construct_t { explicit piecewise_construct_t() = default; };

extern const piecewise_construct_t piecewise_construct;
template <class _T1, class _T2>
struct pair

{
    typedef _T1 first_type;
    typedef _T2 second_type;

    _T1 first;
    _T2 second;

    pair(pair const&) = default;
    pair(pair&&) = default;
    template <bool _Val>
    using _EnableB __attribute__((nodebug)) = typename enable_if<_Val, bool>::type;

    struct _CheckArgs {
      template <int&...>
      static constexpr bool __enable_explicit_default() {
          return is_default_constructible<_T1>::value
              && is_default_constructible<_T2>::value
              && !__enable_implicit_default<>();
      }

      template <int&...>
      static constexpr bool __enable_implicit_default() {
          return __is_implicitly_default_constructible<_T1>::value
              && __is_implicitly_default_constructible<_T2>::value;
      }

      template <class _U1, class _U2>
      static constexpr bool __enable_explicit() {
          return is_constructible<first_type, _U1>::value
              && is_constructible<second_type, _U2>::value
              && (!is_convertible<_U1, first_type>::value
                  || !is_convertible<_U2, second_type>::value);
      }

      template <class _U1, class _U2>
      static constexpr bool __enable_implicit() {
          return is_constructible<first_type, _U1>::value
              && is_constructible<second_type, _U2>::value
              && is_convertible<_U1, first_type>::value
              && is_convertible<_U2, second_type>::value;
      }
    };

    template <bool _MaybeEnable>
    using _CheckArgsDep __attribute__((nodebug)) = typename conditional<
      _MaybeEnable, _CheckArgs, __check_tuple_constructor_fail>::type;

    struct _CheckTupleLikeConstructor {
        template <class _Tuple>
        static constexpr bool __enable_implicit() {
            return __tuple_convertible<_Tuple, pair>::value;
        }

        template <class _Tuple>
        static constexpr bool __enable_explicit() {
            return __tuple_constructible<_Tuple, pair>::value
               && !__tuple_convertible<_Tuple, pair>::value;
        }

        template <class _Tuple>
        static constexpr bool __enable_assign() {
            return __tuple_assignable<_Tuple, pair>::value;
        }
    };

    template <class _Tuple>
    using _CheckTLC __attribute__((nodebug)) = typename conditional<
        __tuple_like_with_size<_Tuple, 2>::value
            && !is_same<typename decay<_Tuple>::type, pair>::value,
        _CheckTupleLikeConstructor,
        __check_tuple_constructor_fail
    >::type;

    template<bool _Dummy = true, _EnableB<
            _CheckArgsDep<_Dummy>::__enable_explicit_default()
    > = false>
    explicit __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    pair() noexcept(is_nothrow_default_constructible<first_type>::value && is_nothrow_default_constructible<second_type>::value)

        : first(), second() {}

    template<bool _Dummy = true, _EnableB<
            _CheckArgsDep<_Dummy>::__enable_implicit_default()
    > = false>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    pair() noexcept(is_nothrow_default_constructible<first_type>::value && is_nothrow_default_constructible<second_type>::value)

        : first(), second() {}

    template <bool _Dummy = true, _EnableB<
             _CheckArgsDep<_Dummy>::template __enable_explicit<_T1 const&, _T2 const&>()
    > = false>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    explicit pair(_T1 const& __t1, _T2 const& __t2)
        noexcept(is_nothrow_copy_constructible<first_type>::value && is_nothrow_copy_constructible<second_type>::value)

        : first(__t1), second(__t2) {}

    template<bool _Dummy = true, _EnableB<
            _CheckArgsDep<_Dummy>::template __enable_implicit<_T1 const&, _T2 const&>()
    > = false>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    pair(_T1 const& __t1, _T2 const& __t2)
        noexcept(is_nothrow_copy_constructible<first_type>::value && is_nothrow_copy_constructible<second_type>::value)

        : first(__t1), second(__t2) {}

    template<class _U1, class _U2, _EnableB<
             _CheckArgs::template __enable_explicit<_U1, _U2>()
    > = false>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    explicit pair(_U1&& __u1, _U2&& __u2)
        noexcept((is_nothrow_constructible<first_type, _U1>::value && is_nothrow_constructible<second_type, _U2>::value))

        : first(std::__1::forward<_U1>(__u1)), second(std::__1::forward<_U2>(__u2)) {}

    template<class _U1, class _U2, _EnableB<
            _CheckArgs::template __enable_implicit<_U1, _U2>()
    > = false>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    pair(_U1&& __u1, _U2&& __u2)
        noexcept((is_nothrow_constructible<first_type, _U1>::value && is_nothrow_constructible<second_type, _U2>::value))

        : first(std::__1::forward<_U1>(__u1)), second(std::__1::forward<_U2>(__u2)) {}

    template<class _U1, class _U2, _EnableB<
            _CheckArgs::template __enable_explicit<_U1 const&, _U2 const&>()
    > = false>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    explicit pair(pair<_U1, _U2> const& __p)
        noexcept((is_nothrow_constructible<first_type, _U1 const&>::value && is_nothrow_constructible<second_type, _U2 const&>::value))

        : first(__p.first), second(__p.second) {}

    template<class _U1, class _U2, _EnableB<
            _CheckArgs::template __enable_implicit<_U1 const&, _U2 const&>()
    > = false>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    pair(pair<_U1, _U2> const& __p)
        noexcept((is_nothrow_constructible<first_type, _U1 const&>::value && is_nothrow_constructible<second_type, _U2 const&>::value))

        : first(__p.first), second(__p.second) {}

    template<class _U1, class _U2, _EnableB<
            _CheckArgs::template __enable_explicit<_U1, _U2>()
    > = false>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    explicit pair(pair<_U1, _U2>&&__p)
        noexcept((is_nothrow_constructible<first_type, _U1&&>::value && is_nothrow_constructible<second_type, _U2&&>::value))

        : first(std::__1::forward<_U1>(__p.first)), second(std::__1::forward<_U2>(__p.second)) {}

    template<class _U1, class _U2, _EnableB<
            _CheckArgs::template __enable_implicit<_U1, _U2>()
    > = false>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    pair(pair<_U1, _U2>&& __p)
        noexcept((is_nothrow_constructible<first_type, _U1&&>::value && is_nothrow_constructible<second_type, _U2&&>::value))

        : first(std::__1::forward<_U1>(__p.first)), second(std::__1::forward<_U2>(__p.second)) {}

    template<class _Tuple, _EnableB<
            _CheckTLC<_Tuple>::template __enable_explicit<_Tuple>()
    > = false>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    explicit pair(_Tuple&& __p)
        : first(std::__1::get<0>(std::__1::forward<_Tuple>(__p))),
          second(std::__1::get<1>(std::__1::forward<_Tuple>(__p))) {}

    template<class _Tuple, _EnableB<
            _CheckTLC<_Tuple>::template __enable_implicit<_Tuple>()
    > = false>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    pair(_Tuple&& __p)
        : first(std::__1::get<0>(std::__1::forward<_Tuple>(__p))),
          second(std::__1::get<1>(std::__1::forward<_Tuple>(__p))) {}

    template <class... _Args1, class... _Args2>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    pair(piecewise_construct_t __pc,
         tuple<_Args1...> __first_args, tuple<_Args2...> __second_args)
        noexcept((is_nothrow_constructible<first_type, _Args1...>::value && is_nothrow_constructible<second_type, _Args2...>::value))

        : pair(__pc, __first_args, __second_args,
                typename __make_tuple_indices<sizeof...(_Args1)>::type(),
                typename __make_tuple_indices<sizeof...(_Args2) >::type()) {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    pair& operator=(typename conditional<
                        is_copy_assignable<first_type>::value &&
                        is_copy_assignable<second_type>::value,
                    pair, __nat>::type const& __p)
        noexcept(is_nothrow_copy_assignable<first_type>::value && is_nothrow_copy_assignable<second_type>::value)

    {
        first = __p.first;
        second = __p.second;
        return *this;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    pair& operator=(typename conditional<
                        is_move_assignable<first_type>::value &&
                        is_move_assignable<second_type>::value,
                    pair, __nat>::type&& __p)
        noexcept(is_nothrow_move_assignable<first_type>::value && is_nothrow_move_assignable<second_type>::value)

    {
        first = std::__1::forward<first_type>(__p.first);
        second = std::__1::forward<second_type>(__p.second);
        return *this;
    }

    template <class _Tuple, _EnableB<
            _CheckTLC<_Tuple>::template __enable_assign<_Tuple>()
     > = false>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    pair& operator=(_Tuple&& __p) {
        first = std::__1::get<0>(std::__1::forward<_Tuple>(__p));
        second = std::__1::get<1>(std::__1::forward<_Tuple>(__p));
        return *this;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void
    swap(pair& __p) noexcept(__is_nothrow_swappable<first_type>::value && __is_nothrow_swappable<second_type>::value)

    {
        using std::__1::swap;
        swap(first, __p.first);
        swap(second, __p.second);
    }
private:

    template <class... _Args1, class... _Args2, size_t... _I1, size_t... _I2>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        pair(piecewise_construct_t,
             tuple<_Args1...>& __first_args, tuple<_Args2...>& __second_args,
             __tuple_indices<_I1...>, __tuple_indices<_I2...>);

};

template<class _T1, class _T2>
pair(_T1, _T2) -> pair<_T1, _T2>;

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator==(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
{
    return __x.first == __y.first && __x.second == __y.second;
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator!=(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
{
    return !(__x == __y);
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator< (const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
{
    return __x.first < __y.first || (!(__y.first < __x.first) && __x.second < __y.second);
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator> (const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
{
    return __y < __x;
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator>=(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
{
    return !(__x < __y);
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator<=(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
{
    return !(__y < __x);
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    __is_swappable<_T1>::value &&
    __is_swappable<_T2>::value,
    void
>::type
swap(pair<_T1, _T2>& __x, pair<_T1, _T2>& __y)
                     noexcept((__is_nothrow_swappable<_T1>::value && __is_nothrow_swappable<_T2>::value))

{
    __x.swap(__y);
}

template <class _Tp>
struct __unwrap_reference { typedef __attribute__((nodebug)) _Tp type; };

template <class _Tp>
struct __unwrap_reference<reference_wrapper<_Tp> > { typedef __attribute__((nodebug)) _Tp& type; };
template <class _Tp>
struct __unwrap_ref_decay

    : __unwrap_reference<typename decay<_Tp>::type>

{ };

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
pair<typename __unwrap_ref_decay<_T1>::type, typename __unwrap_ref_decay<_T2>::type>
make_pair(_T1&& __t1, _T2&& __t2)
{
    return pair<typename __unwrap_ref_decay<_T1>::type, typename __unwrap_ref_decay<_T2>::type>
               (std::__1::forward<_T1>(__t1), std::__1::forward<_T2>(__t2));
}
template <class _T1, class _T2>
  struct tuple_size<pair<_T1, _T2> >
    : public integral_constant<size_t, 2> {};

template <size_t _Ip, class _T1, class _T2>
struct tuple_element<_Ip, pair<_T1, _T2> >
{
    static_assert(_Ip < 2, "Index out of bounds in std::tuple_element<std::pair<T1, T2>>");
};

template <class _T1, class _T2>
struct tuple_element<0, pair<_T1, _T2> >
{
    typedef __attribute__((nodebug)) _T1 type;
};

template <class _T1, class _T2>
struct tuple_element<1, pair<_T1, _T2> >
{
    typedef __attribute__((nodebug)) _T2 type;
};

template <size_t _Ip> struct __get_pair;

template <>
struct __get_pair<0>
{
    template <class _T1, class _T2>
    static
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    _T1&
    get(pair<_T1, _T2>& __p) noexcept {return __p.first;}

    template <class _T1, class _T2>
    static
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    const _T1&
    get(const pair<_T1, _T2>& __p) noexcept {return __p.first;}

    template <class _T1, class _T2>
    static
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    _T1&&
    get(pair<_T1, _T2>&& __p) noexcept {return std::__1::forward<_T1>(__p.first);}

    template <class _T1, class _T2>
    static
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    const _T1&&
    get(const pair<_T1, _T2>&& __p) noexcept {return std::__1::forward<const _T1>(__p.first);}

};

template <>
struct __get_pair<1>
{
    template <class _T1, class _T2>
    static
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    _T2&
    get(pair<_T1, _T2>& __p) noexcept {return __p.second;}

    template <class _T1, class _T2>
    static
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    const _T2&
    get(const pair<_T1, _T2>& __p) noexcept {return __p.second;}

    template <class _T1, class _T2>
    static
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    _T2&&
    get(pair<_T1, _T2>&& __p) noexcept {return std::__1::forward<_T2>(__p.second);}

    template <class _T1, class _T2>
    static
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    const _T2&&
    get(const pair<_T1, _T2>&& __p) noexcept {return std::__1::forward<const _T2>(__p.second);}

};

template <size_t _Ip, class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename tuple_element<_Ip, pair<_T1, _T2> >::type&
get(pair<_T1, _T2>& __p) noexcept
{
    return __get_pair<_Ip>::get(__p);
}

template <size_t _Ip, class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
const typename tuple_element<_Ip, pair<_T1, _T2> >::type&
get(const pair<_T1, _T2>& __p) noexcept
{
    return __get_pair<_Ip>::get(__p);
}

template <size_t _Ip, class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename tuple_element<_Ip, pair<_T1, _T2> >::type&&
get(pair<_T1, _T2>&& __p) noexcept
{
    return __get_pair<_Ip>::get(std::__1::move(__p));
}

template <size_t _Ip, class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
const typename tuple_element<_Ip, pair<_T1, _T2> >::type&&
get(const pair<_T1, _T2>&& __p) noexcept
{
    return __get_pair<_Ip>::get(std::__1::move(__p));
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr _T1 & get(pair<_T1, _T2>& __p) noexcept
{
    return __get_pair<0>::get(__p);
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr _T1 const & get(pair<_T1, _T2> const& __p) noexcept
{
    return __get_pair<0>::get(__p);
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr _T1 && get(pair<_T1, _T2>&& __p) noexcept
{
    return __get_pair<0>::get(std::__1::move(__p));
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr _T1 const && get(pair<_T1, _T2> const&& __p) noexcept
{
    return __get_pair<0>::get(std::__1::move(__p));
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr _T1 & get(pair<_T2, _T1>& __p) noexcept
{
    return __get_pair<1>::get(__p);
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr _T1 const & get(pair<_T2, _T1> const& __p) noexcept
{
    return __get_pair<1>::get(__p);
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr _T1 && get(pair<_T2, _T1>&& __p) noexcept
{
    return __get_pair<1>::get(std::__1::move(__p));
}

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr _T1 const && get(pair<_T2, _T1> const&& __p) noexcept
{
    return __get_pair<1>::get(std::__1::move(__p));
}

template<class _Tp, _Tp... _Ip>
struct integer_sequence
{
    typedef _Tp value_type;
    static_assert( is_integral<_Tp>::value,
                  "std::integer_sequence can only be instantiated with an integral type" );
    static
    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr
    size_t
    size() noexcept { return sizeof...(_Ip); }
};

template<size_t... _Ip>
    using index_sequence = integer_sequence<size_t, _Ip...>;

template <class _Tp, _Tp _Ep>
using __make_integer_sequence __attribute__((nodebug)) = __make_integer_seq<integer_sequence, _Tp, _Ep>;
template<class _Tp, _Tp _Np>
    using make_integer_sequence = __make_integer_sequence<_Tp, _Np>;

template<size_t _Np>
    using make_index_sequence = make_integer_sequence<size_t, _Np>;

template<class... _Tp>
    using index_sequence_for = make_index_sequence<sizeof...(_Tp)>;

template<class _T1, class _T2 = _T1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_T1 exchange(_T1& __obj, _T2 && __new_value)
{
    _T1 __old_value = std::__1::move(__obj);
    __obj = std::__1::forward<_T2>(__new_value);
    return __old_value;
}

struct in_place_t {
    explicit in_place_t() = default;
};
inline constexpr in_place_t in_place{};

template <class _Tp>
struct in_place_type_t {
    explicit in_place_type_t() = default;
};
template <class _Tp>
inline constexpr in_place_type_t<_Tp> in_place_type{};

template <size_t _Idx>
struct in_place_index_t {
    explicit in_place_index_t() = default;
};
template <size_t _Idx>
inline constexpr in_place_index_t<_Idx> in_place_index{};

template <class _Tp> struct __is_inplace_type_imp : false_type {};
template <class _Tp> struct __is_inplace_type_imp<in_place_type_t<_Tp>> : true_type {};

template <class _Tp>
using __is_inplace_type = __is_inplace_type_imp<__uncvref_t<_Tp>>;

template <class _Tp> struct __is_inplace_index_imp : false_type {};
template <size_t _Idx> struct __is_inplace_index_imp<in_place_index_t<_Idx>> : true_type {};

template <class _Tp>
using __is_inplace_index = __is_inplace_index_imp<__uncvref_t<_Tp>>;

template <class _Arg, class _Result>
struct unary_function
{
    typedef _Arg argument_type;
    typedef _Result result_type;
};

template <class _Size>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_Size
__loadword(const void* __p)
{
    _Size __r;
    std::memcpy(&__r, __p, sizeof(__r));
    return __r;
}


} }
struct __std_exception_data
{
    const char *_What;
    bool _DoFree;
};

extern "C"
{
    void __cdecl __std_exception_copy (const __std_exception_data *_From, __std_exception_data *_To);
    void __cdecl __std_exception_destroy (__std_exception_data *_Data);
}

namespace std
{
    class exception
    {
    public:
        exception () noexcept : _Data{0, false}
        {
        }

        explicit exception (const char *const _Message) noexcept
        {
            const __std_exception_data data = {_Message, true};
            __std_exception_copy(&data, &this->_Data);
        }

        explicit exception (const char *const _Message, int) noexcept : _Data{_Message, false}
        {
        }

        exception (const exception &rhs) noexcept
        {
            __std_exception_copy(&rhs._Data, &this->_Data);
        }

        exception &operator= (const exception &rhs) noexcept
        {
            if (this != &rhs) {
                __std_exception_destroy(&this->_Data);
                __std_exception_copy(&rhs._Data, &this->_Data);
            }

            return *this;
        }

        virtual ~exception () noexcept
        {
            __std_exception_destroy(&this->_Data);
        }

        virtual const char *what () const noexcept
        {
            return this->_Data._What ? this->_Data._What : "Unknown exception";
        }

    private:
        __std_exception_data _Data;
    };

}
namespace std
{

typedef void (*unexpected_handler)();
                 unexpected_handler set_unexpected(unexpected_handler) noexcept;
                 unexpected_handler get_unexpected() noexcept;
[[noreturn]] void unexpected();

typedef void (*terminate_handler)();
                 terminate_handler set_terminate(terminate_handler) noexcept;
                 terminate_handler get_terminate() noexcept;
[[noreturn]] void terminate() noexcept;

                 bool uncaught_exception() noexcept;
                                                          int uncaught_exceptions() noexcept;

class exception_ptr;

                 exception_ptr current_exception() noexcept;
[[noreturn]] void rethrow_exception(exception_ptr);

class exception_ptr
{

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"

    void* __ptr1_;
    void* __ptr2_;

#pragma clang diagnostic pop

public:
    exception_ptr() noexcept;
    exception_ptr(nullptr_t) noexcept;
    exception_ptr(const exception_ptr& __other) noexcept;
    exception_ptr& operator=(const exception_ptr& __other) noexcept;
    exception_ptr& operator=(nullptr_t) noexcept;
    ~exception_ptr() noexcept;
    explicit operator bool() const noexcept;
};

                 exception_ptr __copy_exception_ptr(void *__except, const void* __ptr);
                 exception_ptr current_exception() noexcept;
[[noreturn]] void rethrow_exception(exception_ptr p);

template <class _E> void *__GetExceptionInfo(_E);

template<class _Ep>
 __attribute__ ((__exclude_from_explicit_instantiation__)) exception_ptr
make_exception_ptr(_Ep __e) noexcept
{
  return __copy_exception_ptr(std::__1::addressof(__e), __GetExceptionInfo(__e));
}

class nested_exception
{
    exception_ptr __ptr_;
public:
    nested_exception() noexcept;

    virtual ~nested_exception() noexcept;

    [[noreturn]] void rethrow_nested() const;
    __attribute__ ((__exclude_from_explicit_instantiation__)) exception_ptr nested_ptr() const noexcept {return __ptr_;}
};

template <class _Tp>
struct __nested
    : public _Tp,
      public nested_exception
{
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit __nested(const _Tp& __t) : _Tp(__t) {}
};

template <class _Tp>
[[noreturn]]
void
throw_with_nested(_Tp&& __t)
{
    ((void)__t);

}

template <class _From, class _To>
struct __can_dynamic_cast : public bool_constant<(is_polymorphic<_From>::value && (!is_base_of<_To, _From>::value || is_convertible<const _From*, const _To*>::value))> {};

template <class _Ep>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void
rethrow_if_nested(const _Ep& __e,
                  typename enable_if< __can_dynamic_cast<_Ep, nested_exception>::value>::type* = 0)
{
    const nested_exception* __nep = dynamic_cast<const nested_exception*>(std::__1::addressof(__e));
    if (__nep)
        __nep->rethrow_nested();
}

template <class _Ep>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void
rethrow_if_nested(const _Ep&,
                  typename enable_if<!__can_dynamic_cast<_Ep, nested_exception>::value>::type* = 0)
{
}

}
extern "C" {

void _xbox_assert(char const * const expression, char const * const file_name, char const * const function_name, unsigned long line);
}

struct __std_type_info_data
{
    char *_UndecoratedName;
    char _DecoratedName[1];
};

extern "C"
{
    int __cdecl __std_type_info_compare (const __std_type_info_data *const lhs, const __std_type_info_data *const rhs);
    size_t __cdecl __std_type_info_hash (const __std_type_info_data *const data);
}

class type_info
{
public:
    virtual ~type_info () noexcept;

    const char *name () const noexcept
    {

        ((void) ((false) ? 0 : (_xbox_assert("false", "sample.cpp", __func__, 12915), 0)));
        return 0;
    }

    const char *raw_name () const noexcept
    {
        return this->_Data._DecoratedName;
    }

    bool before (const type_info &rhs) const noexcept
    {
        return __std_type_info_compare(&this->_Data, &rhs._Data) < 0;
    }

    size_t hash_code () const noexcept
    {
        return __std_type_info_hash(&this->_Data);
    }

    bool operator== (const type_info &rhs) const noexcept
    {
        return __std_type_info_compare(&this->_Data, &rhs._Data) == 0;
    }

    bool operator!= (const type_info &rhs) const noexcept
    {
        return !operator==(rhs);
    }

private:

    type_info () noexcept;

    type_info (type_info const &) noexcept = delete;
    type_info &operator= (type_info const &) = delete;

    mutable __std_type_info_data _Data;
};

namespace std
{
    using ::type_info;

    class bad_cast : public exception
    {
    public:
        bad_cast () noexcept : exception("bad cast", 0)
        {
        }
    };

    class bad_typeid : public exception
    {
    public:
        bad_typeid () noexcept : exception("bad typeid", 0)
        {
        }
    };
}
namespace std
{

struct nothrow_t { explicit nothrow_t() = default; };
extern const nothrow_t nothrow;
typedef void (*new_handler)();
                 new_handler set_new_handler(new_handler) noexcept;
                 new_handler get_new_handler() noexcept;

[[noreturn]] void __throw_bad_alloc();

enum class align_val_t : size_t { };
}
                                                           void* operator new(std::size_t __sz) ;
                                                           void* operator new(std::size_t __sz, const std::nothrow_t&) noexcept ;
                             void operator delete(void* __p) noexcept;
                             void operator delete(void* __p, const std::nothrow_t&) noexcept;

                                                                   void operator delete(void* __p, std::size_t __sz) noexcept;

                                                           void* operator new[](std::size_t __sz) ;
                                                           void* operator new[](std::size_t __sz, const std::nothrow_t&) noexcept ;
                             void operator delete[](void* __p) noexcept;
                             void operator delete[](void* __p, const std::nothrow_t&) noexcept;

                                                                   void operator delete[](void* __p, std::size_t __sz) noexcept;

                                                           void* operator new(std::size_t __sz, std::align_val_t) ;
                                                           void* operator new(std::size_t __sz, std::align_val_t, const std::nothrow_t&) noexcept ;
                             void operator delete(void* __p, std::align_val_t) noexcept;
                             void operator delete(void* __p, std::align_val_t, const std::nothrow_t&) noexcept;

                                                                   void operator delete(void* __p, std::size_t __sz, std::align_val_t) noexcept;

                                                           void* operator new[](std::size_t __sz, std::align_val_t) ;
                                                           void* operator new[](std::size_t __sz, std::align_val_t, const std::nothrow_t&) noexcept ;
                             void operator delete[](void* __p, std::align_val_t) noexcept;
                             void operator delete[](void* __p, std::align_val_t, const std::nothrow_t&) noexcept;

                                                                   void operator delete[](void* __p, std::size_t __sz, std::align_val_t) noexcept;

                              inline __attribute__ ((__exclude_from_explicit_instantiation__)) void* operator new (std::size_t, void* __p) noexcept {return __p;}
                              inline __attribute__ ((__exclude_from_explicit_instantiation__)) void* operator new[](std::size_t, void* __p) noexcept {return __p;}
inline __attribute__ ((__exclude_from_explicit_instantiation__)) void operator delete (void*, void*) noexcept {}
inline __attribute__ ((__exclude_from_explicit_instantiation__)) void operator delete[](void*, void*) noexcept {}

namespace std { inline namespace __1 {

constexpr inline __attribute__ ((__exclude_from_explicit_instantiation__)) bool __is_overaligned_for_new(size_t __align) noexcept {

  return __align > 8U;

}

inline __attribute__ ((__exclude_from_explicit_instantiation__)) void *__libcpp_allocate(size_t __size, size_t __align) {

  if (__is_overaligned_for_new(__align)) {
    const align_val_t __align_val = static_cast<align_val_t>(__align);

    return ::operator new(__size, __align_val);

  }

  return ::operator new(__size);

}

struct _DeallocateCaller {
  static inline __attribute__ ((__exclude_from_explicit_instantiation__))
  void __do_deallocate_handle_size_align(void *__ptr, size_t __size, size_t __align) {

    if (__is_overaligned_for_new(__align)) {
      const align_val_t __align_val = static_cast<align_val_t>(__align);
      return __do_deallocate_handle_size(__ptr, __size, __align_val);
    } else {
      return __do_deallocate_handle_size(__ptr, __size);
    }

  }

  static inline __attribute__ ((__exclude_from_explicit_instantiation__))
  void __do_deallocate_handle_align(void *__ptr, size_t __align) {

    if (__is_overaligned_for_new(__align)) {
      const align_val_t __align_val = static_cast<align_val_t>(__align);
      return __do_call(__ptr, __align_val);
    } else {
      return __do_call(__ptr);
    }

  }

 private:
  static inline void __do_deallocate_handle_size(void *__ptr, size_t __size) {

    ((void)__size);
    return __do_call(__ptr);

  }

  static inline void __do_deallocate_handle_size(void *__ptr, size_t __size, align_val_t __align) {

    ((void)__size);
    return __do_call(__ptr, __align);

  }

private:
  template <class _A1, class _A2>
  static inline void __do_call(void *__ptr, _A1 __a1, _A2 __a2) {

    return ::operator delete(__ptr, __a1, __a2);

  }

  template <class _A1>
  static inline void __do_call(void *__ptr, _A1 __a1) {

    return ::operator delete(__ptr, __a1);

  }

  static inline void __do_call(void *__ptr) {

    return ::operator delete(__ptr);

  }
};

inline __attribute__ ((__exclude_from_explicit_instantiation__)) void __libcpp_deallocate(void* __ptr, size_t __size, size_t __align) {
  _DeallocateCaller::__do_deallocate_handle_size_align(__ptr, __size, __align);
}

inline __attribute__ ((__exclude_from_explicit_instantiation__)) void __libcpp_deallocate_unsized(void* __ptr, size_t __align) {
  _DeallocateCaller::__do_deallocate_handle_align(__ptr, __align);
}

template <class _Tp>
                              inline
constexpr _Tp* __launder(_Tp* __p) noexcept
{
    static_assert (!(is_function<_Tp>::value), "can't launder functions" );
    static_assert (!(is_same<void, typename remove_cv<_Tp>::type>::value), "can't launder cv-void" );

    return __builtin_launder(__p);

}

template <class _Tp>
                              inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr _Tp* launder(_Tp* __p) noexcept
{
    return std::__1::__launder(__p);
}

} }
namespace std { inline namespace __1 {

template <class _Arg1, class _Arg2, class _Result>
struct binary_function
{
    typedef _Arg1 first_argument_type;
    typedef _Arg2 second_argument_type;
    typedef _Result result_type;
};

template <class _Tp>
struct __has_result_type
{
private:
    struct __two {char __lx; char __lxx;};
    template <class _Up> static __two __test(...);
    template <class _Up> static char __test(typename _Up::result_type* = 0);
public:
    static const bool value = sizeof(__test<_Tp>(0)) == 1;
};

template <class _Tp = void>

struct less : binary_function<_Tp, _Tp, bool>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x < __y;}
};

template <>
struct less<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) < std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) < std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) < std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp>
struct __derives_from_unary_function
{
private:
    struct __two {char __lx; char __lxx;};
    static __two __test(...);
    template <class _Ap, class _Rp>
        static unary_function<_Ap, _Rp>
        __test(const volatile unary_function<_Ap, _Rp>*);
public:
    static const bool value = !is_same<decltype(__test((_Tp*)0)), __two>::value;
    typedef decltype(__test((_Tp*)0)) type;
};

template <class _Tp>
struct __derives_from_binary_function
{
private:
    struct __two {char __lx; char __lxx;};
    static __two __test(...);
    template <class _A1, class _A2, class _Rp>
        static binary_function<_A1, _A2, _Rp>
        __test(const volatile binary_function<_A1, _A2, _Rp>*);
public:
    static const bool value = !is_same<decltype(__test((_Tp*)0)), __two>::value;
    typedef decltype(__test((_Tp*)0)) type;
};

template <class _Tp, bool = __derives_from_unary_function<_Tp>::value>
struct __maybe_derive_from_unary_function
    : public __derives_from_unary_function<_Tp>::type
{
};

template <class _Tp>
struct __maybe_derive_from_unary_function<_Tp, false>
{
};

template <class _Tp, bool = __derives_from_binary_function<_Tp>::value>
struct __maybe_derive_from_binary_function
    : public __derives_from_binary_function<_Tp>::type
{
};

template <class _Tp>
struct __maybe_derive_from_binary_function<_Tp, false>
{
};

template <class _Tp, bool = __has_result_type<_Tp>::value>
struct __weak_result_type_imp
    : public __maybe_derive_from_unary_function<_Tp>,
      public __maybe_derive_from_binary_function<_Tp>
{
    typedef __attribute__((nodebug)) typename _Tp::result_type result_type;
};

template <class _Tp>
struct __weak_result_type_imp<_Tp, false>
    : public __maybe_derive_from_unary_function<_Tp>,
      public __maybe_derive_from_binary_function<_Tp>
{
};

template <class _Tp>
struct __weak_result_type
    : public __weak_result_type_imp<_Tp>
{
};

template <class _Rp>
struct __weak_result_type<_Rp ()>
{
    typedef __attribute__((nodebug)) _Rp result_type;
};

template <class _Rp>
struct __weak_result_type<_Rp (&)()>
{
    typedef __attribute__((nodebug)) _Rp result_type;
};

template <class _Rp>
struct __weak_result_type<_Rp (*)()>
{
    typedef __attribute__((nodebug)) _Rp result_type;
};

template <class _Rp, class _A1>
struct __weak_result_type<_Rp (_A1)>
    : public unary_function<_A1, _Rp>
{
};

template <class _Rp, class _A1>
struct __weak_result_type<_Rp (&)(_A1)>
    : public unary_function<_A1, _Rp>
{
};

template <class _Rp, class _A1>
struct __weak_result_type<_Rp (*)(_A1)>
    : public unary_function<_A1, _Rp>
{
};

template <class _Rp, class _Cp>
struct __weak_result_type<_Rp (_Cp::*)()>
    : public unary_function<_Cp*, _Rp>
{
};

template <class _Rp, class _Cp>
struct __weak_result_type<_Rp (_Cp::*)() const>
    : public unary_function<const _Cp*, _Rp>
{
};

template <class _Rp, class _Cp>
struct __weak_result_type<_Rp (_Cp::*)() volatile>
    : public unary_function<volatile _Cp*, _Rp>
{
};

template <class _Rp, class _Cp>
struct __weak_result_type<_Rp (_Cp::*)() const volatile>
    : public unary_function<const volatile _Cp*, _Rp>
{
};

template <class _Rp, class _A1, class _A2>
struct __weak_result_type<_Rp (_A1, _A2)>
    : public binary_function<_A1, _A2, _Rp>
{
};

template <class _Rp, class _A1, class _A2>
struct __weak_result_type<_Rp (*)(_A1, _A2)>
    : public binary_function<_A1, _A2, _Rp>
{
};

template <class _Rp, class _A1, class _A2>
struct __weak_result_type<_Rp (&)(_A1, _A2)>
    : public binary_function<_A1, _A2, _Rp>
{
};

template <class _Rp, class _Cp, class _A1>
struct __weak_result_type<_Rp (_Cp::*)(_A1)>
    : public binary_function<_Cp*, _A1, _Rp>
{
};

template <class _Rp, class _Cp, class _A1>
struct __weak_result_type<_Rp (_Cp::*)(_A1) const>
    : public binary_function<const _Cp*, _A1, _Rp>
{
};

template <class _Rp, class _Cp, class _A1>
struct __weak_result_type<_Rp (_Cp::*)(_A1) volatile>
    : public binary_function<volatile _Cp*, _A1, _Rp>
{
};

template <class _Rp, class _Cp, class _A1>
struct __weak_result_type<_Rp (_Cp::*)(_A1) const volatile>
    : public binary_function<const volatile _Cp*, _A1, _Rp>
{
};

template <class _Rp, class _A1, class _A2, class _A3, class ..._A4>
struct __weak_result_type<_Rp (_A1, _A2, _A3, _A4...)>
{
    typedef _Rp result_type;
};

template <class _Rp, class _A1, class _A2, class _A3, class ..._A4>
struct __weak_result_type<_Rp (&)(_A1, _A2, _A3, _A4...)>
{
    typedef _Rp result_type;
};

template <class _Rp, class _A1, class _A2, class _A3, class ..._A4>
struct __weak_result_type<_Rp (*)(_A1, _A2, _A3, _A4...)>
{
    typedef _Rp result_type;
};

template <class _Rp, class _Cp, class _A1, class _A2, class ..._A3>
struct __weak_result_type<_Rp (_Cp::*)(_A1, _A2, _A3...)>
{
    typedef _Rp result_type;
};

template <class _Rp, class _Cp, class _A1, class _A2, class ..._A3>
struct __weak_result_type<_Rp (_Cp::*)(_A1, _A2, _A3...) const>
{
    typedef _Rp result_type;
};

template <class _Rp, class _Cp, class _A1, class _A2, class ..._A3>
struct __weak_result_type<_Rp (_Cp::*)(_A1, _A2, _A3...) volatile>
{
    typedef _Rp result_type;
};

template <class _Rp, class _Cp, class _A1, class _A2, class ..._A3>
struct __weak_result_type<_Rp (_Cp::*)(_A1, _A2, _A3...) const volatile>
{
    typedef _Rp result_type;
};

template <class _Tp, class ..._Args>
struct __invoke_return
{
    typedef decltype(__invoke(std::__1::declval<_Tp>(), std::__1::declval<_Args>()...)) type;
};

template <class _Ret>
struct __invoke_void_return_wrapper
{

    template <class ..._Args>
    static _Ret __call(_Args&&... __args) {
        return __invoke(std::__1::forward<_Args>(__args)...);
    }

};

template <>
struct __invoke_void_return_wrapper<void>
{

    template <class ..._Args>
    static void __call(_Args&&... __args) {
        __invoke(std::__1::forward<_Args>(__args)...);
    }

};

template <class _Tp>
class reference_wrapper
    : public __weak_result_type<_Tp>
{
public:

    typedef _Tp type;
private:
    type* __f_;

public:

    __attribute__ ((__exclude_from_explicit_instantiation__)) reference_wrapper(type& __f) noexcept
        : __f_(std::__1::addressof(__f)) {}

    private: reference_wrapper(type&&); public:

    __attribute__ ((__exclude_from_explicit_instantiation__)) operator type& () const noexcept {return *__f_;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) type& get() const noexcept {return *__f_;}

    template <class... _ArgTypes>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    typename __invoke_of<type&, _ArgTypes...>::type
    operator() (_ArgTypes&&... __args) const {
        return __invoke(get(), std::__1::forward<_ArgTypes>(__args)...);
    }

};

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
reference_wrapper<_Tp>
ref(_Tp& __t) noexcept
{
    return reference_wrapper<_Tp>(__t);
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
reference_wrapper<_Tp>
ref(reference_wrapper<_Tp> __t) noexcept
{
    return ref(__t.get());
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
reference_wrapper<const _Tp>
cref(const _Tp& __t) noexcept
{
    return reference_wrapper<const _Tp>(__t);
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
reference_wrapper<const _Tp>
cref(reference_wrapper<_Tp> __t) noexcept
{
    return cref(__t.get());
}

template <class _Tp> void ref(const _Tp&&) = delete;
template <class _Tp> void cref(const _Tp&&) = delete;

template <class _Tp, class, class = void>
struct __is_transparent : false_type {};

template <class _Tp, class _Up>
struct __is_transparent<_Tp, _Up,
                        typename __void_t<typename _Tp::is_transparent>::type>
   : true_type {};

struct allocator_arg_t { explicit allocator_arg_t() = default; };

extern const allocator_arg_t allocator_arg;

template <class _Tp>
struct __has_allocator_type
{
private:
    struct __two {char __lx; char __lxx;};
    template <class _Up> static __two __test(...);
    template <class _Up> static char __test(typename _Up::allocator_type* = 0);
public:
    static const bool value = sizeof(__test<_Tp>(0)) == 1;
};

template <class _Tp, class _Alloc, bool = __has_allocator_type<_Tp>::value>
struct __uses_allocator
    : public integral_constant<bool,
        is_convertible<_Alloc, typename _Tp::allocator_type>::value>
{
};

template <class _Tp, class _Alloc>
struct __uses_allocator<_Tp, _Alloc, false>
    : public false_type
{
};

template <class _Tp, class _Alloc>
struct uses_allocator
    : public __uses_allocator<_Tp, _Alloc>
{
};

template <class _Tp, class _Alloc>
inline constexpr size_t uses_allocator_v = uses_allocator<_Tp, _Alloc>::value;

template <class _Tp, class _Alloc, class ..._Args>
struct __uses_alloc_ctor_imp
{
    typedef __attribute__((nodebug)) typename __uncvref<_Alloc>::type _RawAlloc;
    static const bool __ua = uses_allocator<_Tp, _RawAlloc>::value;
    static const bool __ic =
        is_constructible<_Tp, allocator_arg_t, _Alloc, _Args...>::value;
    static const int value = __ua ? 2 - __ic : 0;
};

template <class _Tp, class _Alloc, class ..._Args>
struct __uses_alloc_ctor
    : integral_constant<int, __uses_alloc_ctor_imp<_Tp, _Alloc, _Args...>::value>
    {};

template <class _Tp, class _Allocator, class... _Args>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void __user_alloc_construct_impl (integral_constant<int, 0>, _Tp *__storage, const _Allocator &, _Args &&... __args )
{
    new (__storage) _Tp (std::__1::forward<_Args>(__args)...);
}

template <class _Tp, class _Allocator, class... _Args>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void __user_alloc_construct_impl (integral_constant<int, 1>, _Tp *__storage, const _Allocator &__a, _Args &&... __args )
{
    new (__storage) _Tp (allocator_arg, __a, std::__1::forward<_Args>(__args)...);
}

template <class _Tp, class _Allocator, class... _Args>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void __user_alloc_construct_impl (integral_constant<int, 2>, _Tp *__storage, const _Allocator &__a, _Args &&... __args )
{
    new (__storage) _Tp (std::__1::forward<_Args>(__args)..., __a);
}

} }
namespace std { inline namespace __1 {

struct input_iterator_tag {};
struct output_iterator_tag {};
struct forward_iterator_tag : public input_iterator_tag {};
struct bidirectional_iterator_tag : public forward_iterator_tag {};
struct random_access_iterator_tag : public bidirectional_iterator_tag {};

template <class _Tp>
struct __has_iterator_typedefs
{
private:
    struct __two {char __lx; char __lxx;};
    template <class _Up> static __two __test(...);
    template <class _Up> static char __test(typename std::__void_t<typename _Up::iterator_category>::type* = 0,
              typename std::__void_t<typename _Up::difference_type>::type* = 0,
              typename std::__void_t<typename _Up::value_type>::type* = 0,
              typename std::__void_t<typename _Up::reference>::type* = 0,
              typename std::__void_t<typename _Up::pointer>::type* = 0
              );
public:
    static const bool value = sizeof(__test<_Tp>(0,0,0,0,0)) == 1;
};

template <class _Tp>
struct __has_iterator_category
{
private:
    struct __two {char __lx; char __lxx;};
    template <class _Up> static __two __test(...);
    template <class _Up> static char __test(typename _Up::iterator_category* = 0);
public:
    static const bool value = sizeof(__test<_Tp>(0)) == 1;
};

template <class _Iter, bool> struct __iterator_traits_impl {};

template <class _Iter>
struct __iterator_traits_impl<_Iter, true>
{
    typedef typename _Iter::difference_type difference_type;
    typedef typename _Iter::value_type value_type;
    typedef typename _Iter::pointer pointer;
    typedef typename _Iter::reference reference;
    typedef typename _Iter::iterator_category iterator_category;
};

template <class _Iter, bool> struct __iterator_traits {};

template <class _Iter>
struct __iterator_traits<_Iter, true>
    : __iterator_traits_impl
      <
        _Iter,
        is_convertible<typename _Iter::iterator_category, input_iterator_tag>::value ||
        is_convertible<typename _Iter::iterator_category, output_iterator_tag>::value
      >
{};

template <class _Iter>
struct iterator_traits
    : __iterator_traits<_Iter, __has_iterator_typedefs<_Iter>::value> {};

template<class _Tp>
struct iterator_traits<_Tp*>
{
    typedef ptrdiff_t difference_type;
    typedef typename remove_cv<_Tp>::type value_type;
    typedef _Tp* pointer;
    typedef _Tp& reference;
    typedef random_access_iterator_tag iterator_category;
};

template <class _Tp, class _Up, bool = __has_iterator_category<iterator_traits<_Tp> >::value>
struct __has_iterator_category_convertible_to
    : public integral_constant<bool, is_convertible<typename iterator_traits<_Tp>::iterator_category, _Up>::value>
{};

template <class _Tp, class _Up>
struct __has_iterator_category_convertible_to<_Tp, _Up, false> : public false_type {};

template <class _Tp>
struct __is_input_iterator : public __has_iterator_category_convertible_to<_Tp, input_iterator_tag> {};

template <class _Tp>
struct __is_forward_iterator : public __has_iterator_category_convertible_to<_Tp, forward_iterator_tag> {};

template <class _Tp>
struct __is_bidirectional_iterator : public __has_iterator_category_convertible_to<_Tp, bidirectional_iterator_tag> {};

template <class _Tp>
struct __is_random_access_iterator : public __has_iterator_category_convertible_to<_Tp, random_access_iterator_tag> {};

template <class _Tp>
struct __is_exactly_input_iterator
    : public integral_constant<bool,
         __has_iterator_category_convertible_to<_Tp, input_iterator_tag>::value &&
        !__has_iterator_category_convertible_to<_Tp, forward_iterator_tag>::value> {};

template<class _InputIterator>
using __iter_value_type = typename iterator_traits<_InputIterator>::value_type;

template<class _InputIterator>
using __iter_key_type = remove_const_t<typename iterator_traits<_InputIterator>::value_type::first_type>;

template<class _InputIterator>
using __iter_mapped_type = typename iterator_traits<_InputIterator>::value_type::second_type;

template<class _InputIterator>
using __iter_to_alloc_type = pair<
    add_const_t<typename iterator_traits<_InputIterator>::value_type::first_type>,
    typename iterator_traits<_InputIterator>::value_type::second_type>;

template<class _Category, class _Tp, class _Distance = ptrdiff_t,
         class _Pointer = _Tp*, class _Reference = _Tp&>
struct iterator
{
    typedef _Tp value_type;
    typedef _Distance difference_type;
    typedef _Pointer pointer;
    typedef _Reference reference;
    typedef _Category iterator_category;
};

template <class _InputIter>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
void __advance(_InputIter& __i,
             typename iterator_traits<_InputIter>::difference_type __n, input_iterator_tag)
{
    for (; __n > 0; --__n)
        ++__i;
}

template <class _BiDirIter>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
void __advance(_BiDirIter& __i,
             typename iterator_traits<_BiDirIter>::difference_type __n, bidirectional_iterator_tag)
{
    if (__n >= 0)
        for (; __n > 0; --__n)
            ++__i;
    else
        for (; __n < 0; ++__n)
            --__i;
}

template <class _RandIter>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
void __advance(_RandIter& __i,
             typename iterator_traits<_RandIter>::difference_type __n, random_access_iterator_tag)
{
   __i += __n;
}

template <class _InputIter>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
void advance(_InputIter& __i,
             typename iterator_traits<_InputIter>::difference_type __n)
{
    ((void)0);

    __advance(__i, __n, typename iterator_traits<_InputIter>::iterator_category());
}

template <class _InputIter>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename iterator_traits<_InputIter>::difference_type
__distance(_InputIter __first, _InputIter __last, input_iterator_tag)
{
    typename iterator_traits<_InputIter>::difference_type __r(0);
    for (; __first != __last; ++__first)
        ++__r;
    return __r;
}

template <class _RandIter>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename iterator_traits<_RandIter>::difference_type
__distance(_RandIter __first, _RandIter __last, random_access_iterator_tag)
{
    return __last - __first;
}

template <class _InputIter>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename iterator_traits<_InputIter>::difference_type
distance(_InputIter __first, _InputIter __last)
{
    return __distance(__first, __last, typename iterator_traits<_InputIter>::iterator_category());
}

template <class _InputIter>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename enable_if
<
    __is_input_iterator<_InputIter>::value,
    _InputIter
>::type
next(_InputIter __x,
     typename iterator_traits<_InputIter>::difference_type __n = 1)
{
    ((void)0);

    std::__1::advance(__x, __n);
    return __x;
}

template <class _InputIter>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename enable_if
<
    __is_input_iterator<_InputIter>::value,
    _InputIter
>::type
prev(_InputIter __x,
     typename iterator_traits<_InputIter>::difference_type __n = 1)
{
    ((void)0);

    std::__1::advance(__x, -__n);
    return __x;
}

template <class _Tp, class = void>
struct __is_stashing_iterator : false_type {};

template <class _Tp>
struct __is_stashing_iterator<_Tp, typename __void_t<typename _Tp::__stashing_iterator_tag>::type>
  : true_type {};

template <class _Iter>
class reverse_iterator
    : public iterator<typename iterator_traits<_Iter>::iterator_category,
                      typename iterator_traits<_Iter>::value_type,
                      typename iterator_traits<_Iter>::difference_type,
                      typename iterator_traits<_Iter>::pointer,
                      typename iterator_traits<_Iter>::reference>
{
private:
                _Iter __t;

    static_assert(!__is_stashing_iterator<_Iter>::value,
      "The specified iterator type cannot be used with reverse_iterator; "
      "Using stashing iterators with reverse_iterator causes undefined behavior");

protected:
    _Iter current;
public:
    typedef _Iter iterator_type;
    typedef typename iterator_traits<_Iter>::difference_type difference_type;
    typedef typename iterator_traits<_Iter>::reference reference;
    typedef typename iterator_traits<_Iter>::pointer pointer;

    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    reverse_iterator() : __t(), current() {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    explicit reverse_iterator(_Iter __x) : __t(__x), current(__x) {}
    template <class _Up>
        __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        reverse_iterator(const reverse_iterator<_Up>& __u) : __t(__u.base()), current(__u.base()) {}
    template <class _Up>
        __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        reverse_iterator& operator=(const reverse_iterator<_Up>& __u)
            { __t = current = __u.base(); return *this; }
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    _Iter base() const {return current;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    reference operator*() const {_Iter __tmp = current; return *--__tmp;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    pointer operator->() const {return std::__1::addressof(operator*());}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    reverse_iterator& operator++() {--current; return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    reverse_iterator operator++(int) {reverse_iterator __tmp(*this); --current; return __tmp;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    reverse_iterator& operator--() {++current; return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    reverse_iterator operator--(int) {reverse_iterator __tmp(*this); ++current; return __tmp;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    reverse_iterator operator+ (difference_type __n) const {return reverse_iterator(current - __n);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    reverse_iterator& operator+=(difference_type __n) {current -= __n; return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    reverse_iterator operator- (difference_type __n) const {return reverse_iterator(current + __n);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    reverse_iterator& operator-=(difference_type __n) {current += __n; return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    reference operator[](difference_type __n) const {return *(*this + __n);}
};

template <class _Iter1, class _Iter2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator==(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __x.base() == __y.base();
}

template <class _Iter1, class _Iter2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator<(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __x.base() > __y.base();
}

template <class _Iter1, class _Iter2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator!=(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __x.base() != __y.base();
}

template <class _Iter1, class _Iter2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator>(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __x.base() < __y.base();
}

template <class _Iter1, class _Iter2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator>=(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __x.base() <= __y.base();
}

template <class _Iter1, class _Iter2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator<=(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __x.base() >= __y.base();
}

template <class _Iter1, class _Iter2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
auto
operator-(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
-> decltype(__y.base() - __x.base())
{
    return __y.base() - __x.base();
}

template <class _Iter>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
reverse_iterator<_Iter>
operator+(typename reverse_iterator<_Iter>::difference_type __n, const reverse_iterator<_Iter>& __x)
{
    return reverse_iterator<_Iter>(__x.base() - __n);
}

template <class _Iter>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
reverse_iterator<_Iter> make_reverse_iterator(_Iter __i)
{
    return reverse_iterator<_Iter>(__i);
}

template <class _Container>
class back_insert_iterator
    : public iterator<output_iterator_tag,
                      void,
                      void,
                      void,
                      void>
{
protected:
    _Container* container;
public:
    typedef _Container container_type;

    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit back_insert_iterator(_Container& __x) : container(std::__1::addressof(__x)) {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) back_insert_iterator& operator=(const typename _Container::value_type& __value_)
        {container->push_back(__value_); return *this;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) back_insert_iterator& operator=(typename _Container::value_type&& __value_)
        {container->push_back(std::__1::move(__value_)); return *this;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) back_insert_iterator& operator*() {return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) back_insert_iterator& operator++() {return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) back_insert_iterator operator++(int) {return *this;}
};

template <class _Container>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
back_insert_iterator<_Container>
back_inserter(_Container& __x)
{
    return back_insert_iterator<_Container>(__x);
}

template <class _Container>
class front_insert_iterator
    : public iterator<output_iterator_tag,
                      void,
                      void,
                      void,
                      void>
{
protected:
    _Container* container;
public:
    typedef _Container container_type;

    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit front_insert_iterator(_Container& __x) : container(std::__1::addressof(__x)) {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) front_insert_iterator& operator=(const typename _Container::value_type& __value_)
        {container->push_front(__value_); return *this;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) front_insert_iterator& operator=(typename _Container::value_type&& __value_)
        {container->push_front(std::__1::move(__value_)); return *this;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) front_insert_iterator& operator*() {return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) front_insert_iterator& operator++() {return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) front_insert_iterator operator++(int) {return *this;}
};

template <class _Container>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
front_insert_iterator<_Container>
front_inserter(_Container& __x)
{
    return front_insert_iterator<_Container>(__x);
}

template <class _Container>
class insert_iterator
    : public iterator<output_iterator_tag,
                      void,
                      void,
                      void,
                      void>
{
protected:
    _Container* container;
    typename _Container::iterator iter;
public:
    typedef _Container container_type;

    __attribute__ ((__exclude_from_explicit_instantiation__)) insert_iterator(_Container& __x, typename _Container::iterator __i)
        : container(std::__1::addressof(__x)), iter(__i) {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) insert_iterator& operator=(const typename _Container::value_type& __value_)
        {iter = container->insert(iter, __value_); ++iter; return *this;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) insert_iterator& operator=(typename _Container::value_type&& __value_)
        {iter = container->insert(iter, std::__1::move(__value_)); ++iter; return *this;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) insert_iterator& operator*() {return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) insert_iterator& operator++() {return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) insert_iterator& operator++(int) {return *this;}
};

template <class _Container>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
insert_iterator<_Container>
inserter(_Container& __x, typename _Container::iterator __i)
{
    return insert_iterator<_Container>(__x, __i);
}


template <class _Iter> class __wrap_iter;

template <class _Iter1, class _Iter2>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator==(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) noexcept;

template <class _Iter1, class _Iter2>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator<(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) noexcept;

template <class _Iter1, class _Iter2>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator!=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) noexcept;

template <class _Iter1, class _Iter2>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator>(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) noexcept;

template <class _Iter1, class _Iter2>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator>=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) noexcept;

template <class _Iter1, class _Iter2>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator<=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) noexcept;

template <class _Iter1, class _Iter2>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
auto
operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) noexcept
-> decltype(__x.base() - __y.base());

template <class _Iter>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
__wrap_iter<_Iter>
operator+(typename __wrap_iter<_Iter>::difference_type, __wrap_iter<_Iter>) noexcept;

template <class _Ip, class _Op> _Op __attribute__ ((__exclude_from_explicit_instantiation__)) copy(_Ip, _Ip, _Op);
template <class _B1, class _B2> _B2 __attribute__ ((__exclude_from_explicit_instantiation__)) copy_backward(_B1, _B1, _B2);
template <class _Ip, class _Op> _Op __attribute__ ((__exclude_from_explicit_instantiation__)) move(_Ip, _Ip, _Op);
template <class _B1, class _B2> _B2 __attribute__ ((__exclude_from_explicit_instantiation__)) move_backward(_B1, _B1, _B2);

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename enable_if
<
    is_trivially_copy_assignable<_Tp>::value,
    _Tp*
>::type
__unwrap_iter(__wrap_iter<_Tp*>);

template <class _Iter>
class __wrap_iter
{
public:
    typedef _Iter iterator_type;
    typedef typename iterator_traits<iterator_type>::iterator_category iterator_category;
    typedef typename iterator_traits<iterator_type>::value_type value_type;
    typedef typename iterator_traits<iterator_type>::difference_type difference_type;
    typedef typename iterator_traits<iterator_type>::pointer pointer;
    typedef typename iterator_traits<iterator_type>::reference reference;
private:
    iterator_type __i;
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __wrap_iter() noexcept

                : __i{}

    {

    }
    template <class _Up> __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        __wrap_iter(const __wrap_iter<_Up>& __u,
            typename enable_if<is_convertible<_Up, iterator_type>::value>::type* = 0) noexcept
            : __i(__u.base())
    {
    }
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr reference operator*() const noexcept
    {
        return *__i;
    }
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr pointer operator->() const noexcept
    {
        return (pointer)std::__1::addressof(*__i);
    }
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __wrap_iter& operator++() noexcept
    {
        ++__i;
        return *this;
    }
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __wrap_iter operator++(int) noexcept
        {__wrap_iter __tmp(*this); ++(*this); return __tmp;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __wrap_iter& operator--() noexcept
    {

        --__i;
        return *this;
    }
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __wrap_iter operator--(int) noexcept
        {__wrap_iter __tmp(*this); --(*this); return __tmp;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __wrap_iter operator+ (difference_type __n) const noexcept
        {__wrap_iter __w(*this); __w += __n; return __w;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __wrap_iter& operator+=(difference_type __n) noexcept
    {

        __i += __n;
        return *this;
    }
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __wrap_iter operator- (difference_type __n) const noexcept
        {return *this + (-__n);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __wrap_iter& operator-=(difference_type __n) noexcept
        {*this += -__n; return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr reference operator[](difference_type __n) const noexcept
    {

        return __i[__n];
    }

    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr iterator_type base() const noexcept {return __i;}

private:

    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __wrap_iter(iterator_type __x) noexcept : __i(__x) {}

    template <class _Up> friend class __wrap_iter;
    template <class _CharT, class _Traits, class _Alloc> friend class basic_string;
    template <class _Tp, class _Alloc> friend class vector;
    template <class _Tp, size_t> friend class span;

    template <class _Iter1, class _Iter2>
    constexpr friend
    bool
    operator==(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) noexcept;

    template <class _Iter1, class _Iter2>
    constexpr friend
    bool
    operator<(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) noexcept;

    template <class _Iter1, class _Iter2>
    constexpr friend
    bool
    operator!=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) noexcept;

    template <class _Iter1, class _Iter2>
    constexpr friend
    bool
    operator>(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) noexcept;

    template <class _Iter1, class _Iter2>
    constexpr friend
    bool
    operator>=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) noexcept;

    template <class _Iter1, class _Iter2>
    constexpr friend
    bool
    operator<=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) noexcept;

    template <class _Iter1, class _Iter2>
    constexpr friend
    auto
    operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) noexcept
    -> decltype(__x.base() - __y.base());

    template <class _Iter1>
    constexpr friend
    __wrap_iter<_Iter1>
    operator+(typename __wrap_iter<_Iter1>::difference_type, __wrap_iter<_Iter1>) noexcept;

    template <class _Ip, class _Op> friend _Op copy(_Ip, _Ip, _Op);
    template <class _B1, class _B2> friend _B2 copy_backward(_B1, _B1, _B2);
    template <class _Ip, class _Op> friend _Op move(_Ip, _Ip, _Op);
    template <class _B1, class _B2> friend _B2 move_backward(_B1, _B1, _B2);

    template <class _Tp>
    constexpr friend
    typename enable_if
    <
        is_trivially_copy_assignable<_Tp>::value,
        _Tp*
    >::type
    __unwrap_iter(__wrap_iter<_Tp*>);
};

template <class _Iter1, class _Iter2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator==(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) noexcept
{
    return __x.base() == __y.base();
}

template <class _Iter1, class _Iter2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator<(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) noexcept
{

    return __x.base() < __y.base();
}

template <class _Iter1, class _Iter2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator!=(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) noexcept
{
    return !(__x == __y);
}

template <class _Iter1, class _Iter2>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
auto
operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) noexcept
-> decltype(__x.base() - __y.base())
{

    return __x.base() - __y.base();
}
template <class _Iter>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
__wrap_iter<_Iter>
operator+(typename __wrap_iter<_Iter>::difference_type __n,
          __wrap_iter<_Iter> __x) noexcept
{
    __x += __n;
    return __x;
}

template <class _Iter>
struct __libcpp_is_trivial_iterator
    : public bool_constant<(is_pointer<_Iter>::value)> {};

template <class _Iter>
struct __libcpp_is_trivial_iterator<reverse_iterator<_Iter> >
    : public bool_constant<(__libcpp_is_trivial_iterator<_Iter>::value)> {};

template <class _Iter>
struct __libcpp_is_trivial_iterator<__wrap_iter<_Iter> >
    : public bool_constant<(__libcpp_is_trivial_iterator<_Iter>::value)> {};

template <class _Tp, size_t _Np>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_Tp*
begin(_Tp (&__array)[_Np])
{
    return __array;
}

template <class _Tp, size_t _Np>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_Tp*
end(_Tp (&__array)[_Np])
{
    return __array + _Np;
}
template <class _Cont>
 __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr auto size(const _Cont& __c)
noexcept(noexcept(__c.size()))
-> decltype (__c.size())
{ return __c.size(); }

template <class _Tp, size_t _Sz>
 __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr size_t size(const _Tp (&)[_Sz]) noexcept { return _Sz; }
template <class _Cont>
                              __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr auto empty(const _Cont& __c)
noexcept(noexcept(__c.empty()))
-> decltype (__c.empty())
{ return __c.empty(); }

template <class _Tp, size_t _Sz>
                              __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr bool empty(const _Tp (&)[_Sz]) noexcept { return false; }

template <class _Ep>
                              __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr bool empty(initializer_list<_Ep> __il) noexcept { return __il.size() == 0; }

template <class _Cont> constexpr
 __attribute__ ((__exclude_from_explicit_instantiation__))
auto data(_Cont& __c)
noexcept(noexcept(__c.data()))
-> decltype (__c.data())
{ return __c.data(); }

template <class _Cont> constexpr
 __attribute__ ((__exclude_from_explicit_instantiation__))
auto data(const _Cont& __c)
noexcept(noexcept(__c.data()))
-> decltype (__c.data())
{ return __c.data(); }

template <class _Tp, size_t _Sz>
 __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr _Tp* data(_Tp (&__array)[_Sz]) noexcept { return __array; }

template <class _Ep>
 __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr const _Ep* data(initializer_list<_Ep> __il) noexcept { return __il.begin(); }

} }
namespace std { inline namespace __1 {

template <size_t _Ip, class _Hp,
          bool=is_empty<_Hp>::value && !__libcpp_is_final<_Hp>::value
         >
class __tuple_leaf;

template <size_t _Ip, class _Hp, bool _Ep>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void swap(__tuple_leaf<_Ip, _Hp, _Ep>& __x, __tuple_leaf<_Ip, _Hp, _Ep>& __y)
    noexcept(__is_nothrow_swappable<_Hp>::value)
{
    swap(__x.get(), __y.get());
}

template <size_t _Ip, class _Hp, bool>
class __tuple_leaf
{
    _Hp __value_;

    template <class _Tp>
    static constexpr bool __can_bind_reference() {

      return !__reference_binds_to_temporary(_Hp, _Tp);

    }

    __tuple_leaf& operator=(const __tuple_leaf&);
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __tuple_leaf()
             noexcept(is_nothrow_default_constructible<_Hp>::value) : __value_()
       {static_assert(!is_reference<_Hp>::value,
              "Attempted to default construct a reference element in a tuple");}

    template <class _Alloc>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        __tuple_leaf(integral_constant<int, 0>, const _Alloc&)
            : __value_()
        {static_assert(!is_reference<_Hp>::value,
              "Attempted to default construct a reference element in a tuple");}

    template <class _Alloc>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        __tuple_leaf(integral_constant<int, 1>, const _Alloc& __a)
            : __value_(allocator_arg_t(), __a)
        {static_assert(!is_reference<_Hp>::value,
              "Attempted to default construct a reference element in a tuple");}

    template <class _Alloc>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        __tuple_leaf(integral_constant<int, 2>, const _Alloc& __a)
            : __value_(__a)
        {static_assert(!is_reference<_Hp>::value,
              "Attempted to default construct a reference element in a tuple");}

    template <class _Tp,
              class = _EnableIf<
                  _And<
                      _IsNotSame<__uncvref_t<_Tp>, __tuple_leaf>,
                      is_constructible<_Hp, _Tp>
                    >::value
                >
            >
        __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        explicit __tuple_leaf(_Tp&& __t) noexcept((is_nothrow_constructible<_Hp, _Tp>::value))
            : __value_(std::__1::forward<_Tp>(__t))
        {static_assert(__can_bind_reference<_Tp&&>(),
       "Attempted construction of reference element binds to a temporary whose lifetime has ended");}

    template <class _Tp, class _Alloc>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        explicit __tuple_leaf(integral_constant<int, 0>, const _Alloc&, _Tp&& __t)
            : __value_(std::__1::forward<_Tp>(__t))
        {static_assert(__can_bind_reference<_Tp&&>(),
       "Attempted construction of reference element binds to a temporary whose lifetime has ended");}

    template <class _Tp, class _Alloc>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        explicit __tuple_leaf(integral_constant<int, 1>, const _Alloc& __a, _Tp&& __t)
            : __value_(allocator_arg_t(), __a, std::__1::forward<_Tp>(__t))
        {static_assert(!is_reference<_Hp>::value,
            "Attempted to uses-allocator construct a reference element in a tuple");}

    template <class _Tp, class _Alloc>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        explicit __tuple_leaf(integral_constant<int, 2>, const _Alloc& __a, _Tp&& __t)
            : __value_(std::__1::forward<_Tp>(__t), __a)
        {static_assert(!is_reference<_Hp>::value,
           "Attempted to uses-allocator construct a reference element in a tuple");}

    __tuple_leaf(const __tuple_leaf& __t) = default;
    __tuple_leaf(__tuple_leaf&& __t) = default;

    template <class _Tp>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        __tuple_leaf&
        operator=(_Tp&& __t) noexcept((is_nothrow_assignable<_Hp&, _Tp>::value))
        {
            __value_ = std::__1::forward<_Tp>(__t);
            return *this;
        }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    int swap(__tuple_leaf& __t) noexcept(__is_nothrow_swappable<__tuple_leaf>::value)
    {
        std::__1::swap(*this, __t);
        return 0;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr _Hp& get() noexcept {return __value_;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr const _Hp& get() const noexcept {return __value_;}
};

template <size_t _Ip, class _Hp>
class __tuple_leaf<_Ip, _Hp, true>
    : private _Hp
{

    __tuple_leaf& operator=(const __tuple_leaf&);
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __tuple_leaf()
             noexcept(is_nothrow_default_constructible<_Hp>::value) {}

    template <class _Alloc>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        __tuple_leaf(integral_constant<int, 0>, const _Alloc&) {}

    template <class _Alloc>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        __tuple_leaf(integral_constant<int, 1>, const _Alloc& __a)
            : _Hp(allocator_arg_t(), __a) {}

    template <class _Alloc>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        __tuple_leaf(integral_constant<int, 2>, const _Alloc& __a)
            : _Hp(__a) {}

    template <class _Tp,
              class = _EnableIf<
                  _And<
                    _IsNotSame<__uncvref_t<_Tp>, __tuple_leaf>,
                    is_constructible<_Hp, _Tp>
                  >::value
                >
            >
        __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        explicit __tuple_leaf(_Tp&& __t) noexcept((is_nothrow_constructible<_Hp, _Tp>::value))
            : _Hp(std::__1::forward<_Tp>(__t)) {}

    template <class _Tp, class _Alloc>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        explicit __tuple_leaf(integral_constant<int, 0>, const _Alloc&, _Tp&& __t)
            : _Hp(std::__1::forward<_Tp>(__t)) {}

    template <class _Tp, class _Alloc>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        explicit __tuple_leaf(integral_constant<int, 1>, const _Alloc& __a, _Tp&& __t)
            : _Hp(allocator_arg_t(), __a, std::__1::forward<_Tp>(__t)) {}

    template <class _Tp, class _Alloc>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        explicit __tuple_leaf(integral_constant<int, 2>, const _Alloc& __a, _Tp&& __t)
            : _Hp(std::__1::forward<_Tp>(__t), __a) {}

    __tuple_leaf(__tuple_leaf const &) = default;
    __tuple_leaf(__tuple_leaf &&) = default;

    template <class _Tp>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        __tuple_leaf&
        operator=(_Tp&& __t) noexcept((is_nothrow_assignable<_Hp&, _Tp>::value))
        {
            _Hp::operator=(std::__1::forward<_Tp>(__t));
            return *this;
        }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    int
    swap(__tuple_leaf& __t) noexcept(__is_nothrow_swappable<__tuple_leaf>::value)
    {
        std::__1::swap(*this, __t);
        return 0;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr _Hp& get() noexcept {return static_cast<_Hp&>(*this);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr const _Hp& get() const noexcept {return static_cast<const _Hp&>(*this);}
};

template <class ..._Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
void __swallow(_Tp&&...) noexcept {}

template <class _Tp>
struct __all_default_constructible;

template <class ..._Tp>
struct __all_default_constructible<__tuple_types<_Tp...>>
    : __all<is_default_constructible<_Tp>::value...>
{ };

template<class _Indx, class ..._Tp> struct __tuple_impl;

template<size_t ..._Indx, class ..._Tp>
struct __declspec(empty_bases) __tuple_impl<__tuple_indices<_Indx...>, _Tp...>
    : public __tuple_leaf<_Indx, _Tp>...
{
    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr __tuple_impl()
        noexcept(__all<is_nothrow_default_constructible<_Tp>::value...>::value) {}

    template <size_t ..._Uf, class ..._Tf,
              size_t ..._Ul, class ..._Tl, class ..._Up>
        __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        explicit
        __tuple_impl(__tuple_indices<_Uf...>, __tuple_types<_Tf...>,
                     __tuple_indices<_Ul...>, __tuple_types<_Tl...>,
                     _Up&&... __u)
                     noexcept((__all<is_nothrow_constructible<_Tf, _Up>::value...>::value && __all<is_nothrow_default_constructible<_Tl>::value...>::value)) :

            __tuple_leaf<_Uf, _Tf>(std::__1::forward<_Up>(__u))...,
            __tuple_leaf<_Ul, _Tl>()...
            {}

    template <class _Alloc, size_t ..._Uf, class ..._Tf,
              size_t ..._Ul, class ..._Tl, class ..._Up>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        explicit
        __tuple_impl(allocator_arg_t, const _Alloc& __a,
                     __tuple_indices<_Uf...>, __tuple_types<_Tf...>,
                     __tuple_indices<_Ul...>, __tuple_types<_Tl...>,
                     _Up&&... __u) :
            __tuple_leaf<_Uf, _Tf>(__uses_alloc_ctor<_Tf, _Alloc, _Up>(), __a,
            std::__1::forward<_Up>(__u))...,
            __tuple_leaf<_Ul, _Tl>(__uses_alloc_ctor<_Tl, _Alloc>(), __a)...
            {}

    template <class _Tuple,
              class = typename enable_if
                      <
                         __tuple_constructible<_Tuple, tuple<_Tp...> >::value
                      >::type
             >
        __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        __tuple_impl(_Tuple&& __t) noexcept((__all<is_nothrow_constructible<_Tp, typename tuple_element<_Indx, typename __make_tuple_types<_Tuple>::type>::type>::value...>::value))

            : __tuple_leaf<_Indx, _Tp>(std::__1::forward<typename tuple_element<_Indx,
                                       typename __make_tuple_types<_Tuple>::type>::type>(std::__1::get<_Indx>(__t)))...
            {}

    template <class _Alloc, class _Tuple,
              class = typename enable_if
                      <
                         __tuple_constructible<_Tuple, tuple<_Tp...> >::value
                      >::type
             >
        __attribute__ ((__exclude_from_explicit_instantiation__))
        __tuple_impl(allocator_arg_t, const _Alloc& __a, _Tuple&& __t)
            : __tuple_leaf<_Indx, _Tp>(__uses_alloc_ctor<_Tp, _Alloc, typename tuple_element<_Indx,
                                       typename __make_tuple_types<_Tuple>::type>::type>(), __a,
                                       std::__1::forward<typename tuple_element<_Indx,
                                       typename __make_tuple_types<_Tuple>::type>::type>(std::__1::get<_Indx>(__t)))...
            {}

    template <class _Tuple>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        typename enable_if
        <
            __tuple_assignable<_Tuple, tuple<_Tp...> >::value,
            __tuple_impl&
        >::type
        operator=(_Tuple&& __t) noexcept((__all<is_nothrow_assignable<_Tp&, typename tuple_element<_Indx, typename __make_tuple_types<_Tuple>::type>::type>::value...>::value))

        {
            __swallow(__tuple_leaf<_Indx, _Tp>::operator=(std::__1::forward<typename tuple_element<_Indx,
                                       typename __make_tuple_types<_Tuple>::type>::type>(std::__1::get<_Indx>(__t)))...);
            return *this;
        }

    __tuple_impl(const __tuple_impl&) = default;
    __tuple_impl(__tuple_impl&&) = default;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __tuple_impl&
    operator=(const __tuple_impl& __t) noexcept((__all<is_nothrow_copy_assignable<_Tp>::value...>::value))
    {
        __swallow(__tuple_leaf<_Indx, _Tp>::operator=(static_cast<const __tuple_leaf<_Indx, _Tp>&>(__t).get())...);
        return *this;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __tuple_impl&
    operator=(__tuple_impl&& __t) noexcept((__all<is_nothrow_move_assignable<_Tp>::value...>::value))
    {
        __swallow(__tuple_leaf<_Indx, _Tp>::operator=(std::__1::forward<_Tp>(static_cast<__tuple_leaf<_Indx, _Tp>&>(__t).get()))...);
        return *this;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void swap(__tuple_impl& __t)
        noexcept(__all<__is_nothrow_swappable<_Tp>::value...>::value)
    {
        __swallow(__tuple_leaf<_Indx, _Tp>::swap(static_cast<__tuple_leaf<_Indx, _Tp>&>(__t))...);
    }
};

template <class ..._Tp>
class tuple
{
    typedef __tuple_impl<typename __make_tuple_indices<sizeof...(_Tp)>::type, _Tp...> _BaseT;

    _BaseT __base_;

    static constexpr bool _EnableImplicitReducedArityExtension = false;

    template <class ..._Args>
    struct _PackExpandsToThisTuple : false_type {};

    template <class _Arg>
    struct _PackExpandsToThisTuple<_Arg>
        : is_same<typename __uncvref<_Arg>::type, tuple> {};

    template <bool _MaybeEnable, class _Dummy = void>
    struct _CheckArgsConstructor : __check_tuple_constructor_fail {};

    template <class _Dummy>
    struct _CheckArgsConstructor<true, _Dummy>
    {
        template <int&...>
        static constexpr bool __enable_implicit_default() {
           return __all<__is_implicitly_default_constructible<_Tp>::value... >::value;
        }

        template <int&...>
        static constexpr bool __enable_explicit_default() {
            return
                __all<is_default_constructible<_Tp>::value...>::value &&
                !__enable_implicit_default< >();
        }

        template <class ..._Args>
        static constexpr bool __enable_explicit() {
            return
                __tuple_constructible<
                    tuple<_Args...>,
                    typename __make_tuple_types<tuple,
                             sizeof...(_Args) < sizeof...(_Tp) ?
                                 sizeof...(_Args) :
                                 sizeof...(_Tp)>::type
                >::value &&
                !__tuple_convertible<
                    tuple<_Args...>,
                    typename __make_tuple_types<tuple,
                             sizeof...(_Args) < sizeof...(_Tp) ?
                                 sizeof...(_Args) :
                                 sizeof...(_Tp)>::type
                >::value &&
                __all_default_constructible<
                    typename __make_tuple_types<tuple, sizeof...(_Tp),
                             sizeof...(_Args) < sizeof...(_Tp) ?
                                 sizeof...(_Args) :
                                 sizeof...(_Tp)>::type
                >::value;
        }

        template <class ..._Args>
        static constexpr bool __enable_implicit() {
            return
               __tuple_constructible<
                    tuple<_Args...>,
                    typename __make_tuple_types<tuple,
                             sizeof...(_Args) < sizeof...(_Tp) ?
                                 sizeof...(_Args) :
                                 sizeof...(_Tp)>::type
                >::value &&
                __tuple_convertible<
                    tuple<_Args...>,
                    typename __make_tuple_types<tuple,
                             sizeof...(_Args) < sizeof...(_Tp) ?
                                 sizeof...(_Args) :
                                 sizeof...(_Tp)>::type
                >::value &&
                __all_default_constructible<
                    typename __make_tuple_types<tuple, sizeof...(_Tp),
                             sizeof...(_Args) < sizeof...(_Tp) ?
                                 sizeof...(_Args) :
                                 sizeof...(_Tp)>::type
                >::value;
        }
    };

    template <bool _MaybeEnable,
              bool = sizeof...(_Tp) == 1,
              class _Dummy = void>
    struct _CheckTupleLikeConstructor : __check_tuple_constructor_fail {};

    template <class _Dummy>
    struct _CheckTupleLikeConstructor<true, false, _Dummy>
    {
        template <class _Tuple>
        static constexpr bool __enable_implicit() {
            return __tuple_constructible<_Tuple, tuple>::value
                && __tuple_convertible<_Tuple, tuple>::value;
        }

        template <class _Tuple>
        static constexpr bool __enable_explicit() {
            return __tuple_constructible<_Tuple, tuple>::value
               && !__tuple_convertible<_Tuple, tuple>::value;
        }
    };

    template <class _Dummy>
    struct _CheckTupleLikeConstructor<true, true, _Dummy>
    {

        template <class _Tuple>
        using _PreferTupleLikeConstructor = _Or<

            _IsSame<__uncvref_t<_Tuple>, tuple>,
            _Lazy<_And,
                _Not<is_constructible<_Tp..., _Tuple>>,
                _Not<is_convertible<_Tuple, _Tp...>>
            >
        >;

        template <class _Tuple>
        static constexpr bool __enable_implicit() {
            return _And<
                __tuple_constructible<_Tuple, tuple>,
                __tuple_convertible<_Tuple, tuple>,
                _PreferTupleLikeConstructor<_Tuple>
            >::value;
        }

        template <class _Tuple>
        static constexpr bool __enable_explicit() {
            return _And<
                __tuple_constructible<_Tuple, tuple>,
                _PreferTupleLikeConstructor<_Tuple>,
                _Not<__tuple_convertible<_Tuple, tuple>>
            >::value;
        }
    };

    template <class _Tuple, bool _DisableIfLValue>
    using _EnableImplicitTupleLikeConstructor = _EnableIf<
                         _CheckTupleLikeConstructor<
                             __tuple_like_with_size<_Tuple, sizeof...(_Tp)>::value
                             && !_PackExpandsToThisTuple<_Tuple>::value
                             && (!is_lvalue_reference<_Tuple>::value || !_DisableIfLValue)
                         >::template __enable_implicit<_Tuple>(),
                         bool
                      >;

    template <class _Tuple, bool _DisableIfLValue>
    using _EnableExplicitTupleLikeConstructor = _EnableIf<
                         _CheckTupleLikeConstructor<
                             __tuple_like_with_size<_Tuple, sizeof...(_Tp)>::value
                             && !_PackExpandsToThisTuple<_Tuple>::value
                             && (!is_lvalue_reference<_Tuple>::value || !_DisableIfLValue)
                         >::template __enable_explicit<_Tuple>(),
                         bool
                      >;
    template <size_t _Jp, class ..._Up> friend constexpr
        typename tuple_element<_Jp, tuple<_Up...> >::type& get(tuple<_Up...>&) noexcept;
    template <size_t _Jp, class ..._Up> friend constexpr
        const typename tuple_element<_Jp, tuple<_Up...> >::type& get(const tuple<_Up...>&) noexcept;
    template <size_t _Jp, class ..._Up> friend constexpr
        typename tuple_element<_Jp, tuple<_Up...> >::type&& get(tuple<_Up...>&&) noexcept;
    template <size_t _Jp, class ..._Up> friend constexpr
        const typename tuple_element<_Jp, tuple<_Up...> >::type&& get(const tuple<_Up...>&&) noexcept;
public:

    template <bool _Dummy = true, _EnableIf<
        _CheckArgsConstructor<_Dummy>::__enable_implicit_default()
    , void*> = nullptr>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    tuple()
        noexcept(__all<is_nothrow_default_constructible<_Tp>::value...>::value) {}

    template <bool _Dummy = true, _EnableIf<
        _CheckArgsConstructor<_Dummy>::__enable_explicit_default()
    , void*> = nullptr>
    explicit __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    tuple()
        noexcept(__all<is_nothrow_default_constructible<_Tp>::value...>::value) {}

    tuple(tuple const&) = default;
    tuple(tuple&&) = default;

    template <class _AllocArgT, class _Alloc, _EnableIf<
             _CheckArgsConstructor<_IsSame<allocator_arg_t, _AllocArgT>::value >::__enable_implicit_default()
      , void*> = nullptr
    >
    __attribute__ ((__exclude_from_explicit_instantiation__))
    tuple(_AllocArgT, _Alloc const& __a)
      : __base_(allocator_arg_t(), __a,
                    __tuple_indices<>(), __tuple_types<>(),
                    typename __make_tuple_indices<sizeof...(_Tp), 0>::type(),
                    __tuple_types<_Tp...>()) {}

    template <class _AllocArgT, class _Alloc, _EnableIf<
             _CheckArgsConstructor<_IsSame<allocator_arg_t, _AllocArgT>::value>::__enable_explicit_default()
      , void*> = nullptr
    >
    explicit __attribute__ ((__exclude_from_explicit_instantiation__))
    tuple(_AllocArgT, _Alloc const& __a)
      : __base_(allocator_arg_t(), __a,
                    __tuple_indices<>(), __tuple_types<>(),
                    typename __make_tuple_indices<sizeof...(_Tp), 0>::type(),
                    __tuple_types<_Tp...>()) {}

    template <bool _Dummy = true,
              typename enable_if
                      <
                         _CheckArgsConstructor<
                            _Dummy
                         >::template __enable_implicit<_Tp const&...>(),
                         bool
                      >::type = false
        >
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    tuple(const _Tp& ... __t) noexcept((__all<is_nothrow_copy_constructible<_Tp>::value...>::value))
        : __base_(typename __make_tuple_indices<sizeof...(_Tp)>::type(),
                typename __make_tuple_types<tuple, sizeof...(_Tp)>::type(),
                typename __make_tuple_indices<0>::type(),
                typename __make_tuple_types<tuple, 0>::type(),
                __t...
               ) {}

    template <bool _Dummy = true,
              typename enable_if
                      <
                         _CheckArgsConstructor<
                            _Dummy
                         >::template __enable_explicit<_Tp const&...>(),
                         bool
                      >::type = false
        >
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    explicit tuple(const _Tp& ... __t) noexcept((__all<is_nothrow_copy_constructible<_Tp>::value...>::value))
        : __base_(typename __make_tuple_indices<sizeof...(_Tp)>::type(),
                typename __make_tuple_types<tuple, sizeof...(_Tp)>::type(),
                typename __make_tuple_indices<0>::type(),
                typename __make_tuple_types<tuple, 0>::type(),
                __t...
               ) {}

    template <class _Alloc, bool _Dummy = true,
              typename enable_if
                      <
                         _CheckArgsConstructor<
                            _Dummy
                         >::template __enable_implicit<_Tp const&...>(),
                         bool
                      >::type = false
        >
      __attribute__ ((__exclude_from_explicit_instantiation__))
      tuple(allocator_arg_t, const _Alloc& __a, const _Tp& ... __t)
        : __base_(allocator_arg_t(), __a,
                typename __make_tuple_indices<sizeof...(_Tp)>::type(),
                typename __make_tuple_types<tuple, sizeof...(_Tp)>::type(),
                typename __make_tuple_indices<0>::type(),
                typename __make_tuple_types<tuple, 0>::type(),
                __t...
               ) {}

    template <class _Alloc, bool _Dummy = true,
              typename enable_if
                      <
                         _CheckArgsConstructor<
                            _Dummy
                         >::template __enable_explicit<_Tp const&...>(),
                         bool
                      >::type = false
        >
      __attribute__ ((__exclude_from_explicit_instantiation__))
      explicit
      tuple(allocator_arg_t, const _Alloc& __a, const _Tp& ... __t)
        : __base_(allocator_arg_t(), __a,
                typename __make_tuple_indices<sizeof...(_Tp)>::type(),
                typename __make_tuple_types<tuple, sizeof...(_Tp)>::type(),
                typename __make_tuple_indices<0>::type(),
                typename __make_tuple_types<tuple, 0>::type(),
                __t...
               ) {}

    template <class ..._Up,
              bool _PackIsTuple = _PackExpandsToThisTuple<_Up...>::value,
              typename enable_if
                      <
                         _CheckArgsConstructor<
                             sizeof...(_Up) == sizeof...(_Tp)
                             && !_PackIsTuple
                         >::template __enable_implicit<_Up...>() ||
                        _CheckArgsConstructor<
                            _EnableImplicitReducedArityExtension
                            && sizeof...(_Up) < sizeof...(_Tp)
                            && !_PackIsTuple
                         >::template __enable_implicit<_Up...>(),
                         bool
                      >::type = false
             >
        __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        tuple(_Up&&... __u)
            noexcept(( is_nothrow_constructible<_BaseT, typename __make_tuple_indices<sizeof...(_Up)>::type, typename __make_tuple_types<tuple, sizeof...(_Up)>::type, typename __make_tuple_indices<sizeof...(_Tp), sizeof...(_Up)>::type, typename __make_tuple_types<tuple, sizeof...(_Tp), sizeof...(_Up)>::type, _Up... >::value ))
            : __base_(typename __make_tuple_indices<sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Up)>::type(),
                    typename __make_tuple_indices<sizeof...(_Tp), sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Tp), sizeof...(_Up)>::type(),
                    std::__1::forward<_Up>(__u)...) {}

    template <class ..._Up,
              typename enable_if
                      <
                         _CheckArgsConstructor<
                             sizeof...(_Up) <= sizeof...(_Tp)
                             && !_PackExpandsToThisTuple<_Up...>::value
                         >::template __enable_explicit<_Up...>() ||
                         _CheckArgsConstructor<
                            !_EnableImplicitReducedArityExtension
                            && sizeof...(_Up) < sizeof...(_Tp)
                            && !_PackExpandsToThisTuple<_Up...>::value
                         >::template __enable_implicit<_Up...>(),
                         bool
                      >::type = false
             >
        __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        explicit
        tuple(_Up&&... __u)
            noexcept(( is_nothrow_constructible<_BaseT, typename __make_tuple_indices<sizeof...(_Up)>::type, typename __make_tuple_types<tuple, sizeof...(_Up)>::type, typename __make_tuple_indices<sizeof...(_Tp), sizeof...(_Up)>::type, typename __make_tuple_types<tuple, sizeof...(_Tp), sizeof...(_Up)>::type, _Up... >::value ))
            : __base_(typename __make_tuple_indices<sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Up)>::type(),
                    typename __make_tuple_indices<sizeof...(_Tp), sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Tp), sizeof...(_Up)>::type(),
                    std::__1::forward<_Up>(__u)...) {}

    template <class _Alloc, class ..._Up,
              typename enable_if
                      <
                         _CheckArgsConstructor<
                             sizeof...(_Up) == sizeof...(_Tp) &&
                             !_PackExpandsToThisTuple<_Up...>::value
                         >::template __enable_implicit<_Up...>(),
                         bool
                      >::type = false
             >
        __attribute__ ((__exclude_from_explicit_instantiation__))
        tuple(allocator_arg_t, const _Alloc& __a, _Up&&... __u)
            : __base_(allocator_arg_t(), __a,
                    typename __make_tuple_indices<sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Up)>::type(),
                    typename __make_tuple_indices<sizeof...(_Tp), sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Tp), sizeof...(_Up)>::type(),
                    std::__1::forward<_Up>(__u)...) {}

    template <class _Alloc, class ..._Up,
              typename enable_if
                      <
                         _CheckArgsConstructor<
                             sizeof...(_Up) == sizeof...(_Tp) &&
                             !_PackExpandsToThisTuple<_Up...>::value
                         >::template __enable_explicit<_Up...>(),
                         bool
                      >::type = false
             >
        __attribute__ ((__exclude_from_explicit_instantiation__))
        explicit
        tuple(allocator_arg_t, const _Alloc& __a, _Up&&... __u)
            : __base_(allocator_arg_t(), __a,
                    typename __make_tuple_indices<sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Up)>::type(),
                    typename __make_tuple_indices<sizeof...(_Tp), sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Tp), sizeof...(_Up)>::type(),
                    std::__1::forward<_Up>(__u)...) {}

    template <class _Tuple, _EnableImplicitTupleLikeConstructor<_Tuple, true> = false>
        __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        tuple(_Tuple&& __t) noexcept((is_nothrow_constructible<_BaseT, _Tuple>::value))
            : __base_(std::__1::forward<_Tuple>(__t)) {}

    template <class _Tuple, _EnableImplicitTupleLikeConstructor<const _Tuple&, false> = false>
        __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        tuple(const _Tuple& __t) noexcept((is_nothrow_constructible<_BaseT, const _Tuple&>::value))
            : __base_(__t) {}
    template <class _Tuple, _EnableExplicitTupleLikeConstructor<_Tuple, true> = false>
        __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        explicit
        tuple(_Tuple&& __t) noexcept((is_nothrow_constructible<_BaseT, _Tuple>::value))
            : __base_(std::__1::forward<_Tuple>(__t)) {}

    template <class _Tuple, _EnableExplicitTupleLikeConstructor<const _Tuple&, false> = false>
        __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
        explicit
        tuple(const _Tuple& __t) noexcept((is_nothrow_constructible<_BaseT, const _Tuple&>::value))
            : __base_(__t) {}

    template <class _Alloc, class _Tuple,
              typename enable_if
                      <
                         _CheckTupleLikeConstructor<
                             __tuple_like_with_size<_Tuple, sizeof...(_Tp)>::value
                         >::template __enable_implicit<_Tuple>(),
                         bool
                      >::type = false
             >
        __attribute__ ((__exclude_from_explicit_instantiation__))
        tuple(allocator_arg_t, const _Alloc& __a, _Tuple&& __t)
            : __base_(allocator_arg_t(), __a, std::__1::forward<_Tuple>(__t)) {}

    template <class _Alloc, class _Tuple,
              typename enable_if
                      <
                         _CheckTupleLikeConstructor<
                             __tuple_like_with_size<_Tuple, sizeof...(_Tp)>::value
                         >::template __enable_explicit<_Tuple>(),
                         bool
                      >::type = false
             >
        __attribute__ ((__exclude_from_explicit_instantiation__))
        explicit
        tuple(allocator_arg_t, const _Alloc& __a, _Tuple&& __t)
            : __base_(allocator_arg_t(), __a, std::__1::forward<_Tuple>(__t)) {}

    using _CanCopyAssign = __all<is_copy_assignable<_Tp>::value...>;
    using _CanMoveAssign = __all<is_move_assignable<_Tp>::value...>;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    tuple& operator=(typename conditional<_CanCopyAssign::value, tuple, __nat>::type const& __t)
        noexcept((__all<is_nothrow_copy_assignable<_Tp>::value...>::value))
    {
        __base_.operator=(__t.__base_);
        return *this;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    tuple& operator=(typename conditional<_CanMoveAssign::value, tuple, __nat>::type&& __t)
        noexcept((__all<is_nothrow_move_assignable<_Tp>::value...>::value))
    {
        __base_.operator=(static_cast<_BaseT&&>(__t.__base_));
        return *this;
    }

    template <class _Tuple,
              class = typename enable_if
                      <
                         __tuple_assignable<_Tuple, tuple>::value
                      >::type
             >
        __attribute__ ((__exclude_from_explicit_instantiation__))
        tuple&
        operator=(_Tuple&& __t) noexcept((is_nothrow_assignable<_BaseT&, _Tuple>::value))
        {
            __base_.operator=(std::__1::forward<_Tuple>(__t));
            return *this;
        }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void swap(tuple& __t) noexcept(__all<__is_nothrow_swappable<_Tp>::value...>::value)
        {__base_.swap(__t.__base_);}
};

template <>
class tuple<>
{
public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr tuple() noexcept = default;
    template <class _Alloc>
    __attribute__ ((__exclude_from_explicit_instantiation__))
        tuple(allocator_arg_t, const _Alloc&) noexcept {}
    template <class _Alloc>
    __attribute__ ((__exclude_from_explicit_instantiation__))
        tuple(allocator_arg_t, const _Alloc&, const tuple&) noexcept {}
    template <class _Up>
    __attribute__ ((__exclude_from_explicit_instantiation__))
        tuple(array<_Up, 0>) noexcept {}
    template <class _Alloc, class _Up>
    __attribute__ ((__exclude_from_explicit_instantiation__))
        tuple(allocator_arg_t, const _Alloc&, array<_Up, 0>) noexcept {}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void swap(tuple&) noexcept {}
};

template <class ..._Tp>
tuple(_Tp...) -> tuple<_Tp...>;
template <class _Tp1, class _Tp2>
tuple(pair<_Tp1, _Tp2>) -> tuple<_Tp1, _Tp2>;
template <class _Alloc, class ..._Tp>
tuple(allocator_arg_t, _Alloc, _Tp...) -> tuple<_Tp...>;
template <class _Alloc, class _Tp1, class _Tp2>
tuple(allocator_arg_t, _Alloc, pair<_Tp1, _Tp2>) -> tuple<_Tp1, _Tp2>;
template <class _Alloc, class ..._Tp>
tuple(allocator_arg_t, _Alloc, tuple<_Tp...>) -> tuple<_Tp...>;

template <class ..._Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    __all<__is_swappable<_Tp>::value...>::value,
    void
>::type
swap(tuple<_Tp...>& __t, tuple<_Tp...>& __u)
                 noexcept(__all<__is_nothrow_swappable<_Tp>::value...>::value)
    {__t.swap(__u);}

namespace __find_detail {

static constexpr size_t __not_found = -1;
static constexpr size_t __ambiguous = __not_found - 1;

inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr size_t __find_idx_return(size_t __curr_i, size_t __res, bool __matches) {
    return !__matches ? __res :
        (__res == __not_found ? __curr_i : __ambiguous);
}

template <size_t _Nx>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr size_t __find_idx(size_t __i, const bool (&__matches)[_Nx]) {
  return __i == _Nx ? __not_found :
      __find_idx_return(__i, __find_idx(__i + 1, __matches), __matches[__i]);
}

template <class _T1, class ..._Args>
struct __find_exactly_one_checked {
    static constexpr bool __matches[sizeof...(_Args)] = {is_same<_T1, _Args>::value...};
    static constexpr size_t value = __find_detail::__find_idx(0, __matches);
    static_assert(value != __not_found, "type not found in type list" );
    static_assert(value != __ambiguous, "type occurs more than once in type list");
};

template <class _T1>
struct __find_exactly_one_checked<_T1> {
    static_assert(!is_same<_T1, _T1>::value, "type not in empty type list");
};

}

template <class ..._Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
tuple<_Tp&...>
tie(_Tp&... __t) noexcept
{
    return tuple<_Tp&...>(__t...);
}

template <class _Up>
struct __ignore_t
{
    template <class _Tp>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    const __ignore_t& operator=(_Tp&&) const {return *this;}
};

namespace {
  inline constexpr __ignore_t<unsigned char> ignore = __ignore_t<unsigned char>();
}

template <class... _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
tuple<typename __unwrap_ref_decay<_Tp>::type...>
make_tuple(_Tp&&... __t)
{
    return tuple<typename __unwrap_ref_decay<_Tp>::type...>(std::__1::forward<_Tp>(__t)...);
}

template <class... _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
tuple<_Tp&&...>
forward_as_tuple(_Tp&&... __t) noexcept
{
    return tuple<_Tp&&...>(std::__1::forward<_Tp>(__t)...);
}

template <size_t _Ip>
struct __tuple_equal
{
    template <class _Tp, class _Up>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _Tp& __x, const _Up& __y)
    {
        return __tuple_equal<_Ip - 1>()(__x, __y) && std::__1::get<_Ip-1>(__x) == std::__1::get<_Ip-1>(__y);
    }
};

template <>
struct __tuple_equal<0>
{
    template <class _Tp, class _Up>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _Tp&, const _Up&)
    {
        return true;
    }
};

template <class ..._Tp, class ..._Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator==(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
{
    static_assert (sizeof...(_Tp) == sizeof...(_Up), "Can't compare tuples of different sizes");
    return __tuple_equal<sizeof...(_Tp)>()(__x, __y);
}

template <class ..._Tp, class ..._Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator!=(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
{
    return !(__x == __y);
}

template <size_t _Ip>
struct __tuple_less
{
    template <class _Tp, class _Up>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _Tp& __x, const _Up& __y)
    {
        const size_t __idx = tuple_size<_Tp>::value - _Ip;
        if (std::__1::get<__idx>(__x) < std::__1::get<__idx>(__y))
            return true;
        if (std::__1::get<__idx>(__y) < std::__1::get<__idx>(__x))
            return false;
        return __tuple_less<_Ip-1>()(__x, __y);
    }
};

template <>
struct __tuple_less<0>
{
    template <class _Tp, class _Up>
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _Tp&, const _Up&)
    {
        return false;
    }
};

template <class ..._Tp, class ..._Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator<(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
{
    static_assert (sizeof...(_Tp) == sizeof...(_Up), "Can't compare tuples of different sizes");
    return __tuple_less<sizeof...(_Tp)>()(__x, __y);
}

template <class ..._Tp, class ..._Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator>(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
{
    return __y < __x;
}

template <class ..._Tp, class ..._Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator>=(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
{
    return !(__x < __y);
}

template <class ..._Tp, class ..._Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool
operator<=(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
{
    return !(__y < __x);
}

template <class _Tp>
inline constexpr size_t tuple_size_v = tuple_size<_Tp>::value;

template <class _Fn, class _Tuple, size_t ..._Id>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr decltype(auto) __apply_tuple_impl(_Fn && __f, _Tuple && __t,
                                            __tuple_indices<_Id...>)
noexcept(noexcept(std::__1::__invoke_constexpr( std::__1::forward<_Fn>(__f), std::__1::get<_Id>(std::__1::forward<_Tuple>(__t))...))) { return std::__1::__invoke_constexpr( std::__1::forward<_Fn>(__f), std::__1::get<_Id>(std::__1::forward<_Tuple>(__t))...); }

template <class _Fn, class _Tuple>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr decltype(auto) apply(_Fn && __f, _Tuple && __t)
noexcept(noexcept(std::__1::__apply_tuple_impl( std::__1::forward<_Fn>(__f), std::__1::forward<_Tuple>(__t), typename __make_tuple_indices<tuple_size_v<remove_reference_t<_Tuple>>>::type{}))) { return std::__1::__apply_tuple_impl( std::__1::forward<_Fn>(__f), std::__1::forward<_Tuple>(__t), typename __make_tuple_indices<tuple_size_v<remove_reference_t<_Tuple>>>::type{}); }

template <class _Tp, class _Tuple, size_t... _Idx>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr _Tp __make_from_tuple_impl(_Tuple&& __t, __tuple_indices<_Idx...>)
noexcept(noexcept(_Tp(std::__1::get<_Idx>(std::__1::forward<_Tuple>(__t))...))) { return _Tp(std::__1::get<_Idx>(std::__1::forward<_Tuple>(__t))...); }

template <class _Tp, class _Tuple>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr _Tp make_from_tuple(_Tuple&& __t)
noexcept(noexcept(std::__1::__make_from_tuple_impl<_Tp>(std::__1::forward<_Tuple>(__t), typename __make_tuple_indices<tuple_size_v<remove_reference_t<_Tuple>>>::type{}))) { return std::__1::__make_from_tuple_impl<_Tp>(std::__1::forward<_Tuple>(__t), typename __make_tuple_indices<tuple_size_v<remove_reference_t<_Tuple>>>::type{}); }
} }
namespace std
{

class logic_error
    : public exception
{
public:
    explicit logic_error(const std::__1::string&);
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit logic_error(const char* __s) : exception(__s) {}

};

class runtime_error
    : public exception
{
public:
   explicit runtime_error(const std::__1::string&);
   __attribute__ ((__exclude_from_explicit_instantiation__)) explicit runtime_error(const char* __s) : exception(__s) {}

};

class domain_error
    : public logic_error
{
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit domain_error(const string& __s) : logic_error(__s) {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit domain_error(const char* __s) : logic_error(__s) {}

};

class invalid_argument
    : public logic_error
{
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit invalid_argument(const string& __s) : logic_error(__s) {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit invalid_argument(const char* __s) : logic_error(__s) {}

};

class length_error
    : public logic_error
{
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit length_error(const string& __s) : logic_error(__s) {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit length_error(const char* __s) : logic_error(__s) {}

};

class out_of_range
    : public logic_error
{
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit out_of_range(const string& __s) : logic_error(__s) {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit out_of_range(const char* __s) : logic_error(__s) {}

};

class range_error
    : public runtime_error
{
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit range_error(const string& __s) : runtime_error(__s) {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit range_error(const char* __s) : runtime_error(__s) {}

};

class overflow_error
    : public runtime_error
{
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit overflow_error(const string& __s) : runtime_error(__s) {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit overflow_error(const char* __s) : runtime_error(__s) {}

};

class underflow_error
    : public runtime_error
{
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit underflow_error(const string& __s) : runtime_error(__s) {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit underflow_error(const char* __s) : runtime_error(__s) {}

};

}

namespace std { inline namespace __1 {

[[noreturn]] void __throw_runtime_error(const char*);

} }
namespace std { inline namespace __1 {

enum __legacy_memory_order {
    __mo_relaxed,
    __mo_consume,
    __mo_acquire,
    __mo_release,
    __mo_acq_rel,
    __mo_seq_cst
};

typedef underlying_type<__legacy_memory_order>::type __memory_order_underlying_t;
typedef enum memory_order {
  memory_order_relaxed = __mo_relaxed,
  memory_order_consume = __mo_consume,
  memory_order_acquire = __mo_acquire,
  memory_order_release = __mo_release,
  memory_order_acq_rel = __mo_acq_rel,
  memory_order_seq_cst = __mo_seq_cst,
} memory_order;
template <typename _Tp>
struct __cxx_atomic_base_impl {

  __attribute__ ((__exclude_from_explicit_instantiation__))

    __cxx_atomic_base_impl() noexcept = default;

  constexpr explicit __cxx_atomic_base_impl(_Tp value) noexcept
    : __a_value(value) {}
  __extension__ _Atomic(_Tp) __a_value;
};

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp kill_dependency(_Tp __y) noexcept
{
    return __y;
}
template <typename _Tp,
          typename _Base = __cxx_atomic_base_impl<_Tp> >

struct __cxx_atomic_impl : public _Base {

  __attribute__ ((__exclude_from_explicit_instantiation__)) __cxx_atomic_impl() noexcept = default;
  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr explicit __cxx_atomic_impl(_Tp value) noexcept
    : _Base(value) {}
};

template <class _Tp, bool = is_integral<_Tp>::value && !is_same<_Tp, bool>::value>
struct __atomic_base
{
    mutable __cxx_atomic_impl<_Tp> __a_;

  static constexpr bool is_always_lock_free = __atomic_always_lock_free(sizeof(__a_), 0);

    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool is_lock_free() const volatile noexcept
        {return __c11_atomic_is_lock_free(sizeof(_Tp));}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool is_lock_free() const noexcept
        {return static_cast<__atomic_base const volatile*>(this)->is_lock_free();}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void store(_Tp __d, memory_order __m = memory_order_seq_cst) volatile noexcept
      __attribute__((diagnose_if(__m == memory_order_consume || __m == memory_order_acquire || __m == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
        {__cxx_atomic_store(&__a_, __d, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void store(_Tp __d, memory_order __m = memory_order_seq_cst) noexcept
      __attribute__((diagnose_if(__m == memory_order_consume || __m == memory_order_acquire || __m == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
        {__cxx_atomic_store(&__a_, __d, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp load(memory_order __m = memory_order_seq_cst) const volatile noexcept
      __attribute__((diagnose_if(__m == memory_order_release || __m == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
        {return __cxx_atomic_load(&__a_, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp load(memory_order __m = memory_order_seq_cst) const noexcept
      __attribute__((diagnose_if(__m == memory_order_release || __m == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
        {return __cxx_atomic_load(&__a_, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    operator _Tp() const volatile noexcept {return load();}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    operator _Tp() const noexcept {return load();}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool compare_exchange_weak(_Tp& __e, _Tp __d,
                               memory_order __s, memory_order __f) volatile noexcept
      __attribute__((diagnose_if(__f == memory_order_release || __f == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
        {return __cxx_atomic_compare_exchange_weak(&__a_, &__e, __d, __s, __f);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool compare_exchange_weak(_Tp& __e, _Tp __d,
                               memory_order __s, memory_order __f) noexcept
      __attribute__((diagnose_if(__f == memory_order_release || __f == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
        {return __cxx_atomic_compare_exchange_weak(&__a_, &__e, __d, __s, __f);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool compare_exchange_strong(_Tp& __e, _Tp __d,
                                 memory_order __s, memory_order __f) volatile noexcept
      __attribute__((diagnose_if(__f == memory_order_release || __f == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
        {return __cxx_atomic_compare_exchange_strong(&__a_, &__e, __d, __s, __f);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool compare_exchange_strong(_Tp& __e, _Tp __d,
                                 memory_order __s, memory_order __f) noexcept
      __attribute__((diagnose_if(__f == memory_order_release || __f == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
        {return __cxx_atomic_compare_exchange_strong(&__a_, &__e, __d, __s, __f);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool compare_exchange_weak(_Tp& __e, _Tp __d,
                              memory_order __m = memory_order_seq_cst) volatile noexcept
        {return __cxx_atomic_compare_exchange_weak(&__a_, &__e, __d, __m, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool compare_exchange_weak(_Tp& __e, _Tp __d,
                               memory_order __m = memory_order_seq_cst) noexcept
        {return __cxx_atomic_compare_exchange_weak(&__a_, &__e, __d, __m, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool compare_exchange_strong(_Tp& __e, _Tp __d,
                              memory_order __m = memory_order_seq_cst) volatile noexcept
        {return __cxx_atomic_compare_exchange_strong(&__a_, &__e, __d, __m, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool compare_exchange_strong(_Tp& __e, _Tp __d,
                                 memory_order __m = memory_order_seq_cst) noexcept
        {return __cxx_atomic_compare_exchange_strong(&__a_, &__e, __d, __m, __m);}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __atomic_base() noexcept = default;

    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    __atomic_base(_Tp __d) noexcept : __a_(__d) {}

    __atomic_base(const __atomic_base&) = delete;
    __atomic_base& operator=(const __atomic_base&) = delete;
    __atomic_base& operator=(const __atomic_base&) volatile = delete;

};

template <class _Tp, bool __b>
constexpr bool __atomic_base<_Tp, __b>::is_always_lock_free;

template <class _Tp>
struct __atomic_base<_Tp, true>
    : public __atomic_base<_Tp, false>
{
    typedef __atomic_base<_Tp, false> __base;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    __atomic_base() noexcept = default;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr __atomic_base(_Tp __d) noexcept : __base(__d) {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp fetch_add(_Tp __op, memory_order __m = memory_order_seq_cst) volatile noexcept
        {return __cxx_atomic_fetch_add(&this->__a_, __op, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp fetch_add(_Tp __op, memory_order __m = memory_order_seq_cst) noexcept
        {return __cxx_atomic_fetch_add(&this->__a_, __op, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp fetch_sub(_Tp __op, memory_order __m = memory_order_seq_cst) volatile noexcept
        {return __cxx_atomic_fetch_sub(&this->__a_, __op, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp fetch_sub(_Tp __op, memory_order __m = memory_order_seq_cst) noexcept
        {return __cxx_atomic_fetch_sub(&this->__a_, __op, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp fetch_and(_Tp __op, memory_order __m = memory_order_seq_cst) volatile noexcept
        {return __cxx_atomic_fetch_and(&this->__a_, __op, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp fetch_and(_Tp __op, memory_order __m = memory_order_seq_cst) noexcept
        {return __cxx_atomic_fetch_and(&this->__a_, __op, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp fetch_or(_Tp __op, memory_order __m = memory_order_seq_cst) volatile noexcept
        {return __cxx_atomic_fetch_or(&this->__a_, __op, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp fetch_or(_Tp __op, memory_order __m = memory_order_seq_cst) noexcept
        {return __cxx_atomic_fetch_or(&this->__a_, __op, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp fetch_xor(_Tp __op, memory_order __m = memory_order_seq_cst) volatile noexcept
        {return __cxx_atomic_fetch_xor(&this->__a_, __op, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp fetch_xor(_Tp __op, memory_order __m = memory_order_seq_cst) noexcept
        {return __cxx_atomic_fetch_xor(&this->__a_, __op, __m);}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator++(int) volatile noexcept {return fetch_add(_Tp(1));}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator++(int) noexcept {return fetch_add(_Tp(1));}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator--(int) volatile noexcept {return fetch_sub(_Tp(1));}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator--(int) noexcept {return fetch_sub(_Tp(1));}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator++() volatile noexcept {return fetch_add(_Tp(1)) + _Tp(1);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator++() noexcept {return fetch_add(_Tp(1)) + _Tp(1);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator--() volatile noexcept {return fetch_sub(_Tp(1)) - _Tp(1);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator--() noexcept {return fetch_sub(_Tp(1)) - _Tp(1);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator+=(_Tp __op) volatile noexcept {return fetch_add(__op) + __op;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator+=(_Tp __op) noexcept {return fetch_add(__op) + __op;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator-=(_Tp __op) volatile noexcept {return fetch_sub(__op) - __op;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator-=(_Tp __op) noexcept {return fetch_sub(__op) - __op;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator&=(_Tp __op) volatile noexcept {return fetch_and(__op) & __op;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator&=(_Tp __op) noexcept {return fetch_and(__op) & __op;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator|=(_Tp __op) volatile noexcept {return fetch_or(__op) | __op;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator|=(_Tp __op) noexcept {return fetch_or(__op) | __op;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator^=(_Tp __op) volatile noexcept {return fetch_xor(__op) ^ __op;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator^=(_Tp __op) noexcept {return fetch_xor(__op) ^ __op;}
};

template <class _Tp>
struct atomic
    : public __atomic_base<_Tp>
{
    typedef __atomic_base<_Tp> __base;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    atomic() noexcept = default;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr atomic(_Tp __d) noexcept : __base(__d) {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator=(_Tp __d) volatile noexcept
        {__base::store(__d); return __d;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator=(_Tp __d) noexcept
        {__base::store(__d); return __d;}
};

template <class _Tp>
struct atomic<_Tp*>
    : public __atomic_base<_Tp*>
{
    typedef __atomic_base<_Tp*> __base;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    atomic() noexcept = default;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr atomic(_Tp* __d) noexcept : __base(__d) {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator=(_Tp* __d) volatile noexcept
        {__base::store(__d); return __d;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator=(_Tp* __d) noexcept
        {__base::store(__d); return __d;}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* fetch_add(ptrdiff_t __op, memory_order __m = memory_order_seq_cst)
                                                                        volatile noexcept
        {return __cxx_atomic_fetch_add(&this->__a_, __op, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* fetch_add(ptrdiff_t __op, memory_order __m = memory_order_seq_cst) noexcept
        {return __cxx_atomic_fetch_add(&this->__a_, __op, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* fetch_sub(ptrdiff_t __op, memory_order __m = memory_order_seq_cst)
                                                                        volatile noexcept
        {return __cxx_atomic_fetch_sub(&this->__a_, __op, __m);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* fetch_sub(ptrdiff_t __op, memory_order __m = memory_order_seq_cst) noexcept
        {return __cxx_atomic_fetch_sub(&this->__a_, __op, __m);}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator++(int) volatile noexcept {return fetch_add(1);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator++(int) noexcept {return fetch_add(1);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator--(int) volatile noexcept {return fetch_sub(1);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator--(int) noexcept {return fetch_sub(1);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator++() volatile noexcept {return fetch_add(1) + 1;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator++() noexcept {return fetch_add(1) + 1;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator--() volatile noexcept {return fetch_sub(1) - 1;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator--() noexcept {return fetch_sub(1) - 1;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator+=(ptrdiff_t __op) volatile noexcept {return fetch_add(__op) + __op;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator+=(ptrdiff_t __op) noexcept {return fetch_add(__op) + __op;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator-=(ptrdiff_t __op) volatile noexcept {return fetch_sub(__op) - __op;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* operator-=(ptrdiff_t __op) noexcept {return fetch_sub(__op) - __op;}
};

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool
atomic_is_lock_free(const volatile atomic<_Tp>* __o) noexcept
{
    return __o->is_lock_free();
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool
atomic_is_lock_free(const atomic<_Tp>* __o) noexcept
{
    return __o->is_lock_free();
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
void
atomic_init(volatile atomic<_Tp>* __o, _Tp __d) noexcept
{
    __cxx_atomic_init(&__o->__a_, __d);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
void
atomic_init(atomic<_Tp>* __o, _Tp __d) noexcept
{
    __cxx_atomic_init(&__o->__a_, __d);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
void
atomic_store(volatile atomic<_Tp>* __o, _Tp __d) noexcept
{
    __o->store(__d);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
void
atomic_store(atomic<_Tp>* __o, _Tp __d) noexcept
{
    __o->store(__d);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
void
atomic_store_explicit(volatile atomic<_Tp>* __o, _Tp __d, memory_order __m) noexcept
  __attribute__((diagnose_if(__m == memory_order_consume || __m == memory_order_acquire || __m == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
{
    __o->store(__d, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
void
atomic_store_explicit(atomic<_Tp>* __o, _Tp __d, memory_order __m) noexcept
  __attribute__((diagnose_if(__m == memory_order_consume || __m == memory_order_acquire || __m == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
{
    __o->store(__d, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp
atomic_load(const volatile atomic<_Tp>* __o) noexcept
{
    return __o->load();
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp
atomic_load(const atomic<_Tp>* __o) noexcept
{
    return __o->load();
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp
atomic_load_explicit(const volatile atomic<_Tp>* __o, memory_order __m) noexcept
  __attribute__((diagnose_if(__m == memory_order_release || __m == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
{
    return __o->load(__m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp
atomic_load_explicit(const atomic<_Tp>* __o, memory_order __m) noexcept
  __attribute__((diagnose_if(__m == memory_order_release || __m == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
{
    return __o->load(__m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp
atomic_exchange(volatile atomic<_Tp>* __o, _Tp __d) noexcept
{
    return __o->exchange(__d);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp
atomic_exchange(atomic<_Tp>* __o, _Tp __d) noexcept
{
    return __o->exchange(__d);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp
atomic_exchange_explicit(volatile atomic<_Tp>* __o, _Tp __d, memory_order __m) noexcept
{
    return __o->exchange(__d, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp
atomic_exchange_explicit(atomic<_Tp>* __o, _Tp __d, memory_order __m) noexcept
{
    return __o->exchange(__d, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool
atomic_compare_exchange_weak(volatile atomic<_Tp>* __o, _Tp* __e, _Tp __d) noexcept
{
    return __o->compare_exchange_weak(*__e, __d);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool
atomic_compare_exchange_weak(atomic<_Tp>* __o, _Tp* __e, _Tp __d) noexcept
{
    return __o->compare_exchange_weak(*__e, __d);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool
atomic_compare_exchange_strong(volatile atomic<_Tp>* __o, _Tp* __e, _Tp __d) noexcept
{
    return __o->compare_exchange_strong(*__e, __d);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool
atomic_compare_exchange_strong(atomic<_Tp>* __o, _Tp* __e, _Tp __d) noexcept
{
    return __o->compare_exchange_strong(*__e, __d);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool
atomic_compare_exchange_weak_explicit(volatile atomic<_Tp>* __o, _Tp* __e,
                                      _Tp __d,
                                      memory_order __s, memory_order __f) noexcept
  __attribute__((diagnose_if(__f == memory_order_release || __f == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
{
    return __o->compare_exchange_weak(*__e, __d, __s, __f);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool
atomic_compare_exchange_weak_explicit(atomic<_Tp>* __o, _Tp* __e, _Tp __d,
                                      memory_order __s, memory_order __f) noexcept
  __attribute__((diagnose_if(__f == memory_order_release || __f == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
{
    return __o->compare_exchange_weak(*__e, __d, __s, __f);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool
atomic_compare_exchange_strong_explicit(volatile atomic<_Tp>* __o,
                                        _Tp* __e, _Tp __d,
                                        memory_order __s, memory_order __f) noexcept
  __attribute__((diagnose_if(__f == memory_order_release || __f == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
{
    return __o->compare_exchange_strong(*__e, __d, __s, __f);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool
atomic_compare_exchange_strong_explicit(atomic<_Tp>* __o, _Tp* __e,
                                        _Tp __d,
                                        memory_order __s, memory_order __f) noexcept
  __attribute__((diagnose_if(__f == memory_order_release || __f == memory_order_acq_rel, "memory order argument to atomic operation is invalid", "warning")))
{
    return __o->compare_exchange_strong(*__e, __d, __s, __f);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_add(volatile atomic<_Tp>* __o, _Tp __op) noexcept
{
    return __o->fetch_add(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_add(atomic<_Tp>* __o, _Tp __op) noexcept
{
    return __o->fetch_add(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp*
atomic_fetch_add(volatile atomic<_Tp*>* __o, ptrdiff_t __op) noexcept
{
    return __o->fetch_add(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp*
atomic_fetch_add(atomic<_Tp*>* __o, ptrdiff_t __op) noexcept
{
    return __o->fetch_add(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_add_explicit(volatile atomic<_Tp>* __o, _Tp __op, memory_order __m) noexcept
{
    return __o->fetch_add(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_add_explicit(atomic<_Tp>* __o, _Tp __op, memory_order __m) noexcept
{
    return __o->fetch_add(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp*
atomic_fetch_add_explicit(volatile atomic<_Tp*>* __o, ptrdiff_t __op,
                          memory_order __m) noexcept
{
    return __o->fetch_add(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp*
atomic_fetch_add_explicit(atomic<_Tp*>* __o, ptrdiff_t __op, memory_order __m) noexcept
{
    return __o->fetch_add(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_sub(volatile atomic<_Tp>* __o, _Tp __op) noexcept
{
    return __o->fetch_sub(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_sub(atomic<_Tp>* __o, _Tp __op) noexcept
{
    return __o->fetch_sub(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp*
atomic_fetch_sub(volatile atomic<_Tp*>* __o, ptrdiff_t __op) noexcept
{
    return __o->fetch_sub(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp*
atomic_fetch_sub(atomic<_Tp*>* __o, ptrdiff_t __op) noexcept
{
    return __o->fetch_sub(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_sub_explicit(volatile atomic<_Tp>* __o, _Tp __op, memory_order __m) noexcept
{
    return __o->fetch_sub(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_sub_explicit(atomic<_Tp>* __o, _Tp __op, memory_order __m) noexcept
{
    return __o->fetch_sub(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp*
atomic_fetch_sub_explicit(volatile atomic<_Tp*>* __o, ptrdiff_t __op,
                          memory_order __m) noexcept
{
    return __o->fetch_sub(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp*
atomic_fetch_sub_explicit(atomic<_Tp*>* __o, ptrdiff_t __op, memory_order __m) noexcept
{
    return __o->fetch_sub(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_and(volatile atomic<_Tp>* __o, _Tp __op) noexcept
{
    return __o->fetch_and(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_and(atomic<_Tp>* __o, _Tp __op) noexcept
{
    return __o->fetch_and(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_and_explicit(volatile atomic<_Tp>* __o, _Tp __op, memory_order __m) noexcept
{
    return __o->fetch_and(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_and_explicit(atomic<_Tp>* __o, _Tp __op, memory_order __m) noexcept
{
    return __o->fetch_and(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_or(volatile atomic<_Tp>* __o, _Tp __op) noexcept
{
    return __o->fetch_or(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_or(atomic<_Tp>* __o, _Tp __op) noexcept
{
    return __o->fetch_or(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_or_explicit(volatile atomic<_Tp>* __o, _Tp __op, memory_order __m) noexcept
{
    return __o->fetch_or(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_or_explicit(atomic<_Tp>* __o, _Tp __op, memory_order __m) noexcept
{
    return __o->fetch_or(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_xor(volatile atomic<_Tp>* __o, _Tp __op) noexcept
{
    return __o->fetch_xor(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_xor(atomic<_Tp>* __o, _Tp __op) noexcept
{
    return __o->fetch_xor(__op);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_xor_explicit(volatile atomic<_Tp>* __o, _Tp __op, memory_order __m) noexcept
{
    return __o->fetch_xor(__op, __m);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_xor_explicit(atomic<_Tp>* __o, _Tp __op, memory_order __m) noexcept
{
    return __o->fetch_xor(__op, __m);
}

typedef struct atomic_flag
{
    __cxx_atomic_impl<bool> __a_;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    atomic_flag() noexcept = default;

    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    atomic_flag(bool __b) noexcept : __a_(__b) {}

    atomic_flag(const atomic_flag&) = delete;
    atomic_flag& operator=(const atomic_flag&) = delete;
    atomic_flag& operator=(const atomic_flag&) volatile = delete;

} atomic_flag;

} }
namespace std { inline namespace __1 {

template <class _ValueType>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_ValueType __libcpp_relaxed_load(_ValueType const* __value) {

    return __atomic_load_n(__value, 0);

}

template <class _ValueType>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_ValueType __libcpp_acquire_load(_ValueType const* __value) {

    return __atomic_load_n(__value, 2);

}

template <class _Tp> class allocator;

template <>
class allocator<void>
{
public:
    typedef void* pointer;
    typedef const void* const_pointer;
    typedef void value_type;

    template <class _Up> struct rebind {typedef allocator<_Up> other;};
};

template <>
class allocator<const void>
{
public:
    typedef const void* pointer;
    typedef const void* const_pointer;
    typedef const void value_type;

    template <class _Up> struct rebind {typedef allocator<_Up> other;};
};

template <class _Tp, class = void>
struct __has_element_type : false_type {};

template <class _Tp>
struct __has_element_type<_Tp,
              typename __void_t<typename _Tp::element_type>::type> : true_type {};

template <class _Ptr, bool = __has_element_type<_Ptr>::value>
struct __pointer_traits_element_type;

template <class _Ptr>
struct __pointer_traits_element_type<_Ptr, true>
{
    typedef __attribute__((nodebug)) typename _Ptr::element_type type;
};

template <template <class, class...> class _Sp, class _Tp, class ..._Args>
struct __pointer_traits_element_type<_Sp<_Tp, _Args...>, true>
{
    typedef __attribute__((nodebug)) typename _Sp<_Tp, _Args...>::element_type type;
};

template <template <class, class...> class _Sp, class _Tp, class ..._Args>
struct __pointer_traits_element_type<_Sp<_Tp, _Args...>, false>
{
    typedef __attribute__((nodebug)) _Tp type;
};

template <class _Tp, class = void>
struct __has_difference_type : false_type {};

template <class _Tp>
struct __has_difference_type<_Tp,
            typename __void_t<typename _Tp::difference_type>::type> : true_type {};

template <class _Ptr, bool = __has_difference_type<_Ptr>::value>
struct __pointer_traits_difference_type
{
    typedef __attribute__((nodebug)) ptrdiff_t type;
};

template <class _Ptr>
struct __pointer_traits_difference_type<_Ptr, true>
{
    typedef __attribute__((nodebug)) typename _Ptr::difference_type type;
};

template <class _Tp, class _Up>
struct __has_rebind
{
private:
    struct __two {char __lx; char __lxx;};
    template <class _Xp> static __two __test(...);
    template <class _Xp> static char __test(typename _Xp::template rebind<_Up>* = 0);
public:
    static const bool value = sizeof(__test<_Tp>(0)) == 1;
};

template <class _Tp, class _Up, bool = __has_rebind<_Tp, _Up>::value>
struct __pointer_traits_rebind
{

    typedef __attribute__((nodebug)) typename _Tp::template rebind<_Up> type;

};

template <template <class, class...> class _Sp, class _Tp, class ..._Args, class _Up>
struct __pointer_traits_rebind<_Sp<_Tp, _Args...>, _Up, true>
{

    typedef __attribute__((nodebug)) typename _Sp<_Tp, _Args...>::template rebind<_Up> type;

};

template <template <class, class...> class _Sp, class _Tp, class ..._Args, class _Up>
struct __pointer_traits_rebind<_Sp<_Tp, _Args...>, _Up, false>
{
    typedef _Sp<_Up, _Args...> type;
};

template <class _Ptr>
struct pointer_traits
{
    typedef _Ptr pointer;
    typedef typename __pointer_traits_element_type<pointer>::type element_type;
    typedef typename __pointer_traits_difference_type<pointer>::type difference_type;

    template <class _Up> using rebind = typename __pointer_traits_rebind<pointer, _Up>::type;

private:
    struct __nat {};
public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    static pointer pointer_to(typename conditional<is_void<element_type>::value,
                                           __nat, element_type>::type& __r)
        {return pointer::pointer_to(__r);}
};

template <class _Tp>
struct pointer_traits<_Tp*>
{
    typedef _Tp* pointer;
    typedef _Tp element_type;
    typedef ptrdiff_t difference_type;

    template <class _Up> using rebind = _Up*;

private:
    struct __nat {};
public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    static pointer pointer_to(typename conditional<is_void<element_type>::value,
                                      __nat, element_type>::type& __r) noexcept
        {return std::__1::addressof(__r);}
};

template <class _From, class _To>
struct __rebind_pointer {

    typedef typename pointer_traits<_From>::template rebind<_To> type;

};

template <class _Tp, class = void>
struct __has_pointer_type : false_type {};

template <class _Tp>
struct __has_pointer_type<_Tp,
          typename __void_t<typename _Tp::pointer>::type> : true_type {};

namespace __pointer_type_imp
{

template <class _Tp, class _Dp, bool = __has_pointer_type<_Dp>::value>
struct __pointer_type
{
    typedef __attribute__((nodebug)) typename _Dp::pointer type;
};

template <class _Tp, class _Dp>
struct __pointer_type<_Tp, _Dp, false>
{
    typedef __attribute__((nodebug)) _Tp* type;
};

}

template <class _Tp, class _Dp>
struct __pointer_type
{
    typedef __attribute__((nodebug)) typename __pointer_type_imp::__pointer_type<_Tp, typename remove_reference<_Dp>::type>::type type;
};

template <class _Tp, class = void>
struct __has_const_pointer : false_type {};

template <class _Tp>
struct __has_const_pointer<_Tp,
            typename __void_t<typename _Tp::const_pointer>::type> : true_type {};

template <class _Tp, class _Ptr, class _Alloc, bool = __has_const_pointer<_Alloc>::value>
struct __const_pointer
{
    typedef __attribute__((nodebug)) typename _Alloc::const_pointer type;
};

template <class _Tp, class _Ptr, class _Alloc>
struct __const_pointer<_Tp, _Ptr, _Alloc, false>
{

    typedef __attribute__((nodebug)) typename pointer_traits<_Ptr>::template rebind<const _Tp> type;

};

template <class _Tp, class = void>
struct __has_void_pointer : false_type {};

template <class _Tp>
struct __has_void_pointer<_Tp,
               typename __void_t<typename _Tp::void_pointer>::type> : true_type {};

template <class _Ptr, class _Alloc, bool = __has_void_pointer<_Alloc>::value>
struct __void_pointer
{
    typedef __attribute__((nodebug)) typename _Alloc::void_pointer type;
};

template <class _Ptr, class _Alloc>
struct __void_pointer<_Ptr, _Alloc, false>
{

    typedef __attribute__((nodebug)) typename pointer_traits<_Ptr>::template rebind<void> type;

};

template <class _Tp, class = void>
struct __has_const_void_pointer : false_type {};

template <class _Tp>
struct __has_const_void_pointer<_Tp,
            typename __void_t<typename _Tp::const_void_pointer>::type> : true_type {};

template <class _Ptr, class _Alloc, bool = __has_const_void_pointer<_Alloc>::value>
struct __const_void_pointer
{
    typedef __attribute__((nodebug)) typename _Alloc::const_void_pointer type;
};

template <class _Ptr, class _Alloc>
struct __const_void_pointer<_Ptr, _Alloc, false>
{

    typedef __attribute__((nodebug)) typename pointer_traits<_Ptr>::template rebind<const void> type;

};

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_Tp*
__to_raw_pointer(_Tp* __p) noexcept
{
    return __p;
}

template <class _Pointer>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename pointer_traits<_Pointer>::element_type*
__to_raw_pointer(_Pointer __p) noexcept
{
    return std::__1::__to_raw_pointer(__p.operator->());
}

template <class _Tp, class = void>
struct __has_size_type : false_type {};

template <class _Tp>
struct __has_size_type<_Tp,
               typename __void_t<typename _Tp::size_type>::type> : true_type {};

template <class _Alloc, class _DiffType, bool = __has_size_type<_Alloc>::value>
struct __size_type
{
    typedef __attribute__((nodebug)) typename make_unsigned<_DiffType>::type type;
};

template <class _Alloc, class _DiffType>
struct __size_type<_Alloc, _DiffType, true>
{
    typedef __attribute__((nodebug)) typename _Alloc::size_type type;
};

template <class _Tp, class = void>
struct __has_propagate_on_container_copy_assignment : false_type {};

template <class _Tp>
struct __has_propagate_on_container_copy_assignment<_Tp,
    typename __void_t<typename _Tp::propagate_on_container_copy_assignment>::type>
        : true_type {};

template <class _Alloc, bool = __has_propagate_on_container_copy_assignment<_Alloc>::value>
struct __propagate_on_container_copy_assignment
{
    typedef __attribute__((nodebug)) false_type type;
};

template <class _Alloc>
struct __propagate_on_container_copy_assignment<_Alloc, true>
{
    typedef __attribute__((nodebug)) typename _Alloc::propagate_on_container_copy_assignment type;
};

template <class _Tp, class = void>
struct __has_propagate_on_container_move_assignment : false_type {};

template <class _Tp>
struct __has_propagate_on_container_move_assignment<_Tp,
           typename __void_t<typename _Tp::propagate_on_container_move_assignment>::type>
               : true_type {};

template <class _Alloc, bool = __has_propagate_on_container_move_assignment<_Alloc>::value>
struct __propagate_on_container_move_assignment
{
    typedef false_type type;
};

template <class _Alloc>
struct __propagate_on_container_move_assignment<_Alloc, true>
{
    typedef __attribute__((nodebug)) typename _Alloc::propagate_on_container_move_assignment type;
};

template <class _Tp, class = void>
struct __has_propagate_on_container_swap : false_type {};

template <class _Tp>
struct __has_propagate_on_container_swap<_Tp,
           typename __void_t<typename _Tp::propagate_on_container_swap>::type>
               : true_type {};

template <class _Alloc, bool = __has_propagate_on_container_swap<_Alloc>::value>
struct __propagate_on_container_swap
{
    typedef false_type type;
};

template <class _Alloc>
struct __propagate_on_container_swap<_Alloc, true>
{
    typedef __attribute__((nodebug)) typename _Alloc::propagate_on_container_swap type;
};

template <class _Tp, class = void>
struct __has_is_always_equal : false_type {};

template <class _Tp>
struct __has_is_always_equal<_Tp,
           typename __void_t<typename _Tp::is_always_equal>::type>
               : true_type {};

template <class _Alloc, bool = __has_is_always_equal<_Alloc>::value>
struct __is_always_equal
{
    typedef __attribute__((nodebug)) typename std::__1::is_empty<_Alloc>::type type;
};

template <class _Alloc>
struct __is_always_equal<_Alloc, true>
{
    typedef __attribute__((nodebug)) typename _Alloc::is_always_equal type;
};

template <class _Tp, class _Up, bool = __has_rebind<_Tp, _Up>::value>
struct __has_rebind_other
{
private:
    struct __two {char __lx; char __lxx;};
    template <class _Xp> static __two __test(...);
    template <class _Xp> static char __test(typename _Xp::template rebind<_Up>::other* = 0);
public:
    static const bool value = sizeof(__test<_Tp>(0)) == 1;
};

template <class _Tp, class _Up>
struct __has_rebind_other<_Tp, _Up, false>
{
    static const bool value = false;
};

template <class _Tp, class _Up, bool = __has_rebind_other<_Tp, _Up>::value>
struct __allocator_traits_rebind
{
    typedef __attribute__((nodebug)) typename _Tp::template rebind<_Up>::other type;
};

template <template <class, class...> class _Alloc, class _Tp, class ..._Args, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _Args...>, _Up, true>
{
    typedef __attribute__((nodebug)) typename _Alloc<_Tp, _Args...>::template rebind<_Up>::other type;
};

template <template <class, class...> class _Alloc, class _Tp, class ..._Args, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _Args...>, _Up, false>
{
    typedef __attribute__((nodebug)) _Alloc<_Up, _Args...> type;
};

template <class _Alloc, class _SizeType, class _ConstVoidPtr>
auto
__has_allocate_hint_test(_Alloc&& __a, _SizeType&& __sz, _ConstVoidPtr&& __p)
    -> decltype((void)__a.allocate(__sz, __p), true_type());

template <class _Alloc, class _SizeType, class _ConstVoidPtr>
auto
__has_allocate_hint_test(const _Alloc& __a, _SizeType&& __sz, _ConstVoidPtr&& __p)
    -> false_type;

template <class _Alloc, class _SizeType, class _ConstVoidPtr>
struct __has_allocate_hint
    : integral_constant<bool,
        is_same<
            decltype(std::__1::__has_allocate_hint_test(declval<_Alloc>(),
                                          declval<_SizeType>(),
                                          declval<_ConstVoidPtr>())),
            true_type>::value>
{
};
template <class _Alloc, class _Tp, class ..._Args>
decltype(std::__1::declval<_Alloc>().construct(std::__1::declval<_Tp*>(),
                                           std::__1::declval<_Args>()...),
                                           true_type())
__has_construct_test(_Alloc&& __a, _Tp* __p, _Args&& ...__args);

template <class _Alloc, class _Pointer, class ..._Args>
false_type
__has_construct_test(const _Alloc& __a, _Pointer&& __p, _Args&& ...__args);

template <class _Alloc, class _Pointer, class ..._Args>
struct __has_construct
    : integral_constant<bool,
        is_same<
            decltype(std::__1::__has_construct_test(declval<_Alloc>(),
                                          declval<_Pointer>(),
                                          declval<_Args>()...)),
            true_type>::value>
{
};

template <class _Alloc, class _Pointer>
auto
__has_destroy_test(_Alloc&& __a, _Pointer&& __p)
    -> decltype(__a.destroy(__p), true_type());

template <class _Alloc, class _Pointer>
auto
__has_destroy_test(const _Alloc& __a, _Pointer&& __p)
    -> false_type;

template <class _Alloc, class _Pointer>
struct __has_destroy
    : integral_constant<bool,
        is_same<
            decltype(std::__1::__has_destroy_test(declval<_Alloc>(),
                                        declval<_Pointer>())),
            true_type>::value>
{
};

template <class _Alloc>
auto
__has_max_size_test(_Alloc&& __a)
    -> decltype(__a.max_size(), true_type());

template <class _Alloc>
auto
__has_max_size_test(const volatile _Alloc& __a)
    -> false_type;

template <class _Alloc>
struct __has_max_size
    : integral_constant<bool,
        is_same<
            decltype(std::__1::__has_max_size_test(declval<_Alloc&>())),
            true_type>::value>
{
};

template <class _Alloc>
auto
__has_select_on_container_copy_construction_test(_Alloc&& __a)
    -> decltype(__a.select_on_container_copy_construction(), true_type());

template <class _Alloc>
auto
__has_select_on_container_copy_construction_test(const volatile _Alloc& __a)
    -> false_type;

template <class _Alloc>
struct __has_select_on_container_copy_construction
    : integral_constant<bool,
        is_same<
            decltype(std::__1::__has_select_on_container_copy_construction_test(declval<_Alloc&>())),
            true_type>::value>
{
};
template <class _Alloc, class _Ptr, bool = __has_difference_type<_Alloc>::value>
struct __alloc_traits_difference_type
{
    typedef __attribute__((nodebug)) typename pointer_traits<_Ptr>::difference_type type;
};

template <class _Alloc, class _Ptr>
struct __alloc_traits_difference_type<_Alloc, _Ptr, true>
{
    typedef __attribute__((nodebug)) typename _Alloc::difference_type type;
};

template <class _Tp>
struct __is_default_allocator : false_type {};

template <class _Tp>
struct __is_default_allocator<std::__1::allocator<_Tp> > : true_type {};

template <class _Alloc,
    bool = __has_construct<_Alloc, typename _Alloc::value_type*, typename _Alloc::value_type&&>::value && !__is_default_allocator<_Alloc>::value
    >
struct __is_cpp17_move_insertable;
template <class _Alloc>
struct __is_cpp17_move_insertable<_Alloc, true> : std::true_type {};
template <class _Alloc>
struct __is_cpp17_move_insertable<_Alloc, false> : std::is_move_constructible<typename _Alloc::value_type> {};

template <class _Alloc,
    bool = __has_construct<_Alloc, typename _Alloc::value_type*, const typename _Alloc::value_type&>::value && !__is_default_allocator<_Alloc>::value
    >
struct __is_cpp17_copy_insertable;
template <class _Alloc>
struct __is_cpp17_copy_insertable<_Alloc, true> : __is_cpp17_move_insertable<_Alloc> {};
template <class _Alloc>
struct __is_cpp17_copy_insertable<_Alloc, false> : integral_constant<bool,
    std::is_copy_constructible<typename _Alloc::value_type>::value &&
    __is_cpp17_move_insertable<_Alloc>::value>
  {};

template <class _Alloc>
struct allocator_traits
{
    typedef _Alloc allocator_type;
    typedef typename allocator_type::value_type value_type;

    typedef typename __pointer_type<value_type, allocator_type>::type pointer;
    typedef typename __const_pointer<value_type, pointer, allocator_type>::type const_pointer;
    typedef typename __void_pointer<pointer, allocator_type>::type void_pointer;
    typedef typename __const_void_pointer<pointer, allocator_type>::type const_void_pointer;

    typedef typename __alloc_traits_difference_type<allocator_type, pointer>::type difference_type;
    typedef typename __size_type<allocator_type, difference_type>::type size_type;

    typedef typename __propagate_on_container_copy_assignment<allocator_type>::type
                     propagate_on_container_copy_assignment;
    typedef typename __propagate_on_container_move_assignment<allocator_type>::type
                     propagate_on_container_move_assignment;
    typedef typename __propagate_on_container_swap<allocator_type>::type
                     propagate_on_container_swap;
    typedef typename __is_always_equal<allocator_type>::type
                     is_always_equal;

    template <class _Tp> using rebind_alloc =
                  typename __allocator_traits_rebind<allocator_type, _Tp>::type;
    template <class _Tp> using rebind_traits = allocator_traits<rebind_alloc<_Tp> >;

                                  __attribute__ ((__exclude_from_explicit_instantiation__))
    static pointer allocate(allocator_type& __a, size_type __n)
        {return __a.allocate(__n);}
                                  __attribute__ ((__exclude_from_explicit_instantiation__))
    static pointer allocate(allocator_type& __a, size_type __n, const_void_pointer __hint)
        {return __allocate(__a, __n, __hint,
            __has_allocate_hint<allocator_type, size_type, const_void_pointer>());}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    static void deallocate(allocator_type& __a, pointer __p, size_type __n) noexcept
        {__a.deallocate(__p, __n);}

    template <class _Tp, class... _Args>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        static void construct(allocator_type& __a, _Tp* __p, _Args&&... __args)
            {__construct(__has_construct<allocator_type, _Tp*, _Args...>(),
                         __a, __p, std::__1::forward<_Args>(__args)...);}
    template <class _Tp>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        static void destroy(allocator_type& __a, _Tp* __p)
            {__destroy(__has_destroy<allocator_type, _Tp*>(), __a, __p);}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    static size_type max_size(const allocator_type& __a) noexcept
        {return __max_size(__has_max_size<const allocator_type>(), __a);}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    static allocator_type
        select_on_container_copy_construction(const allocator_type& __a)
            {return __select_on_container_copy_construction(
                __has_select_on_container_copy_construction<const allocator_type>(),
                __a);}

    template <class _Ptr>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        static
        void
        __construct_forward_with_exception_guarantees(allocator_type& __a, _Ptr __begin1, _Ptr __end1, _Ptr& __begin2)
        {
            static_assert(__is_cpp17_move_insertable<allocator_type>::value,
              "The specified type does not meet the requirements of Cpp17MoveInsertible");
            for (; __begin1 != __end1; ++__begin1, (void) ++__begin2)
              construct(__a, std::__1::__to_raw_pointer(__begin2),

                        std::__1::move(*__begin1)

                        );
        }

    template <class _Tp>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        static
        typename enable_if
        <
            (__is_default_allocator<allocator_type>::value
                || !__has_construct<allocator_type, _Tp*, _Tp>::value) &&
             is_trivially_move_constructible<_Tp>::value,
            void
        >::type
        __construct_forward_with_exception_guarantees(allocator_type&, _Tp* __begin1, _Tp* __end1, _Tp*& __begin2)
        {
            ptrdiff_t _Np = __end1 - __begin1;
            if (_Np > 0)
            {
                std::__1::memcpy(__begin2, __begin1, _Np * sizeof(_Tp));
                __begin2 += _Np;
            }
        }

    template <class _Iter, class _Ptr>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        static
        void
        __construct_range_forward(allocator_type& __a, _Iter __begin1, _Iter __end1, _Ptr& __begin2)
        {
            for (; __begin1 != __end1; ++__begin1, (void) ++__begin2)
                construct(__a, std::__1::__to_raw_pointer(__begin2), *__begin1);
        }

    template <class _SourceTp, class _DestTp,
              class _RawSourceTp = typename remove_const<_SourceTp>::type,
              class _RawDestTp = typename remove_const<_DestTp>::type>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        static
        typename enable_if
        <
            is_trivially_move_constructible<_DestTp>::value &&
            is_same<_RawSourceTp, _RawDestTp>::value &&
            (__is_default_allocator<allocator_type>::value ||
             !__has_construct<allocator_type, _DestTp*, _SourceTp&>::value),
            void
        >::type
        __construct_range_forward(allocator_type&, _SourceTp* __begin1, _SourceTp* __end1, _DestTp*& __begin2)
        {
            ptrdiff_t _Np = __end1 - __begin1;
            if (_Np > 0)
            {
                std::__1::memcpy(const_cast<_RawDestTp*>(__begin2), __begin1, _Np * sizeof(_DestTp));
                __begin2 += _Np;
            }
        }

    template <class _Ptr>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        static
        void
        __construct_backward_with_exception_guarantees(allocator_type& __a, _Ptr __begin1, _Ptr __end1, _Ptr& __end2)
        {
            static_assert(__is_cpp17_move_insertable<allocator_type>::value,
              "The specified type does not meet the requirements of Cpp17MoveInsertable");
            while (__end1 != __begin1)
            {
              construct(__a, std::__1::__to_raw_pointer(__end2 - 1),

                        std::__1::move(*--__end1)

                        );
              --__end2;
            }
        }

    template <class _Tp>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        static
        typename enable_if
        <
            (__is_default_allocator<allocator_type>::value
                || !__has_construct<allocator_type, _Tp*, _Tp>::value) &&
             is_trivially_move_constructible<_Tp>::value,
            void
        >::type
        __construct_backward_with_exception_guarantees(allocator_type&, _Tp* __begin1, _Tp* __end1, _Tp*& __end2)
        {
            ptrdiff_t _Np = __end1 - __begin1;
            __end2 -= _Np;
            if (_Np > 0)
                std::__1::memcpy(__end2, __begin1, _Np * sizeof(_Tp));
        }

private:

    __attribute__ ((__exclude_from_explicit_instantiation__))
    static pointer __allocate(allocator_type& __a, size_type __n,
        const_void_pointer __hint, true_type)
        {return __a.allocate(__n, __hint);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    static pointer __allocate(allocator_type& __a, size_type __n,
        const_void_pointer, false_type)
        {return __a.allocate(__n);}

    template <class _Tp, class... _Args>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        static void __construct(true_type, allocator_type& __a, _Tp* __p, _Args&&... __args)
            {__a.construct(__p, std::__1::forward<_Args>(__args)...);}
    template <class _Tp, class... _Args>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        static void __construct(false_type, allocator_type&, _Tp* __p, _Args&&... __args)
            {
                ::new ((void*)__p) _Tp(std::__1::forward<_Args>(__args)...);
            }
    template <class _Tp>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        static void __destroy(true_type, allocator_type& __a, _Tp* __p)
            {__a.destroy(__p);}
    template <class _Tp>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        static void __destroy(false_type, allocator_type&, _Tp* __p)
            {
                __p->~_Tp();
            }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    static size_type __max_size(true_type, const allocator_type& __a) noexcept
            {return __a.max_size();}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    static size_type __max_size(false_type, const allocator_type&) noexcept
            {return numeric_limits<size_type>::max() / sizeof(value_type);}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    static allocator_type
        __select_on_container_copy_construction(true_type, const allocator_type& __a)
            {return __a.select_on_container_copy_construction();}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    static allocator_type
        __select_on_container_copy_construction(false_type, const allocator_type& __a)
            {return __a;}
};

template <class _Traits, class _Tp>
struct __rebind_alloc_helper
{

    typedef __attribute__((nodebug)) typename _Traits::template rebind_alloc<_Tp> type;

};

template <class _Tp>
class allocator
{
public:
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;
    typedef _Tp* pointer;
    typedef const _Tp* const_pointer;
    typedef _Tp& reference;
    typedef const _Tp& const_reference;
    typedef _Tp value_type;

    typedef true_type propagate_on_container_move_assignment;
    typedef true_type is_always_equal;

    template <class _Up> struct rebind {typedef allocator<_Up> other;};

    __attribute__ ((__exclude_from_explicit_instantiation__))
    allocator() noexcept {}

    template <class _Up>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    allocator(const allocator<_Up>&) noexcept {}

    __attribute__ ((__exclude_from_explicit_instantiation__)) pointer address(reference __x) const noexcept
        {return std::__1::addressof(__x);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) const_pointer address(const_reference __x) const noexcept
        {return std::__1::addressof(__x);}
                                  __attribute__ ((__exclude_from_explicit_instantiation__))
    pointer allocate(size_type __n, allocator<void>::const_pointer = 0)
        {
        if (__n > max_size())
            __throw_length_error("allocator<T>::allocate(size_t n)"
                                 " 'n' exceeds maximum supported size");
        return static_cast<pointer>(std::__1::__libcpp_allocate(__n * sizeof(_Tp), alignof(_Tp)));
        }
    __attribute__ ((__exclude_from_explicit_instantiation__)) void deallocate(pointer __p, size_type __n) noexcept
        {std::__1::__libcpp_deallocate((void*)__p, __n * sizeof(_Tp), alignof(_Tp));}
    __attribute__ ((__exclude_from_explicit_instantiation__)) size_type max_size() const noexcept
        {return size_type(~0) / sizeof(_Tp);}

    template <class _Up, class... _Args>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        void
        construct(_Up* __p, _Args&&... __args)
        {
            ::new((void*)__p) _Up(std::__1::forward<_Args>(__args)...);
        }
    __attribute__ ((__exclude_from_explicit_instantiation__)) void destroy(pointer __p) {__p->~_Tp();}
};

template <class _Tp>
class allocator<const _Tp>
{
public:
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;
    typedef const _Tp* pointer;
    typedef const _Tp* const_pointer;
    typedef const _Tp& reference;
    typedef const _Tp& const_reference;
    typedef const _Tp value_type;

    typedef true_type propagate_on_container_move_assignment;
    typedef true_type is_always_equal;

    template <class _Up> struct rebind {typedef allocator<_Up> other;};

    __attribute__ ((__exclude_from_explicit_instantiation__))
    allocator() noexcept {}

    template <class _Up>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    allocator(const allocator<_Up>&) noexcept {}

    __attribute__ ((__exclude_from_explicit_instantiation__)) const_pointer address(const_reference __x) const noexcept
        {return std::__1::addressof(__x);}
    __attribute__ ((__exclude_from_explicit_instantiation__)) pointer allocate(size_type __n, allocator<void>::const_pointer = 0)
    {
        if (__n > max_size())
            __throw_length_error("allocator<const T>::allocate(size_t n)"
                                 " 'n' exceeds maximum supported size");
        return static_cast<pointer>(std::__1::__libcpp_allocate(__n * sizeof(_Tp), alignof(_Tp)));
    }
    __attribute__ ((__exclude_from_explicit_instantiation__)) void deallocate(pointer __p, size_type __n) noexcept
        {std::__1::__libcpp_deallocate((void*) const_cast<_Tp *>(__p), __n * sizeof(_Tp), alignof(_Tp));}
    __attribute__ ((__exclude_from_explicit_instantiation__)) size_type max_size() const noexcept
        {return size_type(~0) / sizeof(_Tp);}

    template <class _Up, class... _Args>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        void
        construct(_Up* __p, _Args&&... __args)
        {
            ::new((void*)__p) _Up(std::__1::forward<_Args>(__args)...);
        }
    __attribute__ ((__exclude_from_explicit_instantiation__)) void destroy(pointer __p) {__p->~_Tp();}
};

template <class _Tp, class _Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool operator==(const allocator<_Tp>&, const allocator<_Up>&) noexcept {return true;}

template <class _Tp, class _Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool operator!=(const allocator<_Tp>&, const allocator<_Up>&) noexcept {return false;}

template <class _OutputIterator, class _Tp>
class raw_storage_iterator
    : public iterator<output_iterator_tag,
                      _Tp,
                      ptrdiff_t,
                      _Tp*,
                      raw_storage_iterator<_OutputIterator, _Tp>&>
{
private:
    _OutputIterator __x_;
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit raw_storage_iterator(_OutputIterator __x) : __x_(__x) {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) raw_storage_iterator& operator*() {return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) raw_storage_iterator& operator=(const _Tp& __element)
        {::new(std::__1::addressof(*__x_)) _Tp(__element); return *this;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) raw_storage_iterator& operator=(_Tp&& __element)
        {::new(std::__1::addressof(*__x_)) _Tp(std::__1::move(__element)); return *this;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) raw_storage_iterator& operator++() {++__x_; return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) raw_storage_iterator operator++(int)
        {raw_storage_iterator __t(*this); ++__x_; return __t;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) _OutputIterator base() const { return __x_; }

};

template <class _Tp>
                      __attribute__((__no_sanitize__("cfi")))
pair<_Tp*, ptrdiff_t>
get_temporary_buffer(ptrdiff_t __n) noexcept
{
    pair<_Tp*, ptrdiff_t> __r(0, 0);
    const ptrdiff_t __m = (~ptrdiff_t(0) ^
                           ptrdiff_t(ptrdiff_t(1) << (sizeof(ptrdiff_t) * 8 - 1)))
                           / sizeof(_Tp);
    if (__n > __m)
        __n = __m;
    while (__n > 0)
    {

    if (__is_overaligned_for_new(alignof(_Tp)))
        {
            std::align_val_t __al =
                std::align_val_t(std::alignment_of<_Tp>::value);
            __r.first = static_cast<_Tp*>(::operator new(
                __n * sizeof(_Tp), __al, nothrow));
        } else {
            __r.first = static_cast<_Tp*>(::operator new(
                __n * sizeof(_Tp), nothrow));
        }
        if (__r.first)
        {
            __r.second = __n;
            break;
        }
        __n /= 2;
    }
    return __r;
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void return_temporary_buffer(_Tp* __p) noexcept
{
  std::__1::__libcpp_deallocate_unsized((void*)__p, alignof(_Tp));
}
template <class _Tp, int _Idx,
          bool _CanBeEmptyBase =
              is_empty<_Tp>::value && !__libcpp_is_final<_Tp>::value>
struct __compressed_pair_elem {
  typedef _Tp _ParamT;
  typedef _Tp& reference;
  typedef const _Tp& const_reference;

  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __compressed_pair_elem() : __value_() {}

  template <class _Up, class = typename enable_if<
      !is_same<__compressed_pair_elem, typename decay<_Up>::type>::value
  >::type>
  __attribute__ ((__exclude_from_explicit_instantiation__))
  constexpr explicit
  __compressed_pair_elem(_Up&& __u)
      : __value_(std::__1::forward<_Up>(__u))
    {
    }

  template <class... _Args, size_t... _Indexes>
  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
  __compressed_pair_elem(piecewise_construct_t, tuple<_Args...> __args,
                         __tuple_indices<_Indexes...>)
      : __value_(std::__1::forward<_Args>(std::__1::get<_Indexes>(__args))...) {}

  __attribute__ ((__exclude_from_explicit_instantiation__)) reference __get() noexcept { return __value_; }
  __attribute__ ((__exclude_from_explicit_instantiation__))
  const_reference __get() const noexcept { return __value_; }

private:
  _Tp __value_;
};

template <class _Tp, int _Idx>
struct __compressed_pair_elem<_Tp, _Idx, true> : private _Tp {
  typedef _Tp _ParamT;
  typedef _Tp& reference;
  typedef const _Tp& const_reference;
  typedef _Tp __value_type;

  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr __compressed_pair_elem() = default;

  template <class _Up, class = typename enable_if<
        !is_same<__compressed_pair_elem, typename decay<_Up>::type>::value
  >::type>
  __attribute__ ((__exclude_from_explicit_instantiation__))
  constexpr explicit
  __compressed_pair_elem(_Up&& __u)
      : __value_type(std::__1::forward<_Up>(__u))
  {}

  template <class... _Args, size_t... _Indexes>
  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
  __compressed_pair_elem(piecewise_construct_t, tuple<_Args...> __args,
                         __tuple_indices<_Indexes...>)
      : __value_type(std::__1::forward<_Args>(std::__1::get<_Indexes>(__args))...) {}

  __attribute__ ((__exclude_from_explicit_instantiation__)) reference __get() noexcept { return *this; }
  __attribute__ ((__exclude_from_explicit_instantiation__))
  const_reference __get() const noexcept { return *this; }
};

struct __second_tag {};

template <class _T1, class _T2>
class __compressed_pair : private __compressed_pair_elem<_T1, 0>,
                          private __compressed_pair_elem<_T2, 1> {
  typedef __attribute__((nodebug)) __compressed_pair_elem<_T1, 0> _Base1;
  typedef __attribute__((nodebug)) __compressed_pair_elem<_T2, 1> _Base2;

  static_assert((!is_same<_T1, _T2>::value),
    "__compressed_pair cannot be instantated when T1 and T2 are the same type; "
    "The current implementation is NOT ABI-compatible with the previous "
    "implementation for this configuration");

public:

  template <bool _Dummy = true,
      class = typename enable_if<
          __dependent_type<is_default_constructible<_T1>, _Dummy>::value &&
          __dependent_type<is_default_constructible<_T2>, _Dummy>::value
      >::type
  >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  constexpr __compressed_pair() {}

  template <class _Tp, typename enable_if<!is_same<typename decay<_Tp>::type,
                                                   __compressed_pair>::value,
                                          bool>::type = true>
  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr explicit
  __compressed_pair(_Tp&& __t)
      : _Base1(std::forward<_Tp>(__t)), _Base2() {}

  template <class _Tp>
  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
  __compressed_pair(__second_tag, _Tp&& __t)
      : _Base1(), _Base2(std::forward<_Tp>(__t)) {}

  template <class _U1, class _U2>
  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
  __compressed_pair(_U1&& __t1, _U2&& __t2)
      : _Base1(std::forward<_U1>(__t1)), _Base2(std::forward<_U2>(__t2)) {}

  template <class... _Args1, class... _Args2>
  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
  __compressed_pair(piecewise_construct_t __pc, tuple<_Args1...> __first_args,
                    tuple<_Args2...> __second_args)
      : _Base1(__pc, std::__1::move(__first_args),
               typename __make_tuple_indices<sizeof...(_Args1)>::type()),
        _Base2(__pc, std::__1::move(__second_args),
               typename __make_tuple_indices<sizeof...(_Args2)>::type()) {}
  __attribute__ ((__exclude_from_explicit_instantiation__))
  typename _Base1::reference first() noexcept {
    return static_cast<_Base1&>(*this).__get();
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  typename _Base1::const_reference first() const noexcept {
    return static_cast<_Base1 const&>(*this).__get();
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  typename _Base2::reference second() noexcept {
    return static_cast<_Base2&>(*this).__get();
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  typename _Base2::const_reference second() const noexcept {
    return static_cast<_Base2 const&>(*this).__get();
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  void swap(__compressed_pair& __x)
    noexcept(__is_nothrow_swappable<_T1>::value && __is_nothrow_swappable<_T2>::value)

  {
    using std::swap;
    swap(first(), __x.first());
    swap(second(), __x.second());
  }
};

template <class _T1, class _T2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void swap(__compressed_pair<_T1, _T2>& __x, __compressed_pair<_T1, _T2>& __y)
    noexcept(__is_nothrow_swappable<_T1>::value && __is_nothrow_swappable<_T2>::value) {

  __x.swap(__y);
}

template <class _Tp>
struct default_delete {
    static_assert(!is_function<_Tp>::value,
                  "default_delete cannot be instantiated for function types");

  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr default_delete() noexcept = default;

  template <class _Up>
  __attribute__ ((__exclude_from_explicit_instantiation__))
  default_delete(const default_delete<_Up>&,
                 typename enable_if<is_convertible<_Up*, _Tp*>::value>::type* =
                     0) noexcept {}

  __attribute__ ((__exclude_from_explicit_instantiation__)) void operator()(_Tp* __ptr) const noexcept {
    static_assert(sizeof(_Tp) > 0,
                  "default_delete can not delete incomplete type");
    static_assert(!is_void<_Tp>::value,
                  "default_delete can not delete incomplete type");
    delete __ptr;
  }
};

template <class _Tp>
struct default_delete<_Tp[]> {
private:
  template <class _Up>
  struct _EnableIfConvertible
      : enable_if<is_convertible<_Up(*)[], _Tp(*)[]>::value> {};

public:

  __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr default_delete() noexcept = default;

  template <class _Up>
  __attribute__ ((__exclude_from_explicit_instantiation__))
  default_delete(const default_delete<_Up[]>&,
                 typename _EnableIfConvertible<_Up>::type* = 0) noexcept {}

  template <class _Up>
  __attribute__ ((__exclude_from_explicit_instantiation__))
  typename _EnableIfConvertible<_Up>::type
  operator()(_Up* __ptr) const noexcept {
    static_assert(sizeof(_Tp) > 0,
                  "default_delete can not delete incomplete type");
    static_assert(!is_void<_Tp>::value,
                  "default_delete can not delete void type");
    delete[] __ptr;
  }
};

template <class _Deleter>
struct __unique_ptr_deleter_sfinae {
  static_assert(!is_reference<_Deleter>::value, "incorrect specialization");
  typedef const _Deleter& __lval_ref_type;
  typedef _Deleter&& __good_rval_ref_type;
  typedef true_type __enable_rval_overload;
};

template <class _Deleter>
struct __unique_ptr_deleter_sfinae<_Deleter const&> {
  typedef const _Deleter& __lval_ref_type;
  typedef const _Deleter&& __bad_rval_ref_type;
  typedef false_type __enable_rval_overload;
};

template <class _Deleter>
struct __unique_ptr_deleter_sfinae<_Deleter&> {
  typedef _Deleter& __lval_ref_type;
  typedef _Deleter&& __bad_rval_ref_type;
  typedef false_type __enable_rval_overload;
};

template <class _Tp, class _Dp = default_delete<_Tp> >
class unique_ptr {
public:
  typedef _Tp element_type;
  typedef _Dp deleter_type;
  typedef __attribute__((nodebug)) typename __pointer_type<_Tp, deleter_type>::type pointer;

  static_assert(!is_rvalue_reference<deleter_type>::value,
                "the specified deleter type cannot be an rvalue reference");

private:
  __compressed_pair<pointer, deleter_type> __ptr_;

  struct __nat { int __for_bool_; };

  typedef __attribute__((nodebug)) __unique_ptr_deleter_sfinae<_Dp> _DeleterSFINAE;

  template <bool _Dummy>
  using _LValRefType __attribute__((nodebug)) =
      typename __dependent_type<_DeleterSFINAE, _Dummy>::__lval_ref_type;

  template <bool _Dummy>
  using _GoodRValRefType __attribute__((nodebug)) =
      typename __dependent_type<_DeleterSFINAE, _Dummy>::__good_rval_ref_type;

  template <bool _Dummy>
  using _BadRValRefType __attribute__((nodebug)) =
      typename __dependent_type<_DeleterSFINAE, _Dummy>::__bad_rval_ref_type;

  template <bool _Dummy, class _Deleter = typename __dependent_type<
                             __identity<deleter_type>, _Dummy>::type>
  using _EnableIfDeleterDefaultConstructible __attribute__((nodebug)) =
      typename enable_if<is_default_constructible<_Deleter>::value &&
                         !is_pointer<_Deleter>::value>::type;

  template <class _ArgType>
  using _EnableIfDeleterConstructible __attribute__((nodebug)) =
      typename enable_if<is_constructible<deleter_type, _ArgType>::value>::type;

  template <class _UPtr, class _Up>
  using _EnableIfMoveConvertible __attribute__((nodebug)) = typename enable_if<
      is_convertible<typename _UPtr::pointer, pointer>::value &&
      !is_array<_Up>::value
  >::type;

  template <class _UDel>
  using _EnableIfDeleterConvertible __attribute__((nodebug)) = typename enable_if<
      (is_reference<_Dp>::value && is_same<_Dp, _UDel>::value) ||
      (!is_reference<_Dp>::value && is_convertible<_UDel, _Dp>::value)
    >::type;

  template <class _UDel>
  using _EnableIfDeleterAssignable = typename enable_if<
      is_assignable<_Dp&, _UDel&&>::value
    >::type;

public:
  template <bool _Dummy = true,
            class = _EnableIfDeleterDefaultConstructible<_Dummy> >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  constexpr unique_ptr() noexcept : __ptr_(pointer()) {}

  template <bool _Dummy = true,
            class = _EnableIfDeleterDefaultConstructible<_Dummy> >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  constexpr unique_ptr(nullptr_t) noexcept : __ptr_(pointer()) {}

  template <bool _Dummy = true,
            class = _EnableIfDeleterDefaultConstructible<_Dummy> >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  explicit unique_ptr(pointer __p) noexcept : __ptr_(__p) {}

  template <bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_LValRefType<_Dummy> > >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr(pointer __p, _LValRefType<_Dummy> __d) noexcept
      : __ptr_(__p, __d) {}

  template <bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_GoodRValRefType<_Dummy> > >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr(pointer __p, _GoodRValRefType<_Dummy> __d) noexcept
      : __ptr_(__p, std::__1::move(__d)) {
    static_assert(!is_reference<deleter_type>::value,
                  "rvalue deleter bound to reference");
  }

  template <bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_BadRValRefType<_Dummy> > >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr(pointer __p, _BadRValRefType<_Dummy> __d) = delete;

  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr(unique_ptr&& __u) noexcept
      : __ptr_(__u.release(), std::__1::forward<deleter_type>(__u.get_deleter())) {
  }

  template <class _Up, class _Ep,
      class = _EnableIfMoveConvertible<unique_ptr<_Up, _Ep>, _Up>,
      class = _EnableIfDeleterConvertible<_Ep>
  >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr(unique_ptr<_Up, _Ep>&& __u) noexcept
      : __ptr_(__u.release(), std::__1::forward<_Ep>(__u.get_deleter())) {}
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr& operator=(unique_ptr&& __u) noexcept {
    reset(__u.release());
    __ptr_.second() = std::__1::forward<deleter_type>(__u.get_deleter());
    return *this;
  }

  template <class _Up, class _Ep,
      class = _EnableIfMoveConvertible<unique_ptr<_Up, _Ep>, _Up>,
      class = _EnableIfDeleterAssignable<_Ep>
  >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr& operator=(unique_ptr<_Up, _Ep>&& __u) noexcept {
    reset(__u.release());
    __ptr_.second() = std::__1::forward<_Ep>(__u.get_deleter());
    return *this;
  }
  __attribute__ ((__exclude_from_explicit_instantiation__))
  ~unique_ptr() { reset(); }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr& operator=(nullptr_t) noexcept {
    reset();
    return *this;
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  typename add_lvalue_reference<_Tp>::type
  operator*() const {
    return *__ptr_.first();
  }
  __attribute__ ((__exclude_from_explicit_instantiation__))
  pointer operator->() const noexcept {
    return __ptr_.first();
  }
  __attribute__ ((__exclude_from_explicit_instantiation__))
  pointer get() const noexcept {
    return __ptr_.first();
  }
  __attribute__ ((__exclude_from_explicit_instantiation__))
  deleter_type& get_deleter() noexcept {
    return __ptr_.second();
  }
  __attribute__ ((__exclude_from_explicit_instantiation__))
  const deleter_type& get_deleter() const noexcept {
    return __ptr_.second();
  }
  __attribute__ ((__exclude_from_explicit_instantiation__))
  explicit operator bool() const noexcept {
    return __ptr_.first() != nullptr;
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  pointer release() noexcept {
    pointer __t = __ptr_.first();
    __ptr_.first() = pointer();
    return __t;
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  void reset(pointer __p = pointer()) noexcept {
    pointer __tmp = __ptr_.first();
    __ptr_.first() = __p;
    if (__tmp)
      __ptr_.second()(__tmp);
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  void swap(unique_ptr& __u) noexcept {
    __ptr_.swap(__u.__ptr_);
  }
};

template <class _Tp, class _Dp>
class unique_ptr<_Tp[], _Dp> {
public:
  typedef _Tp element_type;
  typedef _Dp deleter_type;
  typedef typename __pointer_type<_Tp, deleter_type>::type pointer;

private:
  __compressed_pair<pointer, deleter_type> __ptr_;

  template <class _From>
  struct _CheckArrayPointerConversion : is_same<_From, pointer> {};

  template <class _FromElem>
  struct _CheckArrayPointerConversion<_FromElem*>
      : integral_constant<bool,
          is_same<_FromElem*, pointer>::value ||
            (is_same<pointer, element_type*>::value &&
             is_convertible<_FromElem(*)[], element_type(*)[]>::value)
      >
  {};

  typedef __unique_ptr_deleter_sfinae<_Dp> _DeleterSFINAE;

  template <bool _Dummy>
  using _LValRefType __attribute__((nodebug)) =
      typename __dependent_type<_DeleterSFINAE, _Dummy>::__lval_ref_type;

  template <bool _Dummy>
  using _GoodRValRefType __attribute__((nodebug)) =
      typename __dependent_type<_DeleterSFINAE, _Dummy>::__good_rval_ref_type;

  template <bool _Dummy>
  using _BadRValRefType __attribute__((nodebug)) =
      typename __dependent_type<_DeleterSFINAE, _Dummy>::__bad_rval_ref_type;

  template <bool _Dummy, class _Deleter = typename __dependent_type<
                             __identity<deleter_type>, _Dummy>::type>
  using _EnableIfDeleterDefaultConstructible __attribute__((nodebug)) =
      typename enable_if<is_default_constructible<_Deleter>::value &&
                         !is_pointer<_Deleter>::value>::type;

  template <class _ArgType>
  using _EnableIfDeleterConstructible __attribute__((nodebug)) =
      typename enable_if<is_constructible<deleter_type, _ArgType>::value>::type;

  template <class _Pp>
  using _EnableIfPointerConvertible __attribute__((nodebug)) = typename enable_if<
      _CheckArrayPointerConversion<_Pp>::value
  >::type;

  template <class _UPtr, class _Up,
        class _ElemT = typename _UPtr::element_type>
  using _EnableIfMoveConvertible __attribute__((nodebug)) = typename enable_if<
      is_array<_Up>::value &&
      is_same<pointer, element_type*>::value &&
      is_same<typename _UPtr::pointer, _ElemT*>::value &&
      is_convertible<_ElemT(*)[], element_type(*)[]>::value
    >::type;

  template <class _UDel>
  using _EnableIfDeleterConvertible __attribute__((nodebug)) = typename enable_if<
      (is_reference<_Dp>::value && is_same<_Dp, _UDel>::value) ||
      (!is_reference<_Dp>::value && is_convertible<_UDel, _Dp>::value)
    >::type;

  template <class _UDel>
  using _EnableIfDeleterAssignable __attribute__((nodebug)) = typename enable_if<
      is_assignable<_Dp&, _UDel&&>::value
    >::type;

public:
  template <bool _Dummy = true,
            class = _EnableIfDeleterDefaultConstructible<_Dummy> >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  constexpr unique_ptr() noexcept : __ptr_(pointer()) {}

  template <bool _Dummy = true,
            class = _EnableIfDeleterDefaultConstructible<_Dummy> >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  constexpr unique_ptr(nullptr_t) noexcept : __ptr_(pointer()) {}

  template <class _Pp, bool _Dummy = true,
            class = _EnableIfDeleterDefaultConstructible<_Dummy>,
            class = _EnableIfPointerConvertible<_Pp> >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  explicit unique_ptr(_Pp __p) noexcept
      : __ptr_(__p) {}

  template <class _Pp, bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_LValRefType<_Dummy> >,
            class = _EnableIfPointerConvertible<_Pp> >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr(_Pp __p, _LValRefType<_Dummy> __d) noexcept
      : __ptr_(__p, __d) {}

  template <bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_LValRefType<_Dummy> > >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr(nullptr_t, _LValRefType<_Dummy> __d) noexcept
      : __ptr_(nullptr, __d) {}

  template <class _Pp, bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_GoodRValRefType<_Dummy> >,
            class = _EnableIfPointerConvertible<_Pp> >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr(_Pp __p, _GoodRValRefType<_Dummy> __d) noexcept
      : __ptr_(__p, std::__1::move(__d)) {
    static_assert(!is_reference<deleter_type>::value,
                  "rvalue deleter bound to reference");
  }

  template <bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_GoodRValRefType<_Dummy> > >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr(nullptr_t, _GoodRValRefType<_Dummy> __d) noexcept
      : __ptr_(nullptr, std::__1::move(__d)) {
    static_assert(!is_reference<deleter_type>::value,
                  "rvalue deleter bound to reference");
  }

  template <class _Pp, bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_BadRValRefType<_Dummy> >,
            class = _EnableIfPointerConvertible<_Pp> >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr(_Pp __p, _BadRValRefType<_Dummy> __d) = delete;

  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr(unique_ptr&& __u) noexcept
      : __ptr_(__u.release(), std::__1::forward<deleter_type>(__u.get_deleter())) {
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr& operator=(unique_ptr&& __u) noexcept {
    reset(__u.release());
    __ptr_.second() = std::__1::forward<deleter_type>(__u.get_deleter());
    return *this;
  }

  template <class _Up, class _Ep,
      class = _EnableIfMoveConvertible<unique_ptr<_Up, _Ep>, _Up>,
      class = _EnableIfDeleterConvertible<_Ep>
  >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr(unique_ptr<_Up, _Ep>&& __u) noexcept
      : __ptr_(__u.release(), std::__1::forward<_Ep>(__u.get_deleter())) {
  }

  template <class _Up, class _Ep,
      class = _EnableIfMoveConvertible<unique_ptr<_Up, _Ep>, _Up>,
      class = _EnableIfDeleterAssignable<_Ep>
  >
  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr&
  operator=(unique_ptr<_Up, _Ep>&& __u) noexcept {
    reset(__u.release());
    __ptr_.second() = std::__1::forward<_Ep>(__u.get_deleter());
    return *this;
  }

public:
  __attribute__ ((__exclude_from_explicit_instantiation__))
  ~unique_ptr() { reset(); }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  unique_ptr& operator=(nullptr_t) noexcept {
    reset();
    return *this;
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  typename add_lvalue_reference<_Tp>::type
  operator[](size_t __i) const {
    return __ptr_.first()[__i];
  }
  __attribute__ ((__exclude_from_explicit_instantiation__))
  pointer get() const noexcept {
    return __ptr_.first();
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  deleter_type& get_deleter() noexcept {
    return __ptr_.second();
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  const deleter_type& get_deleter() const noexcept {
    return __ptr_.second();
  }
  __attribute__ ((__exclude_from_explicit_instantiation__))
  explicit operator bool() const noexcept {
    return __ptr_.first() != nullptr;
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  pointer release() noexcept {
    pointer __t = __ptr_.first();
    __ptr_.first() = pointer();
    return __t;
  }

  template <class _Pp>
  __attribute__ ((__exclude_from_explicit_instantiation__))
  typename enable_if<
      _CheckArrayPointerConversion<_Pp>::value
  >::type
  reset(_Pp __p) noexcept {
    pointer __tmp = __ptr_.first();
    __ptr_.first() = __p;
    if (__tmp)
      __ptr_.second()(__tmp);
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  void reset(nullptr_t = nullptr) noexcept {
    pointer __tmp = __ptr_.first();
    __ptr_.first() = nullptr;
    if (__tmp)
      __ptr_.second()(__tmp);
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  void swap(unique_ptr& __u) noexcept {
    __ptr_.swap(__u.__ptr_);
  }

};

template <class _Tp, class _Dp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if<
    __is_swappable<_Dp>::value,
    void
>::type
swap(unique_ptr<_Tp, _Dp>& __x, unique_ptr<_Tp, _Dp>& __y) noexcept {__x.swap(__y);}

template <class _T1, class _D1, class _T2, class _D2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator==(const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y) {return __x.get() == __y.get();}

template <class _T1, class _D1, class _T2, class _D2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator!=(const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y) {return !(__x == __y);}

template <class _T1, class _D1, class _T2, class _D2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator< (const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y)
{
    typedef typename unique_ptr<_T1, _D1>::pointer _P1;
    typedef typename unique_ptr<_T2, _D2>::pointer _P2;
    typedef typename common_type<_P1, _P2>::type _Vp;
    return less<_Vp>()(__x.get(), __y.get());
}

template <class _T1, class _D1, class _T2, class _D2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator> (const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y) {return __y < __x;}

template <class _T1, class _D1, class _T2, class _D2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator<=(const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y) {return !(__y < __x);}

template <class _T1, class _D1, class _T2, class _D2>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator>=(const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y) {return !(__x < __y);}

template <class _T1, class _D1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator==(const unique_ptr<_T1, _D1>& __x, nullptr_t) noexcept
{
    return !__x;
}

template <class _T1, class _D1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator==(nullptr_t, const unique_ptr<_T1, _D1>& __x) noexcept
{
    return !__x;
}

template <class _T1, class _D1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator!=(const unique_ptr<_T1, _D1>& __x, nullptr_t) noexcept
{
    return static_cast<bool>(__x);
}

template <class _T1, class _D1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator!=(nullptr_t, const unique_ptr<_T1, _D1>& __x) noexcept
{
    return static_cast<bool>(__x);
}

template <class _T1, class _D1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator<(const unique_ptr<_T1, _D1>& __x, nullptr_t)
{
    typedef typename unique_ptr<_T1, _D1>::pointer _P1;
    return less<_P1>()(__x.get(), nullptr);
}

template <class _T1, class _D1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator<(nullptr_t, const unique_ptr<_T1, _D1>& __x)
{
    typedef typename unique_ptr<_T1, _D1>::pointer _P1;
    return less<_P1>()(nullptr, __x.get());
}

template <class _T1, class _D1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator>(const unique_ptr<_T1, _D1>& __x, nullptr_t)
{
    return nullptr < __x;
}

template <class _T1, class _D1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator>(nullptr_t, const unique_ptr<_T1, _D1>& __x)
{
    return __x < nullptr;
}

template <class _T1, class _D1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator<=(const unique_ptr<_T1, _D1>& __x, nullptr_t)
{
    return !(nullptr < __x);
}

template <class _T1, class _D1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator<=(nullptr_t, const unique_ptr<_T1, _D1>& __x)
{
    return !(__x < nullptr);
}

template <class _T1, class _D1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator>=(const unique_ptr<_T1, _D1>& __x, nullptr_t)
{
    return !(__x < nullptr);
}

template <class _T1, class _D1>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator>=(nullptr_t, const unique_ptr<_T1, _D1>& __x)
{
    return !(nullptr < __x);
}

template<class _Tp>
struct __unique_if
{
    typedef unique_ptr<_Tp> __unique_single;
};

template<class _Tp>
struct __unique_if<_Tp[]>
{
    typedef unique_ptr<_Tp[]> __unique_array_unknown_bound;
};

template<class _Tp, size_t _Np>
struct __unique_if<_Tp[_Np]>
{
    typedef void __unique_array_known_bound;
};

template<class _Tp, class... _Args>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename __unique_if<_Tp>::__unique_single
make_unique(_Args&&... __args)
{
    return unique_ptr<_Tp>(new _Tp(std::__1::forward<_Args>(__args)...));
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename __unique_if<_Tp>::__unique_array_unknown_bound
make_unique(size_t __n)
{
    typedef typename remove_extent<_Tp>::type _Up;
    return unique_ptr<_Tp>(new _Up[__n]());
}

template<class _Tp, class... _Args>
    typename __unique_if<_Tp>::__unique_array_known_bound
    make_unique(_Args&&...) = delete;

struct __destruct_n
{
private:
    size_t __size_;

    template <class _Tp>
    __attribute__ ((__exclude_from_explicit_instantiation__)) void __process(_Tp* __p, false_type) noexcept
        {for (size_t __i = 0; __i < __size_; ++__i, ++__p) __p->~_Tp();}

    template <class _Tp>
    __attribute__ ((__exclude_from_explicit_instantiation__)) void __process(_Tp*, true_type) noexcept
        {}

    __attribute__ ((__exclude_from_explicit_instantiation__)) void __incr(false_type) noexcept
        {++__size_;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) void __incr(true_type) noexcept
        {}

    __attribute__ ((__exclude_from_explicit_instantiation__)) void __set(size_t __s, false_type) noexcept
        {__size_ = __s;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) void __set(size_t, true_type) noexcept
        {}
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit __destruct_n(size_t __s) noexcept
        : __size_(__s) {}

    template <class _Tp>
    __attribute__ ((__exclude_from_explicit_instantiation__)) void __incr(_Tp*) noexcept
        {__incr(integral_constant<bool, is_trivially_destructible<_Tp>::value>());}

    template <class _Tp>
    __attribute__ ((__exclude_from_explicit_instantiation__)) void __set(size_t __s, _Tp*) noexcept
        {__set(__s, integral_constant<bool, is_trivially_destructible<_Tp>::value>());}

    template <class _Tp>
    __attribute__ ((__exclude_from_explicit_instantiation__)) void operator()(_Tp* __p) noexcept
        {__process(__p, integral_constant<bool, is_trivially_destructible<_Tp>::value>());}
};

template <class _Alloc>
class __allocator_destructor
{
    typedef __attribute__((nodebug)) allocator_traits<_Alloc> __alloc_traits;
public:
    typedef __attribute__((nodebug)) typename __alloc_traits::pointer pointer;
    typedef __attribute__((nodebug)) typename __alloc_traits::size_type size_type;
private:
    _Alloc& __alloc_;
    size_type __s_;
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) __allocator_destructor(_Alloc& __a, size_type __s)
             noexcept
        : __alloc_(__a), __s_(__s) {}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void operator()(pointer __p) noexcept
        {__alloc_traits::deallocate(__alloc_, __p, __s_);}
};

template <class _InputIterator, class _ForwardIterator>
_ForwardIterator
uninitialized_copy(_InputIterator __f, _InputIterator __l, _ForwardIterator __r)
{
    typedef typename iterator_traits<_ForwardIterator>::value_type value_type;

        for (; __f != __l; ++__f, (void) ++__r)
            ::new (static_cast<void*>(std::__1::addressof(*__r))) value_type(*__f);
    return __r;
}

template <class _InputIterator, class _Size, class _ForwardIterator>
_ForwardIterator
uninitialized_copy_n(_InputIterator __f, _Size __n, _ForwardIterator __r)
{
    typedef typename iterator_traits<_ForwardIterator>::value_type value_type;

        for (; __n > 0; ++__f, (void) ++__r, (void) --__n)
            ::new (static_cast<void*>(std::__1::addressof(*__r))) value_type(*__f);
    return __r;
}

template <class _ForwardIterator, class _Tp>
void
uninitialized_fill(_ForwardIterator __f, _ForwardIterator __l, const _Tp& __x)
{
    typedef typename iterator_traits<_ForwardIterator>::value_type value_type;

        for (; __f != __l; ++__f)
            ::new (static_cast<void*>(std::__1::addressof(*__f))) value_type(__x);
}

template <class _ForwardIterator, class _Size, class _Tp>
_ForwardIterator
uninitialized_fill_n(_ForwardIterator __f, _Size __n, const _Tp& __x)
{
    typedef typename iterator_traits<_ForwardIterator>::value_type value_type;

        for (; __n > 0; ++__f, (void) --__n)
            ::new (static_cast<void*>(std::__1::addressof(*__f))) value_type(__x);
    return __f;
}

template <class _ForwardIterator>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void uninitialized_default_construct(_ForwardIterator __first, _ForwardIterator __last) {
    using _Vt = typename iterator_traits<_ForwardIterator>::value_type;
    auto __idx = __first;

    for (; __idx != __last; ++__idx)
        ::new((void*)std::__1::addressof(*__idx)) _Vt;

}

template <class _ForwardIterator, class _Size>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_ForwardIterator uninitialized_default_construct_n(_ForwardIterator __first, _Size __n) {
    using _Vt = typename iterator_traits<_ForwardIterator>::value_type;
    auto __idx = __first;

    for (; __n > 0; (void)++__idx, --__n)
        ::new((void*)std::__1::addressof(*__idx)) _Vt;
    return __idx;

}

template <class _ForwardIterator>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void uninitialized_value_construct(_ForwardIterator __first, _ForwardIterator __last) {
    using _Vt = typename iterator_traits<_ForwardIterator>::value_type;
    auto __idx = __first;

    for (; __idx != __last; ++__idx)
        ::new((void*)std::__1::addressof(*__idx)) _Vt();

}

template <class _ForwardIterator, class _Size>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_ForwardIterator uninitialized_value_construct_n(_ForwardIterator __first, _Size __n) {
    using _Vt = typename iterator_traits<_ForwardIterator>::value_type;
    auto __idx = __first;
    for (; __n > 0; (void)++__idx, --__n)
        ::new((void*)std::__1::addressof(*__idx)) _Vt();
    return __idx;
}

template <class _InputIt, class _ForwardIt>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_ForwardIt uninitialized_move(_InputIt __first, _InputIt __last, _ForwardIt __first_res) {
    using _Vt = typename iterator_traits<_ForwardIt>::value_type;
    auto __idx = __first_res;
    for (; __first != __last; (void)++__idx, ++__first)
        ::new((void*)std::__1::addressof(*__idx)) _Vt(std::move(*__first));
    return __idx;
}

template <class _InputIt, class _Size, class _ForwardIt>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
pair<_InputIt, _ForwardIt>
uninitialized_move_n(_InputIt __first, _Size __n, _ForwardIt __first_res) {
    using _Vt = typename iterator_traits<_ForwardIt>::value_type;
    auto __idx = __first_res;
    for (; __n > 0; ++__idx, (void)++__first, --__n)
        ::new((void*)std::__1::addressof(*__idx)) _Vt(std::move(*__first));
    return {__first, __idx};
}
template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) _Tp
__libcpp_atomic_refcount_increment(_Tp& __t) noexcept
{

    return __atomic_add_fetch(&__t, 1, 0);

}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) _Tp
__libcpp_atomic_refcount_decrement(_Tp& __t) noexcept
{

    return __atomic_add_fetch(&__t, -1, 4);

}

class bad_weak_ptr
    : public std::exception
{
public:
    virtual ~bad_weak_ptr() noexcept;
    virtual const char* what() const noexcept;
};

template<class _Tp> class weak_ptr;

class __shared_count
{
    __shared_count(const __shared_count&);
    __shared_count& operator=(const __shared_count&);

protected:
    long __shared_owners_;
    virtual ~__shared_count();
private:
    virtual void __on_zero_shared() noexcept = 0;

public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __shared_count(long __refs = 0) noexcept
        : __shared_owners_(__refs) {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __add_shared() noexcept {
      __libcpp_atomic_refcount_increment(__shared_owners_);
    }
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool __release_shared() noexcept {
      if (__libcpp_atomic_refcount_decrement(__shared_owners_) == -1) {
        __on_zero_shared();
        return true;
      }
      return false;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    long use_count() const noexcept {
        return __libcpp_relaxed_load(&__shared_owners_) + 1;
    }
};

class __shared_weak_count
    : private __shared_count
{
    long __shared_weak_owners_;

public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __shared_weak_count(long __refs = 0) noexcept
        : __shared_count(__refs),
          __shared_weak_owners_(__refs) {}
protected:
    virtual ~__shared_weak_count();

public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __add_shared() noexcept {
      __shared_count::__add_shared();
    }
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __add_weak() noexcept {
      __libcpp_atomic_refcount_increment(__shared_weak_owners_);
    }
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __release_shared() noexcept {
      if (__shared_count::__release_shared())
        __release_weak();
    }
    void __release_weak() noexcept;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    long use_count() const noexcept {return __shared_count::use_count();}
    __shared_weak_count* lock() noexcept;

    virtual const void* __get_deleter(const type_info&) const noexcept;

private:
    virtual void __on_zero_shared_weak() noexcept = 0;
};

template <class _Tp, class _Dp, class _Alloc>
class __shared_ptr_pointer
    : public __shared_weak_count
{
    __compressed_pair<__compressed_pair<_Tp, _Dp>, _Alloc> __data_;
public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    __shared_ptr_pointer(_Tp __p, _Dp __d, _Alloc __a)
        : __data_(__compressed_pair<_Tp, _Dp>(__p, std::__1::move(__d)), std::__1::move(__a)) {}

    virtual const void* __get_deleter(const type_info&) const noexcept;

private:
    virtual void __on_zero_shared() noexcept;
    virtual void __on_zero_shared_weak() noexcept;
};

template <class _Tp, class _Dp, class _Alloc>
const void*
__shared_ptr_pointer<_Tp, _Dp, _Alloc>::__get_deleter(const type_info& __t) const noexcept
{
    return __t == typeid(_Dp) ? std::__1::addressof(__data_.first().second()) : nullptr;
}

template <class _Tp, class _Dp, class _Alloc>
void
__shared_ptr_pointer<_Tp, _Dp, _Alloc>::__on_zero_shared() noexcept
{
    __data_.first().second()(__data_.first().first());
    __data_.first().second().~_Dp();
}

template <class _Tp, class _Dp, class _Alloc>
void
__shared_ptr_pointer<_Tp, _Dp, _Alloc>::__on_zero_shared_weak() noexcept
{
    typedef typename __allocator_traits_rebind<_Alloc, __shared_ptr_pointer>::type _Al;
    typedef allocator_traits<_Al> _ATraits;
    typedef pointer_traits<typename _ATraits::pointer> _PTraits;

    _Al __a(__data_.second());
    __data_.second().~_Alloc();
    __a.deallocate(_PTraits::pointer_to(*this), 1);
}

template <class _Tp, class _Alloc>
class __shared_ptr_emplace
    : public __shared_weak_count
{
    __compressed_pair<_Alloc, _Tp> __data_;
public:

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __shared_ptr_emplace(_Alloc __a)
        : __data_(std::__1::move(__a)) {}

    template <class ..._Args>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        __shared_ptr_emplace(_Alloc __a, _Args&& ...__args)
            : __data_(piecewise_construct, std::__1::forward_as_tuple(__a),
                   std::__1::forward_as_tuple(std::__1::forward<_Args>(__args)...)) {}

private:
    virtual void __on_zero_shared() noexcept;
    virtual void __on_zero_shared_weak() noexcept;
public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp* get() noexcept {return std::__1::addressof(__data_.second());}
};

template <class _Tp, class _Alloc>
void
__shared_ptr_emplace<_Tp, _Alloc>::__on_zero_shared() noexcept
{
    __data_.second().~_Tp();
}

template <class _Tp, class _Alloc>
void
__shared_ptr_emplace<_Tp, _Alloc>::__on_zero_shared_weak() noexcept
{
    typedef typename __allocator_traits_rebind<_Alloc, __shared_ptr_emplace>::type _Al;
    typedef allocator_traits<_Al> _ATraits;
    typedef pointer_traits<typename _ATraits::pointer> _PTraits;
    _Al __a(__data_.first());
    __data_.first().~_Alloc();
    __a.deallocate(_PTraits::pointer_to(*this), 1);
}

struct __shared_ptr_dummy_rebind_allocator_type;
template <>
class allocator<__shared_ptr_dummy_rebind_allocator_type>
{
public:
    template <class _Other>
    struct rebind
    {
        typedef allocator<_Other> other;
    };
};

template<class _Tp> class enable_shared_from_this;

template<class _Tp>
class shared_ptr
{
public:
    typedef _Tp element_type;

    typedef weak_ptr<_Tp> weak_type;

private:
    element_type* __ptr_;
    __shared_weak_count* __cntrl_;

    struct __nat {int __for_bool_;};
public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr shared_ptr() noexcept;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr shared_ptr(nullptr_t) noexcept;
    template<class _Yp>
        explicit shared_ptr(_Yp* __p,
                            typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type = __nat());
    template<class _Yp, class _Dp>
        shared_ptr(_Yp* __p, _Dp __d,
                   typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type = __nat());
    template<class _Yp, class _Dp, class _Alloc>
        shared_ptr(_Yp* __p, _Dp __d, _Alloc __a,
                   typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type = __nat());
    template <class _Dp> shared_ptr(nullptr_t __p, _Dp __d);
    template <class _Dp, class _Alloc> shared_ptr(nullptr_t __p, _Dp __d, _Alloc __a);
    template<class _Yp> __attribute__ ((__exclude_from_explicit_instantiation__)) shared_ptr(const shared_ptr<_Yp>& __r, element_type* __p) noexcept;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    shared_ptr(const shared_ptr& __r) noexcept;
    template<class _Yp>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        shared_ptr(const shared_ptr<_Yp>& __r,
                   typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type = __nat())
                       noexcept;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    shared_ptr(shared_ptr&& __r) noexcept;
    template<class _Yp> __attribute__ ((__exclude_from_explicit_instantiation__)) shared_ptr(shared_ptr<_Yp>&& __r,
                   typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type = __nat())
                       noexcept;

    template<class _Yp> explicit shared_ptr(const weak_ptr<_Yp>& __r,
                   typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type= __nat());
    template <class _Yp, class _Dp>
        shared_ptr(unique_ptr<_Yp, _Dp>&&,
                   typename enable_if
                   <
                       !is_lvalue_reference<_Dp>::value &&
                       !is_array<_Yp>::value &&
                       is_convertible<typename unique_ptr<_Yp, _Dp>::pointer, element_type*>::value,
                       __nat
                   >::type = __nat());
    template <class _Yp, class _Dp>
        shared_ptr(unique_ptr<_Yp, _Dp>&&,
                   typename enable_if
                   <
                       is_lvalue_reference<_Dp>::value &&
                       !is_array<_Yp>::value &&
                       is_convertible<typename unique_ptr<_Yp, _Dp>::pointer, element_type*>::value,
                       __nat
                   >::type = __nat());
    ~shared_ptr();

    __attribute__ ((__exclude_from_explicit_instantiation__))
    shared_ptr& operator=(const shared_ptr& __r) noexcept;
    template<class _Yp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            shared_ptr&
        >::type
        __attribute__ ((__exclude_from_explicit_instantiation__))
        operator=(const shared_ptr<_Yp>& __r) noexcept;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    shared_ptr& operator=(shared_ptr&& __r) noexcept;
    template<class _Yp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            shared_ptr<_Tp>&
        >::type
        __attribute__ ((__exclude_from_explicit_instantiation__))
        operator=(shared_ptr<_Yp>&& __r);
    template <class _Yp, class _Dp>
        typename enable_if
        <
            !is_array<_Yp>::value &&
            is_convertible<typename unique_ptr<_Yp, _Dp>::pointer, element_type*>::value,
            shared_ptr&
        >::type

        __attribute__ ((__exclude_from_explicit_instantiation__))
        operator=(unique_ptr<_Yp, _Dp>&& __r);

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void swap(shared_ptr& __r) noexcept;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void reset() noexcept;
    template<class _Yp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            void
        >::type
        __attribute__ ((__exclude_from_explicit_instantiation__))
        reset(_Yp* __p);
    template<class _Yp, class _Dp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            void
        >::type
        __attribute__ ((__exclude_from_explicit_instantiation__))
        reset(_Yp* __p, _Dp __d);
    template<class _Yp, class _Dp, class _Alloc>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            void
        >::type
        __attribute__ ((__exclude_from_explicit_instantiation__))
        reset(_Yp* __p, _Dp __d, _Alloc __a);

    __attribute__ ((__exclude_from_explicit_instantiation__))
    element_type* get() const noexcept {return __ptr_;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    typename add_lvalue_reference<element_type>::type operator*() const noexcept
        {return *__ptr_;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    element_type* operator->() const noexcept {return __ptr_;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    long use_count() const noexcept {return __cntrl_ ? __cntrl_->use_count() : 0;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool unique() const noexcept {return use_count() == 1;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit operator bool() const noexcept {return get() != 0;}
    template <class _Up>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        bool owner_before(shared_ptr<_Up> const& __p) const noexcept
        {return __cntrl_ < __p.__cntrl_;}
    template <class _Up>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        bool owner_before(weak_ptr<_Up> const& __p) const noexcept
        {return __cntrl_ < __p.__cntrl_;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool
    __owner_equivalent(const shared_ptr& __p) const
        {return __cntrl_ == __p.__cntrl_;}

    template <class _Dp>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        _Dp* __get_deleter() const noexcept
            {return static_cast<_Dp*>(__cntrl_
                    ? const_cast<void *>(__cntrl_->__get_deleter(typeid(_Dp)))
                      : nullptr);}

    template<class ..._Args>
        static
        shared_ptr<_Tp>
        make_shared(_Args&& ...__args);

    template<class _Alloc, class ..._Args>
        static
        shared_ptr<_Tp>
        allocate_shared(const _Alloc& __a, _Args&& ...__args);

private:
    template <class _Yp, bool = is_function<_Yp>::value>
        struct __shared_ptr_default_allocator
        {
            typedef allocator<_Yp> type;
        };

    template <class _Yp>
        struct __shared_ptr_default_allocator<_Yp, true>
        {
            typedef allocator<__shared_ptr_dummy_rebind_allocator_type> type;
        };

    template <class _Yp, class _OrigPtr>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        typename enable_if<is_convertible<_OrigPtr*,
                                          const enable_shared_from_this<_Yp>*
        >::value,
            void>::type
        __enable_weak_this(const enable_shared_from_this<_Yp>* __e,
                           _OrigPtr* __ptr) noexcept
        {
            typedef typename remove_cv<_Yp>::type _RawYp;
            if (__e && __e->__weak_this_.expired())
            {
                __e->__weak_this_ = shared_ptr<_RawYp>(*this,
                    const_cast<_RawYp*>(static_cast<const _Yp*>(__ptr)));
            }
        }

    __attribute__ ((__exclude_from_explicit_instantiation__)) void __enable_weak_this(...) noexcept {}

    template <class _Up> friend class shared_ptr;
    template <class _Up> friend class weak_ptr;
};

template<class _Tp>
inline
constexpr
shared_ptr<_Tp>::shared_ptr() noexcept
    : __ptr_(0),
      __cntrl_(0)
{
}

template<class _Tp>
inline
constexpr
shared_ptr<_Tp>::shared_ptr(nullptr_t) noexcept
    : __ptr_(0),
      __cntrl_(0)
{
}

template<class _Tp>
template<class _Yp>
shared_ptr<_Tp>::shared_ptr(_Yp* __p,
                            typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type)
    : __ptr_(__p)
{
    unique_ptr<_Yp> __hold(__p);
    typedef typename __shared_ptr_default_allocator<_Yp>::type _AllocT;
    typedef __shared_ptr_pointer<_Yp*, default_delete<_Yp>, _AllocT > _CntrlBlk;
    __cntrl_ = new _CntrlBlk(__p, default_delete<_Yp>(), _AllocT());
    __hold.release();
    __enable_weak_this(__p, __p);
}

template<class _Tp>
template<class _Yp, class _Dp>
shared_ptr<_Tp>::shared_ptr(_Yp* __p, _Dp __d,
                            typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type)
    : __ptr_(__p)
{
        typedef typename __shared_ptr_default_allocator<_Yp>::type _AllocT;
        typedef __shared_ptr_pointer<_Yp*, _Dp, _AllocT > _CntrlBlk;
        __cntrl_ = new _CntrlBlk(__p, __d, _AllocT());
        __enable_weak_this(__p, __p);
}

template<class _Tp>
template<class _Dp>
shared_ptr<_Tp>::shared_ptr(nullptr_t __p, _Dp __d)
    : __ptr_(0)
{

        typedef typename __shared_ptr_default_allocator<_Tp>::type _AllocT;
        typedef __shared_ptr_pointer<nullptr_t, _Dp, _AllocT > _CntrlBlk;
        __cntrl_ = new _CntrlBlk(__p, __d, _AllocT());
}

template<class _Tp>
template<class _Yp, class _Dp, class _Alloc>
shared_ptr<_Tp>::shared_ptr(_Yp* __p, _Dp __d, _Alloc __a,
                            typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type)
    : __ptr_(__p)
{

        typedef __shared_ptr_pointer<_Yp*, _Dp, _Alloc> _CntrlBlk;
        typedef typename __allocator_traits_rebind<_Alloc, _CntrlBlk>::type _A2;
        typedef __allocator_destructor<_A2> _D2;
        _A2 __a2(__a);
        unique_ptr<_CntrlBlk, _D2> __hold2(__a2.allocate(1), _D2(__a2, 1));
        ::new(static_cast<void*>(std::__1::addressof(*__hold2.get())))
            _CntrlBlk(__p, __d, __a);
        __cntrl_ = std::__1::addressof(*__hold2.release());
        __enable_weak_this(__p, __p);
}

template<class _Tp>
template<class _Dp, class _Alloc>
shared_ptr<_Tp>::shared_ptr(nullptr_t __p, _Dp __d, _Alloc __a)
    : __ptr_(0)
{

        typedef __shared_ptr_pointer<nullptr_t, _Dp, _Alloc> _CntrlBlk;
        typedef typename __allocator_traits_rebind<_Alloc, _CntrlBlk>::type _A2;
        typedef __allocator_destructor<_A2> _D2;
        _A2 __a2(__a);
        unique_ptr<_CntrlBlk, _D2> __hold2(__a2.allocate(1), _D2(__a2, 1));
        ::new(static_cast<void*>(std::__1::addressof(*__hold2.get())))
            _CntrlBlk(__p, __d, __a);
        __cntrl_ = std::__1::addressof(*__hold2.release());
}

template<class _Tp>
template<class _Yp>
inline
shared_ptr<_Tp>::shared_ptr(const shared_ptr<_Yp>& __r, element_type *__p) noexcept
    : __ptr_(__p),
      __cntrl_(__r.__cntrl_)
{
    if (__cntrl_)
        __cntrl_->__add_shared();
}

template<class _Tp>
inline
shared_ptr<_Tp>::shared_ptr(const shared_ptr& __r) noexcept
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    if (__cntrl_)
        __cntrl_->__add_shared();
}

template<class _Tp>
template<class _Yp>
inline
shared_ptr<_Tp>::shared_ptr(const shared_ptr<_Yp>& __r,
                            typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type)
         noexcept
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    if (__cntrl_)
        __cntrl_->__add_shared();
}

template<class _Tp>
inline
shared_ptr<_Tp>::shared_ptr(shared_ptr&& __r) noexcept
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    __r.__ptr_ = 0;
    __r.__cntrl_ = 0;
}

template<class _Tp>
template<class _Yp>
inline
shared_ptr<_Tp>::shared_ptr(shared_ptr<_Yp>&& __r,
                            typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type)
         noexcept
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    __r.__ptr_ = 0;
    __r.__cntrl_ = 0;
}
template<class _Tp>
template <class _Yp, class _Dp>

shared_ptr<_Tp>::shared_ptr(unique_ptr<_Yp, _Dp>&& __r,

                            typename enable_if
                            <
                                !is_lvalue_reference<_Dp>::value &&
                                !is_array<_Yp>::value &&
                                is_convertible<typename unique_ptr<_Yp, _Dp>::pointer, element_type*>::value,
                                __nat
                            >::type)
    : __ptr_(__r.get())
{

    if (__ptr_ == nullptr)
        __cntrl_ = nullptr;
    else

    {
        typedef typename __shared_ptr_default_allocator<_Yp>::type _AllocT;
        typedef __shared_ptr_pointer<_Yp*, _Dp, _AllocT > _CntrlBlk;
        __cntrl_ = new _CntrlBlk(__r.get(), __r.get_deleter(), _AllocT());
        __enable_weak_this(__r.get(), __r.get());
    }
    __r.release();
}

template<class _Tp>
template <class _Yp, class _Dp>

shared_ptr<_Tp>::shared_ptr(unique_ptr<_Yp, _Dp>&& __r,

                            typename enable_if
                            <
                                is_lvalue_reference<_Dp>::value &&
                                !is_array<_Yp>::value &&
                                is_convertible<typename unique_ptr<_Yp, _Dp>::pointer, element_type*>::value,
                                __nat
                            >::type)
    : __ptr_(__r.get())
{

    if (__ptr_ == nullptr)
        __cntrl_ = nullptr;
    else

    {
        typedef typename __shared_ptr_default_allocator<_Yp>::type _AllocT;
        typedef __shared_ptr_pointer<_Yp*,
                                     reference_wrapper<typename remove_reference<_Dp>::type>,
                                     _AllocT > _CntrlBlk;
        __cntrl_ = new _CntrlBlk(__r.get(), ref(__r.get_deleter()), _AllocT());
        __enable_weak_this(__r.get(), __r.get());
    }
    __r.release();
}

template<class _Tp>
template<class ..._Args>
shared_ptr<_Tp>
shared_ptr<_Tp>::make_shared(_Args&& ...__args)
{
    static_assert( is_constructible<_Tp, _Args...>::value, "Can't construct object in make_shared" );
    typedef __shared_ptr_emplace<_Tp, allocator<_Tp> > _CntrlBlk;
    typedef allocator<_CntrlBlk> _A2;
    typedef __allocator_destructor<_A2> _D2;
    _A2 __a2;
    unique_ptr<_CntrlBlk, _D2> __hold2(__a2.allocate(1), _D2(__a2, 1));
    ::new(__hold2.get()) _CntrlBlk(__a2, std::__1::forward<_Args>(__args)...);
    shared_ptr<_Tp> __r;
    __r.__ptr_ = __hold2.get()->get();
    __r.__cntrl_ = __hold2.release();
    __r.__enable_weak_this(__r.__ptr_, __r.__ptr_);
    return __r;
}

template<class _Tp>
template<class _Alloc, class ..._Args>
shared_ptr<_Tp>
shared_ptr<_Tp>::allocate_shared(const _Alloc& __a, _Args&& ...__args)
{
    static_assert( is_constructible<_Tp, _Args...>::value, "Can't construct object in allocate_shared" );
    typedef __shared_ptr_emplace<_Tp, _Alloc> _CntrlBlk;
    typedef typename __allocator_traits_rebind<_Alloc, _CntrlBlk>::type _A2;
    typedef __allocator_destructor<_A2> _D2;
    _A2 __a2(__a);
    unique_ptr<_CntrlBlk, _D2> __hold2(__a2.allocate(1), _D2(__a2, 1));
    ::new(static_cast<void*>(std::__1::addressof(*__hold2.get())))
        _CntrlBlk(__a, std::__1::forward<_Args>(__args)...);
    shared_ptr<_Tp> __r;
    __r.__ptr_ = __hold2.get()->get();
    __r.__cntrl_ = std::__1::addressof(*__hold2.release());
    __r.__enable_weak_this(__r.__ptr_, __r.__ptr_);
    return __r;
}

template<class _Tp>
shared_ptr<_Tp>::~shared_ptr()
{
    if (__cntrl_)
        __cntrl_->__release_shared();
}

template<class _Tp>
inline
shared_ptr<_Tp>&
shared_ptr<_Tp>::operator=(const shared_ptr& __r) noexcept
{
    shared_ptr(__r).swap(*this);
    return *this;
}

template<class _Tp>
template<class _Yp>
inline
typename enable_if
<
    is_convertible<_Yp*, typename shared_ptr<_Tp>::element_type*>::value,
    shared_ptr<_Tp>&
>::type
shared_ptr<_Tp>::operator=(const shared_ptr<_Yp>& __r) noexcept
{
    shared_ptr(__r).swap(*this);
    return *this;
}

template<class _Tp>
inline
shared_ptr<_Tp>&
shared_ptr<_Tp>::operator=(shared_ptr&& __r) noexcept
{
    shared_ptr(std::__1::move(__r)).swap(*this);
    return *this;
}

template<class _Tp>
template<class _Yp>
inline
typename enable_if
<
    is_convertible<_Yp*, typename shared_ptr<_Tp>::element_type*>::value,
    shared_ptr<_Tp>&
>::type
shared_ptr<_Tp>::operator=(shared_ptr<_Yp>&& __r)
{
    shared_ptr(std::__1::move(__r)).swap(*this);
    return *this;
}
template<class _Tp>
template <class _Yp, class _Dp>
inline
typename enable_if
<
    !is_array<_Yp>::value &&
    is_convertible<typename unique_ptr<_Yp, _Dp>::pointer,
                   typename shared_ptr<_Tp>::element_type*>::value,
    shared_ptr<_Tp>&
>::type
shared_ptr<_Tp>::operator=(unique_ptr<_Yp, _Dp>&& __r)
{
    shared_ptr(std::__1::move(__r)).swap(*this);
    return *this;
}
template<class _Tp>
inline
void
shared_ptr<_Tp>::swap(shared_ptr& __r) noexcept
{
    std::__1::swap(__ptr_, __r.__ptr_);
    std::__1::swap(__cntrl_, __r.__cntrl_);
}

template<class _Tp>
inline
void
shared_ptr<_Tp>::reset() noexcept
{
    shared_ptr().swap(*this);
}

template<class _Tp>
template<class _Yp>
inline
typename enable_if
<
    is_convertible<_Yp*, typename shared_ptr<_Tp>::element_type*>::value,
    void
>::type
shared_ptr<_Tp>::reset(_Yp* __p)
{
    shared_ptr(__p).swap(*this);
}

template<class _Tp>
template<class _Yp, class _Dp>
inline
typename enable_if
<
    is_convertible<_Yp*, typename shared_ptr<_Tp>::element_type*>::value,
    void
>::type
shared_ptr<_Tp>::reset(_Yp* __p, _Dp __d)
{
    shared_ptr(__p, __d).swap(*this);
}

template<class _Tp>
template<class _Yp, class _Dp, class _Alloc>
inline
typename enable_if
<
    is_convertible<_Yp*, typename shared_ptr<_Tp>::element_type*>::value,
    void
>::type
shared_ptr<_Tp>::reset(_Yp* __p, _Dp __d, _Alloc __a)
{
    shared_ptr(__p, __d, __a).swap(*this);
}

template<class _Tp, class ..._Args>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    !is_array<_Tp>::value,
    shared_ptr<_Tp>
>::type
make_shared(_Args&& ...__args)
{
    return shared_ptr<_Tp>::make_shared(std::__1::forward<_Args>(__args)...);
}

template<class _Tp, class _Alloc, class ..._Args>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    !is_array<_Tp>::value,
    shared_ptr<_Tp>
>::type
allocate_shared(const _Alloc& __a, _Args&& ...__args)
{
    return shared_ptr<_Tp>::allocate_shared(__a, std::__1::forward<_Args>(__args)...);
}

template<class _Tp, class _Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator==(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) noexcept
{
    return __x.get() == __y.get();
}

template<class _Tp, class _Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator!=(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) noexcept
{
    return !(__x == __y);
}

template<class _Tp, class _Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator<(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) noexcept
{

    return less<>()(__x.get(), __y.get());

}

template<class _Tp, class _Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator>(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) noexcept
{
    return __y < __x;
}

template<class _Tp, class _Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator<=(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) noexcept
{
    return !(__y < __x);
}

template<class _Tp, class _Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator>=(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) noexcept
{
    return !(__x < __y);
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator==(const shared_ptr<_Tp>& __x, nullptr_t) noexcept
{
    return !__x;
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator==(nullptr_t, const shared_ptr<_Tp>& __x) noexcept
{
    return !__x;
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator!=(const shared_ptr<_Tp>& __x, nullptr_t) noexcept
{
    return static_cast<bool>(__x);
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator!=(nullptr_t, const shared_ptr<_Tp>& __x) noexcept
{
    return static_cast<bool>(__x);
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator<(const shared_ptr<_Tp>& __x, nullptr_t) noexcept
{
    return less<_Tp*>()(__x.get(), nullptr);
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator<(nullptr_t, const shared_ptr<_Tp>& __x) noexcept
{
    return less<_Tp*>()(nullptr, __x.get());
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator>(const shared_ptr<_Tp>& __x, nullptr_t) noexcept
{
    return nullptr < __x;
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator>(nullptr_t, const shared_ptr<_Tp>& __x) noexcept
{
    return __x < nullptr;
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator<=(const shared_ptr<_Tp>& __x, nullptr_t) noexcept
{
    return !(nullptr < __x);
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator<=(nullptr_t, const shared_ptr<_Tp>& __x) noexcept
{
    return !(__x < nullptr);
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator>=(const shared_ptr<_Tp>& __x, nullptr_t) noexcept
{
    return !(__x < nullptr);
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator>=(nullptr_t, const shared_ptr<_Tp>& __x) noexcept
{
    return !(nullptr < __x);
}

template<class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void
swap(shared_ptr<_Tp>& __x, shared_ptr<_Tp>& __y) noexcept
{
    __x.swap(__y);
}

template<class _Tp, class _Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    !is_array<_Tp>::value && !is_array<_Up>::value,
    shared_ptr<_Tp>
>::type
static_pointer_cast(const shared_ptr<_Up>& __r) noexcept
{
    return shared_ptr<_Tp>(__r, static_cast<_Tp*>(__r.get()));
}

template<class _Tp, class _Up>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    !is_array<_Tp>::value && !is_array<_Up>::value,
    shared_ptr<_Tp>
>::type
dynamic_pointer_cast(const shared_ptr<_Up>& __r) noexcept
{
    _Tp* __p = dynamic_cast<_Tp*>(__r.get());
    return __p ? shared_ptr<_Tp>(__r, __p) : shared_ptr<_Tp>();
}

template<class _Tp, class _Up>
typename enable_if
<
    is_array<_Tp>::value == is_array<_Up>::value,
    shared_ptr<_Tp>
>::type
const_pointer_cast(const shared_ptr<_Up>& __r) noexcept
{
    typedef typename remove_extent<_Tp>::type _RTp;
    return shared_ptr<_Tp>(__r, const_cast<_RTp*>(__r.get()));
}

template<class _Dp, class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_Dp*
get_deleter(const shared_ptr<_Tp>& __p) noexcept
{
    return __p.template __get_deleter<_Dp>();
}

template<class _Tp>
class weak_ptr
{
public:
    typedef _Tp element_type;
private:
    element_type* __ptr_;
    __shared_weak_count* __cntrl_;

public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    constexpr weak_ptr() noexcept;
    template<class _Yp> __attribute__ ((__exclude_from_explicit_instantiation__)) weak_ptr(shared_ptr<_Yp> const& __r,
                   typename enable_if<is_convertible<_Yp*, _Tp*>::value, __nat*>::type = 0)
                        noexcept;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    weak_ptr(weak_ptr const& __r) noexcept;
    template<class _Yp> __attribute__ ((__exclude_from_explicit_instantiation__)) weak_ptr(weak_ptr<_Yp> const& __r,
                   typename enable_if<is_convertible<_Yp*, _Tp*>::value, __nat*>::type = 0)
                         noexcept;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    weak_ptr(weak_ptr&& __r) noexcept;
    template<class _Yp> __attribute__ ((__exclude_from_explicit_instantiation__)) weak_ptr(weak_ptr<_Yp>&& __r,
                   typename enable_if<is_convertible<_Yp*, _Tp*>::value, __nat*>::type = 0)
                         noexcept;

    ~weak_ptr();

    __attribute__ ((__exclude_from_explicit_instantiation__))
    weak_ptr& operator=(weak_ptr const& __r) noexcept;
    template<class _Yp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            weak_ptr&
        >::type
        __attribute__ ((__exclude_from_explicit_instantiation__))
        operator=(weak_ptr<_Yp> const& __r) noexcept;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    weak_ptr& operator=(weak_ptr&& __r) noexcept;
    template<class _Yp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            weak_ptr&
        >::type
        __attribute__ ((__exclude_from_explicit_instantiation__))
        operator=(weak_ptr<_Yp>&& __r) noexcept;

    template<class _Yp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            weak_ptr&
        >::type
        __attribute__ ((__exclude_from_explicit_instantiation__))
        operator=(shared_ptr<_Yp> const& __r) noexcept;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void swap(weak_ptr& __r) noexcept;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void reset() noexcept;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    long use_count() const noexcept
        {return __cntrl_ ? __cntrl_->use_count() : 0;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool expired() const noexcept
        {return __cntrl_ == 0 || __cntrl_->use_count() == 0;}
    shared_ptr<_Tp> lock() const noexcept;
    template<class _Up>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        bool owner_before(const shared_ptr<_Up>& __r) const noexcept
        {return __cntrl_ < __r.__cntrl_;}
    template<class _Up>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        bool owner_before(const weak_ptr<_Up>& __r) const noexcept
        {return __cntrl_ < __r.__cntrl_;}

    template <class _Up> friend class weak_ptr;
    template <class _Up> friend class shared_ptr;
};

template<class _Tp>
inline
constexpr
weak_ptr<_Tp>::weak_ptr() noexcept
    : __ptr_(0),
      __cntrl_(0)
{
}

template<class _Tp>
inline
weak_ptr<_Tp>::weak_ptr(weak_ptr const& __r) noexcept
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    if (__cntrl_)
        __cntrl_->__add_weak();
}

template<class _Tp>
template<class _Yp>
inline
weak_ptr<_Tp>::weak_ptr(shared_ptr<_Yp> const& __r,
                        typename enable_if<is_convertible<_Yp*, _Tp*>::value, __nat*>::type)
                         noexcept
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    if (__cntrl_)
        __cntrl_->__add_weak();
}

template<class _Tp>
template<class _Yp>
inline
weak_ptr<_Tp>::weak_ptr(weak_ptr<_Yp> const& __r,
                        typename enable_if<is_convertible<_Yp*, _Tp*>::value, __nat*>::type)
         noexcept
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    if (__cntrl_)
        __cntrl_->__add_weak();
}

template<class _Tp>
inline
weak_ptr<_Tp>::weak_ptr(weak_ptr&& __r) noexcept
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    __r.__ptr_ = 0;
    __r.__cntrl_ = 0;
}

template<class _Tp>
template<class _Yp>
inline
weak_ptr<_Tp>::weak_ptr(weak_ptr<_Yp>&& __r,
                        typename enable_if<is_convertible<_Yp*, _Tp*>::value, __nat*>::type)
         noexcept
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    __r.__ptr_ = 0;
    __r.__cntrl_ = 0;
}

template<class _Tp>
weak_ptr<_Tp>::~weak_ptr()
{
    if (__cntrl_)
        __cntrl_->__release_weak();
}

template<class _Tp>
inline
weak_ptr<_Tp>&
weak_ptr<_Tp>::operator=(weak_ptr const& __r) noexcept
{
    weak_ptr(__r).swap(*this);
    return *this;
}

template<class _Tp>
template<class _Yp>
inline
typename enable_if
<
    is_convertible<_Yp*, _Tp*>::value,
    weak_ptr<_Tp>&
>::type
weak_ptr<_Tp>::operator=(weak_ptr<_Yp> const& __r) noexcept
{
    weak_ptr(__r).swap(*this);
    return *this;
}

template<class _Tp>
inline
weak_ptr<_Tp>&
weak_ptr<_Tp>::operator=(weak_ptr&& __r) noexcept
{
    weak_ptr(std::__1::move(__r)).swap(*this);
    return *this;
}

template<class _Tp>
template<class _Yp>
inline
typename enable_if
<
    is_convertible<_Yp*, _Tp*>::value,
    weak_ptr<_Tp>&
>::type
weak_ptr<_Tp>::operator=(weak_ptr<_Yp>&& __r) noexcept
{
    weak_ptr(std::__1::move(__r)).swap(*this);
    return *this;
}

template<class _Tp>
template<class _Yp>
inline
typename enable_if
<
    is_convertible<_Yp*, _Tp*>::value,
    weak_ptr<_Tp>&
>::type
weak_ptr<_Tp>::operator=(shared_ptr<_Yp> const& __r) noexcept
{
    weak_ptr(__r).swap(*this);
    return *this;
}

template<class _Tp>
template<class _Yp>
shared_ptr<_Tp>::shared_ptr(const weak_ptr<_Yp>& __r,
                            typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type)
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_ ? __r.__cntrl_->lock() : __r.__cntrl_)
{
    if (__cntrl_ == 0)
        __throw_bad_weak_ptr();
}

template<class _Tp>
shared_ptr<_Tp>
weak_ptr<_Tp>::lock() const noexcept
{
    shared_ptr<_Tp> __r;
    __r.__cntrl_ = __cntrl_ ? __cntrl_->lock() : __cntrl_;
    if (__r.__cntrl_)
        __r.__ptr_ = __ptr_;
    return __r;
}

template <class _Tp = void> struct owner_less;

template <class _Tp>
struct owner_less<shared_ptr<_Tp> >
    : binary_function<shared_ptr<_Tp>, shared_ptr<_Tp>, bool>
{
    typedef bool result_type;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(shared_ptr<_Tp> const& __x, shared_ptr<_Tp> const& __y) const noexcept
        {return __x.owner_before(__y);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(shared_ptr<_Tp> const& __x, weak_ptr<_Tp> const& __y) const noexcept
        {return __x.owner_before(__y);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()( weak_ptr<_Tp> const& __x, shared_ptr<_Tp> const& __y) const noexcept
        {return __x.owner_before(__y);}
};

template <class _Tp>
struct owner_less<weak_ptr<_Tp> >
    : binary_function<weak_ptr<_Tp>, weak_ptr<_Tp>, bool>
{
    typedef bool result_type;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()( weak_ptr<_Tp> const& __x, weak_ptr<_Tp> const& __y) const noexcept
        {return __x.owner_before(__y);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(shared_ptr<_Tp> const& __x, weak_ptr<_Tp> const& __y) const noexcept
        {return __x.owner_before(__y);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()( weak_ptr<_Tp> const& __x, shared_ptr<_Tp> const& __y) const noexcept
        {return __x.owner_before(__y);}
};

template <>
struct owner_less<void>
{
    template <class _Tp, class _Up>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()( shared_ptr<_Tp> const& __x, shared_ptr<_Up> const& __y) const noexcept
        {return __x.owner_before(__y);}
    template <class _Tp, class _Up>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()( shared_ptr<_Tp> const& __x, weak_ptr<_Up> const& __y) const noexcept
        {return __x.owner_before(__y);}
    template <class _Tp, class _Up>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()( weak_ptr<_Tp> const& __x, shared_ptr<_Up> const& __y) const noexcept
        {return __x.owner_before(__y);}
    template <class _Tp, class _Up>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()( weak_ptr<_Tp> const& __x, weak_ptr<_Up> const& __y) const noexcept
        {return __x.owner_before(__y);}
    typedef void is_transparent;
};

template<class _Tp>
class enable_shared_from_this
{
    mutable weak_ptr<_Tp> __weak_this_;
protected:
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    enable_shared_from_this() noexcept {}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    enable_shared_from_this(enable_shared_from_this const&) noexcept {}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    enable_shared_from_this& operator=(enable_shared_from_this const&) noexcept
        {return *this;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    ~enable_shared_from_this() {}
public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    shared_ptr<_Tp> shared_from_this()
        {return shared_ptr<_Tp>(__weak_this_);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    shared_ptr<_Tp const> shared_from_this() const
        {return shared_ptr<const _Tp>(__weak_this_);}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    weak_ptr<_Tp> weak_from_this() noexcept
       { return __weak_this_; }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    weak_ptr<const _Tp> weak_from_this() const noexcept
        { return __weak_this_; }

    template <class _Up> friend class shared_ptr;
};

class __sp_mut
{
    void* __lx;
public:
    void lock() noexcept;
    void unlock() noexcept;

private:
    constexpr __sp_mut(void*) noexcept;
    __sp_mut(const __sp_mut&);
    __sp_mut& operator=(const __sp_mut&);

    friend __sp_mut& __get_sp_mut(const void*);
};

__sp_mut& __get_sp_mut(const void*);

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
atomic_is_lock_free(const shared_ptr<_Tp>*)
{
    return false;
}

template <class _Tp>

shared_ptr<_Tp>
atomic_load(const shared_ptr<_Tp>* __p)
{
    __sp_mut& __m = __get_sp_mut(__p);
    __m.lock();
    shared_ptr<_Tp> __q = *__p;
    __m.unlock();
    return __q;
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))

shared_ptr<_Tp>
atomic_load_explicit(const shared_ptr<_Tp>* __p, memory_order)
{
    return atomic_load(__p);
}

template <class _Tp>

void
atomic_store(shared_ptr<_Tp>* __p, shared_ptr<_Tp> __r)
{
    __sp_mut& __m = __get_sp_mut(__p);
    __m.lock();
    __p->swap(__r);
    __m.unlock();
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))

void
atomic_store_explicit(shared_ptr<_Tp>* __p, shared_ptr<_Tp> __r, memory_order)
{
    atomic_store(__p, __r);
}

template <class _Tp>

shared_ptr<_Tp>
atomic_exchange(shared_ptr<_Tp>* __p, shared_ptr<_Tp> __r)
{
    __sp_mut& __m = __get_sp_mut(__p);
    __m.lock();
    __p->swap(__r);
    __m.unlock();
    return __r;
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))

shared_ptr<_Tp>
atomic_exchange_explicit(shared_ptr<_Tp>* __p, shared_ptr<_Tp> __r, memory_order)
{
    return atomic_exchange(__p, __r);
}

template <class _Tp>

bool
atomic_compare_exchange_strong(shared_ptr<_Tp>* __p, shared_ptr<_Tp>* __v, shared_ptr<_Tp> __w)
{
    shared_ptr<_Tp> __temp;
    __sp_mut& __m = __get_sp_mut(__p);
    __m.lock();
    if (__p->__owner_equivalent(*__v))
    {
        std::__1::swap(__temp, *__p);
        *__p = __w;
        __m.unlock();
        return true;
    }
    std::__1::swap(__temp, *__v);
    *__v = *__p;
    __m.unlock();
    return false;
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))

bool
atomic_compare_exchange_weak(shared_ptr<_Tp>* __p, shared_ptr<_Tp>* __v, shared_ptr<_Tp> __w)
{
    return atomic_compare_exchange_strong(__p, __v, __w);
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))

bool
atomic_compare_exchange_strong_explicit(shared_ptr<_Tp>* __p, shared_ptr<_Tp>* __v,
                                        shared_ptr<_Tp> __w, memory_order, memory_order)
{
    return atomic_compare_exchange_strong(__p, __v, __w);
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))

bool
atomic_compare_exchange_weak_explicit(shared_ptr<_Tp>* __p, shared_ptr<_Tp>* __v,
                                      shared_ptr<_Tp> __w, memory_order, memory_order)
{
    return atomic_compare_exchange_weak(__p, __v, __w);
}
struct pointer_safety
{
    enum __lx
    {
        relaxed,
        preferred,
        strict
    };

    __lx __v_;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    pointer_safety() : __v_() {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    pointer_safety(__lx __v) : __v_(__v) {}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    operator int() const {return __v_;}
};

                 pointer_safety get_pointer_safety() noexcept;
                 void declare_reachable(void* __p);
                 void declare_no_pointers(char* __p, size_t __n);
                 void undeclare_no_pointers(char* __p, size_t __n);
                 void* __undeclare_reachable(void* __p);

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp*
undeclare_reachable(_Tp* __p)
{
    return static_cast<_Tp*>(__undeclare_reachable(__p));
}

                 void* align(size_t __align, size_t __sz, void*& __ptr, size_t& __space);

template <typename _Alloc>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void __swap_allocator(_Alloc & __a1, _Alloc & __a2)

    noexcept

{
    __swap_allocator(__a1, __a2,
      integral_constant<bool, std::__1::allocator_traits<_Alloc>::propagate_on_container_swap::value>());
}

template <typename _Alloc>
 __attribute__ ((__exclude_from_explicit_instantiation__))
void __swap_allocator(_Alloc & __a1, _Alloc & __a2, true_type)

    noexcept

{
    using std::__1::swap;
    swap(__a1, __a2);
}

template <typename _Alloc>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void __swap_allocator(_Alloc &, _Alloc &, false_type) noexcept {}

template <typename _Alloc, typename _Traits=allocator_traits<_Alloc> >
struct __noexcept_move_assign_container : public integral_constant<bool,
    _Traits::propagate_on_container_move_assignment::value

        || _Traits::is_always_equal::value

    > {};

template <class _Tp, class _Alloc>
struct __temp_value {
    typedef allocator_traits<_Alloc> _Traits;

    typename aligned_storage<sizeof(_Tp), alignof(_Tp)>::type __v;
    _Alloc &__a;

    _Tp *__addr() { return reinterpret_cast<_Tp *>(addressof(__v)); }
    _Tp & get() { return *__addr(); }

    template<class... _Args>
    __attribute__((__no_sanitize__("cfi")))
    __temp_value(_Alloc &__alloc, _Args&& ... __args) : __a(__alloc) {
      _Traits::construct(__a, reinterpret_cast<_Tp*>(addressof(__v)),
                         std::__1::forward<_Args>(__args)...);
    }

    ~__temp_value() { _Traits::destroy(__a, __addr()); }
    };

template<typename _Alloc, typename = void, typename = void>
struct __is_allocator : false_type {};

template<typename _Alloc>
struct __is_allocator<_Alloc,
       typename __void_t<typename _Alloc::value_type>::type,
       typename __void_t<decltype(std::__1::declval<_Alloc&>().allocate(size_t(0)))>::type
     >
   : true_type {};

struct __builtin_new_allocator {
  struct __builtin_new_deleter {
    typedef void* pointer_type;

    constexpr explicit __builtin_new_deleter(size_t __size, size_t __align)
        : __size_(__size), __align_(__align) {}

    void operator()(void* p) const noexcept {
        std::__libcpp_deallocate(p, __size_, __align_);
    }

   private:
    size_t __size_;
    size_t __align_;
  };

  typedef unique_ptr<void, __builtin_new_deleter> __holder_t;

  static __holder_t __allocate_bytes(size_t __s, size_t __align) {
      return __holder_t(std::__libcpp_allocate(__s, __align),
                     __builtin_new_deleter(__s, __align));
  }

  static void __deallocate_bytes(void* __p, size_t __s,
                                 size_t __align) noexcept {
      std::__libcpp_deallocate(__p, __s, __align);
  }

  template <class _Tp>
  __attribute__((__nodebug__)) __attribute__ ((__always_inline__))
  static __holder_t __allocate_type(size_t __n) {
      return __allocate_bytes(__n * sizeof(_Tp), alignof(_Tp));
  }

  template <class _Tp>
  __attribute__((__nodebug__)) __attribute__ ((__always_inline__))
  static void __deallocate_type(void* __p, size_t __n) noexcept {
      __deallocate_bytes(__p, __n * sizeof(_Tp), alignof(_Tp));
  }
};

} }
namespace std { inline namespace __1 {

template <class _Tp = void>

struct plus : binary_function<_Tp, _Tp, _Tp>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x + __y;}
};

template <>
struct plus<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) + std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) + std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) + std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct minus : binary_function<_Tp, _Tp, _Tp>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x - __y;}
};

template <>
struct minus<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) - std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) - std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) - std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct multiplies : binary_function<_Tp, _Tp, _Tp>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x * __y;}
};

template <>
struct multiplies<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) * std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) * std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) * std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct divides : binary_function<_Tp, _Tp, _Tp>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x / __y;}
};

template <>
struct divides<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) / std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) / std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) / std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct modulus : binary_function<_Tp, _Tp, _Tp>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x % __y;}
};

template <>
struct modulus<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) % std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) % std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) % std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct negate : unary_function<_Tp, _Tp>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator()(const _Tp& __x) const
        {return -__x;}
};

template <>
struct negate<void>
{
    template <class _Tp>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_Tp&& __x) const
    noexcept(noexcept(- std::__1::forward<_Tp>(__x)))
    -> decltype (- std::__1::forward<_Tp>(__x))
        { return - std::__1::forward<_Tp>(__x); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct equal_to : binary_function<_Tp, _Tp, bool>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x == __y;}
};

template <>
struct equal_to<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) == std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) == std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) == std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct not_equal_to : binary_function<_Tp, _Tp, bool>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x != __y;}
};

template <>
struct not_equal_to<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) != std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) != std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) != std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct greater : binary_function<_Tp, _Tp, bool>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x > __y;}
};

template <>
struct greater<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) > std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) > std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) > std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct greater_equal : binary_function<_Tp, _Tp, bool>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x >= __y;}
};

template <>
struct greater_equal<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) >= std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) >= std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) >= std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct less_equal : binary_function<_Tp, _Tp, bool>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x <= __y;}
};

template <>
struct less_equal<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) <= std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) <= std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) <= std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct logical_and : binary_function<_Tp, _Tp, bool>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x && __y;}
};

template <>
struct logical_and<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) && std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) && std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) && std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct logical_or : binary_function<_Tp, _Tp, bool>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x || __y;}
};

template <>
struct logical_or<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) || std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) || std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) || std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct logical_not : unary_function<_Tp, bool>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const _Tp& __x) const
        {return !__x;}
};

template <>
struct logical_not<void>
{
    template <class _Tp>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_Tp&& __x) const
    noexcept(noexcept(!std::__1::forward<_Tp>(__x)))
    -> decltype (!std::__1::forward<_Tp>(__x))
        { return !std::__1::forward<_Tp>(__x); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct bit_and : binary_function<_Tp, _Tp, _Tp>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x & __y;}
};

template <>
struct bit_and<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) & std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) & std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) & std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct bit_or : binary_function<_Tp, _Tp, _Tp>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x | __y;}
};

template <>
struct bit_or<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) | std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) | std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) | std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>

struct bit_xor : binary_function<_Tp, _Tp, _Tp>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x ^ __y;}
};

template <>
struct bit_xor<void>
{
    template <class _T1, class _T2>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_T1&& __t, _T2&& __u) const
    noexcept(noexcept(std::__1::forward<_T1>(__t) ^ std::__1::forward<_T2>(__u)))
    -> decltype (std::__1::forward<_T1>(__t) ^ std::__1::forward<_T2>(__u))
        { return std::__1::forward<_T1>(__t) ^ std::__1::forward<_T2>(__u); }
    typedef void is_transparent;
};

template <class _Tp = void>
struct bit_not : unary_function<_Tp, _Tp>
{
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    _Tp operator()(const _Tp& __x) const
        {return ~__x;}
};

template <>
struct bit_not<void>
{
    template <class _Tp>
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_Tp&& __x) const
    noexcept(noexcept(~std::__1::forward<_Tp>(__x)))
    -> decltype (~std::__1::forward<_Tp>(__x))
        { return ~std::__1::forward<_Tp>(__x); }
    typedef void is_transparent;
};

template <class _Predicate>
class __attribute__ ((deprecated)) unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
{
    _Predicate __pred_;
public:
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit unary_negate(const _Predicate& __pred)
        : __pred_(__pred) {}
    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const typename _Predicate::argument_type& __x) const
        {return !__pred_(__x);}
};

template <class _Predicate>
__attribute__ ((deprecated)) inline constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
unary_negate<_Predicate>
not1(const _Predicate& __pred) {return unary_negate<_Predicate>(__pred);}

template <class _Predicate>
class __attribute__ ((deprecated)) binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
                             typename _Predicate::second_argument_type,
                             bool>
{
    _Predicate __pred_;
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit constexpr
    binary_negate(const _Predicate& __pred) : __pred_(__pred) {}

    constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const typename _Predicate::first_argument_type& __x,
                    const typename _Predicate::second_argument_type& __y) const
        {return !__pred_(__x, __y);}
};

template <class _Predicate>
__attribute__ ((deprecated)) inline constexpr __attribute__ ((__exclude_from_explicit_instantiation__))
binary_negate<_Predicate>
not2(const _Predicate& __pred) {return binary_negate<_Predicate>(__pred);}

template <class _Tp>
class __mem_fn
    : public __weak_result_type<_Tp>
{
public:

    typedef _Tp type;
private:
    type __f_;

public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) __mem_fn(type __f) noexcept : __f_(__f) {}

    template <class... _ArgTypes>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    typename __invoke_return<type, _ArgTypes...>::type
    operator() (_ArgTypes&&... __args) const {
        return __invoke(__f_, std::__1::forward<_ArgTypes>(__args)...);
    }

};

template<class _Rp, class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
__mem_fn<_Rp _Tp::*>
mem_fn(_Rp _Tp::* __pm) noexcept
{
    return __mem_fn<_Rp _Tp::*>(__pm);
}

class bad_function_call
    : public exception
{

};

template<class _Fp> class function;

namespace __function
{

template<class _Rp>
struct __maybe_derive_from_unary_function
{
};

template<class _Rp, class _A1>
struct __maybe_derive_from_unary_function<_Rp(_A1)>
    : public unary_function<_A1, _Rp>
{
};

template<class _Rp>
struct __maybe_derive_from_binary_function
{
};

template<class _Rp, class _A1, class _A2>
struct __maybe_derive_from_binary_function<_Rp(_A1, _A2)>
    : public binary_function<_A1, _A2, _Rp>
{
};

template <class _Fp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool __not_null(_Fp const&) { return true; }

template <class _Fp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool __not_null(_Fp* __ptr) { return __ptr; }

template <class _Ret, class _Class>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool __not_null(_Ret _Class::*__ptr) { return __ptr; }

template <class _Fp>
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool __not_null(function<_Fp> const& __f) { return !!__f; }

}

namespace __function {

template <class _Fp, class _Ap, class _FB> class __alloc_func;
template <class _Fp, class _FB>
class __default_alloc_func;

template <class _Fp, class _Ap, class _Rp, class... _ArgTypes>
class __alloc_func<_Fp, _Ap, _Rp(_ArgTypes...)>
{
    __compressed_pair<_Fp, _Ap> __f_;

  public:
    typedef __attribute__((nodebug)) _Fp _Target;
    typedef __attribute__((nodebug)) _Ap _Alloc;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    const _Target& __target() const { return __f_.first(); }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    const _Alloc& __get_allocator() const { return __f_.second(); }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __alloc_func(_Target&& __f)
        : __f_(piecewise_construct, std::__1::forward_as_tuple(std::__1::move(__f)),
               std::__1::forward_as_tuple())
    {
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __alloc_func(const _Target& __f, const _Alloc& __a)
        : __f_(piecewise_construct, std::__1::forward_as_tuple(__f),
               std::__1::forward_as_tuple(__a))
    {
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __alloc_func(const _Target& __f, _Alloc&& __a)
        : __f_(piecewise_construct, std::__1::forward_as_tuple(__f),
               std::__1::forward_as_tuple(std::__1::move(__a)))
    {
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __alloc_func(_Target&& __f, _Alloc&& __a)
        : __f_(piecewise_construct, std::__1::forward_as_tuple(std::__1::move(__f)),
               std::__1::forward_as_tuple(std::__1::move(__a)))
    {
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Rp operator()(_ArgTypes&&... __arg)
    {
        typedef __invoke_void_return_wrapper<_Rp> _Invoker;
        return _Invoker::__call(__f_.first(),
                                std::__1::forward<_ArgTypes>(__arg)...);
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __alloc_func* __clone() const
    {
        typedef allocator_traits<_Alloc> __alloc_traits;
        typedef
            typename __rebind_alloc_helper<__alloc_traits, __alloc_func>::type
                _AA;
        _AA __a(__f_.second());
        typedef __allocator_destructor<_AA> _Dp;
        unique_ptr<__alloc_func, _Dp> __hold(__a.allocate(1), _Dp(__a, 1));
        ::new ((void*)__hold.get()) __alloc_func(__f_.first(), _Alloc(__a));
        return __hold.release();
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void destroy() noexcept { __f_.~__compressed_pair<_Target, _Alloc>(); }

    static void __destroy_and_delete(__alloc_func* __f) {
      typedef allocator_traits<_Alloc> __alloc_traits;
      typedef typename __rebind_alloc_helper<__alloc_traits, __alloc_func>::type
          _FunAlloc;
      _FunAlloc __a(__f->__get_allocator());
      __f->destroy();
      __a.deallocate(__f, 1);
    }
};

template <class _Fp, class _Rp, class... _ArgTypes>
class __default_alloc_func<_Fp, _Rp(_ArgTypes...)> {
  _Fp __f_;

public:
  typedef __attribute__((nodebug)) _Fp _Target;

  __attribute__ ((__exclude_from_explicit_instantiation__))
  const _Target& __target() const { return __f_; }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  explicit __default_alloc_func(_Target&& __f) : __f_(std::move(__f)) {}

  __attribute__ ((__exclude_from_explicit_instantiation__))
  explicit __default_alloc_func(const _Target& __f) : __f_(__f) {}

  __attribute__ ((__exclude_from_explicit_instantiation__))
  _Rp operator()(_ArgTypes&&... __arg) {
    typedef __invoke_void_return_wrapper<_Rp> _Invoker;
    return _Invoker::__call(__f_, std::__1::forward<_ArgTypes>(__arg)...);
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  __default_alloc_func* __clone() const {
      __builtin_new_allocator::__holder_t __hold =
        __builtin_new_allocator::__allocate_type<__default_alloc_func>(1);
    __default_alloc_func* __res =
        ::new (__hold.get()) __default_alloc_func(__f_);
    (void)__hold.release();
    return __res;
  }

  __attribute__ ((__exclude_from_explicit_instantiation__))
  void destroy() noexcept { __f_.~_Target(); }

  static void __destroy_and_delete(__default_alloc_func* __f) {
    __f->destroy();
      __builtin_new_allocator::__deallocate_type<__default_alloc_func>(__f, 1);
  }
};

template<class _Fp> class __base;

template<class _Rp, class ..._ArgTypes>
class __base<_Rp(_ArgTypes...)>
{
    __base(const __base&);
    __base& operator=(const __base&);
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) __base() {}
    __attribute__ ((__exclude_from_explicit_instantiation__)) virtual ~__base() {}
    virtual __base* __clone() const = 0;
    virtual void __clone(__base*) const = 0;
    virtual void destroy() noexcept = 0;
    virtual void destroy_deallocate() noexcept = 0;
    virtual _Rp operator()(_ArgTypes&& ...) = 0;

    virtual const void* target(const type_info&) const noexcept = 0;
    virtual const std::type_info& target_type() const noexcept = 0;

};

template<class _FD, class _Alloc, class _FB> class __func;

template<class _Fp, class _Alloc, class _Rp, class ..._ArgTypes>
class __func<_Fp, _Alloc, _Rp(_ArgTypes...)>
    : public __base<_Rp(_ArgTypes...)>
{
    __alloc_func<_Fp, _Alloc, _Rp(_ArgTypes...)> __f_;
public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __func(_Fp&& __f)
        : __f_(std::__1::move(__f)) {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __func(const _Fp& __f, const _Alloc& __a)
        : __f_(__f, __a) {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __func(const _Fp& __f, _Alloc&& __a)
        : __f_(__f, std::__1::move(__a)) {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __func(_Fp&& __f, _Alloc&& __a)
        : __f_(std::__1::move(__f), std::__1::move(__a)) {}

    virtual __base<_Rp(_ArgTypes...)>* __clone() const;
    virtual void __clone(__base<_Rp(_ArgTypes...)>*) const;
    virtual void destroy() noexcept;
    virtual void destroy_deallocate() noexcept;
    virtual _Rp operator()(_ArgTypes&&... __arg);

    virtual const void* target(const type_info&) const noexcept;
    virtual const std::type_info& target_type() const noexcept;

};

template<class _Fp, class _Alloc, class _Rp, class ..._ArgTypes>
__base<_Rp(_ArgTypes...)>*
__func<_Fp, _Alloc, _Rp(_ArgTypes...)>::__clone() const
{
    typedef allocator_traits<_Alloc> __alloc_traits;
    typedef typename __rebind_alloc_helper<__alloc_traits, __func>::type _Ap;
    _Ap __a(__f_.__get_allocator());
    typedef __allocator_destructor<_Ap> _Dp;
    unique_ptr<__func, _Dp> __hold(__a.allocate(1), _Dp(__a, 1));
    ::new ((void*)__hold.get()) __func(__f_.__target(), _Alloc(__a));
    return __hold.release();
}

template<class _Fp, class _Alloc, class _Rp, class ..._ArgTypes>
void
__func<_Fp, _Alloc, _Rp(_ArgTypes...)>::__clone(__base<_Rp(_ArgTypes...)>* __p) const
{
    ::new (__p) __func(__f_.__target(), __f_.__get_allocator());
}

template<class _Fp, class _Alloc, class _Rp, class ..._ArgTypes>
void
__func<_Fp, _Alloc, _Rp(_ArgTypes...)>::destroy() noexcept
{
    __f_.destroy();
}

template<class _Fp, class _Alloc, class _Rp, class ..._ArgTypes>
void
__func<_Fp, _Alloc, _Rp(_ArgTypes...)>::destroy_deallocate() noexcept
{
    typedef allocator_traits<_Alloc> __alloc_traits;
    typedef typename __rebind_alloc_helper<__alloc_traits, __func>::type _Ap;
    _Ap __a(__f_.__get_allocator());
    __f_.destroy();
    __a.deallocate(this, 1);
}

template<class _Fp, class _Alloc, class _Rp, class ..._ArgTypes>
_Rp
__func<_Fp, _Alloc, _Rp(_ArgTypes...)>::operator()(_ArgTypes&& ... __arg)
{
    return __f_(std::__1::forward<_ArgTypes>(__arg)...);
}

template<class _Fp, class _Alloc, class _Rp, class ..._ArgTypes>
const void*
__func<_Fp, _Alloc, _Rp(_ArgTypes...)>::target(const type_info& __ti) const noexcept
{
    if (__ti == typeid(_Fp))
        return &__f_.__target();
    return (const void*)0;
}

template<class _Fp, class _Alloc, class _Rp, class ..._ArgTypes>
const std::type_info&
__func<_Fp, _Alloc, _Rp(_ArgTypes...)>::target_type() const noexcept
{
    return typeid(_Fp);
}

template <class _Fp> class __value_func;

template <class _Rp, class... _ArgTypes> class __value_func<_Rp(_ArgTypes...)>
{
    typename aligned_storage<3 * sizeof(void*)>::type __buf_;

    typedef __base<_Rp(_ArgTypes...)> __func;
    __func* __f_;

    __attribute__((__no_sanitize__("cfi"))) static __func* __as_base(void* p)
    {
        return reinterpret_cast<__func*>(p);
    }

  public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    __value_func() noexcept : __f_(0) {}

    template <class _Fp, class _Alloc>
    __attribute__ ((__exclude_from_explicit_instantiation__)) __value_func(_Fp&& __f, const _Alloc& __a)
        : __f_(0)
    {
        typedef allocator_traits<_Alloc> __alloc_traits;
        typedef __function::__func<_Fp, _Alloc, _Rp(_ArgTypes...)> _Fun;
        typedef typename __rebind_alloc_helper<__alloc_traits, _Fun>::type
            _FunAlloc;

        if (__function::__not_null(__f))
        {
            _FunAlloc __af(__a);
            if (sizeof(_Fun) <= sizeof(__buf_) &&
                is_nothrow_copy_constructible<_Fp>::value &&
                is_nothrow_copy_constructible<_FunAlloc>::value)
            {
                __f_ =
                    ::new ((void*)&__buf_) _Fun(std::__1::move(__f), _Alloc(__af));
            }
            else
            {
                typedef __allocator_destructor<_FunAlloc> _Dp;
                unique_ptr<__func, _Dp> __hold(__af.allocate(1), _Dp(__af, 1));
                ::new ((void*)__hold.get()) _Fun(std::__1::move(__f), _Alloc(__a));
                __f_ = __hold.release();
            }
        }
    }

    template <class _Fp,
        class = typename enable_if<!is_same<typename decay<_Fp>::type, __value_func>::value>::type>
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit __value_func(_Fp&& __f)
        : __value_func(std::forward<_Fp>(__f), allocator<_Fp>()) {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __value_func(const __value_func& __f)
    {
        if (__f.__f_ == 0)
            __f_ = 0;
        else if ((void*)__f.__f_ == &__f.__buf_)
        {
            __f_ = __as_base(&__buf_);
            __f.__f_->__clone(__f_);
        }
        else
            __f_ = __f.__f_->__clone();
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __value_func(__value_func&& __f) noexcept
    {
        if (__f.__f_ == 0)
            __f_ = 0;
        else if ((void*)__f.__f_ == &__f.__buf_)
        {
            __f_ = __as_base(&__buf_);
            __f.__f_->__clone(__f_);
        }
        else
        {
            __f_ = __f.__f_;
            __f.__f_ = 0;
        }
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    ~__value_func()
    {
        if ((void*)__f_ == &__buf_)
            __f_->destroy();
        else if (__f_)
            __f_->destroy_deallocate();
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __value_func& operator=(__value_func&& __f)
    {
        *this = nullptr;
        if (__f.__f_ == 0)
            __f_ = 0;
        else if ((void*)__f.__f_ == &__f.__buf_)
        {
            __f_ = __as_base(&__buf_);
            __f.__f_->__clone(__f_);
        }
        else
        {
            __f_ = __f.__f_;
            __f.__f_ = 0;
        }
        return *this;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __value_func& operator=(nullptr_t)
    {
        __func* __f = __f_;
        __f_ = 0;
        if ((void*)__f == &__buf_)
            __f->destroy();
        else if (__f)
            __f->destroy_deallocate();
        return *this;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Rp operator()(_ArgTypes&&... __args) const
    {
        if (__f_ == 0)
            __throw_bad_function_call();
        return (*__f_)(std::__1::forward<_ArgTypes>(__args)...);
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void swap(__value_func& __f) noexcept
    {
        if (&__f == this)
            return;
        if ((void*)__f_ == &__buf_ && (void*)__f.__f_ == &__f.__buf_)
        {
            typename aligned_storage<sizeof(__buf_)>::type __tempbuf;
            __func* __t = __as_base(&__tempbuf);
            __f_->__clone(__t);
            __f_->destroy();
            __f_ = 0;
            __f.__f_->__clone(__as_base(&__buf_));
            __f.__f_->destroy();
            __f.__f_ = 0;
            __f_ = __as_base(&__buf_);
            __t->__clone(__as_base(&__f.__buf_));
            __t->destroy();
            __f.__f_ = __as_base(&__f.__buf_);
        }
        else if ((void*)__f_ == &__buf_)
        {
            __f_->__clone(__as_base(&__f.__buf_));
            __f_->destroy();
            __f_ = __f.__f_;
            __f.__f_ = __as_base(&__f.__buf_);
        }
        else if ((void*)__f.__f_ == &__f.__buf_)
        {
            __f.__f_->__clone(__as_base(&__buf_));
            __f.__f_->destroy();
            __f.__f_ = __f_;
            __f_ = __as_base(&__buf_);
        }
        else
            std::__1::swap(__f_, __f.__f_);
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit operator bool() const noexcept { return __f_ != 0; }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    const std::type_info& target_type() const noexcept
    {
        if (__f_ == 0)
            return typeid(void);
        return __f_->target_type();
    }

    template <typename _Tp>
    __attribute__ ((__exclude_from_explicit_instantiation__)) const _Tp* target() const noexcept
    {
        if (__f_ == 0)
            return 0;
        return (const _Tp*)__f_->target(typeid(_Tp));
    }

};

union __policy_storage
{
    mutable char __small[sizeof(void*) * 2];
    void* __large;
};

template <typename _Fun>
struct __use_small_storage
    : public std::__1::integral_constant<
          bool, sizeof(_Fun) <= sizeof(__policy_storage) &&
                    alignof(_Fun) <= alignof(__policy_storage) &&
                    std::__1::is_trivially_copy_constructible<_Fun>::value &&
                    std::__1::is_trivially_destructible<_Fun>::value> {};

struct __policy
{

    void* (*const __clone)(const void*);
    void (*const __destroy)(void*);

    const bool __is_null;

    const std::type_info* const __type_info;

    template <typename _Fun>
    __attribute__ ((__exclude_from_explicit_instantiation__)) static const __policy* __create()
    {
        return __choose_policy<_Fun>(__use_small_storage<_Fun>());
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    static const __policy* __create_empty()
    {
        static const constexpr __policy __policy_ = {nullptr, nullptr,
                                                             true,

                                                             &typeid(void)

        };
        return &__policy_;
    }

  private:
    template <typename _Fun> static void* __large_clone(const void* __s)
    {
        const _Fun* __f = static_cast<const _Fun*>(__s);
        return __f->__clone();
    }

    template <typename _Fun>
    static void __large_destroy(void* __s) {
      _Fun::__destroy_and_delete(static_cast<_Fun*>(__s));
    }

    template <typename _Fun>
    __attribute__ ((__exclude_from_explicit_instantiation__)) static const __policy*
    __choose_policy( false_type) {
      static const constexpr __policy __policy_ = {
          &__large_clone<_Fun>, &__large_destroy<_Fun>, false,

          &typeid(typename _Fun::_Target)

      };
        return &__policy_;
    }

    template <typename _Fun>
    __attribute__ ((__exclude_from_explicit_instantiation__)) static const __policy*
        __choose_policy( true_type)
    {
        static const constexpr __policy __policy_ = {
            nullptr, nullptr, false,

            &typeid(typename _Fun::_Target)

        };
        return &__policy_;
    }
};

template <typename _Tp>
using __fast_forward =
    typename std::__1::conditional<std::__1::is_scalar<_Tp>::value, _Tp, _Tp&&>::type;

template <class _Fp> struct __policy_invoker;

template <class _Rp, class... _ArgTypes>
struct __policy_invoker<_Rp(_ArgTypes...)>
{
    typedef _Rp (*__Call)(const __policy_storage*,
                          __fast_forward<_ArgTypes>...);

    __Call __call_;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __policy_invoker() : __call_(&__call_empty) {}

    template <typename _Fun>
    __attribute__ ((__exclude_from_explicit_instantiation__)) static __policy_invoker __create()
    {
        return __policy_invoker(&__call_impl<_Fun>);
    }

  private:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __policy_invoker(__Call __c) : __call_(__c) {}

    static _Rp __call_empty(const __policy_storage*,
                            __fast_forward<_ArgTypes>...)
    {
        __throw_bad_function_call();
    }

    template <typename _Fun>
    static _Rp __call_impl(const __policy_storage* __buf,
                           __fast_forward<_ArgTypes>... __args)
    {
        _Fun* __f = reinterpret_cast<_Fun*>(__use_small_storage<_Fun>::value
                                                ? &__buf->__small
                                                : __buf->__large);
        return (*__f)(std::__1::forward<_ArgTypes>(__args)...);
    }
};

template <class _Fp> class __policy_func;

template <class _Rp, class... _ArgTypes> class __policy_func<_Rp(_ArgTypes...)>
{

    __policy_storage __buf_;

    typedef __function::__policy_invoker<_Rp(_ArgTypes...)> __invoker;
    __invoker __invoker_;

    const __policy* __policy_;

  public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    __policy_func() : __policy_(__policy::__create_empty()) {}

    template <class _Fp, class _Alloc>
    __attribute__ ((__exclude_from_explicit_instantiation__)) __policy_func(_Fp&& __f, const _Alloc& __a)
        : __policy_(__policy::__create_empty())
    {
        typedef __alloc_func<_Fp, _Alloc, _Rp(_ArgTypes...)> _Fun;
        typedef allocator_traits<_Alloc> __alloc_traits;
        typedef typename __rebind_alloc_helper<__alloc_traits, _Fun>::type
            _FunAlloc;

        if (__function::__not_null(__f))
        {
            __invoker_ = __invoker::template __create<_Fun>();
            __policy_ = __policy::__create<_Fun>();

            _FunAlloc __af(__a);
            if (__use_small_storage<_Fun>())
            {
                ::new ((void*)&__buf_.__small)
                    _Fun(std::__1::move(__f), _Alloc(__af));
            }
            else
            {
                typedef __allocator_destructor<_FunAlloc> _Dp;
                unique_ptr<_Fun, _Dp> __hold(__af.allocate(1), _Dp(__af, 1));
                ::new ((void*)__hold.get())
                    _Fun(std::__1::move(__f), _Alloc(__af));
                __buf_.__large = __hold.release();
            }
        }
    }

    template <class _Fp, class = typename enable_if<!is_same<typename decay<_Fp>::type, __policy_func>::value>::type>
    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit __policy_func(_Fp&& __f)
        : __policy_(__policy::__create_empty()) {
      typedef __default_alloc_func<_Fp, _Rp(_ArgTypes...)> _Fun;

      if (__function::__not_null(__f)) {
        __invoker_ = __invoker::template __create<_Fun>();
        __policy_ = __policy::__create<_Fun>();
        if (__use_small_storage<_Fun>()) {
          ::new ((void*)&__buf_.__small) _Fun(std::__1::move(__f));
        } else {
          __builtin_new_allocator::__holder_t __hold =
              __builtin_new_allocator::__allocate_type<_Fun>(1);
          __buf_.__large = ::new (__hold.get()) _Fun(std::__1::move(__f));
          (void)__hold.release();
        }
      }
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __policy_func(const __policy_func& __f)
        : __buf_(__f.__buf_), __invoker_(__f.__invoker_),
          __policy_(__f.__policy_)
    {
        if (__policy_->__clone)
            __buf_.__large = __policy_->__clone(__f.__buf_.__large);
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __policy_func(__policy_func&& __f)
        : __buf_(__f.__buf_), __invoker_(__f.__invoker_),
          __policy_(__f.__policy_)
    {
        if (__policy_->__destroy)
        {
            __f.__policy_ = __policy::__create_empty();
            __f.__invoker_ = __invoker();
        }
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    ~__policy_func()
    {
        if (__policy_->__destroy)
            __policy_->__destroy(__buf_.__large);
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __policy_func& operator=(__policy_func&& __f)
    {
        *this = nullptr;
        __buf_ = __f.__buf_;
        __invoker_ = __f.__invoker_;
        __policy_ = __f.__policy_;
        __f.__policy_ = __policy::__create_empty();
        __f.__invoker_ = __invoker();
        return *this;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    __policy_func& operator=(nullptr_t)
    {
        const __policy* __p = __policy_;
        __policy_ = __policy::__create_empty();
        __invoker_ = __invoker();
        if (__p->__destroy)
            __p->__destroy(__buf_.__large);
        return *this;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    _Rp operator()(_ArgTypes&&... __args) const
    {
        return __invoker_.__call_(std::__1::addressof(__buf_),
                                  std::__1::forward<_ArgTypes>(__args)...);
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void swap(__policy_func& __f)
    {
        std::__1::swap(__invoker_, __f.__invoker_);
        std::__1::swap(__policy_, __f.__policy_);
        std::__1::swap(__buf_, __f.__buf_);
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit operator bool() const noexcept
    {
        return !__policy_->__is_null;
    }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    const std::type_info& target_type() const noexcept
    {
        return *__policy_->__type_info;
    }

    template <typename _Tp>
    __attribute__ ((__exclude_from_explicit_instantiation__)) const _Tp* target() const noexcept
    {
        if (__policy_->__is_null || typeid(_Tp) != *__policy_->__type_info)
            return nullptr;
        if (__policy_->__clone)
            return reinterpret_cast<const _Tp*>(__buf_.__large);
        else
            return reinterpret_cast<const _Tp*>(&__buf_.__small);
    }

};

}

template<class _Rp, class ..._ArgTypes>
class function<_Rp(_ArgTypes...)>
    : public __function::__maybe_derive_from_unary_function<_Rp(_ArgTypes...)>,
      public __function::__maybe_derive_from_binary_function<_Rp(_ArgTypes...)>
{

    typedef __function::__value_func<_Rp(_ArgTypes...)> __func;

    __func __f_;

    template <class _Fp, bool = _And<
        _IsNotSame<__uncvref_t<_Fp>, function>,
        __invokable<_Fp&, _ArgTypes...>
    >::value>
    struct __callable;
    template <class _Fp>
        struct __callable<_Fp, true>
        {
            static const bool value = is_same<void, _Rp>::value ||
                is_convertible<typename __invoke_of<_Fp&, _ArgTypes...>::type,
                               _Rp>::value;
        };
    template <class _Fp>
        struct __callable<_Fp, false>
        {
            static const bool value = false;
        };

  template <class _Fp>
  using _EnableIfCallable = typename enable_if<__callable<_Fp>::value>::type;
public:
    typedef _Rp result_type;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    function() noexcept { }
    __attribute__ ((__exclude_from_explicit_instantiation__))
    function(nullptr_t) noexcept {}
    function(const function&);
    function(function&&) noexcept;
    template<class _Fp, class = _EnableIfCallable<_Fp>>
    function(_Fp);
    function& operator=(const function&);
    function& operator=(function&&) noexcept;
    function& operator=(nullptr_t) noexcept;
    template<class _Fp, class = _EnableIfCallable<_Fp>>
    function& operator=(_Fp&&);

    ~function();

    void swap(function&) noexcept;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit operator bool() const noexcept {
      return static_cast<bool>(__f_);
    }

    template<class _R2, class... _ArgTypes2>
      bool operator==(const function<_R2(_ArgTypes2...)>&) const = delete;
    template<class _R2, class... _ArgTypes2>
      bool operator!=(const function<_R2(_ArgTypes2...)>&) const = delete;
public:

    _Rp operator()(_ArgTypes...) const;

    const std::type_info& target_type() const noexcept;
    template <typename _Tp> _Tp* target() noexcept;
    template <typename _Tp> const _Tp* target() const noexcept;

};

template<class _Rp, class ..._Ap>
function(_Rp(*)(_Ap...)) -> function<_Rp(_Ap...)>;

template<class _Fp>
struct __strip_signature;

template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...)> { using type = _Rp(_Ap...); };
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) const> { using type = _Rp(_Ap...); };
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) volatile> { using type = _Rp(_Ap...); };
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) const volatile> { using type = _Rp(_Ap...); };

template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) &> { using type = _Rp(_Ap...); };
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) const &> { using type = _Rp(_Ap...); };
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) volatile &> { using type = _Rp(_Ap...); };
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) const volatile &> { using type = _Rp(_Ap...); };

template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) noexcept> { using type = _Rp(_Ap...); };
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) const noexcept> { using type = _Rp(_Ap...); };
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) volatile noexcept> { using type = _Rp(_Ap...); };
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) const volatile noexcept> { using type = _Rp(_Ap...); };

template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) & noexcept> { using type = _Rp(_Ap...); };
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) const & noexcept> { using type = _Rp(_Ap...); };
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) volatile & noexcept> { using type = _Rp(_Ap...); };
template<class _Rp, class _Gp, class ..._Ap>
struct __strip_signature<_Rp (_Gp::*) (_Ap...) const volatile & noexcept> { using type = _Rp(_Ap...); };

template<class _Fp, class _Stripped = typename __strip_signature<decltype(&_Fp::operator())>::type>
function(_Fp) -> function<_Stripped>;

template<class _Rp, class ..._ArgTypes>
function<_Rp(_ArgTypes...)>::function(const function& __f) : __f_(__f.__f_) {}
template <class _Rp, class... _ArgTypes>
function<_Rp(_ArgTypes...)>::function(function&& __f) noexcept
    : __f_(std::__1::move(__f.__f_)) {}
template <class _Rp, class... _ArgTypes>
template <class _Fp, class>
function<_Rp(_ArgTypes...)>::function(_Fp __f) : __f_(std::__1::move(__f)) {}
template<class _Rp, class ..._ArgTypes>
function<_Rp(_ArgTypes...)>&
function<_Rp(_ArgTypes...)>::operator=(const function& __f)
{
    function(__f).swap(*this);
    return *this;
}

template<class _Rp, class ..._ArgTypes>
function<_Rp(_ArgTypes...)>&
function<_Rp(_ArgTypes...)>::operator=(function&& __f) noexcept
{
    __f_ = std::move(__f.__f_);
    return *this;
}

template<class _Rp, class ..._ArgTypes>
function<_Rp(_ArgTypes...)>&
function<_Rp(_ArgTypes...)>::operator=(nullptr_t) noexcept
{
    __f_ = nullptr;
    return *this;
}

template<class _Rp, class ..._ArgTypes>
template <class _Fp, class>
function<_Rp(_ArgTypes...)>&
function<_Rp(_ArgTypes...)>::operator=(_Fp&& __f)
{
    function(std::__1::forward<_Fp>(__f)).swap(*this);
    return *this;
}

template<class _Rp, class ..._ArgTypes>
function<_Rp(_ArgTypes...)>::~function() {}

template<class _Rp, class ..._ArgTypes>
void
function<_Rp(_ArgTypes...)>::swap(function& __f) noexcept
{
    __f_.swap(__f.__f_);
}

template<class _Rp, class ..._ArgTypes>
_Rp
function<_Rp(_ArgTypes...)>::operator()(_ArgTypes... __arg) const
{
    return __f_(std::__1::forward<_ArgTypes>(__arg)...);
}

template<class _Rp, class ..._ArgTypes>
const std::type_info&
function<_Rp(_ArgTypes...)>::target_type() const noexcept
{
    return __f_.target_type();
}

template<class _Rp, class ..._ArgTypes>
template <typename _Tp>
_Tp*
function<_Rp(_ArgTypes...)>::target() noexcept
{
    return (_Tp*)(__f_.template target<_Tp>());
}

template<class _Rp, class ..._ArgTypes>
template <typename _Tp>
const _Tp*
function<_Rp(_ArgTypes...)>::target() const noexcept
{
    return __f_.template target<_Tp>();
}

template <class _Rp, class... _ArgTypes>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator==(const function<_Rp(_ArgTypes...)>& __f, nullptr_t) noexcept {return !__f;}

template <class _Rp, class... _ArgTypes>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator==(nullptr_t, const function<_Rp(_ArgTypes...)>& __f) noexcept {return !__f;}

template <class _Rp, class... _ArgTypes>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator!=(const function<_Rp(_ArgTypes...)>& __f, nullptr_t) noexcept {return (bool)__f;}

template <class _Rp, class... _ArgTypes>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
bool
operator!=(nullptr_t, const function<_Rp(_ArgTypes...)>& __f) noexcept {return (bool)__f;}

template <class _Rp, class... _ArgTypes>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void
swap(function<_Rp(_ArgTypes...)>& __x, function<_Rp(_ArgTypes...)>& __y) noexcept
{return __x.swap(__y);}
template<class _Tp> struct __is_bind_expression : public false_type {};
template<class _Tp> struct is_bind_expression
    : public __is_bind_expression<typename remove_cv<_Tp>::type> {};

template <class _Tp>
inline constexpr size_t is_bind_expression_v = is_bind_expression<_Tp>::value;

template<class _Tp> struct __is_placeholder : public integral_constant<int, 0> {};
template<class _Tp> struct is_placeholder
    : public __is_placeholder<typename remove_cv<_Tp>::type> {};

template <class _Tp>
inline constexpr size_t is_placeholder_v = is_placeholder<_Tp>::value;

namespace placeholders
{

template <int _Np> struct __ph {};

                 extern const __ph<1> _1;
                 extern const __ph<2> _2;
                 extern const __ph<3> _3;
                 extern const __ph<4> _4;
                 extern const __ph<5> _5;
                 extern const __ph<6> _6;
                 extern const __ph<7> _7;
                 extern const __ph<8> _8;
                 extern const __ph<9> _9;
                 extern const __ph<10> _10;
}

template<int _Np>
struct __is_placeholder<placeholders::__ph<_Np> >
    : public integral_constant<int, _Np> {};

template <class _Tp, class _Uj>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_Tp&
__mu(reference_wrapper<_Tp> __t, _Uj&)
{
    return __t.get();
}

template <class _Ti, class ..._Uj, size_t ..._Indx>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename __invoke_of<_Ti&, _Uj...>::type
__mu_expand(_Ti& __ti, tuple<_Uj...>& __uj, __tuple_indices<_Indx...>)
{
    return __ti(std::__1::forward<_Uj>(std::__1::get<_Indx>(__uj))...);
}

template <class _Ti, class ..._Uj>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename _EnableIf
<
    is_bind_expression<_Ti>::value,
    __invoke_of<_Ti&, _Uj...>
>::type
__mu(_Ti& __ti, tuple<_Uj...>& __uj)
{
    typedef typename __make_tuple_indices<sizeof...(_Uj)>::type __indices;
    return __mu_expand(__ti, __uj, __indices());
}

template <bool IsPh, class _Ti, class _Uj>
struct __mu_return2 {};

template <class _Ti, class _Uj>
struct __mu_return2<true, _Ti, _Uj>
{
    typedef typename tuple_element<is_placeholder<_Ti>::value - 1, _Uj>::type type;
};

template <class _Ti, class _Uj>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    0 < is_placeholder<_Ti>::value,
    typename __mu_return2<0 < is_placeholder<_Ti>::value, _Ti, _Uj>::type
>::type
__mu(_Ti&, _Uj& __uj)
{
    const size_t _Indx = is_placeholder<_Ti>::value - 1;
    return std::__1::forward<typename tuple_element<_Indx, _Uj>::type>(std::__1::get<_Indx>(__uj));
}

template <class _Ti, class _Uj>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename enable_if
<
    !is_bind_expression<_Ti>::value &&
    is_placeholder<_Ti>::value == 0 &&
    !__is_reference_wrapper<_Ti>::value,
    _Ti&
>::type
__mu(_Ti& __ti, _Uj&)
{
    return __ti;
}

template <class _Ti, bool IsReferenceWrapper, bool IsBindEx, bool IsPh,
          class _TupleUj>
struct __mu_return_impl;

template <bool _Invokable, class _Ti, class ..._Uj>
struct __mu_return_invokable
{
    typedef __nat type;
};

template <class _Ti, class ..._Uj>
struct __mu_return_invokable<true, _Ti, _Uj...>
{
    typedef typename __invoke_of<_Ti&, _Uj...>::type type;
};

template <class _Ti, class ..._Uj>
struct __mu_return_impl<_Ti, false, true, false, tuple<_Uj...> >
    : public __mu_return_invokable<__invokable<_Ti&, _Uj...>::value, _Ti, _Uj...>
{
};

template <class _Ti, class _TupleUj>
struct __mu_return_impl<_Ti, false, false, true, _TupleUj>
{
    typedef typename tuple_element<is_placeholder<_Ti>::value - 1,
                                   _TupleUj>::type&& type;
};

template <class _Ti, class _TupleUj>
struct __mu_return_impl<_Ti, true, false, false, _TupleUj>
{
    typedef typename _Ti::type& type;
};

template <class _Ti, class _TupleUj>
struct __mu_return_impl<_Ti, false, false, false, _TupleUj>
{
    typedef _Ti& type;
};

template <class _Ti, class _TupleUj>
struct __mu_return
    : public __mu_return_impl<_Ti,
                              __is_reference_wrapper<_Ti>::value,
                              is_bind_expression<_Ti>::value,
                              0 < is_placeholder<_Ti>::value &&
                              is_placeholder<_Ti>::value <= tuple_size<_TupleUj>::value,
                              _TupleUj>
{
};

template <class _Fp, class _BoundArgs, class _TupleUj>
struct __is_valid_bind_return
{
    static const bool value = false;
};

template <class _Fp, class ..._BoundArgs, class _TupleUj>
struct __is_valid_bind_return<_Fp, tuple<_BoundArgs...>, _TupleUj>
{
    static const bool value = __invokable<_Fp,
                    typename __mu_return<_BoundArgs, _TupleUj>::type...>::value;
};

template <class _Fp, class ..._BoundArgs, class _TupleUj>
struct __is_valid_bind_return<_Fp, const tuple<_BoundArgs...>, _TupleUj>
{
    static const bool value = __invokable<_Fp,
                    typename __mu_return<const _BoundArgs, _TupleUj>::type...>::value;
};

template <class _Fp, class _BoundArgs, class _TupleUj,
          bool = __is_valid_bind_return<_Fp, _BoundArgs, _TupleUj>::value>
struct __bind_return;

template <class _Fp, class ..._BoundArgs, class _TupleUj>
struct __bind_return<_Fp, tuple<_BoundArgs...>, _TupleUj, true>
{
    typedef typename __invoke_of
    <
        _Fp&,
        typename __mu_return
        <
            _BoundArgs,
            _TupleUj
        >::type...
    >::type type;
};

template <class _Fp, class ..._BoundArgs, class _TupleUj>
struct __bind_return<_Fp, const tuple<_BoundArgs...>, _TupleUj, true>
{
    typedef typename __invoke_of
    <
        _Fp&,
        typename __mu_return
        <
            const _BoundArgs,
            _TupleUj
        >::type...
    >::type type;
};

template <class _Fp, class _BoundArgs, size_t ..._Indx, class _Args>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
typename __bind_return<_Fp, _BoundArgs, _Args>::type
__apply_functor(_Fp& __f, _BoundArgs& __bound_args, __tuple_indices<_Indx...>,
                _Args&& __args)
{
    return std::__1::__invoke(__f, std::__1::__mu(std::__1::get<_Indx>(__bound_args), __args)...);
}

template<class _Fp, class ..._BoundArgs>
class __bind
    : public __weak_result_type<typename decay<_Fp>::type>
{
protected:
    typedef typename decay<_Fp>::type _Fd;
    typedef tuple<typename decay<_BoundArgs>::type...> _Td;
private:
    _Fd __f_;
    _Td __bound_args_;

    typedef typename __make_tuple_indices<sizeof...(_BoundArgs)>::type __indices;
public:
    template <class _Gp, class ..._BA,
              class = typename enable_if
                               <
                                  is_constructible<_Fd, _Gp>::value &&
                                  !is_same<typename remove_reference<_Gp>::type,
                                           __bind>::value
                               >::type>
      __attribute__ ((__exclude_from_explicit_instantiation__))
      explicit __bind(_Gp&& __f, _BA&& ...__bound_args)
        : __f_(std::__1::forward<_Gp>(__f)),
          __bound_args_(std::__1::forward<_BA>(__bound_args)...) {}

    template <class ..._Args>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        typename __bind_return<_Fd, _Td, tuple<_Args&&...> >::type
        operator()(_Args&& ...__args)
        {
            return std::__1::__apply_functor(__f_, __bound_args_, __indices(),
                                  tuple<_Args&&...>(std::__1::forward<_Args>(__args)...));
        }

    template <class ..._Args>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        typename __bind_return<const _Fd, const _Td, tuple<_Args&&...> >::type
        operator()(_Args&& ...__args) const
        {
            return std::__1::__apply_functor(__f_, __bound_args_, __indices(),
                                   tuple<_Args&&...>(std::__1::forward<_Args>(__args)...));
        }
};

template<class _Fp, class ..._BoundArgs>
struct __is_bind_expression<__bind<_Fp, _BoundArgs...> > : public true_type {};

template<class _Rp, class _Fp, class ..._BoundArgs>
class __bind_r
    : public __bind<_Fp, _BoundArgs...>
{
    typedef __bind<_Fp, _BoundArgs...> base;
    typedef typename base::_Fd _Fd;
    typedef typename base::_Td _Td;
public:
    typedef _Rp result_type;

    template <class _Gp, class ..._BA,
              class = typename enable_if
                               <
                                  is_constructible<_Fd, _Gp>::value &&
                                  !is_same<typename remove_reference<_Gp>::type,
                                           __bind_r>::value
                               >::type>
      __attribute__ ((__exclude_from_explicit_instantiation__))
      explicit __bind_r(_Gp&& __f, _BA&& ...__bound_args)
        : base(std::__1::forward<_Gp>(__f),
               std::__1::forward<_BA>(__bound_args)...) {}

    template <class ..._Args>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        typename enable_if
        <
            is_convertible<typename __bind_return<_Fd, _Td, tuple<_Args&&...> >::type,
                           result_type>::value || is_void<_Rp>::value,
            result_type
        >::type
        operator()(_Args&& ...__args)
        {
            typedef __invoke_void_return_wrapper<_Rp> _Invoker;
            return _Invoker::__call(static_cast<base&>(*this), std::__1::forward<_Args>(__args)...);
        }

    template <class ..._Args>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        typename enable_if
        <
            is_convertible<typename __bind_return<const _Fd, const _Td, tuple<_Args&&...> >::type,
                           result_type>::value || is_void<_Rp>::value,
            result_type
        >::type
        operator()(_Args&& ...__args) const
        {
            typedef __invoke_void_return_wrapper<_Rp> _Invoker;
            return _Invoker::__call(static_cast<base const&>(*this), std::__1::forward<_Args>(__args)...);
        }
};

template<class _Rp, class _Fp, class ..._BoundArgs>
struct __is_bind_expression<__bind_r<_Rp, _Fp, _BoundArgs...> > : public true_type {};

template<class _Fp, class ..._BoundArgs>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
__bind<_Fp, _BoundArgs...>
bind(_Fp&& __f, _BoundArgs&&... __bound_args)
{
    typedef __bind<_Fp, _BoundArgs...> type;
    return type(std::__1::forward<_Fp>(__f), std::__1::forward<_BoundArgs>(__bound_args)...);
}

template<class _Rp, class _Fp, class ..._BoundArgs>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
__bind_r<_Rp, _Fp, _BoundArgs...>
bind(_Fp&& __f, _BoundArgs&&... __bound_args)
{
    typedef __bind_r<_Rp, _Fp, _BoundArgs...> type;
    return type(std::__1::forward<_Fp>(__f), std::__1::forward<_BoundArgs>(__bound_args)...);
}

template <class _Fn, class ..._Args>
invoke_result_t<_Fn, _Args...>
invoke(_Fn&& __f, _Args&&... __args)
    noexcept(is_nothrow_invocable_v<_Fn, _Args...>)
{
    return std::__1::__invoke(std::__1::forward<_Fn>(__f), std::__1::forward<_Args>(__args)...);
}

template <class _DecayFunc>
class __not_fn_imp {
  _DecayFunc __fd;

public:
    __not_fn_imp() = delete;

    template <class ..._Args>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_Args&& ...__args) &
            noexcept(noexcept(!std::__1::invoke(__fd, std::__1::forward<_Args>(__args)...)))
        -> decltype( !std::__1::invoke(__fd, std::__1::forward<_Args>(__args)...))
        { return !std::__1::invoke(__fd, std::__1::forward<_Args>(__args)...); }

    template <class ..._Args>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_Args&& ...__args) &&
            noexcept(noexcept(!std::__1::invoke(std::__1::move(__fd), std::__1::forward<_Args>(__args)...)))
        -> decltype( !std::__1::invoke(std::__1::move(__fd), std::__1::forward<_Args>(__args)...))
        { return !std::__1::invoke(std::__1::move(__fd), std::__1::forward<_Args>(__args)...); }

    template <class ..._Args>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_Args&& ...__args) const&
            noexcept(noexcept(!std::__1::invoke(__fd, std::__1::forward<_Args>(__args)...)))
        -> decltype( !std::__1::invoke(__fd, std::__1::forward<_Args>(__args)...))
        { return !std::__1::invoke(__fd, std::__1::forward<_Args>(__args)...); }

    template <class ..._Args>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    auto operator()(_Args&& ...__args) const&&
            noexcept(noexcept(!std::__1::invoke(std::__1::move(__fd), std::__1::forward<_Args>(__args)...)))
        -> decltype( !std::__1::invoke(std::__1::move(__fd), std::__1::forward<_Args>(__args)...))
        { return !std::__1::invoke(std::__1::move(__fd), std::__1::forward<_Args>(__args)...); }

private:
    template <class _RawFunc,
              class = enable_if_t<!is_same<decay_t<_RawFunc>, __not_fn_imp>::value>>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __not_fn_imp(_RawFunc&& __rf)
        : __fd(std::__1::forward<_RawFunc>(__rf)) {}

    template <class _RawFunc>
    friend inline __attribute__ ((__exclude_from_explicit_instantiation__))
    __not_fn_imp<decay_t<_RawFunc>> not_fn(_RawFunc&&);
};

template <class _RawFunc>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
__not_fn_imp<decay_t<_RawFunc>> not_fn(_RawFunc&& __fn) {
    return __not_fn_imp<decay_t<_RawFunc>>(std::__1::forward<_RawFunc>(__fn));
}

template <class _BinaryPredicate, class _ForwardIterator1, class _ForwardIterator2>
pair<_ForwardIterator1, _ForwardIterator1> constexpr
__search(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
         _ForwardIterator2 __first2, _ForwardIterator2 __last2, _BinaryPredicate __pred,
         forward_iterator_tag, forward_iterator_tag)
{
    if (__first2 == __last2)
        return make_pair(__first1, __first1);
    while (true)
    {

        while (true)
        {
            if (__first1 == __last1)
                return make_pair(__last1, __last1);
            if (__pred(*__first1, *__first2))
                break;
            ++__first1;
        }

        _ForwardIterator1 __m1 = __first1;
        _ForwardIterator2 __m2 = __first2;
        while (true)
        {
            if (++__m2 == __last2)
                return make_pair(__first1, __m1);
            if (++__m1 == __last1)
                return make_pair(__last1, __last1);
            if (!__pred(*__m1, *__m2))
            {
                ++__first1;
                break;
            }
        }
    }
}

template <class _BinaryPredicate, class _RandomAccessIterator1, class _RandomAccessIterator2>
constexpr
pair<_RandomAccessIterator1, _RandomAccessIterator1>
__search(_RandomAccessIterator1 __first1, _RandomAccessIterator1 __last1,
         _RandomAccessIterator2 __first2, _RandomAccessIterator2 __last2, _BinaryPredicate __pred,
           random_access_iterator_tag, random_access_iterator_tag)
{
    typedef typename iterator_traits<_RandomAccessIterator1>::difference_type _D1;
    typedef typename iterator_traits<_RandomAccessIterator2>::difference_type _D2;

    const _D2 __len2 = __last2 - __first2;
    if (__len2 == 0)
        return make_pair(__first1, __first1);
    const _D1 __len1 = __last1 - __first1;
    if (__len1 < __len2)
        return make_pair(__last1, __last1);
    const _RandomAccessIterator1 __s = __last1 - (__len2 - 1);

    while (true)
    {
        while (true)
        {
            if (__first1 == __s)
                return make_pair(__last1, __last1);
            if (__pred(*__first1, *__first2))
                break;
            ++__first1;
        }

        _RandomAccessIterator1 __m1 = __first1;
        _RandomAccessIterator2 __m2 = __first2;
         while (true)
         {
             if (++__m2 == __last2)
                 return make_pair(__first1, __first1 + __len2);
             ++__m1;
             if (!__pred(*__m1, *__m2))
             {
                 ++__first1;
                 break;
             }
         }
    }
}

template<class _ForwardIterator, class _BinaryPredicate = equal_to<>>
class default_searcher {
public:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    default_searcher(_ForwardIterator __f, _ForwardIterator __l,
                       _BinaryPredicate __p = _BinaryPredicate())
        : __first_(__f), __last_(__l), __pred_(__p) {}

    template <typename _ForwardIterator2>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    pair<_ForwardIterator2, _ForwardIterator2>
    operator () (_ForwardIterator2 __f, _ForwardIterator2 __l) const
    {
        return std::__1::__search(__f, __l, __first_, __last_, __pred_,
            typename std::__1::iterator_traits<_ForwardIterator>::iterator_category(),
            typename std::__1::iterator_traits<_ForwardIterator2>::iterator_category());
    }

private:
    _ForwardIterator __first_;
    _ForwardIterator __last_;
    _BinaryPredicate __pred_;
    };
template <class _Container, class _Predicate>
inline void __libcpp_erase_if_container( _Container& __c, _Predicate __pred)
{
 for (typename _Container::iterator __iter = __c.begin(), __last = __c.end(); __iter != __last;)
 {
  if (__pred(*__iter))
   __iter = __c.erase(__iter);
  else
   ++__iter;
 }
}

} }
namespace std { inline namespace __1 {

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __libcpp_ctz(unsigned __x) noexcept { return __builtin_ctz(__x); }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __libcpp_ctz(unsigned long __x) noexcept { return __builtin_ctzl(__x); }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __libcpp_ctz(unsigned long long __x) noexcept { return __builtin_ctzll(__x); }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __libcpp_clz(unsigned __x) noexcept { return __builtin_clz(__x); }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __libcpp_clz(unsigned long __x) noexcept { return __builtin_clzl(__x); }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __libcpp_clz(unsigned long long __x) noexcept { return __builtin_clzll(__x); }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __libcpp_popcount(unsigned __x) noexcept { return __builtin_popcount(__x); }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __libcpp_popcount(unsigned long __x) noexcept { return __builtin_popcountl(__x); }

inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __libcpp_popcount(unsigned long long __x) noexcept { return __builtin_popcountll(__x); }
template <class _Tp>
using __bitop_unsigned_integer __attribute__((nodebug)) = integral_constant<bool,
         is_integral<_Tp>::value &&
         is_unsigned<_Tp>::value &&
        _IsNotSame<typename remove_cv<_Tp>::type, bool>::value &&
        _IsNotSame<typename remove_cv<_Tp>::type, signed char>::value &&
        _IsNotSame<typename remove_cv<_Tp>::type, char16_t>::value &&
        _IsNotSame<typename remove_cv<_Tp>::type, char32_t>::value
    >;

template<class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_Tp __rotl(_Tp __t, unsigned int __cnt) noexcept
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__rotl requires unsigned");
    const unsigned int __dig = numeric_limits<_Tp>::digits;
    if ((__cnt % __dig) == 0)
        return __t;
    return (__t << (__cnt % __dig)) | (__t >> (__dig - (__cnt % __dig)));
}

template<class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_Tp __rotr(_Tp __t, unsigned int __cnt) noexcept
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__rotr requires unsigned");
    const unsigned int __dig = numeric_limits<_Tp>::digits;
    if ((__cnt % __dig) == 0)
        return __t;
    return (__t >> (__cnt % __dig)) | (__t << (__dig - (__cnt % __dig)));
}

template<class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __countr_zero(_Tp __t) noexcept
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__countr_zero requires unsigned");
    if (__t == 0)
        return numeric_limits<_Tp>::digits;

    if (sizeof(_Tp) <= sizeof(unsigned int))
        return __libcpp_ctz(static_cast<unsigned int>(__t));
    else if (sizeof(_Tp) <= sizeof(unsigned long))
        return __libcpp_ctz(static_cast<unsigned long>(__t));
    else if (sizeof(_Tp) <= sizeof(unsigned long long))
        return __libcpp_ctz(static_cast<unsigned long long>(__t));
    else
    {
        int __ret = 0;
        int __iter = 0;
        const unsigned int __ulldigits = numeric_limits<unsigned long long>::digits;
        while ((__iter = __libcpp_ctz(static_cast<unsigned long long>(__t))) == __ulldigits)
        {
            __ret += __iter;
            __t >>= __ulldigits;
        }
        return __ret + __iter;
    }
}

template<class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __countl_zero(_Tp __t) noexcept
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__countl_zero requires unsigned");
    if (__t == 0)
        return numeric_limits<_Tp>::digits;

    if (sizeof(_Tp) <= sizeof(unsigned int))
        return __libcpp_clz(static_cast<unsigned int>(__t))
              - (numeric_limits<unsigned int>::digits - numeric_limits<_Tp>::digits);
    else if (sizeof(_Tp) <= sizeof(unsigned long))
        return __libcpp_clz(static_cast<unsigned long>(__t))
              - (numeric_limits<unsigned long>::digits - numeric_limits<_Tp>::digits);
    else if (sizeof(_Tp) <= sizeof(unsigned long long))
        return __libcpp_clz(static_cast<unsigned long long>(__t))
              - (numeric_limits<unsigned long long>::digits - numeric_limits<_Tp>::digits);
    else
    {
        int __ret = 0;
        int __iter = 0;
        const unsigned int __ulldigits = numeric_limits<unsigned long long>::digits;
        while (true) {
            __t = __rotr(__t, __ulldigits);
            if ((__iter = __countl_zero(static_cast<unsigned long long>(__t))) != __ulldigits)
                break;
            __ret += __iter;
            }
        return __ret + __iter;
    }
}

template<class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __countl_one(_Tp __t) noexcept
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__countl_one requires unsigned");
    return __t != numeric_limits<_Tp>::max()
        ? __countl_zero(static_cast<_Tp>(~__t))
        : numeric_limits<_Tp>::digits;
}

template<class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int __countr_one(_Tp __t) noexcept
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__countr_one requires unsigned");
    return __t != numeric_limits<_Tp>::max()
        ? __countr_zero(static_cast<_Tp>(~__t))
        : numeric_limits<_Tp>::digits;
}

template<class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
int
__popcount(_Tp __t) noexcept
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__libcpp_popcount requires unsigned");
    if (sizeof(_Tp) <= sizeof(unsigned int))
        return __libcpp_popcount(static_cast<unsigned int>(__t));
    else if (sizeof(_Tp) <= sizeof(unsigned long))
        return __libcpp_popcount(static_cast<unsigned long>(__t));
    else if (sizeof(_Tp) <= sizeof(unsigned long long))
        return __libcpp_popcount(static_cast<unsigned long long>(__t));
    else
    {
        int __ret = 0;
        while (__t != 0)
        {
            __ret += __libcpp_popcount(static_cast<unsigned long long>(__t));
            __t >>= numeric_limits<unsigned long long>::digits;
        }
        return __ret;
    }
}

template<class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
unsigned __bit_log2(_Tp __t) noexcept
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__bit_log2 requires unsigned");
    return std::numeric_limits<_Tp>::digits - 1 - __countl_zero(__t);
}

template <class _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
bool __ispow2(_Tp __t) noexcept
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__ispow2 requires unsigned");
 return __t != 0 && (((__t & (__t - 1)) == 0));
}
} }
namespace std { inline namespace __1 {

template <class _T1, class _T2 = _T1>
struct __equal_to
{
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr bool operator()(const _T1& __x, const _T1& __y) const {return __x == __y;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr bool operator()(const _T1& __x, const _T2& __y) const {return __x == __y;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr bool operator()(const _T2& __x, const _T1& __y) const {return __x == __y;}
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr bool operator()(const _T2& __x, const _T2& __y) const {return __x == __y;}
};

template <class _T1>
struct __equal_to<_T1, _T1>
{
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _T1& __x, const _T1& __y) const {return __x == __y;}
};

template <class _T1>
struct __equal_to<const _T1, _T1>
{
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _T1& __x, const _T1& __y) const {return __x == __y;}
};

template <class _T1>
struct __equal_to<_T1, const _T1>
{
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _T1& __x, const _T1& __y) const {return __x == __y;}
};

template <class _T1, class _T2 = _T1>
struct __less
{
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _T1& __x, const _T1& __y) const {return __x < __y;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _T1& __x, const _T2& __y) const {return __x < __y;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _T2& __x, const _T1& __y) const {return __x < __y;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _T2& __x, const _T2& __y) const {return __x < __y;}
};

template <class _T1>
struct __less<_T1, _T1>
{
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _T1& __x, const _T1& __y) const {return __x < __y;}
};

template <class _T1>
struct __less<const _T1, _T1>
{
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _T1& __x, const _T1& __y) const {return __x < __y;}
};

template <class _T1>
struct __less<_T1, const _T1>
{
    __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
    bool operator()(const _T1& __x, const _T1& __y) const {return __x < __y;}
};

template <class _Predicate>
class __invert
{
private:
    _Predicate __p_;
public:
    __attribute__ ((__exclude_from_explicit_instantiation__)) __invert() {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    explicit __invert(_Predicate __p) : __p_(__p) {}

    template <class _T1>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const _T1& __x) {return !__p_(__x);}

    template <class _T1, class _T2>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool operator()(const _T1& __x, const _T2& __y) {return __p_(__y, __x);}
};

template <typename _Integral>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename enable_if
<
    is_integral<_Integral>::value,
    _Integral
>::type
__half_positive(_Integral __value)
{
    return static_cast<_Integral>(static_cast<typename make_unsigned<_Integral>::type>(__value) / 2);
}

template <typename _Tp>
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename enable_if
<
    !is_integral<_Tp>::value,
    _Tp
>::type
__half_positive(_Tp __value)
{
    return __value / 2;
}

template <class _Comp>
struct __comp_ref_type {

  typedef typename add_lvalue_reference<_Comp>::type type;

};

template <class _Iter>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_Iter
__unwrap_iter(_Iter __i)
{
    return __i;
}


template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename enable_if
<
    is_trivially_copy_assignable<_Tp>::value,
    _Tp*
>::type
__unwrap_iter(__wrap_iter<_Tp*> __i)
{
    return __i.base();
}

template <class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
typename enable_if
<
    is_trivially_copy_assignable<_Tp>::value,
    const _Tp*
>::type
__unwrap_iter(__wrap_iter<const _Tp*> __i)
{
    return __i.base();
}
template <class _OutputIterator, class _Size, class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_OutputIterator
__fill_n(_OutputIterator __first, _Size __n, const _Tp& __value_)
{
    for (; __n > 0; ++__first, (void) --__n)
        *__first = __value_;
    return __first;
}

template <class _OutputIterator, class _Size, class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_OutputIterator
fill_n(_OutputIterator __first, _Size __n, const _Tp& __value_)
{
   return std::__1::__fill_n(__first, __convert_to_integral(__n), __value_);
}

template <class _ForwardIterator, class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void
__fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value_, forward_iterator_tag)
{
    for (; __first != __last; ++__first)
        *__first = __value_;
}

template <class _RandomAccessIterator, class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void
__fill(_RandomAccessIterator __first, _RandomAccessIterator __last, const _Tp& __value_, random_access_iterator_tag)
{
    std::__1::fill_n(__first, __last - __first, __value_);
}

template <class _ForwardIterator, class _Tp>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
void
fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value_)
{
    std::__1::__fill(__first, __last, __value_, typename iterator_traits<_ForwardIterator>::iterator_category());
}

template <class _ForwardIterator, class _Compare>
                      inline
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_ForwardIterator
min_element(_ForwardIterator __first, _ForwardIterator __last, _Compare __comp)
{
    static_assert(__is_forward_iterator<_ForwardIterator>::value,
        "std::min_element requires a ForwardIterator");
    if (__first != __last)
    {
        _ForwardIterator __i = __first;
        while (++__i != __last)
            if (__comp(*__i, *__first))
                __first = __i;
    }
    return __first;
}

template <class _ForwardIterator>
                      inline
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_ForwardIterator
min_element(_ForwardIterator __first, _ForwardIterator __last)
{
    return std::__1::min_element(__first, __last,
              __less<typename iterator_traits<_ForwardIterator>::value_type>());
}

template <class _Tp, class _Compare>
                      inline
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
const _Tp&
min(const _Tp& __a, const _Tp& __b, _Compare __comp)
{
    return __comp(__b, __a) ? __b : __a;
}

template <class _Tp>
                      inline
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
const _Tp&
min(const _Tp& __a, const _Tp& __b)
{
    return std::__1::min(__a, __b, __less<_Tp>());
}

template<class _Tp, class _Compare>
                      inline
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_Tp
min(initializer_list<_Tp> __t, _Compare __comp)
{
    return *std::__1::min_element(__t.begin(), __t.end(), __comp);
}

template<class _Tp>
                      inline
 __attribute__ ((__exclude_from_explicit_instantiation__)) constexpr
_Tp
min(initializer_list<_Tp> __t)
{
    return *std::__1::min_element(__t.begin(), __t.end(), __less<_Tp>());
}

template <unsigned long long _Xp, size_t _Rp>
struct __log2_imp
{
    static const size_t value = _Xp & ((unsigned long long)(1) << _Rp) ? _Rp
                                           : __log2_imp<_Xp, _Rp - 1>::value;
};

template <unsigned long long _Xp>
struct __log2_imp<_Xp, 0>
{
    static const size_t value = 0;
};

template <size_t _Rp>
struct __log2_imp<0, _Rp>
{
    static const size_t value = _Rp + 1;
};

template <class _UIntType, _UIntType _Xp>
struct __log2
{
    static const size_t value = __log2_imp<_Xp,
                                         sizeof(_UIntType) * 8 - 1>::value;
};

template<class _Engine, class _UIntType>
class __independent_bits_engine
{
public:

    typedef _UIntType result_type;

private:
    typedef typename _Engine::result_type _Engine_result_type;
    typedef typename conditional
        <
            sizeof(_Engine_result_type) <= sizeof(result_type),
                result_type,
                _Engine_result_type
        >::type _Working_result_type;

    _Engine& __e_;
    size_t __w_;
    size_t __w0_;
    size_t __n_;
    size_t __n0_;
    _Working_result_type __y0_;
    _Working_result_type __y1_;
    _Engine_result_type __mask0_;
    _Engine_result_type __mask1_;

    static constexpr const _Working_result_type _Rp = _Engine::max() - _Engine::min()
                                                      + _Working_result_type(1);

    static constexpr const size_t __m = __log2<_Working_result_type, _Rp>::value;
    static constexpr const size_t _WDt = numeric_limits<_Working_result_type>::digits;
    static constexpr const size_t _EDt = numeric_limits<_Engine_result_type>::digits;

public:

    __independent_bits_engine(_Engine& __e, size_t __w);

    result_type operator()() {return __eval(integral_constant<bool, _Rp != 0>());}

private:
    result_type __eval(false_type);
    result_type __eval(true_type);
};

template<class _Engine, class _UIntType>
__independent_bits_engine<_Engine, _UIntType>
    ::__independent_bits_engine(_Engine& __e, size_t __w)
        : __e_(__e),
          __w_(__w)
{
    __n_ = __w_ / __m + (__w_ % __m != 0);
    __w0_ = __w_ / __n_;
    if (_Rp == 0)
        __y0_ = _Rp;
    else if (__w0_ < _WDt)
        __y0_ = (_Rp >> __w0_) << __w0_;
    else
        __y0_ = 0;
    if (_Rp - __y0_ > __y0_ / __n_)
    {
        ++__n_;
        __w0_ = __w_ / __n_;
        if (__w0_ < _WDt)
            __y0_ = (_Rp >> __w0_) << __w0_;
        else
            __y0_ = 0;
    }
    __n0_ = __n_ - __w_ % __n_;
    if (__w0_ < _WDt - 1)
        __y1_ = (_Rp >> (__w0_ + 1)) << (__w0_ + 1);
    else
        __y1_ = 0;
    __mask0_ = __w0_ > 0 ? _Engine_result_type(~0) >> (_EDt - __w0_) :
                          _Engine_result_type(0);
    __mask1_ = __w0_ < _EDt - 1 ?
                               _Engine_result_type(~0) >> (_EDt - (__w0_ + 1)) :
                               _Engine_result_type(~0);
}

template<class _Engine, class _UIntType>
inline
_UIntType
__independent_bits_engine<_Engine, _UIntType>::__eval(false_type)
{
    return static_cast<result_type>(__e_() & __mask0_);
}

template<class _Engine, class _UIntType>
_UIntType
__independent_bits_engine<_Engine, _UIntType>::__eval(true_type)
{
    const size_t _WRt = numeric_limits<result_type>::digits;
    result_type _Sp = 0;
    for (size_t __k = 0; __k < __n0_; ++__k)
    {
        _Engine_result_type __u;
        do
        {
            __u = __e_() - _Engine::min();
        } while (__u >= __y0_);
        if (__w0_ < _WRt)
            _Sp <<= __w0_;
        else
            _Sp = 0;
        _Sp += __u & __mask0_;
    }
    for (size_t __k = __n0_; __k < __n_; ++__k)
    {
        _Engine_result_type __u;
        do
        {
            __u = __e_() - _Engine::min();
        } while (__u >= __y1_);
        if (__w0_ < _WRt - 1)
            _Sp <<= __w0_ + 1;
        else
            _Sp = 0;
        _Sp += __u & __mask1_;
    }
    return _Sp;
}

template<class _IntType = int>
class uniform_int_distribution
{
public:

    typedef _IntType result_type;

    class param_type
    {
        result_type __a_;
        result_type __b_;
    public:
        typedef uniform_int_distribution distribution_type;

        explicit param_type(result_type __a = 0,
                            result_type __b = numeric_limits<result_type>::max())
            : __a_(__a), __b_(__b) {}

        result_type a() const {return __a_;}
        result_type b() const {return __b_;}

        friend bool operator==(const param_type& __x, const param_type& __y)
            {return __x.__a_ == __y.__a_ && __x.__b_ == __y.__b_;}
        friend bool operator!=(const param_type& __x, const param_type& __y)
            {return !(__x == __y);}
    };

private:
    param_type __p_;

public:

    explicit uniform_int_distribution(result_type __a = 0,
                                      result_type __b = numeric_limits<result_type>::max())
        : __p_(param_type(__a, __b)) {}
    explicit uniform_int_distribution(const param_type& __p) : __p_(__p) {}
    void reset() {}

    template<class _URNG> result_type operator()(_URNG& __g)
        {return (*this)(__g, __p_);}
    template<class _URNG> result_type operator()(_URNG& __g, const param_type& __p);

    result_type a() const {return __p_.a();}
    result_type b() const {return __p_.b();}

    param_type param() const {return __p_;}
    void param(const param_type& __p) {__p_ = __p;}

    result_type min() const {return a();}
    result_type max() const {return b();}

    friend bool operator==(const uniform_int_distribution& __x,
                           const uniform_int_distribution& __y)
        {return __x.__p_ == __y.__p_;}
    friend bool operator!=(const uniform_int_distribution& __x,
                           const uniform_int_distribution& __y)
            {return !(__x == __y);}
};

template<class _IntType>
template<class _URNG>
typename uniform_int_distribution<_IntType>::result_type
uniform_int_distribution<_IntType>::operator()(_URNG& __g, const param_type& __p)
__attribute__((__no_sanitize__("unsigned-integer-overflow")))
{
    typedef typename conditional<sizeof(result_type) <= sizeof(uint32_t),
                                            uint32_t, uint64_t>::type _UIntType;
    const _UIntType _Rp = _UIntType(__p.b()) - _UIntType(__p.a()) + _UIntType(1);
    if (_Rp == 1)
        return __p.a();
    const size_t _Dt = numeric_limits<_UIntType>::digits;
    typedef __independent_bits_engine<_URNG, _UIntType> _Eng;
    if (_Rp == 0)
        return static_cast<result_type>(_Eng(__g, _Dt)());
    size_t __w = _Dt - __libcpp_clz(_Rp) - 1;
    if ((_Rp & (std::numeric_limits<_UIntType>::max() >> (_Dt - __w))) != 0)
        ++__w;
    _Eng __e(__g, __w);
    _UIntType __u;
    do
    {
        __u = __e();
    } while (__u >= _Rp);
    return static_cast<result_type>(__u + __p.a());
}

class __rs_default;

                 __rs_default __rs_get();

class __rs_default
{
    static unsigned __c_;

    __rs_default();
public:
    typedef uint_fast32_t result_type;

    static const result_type _Min = 0;
    static const result_type _Max = 0xFFFFFFFF;

    __rs_default(const __rs_default&);
    ~__rs_default();

    result_type operator()();

    static constexpr result_type min() {return _Min;}
    static constexpr result_type max() {return _Max;}

    friend __rs_default __rs_get();
};

                 __rs_default __rs_get();

template <class _RandomAccessIterator>
__attribute__ ((deprecated)) void
random_shuffle(_RandomAccessIterator __first, _RandomAccessIterator __last)
{
    typedef typename iterator_traits<_RandomAccessIterator>::difference_type difference_type;
    typedef uniform_int_distribution<ptrdiff_t> _Dp;
    typedef typename _Dp::param_type _Pp;
    difference_type __d = __last - __first;
    if (__d > 1)
    {
        _Dp __uid;
        __rs_default __g = __rs_get();
        for (--__last, (void) --__d; __first < __last; ++__first, (void) --__d)
        {
            difference_type __i = __uid(__g, _Pp(0, __d));
            if (__i != difference_type(0))
                swap(*__first, *(__first + __i));
        }
    }
}

template <class _RandomAccessIterator, class _RandomNumberGenerator>
__attribute__ ((deprecated)) void
random_shuffle(_RandomAccessIterator __first, _RandomAccessIterator __last,

               _RandomNumberGenerator&& __rand)

{
    typedef typename iterator_traits<_RandomAccessIterator>::difference_type difference_type;
    difference_type __d = __last - __first;
    if (__d > 1)
    {
        for (--__last; __first < __last; ++__first, (void) --__d)
        {
            difference_type __i = __rand(__d);
            if (__i != difference_type(0))
              swap(*__first, *(__first + __i));
        }
    }
}

template <class _PopulationIterator, class _SampleIterator, class _Distance,
          class _UniformRandomNumberGenerator>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_SampleIterator __sample(_PopulationIterator __first,
                         _PopulationIterator __last, _SampleIterator __output_iter,
                         _Distance __n,
                         _UniformRandomNumberGenerator & __g,
                         input_iterator_tag) {

  _Distance __k = 0;
  for (; __first != __last && __k < __n; ++__first, (void) ++__k)
    __output_iter[__k] = *__first;
  _Distance __sz = __k;
  for (; __first != __last; ++__first, (void) ++__k) {
    _Distance __r = std::__1::uniform_int_distribution<_Distance>(0, __k)(__g);
    if (__r < __sz)
      __output_iter[__r] = *__first;
  }
  return __output_iter + std::__1::min(__n, __k);
}

template <class _PopulationIterator, class _SampleIterator, class _Distance,
          class _UniformRandomNumberGenerator>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_SampleIterator __sample(_PopulationIterator __first,
                         _PopulationIterator __last, _SampleIterator __output_iter,
                         _Distance __n,
                         _UniformRandomNumberGenerator& __g,
                         forward_iterator_tag) {
  _Distance __unsampled_sz = std::__1::distance(__first, __last);
  for (__n = std::__1::min(__n, __unsampled_sz); __n != 0; ++__first) {
    _Distance __r =
        std::__1::uniform_int_distribution<_Distance>(0, --__unsampled_sz)(__g);
    if (__r < __n) {
      *__output_iter++ = *__first;
      --__n;
    }
  }
  return __output_iter;
}

template <class _PopulationIterator, class _SampleIterator, class _Distance,
          class _UniformRandomNumberGenerator>
 __attribute__ ((__exclude_from_explicit_instantiation__))
_SampleIterator __sample(_PopulationIterator __first,
                         _PopulationIterator __last, _SampleIterator __output_iter,
                         _Distance __n, _UniformRandomNumberGenerator& __g) {
  typedef typename iterator_traits<_PopulationIterator>::iterator_category
        _PopCategory;
  typedef typename iterator_traits<_PopulationIterator>::difference_type
        _Difference;
  static_assert(__is_forward_iterator<_PopulationIterator>::value ||
                __is_random_access_iterator<_SampleIterator>::value,
                "SampleIterator must meet the requirements of RandomAccessIterator");
  typedef typename common_type<_Distance, _Difference>::type _CommonType;
  ((void)0);
  return std::__1::__sample(
      __first, __last, __output_iter, _CommonType(__n),
      __g, _PopCategory());
}

template <class _PopulationIterator, class _SampleIterator, class _Distance,
          class _UniformRandomNumberGenerator>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
_SampleIterator sample(_PopulationIterator __first,
                       _PopulationIterator __last, _SampleIterator __output_iter,
                       _Distance __n, _UniformRandomNumberGenerator&& __g) {
    return std::__1::__sample(__first, __last, __output_iter, __n, __g);
}

template <class _Compare, class _InputIterator1, class _InputIterator2>
                              bool
__lexicographical_compare(_InputIterator1 __first1, _InputIterator1 __last1,
                          _InputIterator2 __first2, _InputIterator2 __last2, _Compare __comp)
{
    for (; __first2 != __last2; ++__first1, (void) ++__first2)
    {
        if (__first1 == __last1 || __comp(*__first1, *__first2))
            return true;
        if (__comp(*__first2, *__first1))
            return false;
    }
    return false;
}

template <class _InputIterator1, class _InputIterator2, class _Compare>
                      inline
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool
lexicographical_compare(_InputIterator1 __first1, _InputIterator1 __last1,
                        _InputIterator2 __first2, _InputIterator2 __last2, _Compare __comp)
{
    typedef typename __comp_ref_type<_Compare>::type _Comp_ref;
    return __lexicographical_compare<_Comp_ref>(__first1, __last1, __first2, __last2, __comp);
}

template <class _InputIterator1, class _InputIterator2>
                      inline
 __attribute__ ((__exclude_from_explicit_instantiation__))
bool
lexicographical_compare(_InputIterator1 __first1, _InputIterator1 __last1,
                        _InputIterator2 __first2, _InputIterator2 __last2)
{
    return std::__1::lexicographical_compare(__first1, __last1, __first2, __last2,
                                         __less<typename iterator_traits<_InputIterator1>::value_type,
                                                typename iterator_traits<_InputIterator2>::value_type>());
}

} }
namespace std { inline namespace __1 {

template <class _CharT>
struct char_traits
{
    typedef _CharT char_type;
    typedef int int_type;
    typedef streamoff off_type;
    typedef streampos pos_type;
    typedef mbstate_t state_type;

    static inline void constexpr
        assign(char_type& __c1, const char_type& __c2) noexcept {__c1 = __c2;}
    static inline constexpr bool eq(char_type __c1, char_type __c2) noexcept
        {return __c1 == __c2;}
    static inline constexpr bool lt(char_type __c1, char_type __c2) noexcept
        {return __c1 < __c2;}

    static constexpr
    int compare(const char_type* __s1, const char_type* __s2, size_t __n);
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr
    size_t length(const char_type* __s);
    __attribute__ ((__exclude_from_explicit_instantiation__)) static constexpr
    const char_type* find(const char_type* __s, size_t __n, const char_type& __a);
    static char_type* move(char_type* __s1, const char_type* __s2, size_t __n);
    __attribute__ ((__exclude_from_explicit_instantiation__))
    static char_type* copy(char_type* __s1, const char_type* __s2, size_t __n);
    __attribute__ ((__exclude_from_explicit_instantiation__))
    static char_type* assign(char_type* __s, size_t __n, char_type __a);

    static inline constexpr int_type not_eof(int_type __c) noexcept
        {return eq_int_type(__c, eof()) ? ~eof() : __c;}
    static inline constexpr char_type to_char_type(int_type __c) noexcept
        {return char_type(__c);}
    static inline constexpr int_type to_int_type(char_type __c) noexcept
        {return int_type(__c);}
    static inline constexpr bool eq_int_type(int_type __c1, int_type __c2) noexcept
        {return __c1 == __c2;}
    static inline constexpr int_type eof() noexcept
        {return int_type(-1);}
};

template <>
struct char_traits<char>
{
    typedef char char_type;
    typedef int int_type;
    typedef streamoff off_type;
    typedef streampos pos_type;
    typedef mbstate_t state_type;

    static inline constexpr
    void assign(char_type& __c1, const char_type& __c2) noexcept {__c1 = __c2;}
    static inline constexpr bool eq(char_type __c1, char_type __c2) noexcept
            {return __c1 == __c2;}
    static inline constexpr bool lt(char_type __c1, char_type __c2) noexcept
        {return (unsigned char)__c1 < (unsigned char)__c2;}

    static constexpr
    int compare(const char_type* __s1, const char_type* __s2, size_t __n) noexcept;
    static inline size_t constexpr
    length(const char_type* __s) noexcept {return __builtin_strlen(__s);}
    static constexpr
    const char_type* find(const char_type* __s, size_t __n, const char_type& __a) noexcept;
    static inline char_type* move(char_type* __s1, const char_type* __s2, size_t __n) noexcept
        {return __n == 0 ? __s1 : (char_type*) memmove(__s1, __s2, __n);}
    static inline char_type* copy(char_type* __s1, const char_type* __s2, size_t __n) noexcept
        {
            ((void)0);
            return __n == 0 ? __s1 : (char_type*)memcpy(__s1, __s2, __n);
        }
    static inline char_type* assign(char_type* __s, size_t __n, char_type __a) noexcept
        {return __n == 0 ? __s : (char_type*)memset(__s, to_int_type(__a), __n);}

    static inline constexpr int_type not_eof(int_type __c) noexcept
        {return eq_int_type(__c, eof()) ? ~eof() : __c;}
    static inline constexpr char_type to_char_type(int_type __c) noexcept
        {return char_type(__c);}
    static inline constexpr int_type to_int_type(char_type __c) noexcept
        {return int_type((unsigned char)__c);}
    static inline constexpr bool eq_int_type(int_type __c1, int_type __c2) noexcept
        {return __c1 == __c2;}
    static inline constexpr int_type eof() noexcept
        {return int_type(-1);}
};

inline constexpr
int
char_traits<char>::compare(const char_type* __s1, const char_type* __s2, size_t __n) noexcept
{
    if (__n == 0)
        return 0;

    return __builtin_memcmp(__s1, __s2, __n);
}

inline constexpr
const char*
char_traits<char>::find(const char_type* __s, size_t __n, const char_type& __a) noexcept
{
    if (__n == 0)
        return nullptr;

    return __builtin_char_memchr(__s, to_int_type(__a), __n);
}

template <class _Traits>
 __attribute__ ((__exclude_from_explicit_instantiation__))
constexpr
inline size_t __char_traits_length_checked(const typename _Traits::char_type* __s) noexcept {

  return _Traits::length(__s);

}

template <class _CharT, class _Iter, class _Traits=char_traits<_CharT> >
struct __quoted_output_proxy
{
    _Iter __first;
    _Iter __last;
    _CharT __delim;
    _CharT __escape;

    __quoted_output_proxy(_Iter __f, _Iter __l, _CharT __d, _CharT __e)
    : __first(__f), __last(__l), __delim(__d), __escape(__e) {}

};

} }
namespace std { inline namespace __1 {

} }
extern "C" {
               int isalnum( int c );

               int isalpha( int c );

               int isblank( int c );

               int iscntrl( int c );

               int isdigit( int c );

               int isgraph( int c );

               int islower( int c );

               int isprint( int c );

               int ispunct( int c );

               int isspace( int c );

               int isupper( int c );

               int isxdigit( int c );

               int tolower( int c );

               int toupper( int c );
extern "C" {

static int isascii (int c)
{
    return c >= 0 && c < 128;
}
}

}
namespace std { inline namespace __1 {
using ::isalnum;
using ::isalpha;
using ::isblank;
using ::iscntrl;
using ::isdigit;
using ::isgraph;
using ::islower;
using ::isprint;
using ::ispunct;
using ::isspace;
using ::isupper;
using ::isxdigit;
using ::tolower;
using ::toupper;

} }
namespace std { inline namespace __1 {

using ::wint_t;
using ::wctrans_t;
using ::wctype_t;
using ::iswalnum;
using ::iswalpha;
using ::iswblank;
using ::iswcntrl;
using ::iswdigit;
using ::iswgraph;
using ::iswlower;
using ::iswprint;
using ::iswpunct;
using ::iswspace;
using ::iswupper;
using ::iswxdigit;
using ::iswctype;
using ::wctype;
using ::towlower;
using ::towupper;
using ::towctrans;
using ::wctrans;

} }
namespace std { inline namespace __1 {

using ::mbstate_t;
using ::size_t;
using ::tm;
using ::wint_t;
using ::FILE;

using ::btowc;
using ::wctob;
using ::mbsinit;
using ::mbrlen;

} }

namespace std { inline namespace __1 {

template<class _CharT, class _Traits, class _Allocator>
basic_string<_CharT, _Traits, _Allocator>
operator+(const basic_string<_CharT, _Traits, _Allocator>& __x,
          const basic_string<_CharT, _Traits, _Allocator>& __y);

template<class _CharT, class _Traits, class _Allocator>
basic_string<_CharT, _Traits, _Allocator>
operator+(const _CharT* __x, const basic_string<_CharT,_Traits,_Allocator>& __y);

template<class _CharT, class _Traits, class _Allocator>
basic_string<_CharT, _Traits, _Allocator>
operator+(_CharT __x, const basic_string<_CharT,_Traits,_Allocator>& __y);

template<class _CharT, class _Traits, class _Allocator>
inline __attribute__ ((__exclude_from_explicit_instantiation__))
basic_string<_CharT, _Traits, _Allocator>
operator+(const basic_string<_CharT, _Traits, _Allocator>& __x, const _CharT* __y);

template<class _CharT, class _Traits, class _Allocator>
basic_string<_CharT, _Traits, _Allocator>
operator+(const basic_string<_CharT, _Traits, _Allocator>& __x, _CharT __y);

extern template string operator+<char, char_traits<char>, allocator<char> >(char const*, string const&);

template <bool>
class __basic_string_common
{
protected:
    [[noreturn]] void __throw_length_error() const;
    [[noreturn]] void __throw_out_of_range() const;
};

extern template class __basic_string_common<true>;

template <class _Iter>
struct __libcpp_string_gets_noexcept_iterator_impl : public true_type {};
template <class _Iter>
struct __libcpp_string_gets_noexcept_iterator
    : public bool_constant<(__libcpp_is_trivial_iterator<_Iter>::value || __libcpp_string_gets_noexcept_iterator_impl<_Iter>::value)> {};

template<class _CharT, class _Traits, class _Allocator>
class basic_string
    : private __basic_string_common<true>
{
public:
    typedef basic_string __self;
    typedef _Traits traits_type;
    typedef _CharT value_type;
    typedef _Allocator allocator_type;
    typedef allocator_traits<allocator_type> __alloc_traits;
    typedef typename __alloc_traits::size_type size_type;
    typedef typename __alloc_traits::difference_type difference_type;
    typedef value_type& reference;
    typedef const value_type& const_reference;
    typedef typename __alloc_traits::pointer pointer;
    typedef typename __alloc_traits::const_pointer const_pointer;

    typedef __wrap_iter<pointer> iterator;
    typedef __wrap_iter<const_pointer> const_iterator;

    typedef std::__1::reverse_iterator<iterator> reverse_iterator;
    typedef std::__1::reverse_iterator<const_iterator> const_reverse_iterator;

private:

    struct __long
    {
        size_type __cap_;
        size_type __size_;
        pointer __data_;
    };

    static const size_type __short_mask = 0x01;
    static const size_type __long_mask = 0x1ul;

    enum {__min_cap = (sizeof(__long) - 1)/sizeof(value_type) > 2 ?
                      (sizeof(__long) - 1)/sizeof(value_type) : 2};

    struct __short
    {
        union
        {
            unsigned char __size_;
            value_type __lx;
        };
        value_type __data_[__min_cap];
    };

    union __ulx{__long __lx; __short __lxx;};

    enum {__n_words = sizeof(__ulx) / sizeof(size_type)};

    struct __raw
    {
        size_type __words[__n_words];
    };

    struct __rep
    {
        union
        {
            __long __l;
            __short __s;
            __raw __r;
        };
    };

    __compressed_pair<__rep, allocator_type> __r_;

public:
    static const size_type npos = -1;

    __attribute__ ((__exclude_from_explicit_instantiation__)) basic_string()
        noexcept(is_nothrow_default_constructible<allocator_type>::value);

    __attribute__ ((__exclude_from_explicit_instantiation__)) explicit basic_string(const allocator_type& __a)

        noexcept;

    basic_string(const basic_string& __str);
    basic_string(const basic_string& __str, const allocator_type& __a);

    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string(basic_string&& __str)

        noexcept;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string(basic_string&& __str, const allocator_type& __a);

    template <class = typename enable_if<__is_allocator<_Allocator>::value, nullptr_t>::type>
    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string(const _CharT* __s) {
      ((void)0);
      __init(__s, traits_type::length(__s));

    }

    template <class = typename enable_if<__is_allocator<_Allocator>::value, nullptr_t>::type>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        basic_string(const _CharT* __s, const _Allocator& __a);

    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string(const _CharT* __s, size_type __n);
    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string(const _CharT* __s, size_type __n, const _Allocator& __a);
    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string(size_type __n, _CharT __c);

    template <class = typename enable_if<__is_allocator<_Allocator>::value, nullptr_t>::type>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        basic_string(size_type __n, _CharT __c, const _Allocator& __a);

    basic_string(const basic_string& __str, size_type __pos, size_type __n,
                 const _Allocator& __a = _Allocator());
    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string(const basic_string& __str, size_type __pos,
                 const _Allocator& __a = _Allocator());

    template<class _InputIterator, class = typename enable_if<__is_input_iterator<_InputIterator>::value>::type>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        basic_string(_InputIterator __first, _InputIterator __last);
    template<class _InputIterator, class = typename enable_if<__is_input_iterator<_InputIterator>::value>::type>
        __attribute__ ((__exclude_from_explicit_instantiation__))
        basic_string(_InputIterator __first, _InputIterator __last, const allocator_type& __a);

    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string(initializer_list<_CharT> __il);
    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string(initializer_list<_CharT> __il, const _Allocator& __a);

    inline ~basic_string();

    basic_string& operator=(const basic_string& __str);

    __attribute__ ((__exclude_from_explicit_instantiation__))
    iterator begin() noexcept
        {return iterator(__get_pointer());}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    const_iterator begin() const noexcept
        {return const_iterator(__get_pointer());}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    iterator end() noexcept
        {return iterator(__get_pointer() + size());}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    const_iterator end() const noexcept
        {return const_iterator(__get_pointer() + size());}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    reverse_iterator rbegin() noexcept
        {return reverse_iterator(end());}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    const_reverse_iterator rbegin() const noexcept
        {return const_reverse_iterator(end());}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    reverse_iterator rend() noexcept
        {return reverse_iterator(begin());}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    const_reverse_iterator rend() const noexcept
        {return const_reverse_iterator(begin());}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    const_iterator cbegin() const noexcept
        {return begin();}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    const_iterator cend() const noexcept
        {return end();}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    const_reverse_iterator crbegin() const noexcept
        {return rbegin();}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    const_reverse_iterator crend() const noexcept
        {return rend();}

    __attribute__ ((__exclude_from_explicit_instantiation__)) size_type size() const noexcept
        {return __is_long() ? __get_long_size() : __get_short_size();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) size_type length() const noexcept {return size();}
    __attribute__ ((__exclude_from_explicit_instantiation__)) size_type max_size() const noexcept;
    __attribute__ ((__exclude_from_explicit_instantiation__)) size_type capacity() const noexcept
        {return (__is_long() ? __get_long_cap()
                             : static_cast<size_type>(__min_cap)) - 1;}

    void resize(size_type __n, value_type __c);
    __attribute__ ((__exclude_from_explicit_instantiation__)) void resize(size_type __n) {resize(__n, value_type());}

    void reserve(size_type __res_arg);
    __attribute__ ((__exclude_from_explicit_instantiation__)) void __resize_default_init(size_type __n);

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void reserve() noexcept {reserve(0);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void shrink_to_fit() noexcept {reserve();}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void clear() noexcept;
                                  __attribute__ ((__exclude_from_explicit_instantiation__))
    bool empty() const noexcept {return size() == 0;}

    __attribute__ ((__exclude_from_explicit_instantiation__)) const_reference operator[](size_type __pos) const noexcept;
    __attribute__ ((__exclude_from_explicit_instantiation__)) reference operator[](size_type __pos) noexcept;

    const_reference at(size_type __n) const;
    reference at(size_type __n);

    void push_back(value_type __c);
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void pop_back();
    __attribute__ ((__exclude_from_explicit_instantiation__)) reference front() noexcept;
    __attribute__ ((__exclude_from_explicit_instantiation__)) const_reference front() const noexcept;
    __attribute__ ((__exclude_from_explicit_instantiation__)) reference back() noexcept;
    __attribute__ ((__exclude_from_explicit_instantiation__)) const_reference back() const noexcept;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string& assign(const basic_string& __str) { return *this = __str; }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string& assign(basic_string&& __str)
        noexcept((__noexcept_move_assign_container<_Allocator, __alloc_traits>::value))
        {*this = std::__1::move(__str); return *this;}

    basic_string& assign(const basic_string& __str, size_type __pos, size_type __n=npos);
    basic_string& assign(const value_type* __s, size_type __n);
    basic_string& assign(const value_type* __s);
    basic_string& assign(size_type __n, value_type __c);
    template<class _InputIterator>

    typename enable_if
        <
           __is_exactly_input_iterator<_InputIterator>::value
                || !__libcpp_string_gets_noexcept_iterator<_InputIterator>::value,
            basic_string&
        >::type
        assign(_InputIterator __first, _InputIterator __last);
    template<class _ForwardIterator>

    typename enable_if
        <
            __is_forward_iterator<_ForwardIterator>::value
                 && __libcpp_string_gets_noexcept_iterator<_ForwardIterator>::value,
            basic_string&
        >::type
        assign(_ForwardIterator __first, _ForwardIterator __last);

    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string& assign(initializer_list<value_type> __il) {return assign(__il.begin(), __il.size());}

    basic_string& erase(size_type __pos = 0, size_type __n = npos);
    __attribute__ ((__exclude_from_explicit_instantiation__))
    iterator erase(const_iterator __pos);
    __attribute__ ((__exclude_from_explicit_instantiation__))
    iterator erase(const_iterator __first, const_iterator __last);

    size_type copy(value_type* __s, size_type __n, size_type __pos = 0) const;
    __attribute__ ((__exclude_from_explicit_instantiation__))
    basic_string substr(size_type __pos = 0, size_type __n = npos) const;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    const value_type* c_str() const noexcept {return data();}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    const value_type* data() const noexcept {return std::__1::__to_raw_pointer(__get_pointer());}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    value_type* data() noexcept {return std::__1::__to_raw_pointer(__get_pointer());}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    allocator_type get_allocator() const noexcept {return __alloc();}

    __attribute__ ((__exclude_from_explicit_instantiation__)) bool __invariants() const;

    __attribute__ ((__exclude_from_explicit_instantiation__)) void __clear_and_shrink() noexcept;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    bool __is_long() const noexcept
        {return bool(__r_.first().__s.__size_ & __short_mask);}

private:
    __attribute__ ((__exclude_from_explicit_instantiation__))
    allocator_type& __alloc() noexcept
        {return __r_.second();}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    const allocator_type& __alloc() const noexcept
        {return __r_.second();}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __set_short_size(size_type __s) noexcept

        {__r_.first().__s.__size_ = (unsigned char)(__s << 1);}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    size_type __get_short_size() const noexcept

        {return __r_.first().__s.__size_ >> 1;}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __set_long_size(size_type __s) noexcept
        {__r_.first().__l.__size_ = __s;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    size_type __get_long_size() const noexcept
        {return __r_.first().__l.__size_;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __set_size(size_type __s) noexcept
        {if (__is_long()) __set_long_size(__s); else __set_short_size(__s);}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __set_long_cap(size_type __s) noexcept
        {__r_.first().__l.__cap_ = __long_mask | __s;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    size_type __get_long_cap() const noexcept
        {return __r_.first().__l.__cap_ & size_type(~__long_mask);}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __set_long_pointer(pointer __p) noexcept
        {__r_.first().__l.__data_ = __p;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    pointer __get_long_pointer() noexcept
        {return __r_.first().__l.__data_;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    const_pointer __get_long_pointer() const noexcept
        {return __r_.first().__l.__data_;}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    pointer __get_short_pointer() noexcept
        {return pointer_traits<pointer>::pointer_to(__r_.first().__s.__data_[0]);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    const_pointer __get_short_pointer() const noexcept
        {return pointer_traits<const_pointer>::pointer_to(__r_.first().__s.__data_[0]);}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    pointer __get_pointer() noexcept
        {return __is_long() ? __get_long_pointer() : __get_short_pointer();}
    __attribute__ ((__exclude_from_explicit_instantiation__))
    const_pointer __get_pointer() const noexcept
        {return __is_long() ? __get_long_pointer() : __get_short_pointer();}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __zero() noexcept
        {
            size_type (&__a)[__n_words] = __r_.first().__r.__words;
            for (unsigned __i = 0; __i < __n_words; ++__i)
                __a[__i] = 0;
        }

    template <size_type __a> static
        __attribute__ ((__exclude_from_explicit_instantiation__))
        size_type __align_it(size_type __s) noexcept
            {return (__s + (__a-1)) & ~(__a-1);}
    enum {__alignment = 16};
    static __attribute__ ((__exclude_from_explicit_instantiation__))
    size_type __recommend(size_type __s) noexcept
        {
        if (__s < __min_cap) return static_cast<size_type>(__min_cap) - 1;
        size_type __guess = __align_it<sizeof(value_type) < __alignment ?
                     __alignment/sizeof(value_type) : 1 > (__s+1) - 1;
        if (__guess == __min_cap) ++__guess;
        return __guess;
        }

    inline
    void __init(const value_type* __s, size_type __sz, size_type __reserve);
    inline
    void __init(const value_type* __s, size_type __sz);
    inline
    void __init(size_type __n, value_type __c);

    template <class _InputIterator>
    inline
    typename enable_if
    <
        __is_exactly_input_iterator<_InputIterator>::value,
        void
    >::type
    __init(_InputIterator __first, _InputIterator __last);

    template <class _ForwardIterator>
    inline
    typename enable_if
    <
        __is_forward_iterator<_ForwardIterator>::value,
        void
    >::type
    __init(_ForwardIterator __first, _ForwardIterator __last);

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __copy_assign_alloc(const basic_string& __str)
        {__copy_assign_alloc(__str, integral_constant<bool,
                      __alloc_traits::propagate_on_container_copy_assignment::value>());}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __copy_assign_alloc(const basic_string& __str, true_type)
        {
            if (__alloc() == __str.__alloc())
                __alloc() = __str.__alloc();
            else
            {
                if (!__str.__is_long())
                {
                    __clear_and_shrink();
                    __alloc() = __str.__alloc();
                }
                else
                {
                    allocator_type __a = __str.__alloc();
                    pointer __p = __alloc_traits::allocate(__a, __str.__get_long_cap());
                    __clear_and_shrink();
                    __alloc() = std::__1::move(__a);
                    __set_long_pointer(__p);
                    __set_long_cap(__str.__get_long_cap());
                    __set_long_size(__str.size());
                }
            }
        }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __copy_assign_alloc(const basic_string&, false_type) noexcept
        {}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __move_assign(basic_string& __str, false_type)
        noexcept(__alloc_traits::is_always_equal::value);
    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __move_assign(basic_string& __str, true_type)

        noexcept;

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void
    __move_assign_alloc(basic_string& __str)
        noexcept(!__alloc_traits::propagate_on_container_move_assignment::value || is_nothrow_move_assignable<allocator_type>::value)

    {__move_assign_alloc(__str, integral_constant<bool,
                      __alloc_traits::propagate_on_container_move_assignment::value>());}

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __move_assign_alloc(basic_string& __c, true_type)
        noexcept(is_nothrow_move_assignable<allocator_type>::value)
        {
            __alloc() = std::__1::move(__c.__alloc());
        }

    __attribute__ ((__exclude_from_explicit_instantiation__))
    void __move_assign_alloc(basic_string&, false_type)
        noexcept
        {}

    __attribute__ ((__exclude_from_explicit_instantiation__)) void __invalidate_all_iterators();
    __attribute__ ((__exclude_from_explicit_instantiation__)) void __invalidate_iterators_past(size_type);

    friend basic_string operator+<>(const basic_string&, const basic_string&);
    friend basic_string operator+<>(const value_type*, const basic_string&);
    friend basic_string operator+<>(value_type, const basic_string&);
    friend basic_string operator+<>(const basic_string&, const value_type*);
    friend basic_string operator+<>(const basic_string&, value_type);
};

template<class _InputIterator,
         class _CharT = typename iterator_traits<_InputIterator>::value_type,
         class _Allocator = allocator<_CharT>,
         class = typename enable_if<__is_input_iterator<_InputIterator>::value, void>::type,
         class = typename enable_if<__is_allocator<_Allocator>::value, void>::type
         >
basic_string(_InputIterator, _InputIterator, _Allocator = _Allocator())
  -> basic_string<_CharT, char_traits<_CharT>, _Allocator>;

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string()
    noexcept(is_nothrow_default_constructible<allocator_type>::value)
{

    __zero();
}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(const allocator_type& __a)
        noexcept
: __r_(__second_tag(), __a)
{
    __zero();
}

template <class _CharT, class _Traits, class _Allocator>
void basic_string<_CharT, _Traits, _Allocator>::__init(const value_type* __s,
                                                       size_type __sz,
                                                       size_type __reserve)
{
    if (__reserve > max_size())
        this->__throw_length_error();
    pointer __p;
    if (__reserve < __min_cap)
    {
        __set_short_size(__sz);
        __p = __get_short_pointer();
    }
    else
    {
        size_type __cap = __recommend(__reserve);
        __p = __alloc_traits::allocate(__alloc(), __cap+1);
        __set_long_pointer(__p);
        __set_long_cap(__cap+1);
        __set_long_size(__sz);
    }
    traits_type::copy(std::__1::__to_raw_pointer(__p), __s, __sz);
    traits_type::assign(__p[__sz], value_type());
}

template <class _CharT, class _Traits, class _Allocator>
void
basic_string<_CharT, _Traits, _Allocator>::__init(const value_type* __s, size_type __sz)
{
    if (__sz > max_size())
        this->__throw_length_error();
    pointer __p;
    if (__sz < __min_cap)
    {
        __set_short_size(__sz);
        __p = __get_short_pointer();
    }
    else
    {
        size_type __cap = __recommend(__sz);
        __p = __alloc_traits::allocate(__alloc(), __cap+1);
        __set_long_pointer(__p);
        __set_long_cap(__cap+1);
        __set_long_size(__sz);
    }
    traits_type::copy(std::__1::__to_raw_pointer(__p), __s, __sz);
    traits_type::assign(__p[__sz], value_type());
}

template <class _CharT, class _Traits, class _Allocator>
template <class>
basic_string<_CharT, _Traits, _Allocator>::basic_string(const _CharT* __s, const _Allocator& __a)
    : __r_(__second_tag(), __a)
{
    ((void)0);
    __init(__s, traits_type::length(__s));
}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(const _CharT* __s, size_type __n)
{
    ((void)0);
    __init(__s, __n);
}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(const _CharT* __s, size_type __n, const _Allocator& __a)
    : __r_(__second_tag(), __a)
{
    ((void)0);
    __init(__s, __n);
}

template <class _CharT, class _Traits, class _Allocator>
basic_string<_CharT, _Traits, _Allocator>::basic_string(const basic_string& __str)
    : __r_(__second_tag(), __alloc_traits::select_on_container_copy_construction(__str.__alloc()))
{
    if (!__str.__is_long())
        __r_.first().__r = __str.__r_.first().__r;
    else
        __init(std::__1::__to_raw_pointer(__str.__get_long_pointer()), __str.__get_long_size());
}

template <class _CharT, class _Traits, class _Allocator>
basic_string<_CharT, _Traits, _Allocator>::basic_string(
    const basic_string& __str, const allocator_type& __a)
    : __r_(__second_tag(), __a)
{
    if (!__str.__is_long())
        __r_.first().__r = __str.__r_.first().__r;
    else
        __init(std::__1::__to_raw_pointer(__str.__get_long_pointer()), __str.__get_long_size());
}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(basic_string&& __str)

        noexcept

    : __r_(std::__1::move(__str.__r_))
{
    __str.__zero();
}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(basic_string&& __str, const allocator_type& __a)
    : __r_(__second_tag(), __a)
{
    if (__str.__is_long() && __a != __str.__alloc())
        __init(std::__1::__to_raw_pointer(__str.__get_long_pointer()), __str.__get_long_size());
    else
    {
        __r_.first().__r = __str.__r_.first().__r;
        __str.__zero();
    }

}

template <class _CharT, class _Traits, class _Allocator>
void
basic_string<_CharT, _Traits, _Allocator>::__init(size_type __n, value_type __c)
{
    if (__n > max_size())
        this->__throw_length_error();
    pointer __p;
    if (__n < __min_cap)
    {
        __set_short_size(__n);
        __p = __get_short_pointer();
    }
    else
    {
        size_type __cap = __recommend(__n);
        __p = __alloc_traits::allocate(__alloc(), __cap+1);
        __set_long_pointer(__p);
        __set_long_cap(__cap+1);
        __set_long_size(__n);
    }
    traits_type::assign(std::__1::__to_raw_pointer(__p), __n, __c);
    traits_type::assign(__p[__n], value_type());
}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(size_type __n, _CharT __c)
{
    __init(__n, __c);
}

template <class _CharT, class _Traits, class _Allocator>
template <class>
basic_string<_CharT, _Traits, _Allocator>::basic_string(size_type __n, _CharT __c, const _Allocator& __a)
    : __r_(__second_tag(), __a)
{
    __init(__n, __c);

}

template <class _CharT, class _Traits, class _Allocator>
basic_string<_CharT, _Traits, _Allocator>::basic_string(const basic_string& __str,
                                                        size_type __pos, size_type __n,
                                                        const _Allocator& __a)
    : __r_(__second_tag(), __a)
{
    size_type __str_sz = __str.size();
    if (__pos > __str_sz)
        this->__throw_out_of_range();
    __init(__str.data() + __pos, std::__1::min(__n, __str_sz - __pos));
}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(const basic_string& __str, size_type __pos,
                                                        const _Allocator& __a)
    : __r_(__second_tag(), __a)
{
    size_type __str_sz = __str.size();
    if (__pos > __str_sz)
        this->__throw_out_of_range();
    __init(__str.data() + __pos, __str_sz - __pos);
}

template <class _CharT, class _Traits, class _Allocator>
template<class _InputIterator, class>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(_InputIterator __first, _InputIterator __last)
{
    __init(__first, __last);

}

template <class _CharT, class _Traits, class _Allocator>
template<class _InputIterator, class>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(_InputIterator __first, _InputIterator __last,
                                                        const allocator_type& __a)
    : __r_(__second_tag(), __a)
{
    __init(__first, __last);

}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(
    initializer_list<_CharT> __il)
{
    __init(__il.begin(), __il.end());

}

template <class _CharT, class _Traits, class _Allocator>
inline

basic_string<_CharT, _Traits, _Allocator>::basic_string(
    initializer_list<_CharT> __il, const _Allocator& __a)
    : __r_(__second_tag(), __a)
{
    __init(__il.begin(), __il.end());

}

template <class _CharT, class _Traits, class _Allocator>
basic_string<_CharT, _Traits, _Allocator>::~basic_string()
{

    if (__is_long())
        __alloc_traits::deallocate(__alloc(), __get_long_pointer(), __get_long_cap());
}

template<class _CharT, class _Traits, class _Allocator>
    const typename basic_string<_CharT, _Traits, _Allocator>::size_type
                   basic_string<_CharT, _Traits, _Allocator>::npos;

extern template class basic_string<char>;

} }

int xbox_register ()
{
    if( rand() != 0 )
    {
        goto end;
    }

    std::string crt;

end:

    return 0;
}

// Build like this:
// "/usr/bin/clang-14" "-cc1" -ferror-limit 3 "-triple" "i386-pc-windows-msvc19.20.0" "-emit-obj" "-disable-free"  "-disable-llvm-verifier" "-discard-value-names" "-mrelocation-model" "static" "-ffreestanding" "-target-cpu" "pentium3" "-sys-header-deps" "-D" "NXDK" "-D" "__STDC__=1" "-U" "__STDC_NO_THREADS__" "-std=c++17" "-fno-use-cxa-atexit" "-fms-extensions" "-fms-compatibility" "-fms-compatibility-version=19.20" "-x" "c++" "register_xbox-2a2efc.cpp"