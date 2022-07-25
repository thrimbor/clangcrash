
#ifndef _LIBCPP_STRING
#define _LIBCPP_STRING



// -*- C++ -*-
//===--------------------------- __config ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_CONFIG
#define _LIBCPP_CONFIG

#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_NO_AUTO_LINK
#define _LIBCPP_NO_EXCEPTIONS
#define _LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS
#define _LIBCPP_BUILDING_LIBRARY
#define _LIBCPP_HAS_NO_STDIN
#define _LIBCPP_HAS_NO_STDOUT
#define _LIBCPP_HAS_NO_BUILTIN_OVERLOADED_OPERATOR_NEW_DELETE
#define _LIBCPP_HAS_NO_BUILTIN_OPERATOR_NEW_DELETE
#define _LIBCPP_COMPILER_HAS_BUILTIN_LAUNDER
#endif


#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER
#  endif
#endif

#ifndef _LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER

#endif

#ifdef __cplusplus

#ifdef __GNUC__
#  define _GNUC_VER (__GNUC__ * 100 + __GNUC_MINOR__)
// The _GNUC_VER_NEW macro better represents the new GCC versioning scheme
// introduced in GCC 5.0.
#  define _GNUC_VER_NEW (_GNUC_VER * 10 + __GNUC_PATCHLEVEL__)
#else
#  define _GNUC_VER 0
#  define _GNUC_VER_NEW 0
#endif

#define _LIBCPP_VERSION 10000

#ifndef _LIBCPP_ABI_VERSION
#  define _LIBCPP_ABI_VERSION 1
#endif

#ifndef __STDC_HOSTED__
#  define _LIBCPP_FREESTANDING
#endif

#ifndef _LIBCPP_STD_VER

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_STD_VER 11

#elif 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_STD_VER 14

#elif 1 /* evaluated by -frewrite-includes */
#    define _LIBCPP_STD_VER 17
#  else
#    define _LIBCPP_STD_VER 18  // current year, or date of c++2a ratification
#  endif
#endif  // _LIBCPP_STD_VER


#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_OBJECT_FORMAT_ELF   1

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_OBJECT_FORMAT_MACHO 1

#elif 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_OBJECT_FORMAT_COFF  1

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_OBJECT_FORMAT_WASM  1
#else
#  error Unknown object file format
#endif


#if 0 /* evaluated by -frewrite-includes */

#elif 1 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
// Enable compiling copies of now inline methods into the dylib to support
// applications compiled against older libraries. This is unnecessary with
// COFF dllexport semantics, since dllexport forces a non-inline definition
// of inline functions to be emitted anyway. Our own non-inline copy would
// conflict with the dllexport-emitted copy, so we disable it.
#    define _LIBCPP_DEPRECATED_ABI_LEGACY_LIBRARY_DEFINITIONS_FOR_INLINE_FUNCTIONS
#  endif
// Feature macros for disabling pre ABI v1 features. All of these options
// are deprecated.

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_DEPRECATED_ABI_DISABLE_PAIR_TRIVIAL_COPY_CTOR
#  endif
#endif

#ifdef _LIBCPP_TRIVIAL_PAIR_COPY_CTOR
#error "_LIBCPP_TRIVIAL_PAIR_COPY_CTOR" is no longer supported. \
       use _LIBCPP_DEPRECATED_ABI_DISABLE_PAIR_TRIVIAL_COPY_CTOR instead
#endif

#define _LIBCPP_CONCAT1(_LIBCPP_X,_LIBCPP_Y) _LIBCPP_X##_LIBCPP_Y
#define _LIBCPP_CONCAT(_LIBCPP_X,_LIBCPP_Y) _LIBCPP_CONCAT1(_LIBCPP_X,_LIBCPP_Y)

#ifndef _LIBCPP_ABI_NAMESPACE
# define _LIBCPP_ABI_NAMESPACE _LIBCPP_CONCAT(__,_LIBCPP_ABI_VERSION)
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_CXX03_LANG
#endif

#ifndef __has_attribute
#define __has_attribute(__x) 0
#endif

#ifndef __has_builtin
#define __has_builtin(__x) 0
#endif

#ifndef __has_extension
#define __has_extension(__x) 0
#endif

#ifndef __has_feature
#define __has_feature(__x) 0
#endif

#ifndef __has_cpp_attribute
#define __has_cpp_attribute(__x) 0
#endif

// '__is_identifier' returns '0' if '__x' is a reserved identifier provided by
// the compiler and '1' otherwise.
#ifndef __is_identifier
#define __is_identifier(__x) 1
#endif

#ifndef __has_declspec_attribute
#define __has_declspec_attribute(__x) 0
#endif

#define __has_keyword(__x) !(__is_identifier(__x))

#ifndef __has_include
#define __has_include(...) 0
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_COMPILER_CLANG
#  ifndef __apple_build_version__
#    define _LIBCPP_CLANG_VER (__clang_major__ * 100 + __clang_minor__)
#  endif

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_COMPILER_GCC

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_COMPILER_MSVC

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_COMPILER_IBM
#endif


#if 0 /* evaluated by -frewrite-includes */
#error "libc++ does not support using GCC with C++03. Please enable C++11"
#endif

// FIXME: ABI detection should be done via compiler builtin macros. This
// is just a placeholder until Clang implements such macros. For now assume
// that Windows compilers pretending to be MSVC++ target the Microsoft ABI,
// and allow the user to explicitly specify the ABI to handle cases where this
// heuristic falls short.

#if 0 /* evaluated by -frewrite-includes */
#  error "Only one of _LIBCPP_ABI_FORCE_ITANIUM and _LIBCPP_ABI_FORCE_MICROSOFT can be defined"

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_ABI_ITANIUM

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_ABI_MICROSOFT
#else

#if 1 /* evaluated by -frewrite-includes */
#    define _LIBCPP_ABI_MICROSOFT
#  else
#    define _LIBCPP_ABI_ITANIUM
#  endif
#endif


#if 1 /* evaluated by -frewrite-includes */
# define _LIBCPP_ABI_VCRUNTIME
#endif

// Need to detect which libc we're using if we're on Linux.

#if 0 /* evaluated by -frewrite-includes */


#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_GLIBC_PREREQ(a, b) __GLIBC_PREREQ(a, b)
#  else
#    define _LIBCPP_GLIBC_PREREQ(a, b) 0
#  endif // defined(__GLIBC_PREREQ)
#endif // defined(__linux__)

#ifdef __LITTLE_ENDIAN__

#if 1 /* evaluated by -frewrite-includes */
#    define _LIBCPP_LITTLE_ENDIAN
#  endif  // __LITTLE_ENDIAN__
#endif  // __LITTLE_ENDIAN__

#ifdef __BIG_ENDIAN__

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_BIG_ENDIAN
#  endif  // __BIG_ENDIAN__
#endif  // __BIG_ENDIAN__

#ifdef __BYTE_ORDER__

#if 1 /* evaluated by -frewrite-includes */
#    define _LIBCPP_LITTLE_ENDIAN

#elif 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_BIG_ENDIAN
#  endif // __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#endif // __BYTE_ORDER__

#ifdef __FreeBSD__


#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_LITTLE_ENDIAN
#  else  // _BYTE_ORDER == _LITTLE_ENDIAN
#    define _LIBCPP_BIG_ENDIAN
#  endif  // _BYTE_ORDER == _LITTLE_ENDIAN
#  ifndef __LONG_LONG_SUPPORTED
#    define _LIBCPP_HAS_NO_LONG_LONG
#  endif  // __LONG_LONG_SUPPORTED
#endif  // __FreeBSD__



#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_WIN32API
#  define _LIBCPP_LITTLE_ENDIAN
#  define _LIBCPP_SHORT_WCHAR   1
// Both MinGW and native MSVC provide a "MSVC"-like environment
#  define _LIBCPP_MSVCRT_LIKE
// If mingw not explicitly detected, assume using MS C runtime only if
// a MS compatibility version is specified.

#if 1 /* evaluated by -frewrite-includes */
#    define _LIBCPP_MSVCRT // Using Microsoft's C Runtime library
#  endif

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_HAS_BITSCAN64
#  endif
#  define _LIBCPP_HAS_OPEN_WITH_WCHAR

#if 1 /* evaluated by -frewrite-includes */
#    define _LIBCPP_HAS_QUICK_EXIT
#  endif

// Some CRT APIs are unavailable to store apps

#if 0 /* evaluated by -frewrite-includes */


#if 0 /* evaluated by -frewrite-includes */
#      define _LIBCPP_WINDOWS_STORE_APP
#    endif
#  endif
#endif // defined(_WIN32)

#ifdef __sun__

#  ifdef _LITTLE_ENDIAN
#    define _LIBCPP_LITTLE_ENDIAN
#  else
#    define _LIBCPP_BIG_ENDIAN
#  endif
#endif // __sun__


#if 0 /* evaluated by -frewrite-includes */
   // Certain architectures provide arc4random(). Prefer using
   // arc4random() over /dev/{u,}random to make it possible to obtain
   // random data even when using sandboxing mechanisms such as chroots,
   // Capsicum, etc.
#  define _LIBCPP_USING_ARC4_RANDOM

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_USING_GETENTROPY

#elif 0 /* evaluated by -frewrite-includes */
   // NaCl's sandbox (which PNaCl also runs in) doesn't allow filesystem access,
   // including accesses to the special files under /dev. C++11's
   // std::random_device is instead exposed through a NaCl syscall.
#  define _LIBCPP_USING_NACL_RANDOM

#elif 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_USING_WIN32_RANDOM
#else
#  define _LIBCPP_USING_DEV_RANDOM
#endif


#if 0 /* evaluated by -frewrite-includes */


#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_LITTLE_ENDIAN

#elif 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_BIG_ENDIAN
#  else  // __BYTE_ORDER == __BIG_ENDIAN
#    error unable to determine endian
#  endif
#endif  // !defined(_LIBCPP_LITTLE_ENDIAN) && !defined(_LIBCPP_BIG_ENDIAN)


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_NO_CFI __attribute__((__no_sanitize__("cfi")))
#else
#  define _LIBCPP_NO_CFI
#endif


#if 1 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_HAS_QUICK_EXIT
#    define _LIBCPP_HAS_C11_FEATURES

#elif 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_HAS_QUICK_EXIT
#    define _LIBCPP_HAS_TIMESPEC_GET
#    define _LIBCPP_HAS_C11_FEATURES

#elif 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#        define _LIBCPP_HAS_QUICK_EXIT
#      endif

#if 0 /* evaluated by -frewrite-includes */
#        define _LIBCPP_HAS_C11_FEATURES
#        define _LIBCPP_HAS_TIMESPEC_GET
#      endif
#    else // defined(_LIBCPP_HAS_MUSL_LIBC)
#      define _LIBCPP_HAS_QUICK_EXIT
#      define _LIBCPP_HAS_TIMESPEC_GET
#      define _LIBCPP_HAS_C11_FEATURES
#    endif
#  endif // __linux__
#endif

#ifndef _LIBCPP_CXX03_LANG
# define _LIBCPP_ALIGNOF(_Tp) alignof(_Tp)

#elif 0 /* evaluated by -frewrite-includes */
# define _LIBCPP_ALIGNOF(_Tp) _Alignof(_Tp)
#else
// This definition is potentially buggy, but it's only taken with GCC in C++03,
// which we barely support anyway. See llvm.org/PR39713
# define _LIBCPP_ALIGNOF(_Tp) __alignof(_Tp)
#endif

#define _LIBCPP_PREFERRED_ALIGNOF(_Tp) __alignof(_Tp)


#if 1 /* evaluated by -frewrite-includes */

// _LIBCPP_ALTERNATE_STRING_LAYOUT is an old name for
// _LIBCPP_ABI_ALTERNATE_STRING_LAYOUT left here for backward compatibility.

#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_ABI_ALTERNATE_STRING_LAYOUT
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _ALIGNAS_TYPE(x) alignas(x)
#  define _ALIGNAS(x) alignas(x)
#else
#  define _ALIGNAS_TYPE(x) __attribute__((__aligned__(_LIBCPP_ALIGNOF(x))))
#  define _ALIGNAS(x) __attribute__((__aligned__(x)))
#endif


#if 0 /* evaluated by -frewrite-includes */
typedef __char16_t char16_t;
typedef __char32_t char32_t;
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_NO_EXCEPTIONS
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_NO_RTTI
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_STRONG_ENUMS
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_NORETURN [[noreturn]]
#else
#  define _LIBCPP_NORETURN __attribute__ ((noreturn))
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_LAMBDAS
#endif


#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#    define nullptr __nullptr
#  else
#    define _LIBCPP_HAS_NO_NULLPTR
#  endif
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_RVALUE_REFERENCES
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_AUTO_TYPE
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_VARIADICS
#endif

// Objective-C++ features (opt-in)

#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_OBJC_ARC
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_OBJC_ARC_WEAK
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_CXX14_CONSTEXPR
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_VARIABLE_TEMPLATES
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_NOEXCEPT
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_ASAN
#endif

// Allow for build-time disabling of unsigned integer sanitization

#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK __attribute__((__no_sanitize__("unsigned-integer-overflow")))
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_COMPILER_HAS_BUILTIN_LAUNDER
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_UNIQUE_OBJECT_REPRESENTATIONS
#endif

#define _LIBCPP_ALWAYS_INLINE __attribute__ ((__always_inline__))

// Literal operators ""d and ""y are supported starting with LLVM Clang 8 and AppleClang 10.0.1

#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_CXX20_CHRONO_LITERALS
#endif

#define _LIBCPP_DISABLE_EXTENSION_WARNING __extension__


#elif 0 /* evaluated by -frewrite-includes */

#define _ALIGNAS(x) __attribute__((__aligned__(x)))
#define _ALIGNAS_TYPE(x) __attribute__((__aligned__(_LIBCPP_ALIGNOF(x))))

#define _LIBCPP_NORETURN __attribute__((noreturn))


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_NO_EXCEPTIONS
#endif

// Determine if GCC supports relaxed constexpr

#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_CXX14_CONSTEXPR
#endif

// GCC 5 supports variable templates

#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_VARIABLE_TEMPLATES
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_ASAN
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_COMPILER_HAS_BUILTIN_LAUNDER
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_UNIQUE_OBJECT_REPRESENTATIONS
#endif

#define _LIBCPP_ALWAYS_INLINE __attribute__ ((__always_inline__))

#define _LIBCPP_DISABLE_EXTENSION_WARNING __extension__


#elif 0 /* evaluated by -frewrite-includes */

#define _LIBCPP_TOSTRING2(x) #x
#define _LIBCPP_TOSTRING(x) _LIBCPP_TOSTRING2(x)
#define _LIBCPP_WARNING(x) __pragma(message(__FILE__ "(" _LIBCPP_TOSTRING(__LINE__) ") : warning note: " x))


#if 0 /* evaluated by -frewrite-includes */
#error "MSVC versions prior to Visual Studio 2015 are not supported"
#endif

#define _LIBCPP_HAS_NO_CXX14_CONSTEXPR
#define _LIBCPP_HAS_NO_VARIABLE_TEMPLATES
#define __alignof__ __alignof
#define _LIBCPP_NORETURN __declspec(noreturn)
#define _ALIGNAS(x) __declspec(align(x))
#define _ALIGNAS_TYPE(x) alignas(x)

#define _LIBCPP_WEAK

#define _LIBCPP_HAS_NO_ASAN

#define _LIBCPP_ALWAYS_INLINE __forceinline

#define _LIBCPP_HAS_NO_VECTOR_EXTENSION

#define _LIBCPP_DISABLE_EXTENSION_WARNING


#elif 0 /* evaluated by -frewrite-includes */

#define _ALIGNAS(x) __attribute__((__aligned__(x)))
#define _ALIGNAS_TYPE(x) __attribute__((__aligned__(_LIBCPP_ALIGNOF(x))))
#define _ATTRIBUTE(x) __attribute__((x))
#define _LIBCPP_NORETURN __attribute__((noreturn))

#define _LIBCPP_HAS_NO_UNICODE_CHARS
#define _LIBCPP_HAS_NO_VARIABLE_TEMPLATES


#if 0 /* evaluated by -frewrite-includes */
#define __MULTILOCALE_API
#endif

#define _LIBCPP_HAS_NO_ASAN

#define _LIBCPP_ALWAYS_INLINE __attribute__ ((__always_inline__))

#define _LIBCPP_HAS_NO_VECTOR_EXTENSION

#define _LIBCPP_DISABLE_EXTENSION_WARNING

#endif // _LIBCPP_COMPILER_[CLANG|GCC|MSVC|IBM]


#if 1 /* evaluated by -frewrite-includes */

#ifdef _DLL
#  define _LIBCPP_CRT_FUNC __declspec(dllimport)
#else
#  define _LIBCPP_CRT_FUNC
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_DLL_VIS
#  define _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS
#  define _LIBCPP_CLASS_TEMPLATE_INSTANTIATION_VIS
#  define _LIBCPP_OVERRIDABLE_FUNC_VIS
#  define _LIBCPP_EXPORTED_FROM_ABI

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_DLL_VIS __declspec(dllexport)

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS _LIBCPP_DLL_VIS
#    define _LIBCPP_CLASS_TEMPLATE_INSTANTIATION_VIS
#  else
#    define _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS
#    define _LIBCPP_CLASS_TEMPLATE_INSTANTIATION_VIS _LIBCPP_DLL_VIS
#  endif
#  define _LIBCPP_OVERRIDABLE_FUNC_VIS _LIBCPP_DLL_VIS
#  define _LIBCPP_EXPORTED_FROM_ABI __declspec(dllexport)
#else
#  define _LIBCPP_DLL_VIS __declspec(dllimport)
#  define _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS _LIBCPP_DLL_VIS
#  define _LIBCPP_CLASS_TEMPLATE_INSTANTIATION_VIS
#  define _LIBCPP_OVERRIDABLE_FUNC_VIS
#  define _LIBCPP_EXPORTED_FROM_ABI __declspec(dllimport)
#endif

#define _LIBCPP_TYPE_VIS            _LIBCPP_DLL_VIS
#define _LIBCPP_FUNC_VIS            _LIBCPP_DLL_VIS
#define _LIBCPP_EXCEPTION_ABI       _LIBCPP_DLL_VIS
#define _LIBCPP_HIDDEN
#define _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
#define _LIBCPP_TEMPLATE_VIS
#define _LIBCPP_ENUM_VIS

#endif // defined(_LIBCPP_OBJECT_FORMAT_COFF)

#ifndef _LIBCPP_HIDDEN

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_HIDDEN __attribute__ ((__visibility__("hidden")))
#  else
#    define _LIBCPP_HIDDEN
#  endif
#endif

#ifndef _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS

#if 0 /* evaluated by -frewrite-includes */
// The inline should be removed once PR32114 is resolved
#    define _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS inline _LIBCPP_HIDDEN
#  else
#    define _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
#  endif
#endif

#ifndef _LIBCPP_FUNC_VIS

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_FUNC_VIS __attribute__ ((__visibility__("default")))
#  else
#    define _LIBCPP_FUNC_VIS
#  endif
#endif

#ifndef _LIBCPP_TYPE_VIS

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_TYPE_VIS __attribute__ ((__visibility__("default")))
#  else
#    define _LIBCPP_TYPE_VIS
#  endif
#endif

#ifndef _LIBCPP_TEMPLATE_VIS

#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#      define _LIBCPP_TEMPLATE_VIS __attribute__ ((__type_visibility__("default")))
#    else
#      define _LIBCPP_TEMPLATE_VIS __attribute__ ((__visibility__("default")))
#    endif
#  else
#    define _LIBCPP_TEMPLATE_VIS
#  endif
#endif

#ifndef _LIBCPP_EXPORTED_FROM_ABI

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_EXPORTED_FROM_ABI __attribute__((__visibility__("default")))
#  else
#    define _LIBCPP_EXPORTED_FROM_ABI
#  endif
#endif

#ifndef _LIBCPP_OVERRIDABLE_FUNC_VIS
#define _LIBCPP_OVERRIDABLE_FUNC_VIS _LIBCPP_FUNC_VIS
#endif

#ifndef _LIBCPP_EXCEPTION_ABI

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_EXCEPTION_ABI __attribute__ ((__visibility__("default")))
#  else
#    define _LIBCPP_EXCEPTION_ABI
#  endif
#endif

#ifndef _LIBCPP_ENUM_VIS

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_ENUM_VIS __attribute__ ((__type_visibility__("default")))
#  else
#    define _LIBCPP_ENUM_VIS
#  endif
#endif

#ifndef _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS __attribute__ ((__visibility__("default")))
#  else
#    define _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS
#  endif
#endif

#ifndef _LIBCPP_CLASS_TEMPLATE_INSTANTIATION_VIS
#define _LIBCPP_CLASS_TEMPLATE_INSTANTIATION_VIS
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_INTERNAL_LINKAGE __attribute__ ((internal_linkage))
#else
#  define _LIBCPP_INTERNAL_LINKAGE _LIBCPP_ALWAYS_INLINE
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION __attribute__ ((__exclude_from_explicit_instantiation__))
#else
   // Try to approximate the effect of exclude_from_explicit_instantiation
   // (which is that entities are not assumed to be provided by explicit
   // template instantiations in the dylib) by always inlining those entities.
#  define _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION _LIBCPP_ALWAYS_INLINE
#endif

#ifndef _LIBCPP_HIDE_FROM_ABI_PER_TU
#  ifndef _LIBCPP_HIDE_FROM_ABI_PER_TU_BY_DEFAULT
#    define _LIBCPP_HIDE_FROM_ABI_PER_TU 0
#  else
#    define _LIBCPP_HIDE_FROM_ABI_PER_TU 1
#  endif
#endif

#ifndef _LIBCPP_HAS_MERGED_TYPEINFO_NAMES_DEFAULT
# ifdef _LIBCPP_OBJECT_FORMAT_COFF // Windows binaries can't merge typeinfos.
# define _LIBCPP_HAS_MERGED_TYPEINFO_NAMES_DEFAULT 0
#else
// TODO: This isn't strictly correct on ELF platforms due to llvm.org/PR37398
// And we should consider defaulting to OFF.
# define _LIBCPP_HAS_MERGED_TYPEINFO_NAMES_DEFAULT 1
#endif
#endif

#ifndef _LIBCPP_HIDE_FROM_ABI

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_HIDE_FROM_ABI _LIBCPP_HIDDEN _LIBCPP_INTERNAL_LINKAGE
#  else
#    define _LIBCPP_HIDE_FROM_ABI _LIBCPP_HIDDEN _LIBCPP_EXCLUDE_FROM_EXPLICIT_INSTANTIATION
#  endif
#endif

#ifdef _LIBCPP_BUILDING_LIBRARY

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_HIDE_FROM_ABI_AFTER_V1 _LIBCPP_HIDE_FROM_ABI
#  else
#    define _LIBCPP_HIDE_FROM_ABI_AFTER_V1
#  endif
#else
#  define _LIBCPP_HIDE_FROM_ABI_AFTER_V1 _LIBCPP_HIDE_FROM_ABI
#endif

// Just so we can migrate to the new macros gradually.
#define _LIBCPP_INLINE_VISIBILITY _LIBCPP_HIDE_FROM_ABI

// Inline namespaces are available in Clang/GCC/MSVC regardless of C++ dialect.
#define _LIBCPP_BEGIN_NAMESPACE_STD namespace std { inline namespace _LIBCPP_ABI_NAMESPACE {
#define _LIBCPP_END_NAMESPACE_STD  } }
#define _VSTD std::_LIBCPP_ABI_NAMESPACE
_LIBCPP_BEGIN_NAMESPACE_STD _LIBCPP_END_NAMESPACE_STD


#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_BEGIN_NAMESPACE_FILESYSTEM \
  _LIBCPP_BEGIN_NAMESPACE_STD inline namespace __fs { namespace filesystem {
#else
#define _LIBCPP_BEGIN_NAMESPACE_FILESYSTEM \
  _LIBCPP_BEGIN_NAMESPACE_STD namespace __fs { namespace filesystem {
#endif

#define _LIBCPP_END_NAMESPACE_FILESYSTEM \
  _LIBCPP_END_NAMESPACE_STD } }

#define _VSTD_FS _VSTD::__fs::filesystem

#ifndef _LIBCPP_PREFERRED_OVERLOAD

#if 1 /* evaluated by -frewrite-includes */
#    define _LIBCPP_PREFERRED_OVERLOAD __attribute__ ((__enable_if__(true, "")))
#  endif
#endif

#ifndef _LIBCPP_HAS_NO_NOEXCEPT
#  define _NOEXCEPT noexcept
#  define _NOEXCEPT_(x) noexcept(x)
#else
#  define _NOEXCEPT throw()
#  define _NOEXCEPT_(x)
#endif

#ifdef _LIBCPP_HAS_NO_UNICODE_CHARS
typedef unsigned short char16_t;
typedef unsigned int   char32_t;
#endif  // _LIBCPP_HAS_NO_UNICODE_CHARS

#ifndef __SIZEOF_INT128__
#define _LIBCPP_HAS_NO_INT128
#endif

#ifdef _LIBCPP_CXX03_LANG
# define static_assert(...) _Static_assert(__VA_ARGS__)
# define decltype(...) __decltype(__VA_ARGS__)
#endif  // _LIBCPP_CXX03_LANG

#ifdef _LIBCPP_CXX03_LANG
#  define _LIBCPP_CONSTEXPR
#else
#  define _LIBCPP_CONSTEXPR constexpr
#endif

#ifdef _LIBCPP_CXX03_LANG
#  define _LIBCPP_DEFAULT {}
#else
#  define _LIBCPP_DEFAULT = default;
#endif

#ifdef _LIBCPP_CXX03_LANG
#  define _LIBCPP_EQUAL_DELETE
#else
#  define _LIBCPP_EQUAL_DELETE = delete
#endif

#ifdef __GNUC__
#  define _LIBCPP_NOALIAS __attribute__((__malloc__))
#else
#  define _LIBCPP_NOALIAS
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_EXPLICIT explicit
#else
#  define _LIBCPP_EXPLICIT
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_BUILTIN_OPERATOR_NEW_DELETE
#endif

#ifdef _LIBCPP_HAS_NO_STRONG_ENUMS
#  define _LIBCPP_DECLARE_STRONG_ENUM(x) struct _LIBCPP_TYPE_VIS x { enum __lx
#  define _LIBCPP_DECLARE_STRONG_ENUM_EPILOG(x) \
     __lx __v_; \
     _LIBCPP_INLINE_VISIBILITY x(__lx __v) : __v_(__v) {} \
     _LIBCPP_INLINE_VISIBILITY explicit x(int __v) : __v_(static_cast<__lx>(__v)) {} \
     _LIBCPP_INLINE_VISIBILITY operator int() const {return __v_;} \
     };
#else  // _LIBCPP_HAS_NO_STRONG_ENUMS
#  define _LIBCPP_DECLARE_STRONG_ENUM(x) enum class _LIBCPP_ENUM_VIS x
#  define _LIBCPP_DECLARE_STRONG_ENUM_EPILOG(x)
#endif  // _LIBCPP_HAS_NO_STRONG_ENUMS

#ifdef _LIBCPP_DISABLE_EXTERN_TEMPLATE
#define _LIBCPP_EXTERN_TEMPLATE(...)
#define _LIBCPP_EXTERN_TEMPLATE2(...)
#endif

#ifndef _LIBCPP_EXTERN_TEMPLATE
#define _LIBCPP_EXTERN_TEMPLATE(...) extern template __VA_ARGS__;
#endif

#ifndef _LIBCPP_EXTERN_TEMPLATE2
#define _LIBCPP_EXTERN_TEMPLATE2(...) extern template __VA_ARGS__;
#endif


#if 1 /* evaluated by -frewrite-includes */
#ifndef NXDK
#define _LIBCPP_LOCALE__L_EXTENSIONS 1
#endif
#endif


#if 0 /* evaluated by -frewrite-includes */
// Most unix variants have catopen.  These are the specific ones that don't.

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_HAS_CATOPEN 1
#  endif
#endif

#ifdef __FreeBSD__
#define _DECLARE_C99_LDBL_MATH 1
#endif

// If we are getting operator new from the MSVC CRT, then allocation overloads
// for align_val_t were added in 19.12, aka VS 2017 version 15.3.

#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_HAS_NO_LIBRARY_ALIGNED_ALLOCATION

#elif 0 /* evaluated by -frewrite-includes */
   // We're deferring to Microsoft's STL to provide aligned new et al. We don't
   // have it unless the language feature test macro is defined.
#  define _LIBCPP_HAS_NO_LIBRARY_ALIGNED_ALLOCATION
#endif


#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#    define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#  endif
#endif // defined(__APPLE__)


#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_HAS_NO_ALIGNED_ALLOCATION
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_DEFAULTRUNELOCALE
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_WCTYPE_IS_MASK
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_NO_HAS_CHAR8_T
#endif

// Deprecation macros.
//
// Deprecations warnings are always enabled, except when users explicitly opt-out
// by defining _LIBCPP_DISABLE_DEPRECATION_WARNINGS.

#if 1 /* evaluated by -frewrite-includes */

#if 1 /* evaluated by -frewrite-includes */
#    define _LIBCPP_DEPRECATED __attribute__ ((deprecated))

#elif 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_DEPRECATED [[deprecated]]
#  else
#    define _LIBCPP_DEPRECATED
#  endif
#else
#  define _LIBCPP_DEPRECATED
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_DEPRECATED_IN_CXX11 _LIBCPP_DEPRECATED
#else
#  define _LIBCPP_DEPRECATED_IN_CXX11
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_DEPRECATED_IN_CXX14 _LIBCPP_DEPRECATED
#else
#  define _LIBCPP_DEPRECATED_IN_CXX14
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_DEPRECATED_IN_CXX17 _LIBCPP_DEPRECATED
#else
#  define _LIBCPP_DEPRECATED_IN_CXX17
#endif


#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_EXPLICIT_AFTER_CXX11
#else
#  define _LIBCPP_EXPLICIT_AFTER_CXX11 explicit
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_CONSTEXPR_AFTER_CXX11 constexpr
#else
#  define _LIBCPP_CONSTEXPR_AFTER_CXX11
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_CONSTEXPR_AFTER_CXX14 constexpr
#else
#  define _LIBCPP_CONSTEXPR_AFTER_CXX14
#endif


#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_CONSTEXPR_AFTER_CXX17 constexpr
#else
#  define _LIBCPP_CONSTEXPR_AFTER_CXX17
#endif

// The _LIBCPP_NODISCARD_ATTRIBUTE should only be used to define other
// NODISCARD macros to the correct attribute.

#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_NODISCARD_ATTRIBUTE [[nodiscard]]

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_NODISCARD_ATTRIBUTE [[clang::warn_unused_result]]
#else
// We can't use GCC's [[gnu::warn_unused_result]] and
// __attribute__((warn_unused_result)), because GCC does not silence them via
// (void) cast.
#  define _LIBCPP_NODISCARD_ATTRIBUTE
#endif

// _LIBCPP_NODISCARD_EXT may be used to apply [[nodiscard]] to entities not
// specified as such as an extension.

#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_NODISCARD_EXT _LIBCPP_NODISCARD_ATTRIBUTE
#else
#  define _LIBCPP_NODISCARD_EXT
#endif


#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_NODISCARD_ATTRIBUTE
#else
#  define _LIBCPP_NODISCARD_AFTER_CXX17
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_INLINE_VAR inline
#else
#  define _LIBCPP_INLINE_VAR
#endif

#ifdef _LIBCPP_HAS_NO_RVALUE_REFERENCES
#  define _LIBCPP_EXPLICIT_MOVE(x) _VSTD::move(x)
#else
#  define _LIBCPP_EXPLICIT_MOVE(x) (x)
#endif

#ifndef _LIBCPP_CONSTEXPR_IF_NODEBUG

#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_CONSTEXPR_IF_NODEBUG
#else
#define _LIBCPP_CONSTEXPR_IF_NODEBUG constexpr
#endif
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_NO_DESTROY __attribute__((__no_destroy__))
#else
#  define _LIBCPP_NO_DESTROY
#endif

#ifndef _LIBCPP_HAS_NO_ASAN
_LIBCPP_FUNC_VIS extern "C" void __sanitizer_annotate_contiguous_container(
  const void *, const void *, const void *, const void *);
#endif

// Try to find out if RTTI is disabled.
// g++ and cl.exe have RTTI on by default and define a macro when it is.
// g++ only defines the macro in 4.3.2 and onwards.

#if 1 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_NO_RTTI

#elif 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_NO_RTTI
#  endif
#endif

#ifndef _LIBCPP_WEAK
#define _LIBCPP_WEAK __attribute__((__weak__))
#endif

// Thread API

#if 1 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_HAS_THREAD_API_PTHREAD

#elif 1 /* evaluated by -frewrite-includes */
#    define _LIBCPP_HAS_THREAD_API_WIN32
#  else
#    error "No thread API"
#  endif // _LIBCPP_HAS_THREAD_API
#endif // _LIBCPP_HAS_NO_THREADS


#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_COND_CLOCKWAIT

#elif 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_COND_CLOCKWAIT
#endif
#endif
#endif


#if 0 /* evaluated by -frewrite-includes */
#error _LIBCPP_HAS_THREAD_API_PTHREAD may only be defined when \
       _LIBCPP_HAS_NO_THREADS is not defined.
#endif


#if 0 /* evaluated by -frewrite-includes */
#error _LIBCPP_HAS_THREAD_API_EXTERNAL may not be defined when \
       _LIBCPP_HAS_NO_THREADS is defined.
#endif


#if 0 /* evaluated by -frewrite-includes */
#error _LIBCPP_HAS_NO_MONOTONIC_CLOCK may only be defined when \
       _LIBCPP_HAS_NO_THREADS is defined.
#endif


#if 0 /* evaluated by -frewrite-includes */
#error _LIBCPP_HAS_NO_THREADS cannot be set when __STDCPP_THREADS__ is set.
#endif


#if 0 /* evaluated by -frewrite-includes */
#define __STDCPP_THREADS__ 1
#endif

// The glibc and Bionic implementation of pthreads implements
// pthread_mutex_destroy as nop for regular mutexes. Additionally, Win32
// mutexes have no destroy mechanism.
//
// This optimization can't be performed on Apple platforms, where
// pthread_mutex_destroy can allow the kernel to release resources.
// See https://llvm.org/D64298 for details.
//
// TODO(EricWF): Enable this optimization on Bionic after speaking to their
//               respective stakeholders.

#if 1 /* evaluated by -frewrite-includes */
# define _LIBCPP_HAS_TRIVIAL_MUTEX_DESTRUCTION
#endif

// Destroying a condvar is a nop on Windows.
//
// This optimization can't be performed on Apple platforms, where
// pthread_cond_destroy can allow the kernel to release resources.
// See https://llvm.org/D64298 for details.
//
// TODO(EricWF): This is potentially true for some pthread implementations
// as well.

#if 1 /* evaluated by -frewrite-includes */
# define _LIBCPP_HAS_TRIVIAL_CONDVAR_DESTRUCTION
#endif


// Some systems do not provide gets() in their C library, for security reasons.
#ifndef _LIBCPP_C_HAS_NO_GETS

#if 1 /* evaluated by -frewrite-includes */
#    define _LIBCPP_C_HAS_NO_GETS
#  endif
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_PROVIDES_DEFAULT_RUNE_TABLE
#endif

// Thread-unsafe functions such as strtok() and localtime()
// are not available.
#ifdef __CloudABI__
#define _LIBCPP_HAS_NO_THREAD_UNSAFE_C_FUNCTIONS
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_HAS_C_ATOMIC_IMP

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_HAS_GCC_ATOMIC_IMP
#endif


#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_HAS_NO_ATOMIC_HEADER
#else
#  ifndef _LIBCPP_ATOMIC_FLAG_TYPE
#    define _LIBCPP_ATOMIC_FLAG_TYPE bool
#  endif
#  ifdef _LIBCPP_FREESTANDING
#    define _LIBCPP_ATOMIC_ONLY_USE_BUILTINS
#  endif
#endif

#ifndef _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK
#define _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK
#endif


#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
// Work around the attribute handling in clang.  When both __declspec and
// __attribute__ are present, the processing goes awry preventing the definition
// of the types.

#if 0 /* evaluated by -frewrite-includes */
#      define _LIBCPP_HAS_THREAD_SAFETY_ANNOTATIONS
#    endif
#  endif
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_SAFE_STATIC __attribute__((__require_constant_initialization__))
#else
#  define _LIBCPP_SAFE_STATIC
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_BUILTIN_ADDRESSOF
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_BUILTIN_IS_CONSTANT_EVALUATED
#endif


#if 1 /* evaluated by -frewrite-includes */

#if 1 /* evaluated by -frewrite-includes */
#    define _LIBCPP_HAS_NO_OFF_T_FUNCTIONS
#  endif
#endif


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_DIAGNOSE_WARNING(...) \
     __attribute__((diagnose_if(__VA_ARGS__, "warning")))
#  define _LIBCPP_DIAGNOSE_ERROR(...) \
     __attribute__((diagnose_if(__VA_ARGS__, "error")))
#else
#  define _LIBCPP_DIAGNOSE_WARNING(...)
#  define _LIBCPP_DIAGNOSE_ERROR(...)
#endif

// Use a function like macro to imply that it must be followed by a semicolon

#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_FALLTHROUGH() [[fallthrough]]

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_FALLTHROUGH() [[clang::fallthrough]]

#elif 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_FALLTHROUGH() __attribute__((__fallthrough__))
#else
#  define _LIBCPP_FALLTHROUGH() ((void)0)
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_NODEBUG __attribute__((__nodebug__))
#else
#define _LIBCPP_NODEBUG
#endif

#ifndef _LIBCPP_NODEBUG_TYPE

#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_NODEBUG_TYPE __attribute__((nodebug))
#else
#define _LIBCPP_NODEBUG_TYPE
#endif
#endif // !defined(_LIBCPP_NODEBUG_TYPE)


#if 1 /* evaluated by -frewrite-includes */
#  define _LIBCPP_DECLSPEC_EMPTY_BASES __declspec(empty_bases)
#else
#  define _LIBCPP_DECLSPEC_EMPTY_BASES
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_ENABLE_CXX17_REMOVED_AUTO_PTR
#define _LIBCPP_ENABLE_CXX17_REMOVED_UNEXPECTED_FUNCTIONS
#define _LIBCPP_ENABLE_CXX17_REMOVED_RANDOM_SHUFFLE
#define _LIBCPP_ENABLE_CXX17_REMOVED_BINDERS
#endif // _LIBCPP_ENABLE_CXX17_REMOVED_FEATURES


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_DEDUCTION_GUIDES
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_IS_AGGREGATE
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_COROUTINES
#endif

// FIXME: Correct this macro when either (A) a feature test macro for the
// spaceship operator is provided, or (B) a compiler provides a complete
// implementation.
#define _LIBCPP_HAS_NO_SPACESHIP_OPERATOR

// Decide whether to use availability macros.

#if 0 /* evaluated by -frewrite-includes */
#  ifdef __APPLE__
#    define _LIBCPP_USE_AVAILABILITY_APPLE
#  endif
#endif

// Define availability macros.

#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_AVAILABILITY_SHARED_MUTEX                                    \
     __attribute__((availability(macosx,strict,introduced=10.12)))             \
     __attribute__((availability(ios,strict,introduced=10.0)))                 \
     __attribute__((availability(tvos,strict,introduced=10.0)))                \
     __attribute__((availability(watchos,strict,introduced=3.0)))
#  define _LIBCPP_AVAILABILITY_BAD_OPTIONAL_ACCESS                             \
     __attribute__((availability(macosx,strict,introduced=10.14)))             \
     __attribute__((availability(ios,strict,introduced=12.0)))                 \
     __attribute__((availability(tvos,strict,introduced=12.0)))                \
     __attribute__((availability(watchos,strict,introduced=5.0)))
#  define _LIBCPP_AVAILABILITY_BAD_VARIANT_ACCESS                              \
     _LIBCPP_AVAILABILITY_BAD_OPTIONAL_ACCESS
#  define _LIBCPP_AVAILABILITY_BAD_ANY_CAST                                    \
     _LIBCPP_AVAILABILITY_BAD_OPTIONAL_ACCESS
#  define _LIBCPP_AVAILABILITY_UNCAUGHT_EXCEPTIONS                             \
     __attribute__((availability(macosx,strict,introduced=10.12)))             \
     __attribute__((availability(ios,strict,introduced=10.0)))                 \
     __attribute__((availability(tvos,strict,introduced=10.0)))                \
     __attribute__((availability(watchos,strict,introduced=3.0)))
#  define _LIBCPP_AVAILABILITY_SIZED_NEW_DELETE                                \
     __attribute__((availability(macosx,strict,introduced=10.12)))             \
     __attribute__((availability(ios,strict,introduced=10.0)))                 \
     __attribute__((availability(tvos,strict,introduced=10.0)))                \
     __attribute__((availability(watchos,strict,introduced=3.0)))
#  define _LIBCPP_AVAILABILITY_FUTURE_ERROR                                    \
     __attribute__((availability(ios,strict,introduced=6.0)))
#  define _LIBCPP_AVAILABILITY_TYPEINFO_VTABLE                                 \
     __attribute__((availability(macosx,strict,introduced=10.9)))              \
     __attribute__((availability(ios,strict,introduced=7.0)))
#  define _LIBCPP_AVAILABILITY_LOCALE_CATEGORY                                 \
     __attribute__((availability(macosx,strict,introduced=10.9)))              \
     __attribute__((availability(ios,strict,introduced=7.0)))
#  define _LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR                               \
     __attribute__((availability(macosx,strict,introduced=10.9)))              \
     __attribute__((availability(ios,strict,introduced=7.0)))
#  define _LIBCPP_AVAILABILITY_FILESYSTEM                                      \
     __attribute__((availability(macosx,strict,introduced=10.15)))             \
     __attribute__((availability(ios,strict,introduced=13.0)))                 \
     __attribute__((availability(tvos,strict,introduced=13.0)))                \
     __attribute__((availability(watchos,strict,introduced=6.0)))
#  define _LIBCPP_AVAILABILITY_FILESYSTEM_PUSH                                 \
     _Pragma("clang attribute push(__attribute__((availability(macosx,strict,introduced=10.15))), apply_to=any(function,record))") \
     _Pragma("clang attribute push(__attribute__((availability(ios,strict,introduced=13.0))), apply_to=any(function,record))")     \
     _Pragma("clang attribute push(__attribute__((availability(tvos,strict,introduced=13.0))), apply_to=any(function,record))")    \
     _Pragma("clang attribute push(__attribute__((availability(watchos,strict,introduced=6.0))), apply_to=any(function,record))")
#  define _LIBCPP_AVAILABILITY_FILESYSTEM_POP                                  \
     _Pragma("clang attribute pop")                                            \
     _Pragma("clang attribute pop")                                            \
     _Pragma("clang attribute pop")                                            \
     _Pragma("clang attribute pop")
#else
#  define _LIBCPP_AVAILABILITY_SHARED_MUTEX
#  define _LIBCPP_AVAILABILITY_BAD_VARIANT_ACCESS
#  define _LIBCPP_AVAILABILITY_BAD_OPTIONAL_ACCESS
#  define _LIBCPP_AVAILABILITY_BAD_ANY_CAST
#  define _LIBCPP_AVAILABILITY_UNCAUGHT_EXCEPTIONS
#  define _LIBCPP_AVAILABILITY_SIZED_NEW_DELETE
#  define _LIBCPP_AVAILABILITY_FUTURE_ERROR
#  define _LIBCPP_AVAILABILITY_TYPEINFO_VTABLE
#  define _LIBCPP_AVAILABILITY_LOCALE_CATEGORY
#  define _LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR
#  define _LIBCPP_AVAILABILITY_FILESYSTEM
#  define _LIBCPP_AVAILABILITY_FILESYSTEM_PUSH
#  define _LIBCPP_AVAILABILITY_FILESYSTEM_POP
#endif

// Define availability that depends on _LIBCPP_NO_EXCEPTIONS.
#ifdef _LIBCPP_NO_EXCEPTIONS
#  define _LIBCPP_AVAILABILITY_FUTURE
#  define _LIBCPP_AVAILABILITY_THROW_BAD_ANY_CAST
#  define _LIBCPP_AVAILABILITY_THROW_BAD_OPTIONAL_ACCESS
#  define _LIBCPP_AVAILABILITY_THROW_BAD_VARIANT_ACCESS
#else
#  define _LIBCPP_AVAILABILITY_FUTURE                    _LIBCPP_AVAILABILITY_FUTURE_ERROR
#  define _LIBCPP_AVAILABILITY_THROW_BAD_ANY_CAST        _LIBCPP_AVAILABILITY_BAD_ANY_CAST
#  define _LIBCPP_AVAILABILITY_THROW_BAD_OPTIONAL_ACCESS _LIBCPP_AVAILABILITY_BAD_OPTIONAL_ACCESS
#  define _LIBCPP_AVAILABILITY_THROW_BAD_VARIANT_ACCESS  _LIBCPP_AVAILABILITY_BAD_VARIANT_ACCESS
#endif

// The stream API was dropped and re-added in the dylib shipped on macOS
// and iOS. We can only assume the dylib to provide these definitions for
// macosx >= 10.9 and ios >= 7.0. Otherwise, the definitions are available
// from the headers, but not from the dylib. Explicit instantiation
// declarations for streams exist conditionally to this; if we provide
// an explicit instantiation declaration and we try to deploy to a dylib
// that does not provide those symbols, we'll get a load-time error.

#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_DO_NOT_ASSUME_STREAMS_EXPLICIT_INSTANTIATION_IN_DYLIB
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_PRAGMA_PUSH_POP_MACRO
#endif


#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_PUSH_MACROS
#  define _LIBCPP_POP_MACROS
#else
  // Don't warn about macro conflicts when we can restore them at the
  // end of the header.
#  ifndef _LIBCPP_DISABLE_MACRO_CONFLICT_WARNINGS
#    define _LIBCPP_DISABLE_MACRO_CONFLICT_WARNINGS
#  endif

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_PUSH_MACROS    \
       __pragma(push_macro("min")) \
       __pragma(push_macro("max"))
#    define _LIBCPP_POP_MACROS     \
       __pragma(pop_macro("min"))  \
       __pragma(pop_macro("max"))
#  else
#    define _LIBCPP_PUSH_MACROS        \
       _Pragma("push_macro(\"min\")")  \
       _Pragma("push_macro(\"max\")")
#    define _LIBCPP_POP_MACROS         \
       _Pragma("pop_macro(\"min\")")   \
       _Pragma("pop_macro(\"max\")")
#  endif
#endif // defined(_LIBCPP_HAS_NO_PRAGMA_PUSH_POP_MACRO)

#ifndef _LIBCPP_NO_AUTO_LINK

#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#      pragma comment(lib, "c++.lib")
#    else
#      pragma comment(lib, "libc++.lib")
#    endif
#  endif // defined(_LIBCPP_ABI_MICROSOFT) && !defined(_LIBCPP_BUILDING_LIBRARY)
#endif // _LIBCPP_NO_AUTO_LINK

#define _LIBCPP_UNUSED_VAR(x) ((void)(x))

// Configures the fopen close-on-exec mode character, if any. This string will
// be appended to any mode string used by fstream for fopen/fdopen.
//
// Not all platforms support this, but it helps avoid fd-leaks on platforms that
// do.

#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_FOPEN_CLOEXEC_MODE "e"
#else
#  define _LIBCPP_FOPEN_CLOEXEC_MODE
#endif

#endif // __cplusplus

#endif // _LIBCPP_CONFIG

#ifndef _LIBCPP_STRING_VIEW
#define _LIBCPP_STRING_VIEW

#ifndef _LIBCPP___STRING
#define _LIBCPP___STRING




// -*- C++ -*-
//===-------------------------- algorithm ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_ALGORITHM
#define _LIBCPP_ALGORITHM



// -*- C++ -*-
//===----------------------- initializer_list -----------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_INITIALIZER_LIST
#define _LIBCPP_INITIALIZER_LIST




// -*- C++ -*-
//===--------------------------- cstddef ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_CSTDDEF
#define _LIBCPP_CSTDDEF

/*
    cstddef synopsis

Macros:

    offsetof(type,member-designator)
    NULL

namespace std
{

Types:

    ptrdiff_t
    size_t
    max_align_t
    nullptr_t
    byte // C++17

}  // std

*/



// -*- C++ -*-
//===--------------------------- version ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_VERSIONH
#define _LIBCPP_VERSIONH




#if 1 /* evaluated by -frewrite-includes */

#endif


#if 1 /* evaluated by -frewrite-includes */
# define __cpp_lib_chrono_udls                          201304L
# define __cpp_lib_complex_udls                         201309L
# define __cpp_lib_exchange_function                    201304L
# define __cpp_lib_generic_associative_lookup           201304L
# define __cpp_lib_integer_sequence                     201304L
# define __cpp_lib_integral_constant_callable           201304L
# define __cpp_lib_is_final                             201402L
# define __cpp_lib_is_null_pointer                      201309L
# define __cpp_lib_make_reverse_iterator                201402L
# define __cpp_lib_make_unique                          201304L
# define __cpp_lib_null_iterators                       201304L
# define __cpp_lib_quoted_string_io                     201304L
# define __cpp_lib_result_of_sfinae                     201210L
# define __cpp_lib_robust_nonmodifying_seq_ops          201304L

#if 1 /* evaluated by -frewrite-includes */
#   define __cpp_lib_shared_timed_mutex                 201402L
# endif
# define __cpp_lib_string_udls                          201304L
# define __cpp_lib_transformation_trait_aliases         201304L
# define __cpp_lib_transparent_operators                201210L
# define __cpp_lib_tuple_element_t                      201402L
# define __cpp_lib_tuples_by_type                       201304L
#endif


#if 1 /* evaluated by -frewrite-includes */

#if 1 /* evaluated by -frewrite-includes */
#   define __cpp_lib_addressof_constexpr                201603L
# endif
# define __cpp_lib_allocator_traits_is_always_equal     201411L
# define __cpp_lib_any                                  201606L
# define __cpp_lib_apply                                201603L
# define __cpp_lib_array_constexpr                      201603L
# define __cpp_lib_as_const                             201510L

#if 1 /* evaluated by -frewrite-includes */
#   define __cpp_lib_atomic_is_always_lock_free         201603L
# endif
# define __cpp_lib_bool_constant                        201505L
// # define __cpp_lib_boyer_moore_searcher                 201603L
# define __cpp_lib_byte                                 201603L
# define __cpp_lib_chrono                               201611L
# define __cpp_lib_clamp                                201603L
# define __cpp_lib_enable_shared_from_this              201603L
// # define __cpp_lib_execution                            201603L
# define __cpp_lib_filesystem                           201703L
# define __cpp_lib_gcd_lcm                              201606L
# define __cpp_lib_hardware_interference_size           201703L

#if 1 /* evaluated by -frewrite-includes */
#   define __cpp_lib_has_unique_object_representations  201606L
# endif
# define __cpp_lib_hypot                                201603L
# define __cpp_lib_incomplete_container_elements        201505L
# define __cpp_lib_invoke                               201411L

#if 1 /* evaluated by -frewrite-includes */
#   define __cpp_lib_is_aggregate                       201703L
# endif
# define __cpp_lib_is_invocable                         201703L
# define __cpp_lib_is_swappable                         201603L
# define __cpp_lib_launder                              201606L
# define __cpp_lib_logical_traits                       201510L
# define __cpp_lib_make_from_tuple                      201606L
# define __cpp_lib_map_try_emplace                      201411L
// # define __cpp_lib_math_special_functions               201603L
// # define __cpp_lib_memory_resource                      201603L
# define __cpp_lib_node_extract                         201606L
# define __cpp_lib_nonmember_container_access           201411L
# define __cpp_lib_not_fn                               201603L
# define __cpp_lib_optional                             201606L
// # define __cpp_lib_parallel_algorithm                   201603L
# define __cpp_lib_raw_memory_algorithms                201606L
# define __cpp_lib_sample                               201603L
# define __cpp_lib_scoped_lock                          201703L

#if 1 /* evaluated by -frewrite-includes */
#   define __cpp_lib_shared_mutex                       201505L
# endif
// # define __cpp_lib_shared_ptr_arrays                    201611L
# define __cpp_lib_shared_ptr_weak_type                 201606L
# define __cpp_lib_string_view                          201606L
// # define __cpp_lib_to_chars                             201611L
# undef  __cpp_lib_transparent_operators
# define __cpp_lib_transparent_operators                201510L
# define __cpp_lib_type_trait_variable_templates        201510L
# define __cpp_lib_uncaught_exceptions                  201411L
# define __cpp_lib_unordered_map_try_emplace            201411L
# define __cpp_lib_variant                              201606L
# define __cpp_lib_void_t                               201411L
#endif


#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
// #   define __cpp_lib_atomic_ref                         201806L
# endif
// # define __cpp_lib_bind_front                           201811L
// # define __cpp_lib_bit_cast                             201806L

#if 0 /* evaluated by -frewrite-includes */
#   define __cpp_lib_char8_t                            201811L
# endif
// # define __cpp_lib_concepts                             201806L
// # define __cpp_lib_constexpr_misc                       201811L
// # define __cpp_lib_constexpr_swap_algorithms            201806L

#if 0 /* evaluated by -frewrite-includes */
#   define __cpp_lib_destroying_delete                  201806L
# endif
# define __cpp_lib_erase_if                             201811L
// # define __cpp_lib_generic_unordered_lookup             201811L
# define __cpp_lib_interpolate                          201902L

#if 0 /* evaluated by -frewrite-includes */
#   define __cpp_lib_is_constant_evaluated              201811L
# endif
// # define __cpp_lib_list_remove_return_type              201806L
// # define __cpp_lib_ranges                               201811L
// # define __cpp_lib_three_way_comparison                 201711L
#endif

#endif // _LIBCPP_VERSIONH


#if 1 /* evaluated by -frewrite-includes */

#endif

// Don't include our own <stddef.h>; we don't want to declare ::nullptr_t.

/* Common definitions <stddef.h>

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef _PDCLIB_STDDEF_H
#define _PDCLIB_STDDEF_H _PDCLIB_STDDEF_H

#ifdef __cplusplus
extern "C" {
#endif


/* __STDC_WANT_LIB_EXT1__ redefinition guard

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef __STDC_WANT_LIB_EXT1__
  #ifdef __STDC_WANT_LIB_EXT1_PREVIOUS__


#if 0 /* evaluated by -frewrite-includes */
      #error __STDC_WANT_LIB_EXT1__ undefined when it was defined earlier.
    #endif
  #else
    #define __STDC_WANT_LIB_EXT1_PREVIOUS__ -1
  #endif
#else


#if 0 /* evaluated by -frewrite-includes */
    #error __STDC_WANT_LIB_EXT1__ defined but empty. Should be an integer value.
  #endif
  #ifdef __STDC_WANT_LIB_EXT1_PREVIOUS__


#if 0 /* evaluated by -frewrite-includes */
      #error __STDC_WANT_LIB_EXT1__ redefined from previous value.
    #endif
  #else


#if 0 /* evaluated by -frewrite-includes */
      #define __STDC_WANT_LIB_EXT1_PREVIOUS__ 0


#elif 0 /* evaluated by -frewrite-includes */
      #define __STDC_WANT_LIB_EXT1_PREVIOUS__ 1
    #else
      #error __STDC_WANT_LIB_EXT1__ set to value other than 0,1 -- undefined behavior
    #endif
  #endif
#endif

/* PDCLib internal integer logic <_PDCLIB_int.h>

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef _PDCLIB_INT_H
#define _PDCLIB_INT_H _PDCLIB_INT_H

/* -------------------------------------------------------------------------- */
/* You should not have to edit anything in this file; if you DO have to, it   */
/* would be considered a bug / missing feature: notify the author(s).         */
/* -------------------------------------------------------------------------- */


/* Internal PDCLib configuration <_PDCLIB_config.h>
   (Generic Template)

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef _PDCLIB_CONFIG_H
#define _PDCLIB_CONFIG_H _PDCLIB_CONFIG_H

/* -------------------------------------------------------------------------- */
/* Misc                                                                       */
/* -------------------------------------------------------------------------- */


/* Define this to some compiler directive that can be written after the       */
/* parameter list of a function declaration to indicate the function does     */
/* never return. If your compiler does not support such a directive, define   */
/* to nothing. (This is to avoid warnings with the exit functions under GCC.) */
#define _PDCLIB_NORETURN __attribute__(( noreturn ))

/* -------------------------------------------------------------------------- */
/* Symbol Visibility                                                          */
/* -------------------------------------------------------------------------- */
#define _PDCLIB_PUBLIC
#define _PDCLIB_LOCAL

/* -------------------------------------------------------------------------- */
/* Integers                                                                   */
/* -------------------------------------------------------------------------- */
/* Assuming 8-bit char, two's-complement architecture here. 'short' being     */
/* 16 bit, 'int' being either 16, 32 or 64 bit, 'long' being either 32 or 64  */
/* bit (but 64 bit only if 'int' is 32 bit), and 'long long' being 64 bit if  */
/* 'long' is not, 64 or 128 bit otherwise.                                    */
/* Author is quite willing to support other systems but would like to hear of */
/* interest in such support and details on the to-be-supported architecture   */
/* first, before going to lengths about it.                                   */
/* -------------------------------------------------------------------------- */

/* Set to 0 if your 'char' type is unsigned.                                  */
#ifdef __CHAR_UNSIGNED__
#define _PDCLIB_CHAR_SIGNED 0
#else
#define _PDCLIB_CHAR_SIGNED 1
#endif

/* Width of the integer types short, int, long, and long long, in bytes.      */
/* SHRT == 2, INT >= SHRT, LONG >= INT >= 4, LLONG >= LONG - check your       */
/* compiler manuals.                                                          */
#define _PDCLIB_SHRT_BYTES  2
#define _PDCLIB_INT_BYTES   4
#ifdef __LP64__
#define _PDCLIB_LONG_BYTES  8
#else
#define _PDCLIB_LONG_BYTES  4
#endif
#define _PDCLIB_LLONG_BYTES 8

/* <stdlib.h> defines the div() function family that allows taking quotient   */
/* and remainder of an integer division in one operation. Many platforms      */
/* support this in hardware / opcode, and the standard permits ordering of    */
/* the return structure in any way to fit the hardware. That is why those     */
/* structs can be configured here.                                            */

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


#define _PDCLIB_FAST8 INT
#define _PDCLIB_fast8 int
#define _PDCLIB_FAST8_CONV

#define _PDCLIB_FAST16 INT
#define _PDCLIB_fast16 int
#define _PDCLIB_FAST16_CONV

#define _PDCLIB_FAST32 INT
#define _PDCLIB_fast32 int
#define _PDCLIB_FAST32_CONV

#define _PDCLIB_FAST64 LONG
#define _PDCLIB_fast64 long
#define _PDCLIB_FAST64_CONV l

/* -------------------------------------------------------------------------- */
/* What follows are a couple of "special" typedefs and their limits. Again,   */
/* the actual definition of the limits is done in <_PDCLIB_int.h>, and the    */
/* defines here are merely "configuration". See above for details.            */
/* -------------------------------------------------------------------------- */

/* The result type of substracting two pointers */
#define _PDCLIB_ptrdiff int
#define _PDCLIB_PTRDIFF INT
#define _PDCLIB_PTR_CONV l

/* An integer type that can be accessed as atomic entity (think asynchronous
   interrupts). The type itself is not defined in a freestanding environment,
   but its limits are. (Don't ask.)
*/
#define _PDCLIB_sig_atomic int
#define _PDCLIB_SIG_ATOMIC INT

/* Result type of the 'sizeof' operator (must be unsigned) */
#define _PDCLIB_size unsigned int
#define _PDCLIB_SIZE UINT

/* Large enough an integer to hold all character codes of the largest supported
   locale.
*/
#define _PDCLIB_wchar unsigned short
#define _PDCLIB_WCHAR UINT16

/* Large enough an integer to hold all character codes of the largest supported
   locale plus WEOF (which needs not to be equal to EOF, nor needs to be of
   negative value).
*/
#define _PDCLIB_wint unsigned short
#define _PDCLIB_WINT UINT16

/* (Signed) integer type capable of taking the (cast) value of a void *, and
   having the value cast back to void *, comparing equal to the original.
*/
#define _PDCLIB_intptr long
#define _PDCLIB_INTPTR LONG

/* Largest supported integer type. Implementation note: see _PDCLIB_atomax(). */
#define _PDCLIB_intmax long long int
#define _PDCLIB_INTMAX LLONG
#define _PDCLIB_MAX_CONV ll
/* You are also required to state the literal suffix for the intmax type      */
#define _PDCLIB_INTMAX_LITERAL ll

/* <inttypes.h> defines imaxdiv(), which is equivalent to the div() function  */
/* family (see further above) with intmax_t as basis.                         */

struct _PDCLIB_imaxdiv_t
{
    _PDCLIB_intmax quot;
    _PDCLIB_intmax rem;
};

/* -------------------------------------------------------------------------- */
/* Time types                                                                 */
/* -------------------------------------------------------------------------- */

/* See <time.h> for a couple of comments on these types and their semantics. */

#define _PDCLIB_time long

#define _PDCLIB_clock unsigned int
#define _PDCLIB_CLOCKS_PER_SEC 1000

#define _PDCLIB_TIME_UTC 1

/* -------------------------------------------------------------------------- */
/* Floating Point                                                             */
/* -------------------------------------------------------------------------- */

/* Whether the implementation rounds toward zero (0), to nearest (1), toward
   positive infinity (2), or toward negative infinity (3). (-1) signifies
   indeterminable rounding, any other value implementation-specific rounding.
*/
#define _PDCLIB_FLT_ROUNDS -1

/* Whether the implementation uses exact-width precision (0), promotes float
   to double (1), or promotes float and double to long double (2). (-1)
   signifies indeterminable behaviour, any other value implementation-specific
   behaviour.
*/
#define _PDCLIB_FLT_EVAL_METHOD -1

/* "Number of the decimal digits (n), such that any floating-point number in the
   widest supported floating type with p(max) radix (b) digits can be rounded to
   a floating-point number with (n) decimal digits and back again without change
   to the value p(max) log(10)b if (b) is a power of 10, [1 + p(max) log(10)b]
   otherwise."
   64bit IEC 60559 double format (53bit mantissa) is DECIMAL_DIG 17.
   80bit IEC 60559 double-extended format (64bit mantissa) is DECIMAL_DIG 21.
*/
#define _PDCLIB_DECIMAL_DIG 17

/* -------------------------------------------------------------------------- */
/* Platform-dependent macros defined by the standard headers.                 */
/* -------------------------------------------------------------------------- */

/* The offsetof macro
   Contract: Expand to an integer constant expression of type size_t, which
   represents the offset in bytes to the structure member from the beginning
   of the structure. If the specified member is a bitfield, behaviour is
   undefined.
   There is no standard-compliant way to do this.
   This implementation casts an integer zero to 'pointer to type', and then
   takes the address of member. This is undefined behaviour but should work on
   most compilers.
*/
#define _PDCLIB_offsetof( type, member ) __builtin_offsetof( type, member )

/* Variable Length Parameter List Handling (<stdarg.h>)
   The macros defined by <stdarg.h> are highly dependent on the calling
   conventions used, and you probably have to replace them with builtins of
   your compiler.
*/

typedef __builtin_va_list _PDCLIB_va_list;
#define _PDCLIB_va_arg __builtin_va_arg
#define _PDCLIB_va_copy __builtin_va_copy
#define _PDCLIB_va_end __builtin_va_end
#define _PDCLIB_va_start __builtin_va_start

/* -------------------------------------------------------------------------- */
/* OS "glue", part 1                                                          */
/* These are values and data type definitions that you would have to adapt to */
/* the capabilities and requirements of your OS.                              */
/* The actual *functions* of the OS interface are declared in _PDCLIB_glue.h. */
/* -------------------------------------------------------------------------- */

/* Memory management -------------------------------------------------------- */

/* Set this to the page size of your OS. If your OS does not support paging, set
   to an appropriate value. (Too small, and malloc() will call the kernel too
   often. Too large, and you will waste memory.)
*/
#define _PDCLIB_PAGESIZE 4096

/* Set this to the minimum memory node size. Any malloc() for a smaller size
   will be satisfied by a malloc() of this size instead (to avoid excessive
   fragmentation).
*/
#define _PDCLIB_MINALLOC 8

/* I/O ---------------------------------------------------------------------- */

/* The type of the file descriptor returned by _PDCLIB_open(). */
/* It has to match the winapi HANDLE type                      */
typedef void *_PDCLIB_fd_t;

/* The value (of type _PDCLIB_fd_t) returned by _PDCLIB_open() if the operation
   failed.
*/
#define _PDCLIB_NOHANDLE ( (_PDCLIB_fd_t) -1 )

/* The default size for file buffers. Must be at least 256. */
#define _PDCLIB_BUFSIZ 1024

/* The minimum number of files the implementation can open simultaneously. Must
   be at least 8. Depends largely on how the bookkeeping is done by fopen() /
   freopen() / fclose(). The example implementation limits the number of open
   files only by available memory.
*/
#define _PDCLIB_FOPEN_MAX 8

/* Length of the longest filename the implementation guarantees to support. */
#define _PDCLIB_FILENAME_MAX 128

/* Maximum length of filenames generated by tmpnam(). (See tmpfile.c.) */
#define _PDCLIB_L_tmpnam 46

/* Number of distinct file names that can be generated by tmpnam(). */
#define _PDCLIB_TMP_MAX 50

/* The values of SEEK_SET, SEEK_CUR and SEEK_END, used by fseek().
   Since at least one platform (POSIX) uses the same symbols for its own "seek"
   function, we use whatever the host defines (if it does define them).
*/
#define _PDCLIB_SEEK_SET 0
#define _PDCLIB_SEEK_CUR 1
#define _PDCLIB_SEEK_END 2

/* The number of characters that can be buffered with ungetc(). The standard
   guarantees only one (1); anything larger would make applications relying on
   this capability dependent on implementation-defined behaviour (not good).
*/
#define _PDCLIB_UNGETCBUFSIZE 1

/* The number of functions that can be registered with atexit(). Needs to be  */
/* at least 33 (32 guaranteed by the standard, plus _PDCLIB_closeall() which  */
/* is used internally by PDCLib to close all open streams).                   */
/* TODO: Should expand dynamically.                                           */
#define _PDCLIB_ATEXIT_SLOTS 40

/* errno -------------------------------------------------------------------- */

/* These are the values that _PDCLIB_errno can be set to by the library.

   By keeping PDCLib's errno in the _PDCLIB_* namespace, the library is capable
   to "translate" between errno values used by the hosting operating system and
   those used and passed out by the library.

   Example: In the example platform, the remove() function uses the unlink()
   system call as backend. Linux sets its errno to EISDIR if you try to unlink()
   a directory, but POSIX demands EPERM. Within the remove() function, you can
   catch the 'errno == EISDIR', and set '_PDCLIB_errno = _PDCLIB_EPERM'. Anyone
   using PDCLib's <errno.h> will "see" EPERM instead of EISDIR (the _PDCLIB_*
   prefix removed by <errno.h> mechanics).

   If you do not want that kind of translation, you might want to "match" the
   values used by PDCLib with those used by the host OS, as to avoid confusion.

   The standard only defines three distinct errno values: ERANGE, EDOM, and
   EILSEQ. The standard leaves it up to "the implementation" whether there are
   any more beyond those three. There is some controversy as to whether errno is
   such a good idea at all, so you might want to come up with a different error
   reporting facility for your platform.
*/


/* locale data -------------------------------------------------------------- */

/* The default path where PDCLib should look for its locale data.             */
/* Must end with the appropriate separator character.                         */
#define _PDCLIB_LOCALE_PATH "/usr/share/pdclib/i18n"

/* The name of the environment variable that can be used to override that     */
/* path setting.                                                              */
#define _PDCLIB_LOCALE_PATH_ENV PDCLIB_I18N

#ifdef __CYGWIN__
typedef unsigned int wint_t;
#endif

/* threads ------------------------------------------------------------------ */
typedef void *_PDCLIB_thrd_t;
typedef struct __PDCLIB_cnd_t
{
    void *eventHandles[2]; // [0] single-receiver signal, [1] broadcast signal
    _Atomic int waitCount;
} _PDCLIB_cnd_t;
typedef struct __PDCLIB_mtx_t
{
    void *handle;
} _PDCLIB_mtx_t;
typedef unsigned int _PDCLIB_tss_t;
typedef int _PDCLIB_once_flag;
#define _PDCLIB_ONCE_FLAG_INIT 0
#define _PDCLIB_TSS_DTOR_ITERATIONS 4


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_ASSERT_H <assert_ext_.h>
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_CTYPE_H <ctype_ext_.h>
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_ERRNO_H <errno_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_FLOAT_H <float_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_INTTYPES_H <inttypes_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_ISO646_H <iso646_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_LIMITS_H <limits_ext_.h>
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_LOCALE_H <locale_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_SIGNAL_H <signal_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_STDALIGN_H <stdalign_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_STDARG_H <stdarg_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_STDBOOL_H <stdbool_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_STDDEF_H <stddef_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_STDINT_H <stdint_ext_.h>
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_STDIO_H <stdio_ext_.h>
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_STDLIB_H <stdlib_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_STDNORETURN_H <stdnoreturn_ext_.h>
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_STRING_H <string_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_THREADS_H <threads_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_TIME_H <time_ext_.h>
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_EXTEND_WCTYPE_H <wctype_ext_.h>
#endif


#endif

/* Auxiliary PDCLib code <_PDCLIB_aux.h>

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef _PDCLIB_AUX_H
#define _PDCLIB_AUX_H _PDCLIB_AUX_H

/* -------------------------------------------------------------------------- */
/* You should not have to edit anything in this file; if you DO have to, it   */
/* would be considered a bug / missing feature: notify the author(s).         */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* Standard Version                                                           */
/* -------------------------------------------------------------------------- */

/* Many a compiler gets this wrong, so you might have to hardcode it instead. */


#if 0 /* evaluated by -frewrite-includes */
#error Compiler does not define _ _STDC_ _ to 1 (not standard-compliant)!
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_restrict
#define _PDCLIB_inline
#else
#define _PDCLIB_restrict restrict
#define _PDCLIB_inline inline
#endif


#if 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_Noreturn
#else
#define _PDCLIB_Noreturn _Noreturn
#endif

#ifndef __STDC_HOSTED__
#error Compiler does not define _ _STDC_HOSTED_ _ (not standard-compliant)!

#elif 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_HOSTED 0

#elif 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_HOSTED 1
#else
#error Compiler does not define _ _STDC_HOSTED_ _ to 0 or 1 (not standard-compliant)!
#endif

/* -------------------------------------------------------------------------- */
/* Helper macros:                                                             */
/* _PDCLIB_cc( x, y ) concatenates two preprocessor tokens without extending  */
/* _PDCLIB_concat( x, y ) concatenates two preprocessor tokens with extending */
/* _PDCLIB_static_assert( e, m ) does a compile-time assertion of expression  */
/*                               e, with m as the failure message.            */
/* _PDCLIB_TYPE_SIGNED( type ) resolves to true if type is signed.            */
/* _PDCLIB_TWOS_COMPLEMENT( type ) resolves to true if two's complement is    */
/*                                 used for type.                             */
/* _PDCLIB_LOCK( mtx ) lock a mutex if library has threads support.           */
/* _PDCLIB_UNLOCK( mtx ) unlock a mutex if library has threads support.       */
/* -------------------------------------------------------------------------- */

#define _PDCLIB_cc( x, y )     x ## y
#define _PDCLIB_concat( x, y ) _PDCLIB_cc( x, y )

#define _PDCLIB_static_assert( e, m ) enum { _PDCLIB_concat( _PDCLIB_assert_, __LINE__ ) = 1 / ( !!(e) ) }

#define _PDCLIB_TYPE_SIGNED( type ) (((type) -1) < 0)
#define _PDCLIB_TWOS_COMPLEMENT( type ) ((type) ~ (type) 0 < 0 )

#define _PDCLIB_symbol2value( x ) #x
#define _PDCLIB_symbol2string( x ) _PDCLIB_symbol2value( x )

#ifndef __STDC_NO_THREADS__
#define _PDCLIB_LOCK( mtx ) mtx_lock( &mtx )
#define _PDCLIB_UNLOCK( mtx ) mtx_unlock( &mtx )
#else
#define _PDCLIB_LOCK( mtx )
#define _PDCLIB_UNLOCK( mtx )
#endif



#endif

/* null pointer constant */
#define _PDCLIB_NULL 0

/* -------------------------------------------------------------------------- */
/* Limits of native datatypes                                                 */
/* -------------------------------------------------------------------------- */
/* The definition of minimum limits for unsigned datatypes is done because    */
/* later on we will "construct" limits for other abstract types:              */
/* USHRT -> _PDCLIB_ + USHRT + _MIN -> _PDCLIB_USHRT_MIN -> 0                 */
/* INT -> _PDCLIB_ + INT + _MIN -> _PDCLIB_INT_MIN -> ... you get the idea.   */
/* -------------------------------------------------------------------------- */

/* Setting 'char' limits                                                      */
#define _PDCLIB_CHAR_BIT    8
#define _PDCLIB_UCHAR_MIN   0
#define _PDCLIB_UCHAR_MAX   0xff
#define _PDCLIB_SCHAR_MIN   (-0x7f - 1)
#define _PDCLIB_SCHAR_MAX   0x7f

#if 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_CHAR_MIN    _PDCLIB_SCHAR_MIN
#define _PDCLIB_CHAR_MAX    _PDCLIB_SCHAR_MAX
#else
#define _PDCLIB_CHAR_MIN    0
#define _PDCLIB_CHAR_MAX    _PDCLIB_UCHAR_MAX
#endif

/* Setting 'short' limits                                                     */

#if 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_SHRT_MAX      0x7fff
#define _PDCLIB_SHRT_MIN      (-0x7fff - 1)
#define _PDCLIB_USHRT_MAX     0xffff
#else
#error Unsupported width of 'short' (not 16 bit).
#endif
#define _PDCLIB_USHRT_MIN 0


#if 0 /* evaluated by -frewrite-includes */
#error Bogus setting: short > int? Check _PDCLIB_config.h.
#endif

/* Setting 'int' limits                                                       */

#if 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_INT_MAX   0x7fff
#define _PDCLIB_INT_MIN   (-0x7fff - 1)
#define _PDCLIB_UINT_MAX  0xffffU

#elif 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_INT_MAX   0x7fffffff
#define _PDCLIB_INT_MIN   (-0x7fffffff - 1)
#define _PDCLIB_UINT_MAX  0xffffffffU

#elif 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_INT_MAX   0x7fffffffffffffff
#define _PDCLIB_INT_MIN   (-0x7fffffffffffffff - 1)
#define _PDCLIB_UINT_MAX  0xffffffffffffffff
#else
#error Unsupported width of 'int' (neither 16, 32, nor 64 bit).
#endif
#define _PDCLIB_UINT_MIN 0

/* Setting 'long' limits                                                      */

#if 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_LONG_MAX   0x7fffffffL
#define _PDCLIB_LONG_MIN   (-0x7fffffffL - 1L)
#define _PDCLIB_ULONG_MAX  0xffffffffUL

#elif 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_LONG_MAX   0x7fffffffffffffffL
#define _PDCLIB_LONG_MIN   (-0x7fffffffffffffffL - 1L)
#define _PDCLIB_ULONG_MAX  0xffffffffffffffffUL
#else
#error Unsupported width of 'long' (neither 32 nor 64 bit).
#endif
#define _PDCLIB_ULONG_MIN 0

/* Setting 'long long' limits                                                 */

#if 1 /* evaluated by -frewrite-includes */
#define _PDCLIB_LLONG_MAX  0x7fffffffffffffffLL
#define _PDCLIB_LLONG_MIN  (-0x7fffffffffffffffLL - 1LL)
#define _PDCLIB_ULLONG_MAX 0xffffffffffffffffULL

#elif 0 /* evaluated by -frewrite-includes */
#define _PDCLIB_LLONG_MAX  0x7fffffffffffffffffffffffffffffffLL
#define _PDCLIB_LLONG_MIN  (-0x7fffffffffffffffffffffffffffffffLL - 1LL)
#define _PDCLIB_ULLONG_MAX 0xffffffffffffffffffffffffffffffffULL
#else
#error Unsupported width of 'long long' (neither 64 nor 128 bit).
#endif
#define _PDCLIB_ULLONG_MIN 0

/* -------------------------------------------------------------------------- */
/* <stdint.h> exact-width types and their limits                              */
/* -------------------------------------------------------------------------- */
/* Note that, for the "standard" widths of 8, 16, 32 and 64 bit, the "LEAST"  */
/* types are identical to the "exact-width" types, by definition.             */

/* Setting 'int8_t', its limits, its literal, and conversion macros.          */

#if 1 /* evaluated by -frewrite-includes */
typedef signed char        _PDCLIB_int8_t;
typedef unsigned char      _PDCLIB_uint8_t;
#define _PDCLIB_INT8_MAX   _PDCLIB_CHAR_MAX
#define _PDCLIB_INT8_MIN   _PDCLIB_CHAR_MIN
#define _PDCLIB_UINT8_MAX  _PDCLIB_UCHAR_MAX
#define _PDCLIB_8_CONV     hh
#else
#error Unsupported width of char (not 8 bits).
#endif

/* Setting 'int16_t', its limits, its literal, and conversion macros.         */

#if 0 /* evaluated by -frewrite-includes */
typedef signed int         _PDCLIB_int16_t;
typedef unsigned int       _PDCLIB_uint16_t;
#define _PDCLIB_INT16_MAX  _PDCLIB_INT_MAX
#define _PDCLIB_INT16_MIN  _PDCLIB_INT_MIN
#define _PDCLIB_UINT16_MAX _PDCLIB_UINT_MAX
#define _PDCLIB_16_CONV

#elif 1 /* evaluated by -frewrite-includes */
typedef signed short       _PDCLIB_int16_t;
typedef unsigned short     _PDCLIB_uint16_t;
#define _PDCLIB_INT16_MAX  _PDCLIB_SHRT_MAX
#define _PDCLIB_INT16_MIN  _PDCLIB_SHRT_MIN
#define _PDCLIB_UINT16_MAX _PDCLIB_USHRT_MAX
#define _PDCLIB_16_CONV    h
#else
#error Neither 'short' nor 'int' are 16-bit.
#endif

/* Setting 'int32_t', its limits, its literal, and conversion macros.         */

#if 1 /* evaluated by -frewrite-includes */
typedef signed int         _PDCLIB_int32_t;
typedef unsigned int       _PDCLIB_uint32_t;
#define _PDCLIB_INT32_MAX  _PDCLIB_INT_MAX
#define _PDCLIB_INT32_MIN  _PDCLIB_INT_MIN
#define _PDCLIB_UINT32_MAX _PDCLIB_UINT_MAX
#define _PDCLIB_INT32_LITERAL
#define _PDCLIB_UINT32_LITERAL
#define _PDCLIB_32_CONV

#elif 0 /* evaluated by -frewrite-includes */
typedef signed long        _PDCLIB_int32_t;
typedef unsigned long      _PDCLIB_uint32_t;
#define _PDCLIB_INT32_MAX  _PDCLIB_LONG_MAX
#define _PDCLIB_INT32_MIN  _PDCLIB_LONG_MIN
#define _PDCLIB_UINT32_MAX _PDCLIB_LONG_MAX
#define _PDCLIB_INT32_LITERAL  l
#define _PDCLIB_UINT32_LITERAL ul
#define _PDCLIB_32_CONV        l
#else
#error Neither 'int' nor 'long' are 32-bit.
#endif

/* Setting 'int64_t', its limits, its literal, and conversion macros.         */

#if 0 /* evaluated by -frewrite-includes */
typedef signed long        _PDCLIB_int64_t;
typedef unsigned long      _PDCLIB_uint64_t;
#define _PDCLIB_INT64_MAX  _PDCLIB_LONG_MAX
#define _PDCLIB_INT64_MIN  _PDCLIB_LONG_MIN
#define _PDCLIB_UINT64_MAX  _PDCLIB_ULONG_MAX
#define _PDCLIB_INT64_LITERAL  l
#define _PDCLIB_UINT64_LITERAL ul
#define _PDCLIB_64_CONV        l

#elif 1 /* evaluated by -frewrite-includes */
typedef signed long long   _PDCLIB_int64_t;
typedef unsigned long long _PDCLIB_uint64_t;
#define _PDCLIB_INT64_MAX  _PDCLIB_LLONG_MAX
#define _PDCLIB_INT64_MIN  _PDCLIB_LLONG_MIN
#define _PDCLIB_UINT64_MAX  _PDCLIB_ULLONG_MAX
#define _PDCLIB_INT64_LITERAL  ll
#define _PDCLIB_UINT64_LITERAL ull
#define _PDCLIB_64_CONV        ll
#else
#error Neither 'long' nor 'long long' are 64-bit.
#endif

/* -------------------------------------------------------------------------- */
/* <stdint.h> "fastest" types and their limits                                */
/* -------------------------------------------------------------------------- */
/* This is, admittedly, butt-ugly. But at least it's ugly where the average   */
/* user of PDCLib will never see it, and makes <_PDCLIB_config.h> much        */
/* cleaner.                                                                   */
/* -------------------------------------------------------------------------- */

typedef _PDCLIB_fast8          _PDCLIB_int_fast8_t;
typedef unsigned _PDCLIB_fast8 _PDCLIB_uint_fast8_t;
#define _PDCLIB_INT_FAST8_MIN  _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_FAST8 ), _MIN )
#define _PDCLIB_INT_FAST8_MAX  _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_FAST8 ), _MAX )
#define _PDCLIB_UINT_FAST8_MAX _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_U, _PDCLIB_FAST8 ), _MAX )

typedef _PDCLIB_fast16          _PDCLIB_int_fast16_t;
typedef unsigned _PDCLIB_fast16 _PDCLIB_uint_fast16_t;
#define _PDCLIB_INT_FAST16_MIN  _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_FAST16 ), _MIN )
#define _PDCLIB_INT_FAST16_MAX  _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_FAST16 ), _MAX )
#define _PDCLIB_UINT_FAST16_MAX _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_U, _PDCLIB_FAST16 ), _MAX )

typedef _PDCLIB_fast32          _PDCLIB_int_fast32_t;
typedef unsigned _PDCLIB_fast32 _PDCLIB_uint_fast32_t;
#define _PDCLIB_INT_FAST32_MIN  _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_FAST32 ), _MIN )
#define _PDCLIB_INT_FAST32_MAX  _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_FAST32 ), _MAX )
#define _PDCLIB_UINT_FAST32_MAX _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_U, _PDCLIB_FAST32 ), _MAX )

typedef _PDCLIB_fast64          _PDCLIB_int_fast64_t;
typedef unsigned _PDCLIB_fast64 _PDCLIB_uint_fast64_t;
#define _PDCLIB_INT_FAST64_MIN  _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_FAST64 ), _MIN )
#define _PDCLIB_INT_FAST64_MAX  _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_FAST64 ), _MAX )
#define _PDCLIB_UINT_FAST64_MAX _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_U, _PDCLIB_FAST64 ), _MAX )

/* -------------------------------------------------------------------------- */
/* Various <stddef.h> typedefs and limits                                     */
/* -------------------------------------------------------------------------- */

typedef _PDCLIB_ptrdiff     _PDCLIB_ptrdiff_t;
#define _PDCLIB_PTRDIFF_MIN _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_PTRDIFF ), _MIN )
#define _PDCLIB_PTRDIFF_MAX _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_PTRDIFF ), _MAX )

#define _PDCLIB_SIG_ATOMIC_MIN _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_SIG_ATOMIC ), _MIN )
#define _PDCLIB_SIG_ATOMIC_MAX _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_SIG_ATOMIC ), _MAX )

typedef _PDCLIB_size     _PDCLIB_size_t;
#define _PDCLIB_SIZE_MAX _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_SIZE ), _MAX )

typedef _PDCLIB_wchar     _PDCLIB_wchar_t;
#define _PDCLIB_WCHAR_MIN _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_WCHAR ), _MIN )
#define _PDCLIB_WCHAR_MAX _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_WCHAR ), _MAX )

typedef _PDCLIB_wint     _PDCLIB_wint_t;
#define _PDCLIB_WINT_MIN _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_WINT ), _MIN )
#define _PDCLIB_WINT_MAX _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_WINT ), _MAX )

typedef _PDCLIB_intptr          _PDCLIB_intptr_t;
typedef unsigned _PDCLIB_intptr _PDCLIB_uintptr_t;
#define _PDCLIB_INTPTR_MIN  _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_INTPTR ), _MIN )
#define _PDCLIB_INTPTR_MAX  _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_INTPTR ), _MAX )
#define _PDCLIB_UINTPTR_MAX _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_U, _PDCLIB_INTPTR ), _MAX )

typedef _PDCLIB_intmax          _PDCLIB_intmax_t;
typedef unsigned _PDCLIB_intmax _PDCLIB_uintmax_t;
#define _PDCLIB_INTMAX_MIN  _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_INTMAX ), _MIN )
#define _PDCLIB_INTMAX_MAX  _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_, _PDCLIB_INTMAX ), _MAX )
#define _PDCLIB_UINTMAX_MAX _PDCLIB_concat( _PDCLIB_concat( _PDCLIB_U, _PDCLIB_INTMAX ), _MAX )
#define _PDCLIB_INTMAX_C( value )  _PDCLIB_concat( value, _PDCLIB_INTMAX_LITERAL )
#define _PDCLIB_UINTMAX_C( value ) _PDCLIB_concat( value, _PDCLIB_concat( u, _PDCLIB_INTMAX_LITERAL ) )

/* -------------------------------------------------------------------------- */
/* Various <stdio.h> internals                                                */
/* -------------------------------------------------------------------------- */

/* Flags for representing mode (see fopen()). Note these must fit the same
   status field as the _IO?BF flags in <stdio.h> and the internal flags below.
*/
#define _PDCLIB_FREAD   (1u<<3)
#define _PDCLIB_FWRITE  (1u<<4)
#define _PDCLIB_FAPPEND (1u<<5)
#define _PDCLIB_FRW     (1u<<6)
#define _PDCLIB_FBIN    (1u<<7)

/* Internal flags, made to fit the same status field as the flags above. */
/* FIXME: too many flags to work on a 16-bit machine */
/* -------------------------------------------------------------------------- */
/* free() the buffer memory on closing (false for user-supplied buffer) */
#define _PDCLIB_FREEBUFFER  (1u<<8)
/* stream has encountered error / EOF */
#define _PDCLIB_ERRORFLAG   (1u<<9)
#define _PDCLIB_EOFFLAG     (1u<<10)
/* stream is wide-oriented */
#define _PDCLIB_WIDESTREAM  (1u<<11)
/* stream is byte-oriented */
#define _PDCLIB_BYTESTREAM  (1u<<12)
/* file associated with stream should be remove()d on closing (tmpfile()) */
#define _PDCLIB_DELONCLOSE  (1u<<13)
/* stream handle should not be free()d on close (stdin, stdout, stderr) */
#define _PDCLIB_STATIC      (1u<<14)
/* stream filename allocated separately, and needs free()ing on fclode(). */
#define _PDCLIB_FREENAME    (1u<<15)

/* Position / status structure for getpos() / fsetpos(). */
struct _PDCLIB_fpos_t
{
    _PDCLIB_uint64_t offset; /* File position offset */
    int              status; /* Multibyte parsing state (unused, reserved) */
};

/* FILE structure */
struct _PDCLIB_file_t
{
    _PDCLIB_fd_t            handle;   /* OS file handle */
    char *                  buffer;   /* Pointer to buffer memory */
    _PDCLIB_size_t          bufsize;  /* Size of buffer */
    _PDCLIB_size_t          bufidx;   /* Index of current position in buffer */
    _PDCLIB_size_t          bufend;   /* Index of last pre-read character in buffer */
    struct _PDCLIB_fpos_t   pos;      /* Offset and multibyte parsing state */
    _PDCLIB_size_t          ungetidx; /* Number of ungetc()'ed characters */
    unsigned char *         ungetbuf; /* ungetc() buffer */
    unsigned int            status;   /* Status flags; see above */
    /* multibyte parsing status to be added later */
#ifndef __STDC_NO_THREADS__
    _PDCLIB_mtx_t           mtx;      /* Multithreading safety */
#endif
    char *                  filename; /* Name the current stream has been opened with */
    struct _PDCLIB_file_t * next;     /* Pointer to next struct (internal) */
};

/* -------------------------------------------------------------------------- */
/* Various <time.h> internals                                                 */
/* -------------------------------------------------------------------------- */

typedef _PDCLIB_time            _PDCLIB_time_t;
typedef _PDCLIB_clock           _PDCLIB_clock_t;

/* -------------------------------------------------------------------------- */
/* Internal data types                                                        */
/* -------------------------------------------------------------------------- */

/* Structure required by both atexit() and exit() for handling atexit functions */
struct _PDCLIB_exitfunc_t
{
    struct _PDCLIB_exitfunc_t * next;
    void (*func)( void );
};

/* Status structure required by _PDCLIB_print(). */
struct _PDCLIB_status_t
{
    int              base;   /* base to which the value shall be converted   */
    _PDCLIB_int_fast32_t flags; /* flags and length modifiers                */
    _PDCLIB_size_t   n;      /* print: maximum characters to be written      */
                             /* scan:  number matched conversion specifiers  */
    _PDCLIB_size_t   i;      /* number of characters read/written            */
    _PDCLIB_size_t   current;/* chars read/written in the CURRENT conversion */
    char *           s;      /* *sprintf(): target buffer                    */
                             /* *sscanf():  source string                    */
    _PDCLIB_size_t   width;  /* specified field width                        */
    int              prec;   /* specified field precision                    */
    struct _PDCLIB_file_t * stream; /* *fprintf() / *fscanf() stream         */
    _PDCLIB_va_list  arg;    /* argument stack                               */
};

/* -------------------------------------------------------------------------- */
/* Declaration of helper functions (implemented in functions/_PDCLIB).        */
/* -------------------------------------------------------------------------- */

/* This is the main function called by atoi(), atol() and atoll().            */
_PDCLIB_LOCAL _PDCLIB_intmax_t _PDCLIB_atomax( const char * s );

/* Two helper functions used by strtol(), strtoul() and long long variants.   */
_PDCLIB_LOCAL const char * _PDCLIB_strtox_prelim( const char * p, char * sign, int * base );
_PDCLIB_LOCAL _PDCLIB_uintmax_t _PDCLIB_strtox_main( const char ** p, unsigned int base, _PDCLIB_uintmax_t error, _PDCLIB_uintmax_t limval, int limdigit, char * sign );

/* Digits arrays used by various integer conversion functions */
extern const char _PDCLIB_digits[];
extern const char _PDCLIB_Xdigits[];

/* The worker for all printf() type of functions. The pointer spec should point
   to the introducing '%' of a conversion specifier. The status structure is to
   be that of the current printf() function, of which the members n, s, stream
   and arg will be preserved; i will be updated; and all others will be trashed
   by the function.
   Returns a pointer to the first character not parsed as conversion specifier.
*/
_PDCLIB_LOCAL const char * _PDCLIB_print( const char * spec, struct _PDCLIB_status_t * status );

/* The worker for all scanf() type of functions. The pointer spec should point
   to the introducing '%' of a conversion specifier. The status structure is to
   be that of the current scanf() function, of which the member stream will be
   preserved; n, i, and s will be updated; and all others will be trashed by
   the function.
   Returns a pointer to the first character not parsed as conversion specifier,
   or NULL in case of error.
   FIXME: Should distinguish between matching and input error
*/
_PDCLIB_LOCAL const char * _PDCLIB_scan( const char * spec, struct _PDCLIB_status_t * status );

/* Parsing any fopen() style filemode string into a number of flags. */
_PDCLIB_LOCAL unsigned int _PDCLIB_filemode( const char * mode );

/* Sanity checking and preparing of read buffer, should be called first thing
   by any stdio read-data function.
   Returns 0 on success, EOF on error.
   On error, EOF / error flags and errno are set appropriately.
*/
_PDCLIB_LOCAL int _PDCLIB_prepread( struct _PDCLIB_file_t * stream );

/* Sanity checking, should be called first thing by any stdio write-data
   function.
   Returns 0 on success, EOF on error.
   On error, error flags and errno are set appropriately.
*/
_PDCLIB_LOCAL int _PDCLIB_prepwrite( struct _PDCLIB_file_t * stream );

/* Closing all streams on program exit */
_PDCLIB_LOCAL void _PDCLIB_closeall( void );

/* Check if a given year is a leap year. Parameter is offset to 1900. */
_PDCLIB_LOCAL int _PDCLIB_is_leap( int year_offset );

/* Read a specified number of lines from a file stream; return a pointer to
   allocated memory holding the lines (newlines replaced with zero terminators)
   or NULL in case of error.
*/
_PDCLIB_LOCAL char * _PDCLIB_load_lines( struct _PDCLIB_file_t * stream, _PDCLIB_size_t lines );

/* Removes the given stream from the internal list of open files. Returns zero
   if successful, non-zero otherwise. In case of error, sets errno to EBADF.
*/
_PDCLIB_LOCAL int _PDCLIB_getstream( struct _PDCLIB_file_t * stream );

/* Insert the given stream into the internal list of open files.
*/
_PDCLIB_LOCAL void _PDCLIB_setstream( struct _PDCLIB_file_t * stream );

/* Backend for strtok and strtok_s (plus potential extensions like strtok_r). */
_PDCLIB_LOCAL char * _PDCLIB_strtok( char * _PDCLIB_restrict s1, _PDCLIB_size_t * _PDCLIB_restrict s1max, const char * _PDCLIB_restrict s2, char ** _PDCLIB_restrict ptr );

/* -------------------------------------------------------------------------- */
/* errno                                                                      */
/* -------------------------------------------------------------------------- */

/* A mechanism for delayed evaluation.
   If PDCLib would call its error number "errno" directly, there would be no way
   to catch its value from underlying system calls that also use it (i.e., POSIX
   operating systems). That is why we use an internal name, providing a means to
   access it through <errno.h>.
*/
_PDCLIB_PUBLIC int * _PDCLIB_errno_func( void );

/* -------------------------------------------------------------------------- */
/* <locale.h> support                                                         */
/* -------------------------------------------------------------------------- */

#define _PDCLIB_LC_ALL        0
#define _PDCLIB_LC_COLLATE    1
#define _PDCLIB_LC_CTYPE      2
#define _PDCLIB_LC_MONETARY   3
#define _PDCLIB_LC_NUMERIC    4
#define _PDCLIB_LC_TIME       5
#define _PDCLIB_LC_MESSAGES   6
#define _PDCLIB_LC_COUNT      7

#define _PDCLIB_CTYPE_ALPHA   1
#define _PDCLIB_CTYPE_BLANK   2
#define _PDCLIB_CTYPE_CNTRL   4
#define _PDCLIB_CTYPE_GRAPH   8
#define _PDCLIB_CTYPE_PUNCT  16
#define _PDCLIB_CTYPE_SPACE  32
#define _PDCLIB_CTYPE_LOWER  64
#define _PDCLIB_CTYPE_UPPER 128

#define _PDCLIB_CHARSET_SIZE ( 1 << _PDCLIB_CHAR_BIT )

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
    /* 1..3 code points */
    /* 1..8, 18 collation elements of 3 16-bit integers */
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
    char * month_name_abbr[12]; /* month names, abbreviated                   */
    char * month_name_full[12]; /* month names, full                          */
    char * day_name_abbr[7];    /* weekday names, abbreviated                 */
    char * day_name_full[7];    /* weekday names, full                        */
    char * date_time_format;    /* date / time format for strftime( "%c" )    */
    char * time_format_12h;     /* 12-hour time format for strftime( "%r" )   */
    char * date_format;         /* date format for strftime( "%x" )           */
    char * time_format;         /* time format for strftime( "%X" )           */
    char * am_pm[2];            /* AM / PM designation                        */
};

extern struct _PDCLIB_lc_time_t _PDCLIB_lc_time;

_PDCLIB_LOCAL struct _PDCLIB_lc_lconv_numeric_t * _PDCLIB_load_lc_numeric( const char * path, const char * locale );
_PDCLIB_LOCAL struct _PDCLIB_lc_lconv_monetary_t * _PDCLIB_load_lc_monetary( const char * path, const char * locale );
_PDCLIB_LOCAL struct _PDCLIB_lc_collate_t * _PDCLIB_load_lc_collate( const char * path, const char * locale );
_PDCLIB_LOCAL struct _PDCLIB_lc_ctype_t * _PDCLIB_load_lc_ctype( const char * path, const char * locale );
_PDCLIB_LOCAL struct _PDCLIB_lc_time_t * _PDCLIB_load_lc_time( const char * path, const char * locale );
_PDCLIB_LOCAL struct _PDCLIB_lc_messages_t * _PDCLIB_load_lc_messages( const char * path, const char * locale );

/* -------------------------------------------------------------------------- */
/* Sanity checks                                                              */
/* -------------------------------------------------------------------------- */


/* intptr_t being wide enough to store the value of a pointer */
_PDCLIB_static_assert( sizeof( void * ) == sizeof( _PDCLIB_intptr ), "Compiler disagrees on _PDCLIB_intptr." );

/* ptrdiff_t as the result of pointer arithmetic */
_PDCLIB_static_assert( sizeof( &_PDCLIB_digits[1] - &_PDCLIB_digits[0] ) == sizeof( _PDCLIB_ptrdiff ), "Compiler disagrees on _PDCLIB_ptrdiff." );

#endif

typedef _PDCLIB_ptrdiff_t ptrdiff_t;

#ifndef _PDCLIB_SIZE_T_DEFINED
#define _PDCLIB_SIZE_T_DEFINED _PDCLIB_SIZE_T_DEFINED
typedef _PDCLIB_size_t size_t;
#endif

#ifndef __cplusplus
typedef _PDCLIB_wchar_t   wchar_t;
#endif

#ifndef _PDCLIB_NULL_DEFINED
#define _PDCLIB_NULL_DEFINED _PDCLIB_NULL_DEFINED
#define NULL _PDCLIB_NULL
#endif

#define offsetof( type, member ) _PDCLIB_offsetof( type, member )

/* Annex K -- Bounds-checking interfaces */


#if 0 /* evaluated by -frewrite-includes */
#ifndef _PDCLIB_RSIZE_T_DEFINED
#define _PDCLIB_RSIZE_T_DEFINED _PDCLIB_RSIZE_T_DEFINED
typedef size_t rsize_t;
#endif
#endif

/* Extension hook for downstream projects that want to have non-standard
   extensions to standard headers.
*/
#ifdef _PDCLIB_EXTEND_STDDEF_H

#endif

#ifdef __cplusplus
}
#endif

#endif

// -*- C++ -*-
//===--------------------------- __nullptr --------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_NULLPTR
#define _LIBCPP_NULLPTR




#if 1 /* evaluated by -frewrite-includes */

#endif

namespace std
{
    typedef decltype(nullptr) nullptr_t;
}

#endif  // _LIBCPP_NULLPTR

_LIBCPP_BEGIN_NAMESPACE_STD

using ::ptrdiff_t;
using ::size_t;


#if 0 /* evaluated by -frewrite-includes */
// Re-use the compiler's <stddef.h> max_align_t where possible.
using ::max_align_t;
#else
typedef long double max_align_t;
#endif

_LIBCPP_END_NAMESPACE_STD


#if 1 /* evaluated by -frewrite-includes */
namespace std  // purposefully not versioned
{
enum class byte : unsigned char {};

constexpr byte  operator| (byte  __lhs, byte __rhs) noexcept
{
    return static_cast<byte>(
      static_cast<unsigned char>(
         static_cast<unsigned int>(__lhs) | static_cast<unsigned int>(__rhs)
    ));
}

constexpr byte& operator|=(byte& __lhs, byte __rhs) noexcept
{ return __lhs = __lhs | __rhs; }

constexpr byte  operator& (byte  __lhs, byte __rhs) noexcept
{
    return static_cast<byte>(
      static_cast<unsigned char>(
         static_cast<unsigned int>(__lhs) & static_cast<unsigned int>(__rhs)
    ));
}

constexpr byte& operator&=(byte& __lhs, byte __rhs) noexcept
{ return __lhs = __lhs & __rhs; }

constexpr byte  operator^ (byte  __lhs, byte __rhs) noexcept
{
    return static_cast<byte>(
      static_cast<unsigned char>(
         static_cast<unsigned int>(__lhs) ^ static_cast<unsigned int>(__rhs)
    ));
}

constexpr byte& operator^=(byte& __lhs, byte __rhs) noexcept
{ return __lhs = __lhs ^ __rhs; }

constexpr byte  operator~ (byte __b) noexcept
{
    return static_cast<byte>(
      static_cast<unsigned char>(
        ~static_cast<unsigned int>(__b)
    ));
}

}


// -*- C++ -*-
//===------------------------ type_traits ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_TYPE_TRAITS
#define _LIBCPP_TYPE_TRAITS



// -*- C++ -*-
//===--------------------------- cstddef ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_CSTDDEF
#define _LIBCPP_CSTDDEF

/*
    cstddef synopsis

Macros:

    offsetof(type,member-designator)
    NULL

namespace std
{

Types:

    ptrdiff_t
    size_t
    max_align_t
    nullptr_t
    byte // C++17

}  // std

*/





#if 0 /* evaluated by -frewrite-includes */

#endif

// Don't include our own <stddef.h>; we don't want to declare ::nullptr_t.



_LIBCPP_BEGIN_NAMESPACE_STD

using ::ptrdiff_t;
using ::size_t;


#if 0 /* evaluated by -frewrite-includes */
// Re-use the compiler's <stddef.h> max_align_t where possible.
using ::max_align_t;
#else
typedef long double max_align_t;
#endif

_LIBCPP_END_NAMESPACE_STD


#if 0 /* evaluated by -frewrite-includes */



#endif

#endif  // _LIBCPP_CSTDDEF



#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_BEGIN_NAMESPACE_STD

template <class _T1, class _T2> struct _LIBCPP_TEMPLATE_VIS pair;
template <class _Tp> class _LIBCPP_TEMPLATE_VIS reference_wrapper;
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS hash;


template <class _Tp, _Tp __v>
struct _LIBCPP_TEMPLATE_VIS integral_constant
{
  static _LIBCPP_CONSTEXPR const _Tp      value = __v;
  typedef _Tp               value_type;
  typedef integral_constant type;
  _LIBCPP_INLINE_VISIBILITY
  _LIBCPP_CONSTEXPR operator value_type() const _NOEXCEPT {return value;}

#if 1 /* evaluated by -frewrite-includes */
  _LIBCPP_INLINE_VISIBILITY
  constexpr value_type operator ()() const _NOEXCEPT {return value;}
#endif
};

template <class _Tp, _Tp __v>
_LIBCPP_CONSTEXPR const _Tp integral_constant<_Tp, __v>::value;


#if 1 /* evaluated by -frewrite-includes */
template <bool __b>
using bool_constant = integral_constant<bool, __b>;
#define _LIBCPP_BOOL_CONSTANT(__b) bool_constant<(__b)>
#else
#define _LIBCPP_BOOL_CONSTANT(__b) integral_constant<bool,(__b)>
#endif

typedef _LIBCPP_BOOL_CONSTANT(true)  true_type;
typedef _LIBCPP_BOOL_CONSTANT(false) false_type;

template <bool _Val>
using _BoolConstant _LIBCPP_NODEBUG_TYPE = integral_constant<bool, _Val>;

template <bool> struct _MetaBase;
template <>
struct _MetaBase<true> {
  template <class _Tp, class _Up>
  using _SelectImpl _LIBCPP_NODEBUG_TYPE = _Tp;
  template <template <class...> class _FirstFn, template <class...> class, class ..._Args>
  using _SelectApplyImpl _LIBCPP_NODEBUG_TYPE = _FirstFn<_Args...>;
  template <class _First, class...>
  using _FirstImpl _LIBCPP_NODEBUG_TYPE = _First;
  template <class, class _Second, class...>
  using _SecondImpl _LIBCPP_NODEBUG_TYPE = _Second;
  template <class _Tp = void>
  using _EnableIfImpl _LIBCPP_NODEBUG_TYPE = _Tp;
  template <class _Result, class _First, class ..._Rest>
  using _OrImpl _LIBCPP_NODEBUG_TYPE = typename _MetaBase<_First::value != true && sizeof...(_Rest) != 0>::template _OrImpl<_First, _Rest...>;
  template <class _Result, class _First, class ..._Rest>
  using _AndImpl _LIBCPP_NODEBUG_TYPE = typename _MetaBase<_First::value == true && sizeof...(_Rest) != 0>::template _AndImpl<_First, _Rest...>;
};

template <>
struct _MetaBase<false> {
  template <class _Tp, class _Up>
  using _SelectImpl _LIBCPP_NODEBUG_TYPE = _Up;
  template <template <class...> class, template <class...> class _SecondFn, class ..._Args>
  using _SelectApplyImpl _LIBCPP_NODEBUG_TYPE = _SecondFn<_Args...>;
  template <class _Result, class ...>
  using _OrImpl _LIBCPP_NODEBUG_TYPE = _Result;
  template <class _Result, class ...>
  using _AndImpl _LIBCPP_NODEBUG_TYPE = _Result;
};
template <bool _Cond, class _Ret = void>
using _EnableIf _LIBCPP_NODEBUG_TYPE = typename _MetaBase<_Cond>::template _EnableIfImpl<_Ret>;
template <bool _Cond, class _IfRes, class _ElseRes>
using _If _LIBCPP_NODEBUG_TYPE = typename _MetaBase<_Cond>::template _SelectImpl<_IfRes, _ElseRes>;
template <class ..._Rest>
using _Or _LIBCPP_NODEBUG_TYPE = typename _MetaBase< sizeof...(_Rest) != 0 >::template _OrImpl<false_type, _Rest...>;
template <class ..._Rest>
using _And _LIBCPP_NODEBUG_TYPE = typename _MetaBase< sizeof...(_Rest) != 0 >::template _AndImpl<true_type, _Rest...>;
template <class _Pred>
struct _Not : _BoolConstant<!_Pred::value> {};
template <class ..._Args>
using _FirstType _LIBCPP_NODEBUG_TYPE = typename _MetaBase<(sizeof...(_Args) >= 1)>::template _FirstImpl<_Args...>;
template <class ..._Args>
using _SecondType _LIBCPP_NODEBUG_TYPE = typename _MetaBase<(sizeof...(_Args) >= 2)>::template _SecondImpl<_Args...>;

template <template <class...> class _Func, class ..._Args>
struct _Lazy : _Func<_Args...> {};

// Member detector base

template <template <class...> class _Templ, class ..._Args, class = _Templ<_Args...> >
true_type __sfinae_test_impl(int);
template <template <class...> class, class ...>
false_type __sfinae_test_impl(...);

template <template <class ...> class _Templ, class ..._Args>
using _IsValidExpansion _LIBCPP_NODEBUG_TYPE = decltype(std::__sfinae_test_impl<_Templ, _Args...>(0));

template <class>
struct __void_t { typedef void type; };

template <class _Tp>
struct __identity { typedef _Tp type; };

template <class _Tp, bool>
struct _LIBCPP_TEMPLATE_VIS __dependent_type : public _Tp {};

template <bool _Bp, class _If, class _Then>
    struct _LIBCPP_TEMPLATE_VIS conditional {typedef _If type;};
template <class _If, class _Then>
    struct _LIBCPP_TEMPLATE_VIS conditional<false, _If, _Then> {typedef _Then type;};


#if 1 /* evaluated by -frewrite-includes */
template <bool _Bp, class _If, class _Then> using conditional_t = typename conditional<_Bp, _If, _Then>::type;
#endif

template <bool, class _Tp = void> struct _LIBCPP_TEMPLATE_VIS enable_if {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS enable_if<true, _Tp> {typedef _Tp type;};


#if 1 /* evaluated by -frewrite-includes */
template <bool _Bp, class _Tp = void> using enable_if_t = typename enable_if<_Bp, _Tp>::type;
#endif

// is_same

template <class _Tp, class _Up> struct _LIBCPP_TEMPLATE_VIS is_same           : public false_type {};
template <class _Tp>            struct _LIBCPP_TEMPLATE_VIS is_same<_Tp, _Tp> : public true_type {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, class _Up>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_same_v
    = is_same<_Tp, _Up>::value;
#endif

template <class _Tp, class _Up>
using _IsSame = _BoolConstant<
#ifdef __clang__
    __is_same(_Tp, _Up)
#else
    _VSTD::is_same<_Tp, _Up>::value
#endif
>;

template <class _Tp, class _Up>
using _IsNotSame = _BoolConstant<
#ifdef __clang__
    !__is_same(_Tp, _Up)
#else
    !_VSTD::is_same<_Tp, _Up>::value
#endif
>;
// addressof
#ifndef _LIBCPP_HAS_NO_BUILTIN_ADDRESSOF

template <class _Tp>
inline _LIBCPP_CONSTEXPR_AFTER_CXX14
_LIBCPP_NO_CFI _LIBCPP_INLINE_VISIBILITY
_Tp*
addressof(_Tp& __x) _NOEXCEPT
{
    return __builtin_addressof(__x);
}

#else

template <class _Tp>
inline _LIBCPP_NO_CFI _LIBCPP_INLINE_VISIBILITY
_Tp*
addressof(_Tp& __x) _NOEXCEPT
{
  return reinterpret_cast<_Tp *>(
      const_cast<char *>(&reinterpret_cast<const volatile char &>(__x)));
}

#endif // _LIBCPP_HAS_NO_BUILTIN_ADDRESSOF


#if 0 /* evaluated by -frewrite-includes */
// Objective-C++ Automatic Reference Counting uses qualified pointers
// that require special addressof() signatures. When
// _LIBCPP_PREDEFINED_OBJC_ARC_ADDRESSOF is defined, the compiler
// itself is providing these definitions. Otherwise, we provide them.
template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
__strong _Tp*
addressof(__strong _Tp& __x) _NOEXCEPT
{
  return &__x;
}

#ifdef _LIBCPP_HAS_OBJC_ARC_WEAK
template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
__weak _Tp*
addressof(__weak _Tp& __x) _NOEXCEPT
{
  return &__x;
}
#endif

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
__autoreleasing _Tp*
addressof(__autoreleasing _Tp& __x) _NOEXCEPT
{
  return &__x;
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
__unsafe_unretained _Tp*
addressof(__unsafe_unretained _Tp& __x) _NOEXCEPT
{
  return &__x;
}
#endif


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> _Tp* addressof(const _Tp&&) noexcept = delete;
#endif

struct __two {char __lx[2];};

// helper class:

// is_const

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_const            : public false_type {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_const<_Tp const> : public true_type {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_const_v
    = is_const<_Tp>::value;
#endif

// is_volatile

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_volatile               : public false_type {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_volatile<_Tp volatile> : public true_type {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_volatile_v
    = is_volatile<_Tp>::value;
#endif

// remove_const

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_const            {typedef _Tp type;};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_const<const _Tp> {typedef _Tp type;};

#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using remove_const_t = typename remove_const<_Tp>::type;
#endif

// remove_volatile

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_volatile               {typedef _Tp type;};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_volatile<volatile _Tp> {typedef _Tp type;};

#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using remove_volatile_t = typename remove_volatile<_Tp>::type;
#endif

// remove_cv

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_cv
{typedef typename remove_volatile<typename remove_const<_Tp>::type>::type type;};

#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using remove_cv_t = typename remove_cv<_Tp>::type;
#endif

// is_void

template <class _Tp> struct __libcpp_is_void       : public false_type {};
template <>          struct __libcpp_is_void<void> : public true_type {};

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_void
    : public __libcpp_is_void<typename remove_cv<_Tp>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_void_v
    = is_void<_Tp>::value;
#endif

// __is_nullptr_t

template <class _Tp> struct __is_nullptr_t_impl       : public false_type {};
template <>          struct __is_nullptr_t_impl<nullptr_t> : public true_type {};

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS __is_nullptr_t
    : public __is_nullptr_t_impl<typename remove_cv<_Tp>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_null_pointer
    : public __is_nullptr_t_impl<typename remove_cv<_Tp>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_null_pointer_v
    = is_null_pointer<_Tp>::value;
#endif
#endif

// is_integral

template <class _Tp> struct __libcpp_is_integral                     : public false_type {};
template <>          struct __libcpp_is_integral<bool>               : public true_type {};
template <>          struct __libcpp_is_integral<char>               : public true_type {};
template <>          struct __libcpp_is_integral<signed char>        : public true_type {};
template <>          struct __libcpp_is_integral<unsigned char>      : public true_type {};
template <>          struct __libcpp_is_integral<wchar_t>            : public true_type {};
#ifndef _LIBCPP_NO_HAS_CHAR8_T
template <>          struct __libcpp_is_integral<char8_t>            : public true_type {};
#endif
#ifndef _LIBCPP_HAS_NO_UNICODE_CHARS
template <>          struct __libcpp_is_integral<char16_t>           : public true_type {};
template <>          struct __libcpp_is_integral<char32_t>           : public true_type {};
#endif  // _LIBCPP_HAS_NO_UNICODE_CHARS
template <>          struct __libcpp_is_integral<short>              : public true_type {};
template <>          struct __libcpp_is_integral<unsigned short>     : public true_type {};
template <>          struct __libcpp_is_integral<int>                : public true_type {};
template <>          struct __libcpp_is_integral<unsigned int>       : public true_type {};
template <>          struct __libcpp_is_integral<long>               : public true_type {};
template <>          struct __libcpp_is_integral<unsigned long>      : public true_type {};
template <>          struct __libcpp_is_integral<long long>          : public true_type {};
template <>          struct __libcpp_is_integral<unsigned long long> : public true_type {};
#ifndef _LIBCPP_HAS_NO_INT128
template <>          struct __libcpp_is_integral<__int128_t>         : public true_type {};
template <>          struct __libcpp_is_integral<__uint128_t>        : public true_type {};
#endif

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_integral
    : public __libcpp_is_integral<typename remove_cv<_Tp>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_integral_v
    = is_integral<_Tp>::value;
#endif

// is_floating_point

template <class _Tp> struct __libcpp_is_floating_point              : public false_type {};
template <>          struct __libcpp_is_floating_point<float>       : public true_type {};
template <>          struct __libcpp_is_floating_point<double>      : public true_type {};
template <>          struct __libcpp_is_floating_point<long double> : public true_type {};

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_floating_point
    : public __libcpp_is_floating_point<typename remove_cv<_Tp>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_floating_point_v
    = is_floating_point<_Tp>::value;
#endif

// is_array

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_array
    : public false_type {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_array<_Tp[]>
    : public true_type {};
template <class _Tp, size_t _Np> struct _LIBCPP_TEMPLATE_VIS is_array<_Tp[_Np]>
    : public true_type {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_array_v
    = is_array<_Tp>::value;
#endif

// is_pointer

template <class _Tp> struct __libcpp_is_pointer       : public false_type {};
template <class _Tp> struct __libcpp_is_pointer<_Tp*> : public true_type {};

template <class _Tp> struct __libcpp_remove_objc_qualifiers { typedef _Tp type; };

#if 0 /* evaluated by -frewrite-includes */
template <class _Tp> struct __libcpp_remove_objc_qualifiers<_Tp __strong> { typedef _Tp type; };
template <class _Tp> struct __libcpp_remove_objc_qualifiers<_Tp __weak> { typedef _Tp type; };
template <class _Tp> struct __libcpp_remove_objc_qualifiers<_Tp __autoreleasing> { typedef _Tp type; };
template <class _Tp> struct __libcpp_remove_objc_qualifiers<_Tp __unsafe_unretained> { typedef _Tp type; };
#endif

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_pointer
    : public __libcpp_is_pointer<typename __libcpp_remove_objc_qualifiers<typename remove_cv<_Tp>::type>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_pointer_v
    = is_pointer<_Tp>::value;
#endif

// is_reference

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_lvalue_reference       : public false_type {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_lvalue_reference<_Tp&> : public true_type {};

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_rvalue_reference        : public false_type {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_rvalue_reference<_Tp&&> : public true_type {};

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_reference        : public false_type {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_reference<_Tp&>  : public true_type {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_reference<_Tp&&> : public true_type {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_reference_v
    = is_reference<_Tp>::value;

template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_lvalue_reference_v
    = is_lvalue_reference<_Tp>::value;

template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_rvalue_reference_v
    = is_rvalue_reference<_Tp>::value;
#endif
// is_union


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_union
    : public integral_constant<bool, __is_union(_Tp)> {};

#else

template <class _Tp> struct __libcpp_union : public false_type {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_union
    : public __libcpp_union<typename remove_cv<_Tp>::type> {};

#endif


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_union_v
    = is_union<_Tp>::value;
#endif

// is_class


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_class
    : public integral_constant<bool, __is_class(_Tp)> {};

#else

namespace __is_class_imp
{
template <class _Tp> char  __test(int _Tp::*);
template <class _Tp> __two __test(...);
}

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_class
    : public integral_constant<bool, sizeof(__is_class_imp::__test<_Tp>(0)) == 1 && !is_union<_Tp>::value> {};

#endif


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_class_v
    = is_class<_Tp>::value;
#endif

// is_function

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_function
    : public _BoolConstant<
#ifdef __clang__
    __is_function(_Tp)
#else
 !(is_reference<_Tp>::value || is_const<const _Tp>::value)
#endif
    > {};



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_function_v
    = is_function<_Tp>::value;
#endif

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


template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_member_function_pointer
    : public _BoolConstant< __libcpp_is_member_pointer<typename remove_cv<_Tp>::type>::__is_func > {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_member_function_pointer_v
    = is_member_function_pointer<_Tp>::value;
#endif

// is_member_pointer

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_member_pointer
 : public _BoolConstant< __libcpp_is_member_pointer<typename remove_cv<_Tp>::type>::__is_member > {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_member_pointer_v
    = is_member_pointer<_Tp>::value;
#endif

// is_member_object_pointer

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_member_object_pointer
    : public _BoolConstant< __libcpp_is_member_pointer<typename remove_cv<_Tp>::type>::__is_obj >  {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_member_object_pointer_v
    = is_member_object_pointer<_Tp>::value;
#endif

// is_enum


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_enum
    : public integral_constant<bool, __is_enum(_Tp)> {};

#else

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_enum
    : public integral_constant<bool, !is_void<_Tp>::value             &&
                                     !is_integral<_Tp>::value         &&
                                     !is_floating_point<_Tp>::value   &&
                                     !is_array<_Tp>::value            &&
                                     !is_pointer<_Tp>::value          &&
                                     !is_reference<_Tp>::value        &&
                                     !is_member_pointer<_Tp>::value   &&
                                     !is_union<_Tp>::value            &&
                                     !is_class<_Tp>::value            &&
                                     !is_function<_Tp>::value         > {};

#endif


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_enum_v
    = is_enum<_Tp>::value;
#endif

// is_arithmetic

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_arithmetic
    : public integral_constant<bool, is_integral<_Tp>::value      ||
                                     is_floating_point<_Tp>::value> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_arithmetic_v
    = is_arithmetic<_Tp>::value;
#endif

// is_fundamental

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_fundamental
    : public integral_constant<bool, is_void<_Tp>::value        ||
                                     __is_nullptr_t<_Tp>::value ||
                                     is_arithmetic<_Tp>::value> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_fundamental_v
    = is_fundamental<_Tp>::value;
#endif

// is_scalar

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_scalar
    : public integral_constant<bool, is_arithmetic<_Tp>::value     ||
                                     is_member_pointer<_Tp>::value ||
                                     is_pointer<_Tp>::value        ||
                                     __is_nullptr_t<_Tp>::value    ||
                                     is_enum<_Tp>::value           > {};

template <> struct _LIBCPP_TEMPLATE_VIS is_scalar<nullptr_t> : public true_type {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_scalar_v
    = is_scalar<_Tp>::value;
#endif

// is_object

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_object
    : public integral_constant<bool, is_scalar<_Tp>::value ||
                                     is_array<_Tp>::value  ||
                                     is_union<_Tp>::value  ||
                                     is_class<_Tp>::value  > {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_object_v
    = is_object<_Tp>::value;
#endif

// is_compound

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_compound
    : public integral_constant<bool, !is_fundamental<_Tp>::value> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_compound_v
    = is_compound<_Tp>::value;
#endif


// __is_referenceable  [defns.referenceable]

struct __is_referenceable_impl {
    template <class _Tp> static _Tp& __test(int);
    template <class _Tp> static __two __test(...);
};

template <class _Tp>
struct __is_referenceable : integral_constant<bool,
    _IsNotSame<decltype(__is_referenceable_impl::__test<_Tp>(0)), __two>::value> {};


// add_const

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS add_const {
  typedef _LIBCPP_NODEBUG_TYPE const _Tp type;
};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using add_const_t = typename add_const<_Tp>::type;
#endif

// add_volatile

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS add_volatile {
  typedef _LIBCPP_NODEBUG_TYPE volatile _Tp type;
};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using add_volatile_t = typename add_volatile<_Tp>::type;
#endif

// add_cv
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS add_cv {
  typedef _LIBCPP_NODEBUG_TYPE const volatile _Tp type;
};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using add_cv_t = typename add_cv<_Tp>::type;
#endif

// remove_reference

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_reference        {typedef _LIBCPP_NODEBUG_TYPE _Tp type;};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_reference<_Tp&>  {typedef _LIBCPP_NODEBUG_TYPE _Tp type;};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_reference<_Tp&&> {typedef _LIBCPP_NODEBUG_TYPE _Tp type;};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using remove_reference_t = typename remove_reference<_Tp>::type;
#endif

// add_lvalue_reference

template <class _Tp, bool = __is_referenceable<_Tp>::value> struct __add_lvalue_reference_impl            { typedef _LIBCPP_NODEBUG_TYPE _Tp  type; };
template <class _Tp                                       > struct __add_lvalue_reference_impl<_Tp, true> { typedef _LIBCPP_NODEBUG_TYPE _Tp& type; };

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS add_lvalue_reference
{typedef _LIBCPP_NODEBUG_TYPE typename  __add_lvalue_reference_impl<_Tp>::type type;};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using add_lvalue_reference_t = typename add_lvalue_reference<_Tp>::type;
#endif

template <class _Tp, bool = __is_referenceable<_Tp>::value> struct __add_rvalue_reference_impl            { typedef _LIBCPP_NODEBUG_TYPE  _Tp   type; };
template <class _Tp                                       > struct __add_rvalue_reference_impl<_Tp, true> { typedef _LIBCPP_NODEBUG_TYPE  _Tp&& type; };

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS add_rvalue_reference
{typedef _LIBCPP_NODEBUG_TYPE  typename __add_rvalue_reference_impl<_Tp>::type type;};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using add_rvalue_reference_t = typename add_rvalue_reference<_Tp>::type;
#endif

template <class _Tp> _Tp&& __declval(int);
template <class _Tp> _Tp   __declval(long);

template <class _Tp>
decltype(_VSTD::__declval<_Tp>(0))
declval() _NOEXCEPT;

// __uncvref

template <class _Tp>
struct __uncvref  {
    typedef _LIBCPP_NODEBUG_TYPE typename remove_cv<typename remove_reference<_Tp>::type>::type type;
};

template <class _Tp>
struct __unconstref {
    typedef _LIBCPP_NODEBUG_TYPE typename remove_const<typename remove_reference<_Tp>::type>::type type;
};

#ifndef _LIBCPP_CXX03_LANG
template <class _Tp>
using __uncvref_t _LIBCPP_NODEBUG_TYPE = typename __uncvref<_Tp>::type;
#endif

// __is_same_uncvref

template <class _Tp, class _Up>
struct __is_same_uncvref : _IsSame<typename __uncvref<_Tp>::type,
                                   typename __uncvref<_Up>::type> {};


#if 0 /* evaluated by -frewrite-includes */
// remove_cvref - same as __uncvref
template <class _Tp>
struct remove_cvref : public __uncvref<_Tp> {};

template <class _Tp> using remove_cvref_t = typename remove_cvref<_Tp>::type;
#endif


struct __any
{
    __any(...);
};

// remove_pointer

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_pointer                      {typedef _LIBCPP_NODEBUG_TYPE _Tp type;};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_pointer<_Tp*>                {typedef _LIBCPP_NODEBUG_TYPE _Tp type;};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_pointer<_Tp* const>          {typedef _LIBCPP_NODEBUG_TYPE _Tp type;};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_pointer<_Tp* volatile>       {typedef _LIBCPP_NODEBUG_TYPE _Tp type;};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_pointer<_Tp* const volatile> {typedef _LIBCPP_NODEBUG_TYPE _Tp type;};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using remove_pointer_t = typename remove_pointer<_Tp>::type;
#endif

// add_pointer

template <class _Tp,
        bool = __is_referenceable<_Tp>::value ||
                _IsSame<typename remove_cv<_Tp>::type, void>::value>
struct __add_pointer_impl
    {typedef _LIBCPP_NODEBUG_TYPE typename remove_reference<_Tp>::type* type;};
template <class _Tp> struct __add_pointer_impl<_Tp, false>
    {typedef _LIBCPP_NODEBUG_TYPE _Tp type;};

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS add_pointer
    {typedef _LIBCPP_NODEBUG_TYPE typename __add_pointer_impl<_Tp>::type type;};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using add_pointer_t = typename add_pointer<_Tp>::type;
#endif

// type_identity

#if 0 /* evaluated by -frewrite-includes */
template<class _Tp> struct type_identity { typedef _Tp type; };
template<class _Tp> using type_identity_t = typename type_identity<_Tp>::type;
#endif

// is_signed

template <class _Tp, bool = is_integral<_Tp>::value>
struct __libcpp_is_signed_impl : public _LIBCPP_BOOL_CONSTANT(_Tp(-1) < _Tp(0)) {};

template <class _Tp>
struct __libcpp_is_signed_impl<_Tp, false> : public true_type {};  // floating point

template <class _Tp, bool = is_arithmetic<_Tp>::value>
struct __libcpp_is_signed : public __libcpp_is_signed_impl<_Tp> {};

template <class _Tp> struct __libcpp_is_signed<_Tp, false> : public false_type {};

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_signed : public __libcpp_is_signed<_Tp> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_signed_v
    = is_signed<_Tp>::value;
#endif

// is_unsigned

template <class _Tp, bool = is_integral<_Tp>::value>
struct __libcpp_is_unsigned_impl : public _LIBCPP_BOOL_CONSTANT(_Tp(0) < _Tp(-1)) {};

template <class _Tp>
struct __libcpp_is_unsigned_impl<_Tp, false> : public false_type {};  // floating point

template <class _Tp, bool = is_arithmetic<_Tp>::value>
struct __libcpp_is_unsigned : public __libcpp_is_unsigned_impl<_Tp> {};

template <class _Tp> struct __libcpp_is_unsigned<_Tp, false> : public false_type {};

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_unsigned : public __libcpp_is_unsigned<_Tp> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_unsigned_v
    = is_unsigned<_Tp>::value;
#endif

// rank

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS rank
    : public integral_constant<size_t, 0> {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS rank<_Tp[]>
    : public integral_constant<size_t, rank<_Tp>::value + 1> {};
template <class _Tp, size_t _Np> struct _LIBCPP_TEMPLATE_VIS rank<_Tp[_Np]>
    : public integral_constant<size_t, rank<_Tp>::value + 1> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR size_t rank_v
    = rank<_Tp>::value;
#endif

// extent

template <class _Tp, unsigned _Ip = 0> struct _LIBCPP_TEMPLATE_VIS extent
    : public integral_constant<size_t, 0> {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS extent<_Tp[], 0>
    : public integral_constant<size_t, 0> {};
template <class _Tp, unsigned _Ip> struct _LIBCPP_TEMPLATE_VIS extent<_Tp[], _Ip>
    : public integral_constant<size_t, extent<_Tp, _Ip-1>::value> {};
template <class _Tp, size_t _Np> struct _LIBCPP_TEMPLATE_VIS extent<_Tp[_Np], 0>
    : public integral_constant<size_t, _Np> {};
template <class _Tp, size_t _Np, unsigned _Ip> struct _LIBCPP_TEMPLATE_VIS extent<_Tp[_Np], _Ip>
    : public integral_constant<size_t, extent<_Tp, _Ip-1>::value> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, unsigned _Ip = 0>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR size_t extent_v
    = extent<_Tp, _Ip>::value;
#endif

// remove_extent

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_extent
    {typedef _Tp type;};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_extent<_Tp[]>
    {typedef _Tp type;};
template <class _Tp, size_t _Np> struct _LIBCPP_TEMPLATE_VIS remove_extent<_Tp[_Np]>
    {typedef _Tp type;};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using remove_extent_t = typename remove_extent<_Tp>::type;
#endif

// remove_all_extents

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_all_extents
    {typedef _Tp type;};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS remove_all_extents<_Tp[]>
    {typedef typename remove_all_extents<_Tp>::type type;};
template <class _Tp, size_t _Np> struct _LIBCPP_TEMPLATE_VIS remove_all_extents<_Tp[_Np]>
    {typedef typename remove_all_extents<_Tp>::type type;};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using remove_all_extents_t = typename remove_all_extents<_Tp>::type;
#endif


#if 0 /* evaluated by -frewrite-includes */
// is_bounded_array

template <class>                 struct _LIBCPP_TEMPLATE_VIS is_bounded_array           : false_type {};
template <class _Tp, size_t _Np> struct _LIBCPP_TEMPLATE_VIS is_bounded_array<_Tp[_Np]> : true_type {};

template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR
bool is_bounded_array_v  = is_bounded_array<_Tp>::value;

// is_unbounded_array

template <class>     struct _LIBCPP_TEMPLATE_VIS is_unbounded_array        : false_type {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_unbounded_array<_Tp[]> : true_type {};

template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR
bool is_unbounded_array_v  = is_unbounded_array<_Tp>::value;
#endif

// decay

template <class _Up, bool>
struct __decay {
    typedef _LIBCPP_NODEBUG_TYPE typename remove_cv<_Up>::type type;
};

template <class _Up>
struct __decay<_Up, true> {
public:
    typedef _LIBCPP_NODEBUG_TYPE typename conditional
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
struct _LIBCPP_TEMPLATE_VIS decay
{
private:
    typedef _LIBCPP_NODEBUG_TYPE typename remove_reference<_Tp>::type _Up;
public:
    typedef _LIBCPP_NODEBUG_TYPE typename __decay<_Up, __is_referenceable<_Up>::value>::type type;
};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using decay_t = typename decay<_Tp>::type;
#endif

// is_abstract

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_abstract
    : public integral_constant<bool, __is_abstract(_Tp)> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_abstract_v
    = is_abstract<_Tp>::value;
#endif

// is_final

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS
__libcpp_is_final : public integral_constant<bool, __is_final(_Tp)> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS
is_final : public integral_constant<bool, __is_final(_Tp)> {};
#endif


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_final_v
    = is_final<_Tp>::value;
#endif

// is_aggregate

#if 1 /* evaluated by -frewrite-includes */

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS
is_aggregate : public integral_constant<bool, __is_aggregate(_Tp)> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR constexpr bool is_aggregate_v
    = is_aggregate<_Tp>::value;
#endif

#endif // _LIBCPP_STD_VER > 14 && !defined(_LIBCPP_HAS_NO_IS_AGGREGATE)

// is_base_of

template <class _Bp, class _Dp>
struct _LIBCPP_TEMPLATE_VIS is_base_of
    : public integral_constant<bool, __is_base_of(_Bp, _Dp)> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Bp, class _Dp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_base_of_v
    = is_base_of<_Bp, _Dp>::value;
#endif

// is_convertible


#if 1 /* evaluated by -frewrite-includes */

template <class _T1, class _T2> struct _LIBCPP_TEMPLATE_VIS is_convertible
    : public integral_constant<bool, __is_convertible_to(_T1, _T2) &&
                                     !is_abstract<_T2>::value> {};

#else  // __has_feature(is_convertible_to)

#endif  // __has_feature(is_convertible_to)


#if 1 /* evaluated by -frewrite-includes */
template <class _From, class _To>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_convertible_v
    = is_convertible<_From, _To>::value;
#endif

// is_nothrow_convertible


#if 0 /* evaluated by -frewrite-includes */

template <typename _Tp>
static void __test_noexcept(_Tp) noexcept;

template<typename _Fm, typename _To>
static bool_constant<noexcept(__test_noexcept<_To>(declval<_Fm>()))>
__is_nothrow_convertible_test();

template <typename _Fm, typename _To>
struct __is_nothrow_convertible_helper: decltype(__is_nothrow_convertible_test<_Fm, _To>())
{ };

template <typename _Fm, typename _To>
struct is_nothrow_convertible : _Or<
    _And<is_void<_To>, is_void<_Fm>>,
    _Lazy<_And, is_convertible<_Fm, _To>, __is_nothrow_convertible_helper<_Fm, _To>>
>::type { };

template <typename _Fm, typename _To>
inline constexpr bool is_nothrow_convertible_v = is_nothrow_convertible<_Fm, _To>::value;

#endif // _LIBCPP_STD_VER > 17

// is_empty


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_empty
    : public integral_constant<bool, __is_empty(_Tp)> {};

#else  // __has_feature(is_empty)

template <class _Tp>
struct __is_empty1
    : public _Tp
{
    double __lx;
};

struct __is_empty2
{
    double __lx;
};

template <class _Tp, bool = is_class<_Tp>::value>
struct __libcpp_empty : public integral_constant<bool, sizeof(__is_empty1<_Tp>) == sizeof(__is_empty2)> {};

template <class _Tp> struct __libcpp_empty<_Tp, false> : public false_type {};

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_empty : public __libcpp_empty<_Tp> {};

#endif  // __has_feature(is_empty)


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_empty_v
    = is_empty<_Tp>::value;
#endif

// is_polymorphic


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_polymorphic
    : public integral_constant<bool, __is_polymorphic(_Tp)> {};

#else

template<typename _Tp> char &__is_polymorphic_impl(
    typename enable_if<sizeof((_Tp*)dynamic_cast<const volatile void*>(declval<_Tp*>())) != 0,
                       int>::type);
template<typename _Tp> __two &__is_polymorphic_impl(...);

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_polymorphic
    : public integral_constant<bool, sizeof(__is_polymorphic_impl<_Tp>(0)) == 1> {};

#endif // __has_feature(is_polymorphic)


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_polymorphic_v
    = is_polymorphic<_Tp>::value;
#endif

// has_virtual_destructor


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS has_virtual_destructor
    : public integral_constant<bool, __has_virtual_destructor(_Tp)> {};

#else

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS has_virtual_destructor
    : public false_type {};

#endif


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool has_virtual_destructor_v
    = has_virtual_destructor<_Tp>::value;
#endif

// has_unique_object_representations


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS has_unique_object_representations
    : public integral_constant<bool,
       __has_unique_object_representations(remove_cv_t<remove_all_extents_t<_Tp>>)> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool has_unique_object_representations_v
    = has_unique_object_representations<_Tp>::value;
#endif

#endif

// alignment_of

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS alignment_of
    : public integral_constant<size_t, _LIBCPP_ALIGNOF(_Tp)> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR size_t alignment_of_v
    = alignment_of<_Tp>::value;
#endif

// aligned_storage

template <class _Hp, class _Tp>
struct __type_list
{
    typedef _Hp _Head;
    typedef _Tp _Tail;
};

struct __nat
{
#ifndef _LIBCPP_CXX03_LANG
    __nat() = delete;
    __nat(const __nat&) = delete;
    __nat& operator=(const __nat&) = delete;
    ~__nat() = delete;
#endif
};

template <class _Tp>
struct __align_type
{
    static const size_t value = _LIBCPP_PREFERRED_ALIGNOF(_Tp);
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
struct _ALIGNAS(_Align) __fallback_overaligned {};

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
struct _LIBCPP_TEMPLATE_VIS aligned_storage
{
    typedef typename __find_pod<__all_types, _Align>::type _Aligner;
    union type
    {
        _Aligner __align;
        unsigned char __data[(_Len + _Align - 1)/_Align * _Align];
    };
};


#if 1 /* evaluated by -frewrite-includes */
template <size_t _Len, size_t _Align = __find_max_align<__all_types, _Len>::value>
    using aligned_storage_t = typename aligned_storage<_Len, _Align>::type;
#endif

#define _CREATE_ALIGNED_STORAGE_SPECIALIZATION(n) \
template <size_t _Len>\
struct _LIBCPP_TEMPLATE_VIS aligned_storage<_Len, n>\
{\
    struct _ALIGNAS(n) type\
    {\
        unsigned char __lx[(_Len + n - 1)/n * n];\
    };\
}

_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x1);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x2);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x4);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x8);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x10);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x20);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x40);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x80);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x100);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x200);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x400);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x800);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x1000);
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x2000);
// PE/COFF does not support alignment beyond 8192 (=0x2000)

#if 0 /* evaluated by -frewrite-includes */
_CREATE_ALIGNED_STORAGE_SPECIALIZATION(0x4000);
#endif // !defined(_LIBCPP_OBJECT_FORMAT_COFF)

#undef _CREATE_ALIGNED_STORAGE_SPECIALIZATION


// aligned_union

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
    static const size_t alignment_value = __static_max<_LIBCPP_PREFERRED_ALIGNOF(_Type0),
                                                       _LIBCPP_PREFERRED_ALIGNOF(_Types)...>::value;
    static const size_t __len = __static_max<_Len, sizeof(_Type0),
                                             sizeof(_Types)...>::value;
    typedef typename aligned_storage<__len, alignment_value>::type type;
};


#if 1 /* evaluated by -frewrite-includes */
template <size_t _Len, class ..._Types> using aligned_union_t = typename aligned_union<_Len, _Types...>::type;
#endif

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

// __promote

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

// make_signed / make_unsigned

typedef
    __type_list<signed char,
    __type_list<signed short,
    __type_list<signed int,
    __type_list<signed long,
    __type_list<signed long long,
#ifndef _LIBCPP_HAS_NO_INT128
    __type_list<__int128_t,
#endif
    __nat
#ifndef _LIBCPP_HAS_NO_INT128
    >
#endif
    > > > > > __signed_types;

typedef
    __type_list<unsigned char,
    __type_list<unsigned short,
    __type_list<unsigned int,
    __type_list<unsigned long,
    __type_list<unsigned long long,
#ifndef _LIBCPP_HAS_NO_INT128
    __type_list<__uint128_t,
#endif
    __nat
#ifndef _LIBCPP_HAS_NO_INT128
    >
#endif
    > > > > > __unsigned_types;

template <class _TypeList, size_t _Size, bool = _Size <= sizeof(typename _TypeList::_Head)> struct __find_first;

template <class _Hp, class _Tp, size_t _Size>
struct __find_first<__type_list<_Hp, _Tp>, _Size, true>
{
    typedef _LIBCPP_NODEBUG_TYPE _Hp type;
};

template <class _Hp, class _Tp, size_t _Size>
struct __find_first<__type_list<_Hp, _Tp>, _Size, false>
{
    typedef _LIBCPP_NODEBUG_TYPE typename __find_first<_Tp, _Size>::type type;
};

template <class _Tp, class _Up, bool = is_const<typename remove_reference<_Tp>::type>::value,
                             bool = is_volatile<typename remove_reference<_Tp>::type>::value>
struct __apply_cv
{
    typedef _LIBCPP_NODEBUG_TYPE _Up type;
};

template <class _Tp, class _Up>
struct __apply_cv<_Tp, _Up, true, false>
{
    typedef _LIBCPP_NODEBUG_TYPE const _Up type;
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

template <> struct __make_signed<bool,               true> {};
template <> struct __make_signed<  signed short,     true> {typedef short     type;};
template <> struct __make_signed<unsigned short,     true> {typedef short     type;};
template <> struct __make_signed<  signed int,       true> {typedef int       type;};
template <> struct __make_signed<unsigned int,       true> {typedef int       type;};
template <> struct __make_signed<  signed long,      true> {typedef long      type;};
template <> struct __make_signed<unsigned long,      true> {typedef long      type;};
template <> struct __make_signed<  signed long long, true> {typedef long long type;};
template <> struct __make_signed<unsigned long long, true> {typedef long long type;};
#ifndef _LIBCPP_HAS_NO_INT128
template <> struct __make_signed<__int128_t,         true> {typedef __int128_t type;};
template <> struct __make_signed<__uint128_t,        true> {typedef __int128_t type;};
#endif

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS make_signed
{
    typedef typename __apply_cv<_Tp, typename __make_signed<typename remove_cv<_Tp>::type>::type>::type type;
};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using make_signed_t = typename make_signed<_Tp>::type;
#endif

template <class _Tp, bool = is_integral<_Tp>::value || is_enum<_Tp>::value>
struct __make_unsigned {};

template <class _Tp>
struct __make_unsigned<_Tp, true>
{
    typedef typename __find_first<__unsigned_types, sizeof(_Tp)>::type type;
};

template <> struct __make_unsigned<bool,               true> {};
template <> struct __make_unsigned<  signed short,     true> {typedef unsigned short     type;};
template <> struct __make_unsigned<unsigned short,     true> {typedef unsigned short     type;};
template <> struct __make_unsigned<  signed int,       true> {typedef unsigned int       type;};
template <> struct __make_unsigned<unsigned int,       true> {typedef unsigned int       type;};
template <> struct __make_unsigned<  signed long,      true> {typedef unsigned long      type;};
template <> struct __make_unsigned<unsigned long,      true> {typedef unsigned long      type;};
template <> struct __make_unsigned<  signed long long, true> {typedef unsigned long long type;};
template <> struct __make_unsigned<unsigned long long, true> {typedef unsigned long long type;};
#ifndef _LIBCPP_HAS_NO_INT128
template <> struct __make_unsigned<__int128_t,         true> {typedef __uint128_t        type;};
template <> struct __make_unsigned<__uint128_t,        true> {typedef __uint128_t        type;};
#endif

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS make_unsigned
{
    typedef typename __apply_cv<_Tp, typename __make_unsigned<typename remove_cv<_Tp>::type>::type>::type type;
};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using make_unsigned_t = typename make_unsigned<_Tp>::type;
#endif

template <class _Tp, class _Up, class = void>
struct __common_type2_imp {};

template <class _Tp, class _Up>
struct __common_type2_imp<_Tp, _Up,
                          typename __void_t<decltype(
                                            true ? _VSTD::declval<_Tp>() : _VSTD::declval<_Up>()
                                            )>::type>
{
  typedef _LIBCPP_NODEBUG_TYPE typename decay<decltype(
                         true ? _VSTD::declval<_Tp>() : _VSTD::declval<_Up>()
                         )>::type type;
};

template <class, class = void>
struct __common_type_impl {};

// Clang provides variadic templates in C++03 as an extension.

#if 1 /* evaluated by -frewrite-includes */
# define _LIBCPP_OPTIONAL_PACK(...) , __VA_ARGS__
template <class... Tp>
struct __common_types;
template <class... _Tp>
struct _LIBCPP_TEMPLATE_VIS common_type;
#else
# define _LIBCPP_OPTIONAL_PACK(...)
struct __no_arg;
template <class _Tp, class _Up, class = __no_arg>
struct __common_types;
template <class _Tp = __no_arg, class _Up = __no_arg, class _Vp = __no_arg,
          class _Unused = __no_arg>
struct common_type {
  static_assert(sizeof(_Unused) == 0,
                "common_type accepts at most 3 arguments in C++03");
};
#endif // _LIBCPP_CXX03_LANG

template <class _Tp, class _Up>
struct __common_type_impl<
    __common_types<_Tp, _Up>,
    typename __void_t<typename common_type<_Tp, _Up>::type>::type>
{
  typedef typename common_type<_Tp, _Up>::type type;
};

template <class _Tp, class _Up, class _Vp _LIBCPP_OPTIONAL_PACK(class... _Rest)>
struct __common_type_impl<
    __common_types<_Tp, _Up, _Vp _LIBCPP_OPTIONAL_PACK(_Rest...)>,
    typename __void_t<typename common_type<_Tp, _Up>::type>::type>
    : __common_type_impl<__common_types<typename common_type<_Tp, _Up>::type,
                                        _Vp _LIBCPP_OPTIONAL_PACK(_Rest...)> > {
};

// bullet 1 - sizeof...(Tp) == 0

template <>
struct _LIBCPP_TEMPLATE_VIS common_type<> {};

// bullet 2 - sizeof...(Tp) == 1

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS common_type<_Tp>
    : public common_type<_Tp, _Tp> {};

// bullet 3 - sizeof...(Tp) == 2

template <class _Tp, class _Up>
struct _LIBCPP_TEMPLATE_VIS common_type<_Tp, _Up>
    : conditional<
        _IsSame<_Tp, typename decay<_Tp>::type>::value && _IsSame<_Up, typename decay<_Up>::type>::value,
        __common_type2_imp<_Tp, _Up>,
        common_type<typename decay<_Tp>::type, typename decay<_Up>::type>
    >::type
{};

// bullet 4 - sizeof...(Tp) > 2

template <class _Tp, class _Up, class _Vp _LIBCPP_OPTIONAL_PACK(class... _Rest)>
struct _LIBCPP_TEMPLATE_VIS
    common_type<_Tp, _Up, _Vp _LIBCPP_OPTIONAL_PACK(_Rest...)>
    : __common_type_impl<
          __common_types<_Tp, _Up, _Vp _LIBCPP_OPTIONAL_PACK(_Rest...)> > {};

#undef _LIBCPP_OPTIONAL_PACK


#if 1 /* evaluated by -frewrite-includes */
template <class ..._Tp> using common_type_t = typename common_type<_Tp...>::type;
#endif

// is_assignable

template<typename, typename _Tp> struct __select_2nd { typedef _LIBCPP_NODEBUG_TYPE _Tp type; };

template <class _Tp, class _Arg>
typename __select_2nd<decltype((_VSTD::declval<_Tp>() = _VSTD::declval<_Arg>())), true_type>::type
__is_assignable_test(int);

template <class, class>
false_type __is_assignable_test(...);


template <class _Tp, class _Arg, bool = is_void<_Tp>::value || is_void<_Arg>::value>
struct __is_assignable_imp
    : public decltype((_VSTD::__is_assignable_test<_Tp, _Arg>(0))) {};

template <class _Tp, class _Arg>
struct __is_assignable_imp<_Tp, _Arg, true>
    : public false_type
{
};

template <class _Tp, class _Arg>
struct is_assignable
    : public __is_assignable_imp<_Tp, _Arg> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, class _Arg>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_assignable_v
    = is_assignable<_Tp, _Arg>::value;
#endif

// is_copy_assignable

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_copy_assignable
    : public is_assignable<typename add_lvalue_reference<_Tp>::type,
                  typename add_lvalue_reference<typename add_const<_Tp>::type>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_copy_assignable_v
    = is_copy_assignable<_Tp>::value;
#endif

// is_move_assignable

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_move_assignable
    : public is_assignable<typename add_lvalue_reference<_Tp>::type,
                           typename add_rvalue_reference<_Tp>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_move_assignable_v
    = is_move_assignable<_Tp>::value;
#endif

// is_destructible

//  if it's a reference, return true
//  if it's a function, return false
//  if it's   void,     return false
//  if it's an array of unknown bound, return false
//  Otherwise, return "std::declval<_Up&>().~_Up()" is well-formed
//    where _Up is remove_all_extents<_Tp>::type

template <class>
struct __is_destructible_apply { typedef int type; };

template <typename _Tp>
struct __is_destructor_wellformed {
    template <typename _Tp1>
    static char  __test (
        typename __is_destructible_apply<decltype(_VSTD::declval<_Tp1&>().~_Tp1())>::type
    );

    template <typename _Tp1>
    static __two __test (...);

    static const bool value = sizeof(__test<_Tp>(12)) == sizeof(char);
};

template <class _Tp, bool>
struct __destructible_imp;

template <class _Tp>
struct __destructible_imp<_Tp, false>
   : public _VSTD::integral_constant<bool,
        __is_destructor_wellformed<typename _VSTD::remove_all_extents<_Tp>::type>::value> {};

template <class _Tp>
struct __destructible_imp<_Tp, true>
    : public _VSTD::true_type {};

template <class _Tp, bool>
struct __destructible_false;

template <class _Tp>
struct __destructible_false<_Tp, false> : public __destructible_imp<_Tp, _VSTD::is_reference<_Tp>::value> {};

template <class _Tp>
struct __destructible_false<_Tp, true> : public _VSTD::false_type {};

template <class _Tp>
struct is_destructible
    : public __destructible_false<_Tp, _VSTD::is_function<_Tp>::value> {};

template <class _Tp>
struct is_destructible<_Tp[]>
    : public _VSTD::false_type {};

template <>
struct is_destructible<void>
    : public _VSTD::false_type {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_destructible_v
    = is_destructible<_Tp>::value;
#endif

// move

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
typename remove_reference<_Tp>::type&&
move(_Tp&& __t) _NOEXCEPT
{
    typedef _LIBCPP_NODEBUG_TYPE typename remove_reference<_Tp>::type _Up;
    return static_cast<_Up&&>(__t);
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
_Tp&&
forward(typename remove_reference<_Tp>::type& __t) _NOEXCEPT
{
    return static_cast<_Tp&&>(__t);
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
_Tp&&
forward(typename remove_reference<_Tp>::type&& __t) _NOEXCEPT
{
    static_assert(!is_lvalue_reference<_Tp>::value,
                  "can not forward an rvalue as an lvalue");
    return static_cast<_Tp&&>(__t);
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
typename decay<_Tp>::type
__decay_copy(_Tp&& __t)
{
    return _VSTD::forward<_Tp>(__t);
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


#if 1 /* evaluated by -frewrite-includes */

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

#endif  // __has_feature(cxx_reference_qualified_functions) || defined(_LIBCPP_COMPILER_GCC)


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
//     typedef ... _ClassType;
//     typedef ... _ReturnType;
//     typedef ... _FnType;
};


template <class _DecayedFp>
struct __member_pointer_class_type {};

template <class _Ret, class _ClassType>
struct __member_pointer_class_type<_Ret _ClassType::*> {
  typedef _ClassType type;
};

// result_of

template <class _Callable> class result_of;

// template <class T, class... Args> struct is_constructible;

namespace __is_construct
{
struct __nat {};
}




#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, class ..._Args>
struct _LIBCPP_TEMPLATE_VIS is_constructible
    : public integral_constant<bool, __is_constructible(_Tp, _Args...)>
    {};
#else
template <class _Tp, class... _Args>
struct _LIBCPP_TEMPLATE_VIS is_constructible
    : public __libcpp_is_constructible<_Tp, _Args...>::type {};
#endif


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, class ..._Args>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_constructible_v
    = is_constructible<_Tp, _Args...>::value;
#endif

// is_default_constructible

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_default_constructible
    : public is_constructible<_Tp>
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_default_constructible_v
    = is_default_constructible<_Tp>::value;
#endif

#ifndef _LIBCPP_CXX03_LANG
// First of all, we can't implement this check in C++03 mode because the {}
// default initialization syntax isn't valid.
// Second, we implement the trait in a funny manner with two defaulted template
// arguments to workaround Clang's PR43454.
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
#endif // !C++03

// is_copy_constructible

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_copy_constructible
    : public is_constructible<_Tp,
                  typename add_lvalue_reference<typename add_const<_Tp>::type>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_copy_constructible_v
    = is_copy_constructible<_Tp>::value;
#endif

// is_move_constructible

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_move_constructible
    : public is_constructible<_Tp, typename add_rvalue_reference<_Tp>::type>
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_move_constructible_v
    = is_move_constructible<_Tp>::value;
#endif

// is_trivially_constructible


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp, class... _Args>
struct _LIBCPP_TEMPLATE_VIS is_trivially_constructible
    : integral_constant<bool, __is_trivially_constructible(_Tp, _Args...)>
{
};

#else  // !__has_feature(is_trivially_constructible)

template <class _Tp, class... _Args>
struct _LIBCPP_TEMPLATE_VIS is_trivially_constructible
    : false_type
{
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_trivially_constructible<_Tp>

#if 0 /* evaluated by -frewrite-includes */
    : integral_constant<bool, __has_trivial_constructor(_Tp)>
#else
    : integral_constant<bool, is_scalar<_Tp>::value>
#endif
{
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_trivially_constructible<_Tp, _Tp&&>
    : integral_constant<bool, is_scalar<_Tp>::value>
{
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_trivially_constructible<_Tp, const _Tp&>
    : integral_constant<bool, is_scalar<_Tp>::value>
{
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_trivially_constructible<_Tp, _Tp&>
    : integral_constant<bool, is_scalar<_Tp>::value>
{
};

#endif  // !__has_feature(is_trivially_constructible)



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, class... _Args>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_trivially_constructible_v
    = is_trivially_constructible<_Tp, _Args...>::value;
#endif

// is_trivially_default_constructible

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_trivially_default_constructible
    : public is_trivially_constructible<_Tp>
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_trivially_default_constructible_v
    = is_trivially_default_constructible<_Tp>::value;
#endif

// is_trivially_copy_constructible

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_trivially_copy_constructible
    : public is_trivially_constructible<_Tp, typename add_lvalue_reference<const _Tp>::type>
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_trivially_copy_constructible_v
    = is_trivially_copy_constructible<_Tp>::value;
#endif

// is_trivially_move_constructible

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_trivially_move_constructible
    : public is_trivially_constructible<_Tp, typename add_rvalue_reference<_Tp>::type>
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_trivially_move_constructible_v
    = is_trivially_move_constructible<_Tp>::value;
#endif

// is_trivially_assignable


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp, class _Arg>
struct is_trivially_assignable
    : integral_constant<bool, __is_trivially_assignable(_Tp, _Arg)>
{
};

#else  // !__has_feature(is_trivially_assignable)

template <class _Tp, class _Arg>
struct is_trivially_assignable
    : public false_type {};

template <class _Tp>
struct is_trivially_assignable<_Tp&, _Tp>
    : integral_constant<bool, is_scalar<_Tp>::value> {};

template <class _Tp>
struct is_trivially_assignable<_Tp&, _Tp&>
    : integral_constant<bool, is_scalar<_Tp>::value> {};

template <class _Tp>
struct is_trivially_assignable<_Tp&, const _Tp&>
    : integral_constant<bool, is_scalar<_Tp>::value> {};

template <class _Tp>
struct is_trivially_assignable<_Tp&, _Tp&&>
    : integral_constant<bool, is_scalar<_Tp>::value> {};

#endif  // !__has_feature(is_trivially_assignable)


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, class _Arg>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_trivially_assignable_v
    = is_trivially_assignable<_Tp, _Arg>::value;
#endif

// is_trivially_copy_assignable

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_trivially_copy_assignable
    : public is_trivially_assignable<typename add_lvalue_reference<_Tp>::type,
                  typename add_lvalue_reference<typename add_const<_Tp>::type>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_trivially_copy_assignable_v
    = is_trivially_copy_assignable<_Tp>::value;
#endif

// is_trivially_move_assignable

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_trivially_move_assignable
    : public is_trivially_assignable<typename add_lvalue_reference<_Tp>::type,
                                     typename add_rvalue_reference<_Tp>::type>
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_trivially_move_assignable_v
    = is_trivially_move_assignable<_Tp>::value;
#endif

// is_trivially_destructible


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_trivially_destructible
    : public integral_constant<bool, __is_trivially_destructible(_Tp)> {};


#elif 0 /* evaluated by -frewrite-includes */

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_trivially_destructible
    : public integral_constant<bool, is_destructible<_Tp>::value && __has_trivial_destructor(_Tp)> {};

#else

template <class _Tp> struct __libcpp_trivial_destructor
    : public integral_constant<bool, is_scalar<_Tp>::value ||
                                     is_reference<_Tp>::value> {};

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_trivially_destructible
    : public __libcpp_trivial_destructor<typename remove_all_extents<_Tp>::type> {};

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_trivially_destructible<_Tp[]>
    : public false_type {};

#endif


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_trivially_destructible_v
    = is_trivially_destructible<_Tp>::value;
#endif

// is_nothrow_constructible


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp, class... _Args>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_constructible
    : public integral_constant<bool, __is_nothrow_constructible(_Tp, _Args...)> {};

#else

template <bool, bool, class _Tp, class... _Args> struct __libcpp_is_nothrow_constructible;

template <class _Tp, class... _Args>
struct __libcpp_is_nothrow_constructible</*is constructible*/true, /*is reference*/false, _Tp, _Args...>
    : public integral_constant<bool, noexcept(_Tp(declval<_Args>()...))>
{
};

template <class _Tp>
void __implicit_conversion_to(_Tp) noexcept { }

template <class _Tp, class _Arg>
struct __libcpp_is_nothrow_constructible</*is constructible*/true, /*is reference*/true, _Tp, _Arg>
    : public integral_constant<bool, noexcept(__implicit_conversion_to<_Tp>(declval<_Arg>()))>
{
};

template <class _Tp, bool _IsReference, class... _Args>
struct __libcpp_is_nothrow_constructible</*is constructible*/false, _IsReference, _Tp, _Args...>
    : public false_type
{
};

template <class _Tp, class... _Args>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_constructible
    : __libcpp_is_nothrow_constructible<is_constructible<_Tp, _Args...>::value, is_reference<_Tp>::value, _Tp, _Args...>
{
};

template <class _Tp, size_t _Ns>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_constructible<_Tp[_Ns]>
    : __libcpp_is_nothrow_constructible<is_constructible<_Tp>::value, is_reference<_Tp>::value, _Tp>
{
};

#endif  // _LIBCPP_HAS_NO_NOEXCEPT



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, class ..._Args>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_nothrow_constructible_v
    = is_nothrow_constructible<_Tp, _Args...>::value;
#endif

// is_nothrow_default_constructible

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_nothrow_default_constructible
    : public is_nothrow_constructible<_Tp>
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_nothrow_default_constructible_v
    = is_nothrow_default_constructible<_Tp>::value;
#endif

// is_nothrow_copy_constructible

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_nothrow_copy_constructible
    : public is_nothrow_constructible<_Tp,
                  typename add_lvalue_reference<typename add_const<_Tp>::type>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_nothrow_copy_constructible_v
    = is_nothrow_copy_constructible<_Tp>::value;
#endif

// is_nothrow_move_constructible

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_nothrow_move_constructible
    : public is_nothrow_constructible<_Tp, typename add_rvalue_reference<_Tp>::type>
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_nothrow_move_constructible_v
    = is_nothrow_move_constructible<_Tp>::value;
#endif

// is_nothrow_assignable


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp, class _Arg>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_assignable
    : public integral_constant<bool, __is_nothrow_assignable(_Tp, _Arg)> {};

#else

template <bool, class _Tp, class _Arg> struct __libcpp_is_nothrow_assignable;

template <class _Tp, class _Arg>
struct __libcpp_is_nothrow_assignable<false, _Tp, _Arg>
    : public false_type
{
};

template <class _Tp, class _Arg>
struct __libcpp_is_nothrow_assignable<true, _Tp, _Arg>
    : public integral_constant<bool, noexcept(_VSTD::declval<_Tp>() = _VSTD::declval<_Arg>()) >
{
};

template <class _Tp, class _Arg>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_assignable
    : public __libcpp_is_nothrow_assignable<is_assignable<_Tp, _Arg>::value, _Tp, _Arg>
{
};

#endif  // _LIBCPP_HAS_NO_NOEXCEPT


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, class _Arg>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_nothrow_assignable_v
    = is_nothrow_assignable<_Tp, _Arg>::value;
#endif

// is_nothrow_copy_assignable

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_nothrow_copy_assignable
    : public is_nothrow_assignable<typename add_lvalue_reference<_Tp>::type,
                  typename add_lvalue_reference<typename add_const<_Tp>::type>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_nothrow_copy_assignable_v
    = is_nothrow_copy_assignable<_Tp>::value;
#endif

// is_nothrow_move_assignable

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_nothrow_move_assignable
    : public is_nothrow_assignable<typename add_lvalue_reference<_Tp>::type,
                                     typename add_rvalue_reference<_Tp>::type>
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_nothrow_move_assignable_v
    = is_nothrow_move_assignable<_Tp>::value;
#endif

// is_nothrow_destructible


#if 1 /* evaluated by -frewrite-includes */

template <bool, class _Tp> struct __libcpp_is_nothrow_destructible;

template <class _Tp>
struct __libcpp_is_nothrow_destructible<false, _Tp>
    : public false_type
{
};

template <class _Tp>
struct __libcpp_is_nothrow_destructible<true, _Tp>
    : public integral_constant<bool, noexcept(_VSTD::declval<_Tp>().~_Tp()) >
{
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_destructible
    : public __libcpp_is_nothrow_destructible<is_destructible<_Tp>::value, _Tp>
{
};

template <class _Tp, size_t _Ns>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_destructible<_Tp[_Ns]>
    : public is_nothrow_destructible<_Tp>
{
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_destructible<_Tp&>
    : public true_type
{
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_destructible<_Tp&&>
    : public true_type
{
};

#else

template <class _Tp> struct __libcpp_nothrow_destructor
    : public integral_constant<bool, is_scalar<_Tp>::value ||
                                     is_reference<_Tp>::value> {};

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_nothrow_destructible
    : public __libcpp_nothrow_destructor<typename remove_all_extents<_Tp>::type> {};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_destructible<_Tp[]>
    : public false_type {};

#endif


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_nothrow_destructible_v
    = is_nothrow_destructible<_Tp>::value;
#endif

// is_pod


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_pod
    : public integral_constant<bool, __is_pod(_Tp)> {};

#else

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_pod
    : public integral_constant<bool, is_trivially_default_constructible<_Tp>::value   &&
                                     is_trivially_copy_constructible<_Tp>::value      &&
                                     is_trivially_copy_assignable<_Tp>::value    &&
                                     is_trivially_destructible<_Tp>::value> {};

#endif


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_pod_v
    = is_pod<_Tp>::value;
#endif

// is_literal_type;

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_literal_type
    : public integral_constant<bool, __is_literal_type(_Tp)>
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_literal_type_v
    = is_literal_type<_Tp>::value;
#endif

// is_standard_layout;

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_standard_layout

#if 1 /* evaluated by -frewrite-includes */
    : public integral_constant<bool, __is_standard_layout(_Tp)>
#else
    : integral_constant<bool, is_scalar<typename remove_all_extents<_Tp>::type>::value>
#endif
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_standard_layout_v
    = is_standard_layout<_Tp>::value;
#endif

// is_trivially_copyable;

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_trivially_copyable

#if 1 /* evaluated by -frewrite-includes */
    : public integral_constant<bool, __is_trivially_copyable(_Tp)>

#elif 0 /* evaluated by -frewrite-includes */
    : public integral_constant<bool, !is_volatile<_Tp>::value && __is_trivially_copyable(_Tp)>
#else
    : integral_constant<bool, is_scalar<typename remove_all_extents<_Tp>::type>::value>
#endif
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_trivially_copyable_v
    = is_trivially_copyable<_Tp>::value;
#endif

// is_trivial;

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS is_trivial

#if 1 /* evaluated by -frewrite-includes */
    : public integral_constant<bool, __is_trivial(_Tp)>
#else
    : integral_constant<bool, is_trivially_copyable<_Tp>::value &&
                                 is_trivially_default_constructible<_Tp>::value>
#endif
    {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR _LIBCPP_CONSTEXPR bool is_trivial_v
    = is_trivial<_Tp>::value;
#endif

template <class _Tp> struct __is_reference_wrapper_impl : public false_type {};
template <class _Tp> struct __is_reference_wrapper_impl<reference_wrapper<_Tp> > : public true_type {};
template <class _Tp> struct __is_reference_wrapper
    : public __is_reference_wrapper_impl<typename remove_cv<_Tp>::type> {};

#ifndef _LIBCPP_CXX03_LANG

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

// __invoke forward declarations

// fall back - none of the bullets

#define _LIBCPP_INVOKE_RETURN(...) \
    noexcept(noexcept(__VA_ARGS__)) -> decltype(__VA_ARGS__) \
    { return __VA_ARGS__; }

template <class ..._Args>
auto __invoke(__any, _Args&& ...__args) -> __nat;

template <class ..._Args>
auto __invoke_constexpr(__any, _Args&& ...__args) -> __nat;

// bullets 1, 2 and 3

template <class _Fp, class _A0, class ..._Args,
          class = __enable_if_bullet1<_Fp, _A0>>
inline _LIBCPP_INLINE_VISIBILITY
auto
__invoke(_Fp&& __f, _A0&& __a0, _Args&& ...__args)
_LIBCPP_INVOKE_RETURN((_VSTD::forward<_A0>(__a0).*__f)(_VSTD::forward<_Args>(__args)...))

template <class _Fp, class _A0, class ..._Args,
          class = __enable_if_bullet1<_Fp, _A0>>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_CONSTEXPR auto
__invoke_constexpr(_Fp&& __f, _A0&& __a0, _Args&& ...__args)
_LIBCPP_INVOKE_RETURN((_VSTD::forward<_A0>(__a0).*__f)(_VSTD::forward<_Args>(__args)...))

template <class _Fp, class _A0, class ..._Args,
          class = __enable_if_bullet2<_Fp, _A0>>
inline _LIBCPP_INLINE_VISIBILITY
auto
__invoke(_Fp&& __f, _A0&& __a0, _Args&& ...__args)
_LIBCPP_INVOKE_RETURN((__a0.get().*__f)(_VSTD::forward<_Args>(__args)...))

template <class _Fp, class _A0, class ..._Args,
          class = __enable_if_bullet2<_Fp, _A0>>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_CONSTEXPR auto
__invoke_constexpr(_Fp&& __f, _A0&& __a0, _Args&& ...__args)
_LIBCPP_INVOKE_RETURN((__a0.get().*__f)(_VSTD::forward<_Args>(__args)...))

template <class _Fp, class _A0, class ..._Args,
          class = __enable_if_bullet3<_Fp, _A0>>
inline _LIBCPP_INLINE_VISIBILITY
auto
__invoke(_Fp&& __f, _A0&& __a0, _Args&& ...__args)
_LIBCPP_INVOKE_RETURN(((*_VSTD::forward<_A0>(__a0)).*__f)(_VSTD::forward<_Args>(__args)...))

template <class _Fp, class _A0, class ..._Args,
          class = __enable_if_bullet3<_Fp, _A0>>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_CONSTEXPR auto
__invoke_constexpr(_Fp&& __f, _A0&& __a0, _Args&& ...__args)
_LIBCPP_INVOKE_RETURN(((*_VSTD::forward<_A0>(__a0)).*__f)(_VSTD::forward<_Args>(__args)...))

// bullets 4, 5 and 6

template <class _Fp, class _A0,
          class = __enable_if_bullet4<_Fp, _A0>>
inline _LIBCPP_INLINE_VISIBILITY
auto
__invoke(_Fp&& __f, _A0&& __a0)
_LIBCPP_INVOKE_RETURN(_VSTD::forward<_A0>(__a0).*__f)

template <class _Fp, class _A0,
          class = __enable_if_bullet4<_Fp, _A0>>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_CONSTEXPR auto
__invoke_constexpr(_Fp&& __f, _A0&& __a0)
_LIBCPP_INVOKE_RETURN(_VSTD::forward<_A0>(__a0).*__f)

template <class _Fp, class _A0,
          class = __enable_if_bullet5<_Fp, _A0>>
inline _LIBCPP_INLINE_VISIBILITY
auto
__invoke(_Fp&& __f, _A0&& __a0)
_LIBCPP_INVOKE_RETURN(__a0.get().*__f)

template <class _Fp, class _A0,
          class = __enable_if_bullet5<_Fp, _A0>>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_CONSTEXPR auto
__invoke_constexpr(_Fp&& __f, _A0&& __a0)
_LIBCPP_INVOKE_RETURN(__a0.get().*__f)

template <class _Fp, class _A0,
          class = __enable_if_bullet6<_Fp, _A0>>
inline _LIBCPP_INLINE_VISIBILITY
auto
__invoke(_Fp&& __f, _A0&& __a0)
_LIBCPP_INVOKE_RETURN((*_VSTD::forward<_A0>(__a0)).*__f)

template <class _Fp, class _A0,
          class = __enable_if_bullet6<_Fp, _A0>>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_CONSTEXPR auto
__invoke_constexpr(_Fp&& __f, _A0&& __a0)
_LIBCPP_INVOKE_RETURN((*_VSTD::forward<_A0>(__a0)).*__f)

// bullet 7

template <class _Fp, class ..._Args>
inline _LIBCPP_INLINE_VISIBILITY
auto
__invoke(_Fp&& __f, _Args&& ...__args)
_LIBCPP_INVOKE_RETURN(_VSTD::forward<_Fp>(__f)(_VSTD::forward<_Args>(__args)...))

template <class _Fp, class ..._Args>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_CONSTEXPR auto
__invoke_constexpr(_Fp&& __f, _Args&& ...__args)
_LIBCPP_INVOKE_RETURN(_VSTD::forward<_Fp>(__f)(_VSTD::forward<_Args>(__args)...))

#undef _LIBCPP_INVOKE_RETURN

// __invokable
template <class _Ret, class _Fp, class ..._Args>
struct __invokable_r
{
  template <class _XFp, class ..._XArgs>
  static auto __try_call(int) -> decltype(
    _VSTD::__invoke(_VSTD::declval<_XFp>(), _VSTD::declval<_XArgs>()...));
  template <class _XFp, class ..._XArgs>
  static __nat __try_call(...);

  // FIXME: Check that _Ret, _Fp, and _Args... are all complete types, cv void,
  // or incomplete array types as required by the standard.
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
        _VSTD::__invoke(_VSTD::declval<_Fp>(), _VSTD::declval<_Args>()...)));
};

template <class _Ret, class _Fp, class ..._Args>
struct __nothrow_invokable_r_imp<true, true, _Ret, _Fp, _Args...>
{
    static const bool value = noexcept(
        _VSTD::__invoke(_VSTD::declval<_Fp>(), _VSTD::declval<_Args>()...));
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

// result_of

template <class _Fp, class ..._Args>
class _LIBCPP_TEMPLATE_VIS result_of<_Fp(_Args...)>
    : public __invoke_of<_Fp, _Args...>
{
};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using result_of_t = typename result_of<_Tp>::type;
#endif


#if 1 /* evaluated by -frewrite-includes */

// invoke_result

template <class _Fn, class... _Args>
struct _LIBCPP_TEMPLATE_VIS invoke_result
    : __invoke_of<_Fn, _Args...>
{
};

template <class _Fn, class... _Args>
using invoke_result_t = typename invoke_result<_Fn, _Args...>::type;

// is_invocable

template <class _Fn, class ..._Args>
struct _LIBCPP_TEMPLATE_VIS is_invocable
    : integral_constant<bool, __invokable<_Fn, _Args...>::value> {};

template <class _Ret, class _Fn, class ..._Args>
struct _LIBCPP_TEMPLATE_VIS is_invocable_r
    : integral_constant<bool, __invokable_r<_Ret, _Fn, _Args...>::value> {};

template <class _Fn, class ..._Args>
_LIBCPP_INLINE_VAR constexpr bool is_invocable_v
    = is_invocable<_Fn, _Args...>::value;

template <class _Ret, class _Fn, class ..._Args>
_LIBCPP_INLINE_VAR constexpr bool is_invocable_r_v
    = is_invocable_r<_Ret, _Fn, _Args...>::value;

// is_nothrow_invocable

template <class _Fn, class ..._Args>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_invocable
    : integral_constant<bool, __nothrow_invokable<_Fn, _Args...>::value> {};

template <class _Ret, class _Fn, class ..._Args>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_invocable_r
    : integral_constant<bool, __nothrow_invokable_r<_Ret, _Fn, _Args...>::value> {};

template <class _Fn, class ..._Args>
_LIBCPP_INLINE_VAR constexpr bool is_nothrow_invocable_v
    = is_nothrow_invocable<_Fn, _Args...>::value;

template <class _Ret, class _Fn, class ..._Args>
_LIBCPP_INLINE_VAR constexpr bool is_nothrow_invocable_r_v
    = is_nothrow_invocable_r<_Ret, _Fn, _Args...>::value;

#endif // _LIBCPP_STD_VER > 14

#endif  // !defined(_LIBCPP_CXX03_LANG)

template <class _Tp> struct __is_swappable;
template <class _Tp> struct __is_nothrow_swappable;

// swap, swap_ranges

template <class _ForwardIterator1, class _ForwardIterator2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
_ForwardIterator2
swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 __first2);

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
#ifndef _LIBCPP_CXX03_LANG
typename enable_if
<
    is_move_constructible<_Tp>::value &&
    is_move_assignable<_Tp>::value
>::type
#else
void
#endif
_LIBCPP_CONSTEXPR_AFTER_CXX17
swap(_Tp& __x, _Tp& __y) _NOEXCEPT_(is_nothrow_move_constructible<_Tp>::value &&
                                    is_nothrow_move_assignable<_Tp>::value)
{
    _Tp __t(_VSTD::move(__x));
    __x = _VSTD::move(__y);
    __y = _VSTD::move(__t);
}

template<class _Tp, size_t _Np>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
typename enable_if<
    __is_swappable<_Tp>::value
>::type
swap(_Tp (&__a)[_Np], _Tp (&__b)[_Np]) _NOEXCEPT_(__is_nothrow_swappable<_Tp>::value)
{
    _VSTD::swap_ranges(__a, __a + _Np, __b);
}

template <class _ForwardIterator1, class _ForwardIterator2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
_ForwardIterator2
swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 __first2)
{
    for(; __first1 != __last1; ++__first1, (void) ++__first2)
        swap(*__first1, *__first2);
    return __first2;
}

// iter_swap

template <class _ForwardIterator1, class _ForwardIterator2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
void
iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    //                                  _NOEXCEPT_(_NOEXCEPT_(swap(*__a, *__b)))
               _NOEXCEPT_(_NOEXCEPT_(swap(*_VSTD::declval<_ForwardIterator1>(),
                                          *_VSTD::declval<_ForwardIterator2>())))
{
    swap(*__a, *__b);
}

// __swappable

namespace __detail
{
// ALL generic swap overloads MUST already have a declaration available at this point.

template <class _Tp, class _Up = _Tp,
          bool _NotVoid = !is_void<_Tp>::value && !is_void<_Up>::value>
struct __swappable_with
{
    template <class _LHS, class _RHS>
    static decltype(swap(_VSTD::declval<_LHS>(), _VSTD::declval<_RHS>()))
    __test_swap(int);
    template <class, class>
    static __nat __test_swap(long);

    // Extra parens are needed for the C++03 definition of decltype.
    typedef decltype((__test_swap<_Tp, _Up>(0))) __swap1;
    typedef decltype((__test_swap<_Up, _Tp>(0))) __swap2;

    static const bool value = _IsNotSame<__swap1, __nat>::value
                           && _IsNotSame<__swap2, __nat>::value;
};

template <class _Tp, class _Up>
struct __swappable_with<_Tp, _Up,  false> : false_type {};

template <class _Tp, class _Up = _Tp, bool _Swappable = __swappable_with<_Tp, _Up>::value>
struct __nothrow_swappable_with {
  static const bool value =
#ifndef _LIBCPP_HAS_NO_NOEXCEPT
      noexcept(swap(_VSTD::declval<_Tp>(), _VSTD::declval<_Up>()))
  &&  noexcept(swap(_VSTD::declval<_Up>(), _VSTD::declval<_Tp>()));
#else
      false;
#endif
};

template <class _Tp, class _Up>
struct __nothrow_swappable_with<_Tp, _Up, false> : false_type {};

}  // __detail

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


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp, class _Up>
struct _LIBCPP_TEMPLATE_VIS is_swappable_with
    : public integral_constant<bool, __detail::__swappable_with<_Tp, _Up>::value>
{
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_swappable
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
struct _LIBCPP_TEMPLATE_VIS is_nothrow_swappable_with
    : public integral_constant<bool, __detail::__nothrow_swappable_with<_Tp, _Up>::value>
{
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS is_nothrow_swappable
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
_LIBCPP_INLINE_VAR constexpr bool is_swappable_with_v
    = is_swappable_with<_Tp, _Up>::value;

template <class _Tp>
_LIBCPP_INLINE_VAR constexpr bool is_swappable_v
    = is_swappable<_Tp>::value;

template <class _Tp, class _Up>
_LIBCPP_INLINE_VAR constexpr bool is_nothrow_swappable_with_v
    = is_nothrow_swappable_with<_Tp, _Up>::value;

template <class _Tp>
_LIBCPP_INLINE_VAR constexpr bool is_nothrow_swappable_v
    = is_nothrow_swappable<_Tp>::value;

#endif // _LIBCPP_STD_VER > 14

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


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> using underlying_type_t = typename underlying_type<_Tp>::type;
#endif


template <class _Tp, bool = is_enum<_Tp>::value>
struct __sfinae_underlying_type
{
    typedef typename underlying_type<_Tp>::type type;
    typedef decltype(((type)1) + 0) __promoted_type;
};

template <class _Tp>
struct __sfinae_underlying_type<_Tp, false> {};

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
int __convert_to_integral(int __val) { return __val; }

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
unsigned __convert_to_integral(unsigned __val) { return __val; }

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
long __convert_to_integral(long __val) { return __val; }

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
unsigned long __convert_to_integral(unsigned long __val) { return __val; }

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
long long __convert_to_integral(long long __val) { return __val; }

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
unsigned long long __convert_to_integral(unsigned long long __val) {return __val; }

template<typename _Fp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
typename enable_if<is_floating_point<_Fp>::value, long long>::type
 __convert_to_integral(_Fp __val) { return __val; }

#ifndef _LIBCPP_HAS_NO_INT128
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
__int128_t __convert_to_integral(__int128_t __val) { return __val; }

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
__uint128_t __convert_to_integral(__uint128_t __val) { return __val; }
#endif

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
typename __sfinae_underlying_type<_Tp>::__promoted_type
__convert_to_integral(_Tp __val) { return __val; }

#ifndef _LIBCPP_CXX03_LANG

template <class _Tp>
struct __has_operator_addressof_member_imp
{
    template <class _Up>
        static auto __test(int)
            -> typename __select_2nd<decltype(_VSTD::declval<_Up>().operator&()), true_type>::type;
    template <class>
        static auto __test(long) -> false_type;

    static const bool value = decltype(__test<_Tp>(0))::value;
};

template <class _Tp>
struct __has_operator_addressof_free_imp
{
    template <class _Up>
        static auto __test(int)
            -> typename __select_2nd<decltype(operator&(_VSTD::declval<_Up>())), true_type>::type;
    template <class>
        static auto __test(long) -> false_type;

    static const bool value = decltype(__test<_Tp>(0))::value;
};

template <class _Tp>
struct __has_operator_addressof
    : public integral_constant<bool, __has_operator_addressof_member_imp<_Tp>::value
                                  || __has_operator_addressof_free_imp<_Tp>::value>
{};

#endif  // _LIBCPP_CXX03_LANG


#if 1 /* evaluated by -frewrite-includes */

template <class...> using void_t = void;

template <class... _Args>
struct conjunction : _And<_Args...> {};
template<class... _Args>
_LIBCPP_INLINE_VAR constexpr bool conjunction_v
    = conjunction<_Args...>::value;

template <class... _Args>
struct disjunction : _Or<_Args...> {};
template<class... _Args>
_LIBCPP_INLINE_VAR constexpr bool disjunction_v
    = disjunction<_Args...>::value;

template <class _Tp>
struct negation : _Not<_Tp> {};
template<class _Tp>
_LIBCPP_INLINE_VAR constexpr bool negation_v
    = negation<_Tp>::value;
#endif  // _LIBCPP_STD_VER > 14

// These traits are used in __tree and __hash_table
#ifndef _LIBCPP_CXX03_LANG
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

// __can_extract_map_key uses true_type/false_type instead of the tags.
// It returns true if _Key != _ContainerValueTy (the container is a map not a set)
// and _ValTy == _Key.
template <class _ValTy, class _Key, class _ContainerValueTy,
          class _RawValTy = typename __unconstref<_ValTy>::type>
struct __can_extract_map_key
    : integral_constant<bool, _IsSame<_RawValTy, _Key>::value> {};

// This specialization returns __extract_key_fail_tag for non-map containers
// because _Key == _ContainerValueTy
template <class _ValTy, class _Key, class _RawValTy>
struct __can_extract_map_key<_ValTy, _Key, _Key, _RawValTy>
    : false_type {};

#endif

#ifndef _LIBCPP_HAS_NO_BUILTIN_IS_CONSTANT_EVALUATED

#if 0 /* evaluated by -frewrite-includes */
_LIBCPP_INLINE_VISIBILITY
inline constexpr bool is_constant_evaluated() noexcept {
  return __builtin_is_constant_evaluated();
}
#endif

inline _LIBCPP_CONSTEXPR
bool __libcpp_is_constant_evaluated() _NOEXCEPT { return __builtin_is_constant_evaluated(); }
#else
inline _LIBCPP_CONSTEXPR
bool __libcpp_is_constant_evaluated() _NOEXCEPT { return false; }
#endif

template <class _CharT>
using _IsCharLikeType = _And<is_standard_layout<_CharT>, is_trivial<_CharT> >;

_LIBCPP_END_NAMESPACE_STD

#if 1 /* evaluated by -frewrite-includes */
// std::byte
namespace std  // purposefully not versioned
{
template <class _Integer>
  constexpr typename enable_if<is_integral_v<_Integer>, byte>::type &
  operator<<=(byte& __lhs, _Integer __shift) noexcept
  { return __lhs = __lhs << __shift; }

template <class _Integer>
  constexpr typename enable_if<is_integral_v<_Integer>, byte>::type
  operator<< (byte  __lhs, _Integer __shift) noexcept
  { return static_cast<byte>(static_cast<unsigned char>(static_cast<unsigned int>(__lhs) << __shift)); }

template <class _Integer>
  constexpr typename enable_if<is_integral_v<_Integer>, byte>::type &
  operator>>=(byte& __lhs, _Integer __shift) noexcept
  { return __lhs = __lhs >> __shift; }

template <class _Integer>
  constexpr typename enable_if<is_integral_v<_Integer>, byte>::type
  operator>> (byte  __lhs, _Integer __shift) noexcept
  { return static_cast<byte>(static_cast<unsigned char>(static_cast<unsigned int>(__lhs) >> __shift)); }

template <class _Integer>
  constexpr typename enable_if<is_integral_v<_Integer>, _Integer>::type
  to_integer(byte __b) noexcept { return static_cast<_Integer>(__b); }

}
#endif

#endif  // _LIBCPP_TYPE_TRAITS
#endif

#endif  // _LIBCPP_CSTDDEF


#if 1 /* evaluated by -frewrite-includes */

#endif

namespace std  // purposefully not versioned
{

#ifndef _LIBCPP_CXX03_LANG

template<class _Ep>
class _LIBCPP_TEMPLATE_VIS initializer_list
{
    const _Ep* __begin_;
    size_t    __size_;

    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR_AFTER_CXX11
    initializer_list(const _Ep* __b, size_t __s) _NOEXCEPT
        : __begin_(__b),
          __size_(__s)
        {}
public:
    typedef _Ep        value_type;
    typedef const _Ep& reference;
    typedef const _Ep& const_reference;
    typedef size_t    size_type;

    typedef const _Ep* iterator;
    typedef const _Ep* const_iterator;

    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR_AFTER_CXX11
    initializer_list() _NOEXCEPT : __begin_(nullptr), __size_(0) {}

    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR_AFTER_CXX11
    size_t    size()  const _NOEXCEPT {return __size_;}

    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR_AFTER_CXX11
    const _Ep* begin() const _NOEXCEPT {return __begin_;}

    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR_AFTER_CXX11
    const _Ep* end()   const _NOEXCEPT {return __begin_ + __size_;}
};

template<class _Ep>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_CONSTEXPR_AFTER_CXX11
const _Ep*
begin(initializer_list<_Ep> __il) _NOEXCEPT
{
    return __il.begin();
}

template<class _Ep>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_CONSTEXPR_AFTER_CXX11
const _Ep*
end(initializer_list<_Ep> __il) _NOEXCEPT
{
    return __il.end();
}

#endif  // !defined(_LIBCPP_CXX03_LANG)

}  // std

#endif  // _LIBCPP_INITIALIZER_LIST


// -*- C++ -*-
//===--------------------------- cstring ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_CSTRING
#define _LIBCPP_CSTRING



// -*- C++ -*-
//===--------------------------- string.h ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_STRING_H
#define _LIBCPP_STRING_H

/*
    string.h synopsis

Macros:

    NULL

Types:

    size_t

void* memcpy(void* restrict s1, const void* restrict s2, size_t n);
void* memmove(void* s1, const void* s2, size_t n);
char* strcpy (char* restrict s1, const char* restrict s2);
char* strncpy(char* restrict s1, const char* restrict s2, size_t n);
char* strcat (char* restrict s1, const char* restrict s2);
char* strncat(char* restrict s1, const char* restrict s2, size_t n);
int memcmp(const void* s1, const void* s2, size_t n);
int strcmp (const char* s1, const char* s2);
int strncmp(const char* s1, const char* s2, size_t n);
int strcoll(const char* s1, const char* s2);
size_t strxfrm(char* restrict s1, const char* restrict s2, size_t n);
const void* memchr(const void* s, int c, size_t n);
      void* memchr(      void* s, int c, size_t n);
const char* strchr(const char* s, int c);
      char* strchr(      char* s, int c);
size_t strcspn(const char* s1, const char* s2);
const char* strpbrk(const char* s1, const char* s2);
      char* strpbrk(      char* s1, const char* s2);
const char* strrchr(const char* s, int c);
      char* strrchr(      char* s, int c);
size_t strspn(const char* s1, const char* s2);
const char* strstr(const char* s1, const char* s2);
      char* strstr(      char* s1, const char* s2);
char* strtok(char* restrict s1, const char* restrict s2);
void* memset(void* s, int c, size_t n);
char* strerror(int errnum);
size_t strlen(const char* s);

*/




#if 1 /* evaluated by -frewrite-includes */

#endif


/* String handling <string.h>

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef _PDCLIB_STRING_H
#define _PDCLIB_STRING_H _PDCLIB_STRING_H

#ifdef __cplusplus
extern "C" {
#endif


/* __STDC_WANT_LIB_EXT1__ redefinition guard

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef __STDC_WANT_LIB_EXT1__
  #ifdef __STDC_WANT_LIB_EXT1_PREVIOUS__


#if 0 /* evaluated by -frewrite-includes */
      #error __STDC_WANT_LIB_EXT1__ undefined when it was defined earlier.
    #endif
  #else
    #define __STDC_WANT_LIB_EXT1_PREVIOUS__ -1
  #endif
#else


#if 0 /* evaluated by -frewrite-includes */
    #error __STDC_WANT_LIB_EXT1__ defined but empty. Should be an integer value.
  #endif
  #ifdef __STDC_WANT_LIB_EXT1_PREVIOUS__


#if 0 /* evaluated by -frewrite-includes */
      #error __STDC_WANT_LIB_EXT1__ redefined from previous value.
    #endif
  #else


#if 0 /* evaluated by -frewrite-includes */
      #define __STDC_WANT_LIB_EXT1_PREVIOUS__ 0


#elif 0 /* evaluated by -frewrite-includes */
      #define __STDC_WANT_LIB_EXT1_PREVIOUS__ 1
    #else
      #error __STDC_WANT_LIB_EXT1__ set to value other than 0,1 -- undefined behavior
    #endif
  #endif
#endif


#ifndef _PDCLIB_SIZE_T_DEFINED
#define _PDCLIB_SIZE_T_DEFINED _PDCLIB_SIZE_T_DEFINED
typedef _PDCLIB_size_t size_t;
#endif

#ifndef _PDCLIB_NULL_DEFINED
#define _PDCLIB_NULL_DEFINED _PDCLIB_NULL_DEFINED
#define NULL _PDCLIB_NULL
#endif

/* String function conventions */

/*
   In any of the following functions taking a size_t n to specify the length of
   an array or size of a memory region, n may be 0, but the pointer arguments to
   the call shall still be valid unless otherwise stated.
*/

/* Copying functions */

/* Copy a number of n characters from the memory area pointed to by s2 to the
   area pointed to by s1. If the two areas overlap, behaviour is undefined.
   Returns the value of s1.
*/
_PDCLIB_PUBLIC void * memcpy( void * _PDCLIB_restrict s1, const void * _PDCLIB_restrict s2, size_t n );

/* Copy a number of n characters from the memory area pointed to by s2 to the
   area pointed to by s1. The two areas may overlap.
   Returns the value of s1.
*/
_PDCLIB_PUBLIC void * memmove( void * _PDCLIB_restrict s1, const void * _PDCLIB_restrict s2, size_t n );

/* Copy the character array s2 (including terminating '\0' byte) into the
   character array s1.
   Returns the value of s1.
*/
_PDCLIB_PUBLIC char * strcpy( char * _PDCLIB_restrict s1, const char * _PDCLIB_restrict s2 );

/* Copy a maximum of n characters from the character array s2 into the character
   array s1. If s2 is shorter than n characters, '\0' bytes will be appended to
   the copy in s1 until n characters have been written. If s2 is longer than n
   characters, NO terminating '\0' will be written to s1. If the arrays overlap,
   behaviour is undefined.
   Returns the value of s1.
*/
_PDCLIB_PUBLIC char * strncpy( char * _PDCLIB_restrict s1, const char * _PDCLIB_restrict s2, size_t n );

/* Concatenation functions */

/* Append the contents of the character array s2 (including terminating '\0') to
   the character array s1 (first character of s2 overwriting the '\0' of s1). If
   the arrays overlap, behaviour is undefined.
   Returns the value of s1.
*/
_PDCLIB_PUBLIC char * strcat( char * _PDCLIB_restrict s1, const char * _PDCLIB_restrict s2 );

/* Append a maximum of n characters from the character array s2 to the character
   array s1 (first character of s2 overwriting the '\0' of s1). A terminating
   '\0' is ALWAYS appended, even if the full n characters have already been
   written. If the arrays overlap, behaviour is undefined.
   Returns the value of s1.
*/
_PDCLIB_PUBLIC char * strncat( char * _PDCLIB_restrict s1, const char * _PDCLIB_restrict s2, size_t n );

/* Comparison functions */

/* Compare the first n characters of the memory areas pointed to by s1 and s2.
   Returns 0 if s1 == s2, a negative number if s1 < s2, and a positive number if
   s1 > s2.
*/
_PDCLIB_PUBLIC int memcmp( const void * s1, const void * s2, size_t n );

/* Compare the character arrays s1 and s2.
   Returns 0 if s1 == s2, a negative number if s1 < s2, and a positive number if
   s1 > s2.
*/
_PDCLIB_PUBLIC int strcmp( const char * s1, const char * s2 );

/* Compare the character arrays s1 and s2, interpreted as specified by the
   LC_COLLATE category of the current locale.
   Returns 0 if s1 == s2, a negative number if s1 < s2, and a positive number if
   s1 > s2.
   TODO: Currently a dummy wrapper for strcmp() as PDCLib does not yet support
   locales.
*/
_PDCLIB_PUBLIC int strcoll( const char * s1, const char * s2 );

/* Compare no more than the first n characters of the character arrays s1 and
   s2.
   Returns 0 if s1 == s2, a negative number if s1 < s2, and a positive number if
   s1 > s2.
*/
_PDCLIB_PUBLIC int strncmp( const char * s1, const char * s2, size_t n );

/* Transform the character array s2 as appropriate for the LC_COLLATE setting of
   the current locale. If length of resulting string is less than n, store it in
   the character array pointed to by s1. Return the length of the resulting
   string.
*/
_PDCLIB_PUBLIC size_t strxfrm( char * _PDCLIB_restrict s1, const char * _PDCLIB_restrict s2, size_t n );

/* Search functions */

/* Search the first n characters in the memory area pointed to by s for the
   character c (interpreted as unsigned char).
   Returns a pointer to the first instance found, or NULL.
*/
_PDCLIB_PUBLIC void * memchr( const void * s, int c, size_t n );

/* Search the character array s (including terminating '\0') for the character c
   (interpreted as char).
   Returns a pointer to the first instance found, or NULL.
*/
_PDCLIB_PUBLIC char * strchr( const char * s, int c );

/* Determine the length of the initial substring of character array s1 which
   consists only of characters not from the character array s2.
   Returns the length of that substring.
*/
_PDCLIB_PUBLIC size_t strcspn( const char * s1, const char * s2 );

/* Search the character array s1 for any character from the character array s2.
   Returns a pointer to the first occurrence, or NULL.
*/
_PDCLIB_PUBLIC char * strpbrk( const char * s1, const char * s2 );

/* Search the character array s (including terminating '\0') for the character c
   (interpreted as char).
   Returns a pointer to the last instance found, or NULL.
*/
_PDCLIB_PUBLIC char * strrchr( const char * s, int c );

/* Determine the length of the initial substring of character array s1 which
   consists only of characters from the character array s2.
   Returns the length of that substring.
*/
_PDCLIB_PUBLIC size_t strspn( const char * s1, const char * s2 );

/* Search the character array s1 for the substring in character array s2.
   Returns a pointer to that sbstring, or NULL. If s2 is of length zero,
   returns s1.
*/
_PDCLIB_PUBLIC char * strstr( const char * s1, const char * s2 );

/* In a series of subsequent calls, parse a C string into tokens.
   On the first call to strtok(), the first argument is a pointer to the to-be-
   parsed C string. On subsequent calls, the first argument is NULL unless you
   want to start parsing a new string. s2 holds an array of separator characters
   which can differ from call to call. Leading separators are skipped, the first
   trailing separator overwritten with '\0'.
   Returns a pointer to the next token.
   WARNING: This function uses static storage, and as such is not reentrant.
*/
_PDCLIB_PUBLIC char * strtok( char * _PDCLIB_restrict s1, const char * _PDCLIB_restrict s2 );

/* Miscellaneous functions */

/* Write the character c (interpreted as unsigned char) to the first n
   characters of the memory area pointed to by s.
   Returns s.
*/
_PDCLIB_PUBLIC void * memset( void * s, int c, size_t n );

/* Map an error number to a (locale-specific) error message string. Error
   numbers are typically errno values, but any number is mapped to a message.
   TODO: PDCLib does not yet support locales.
*/
_PDCLIB_PUBLIC char * strerror( int errnum );

/* Returns the length of the string s (excluding terminating '\0').
*/
_PDCLIB_PUBLIC size_t strlen( const char * s );

/* Annex K -- Bounds-checking interfaces */

#ifdef __cplusplus
}
#endif

/* Extension hook for downstream projects that want to have non-standard
   extensions to standard headers.
*/
#ifdef _PDCLIB_EXTEND_STRING_H

// SPDX-License-Identifier: MIT

// SPDX-FileCopyrightText: 2019-2020 Stefan Schmidt

#ifdef __cplusplus
extern "C" {
#endif

char *strdup (const char *s);

static char *_strdup (const char *s)
{
    return strdup(s);
}

// Compared to their Win32 counterparts, these functions currently don't invoke
// an invalid parameter handler routine as described in the MSDN, and instead
// behave as if the invalid parameter handler allowed to continue execution.
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

#ifndef NLSCMP_DEFINED
#define _NLSCMPERROR 0x7FFFFFFF
#define _NLSCMP_DEFINED
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
// libc++ expects MSVCRT to provide these overloads

#ifndef _NXDK_PREFERRED_OVERLOAD
#define _NXDK_PREFERRED_OVERLOAD __attribute__ ((__enable_if__(true, "")))
#endif

inline static char *__nxdk_strchr (const char *__s, int __c)
{
    return static_cast<char *>(strchr(__s, __c));
}

inline static _NXDK_PREFERRED_OVERLOAD const char *strchr (const char *__s, int __c)
{
    return __nxdk_strchr(__s, __c);
}

inline static _NXDK_PREFERRED_OVERLOAD char *strchr (char *__s, int __c)
{
    return __nxdk_strchr(__s, __c);
}

inline static char *__nxdk_strpbrk (const char *__s1, const char *__s2)
{
    return static_cast<char *>(strpbrk(__s1, __s2));
}

inline static _NXDK_PREFERRED_OVERLOAD const char *strpbrk (const char *__s1, const char *__s2)
{
    return __nxdk_strpbrk(__s1, __s2);
}

inline static _NXDK_PREFERRED_OVERLOAD char *strpbrk (char *__s1, char *__s2)
{
    return __nxdk_strpbrk(__s1, __s2);
}

inline static char *__nxdk_strrchr (const char *__s, int __c)
{
    return static_cast<char *>(strrchr(__s, __c));
}

inline static _NXDK_PREFERRED_OVERLOAD const char *strrchr (const char *__s, int __c)
{
    return __nxdk_strrchr(__s, __c);
}

inline static _NXDK_PREFERRED_OVERLOAD char *strrchr (char *__s, int __c)
{
    return __nxdk_strrchr(__s, __c);
}

inline static void *__nxdk_memchr (const void *__s, int __c, size_t __n)
{
    return static_cast<void *>(memchr(__s, __c, __n));
}

inline static _NXDK_PREFERRED_OVERLOAD const void *memchr (const void *__s, int __c, size_t __n)
{
    return __nxdk_memchr(__s, __c, __n);
}

inline static _NXDK_PREFERRED_OVERLOAD void *memchr (void *__s, int __c, size_t __n)
{
    return __nxdk_memchr(__s, __c, __n);
}

inline static char *__nxdk_strstr (const char *__s1, const char *__s2)
{
    return static_cast<char *>(strstr(__s1, __s2));
}

inline static _NXDK_PREFERRED_OVERLOAD const char *strstr (const char *__s1, const char *__s2)
{
    return __nxdk_strstr(__s1, __s2);
}

inline static _NXDK_PREFERRED_OVERLOAD char *strstr (char *__s1, const char *__s2)
{
    return __nxdk_strstr(__s1, __s2);
}

#endif
#endif

#endif

// MSVCRT, GNU libc and its derivates may already have the correct prototype in
// <string.h>. This macro can be defined by users if their C library provides
// the right signature.

#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_STRING_H_HAS_CONST_OVERLOADS
#endif


#if 0 /* evaluated by -frewrite-includes */
extern "C++" {
inline _LIBCPP_INLINE_VISIBILITY
char* __libcpp_strchr(const char* __s, int __c) {return (char*)strchr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const char* strchr(const char* __s, int __c) {return __libcpp_strchr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      char* strchr(      char* __s, int __c) {return __libcpp_strchr(__s, __c);}

inline _LIBCPP_INLINE_VISIBILITY
char* __libcpp_strpbrk(const char* __s1, const char* __s2) {return (char*)strpbrk(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const char* strpbrk(const char* __s1, const char* __s2) {return __libcpp_strpbrk(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      char* strpbrk(      char* __s1, const char* __s2) {return __libcpp_strpbrk(__s1, __s2);}

inline _LIBCPP_INLINE_VISIBILITY
char* __libcpp_strrchr(const char* __s, int __c) {return (char*)strrchr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const char* strrchr(const char* __s, int __c) {return __libcpp_strrchr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      char* strrchr(      char* __s, int __c) {return __libcpp_strrchr(__s, __c);}

inline _LIBCPP_INLINE_VISIBILITY
void* __libcpp_memchr(const void* __s, int __c, size_t __n) {return (void*)memchr(__s, __c, __n);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const void* memchr(const void* __s, int __c, size_t __n) {return __libcpp_memchr(__s, __c, __n);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      void* memchr(      void* __s, int __c, size_t __n) {return __libcpp_memchr(__s, __c, __n);}

inline _LIBCPP_INLINE_VISIBILITY
char* __libcpp_strstr(const char* __s1, const char* __s2) {return (char*)strstr(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const char* strstr(const char* __s1, const char* __s2) {return __libcpp_strstr(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      char* strstr(      char* __s1, const char* __s2) {return __libcpp_strstr(__s1, __s2);}
}
#endif

#endif  // _LIBCPP_STRING_H


#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_BEGIN_NAMESPACE_STD

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
#ifndef _LIBCPP_HAS_NO_THREAD_UNSAFE_C_FUNCTIONS
using ::strtok;
#endif
using ::memset;
using ::strerror;
using ::strlen;

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_CSTRING

// -*- C++ -*-
//===-------------------------- utility -----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_UTILITY
#define _LIBCPP_UTILITY




// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___TUPLE
#define _LIBCPP___TUPLE






#if 1 /* evaluated by -frewrite-includes */

#endif


_LIBCPP_BEGIN_NAMESPACE_STD

template <class _Tp> struct _LIBCPP_TEMPLATE_VIS tuple_size;


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, class...>
using __enable_if_tuple_size_imp = _Tp;

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS tuple_size<__enable_if_tuple_size_imp<
    const _Tp,
    typename enable_if<!is_volatile<_Tp>::value>::type,
    integral_constant<size_t, sizeof(tuple_size<_Tp>)>>>
    : public integral_constant<size_t, tuple_size<_Tp>::value> {};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS tuple_size<__enable_if_tuple_size_imp<
    volatile _Tp,
    typename enable_if<!is_const<_Tp>::value>::type,
    integral_constant<size_t, sizeof(tuple_size<_Tp>)>>>
    : public integral_constant<size_t, tuple_size<_Tp>::value> {};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS tuple_size<__enable_if_tuple_size_imp<
    const volatile _Tp,
    integral_constant<size_t, sizeof(tuple_size<_Tp>)>>>
    : public integral_constant<size_t, tuple_size<_Tp>::value> {};

#else
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS tuple_size<const _Tp> : public tuple_size<_Tp> {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS tuple_size<volatile _Tp> : public tuple_size<_Tp> {};
template <class _Tp> struct _LIBCPP_TEMPLATE_VIS tuple_size<const volatile _Tp> : public tuple_size<_Tp> {};
#endif

template <size_t _Ip, class _Tp> struct _LIBCPP_TEMPLATE_VIS tuple_element;

template <size_t _Ip, class _Tp>
struct _LIBCPP_TEMPLATE_VIS tuple_element<_Ip, const _Tp>
{
    typedef _LIBCPP_NODEBUG_TYPE typename add_const<typename tuple_element<_Ip, _Tp>::type>::type type;
};

template <size_t _Ip, class _Tp>
struct _LIBCPP_TEMPLATE_VIS tuple_element<_Ip, volatile _Tp>
{
    typedef _LIBCPP_NODEBUG_TYPE typename add_volatile<typename tuple_element<_Ip, _Tp>::type>::type type;
};

template <size_t _Ip, class _Tp>
struct _LIBCPP_TEMPLATE_VIS tuple_element<_Ip, const volatile _Tp>
{
    typedef _LIBCPP_NODEBUG_TYPE typename add_cv<typename tuple_element<_Ip, _Tp>::type>::type type;
};

template <class _Tp> struct __tuple_like : false_type {};

template <class _Tp> struct __tuple_like<const _Tp> : public __tuple_like<_Tp> {};
template <class _Tp> struct __tuple_like<volatile _Tp> : public __tuple_like<_Tp> {};
template <class _Tp> struct __tuple_like<const volatile _Tp> : public __tuple_like<_Tp> {};

// tuple specializations

#ifndef _LIBCPP_CXX03_LANG

template <size_t...> struct __tuple_indices {};

template <class _IdxType, _IdxType... _Values>
struct __integer_sequence {
  template <template <class _OIdxType, _OIdxType...> class _ToIndexSeq, class _ToIndexType>
  using __convert = _ToIndexSeq<_ToIndexType, _Values...>;

  template <size_t _Sp>
  using __to_tuple_indices = __tuple_indices<(_Values + _Sp)...>;
};


#if 1 /* evaluated by -frewrite-includes */
template <size_t _Ep, size_t _Sp>
using __make_indices_imp =
    typename __make_integer_seq<__integer_sequence, size_t, _Ep - _Sp>::template
    __to_tuple_indices<_Sp>;
#else
template <size_t _Ep, size_t _Sp>
using __make_indices_imp =
    typename __detail::__make<_Ep - _Sp>::type::template __to_tuple_indices<_Sp>;

#endif

template <size_t _Ep, size_t _Sp = 0>
struct __make_tuple_indices
{
    static_assert(_Sp <= _Ep, "__make_tuple_indices input error");
    typedef __make_indices_imp<_Ep, _Sp> type;
};


template <class ..._Tp> class _LIBCPP_TEMPLATE_VIS tuple;

template <class... _Tp> struct __tuple_like<tuple<_Tp...> > : true_type {};

template <class ..._Tp>
struct _LIBCPP_TEMPLATE_VIS tuple_size<tuple<_Tp...> >
    : public integral_constant<size_t, sizeof...(_Tp)>
{
};

template <size_t _Ip, class ..._Tp>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
typename tuple_element<_Ip, tuple<_Tp...> >::type&
get(tuple<_Tp...>&) _NOEXCEPT;

template <size_t _Ip, class ..._Tp>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
const typename tuple_element<_Ip, tuple<_Tp...> >::type&
get(const tuple<_Tp...>&) _NOEXCEPT;

template <size_t _Ip, class ..._Tp>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
typename tuple_element<_Ip, tuple<_Tp...> >::type&&
get(tuple<_Tp...>&&) _NOEXCEPT;

template <size_t _Ip, class ..._Tp>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
const typename tuple_element<_Ip, tuple<_Tp...> >::type&&
get(const tuple<_Tp...>&&) _NOEXCEPT;

#endif // !defined(_LIBCPP_CXX03_LANG)

// pair specializations

template <class _T1, class _T2> struct __tuple_like<pair<_T1, _T2> > : true_type {};

template <size_t _Ip, class _T1, class _T2>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
typename tuple_element<_Ip, pair<_T1, _T2> >::type&
get(pair<_T1, _T2>&) _NOEXCEPT;

template <size_t _Ip, class _T1, class _T2>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
const typename tuple_element<_Ip, pair<_T1, _T2> >::type&
get(const pair<_T1, _T2>&) _NOEXCEPT;

#ifndef _LIBCPP_CXX03_LANG
template <size_t _Ip, class _T1, class _T2>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
typename tuple_element<_Ip, pair<_T1, _T2> >::type&&
get(pair<_T1, _T2>&&) _NOEXCEPT;

template <size_t _Ip, class _T1, class _T2>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
const typename tuple_element<_Ip, pair<_T1, _T2> >::type&&
get(const pair<_T1, _T2>&&) _NOEXCEPT;
#endif

// array specializations

template <class _Tp, size_t _Size> struct _LIBCPP_TEMPLATE_VIS array;

template <class _Tp, size_t _Size> struct __tuple_like<array<_Tp, _Size> > : true_type {};

template <size_t _Ip, class _Tp, size_t _Size>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
_Tp&
get(array<_Tp, _Size>&) _NOEXCEPT;

template <size_t _Ip, class _Tp, size_t _Size>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
const _Tp&
get(const array<_Tp, _Size>&) _NOEXCEPT;

#ifndef _LIBCPP_CXX03_LANG
template <size_t _Ip, class _Tp, size_t _Size>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
_Tp&&
get(array<_Tp, _Size>&&) _NOEXCEPT;

template <size_t _Ip, class _Tp, size_t _Size>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
const _Tp&&
get(const array<_Tp, _Size>&&) _NOEXCEPT;
#endif

#ifndef _LIBCPP_CXX03_LANG

// __tuple_types

template <class ..._Tp> struct __tuple_types {};


#if 0 /* evaluated by -frewrite-includes */

namespace __indexer_detail {

template <size_t _Idx, class _Tp>
struct __indexed { using type _LIBCPP_NODEBUG_TYPE = _Tp; };

template <class _Types, class _Indexes> struct __indexer;

template <class ..._Types, size_t ..._Idx>
struct __indexer<__tuple_types<_Types...>, __tuple_indices<_Idx...>>
    : __indexed<_Idx, _Types>...
{};

template <size_t _Idx, class _Tp>
__indexed<_Idx, _Tp> __at_index(__indexed<_Idx, _Tp> const&);

} // namespace __indexer_detail

template <size_t _Idx, class ..._Types>
using __type_pack_element _LIBCPP_NODEBUG_TYPE = typename decltype(
    __indexer_detail::__at_index<_Idx>(
        __indexer_detail::__indexer<
            __tuple_types<_Types...>,
            typename __make_tuple_indices<sizeof...(_Types)>::type
        >{})
  )::type;
#endif

template <size_t _Ip, class ..._Types>
struct _LIBCPP_TEMPLATE_VIS tuple_element<_Ip, __tuple_types<_Types...>>
{
    static_assert(_Ip < sizeof...(_Types), "tuple_element index out of range");
    typedef _LIBCPP_NODEBUG_TYPE __type_pack_element<_Ip, _Types...> type;
};


template <class ..._Tp>
struct _LIBCPP_TEMPLATE_VIS tuple_size<__tuple_types<_Tp...> >
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
  template <class _Tp> using __apply _LIBCPP_NODEBUG_TYPE  = const _Tp;
};
template <>
struct __apply_cv_mf<false, false, true> {
  template <class _Tp> using __apply _LIBCPP_NODEBUG_TYPE  = volatile _Tp;
};
template <>
struct __apply_cv_mf<false, true, true> {
  template <class _Tp> using __apply _LIBCPP_NODEBUG_TYPE  = const volatile _Tp;
};
template <>
struct __apply_cv_mf<true, false, false> {
  template <class _Tp> using __apply _LIBCPP_NODEBUG_TYPE  = _Tp&;
};
template <>
struct __apply_cv_mf<true, true, false> {
  template <class _Tp> using __apply _LIBCPP_NODEBUG_TYPE  = const _Tp&;
};
template <>
struct __apply_cv_mf<true, false, true> {
  template <class _Tp> using __apply _LIBCPP_NODEBUG_TYPE  = volatile _Tp&;
};
template <>
struct __apply_cv_mf<true, true, true> {
  template <class _Tp> using __apply _LIBCPP_NODEBUG_TYPE = const volatile _Tp&;
};
template <class _Tp, class _RawTp = typename remove_reference<_Tp>::type>
using __apply_cv_t _LIBCPP_NODEBUG_TYPE  = __apply_cv_mf<
    is_lvalue_reference<_Tp>::value,
    is_const<_RawTp>::value,
    is_volatile<_RawTp>::value>;

// __make_tuple_types

// __make_tuple_types<_Tuple<_Types...>, _Ep, _Sp>::type is a
// __tuple_types<_Types...> using only those _Types in the range [_Sp, _Ep).
// _Sp defaults to 0 and _Ep defaults to tuple_size<_Tuple>.  If _Tuple is a
// lvalue_reference type, then __tuple_types<_Types&...> is the result.

template <class _TupleTypes, class _TupleIndices>
struct __make_tuple_types_flat;

template <template <class...> class _Tuple, class ..._Types, size_t ..._Idx>
struct __make_tuple_types_flat<_Tuple<_Types...>, __tuple_indices<_Idx...>> {
  // Specialization for pair, tuple, and __tuple_types
  template <class _Tp, class _ApplyFn = __apply_cv_t<_Tp>>
  using __apply_quals _LIBCPP_NODEBUG_TYPE = __tuple_types<
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
  typedef _LIBCPP_NODEBUG_TYPE __tuple_types<_Types...> type;
};

template <class ..._Types, size_t _Ep>
struct __make_tuple_types<__tuple_types<_Types...>, _Ep, 0, true> {
  typedef _LIBCPP_NODEBUG_TYPE __tuple_types<_Types...> type;
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

// __tuple_convertible

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

// __tuple_constructible

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

// __tuple_assignable

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
struct _LIBCPP_TEMPLATE_VIS tuple_element<_Ip, tuple<_Tp...> >
{
    typedef _LIBCPP_NODEBUG_TYPE typename tuple_element<_Ip, __tuple_types<_Tp...> >::type type;
};


#if 1 /* evaluated by -frewrite-includes */
template <size_t _Ip, class ..._Tp>
using tuple_element_t _LIBCPP_NODEBUG_TYPE  = typename tuple_element <_Ip, _Tp...>::type;
#endif

template <bool _IsTuple, class _SizeTrait, size_t _Expected>
struct __tuple_like_with_size_imp : false_type {};

template <class _SizeTrait, size_t _Expected>
struct __tuple_like_with_size_imp<true, _SizeTrait, _Expected>
    : integral_constant<bool, _SizeTrait::value == _Expected> {};

template <class _Tuple, size_t _ExpectedSize,
          class _RawTuple = typename __uncvref<_Tuple>::type>
using __tuple_like_with_size _LIBCPP_NODEBUG_TYPE = __tuple_like_with_size_imp<
                                   __tuple_like<_RawTuple>::value,
                                   tuple_size<_RawTuple>, _ExpectedSize
                              >;

struct _LIBCPP_TYPE_VIS __check_tuple_constructor_fail {

    static constexpr bool __enable_explicit_default() { return false; }
    static constexpr bool __enable_implicit_default() { return false; }
    template <class ...>
    static constexpr bool __enable_explicit() { return false; }
    template <class ...>
    static constexpr bool __enable_implicit() { return false; }
    template <class ...>
    static constexpr bool __enable_assign() { return false; }
};
#endif // !defined(_LIBCPP_CXX03_LANG)


#if 1 /* evaluated by -frewrite-includes */

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
#endif // _LIBCPP_STD_VER > 14

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP___TUPLE





// -*- C++ -*-
//===--------------------------- cstdint ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_CSTDINT
#define _LIBCPP_CSTDINT

/*
    cstdint synopsis

Macros:

    INT8_MIN
    INT16_MIN
    INT32_MIN
    INT64_MIN

    INT8_MAX
    INT16_MAX
    INT32_MAX
    INT64_MAX

    UINT8_MAX
    UINT16_MAX
    UINT32_MAX
    UINT64_MAX

    INT_LEAST8_MIN
    INT_LEAST16_MIN
    INT_LEAST32_MIN
    INT_LEAST64_MIN

    INT_LEAST8_MAX
    INT_LEAST16_MAX
    INT_LEAST32_MAX
    INT_LEAST64_MAX

    UINT_LEAST8_MAX
    UINT_LEAST16_MAX
    UINT_LEAST32_MAX
    UINT_LEAST64_MAX

    INT_FAST8_MIN
    INT_FAST16_MIN
    INT_FAST32_MIN
    INT_FAST64_MIN

    INT_FAST8_MAX
    INT_FAST16_MAX
    INT_FAST32_MAX
    INT_FAST64_MAX

    UINT_FAST8_MAX
    UINT_FAST16_MAX
    UINT_FAST32_MAX
    UINT_FAST64_MAX

    INTPTR_MIN
    INTPTR_MAX
    UINTPTR_MAX

    INTMAX_MIN
    INTMAX_MAX

    UINTMAX_MAX

    PTRDIFF_MIN
    PTRDIFF_MAX

    SIG_ATOMIC_MIN
    SIG_ATOMIC_MAX

    SIZE_MAX

    WCHAR_MIN
    WCHAR_MAX

    WINT_MIN
    WINT_MAX

    INT8_C(value)
    INT16_C(value)
    INT32_C(value)
    INT64_C(value)

    UINT8_C(value)
    UINT16_C(value)
    UINT32_C(value)
    UINT64_C(value)

    INTMAX_C(value)
    UINTMAX_C(value)

namespace std
{

Types:

    int8_t
    int16_t
    int32_t
    int64_t

    uint8_t
    uint16_t
    uint32_t
    uint64_t

    int_least8_t
    int_least16_t
    int_least32_t
    int_least64_t

    uint_least8_t
    uint_least16_t
    uint_least32_t
    uint_least64_t

    int_fast8_t
    int_fast16_t
    int_fast32_t
    int_fast64_t

    uint_fast8_t
    uint_fast16_t
    uint_fast32_t
    uint_fast64_t

    intptr_t
    uintptr_t

    intmax_t
    uintmax_t

}  // std
*/



// -*- C++ -*-
//===---------------------------- stdint.h --------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_STDINT_H
// AIX system headers need stdint.h to be re-enterable while _STD_TYPES_T
// is defined until an inclusion of it without _STD_TYPES_T occurs, in which
// case the header guard macro is defined.

#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_STDINT_H
#endif // _STD_TYPES_T

/*
    stdint.h synopsis

Macros:

    INT8_MIN
    INT16_MIN
    INT32_MIN
    INT64_MIN

    INT8_MAX
    INT16_MAX
    INT32_MAX
    INT64_MAX

    UINT8_MAX
    UINT16_MAX
    UINT32_MAX
    UINT64_MAX

    INT_LEAST8_MIN
    INT_LEAST16_MIN
    INT_LEAST32_MIN
    INT_LEAST64_MIN

    INT_LEAST8_MAX
    INT_LEAST16_MAX
    INT_LEAST32_MAX
    INT_LEAST64_MAX

    UINT_LEAST8_MAX
    UINT_LEAST16_MAX
    UINT_LEAST32_MAX
    UINT_LEAST64_MAX

    INT_FAST8_MIN
    INT_FAST16_MIN
    INT_FAST32_MIN
    INT_FAST64_MIN

    INT_FAST8_MAX
    INT_FAST16_MAX
    INT_FAST32_MAX
    INT_FAST64_MAX

    UINT_FAST8_MAX
    UINT_FAST16_MAX
    UINT_FAST32_MAX
    UINT_FAST64_MAX

    INTPTR_MIN
    INTPTR_MAX
    UINTPTR_MAX

    INTMAX_MIN
    INTMAX_MAX

    UINTMAX_MAX

    PTRDIFF_MIN
    PTRDIFF_MAX

    SIG_ATOMIC_MIN
    SIG_ATOMIC_MAX

    SIZE_MAX

    WCHAR_MIN
    WCHAR_MAX

    WINT_MIN
    WINT_MAX

    INT8_C(value)
    INT16_C(value)
    INT32_C(value)
    INT64_C(value)

    UINT8_C(value)
    UINT16_C(value)
    UINT32_C(value)
    UINT64_C(value)

    INTMAX_C(value)
    UINTMAX_C(value)

*/




#if 1 /* evaluated by -frewrite-includes */

#endif

/* C99 stdlib (e.g. glibc < 2.18) does not provide macros needed
   for C++11 unless __STDC_LIMIT_MACROS and __STDC_CONSTANT_MACROS
   are defined
*/

#if 1 /* evaluated by -frewrite-includes */
#   define __STDC_LIMIT_MACROS
#endif

#if 1 /* evaluated by -frewrite-includes */
#   define __STDC_CONSTANT_MACROS
#endif


/* Integer types <stdint.h>

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef _PDCLIB_STDINT_H
#define _PDCLIB_STDINT_H _PDCLIB_STDINT_H

#ifdef __cplusplus
extern "C" {
#endif


/* __STDC_WANT_LIB_EXT1__ redefinition guard

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef __STDC_WANT_LIB_EXT1__
  #ifdef __STDC_WANT_LIB_EXT1_PREVIOUS__


#if 0 /* evaluated by -frewrite-includes */
      #error __STDC_WANT_LIB_EXT1__ undefined when it was defined earlier.
    #endif
  #else
    #define __STDC_WANT_LIB_EXT1_PREVIOUS__ -1
  #endif
#else


#if 0 /* evaluated by -frewrite-includes */
    #error __STDC_WANT_LIB_EXT1__ defined but empty. Should be an integer value.
  #endif
  #ifdef __STDC_WANT_LIB_EXT1_PREVIOUS__


#if 0 /* evaluated by -frewrite-includes */
      #error __STDC_WANT_LIB_EXT1__ redefined from previous value.
    #endif
  #else


#if 0 /* evaluated by -frewrite-includes */
      #define __STDC_WANT_LIB_EXT1_PREVIOUS__ 0


#elif 0 /* evaluated by -frewrite-includes */
      #define __STDC_WANT_LIB_EXT1_PREVIOUS__ 1
    #else
      #error __STDC_WANT_LIB_EXT1__ set to value other than 0,1 -- undefined behavior
    #endif
  #endif
#endif


/* 7.18.1.1 Exact-width integer types. */

typedef _PDCLIB_int8_t  int8_t;
typedef _PDCLIB_int16_t int16_t;
typedef _PDCLIB_int32_t int32_t;
typedef _PDCLIB_int64_t int64_t;

typedef _PDCLIB_uint8_t  uint8_t;
typedef _PDCLIB_uint16_t uint16_t;
typedef _PDCLIB_uint32_t uint32_t;
typedef _PDCLIB_uint64_t uint64_t;

/* 7.18.1.2 Minimum-width integer types */

/* You are allowed to add more types here, e.g. int_least24_t. For the standard
   types, int_leastN_t is equivalent to the corresponding exact type intN_t by
   definition.
*/

typedef int8_t  int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t  uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;

/* 7.18.1.3 Fastest minimum-width integer types */

/* You are allowed to add more types here, e.g. int_fast24_t. */

typedef _PDCLIB_int_fast8_t  int_fast8_t;
typedef _PDCLIB_int_fast16_t int_fast16_t;
typedef _PDCLIB_int_fast32_t int_fast32_t;
typedef _PDCLIB_int_fast64_t int_fast64_t;

typedef _PDCLIB_uint_fast8_t  uint_fast8_t;
typedef _PDCLIB_uint_fast16_t uint_fast16_t;
typedef _PDCLIB_uint_fast32_t uint_fast32_t;
typedef _PDCLIB_uint_fast64_t uint_fast64_t;

/* 7.18.1.4 Integer types capable of holding object pointers */

typedef _PDCLIB_intptr_t  intptr_t;
typedef _PDCLIB_uintptr_t uintptr_t;

/* 7.18.1.5 Greatest-width integer types */

typedef _PDCLIB_intmax_t  intmax_t;
typedef _PDCLIB_uintmax_t uintmax_t;

/* 7.18.2 Limits of specified-width integer types */

#ifdef __cplusplus
#ifndef __STDC_LIMIT_MACROS
#define _PDCLIB_NO_LIMIT_MACROS
#endif
#endif

#ifndef _PDCLIB_NO_LIMIT_MACROS

/* 7.18.2.1 Limits of exact-width integer types */

#define INT8_MIN  _PDCLIB_INT8_MIN
#define INT8_MAX  _PDCLIB_INT8_MAX
#define UINT8_MAX _PDCLIB_UINT8_MAX

#define INT16_MIN  _PDCLIB_INT16_MIN
#define INT16_MAX  _PDCLIB_INT16_MAX
#define UINT16_MAX _PDCLIB_UINT16_MAX

#define INT32_MIN  _PDCLIB_INT32_MIN
#define INT32_MAX  _PDCLIB_INT32_MAX
#define UINT32_MAX _PDCLIB_UINT32_MAX

#define INT64_MIN  _PDCLIB_INT64_MIN
#define INT64_MAX  _PDCLIB_INT64_MAX
#define UINT64_MAX _PDCLIB_UINT64_MAX

/* 7.18.2.2 Limits of minimum-width integer types */

/* For the standard widths, least and exact types are equivalent.
   You are allowed to add more types here, e.g. int_least24_t.
*/

#define INT_LEAST8_MIN  INT8_MIN
#define INT_LEAST8_MAX  INT8_MAX
#define UINT_LEAST8_MAX UINT8_MAX

#define INT_LEAST16_MIN  INT16_MIN
#define INT_LEAST16_MAX  INT16_MAX
#define UINT_LEAST16_MAX UINT16_MAX

#define INT_LEAST32_MIN  INT32_MIN
#define INT_LEAST32_MAX  INT32_MAX
#define UINT_LEAST32_MAX UINT32_MAX

#define INT_LEAST64_MIN  INT64_MIN
#define INT_LEAST64_MAX  INT64_MAX
#define UINT_LEAST64_MAX UINT64_MAX

/* 7.18.2.3 Limits of fastest minimum-width integer types */

#define INT_FAST8_MIN  _PDCLIB_INT_FAST8_MIN
#define INT_FAST8_MAX  _PDCLIB_INT_FAST8_MAX
#define UINT_FAST8_MAX _PDCLIB_UINT_FAST8_MAX

#define INT_FAST16_MIN  _PDCLIB_INT_FAST16_MIN
#define INT_FAST16_MAX  _PDCLIB_INT_FAST16_MAX
#define UINT_FAST16_MAX _PDCLIB_UINT_FAST16_MAX

#define INT_FAST32_MIN  _PDCLIB_INT_FAST32_MIN
#define INT_FAST32_MAX  _PDCLIB_INT_FAST32_MAX
#define UINT_FAST32_MAX _PDCLIB_UINT_FAST32_MAX

#define INT_FAST64_MIN  _PDCLIB_INT_FAST64_MIN
#define INT_FAST64_MAX  _PDCLIB_INT_FAST64_MAX
#define UINT_FAST64_MAX _PDCLIB_UINT_FAST64_MAX

/* 7.18.2.4 Limits of integer types capable of holding object pointers */

#define INTPTR_MIN  _PDCLIB_INTPTR_MIN
#define INTPTR_MAX  _PDCLIB_INTPTR_MAX
#define UINTPTR_MAX _PDCLIB_UINTPTR_MAX

/* 7.18.2.5 Limits of greatest-width integer types */

#define INTMAX_MIN  _PDCLIB_INTMAX_MIN
#define INTMAX_MAX  _PDCLIB_INTMAX_MAX
#define UINTMAX_MAX _PDCLIB_UINTMAX_MAX

/* 7.18.3 Limits of other integer types */

#define PTRDIFF_MIN _PDCLIB_PTRDIFF_MIN
#define PTRDIFF_MAX _PDCLIB_PTRDIFF_MAX

#define SIG_ATOMIC_MIN _PDCLIB_SIG_ATOMIC_MIN
#define SIG_ATOMIC_MAX _PDCLIB_SIG_ATOMIC_MAX

#define SIZE_MAX _PDCLIB_SIZE_MAX

#define WCHAR_MIN _PDCLIB_WCHAR_MIN
#define WCHAR_MAX _PDCLIB_WCHAR_MAX

#define WINT_MIN _PDCLIB_WINT_MIN
#define WINT_MAX _PDCLIB_WINT_MAX

#endif

/* 7.18.4 Macros for integer constants */

#ifdef __cplusplus
#ifndef __STDC_CONSTANT_MACROS
#define _PDCLIB_NO_CONSTANT_MACROS
#endif
#endif

#ifndef _PDCLIB_NO_CONSTANT_MACROS

/* 7.18.4.1 Macros for minimum-width integer constants */

/* As the minimum-width types - for the required widths of 8, 16, 32, and 64
   bits - are expressed in terms of the exact-width types, the mechanism for
   these macros is to append the literal of that exact-width type to the macro
   parameter.
   This is considered a hack, as the author is not sure his understanding of
   the requirements of this macro is correct. Any input appreciated.
*/

/* Expand to an integer constant of specified value and type int_leastN_t */

#define INT8_C( value )  value
#define INT16_C( value ) value
#define INT32_C( value ) _PDCLIB_concat( value, _PDCLIB_INT32_LITERAL )
#define INT64_C( value ) _PDCLIB_concat( value, _PDCLIB_INT64_LITERAL )

/* Expand to an integer constant of specified value and type uint_leastN_t */

#define UINT8_C( value )  value
#define UINT16_C( value ) value
#define UINT32_C( value ) _PDCLIB_concat( value, _PDCLIB_UINT32_LITERAL )
#define UINT64_C( value ) _PDCLIB_concat( value, _PDCLIB_UINT64_LITERAL )

/* 7.18.4.2 Macros for greatest-width integer constants */

/* Expand to an integer constant of specified value and type intmax_t */
#define INTMAX_C( value ) _PDCLIB_INTMAX_C( value )

/* Expand to an integer constant of specified value and type uintmax_t */
#define UINTMAX_C( value ) _PDCLIB_UINTMAX_C( value )

#endif

/* Annex K -- Bounds-checking interfaces */


#if 0 /* evaluated by -frewrite-includes */
#define RSIZE_MAX ( _PDCLIB_SIZE_MAX >> 1 )
#endif

/* Extension hook for downstream projects that want to have non-standard
   extensions to standard headers.
*/
#ifdef _PDCLIB_EXTEND_STDINT_H

#endif

#ifdef __cplusplus
}
#endif

#endif

#endif  // _LIBCPP_STDINT_H


#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_BEGIN_NAMESPACE_STD

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

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_CSTDINT


// -*- C++ -*-
//===--------------------------- __debug ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_DEBUG_H
#define _LIBCPP_DEBUG_H



// -*- C++ -*-
//===--------------------------- iosfwd -----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_IOSFWD
#define _LIBCPP_IOSFWD

/*
    iosfwd synopsis

namespace std
{

template<class charT> struct char_traits;
template<>            struct char_traits<char>;
template<>            struct char_traits<char8_t>;  // C++20
template<>            struct char_traits<char16_t>;
template<>            struct char_traits<char32_t>;
template<>            struct char_traits<wchar_t>;

template<class T>     class allocator;

class ios_base;
template <class charT, class traits = char_traits<charT> > class basic_ios;

template <class charT, class traits = char_traits<charT> > class basic_streambuf;
template <class charT, class traits = char_traits<charT> > class basic_istream;
template <class charT, class traits = char_traits<charT> > class basic_ostream;
template <class charT, class traits = char_traits<charT> > class basic_iostream;

template <class charT, class traits = char_traits<charT>, class Allocator = allocator<charT> >
    class basic_stringbuf;
template <class charT, class traits = char_traits<charT>, class Allocator = allocator<charT> >
    class basic_istringstream;
template <class charT, class traits = char_traits<charT>, class Allocator = allocator<charT> >
    class basic_ostringstream;
template <class charT, class traits = char_traits<charT>, class Allocator = allocator<charT> >
    class basic_stringstream;

template <class charT, class traits = char_traits<charT> > class basic_filebuf;
template <class charT, class traits = char_traits<charT> > class basic_ifstream;
template <class charT, class traits = char_traits<charT> > class basic_ofstream;
template <class charT, class traits = char_traits<charT> > class basic_fstream;

template <class charT, class traits = char_traits<charT> > class istreambuf_iterator;
template <class charT, class traits = char_traits<charT> > class ostreambuf_iterator;

typedef basic_ios<char>              ios;
typedef basic_ios<wchar_t>           wios;

typedef basic_streambuf<char>        streambuf;
typedef basic_istream<char>          istream;
typedef basic_ostream<char>          ostream;
typedef basic_iostream<char>         iostream;

typedef basic_stringbuf<char>        stringbuf;
typedef basic_istringstream<char>    istringstream;
typedef basic_ostringstream<char>    ostringstream;
typedef basic_stringstream<char>     stringstream;

typedef basic_filebuf<char>          filebuf;
typedef basic_ifstream<char>         ifstream;
typedef basic_ofstream<char>         ofstream;
typedef basic_fstream<char>          fstream;

typedef basic_streambuf<wchar_t>     wstreambuf;
typedef basic_istream<wchar_t>       wistream;
typedef basic_ostream<wchar_t>       wostream;
typedef basic_iostream<wchar_t>      wiostream;

typedef basic_stringbuf<wchar_t>     wstringbuf;
typedef basic_istringstream<wchar_t> wistringstream;
typedef basic_ostringstream<wchar_t> wostringstream;
typedef basic_stringstream<wchar_t>  wstringstream;

typedef basic_filebuf<wchar_t>       wfilebuf;
typedef basic_ifstream<wchar_t>      wifstream;
typedef basic_ofstream<wchar_t>      wofstream;
typedef basic_fstream<wchar_t>       wfstream;

template <class state> class fpos;
typedef fpos<char_traits<char>::state_type>    streampos;
typedef fpos<char_traits<wchar_t>::state_type> wstreampos;

}  // std

*/



// -*- C++ -*-
//===--------------------------- wchar.h ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//


#if 0 /* evaluated by -frewrite-includes */


#if 0 /* evaluated by -frewrite-includes */

#endif




#elif 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_WCHAR_H

/*
    wchar.h synopsis

Macros:

    NULL
    WCHAR_MAX
    WCHAR_MIN
    WEOF

Types:

    mbstate_t
    size_t
    tm
    wint_t

int fwprintf(FILE* restrict stream, const wchar_t* restrict format, ...);
int fwscanf(FILE* restrict stream, const wchar_t* restrict format, ...);
int swprintf(wchar_t* restrict s, size_t n, const wchar_t* restrict format, ...);
int swscanf(const wchar_t* restrict s, const wchar_t* restrict format, ...);
int vfwprintf(FILE* restrict stream, const wchar_t* restrict format, va_list arg);
int vfwscanf(FILE* restrict stream, const wchar_t* restrict format, va_list arg);  // C99
int vswprintf(wchar_t* restrict s, size_t n, const wchar_t* restrict format, va_list arg);
int vswscanf(const wchar_t* restrict s, const wchar_t* restrict format, va_list arg);  // C99
int vwprintf(const wchar_t* restrict format, va_list arg);
int vwscanf(const wchar_t* restrict format, va_list arg);  // C99
int wprintf(const wchar_t* restrict format, ...);
int wscanf(const wchar_t* restrict format, ...);
wint_t fgetwc(FILE* stream);
wchar_t* fgetws(wchar_t* restrict s, int n, FILE* restrict stream);
wint_t fputwc(wchar_t c, FILE* stream);
int fputws(const wchar_t* restrict s, FILE* restrict stream);
int fwide(FILE* stream, int mode);
wint_t getwc(FILE* stream);
wint_t getwchar();
wint_t putwc(wchar_t c, FILE* stream);
wint_t putwchar(wchar_t c);
wint_t ungetwc(wint_t c, FILE* stream);
double wcstod(const wchar_t* restrict nptr, wchar_t** restrict endptr);
float wcstof(const wchar_t* restrict nptr, wchar_t** restrict endptr);         // C99
long double wcstold(const wchar_t* restrict nptr, wchar_t** restrict endptr);  // C99
long wcstol(const wchar_t* restrict nptr, wchar_t** restrict endptr, int base);
long long wcstoll(const wchar_t* restrict nptr, wchar_t** restrict endptr, int base);  // C99
unsigned long wcstoul(const wchar_t* restrict nptr, wchar_t** restrict endptr, int base);
unsigned long long wcstoull(const wchar_t* restrict nptr, wchar_t** restrict endptr, int base);  // C99
wchar_t* wcscpy(wchar_t* restrict s1, const wchar_t* restrict s2);
wchar_t* wcsncpy(wchar_t* restrict s1, const wchar_t* restrict s2, size_t n);
wchar_t* wcscat(wchar_t* restrict s1, const wchar_t* restrict s2);
wchar_t* wcsncat(wchar_t* restrict s1, const wchar_t* restrict s2, size_t n);
int wcscmp(const wchar_t* s1, const wchar_t* s2);
int wcscoll(const wchar_t* s1, const wchar_t* s2);
int wcsncmp(const wchar_t* s1, const wchar_t* s2, size_t n);
size_t wcsxfrm(wchar_t* restrict s1, const wchar_t* restrict s2, size_t n);
const wchar_t* wcschr(const wchar_t* s, wchar_t c);
      wchar_t* wcschr(      wchar_t* s, wchar_t c);
size_t wcscspn(const wchar_t* s1, const wchar_t* s2);
size_t wcslen(const wchar_t* s);
const wchar_t* wcspbrk(const wchar_t* s1, const wchar_t* s2);
      wchar_t* wcspbrk(      wchar_t* s1, const wchar_t* s2);
const wchar_t* wcsrchr(const wchar_t* s, wchar_t c);
      wchar_t* wcsrchr(      wchar_t* s, wchar_t c);
size_t wcsspn(const wchar_t* s1, const wchar_t* s2);
const wchar_t* wcsstr(const wchar_t* s1, const wchar_t* s2);
      wchar_t* wcsstr(      wchar_t* s1, const wchar_t* s2);
wchar_t* wcstok(wchar_t* restrict s1, const wchar_t* restrict s2, wchar_t** restrict ptr);
const wchar_t* wmemchr(const wchar_t* s, wchar_t c, size_t n);
      wchar_t* wmemchr(      wchar_t* s, wchar_t c, size_t n);
int wmemcmp(wchar_t* restrict s1, const wchar_t* restrict s2, size_t n);
wchar_t* wmemcpy(wchar_t* restrict s1, const wchar_t* restrict s2, size_t n);
wchar_t* wmemmove(wchar_t* s1, const wchar_t* s2, size_t n);
wchar_t* wmemset(wchar_t* s, wchar_t c, size_t n);
size_t wcsftime(wchar_t* restrict s, size_t maxsize, const wchar_t* restrict format,
                const tm* restrict timeptr);
wint_t btowc(int c);
int wctob(wint_t c);
int mbsinit(const mbstate_t* ps);
size_t mbrlen(const char* restrict s, size_t n, mbstate_t* restrict ps);
size_t mbrtowc(wchar_t* restrict pwc, const char* restrict s, size_t n, mbstate_t* restrict ps);
size_t wcrtomb(char* restrict s, wchar_t wc, mbstate_t* restrict ps);
size_t mbsrtowcs(wchar_t* restrict dst, const char** restrict src, size_t len,
                 mbstate_t* restrict ps);
size_t wcsrtombs(char* restrict dst, const wchar_t** restrict src, size_t len,
                 mbstate_t* restrict ps);

*/




#if 1 /* evaluated by -frewrite-includes */

#endif

#ifdef __cplusplus
#define __CORRECT_ISO_CPP_WCHAR_H_PROTO
#endif


// SPDX-License-Identifier: MIT

// SPDX-FileCopyrightText: 2019 Sean Koppenhafer
// SPDX-FileCopyrightText: 2019 Stefan Schmidt

#ifndef _XBOXRT_WCHAR_H
#define _XBOXRT_WCHAR_H



// -*- C++ -*-
//===--------------------------- stddef.h ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//


#if 0 /* evaluated by -frewrite-includes */


#if 0 /* evaluated by -frewrite-includes */

#endif




#elif 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_STDDEF_H

/*
    stddef.h synopsis

Macros:

    offsetof(type,member-designator)
    NULL

Types:

    ptrdiff_t
    size_t
    max_align_t
    nullptr_t

*/




#if 1 /* evaluated by -frewrite-includes */

#endif



#ifdef __cplusplus

extern "C++" {

using std::nullptr_t;
}

// Re-use the compiler's <stddef.h> max_align_t where possible.

#if 1 /* evaluated by -frewrite-includes */
typedef long double max_align_t;
#endif

#endif

#endif  // _LIBCPP_STDDEF_H

// -*- C++ -*-
//===--------------------------- wctype.h ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_WCTYPE_H
#define _LIBCPP_WCTYPE_H

/*
    wctype.h synopsis

Macros:

    WEOF

Types:

    wint_t
    wctrans_t
    wctype_t

int iswalnum(wint_t wc);
int iswalpha(wint_t wc);
int iswblank(wint_t wc);  // C99
int iswcntrl(wint_t wc);
int iswdigit(wint_t wc);
int iswgraph(wint_t wc);
int iswlower(wint_t wc);
int iswprint(wint_t wc);
int iswpunct(wint_t wc);
int iswspace(wint_t wc);
int iswupper(wint_t wc);
int iswxdigit(wint_t wc);
int iswctype(wint_t wc, wctype_t desc);
wctype_t wctype(const char* property);
wint_t towlower(wint_t wc);
wint_t towupper(wint_t wc);
wint_t towctrans(wint_t wc, wctrans_t desc);
wctrans_t wctrans(const char* property);

*/




#if 1 /* evaluated by -frewrite-includes */

#endif


/* Wide character classification and mapping utilities <wctype.h>

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef _PDCLIB_WCTYPE_H
#define _PDCLIB_WCTYPE_H _PDCLIB_WCTYPE_H

#ifdef __cplusplus
extern "C" {
#endif



typedef _PDCLIB_wint_t wint_t;

// Xbox-specific types to make this header work
typedef int wctrans_t;
typedef int wctype_t;

#ifndef _PDCLIB_WEOF_DEFINED
#define _PDCLIB_WEOF_DEFINED _PDCLIB_WEOF_DEFINED
#define WEOF (wint_t)-1
#endif

/* Wide character classification functions */

/* Returns iswalpha( wc ) || iswdigit( wc ) */
_PDCLIB_PUBLIC int iswalnum( wint_t wc );

/* Returns true for wide characters for which either isupper( wc ) or
   islower( wc ) is true, as well as a set of locale-specific wide
   characters which are neither control characters, digits, punctuation,
   or whitespace.
*/
_PDCLIB_PUBLIC int iswalpha( wint_t wc );

/* Returns true if the character iswspace() and used for separating words
   within a line of text. In the "C" locale, only L' ' and L'\t' are
   considered blanks.
*/
_PDCLIB_PUBLIC int iswblank( wint_t wc );

/* Returns true if the wide character is a control character. */
_PDCLIB_PUBLIC int iswcntrl( wint_t wc );

/* Returns true if the wide character is a decimal digit. Locale-
   independent. */
_PDCLIB_PUBLIC int iswdigit( wint_t wc );

/* Returns iswprint( wc ) && ! iswspace( wc ).
   NOTE: This definition differs from that of isgraph() in <ctype.h>,
         which considers only ' ', not all isspace() characters.
*/
_PDCLIB_PUBLIC int iswgraph( wint_t wc );

/* Returns true for lowerspace wide characters, as well as a set of
   locale-specific wide characters which are neither control charcters,
   digits, punctuation, or whitespace.
*/
_PDCLIB_PUBLIC int iswlower( wint_t wc );

/* Returns true for every printing wide character. */
_PDCLIB_PUBLIC int iswprint( wint_t wc );

/* Returns true for a locale-specific set of punctuation characters that
   are neither whitespace nor alphanumeric.
*/
_PDCLIB_PUBLIC int iswpunct( wint_t wc );

/* Returns true for a locale-specific set of whitespace characters that
   are neither alphanumeric, graphic, or punctuation.
*/
_PDCLIB_PUBLIC int iswspace( wint_t wc );

/* Returns true for upperspace wide characters, as well as a set of
   locale-specific wide characters which are neither control charcters,
   digits, punctuation, or whitespace.
*/
_PDCLIB_PUBLIC int iswupper( wint_t wc );

/* Returns true if the wide character is a hexadecimal digit. Locale-
   independent. */
_PDCLIB_PUBLIC int iswxdigit( wint_t wc );

/* Extensible wide character classification functions */

/* Returns true if the wide character wc has the property described by
   desc (which was retrieved by a previous call to wctype() without
   changing the LC_CTYPE locale setting between the two calls).
*/
_PDCLIB_PUBLIC int iswctype( wint_t wc, wctype_t desc );

/* Returns a description object for a named character property, to be
   used as parameter to the iswctype() function. Supported property
   names are:
   "alnum" -- alphanumeric, as per iswalnum()
   "alpha" -- alphabetic, as per iswalpha()
   "blank" -- blank, as per iswblank()
   "cntrl" -- control, as per iswcntrl()
   "digit" -- decimal digit, as per iswdigit()
   "graph" -- graphic, as per iswgraph()
   "lower" -- lowercase, as per iswlower()
   "print" -- printing, as per iswprint()
   "punct" -- punctuation, as per iswprint()
   "space" -- whitespace, as per iswspace()
   "upper" -- uppercase, as per iswupper()
   "xdigit" -- hexadecimal digit, as per iswxdigit()
   For unsupported properties, the function returns zero.
*/
_PDCLIB_PUBLIC wctype_t wctype( const char * property );

/* Wide character case mapping utilities */

/* Converts an uppercase letter to a corresponding lowercase letter. Input for
   which no corresponding lowercase letter exists remains unchanged.
*/
_PDCLIB_PUBLIC wint_t towlower( wint_t wc );

/* Converts a lowercase letter to a corresponding uppercase letter. Input for
   which no corresponding uppercase letter exists remains unchanged.
*/
_PDCLIB_PUBLIC wint_t towupper( wint_t wc );

/* Extensible wide character case mapping utilities */

/* Converts the wide character wc according to the transition described
   by desc (which was retrieved by a previous call to wctrans() without
   changing the LC_CTYPE locale setting between the two calls).
*/
_PDCLIB_PUBLIC wint_t towctrans( wint_t wc, wctrans_t desc );

/* Returns a description object for a named character transformation, to
   be used as parameter to the towctrans() function. Supported transformation
   properties are:
   "tolower" -- lowercase mapping, as per towlower()
   "toupper" -- uppercase mapping, as per towupper()
   For unsupported properties, the function returns zero.
*/
_PDCLIB_PUBLIC wctrans_t wctrans( const char * property );

/* Extension hook for downstream projects that want to have non-standard
   extensions to standard headers.
*/
#ifdef _PDCLIB_EXTEND_WCTYPE_H

#endif

#ifdef __cplusplus
}
#endif

#endif

#ifdef __cplusplus

#undef iswalnum
#undef iswalpha
#undef iswblank
#undef iswcntrl
#undef iswdigit
#undef iswgraph
#undef iswlower
#undef iswprint
#undef iswpunct
#undef iswspace
#undef iswupper
#undef iswxdigit
#undef iswctype
#undef wctype
#undef towlower
#undef towupper
#undef towctrans
#undef wctrans

#endif  // __cplusplus

#endif  // _LIBCPP_WCTYPE_H

#ifdef __cplusplus
    #define XBOXRT_RESTRICT __restrict
#else
    #define XBOXRT_RESTRICT restrict
#endif

/* Created from _PDCLIB_mbstate_t */
typedef struct XBOXRT_mbstate {
    union {
        uint64_t _St64[15];
        uint32_t _St32[31];
        uint16_t _St16[62];
        unsigned char    _StUC[124];
        signed   char    _StSC[124];
                 char    _StC [124];
    };
    uint16_t      _Surrogate;
    unsigned char _PendState;
             char _PendChar;
} XBOXRT_mbstate_t;

typedef XBOXRT_mbstate_t mbstate_t;

struct tm;

#ifdef __cplusplus
extern "C" {
#endif

wchar_t * wcscpy( wchar_t * XBOXRT_RESTRICT s1, const wchar_t * XBOXRT_RESTRICT s2 );
wchar_t * wcsncpy( wchar_t * XBOXRT_RESTRICT s1, const wchar_t * XBOXRT_RESTRICT s2, size_t n );
wchar_t * wmemcpy( wchar_t * XBOXRT_RESTRICT s1, const wchar_t * XBOXRT_RESTRICT s2, size_t n );
wchar_t * wmemmove( wchar_t * s1, const wchar_t * s2, size_t n );
wchar_t * wcscat( wchar_t * XBOXRT_RESTRICT s1, const wchar_t * XBOXRT_RESTRICT s2 );
wchar_t * wcsncat( wchar_t * XBOXRT_RESTRICT s1, const wchar_t * XBOXRT_RESTRICT s2, size_t n );
int wcscmp( const wchar_t * s1, const wchar_t * s2 );
int wcscoll( const wchar_t * s1, const wchar_t * s2 );
int wcsncmp( const wchar_t * s1, const wchar_t * s2, size_t n );
size_t wcsxfrm( wchar_t * XBOXRT_RESTRICT s1, const wchar_t * XBOXRT_RESTRICT s2, size_t n );
int wmemcmp( const wchar_t * s1, const wchar_t * s2, size_t n );
wchar_t * wcschr( const wchar_t * s, wchar_t c );
size_t wcscspn( const wchar_t * s1, const wchar_t * s2 );
wchar_t * wcspbrk( const wchar_t * s1, const wchar_t * s2 );
wchar_t * wcsrchr( const wchar_t * s, wchar_t c );
size_t wcsspn( const wchar_t * s1, const wchar_t * s2 );
wchar_t * wcsstr( const wchar_t * s1, const wchar_t * s2 );
wchar_t * wcstok( wchar_t * XBOXRT_RESTRICT s1, const wchar_t * XBOXRT_RESTRICT s2, wchar_t * * XBOXRT_RESTRICT ptr );
wchar_t * wmemchr( const wchar_t * s, wchar_t c, size_t n );
size_t wcslen( const wchar_t * s );
int mbsinit( const mbstate_t * ps );
size_t mbrtowc( wchar_t * XBOXRT_RESTRICT pwc, const char * XBOXRT_RESTRICT s, size_t n, mbstate_t * XBOXRT_RESTRICT ps );
size_t wcrtomb( char * XBOXRT_RESTRICT s, wchar_t wc, mbstate_t * XBOXRT_RESTRICT ps );
wchar_t *wmemset(wchar_t *wcs, wchar_t wc, size_t n);
double wcstod(const wchar_t * XBOXRT_RESTRICT nptr, wchar_t ** XBOXRT_RESTRICT endptr);
float wcstof(const wchar_t * XBOXRT_RESTRICT nptr, wchar_t ** XBOXRT_RESTRICT endptr);
long double wcstold(const wchar_t * XBOXRT_RESTRICT nptr, wchar_t ** XBOXRT_RESTRICT endptr);
long wcstol(const wchar_t * XBOXRT_RESTRICT nptr, wchar_t ** XBOXRT_RESTRICT endptr, int base);
long long wcstoll(const wchar_t * XBOXRT_RESTRICT nptr, wchar_t ** XBOXRT_RESTRICT endptr, int base);
unsigned long wcstoul(const wchar_t * XBOXRT_RESTRICT nptr, wchar_t ** XBOXRT_RESTRICT endptr, int base);
unsigned long long wcstoull(const wchar_t * XBOXRT_RESTRICT nptr, wchar_t ** XBOXRT_RESTRICT endptr, int base);
size_t mbrlen(const char *s, size_t n, mbstate_t *ps);
wint_t btowc(int c);
size_t mbsrtowcs(wchar_t *dest, const char **src, size_t len, mbstate_t *ps);
int wctob(wint_t c);
int wcrtomb_s(size_t * XBOXRT_RESTRICT retval, char * XBOXRT_RESTRICT s, size_t ssz, wchar_t wc, mbstate_t * XBOXRT_RESTRICT ps);

#ifdef __cplusplus
}
#endif


// SPDX-License-Identifier: MIT

// SPDX-FileCopyrightText: 2019 Stefan Schmidt

#ifdef __cplusplus
extern "C" {
#endif

// Windows-specific extension required by libc++
int _snwprintf(wchar_t *buffer, size_t count, const wchar_t *format, ...);

#ifdef __cplusplus
}
#endif

#endif /* end of include guard: _XBOXRT_WCHAR_H */

// Determine whether we have const-correct overloads for wcschr and friends.

#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS 1

#elif 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS 1
#  endif

#elif 1 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS 1
#  endif
#endif


#if 1 /* evaluated by -frewrite-includes */
extern "C++" {
inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcschr(const wchar_t* __s, wchar_t __c) {return (wchar_t*)wcschr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcschr(const wchar_t* __s, wchar_t __c) {return __libcpp_wcschr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcschr(      wchar_t* __s, wchar_t __c) {return __libcpp_wcschr(__s, __c);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcspbrk(const wchar_t* __s1, const wchar_t* __s2) {return (wchar_t*)wcspbrk(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcspbrk(const wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcspbrk(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcspbrk(      wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcspbrk(__s1, __s2);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcsrchr(const wchar_t* __s, wchar_t __c) {return (wchar_t*)wcsrchr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcsrchr(const wchar_t* __s, wchar_t __c) {return __libcpp_wcsrchr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcsrchr(      wchar_t* __s, wchar_t __c) {return __libcpp_wcsrchr(__s, __c);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcsstr(const wchar_t* __s1, const wchar_t* __s2) {return (wchar_t*)wcsstr(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcsstr(const wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcsstr(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcsstr(      wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcsstr(__s1, __s2);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wmemchr(const wchar_t* __s, wchar_t __c, size_t __n) {return (wchar_t*)wmemchr(__s, __c, __n);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wmemchr(const wchar_t* __s, wchar_t __c, size_t __n) {return __libcpp_wmemchr(__s, __c, __n);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wmemchr(      wchar_t* __s, wchar_t __c, size_t __n) {return __libcpp_wmemchr(__s, __c, __n);}
}
#endif


#if 1 /* evaluated by -frewrite-includes */
extern "C" {
size_t mbsnrtowcs(wchar_t *__restrict dst, const char **__restrict src,
                  size_t nmc, size_t len, mbstate_t *__restrict ps);
size_t wcsnrtombs(char *__restrict dst, const wchar_t **__restrict src,
                  size_t nwc, size_t len, mbstate_t *__restrict ps);
}  // extern "C++"
#endif  // __cplusplus && _LIBCPP_MSVCRT

#endif  // _LIBCPP_WCHAR_H


#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_BEGIN_NAMESPACE_STD

class _LIBCPP_TYPE_VIS ios_base;

template<class _CharT>  struct _LIBCPP_TEMPLATE_VIS char_traits;
template<> struct char_traits<char>;
#ifndef _LIBCPP_NO_HAS_CHAR8_T
template<> struct char_traits<char8_t>;
#endif
template<> struct char_traits<char16_t>;
template<> struct char_traits<char32_t>;
template<> struct char_traits<wchar_t>;

template<class _Tp>     class _LIBCPP_TEMPLATE_VIS allocator;

template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_ios;

template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_streambuf;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_istream;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_ostream;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_iostream;

template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_stringbuf;
template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_istringstream;
template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_ostringstream;
template <class _CharT, class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_stringstream;

template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_filebuf;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_ifstream;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_ofstream;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_fstream;

template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS istreambuf_iterator;
template <class _CharT, class _Traits = char_traits<_CharT> >
    class _LIBCPP_TEMPLATE_VIS ostreambuf_iterator;

typedef basic_ios<char>              ios;
typedef basic_ios<wchar_t>           wios;

typedef basic_streambuf<char>        streambuf;
typedef basic_istream<char>          istream;
typedef basic_ostream<char>          ostream;
typedef basic_iostream<char>         iostream;

typedef basic_stringbuf<char>        stringbuf;
typedef basic_istringstream<char>    istringstream;
typedef basic_ostringstream<char>    ostringstream;
typedef basic_stringstream<char>     stringstream;

typedef basic_filebuf<char>          filebuf;
typedef basic_ifstream<char>         ifstream;
typedef basic_ofstream<char>         ofstream;
typedef basic_fstream<char>          fstream;

typedef basic_streambuf<wchar_t>     wstreambuf;
typedef basic_istream<wchar_t>       wistream;
typedef basic_ostream<wchar_t>       wostream;
typedef basic_iostream<wchar_t>      wiostream;

typedef basic_stringbuf<wchar_t>     wstringbuf;
typedef basic_istringstream<wchar_t> wistringstream;
typedef basic_ostringstream<wchar_t> wostringstream;
typedef basic_stringstream<wchar_t>  wstringstream;

typedef basic_filebuf<wchar_t>       wfilebuf;
typedef basic_ifstream<wchar_t>      wifstream;
typedef basic_ofstream<wchar_t>      wofstream;
typedef basic_fstream<wchar_t>       wfstream;

template <class _State>             class _LIBCPP_TEMPLATE_VIS fpos;
typedef fpos<mbstate_t>    streampos;
typedef fpos<mbstate_t>    wstreampos;
#ifndef _LIBCPP_NO_HAS_CHAR8_T
typedef fpos<mbstate_t>    u8streampos;
#endif
#ifndef _LIBCPP_HAS_NO_UNICODE_CHARS
typedef fpos<mbstate_t>    u16streampos;
typedef fpos<mbstate_t>    u32streampos;
#endif  // _LIBCPP_HAS_NO_UNICODE_CHARS


#if 0 /* evaluated by -frewrite-includes */
// On newlib, off_t is 'long int'
typedef long int streamoff;         // for char_traits in <string>
#else
typedef long long streamoff;        // for char_traits in <string>
#endif

template <class _CharT,             // for <stdexcept>
          class _Traits = char_traits<_CharT>,
          class _Allocator = allocator<_CharT> >
    class _LIBCPP_TEMPLATE_VIS basic_string;
typedef basic_string<char, char_traits<char>, allocator<char> > string;
typedef basic_string<wchar_t, char_traits<wchar_t>, allocator<wchar_t> > wstring;


// Include other forward declarations here
template <class _Tp, class _Alloc = allocator<_Tp> >
class _LIBCPP_TEMPLATE_VIS vector;

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_IOSFWD


#if 1 /* evaluated by -frewrite-includes */

#endif


#if 0 /* evaluated by -frewrite-includes */

#endif


#if 1 /* evaluated by -frewrite-includes */

// -*- C++ -*-
//===--------------------------- cstdlib ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_CSTDLIB
#define _LIBCPP_CSTDLIB

/*
    cstdlib synopsis

Macros:

    EXIT_FAILURE
    EXIT_SUCCESS
    MB_CUR_MAX
    NULL
    RAND_MAX

namespace std
{

Types:

    size_t
    div_t
    ldiv_t
    lldiv_t                                                               // C99

double    atof (const char* nptr);
int       atoi (const char* nptr);
long      atol (const char* nptr);
long long atoll(const char* nptr);                                        // C99
double             strtod  (const char* restrict nptr, char** restrict endptr);
float              strtof  (const char* restrict nptr, char** restrict endptr); // C99
long double        strtold (const char* restrict nptr, char** restrict endptr); // C99
long               strtol  (const char* restrict nptr, char** restrict endptr, int base);
long long          strtoll (const char* restrict nptr, char** restrict endptr, int base); // C99
unsigned long      strtoul (const char* restrict nptr, char** restrict endptr, int base);
unsigned long long strtoull(const char* restrict nptr, char** restrict endptr, int base); // C99
int rand(void);
void srand(unsigned int seed);
void* calloc(size_t nmemb, size_t size);
void free(void* ptr);
void* malloc(size_t size);
void* realloc(void* ptr, size_t size);
void abort(void);
int atexit(void (*func)(void));
void exit(int status);
void _Exit(int status);
char* getenv(const char* name);
int system(const char* string);
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size,
              int (*compar)(const void *, const void *));
void qsort(void* base, size_t nmemb, size_t size,
           int (*compar)(const void *, const void *));
int         abs(      int j);
long        abs(     long j);
long long   abs(long long j);                                             // C++0X
long       labs(     long j);
long long llabs(long long j);                                             // C99
div_t     div(      int numer,       int denom);
ldiv_t    div(     long numer,      long denom);
lldiv_t   div(long long numer, long long denom);                          // C++0X
ldiv_t   ldiv(     long numer,      long denom);
lldiv_t lldiv(long long numer, long long denom);                          // C99
int mblen(const char* s, size_t n);
int mbtowc(wchar_t* restrict pwc, const char* restrict s, size_t n);
int wctomb(char* s, wchar_t wchar);
size_t mbstowcs(wchar_t* restrict pwcs, const char* restrict s, size_t n);
size_t wcstombs(char* restrict s, const wchar_t* restrict pwcs, size_t n);
int at_quick_exit(void (*func)(void))                                     // C++11
void quick_exit(int status);                                              // C++11
void *aligned_alloc(size_t alignment, size_t size);                       // C11

}  // std

*/



// -*- C++ -*-
//===--------------------------- stdlib.h ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//


#if 0 /* evaluated by -frewrite-includes */


#if 0 /* evaluated by -frewrite-includes */

#endif


#if 0 /* evaluated by -frewrite-includes */
#undef _LIBCPP_STDLIB_INCLUDE_NEXT
#endif




#elif 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_STDLIB_H

/*
    stdlib.h synopsis

Macros:

    EXIT_FAILURE
    EXIT_SUCCESS
    MB_CUR_MAX
    NULL
    RAND_MAX

Types:

    size_t
    div_t
    ldiv_t
    lldiv_t                                                               // C99

double    atof (const char* nptr);
int       atoi (const char* nptr);
long      atol (const char* nptr);
long long atoll(const char* nptr);                                        // C99
double             strtod  (const char* restrict nptr, char** restrict endptr);
float              strtof  (const char* restrict nptr, char** restrict endptr); // C99
long double        strtold (const char* restrict nptr, char** restrict endptr); // C99
long               strtol  (const char* restrict nptr, char** restrict endptr, int base);
long long          strtoll (const char* restrict nptr, char** restrict endptr, int base); // C99
unsigned long      strtoul (const char* restrict nptr, char** restrict endptr, int base);
unsigned long long strtoull(const char* restrict nptr, char** restrict endptr, int base); // C99
int rand(void);
void srand(unsigned int seed);
void* calloc(size_t nmemb, size_t size);
void free(void* ptr);
void* malloc(size_t size);
void* realloc(void* ptr, size_t size);
void abort(void);
int atexit(void (*func)(void));
void exit(int status);
void _Exit(int status);
char* getenv(const char* name);
int system(const char* string);
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size,
              int (*compar)(const void *, const void *));
void qsort(void* base, size_t nmemb, size_t size,
           int (*compar)(const void *, const void *));
int         abs(      int j);
long        abs(     long j);
long long   abs(long long j);                                             // C++0X
long       labs(     long j);
long long llabs(long long j);                                             // C99
div_t     div(      int numer,       int denom);
ldiv_t    div(     long numer,      long denom);
lldiv_t   div(long long numer, long long denom);                          // C++0X
ldiv_t   ldiv(     long numer,      long denom);
lldiv_t lldiv(long long numer, long long denom);                          // C99
int mblen(const char* s, size_t n);
int mbtowc(wchar_t* restrict pwc, const char* restrict s, size_t n);
int wctomb(char* s, wchar_t wchar);
size_t mbstowcs(wchar_t* restrict pwcs, const char* restrict s, size_t n);
size_t wcstombs(char* restrict s, const wchar_t* restrict pwcs, size_t n);
int at_quick_exit(void (*func)(void))                                     // C++11
void quick_exit(int status);                                              // C++11
void *aligned_alloc(size_t alignment, size_t size);                       // C11

*/




#if 1 /* evaluated by -frewrite-includes */

#endif


/* General utilities <stdlib.h>

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef _PDCLIB_STDLIB_H
#define _PDCLIB_STDLIB_H _PDCLIB_STDLIB_H

#ifdef __cplusplus
extern "C" {
#endif


/* __STDC_WANT_LIB_EXT1__ redefinition guard

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef __STDC_WANT_LIB_EXT1__
  #ifdef __STDC_WANT_LIB_EXT1_PREVIOUS__


#if 0 /* evaluated by -frewrite-includes */
      #error __STDC_WANT_LIB_EXT1__ undefined when it was defined earlier.
    #endif
  #else
    #define __STDC_WANT_LIB_EXT1_PREVIOUS__ -1
  #endif
#else


#if 0 /* evaluated by -frewrite-includes */
    #error __STDC_WANT_LIB_EXT1__ defined but empty. Should be an integer value.
  #endif
  #ifdef __STDC_WANT_LIB_EXT1_PREVIOUS__


#if 0 /* evaluated by -frewrite-includes */
      #error __STDC_WANT_LIB_EXT1__ redefined from previous value.
    #endif
  #else


#if 0 /* evaluated by -frewrite-includes */
      #define __STDC_WANT_LIB_EXT1_PREVIOUS__ 0


#elif 0 /* evaluated by -frewrite-includes */
      #define __STDC_WANT_LIB_EXT1_PREVIOUS__ 1
    #else
      #error __STDC_WANT_LIB_EXT1__ set to value other than 0,1 -- undefined behavior
    #endif
  #endif
#endif


#ifndef _PDCLIB_SIZE_T_DEFINED
#define _PDCLIB_SIZE_T_DEFINED _PDCLIB_SIZE_T_DEFINED
typedef _PDCLIB_size_t size_t;
#endif

#ifndef _PDCLIB_NULL_DEFINED
#define _PDCLIB_NULL_DEFINED _PDCLIB_NULL_DEFINED
#define NULL _PDCLIB_NULL
#endif

/* Numeric conversion functions */

/* TODO: atof(), strtof(), strtod(), strtold() */

_PDCLIB_PUBLIC double atof( const char * nptr );
_PDCLIB_PUBLIC double strtod( const char * _PDCLIB_restrict nptr, char * * _PDCLIB_restrict endptr );
_PDCLIB_PUBLIC float strtof( const char * _PDCLIB_restrict nptr, char * * _PDCLIB_restrict endptr );
_PDCLIB_PUBLIC long double strtold( const char * _PDCLIB_restrict nptr, char * * _PDCLIB_restrict endptr );

/* Separate the character array nptr into three parts: A (possibly empty)
   sequence of whitespace characters, a character representation of an integer
   to the given base, and trailing invalid characters (including the terminating
   null character). If base is 0, assume it to be 10, unless the integer
   representation starts with 0x / 0X (setting base to 16) or 0 (setting base to
   8). If given, base can be anything from 0 to 36, using the 26 letters of the
   base alphabet (both lowercase and uppercase) as digits 10 through 35.
   The integer representation is then converted into the return type of the
   function. It can start with a '+' or '-' sign. If the sign is '-', the result
   of the conversion is negated.
   If the conversion is successful, the converted value is returned. If endptr
   is not a NULL pointer, a pointer to the first trailing invalid character is
   returned in *endptr.
   If no conversion could be performed, zero is returned (and nptr in *endptr,
   if endptr is not a NULL pointer). If the converted value does not fit into
   the return type, the functions return LONG_MIN, LONG_MAX, ULONG_MAX,
   LLONG_MIN, LLONG_MAX, or ULLONG_MAX respectively, depending on the sign of
   the integer representation and the return type, and errno is set to ERANGE.
*/
/* There is strtoimax() and strtoumax() in <inttypes.h> operating on intmax_t /
   uintmax_t, if the long long versions do not suit your needs.
*/
_PDCLIB_PUBLIC long int strtol( const char * _PDCLIB_restrict nptr, char * * _PDCLIB_restrict endptr, int base );
_PDCLIB_PUBLIC long long int strtoll( const char * _PDCLIB_restrict nptr, char * * _PDCLIB_restrict endptr, int base );
_PDCLIB_PUBLIC unsigned long int strtoul( const char * _PDCLIB_restrict nptr, char * * _PDCLIB_restrict endptr, int base );
_PDCLIB_PUBLIC unsigned long long int strtoull( const char * _PDCLIB_restrict nptr, char * * _PDCLIB_restrict endptr, int base );

/* These functions are the equivalent of (int)strtol( nptr, NULL, 10 ),
   strtol( nptr, NULL, 10 ) and strtoll(nptr, NULL, 10 ) respectively, with the
   exception that they do not have to handle overflow situations in any defined
   way.
   (PDCLib does not simply forward these to their strtox() equivalents, but
   provides a simpler atox() function that saves a couple of tests and simply
   continues with the conversion in case of overflow.)
*/
_PDCLIB_PUBLIC int atoi( const char * nptr );
_PDCLIB_PUBLIC long int atol( const char * nptr );
_PDCLIB_PUBLIC long long int atoll( const char * nptr );

/* Pseudo-random sequence generation functions */

extern unsigned long int _PDCLIB_seed;

#define RAND_MAX 32767

/* Returns the next number in a pseudo-random sequence, which is between 0 and
   RAND_MAX.
   (PDCLib uses the implementation suggested by the standard document, which is
   next = next * 1103515245 + 12345; return (unsigned int)(next/65536) % 32768;)
*/
_PDCLIB_PUBLIC int rand( void );

/* Initialize a new pseudo-random sequence with the starting seed. Same seeds
   result in the same pseudo-random sequence. The default seed is 1.
*/
_PDCLIB_PUBLIC void srand( unsigned int seed );

/* Memory management functions */

/* Allocate a chunk of heap memory of given size. If request could not be
   satisfied, return NULL. Otherwise, return a pointer to the allocated
   memory. Memory contents are undefined.
*/
_PDCLIB_PUBLIC void * malloc( size_t size );

/* Allocate a chunk of heap memory that is large enough to hold nmemb elements
   of the given size, and zero-initialize that memory. If request could not be
   satisfied, return NULL. Otherwise, return a pointer to the allocated
   memory.
*/
_PDCLIB_PUBLIC void * calloc( size_t nmemb, size_t size );


#if 1 /* evaluated by -frewrite-includes */
_PDCLIB_PUBLIC void * aligned_alloc( size_t alignment, size_t size );
#endif

/* De-allocate a chunk of heap memory previously allocated using malloc(),
   calloc(), or realloc(), and pointed to by ptr. If ptr does not match a
   pointer previously returned by the mentioned allocation functions, or
   free() has already been called for this ptr, behaviour is undefined.
*/
_PDCLIB_PUBLIC void free( void * ptr );

/* Resize a chunk of memory previously allocated with malloc() and pointed to
   by ptr to the given size (which might be larger or smaller than the original
   size). Returns a pointer to the reallocated memory, or NULL if the request
   could not be satisfied. Note that the resizing might include a memcpy()
   from the original location to a different one, so the return value might or
   might not equal ptr. If size is larger than the original size, the value of
   memory beyond the original size is undefined. If ptr is NULL, realloc()
   behaves like malloc().
*/
_PDCLIB_PUBLIC void * realloc( void * ptr, size_t size );

/* Communication with the environment */

/* These two can be passed to exit() or _Exit() as status values, to signal
   successful and unsuccessful program termination, respectively. EXIT_SUCCESS
   can be replaced by 0. How successful or unsuccessful program termination are
   signaled to the environment, and what happens if exit() or _Exit() are being
   called with a value that is neither of the three, is defined by the hosting
   OS and its glue function.
*/
#define EXIT_SUCCESS _PDCLIB_SUCCESS
#define EXIT_FAILURE _PDCLIB_FAILURE

/* Initiate abnormal process termination, unless programm catches SIGABRT and
   does not return from the signal handler.
   This implementantion flushes all streams, closes all files, and removes any
   temporary files before exiting with EXIT_FAILURE.
   abort() does not return.
*/
_PDCLIB_PUBLIC _PDCLIB_Noreturn void abort( void );

/* Register a function that will be called on quick_exit().
   At least 32 functions can be registered this way, and will be called in
   reverse order of registration (last-in, first-out).
   Returns zero if registration is successfull, nonzero if it failed.
*/
_PDCLIB_PUBLIC int at_quick_exit( void (*func)( void ) );

/* Register a function that will be called on exit(), or when main() returns.
   At least 32 functions can be registered this way, and will be called in
   reverse order of registration (last-in, first-out).
   Returns zero if registration is successfull, nonzero if it failed.
*/
_PDCLIB_PUBLIC int atexit( void (*func)( void ) );

/* Normal process termination. Functions registered by atexit() (see above) are
   called, streams flushed, files closed and temporary files removed before the
   program is terminated with the given status. (See comment for EXIT_SUCCESS
   and EXIT_FAILURE above.)
   exit() does not return.
*/
_PDCLIB_PUBLIC _PDCLIB_Noreturn void exit( int status );

/* Normal process termination. Functions registered by at_quick_exit() (see
   above) are called, streams flushed, files closed and temporary files removed
   before the program is terminated with the given status. (See comment for
   EXIT_SUCCESS and EXIT_FAILURE above.)
   quick_exit() does not return.
*/
_PDCLIB_PUBLIC _PDCLIB_Noreturn void quick_exit( int status );

/* Normal process termination. Functions registered by atexit()/at_quick_exit()
   (see above) are NOT CALLED. This implementation DOES flush streams, close
   files and removes temporary files before the program is teminated with the
   given status. (See comment for EXIT_SUCCESS and EXIT_FAILURE above.)
   _Exit() does not return.
*/
_PDCLIB_PUBLIC _PDCLIB_Noreturn void _Exit( int status );

/* Search an environment-provided key-value map for the given key name, and
   return a pointer to the associated value string (or NULL if key name cannot
   be found). The value string pointed to might be overwritten by a subsequent
   call to getenv(). The library never calls getenv() itself.
   Details on the provided keys and how to set / change them are determined by
   the hosting OS and its glue function.
*/
_PDCLIB_PUBLIC char * getenv( const char * name );

/* If string is a NULL pointer, system() returns nonzero if a command processor
   is available, and zero otherwise. If string is not a NULL pointer, it is
   passed to the command processor. If system() returns, it does so with a
   value that is determined by the hosting OS and its glue function.
*/
_PDCLIB_PUBLIC int system( const char * string );

/* Searching and sorting */

/* Do a binary search for a given key in the array with a given base pointer,
   which consists of nmemb elements that are of the given size each. To compare
   the given key with an element from the array, the given function compar is
   called (with key as first parameter and a pointer to the array member as
   second parameter); the function should return a value less than, equal to,
   or greater than 0 if the key is considered to be less than, equal to, or
   greater than the array element, respectively.
   The function returns a pointer to a matching element found, or NULL if no
   match is found.
*/
_PDCLIB_PUBLIC void * bsearch( const void * key, const void * base, size_t nmemb, size_t size, int (*compar)( const void *, const void * ) );

/* Do a quicksort on an array with a given base pointer, which consists of
   nmemb elements that are of the given size each. To compare two elements from
   the array, the given function compar is called, which should return a value
   less than, equal to, or greater than 0 if the first argument is considered
   to be less than, equal to, or greater than the second argument, respectively.
   If two elements are compared equal, their order in the sorted array is not
   specified.
*/
_PDCLIB_PUBLIC void qsort( void * base, size_t nmemb, size_t size, int (*compar)( const void *, const void * ) );

/* Integer arithmetic functions */

/* Return the absolute value of the argument. Note that on machines using two-
   complement's notation (most modern CPUs), the largest negative value cannot
   be represented as positive value. In this case, behaviour is unspecified.
*/
_PDCLIB_PUBLIC int abs( int j );
_PDCLIB_PUBLIC long int labs( long int j );
_PDCLIB_PUBLIC long long int llabs( long long int j );

/* These structures each have a member quot and a member rem, of type int (for
   div_t), long int (for ldiv_t) and long long it (for lldiv_t) respectively.
   The order of the members is platform-defined to allow the div() functions
   below to be implemented efficiently.
*/
typedef struct _PDCLIB_div_t     div_t;
typedef struct _PDCLIB_ldiv_t   ldiv_t;
typedef struct _PDCLIB_lldiv_t lldiv_t;

/* Return quotient (quot) and remainder (rem) of an integer division in one of
   the structs above.
*/
_PDCLIB_PUBLIC div_t div( int numer, int denom );
_PDCLIB_PUBLIC ldiv_t ldiv( long int numer, long int denom );
_PDCLIB_PUBLIC lldiv_t lldiv( long long int numer, long long int denom );

/* TODO: Multibyte / wide character conversion functions */

/* TODO: Macro MB_CUR_MAX */

/*
_PDCLIB_PUBLIC int mblen( const char * s, size_t n );
_PDCLIB_PUBLIC int mbtowc( wchar_t * _PDCLIB_restrict pwc, const char * _PDCLIB_restrict s, size_t n );
_PDCLIB_PUBLIC int wctomb( char * s, wchar_t wc );
_PDCLIB_PUBLIC size_t mbstowcs( wchar_t * _PDCLIB_restrict pwcs, const char * _PDCLIB_restrict s, size_t n );
_PDCLIB_PUBLIC size_t wcstombs( char * _PDCLIB_restrict s, const wchar_t * _PDCLIB_restrict pwcs, size_t n );
*/

/* Annex K -- Bounds-checking interfaces */


#if 0 /* evaluated by -frewrite-includes */

#ifndef _PDCLIB_ERRNO_T_DEFINED
#define _PDCLIB_ERRNO_T_DEFINED _PDCLIB_ERRNO_T_DEFINED
typedef int errno_t;
#endif

#ifndef _PDCLIB_RSIZE_T_DEFINED
#define _PDCLIB_RSIZE_T_DEFINED _PDCLIB_RSIZE_T_DEFINED
typedef size_t rsize_t;
#endif

/* A function type that can serve as a constraint handler (see below). The
   first parameter is an error message on the constraint violation, the
   second parameter a pointer to an implementation-defined object, the
   third an error code related to the constraint violation.
   If the function calling the constraint handler is defined to return
   errno_t, the third parameter will be identical to the return value of
   that function.
   This implementation sets the second parameter of the constraint handler
   call to NULL.
*/
typedef void (*constraint_handler_t)( const char * _PDCLIB_restrict msg, void * _PDCLIB_restrict ptr, errno_t error );

/* The currently active constraint violation handler. This implementation
   sets abort_handler_s as the default constraint violation handler.
*/
extern constraint_handler_t _PDCLIB_constraint_handler;

/* Set the given function as the new constraint violation handler. */
_PDCLIB_PUBLIC constraint_handler_t set_constraint_handler_s( constraint_handler_t handler );

/* One of two predefined constraint violation handlers. When called, it will
   print an error message (including the message passed as the first
   parameter to the handler function) and call abort().
*/
_PDCLIB_PUBLIC void abort_handler_s( const char * _PDCLIB_restrict msg, void * _PDCLIB_restrict ptr, errno_t error );

/* One of two predefined constraint violation handlers. Simply returns,
   ignoring the constraint violation.
*/
_PDCLIB_PUBLIC void ignore_handler_s( const char * _PDCLIB_restrict msg, void * _PDCLIB_restrict ptr, errno_t error );

/* Search an environment-provided key-value map for the given key name.
   If the name is found,
   - if len is not NULL, the length of the associated value string is stored
     in that location.
   - if len < maxsize, the value string is copied to the indicated location.
   If the name is not found,
   - if len is not NULL, a zero is stored in that location.
   - if maxsize > 0, value[0] is set to the null character.
   Details on the provided keys and how to set / change them are determined by
   the hosting OS and its glue function.
   The following conditions will be considered runtime constraint violations:
   - value being a NULL pointer.
   - maxsize == 0 or maxsize > RSIZE_MAX.
   In case of a constraint violation, if len is not NULL a zero will be
   stored at that location, and the environment key-value map not searched.
   The currently active constraint violation handler function will be called
   (see set_constraint_handler_s()).
*/
_PDCLIB_PUBLIC errno_t getenv_s( size_t * _PDCLIB_restrict len, char * _PDCLIB_restrict value, rsize_t maxsize, const char * _PDCLIB_restrict name );

/* Do a binary search for a given key in the array with a given base pointer,
   which consists of nmemb elements that are of the given size each. To compare
   the given key with an element from the array, the given function compar is
   called (with key as first parameter, a pointer to the array member as
   second parameter, and the context parameter passed to bsearch_s() as third
   parameter); the function should return a value less than, equal to,
   or greater than 0 if the key is considered to be less than, equal to, or
   greater than the array element, respectively.
   The function returns a pointer to a matching element found, or NULL if no
   match is found.
   The following conditions will be considered runtime constraint violations:
   - nmemb or size > RSIZE_MAX.
   - nmemb > 0 and either of key, base, or compar being a null pointer.
   In case of a constraint violation, the array will not be searched.
   The currently active constraint violation handler function will be called
   (see set_constraint_handler_s()).
*/
_PDCLIB_PUBLIC void * bsearch_s( const void * key, const void * base, rsize_t nmemb, rsize_t size, int (*compar)(const void * k, const void * y, void * context ), void * context );

/* Do a quicksort on an array with a given base pointer, which consists of
   nmemb elements that are of the given size each. To compare two elements from
   the array, the given function compar is called, with the first two arguments
   being pointers to the two objects to be compared, and the third argument
   being the context parameter passed to qsort_s. The compar function should
   return a value less than, equal to, or greater than 0 if the first argument
   is considered to be less than, equal to, or greater than the second argument,
   respectively. If two elements are compared equal, their order in the sorted
   array is not specified.
   The following conditions will be considered runtime constraint violations:
   - nmemb or size > RSIZE_MAX.
   - nmemb > 0 and either of base or compar being a null pointer.
   In case of a constraint violation, the array will not be sorted.
   The currently active constraint violation handler function will be called
   (see set_constraint_handler_s()).
*/
_PDCLIB_PUBLIC errno_t qsort_s( void * base, rsize_t nmemb, rsize_t size, int (*compar)( const void * x, const void * y, void * context ), void * context );

/* TODO: Multibyte / wide character functions */

#endif

#ifdef __cplusplus
}
#endif

/* Extension hook for downstream projects that want to have non-standard
   extensions to standard headers.
*/
#ifdef _PDCLIB_EXTEND_STDLIB_H

// SPDX-License-Identifier: MIT

// SPDX-FileCopyrightText: 2019-2021 Stefan Schmidt
// SPDX-FileCopyrightText: 2020 Jannik Vogel

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _CRT_RAND_S
int rand_s (unsigned int *randomValue);
#endif

// Win32 extension for reversing byte order
unsigned short _byteswap_ushort (unsigned short val);
unsigned long _byteswap_ulong (unsigned long val);
unsigned __int64 _byteswap_uint64 (unsigned __int64 val);

typedef void (__cdecl *_purecall_handler)(void);

_purecall_handler __cdecl _get_purecall_handler (void);
_purecall_handler __cdecl _set_purecall_handler (_purecall_handler function);

// Win32 extension providing the highest valid errno number
// https://docs.microsoft.com/en-us/cpp/c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr?view=vs-2019
#define _sys_nerr _PDCLIB_ERRNO_MAX

// Necessary stub for libc++

// -*- C++ -*-
//===--------------------------- wchar.h ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//


#if 0 /* evaluated by -frewrite-includes */


#if 0 /* evaluated by -frewrite-includes */

#endif




#elif 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_WCHAR_H





#if 0 /* evaluated by -frewrite-includes */

#endif

#ifdef __cplusplus
#define __CORRECT_ISO_CPP_WCHAR_H_PROTO
#endif



// Determine whether we have const-correct overloads for wcschr and friends.

#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS 1

#elif 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS 1
#  endif

#elif 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS 1
#  endif
#endif


#if 0 /* evaluated by -frewrite-includes */
extern "C++" {
inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcschr(const wchar_t* __s, wchar_t __c) {return (wchar_t*)wcschr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcschr(const wchar_t* __s, wchar_t __c) {return __libcpp_wcschr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcschr(      wchar_t* __s, wchar_t __c) {return __libcpp_wcschr(__s, __c);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcspbrk(const wchar_t* __s1, const wchar_t* __s2) {return (wchar_t*)wcspbrk(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcspbrk(const wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcspbrk(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcspbrk(      wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcspbrk(__s1, __s2);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcsrchr(const wchar_t* __s, wchar_t __c) {return (wchar_t*)wcsrchr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcsrchr(const wchar_t* __s, wchar_t __c) {return __libcpp_wcsrchr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcsrchr(      wchar_t* __s, wchar_t __c) {return __libcpp_wcsrchr(__s, __c);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcsstr(const wchar_t* __s1, const wchar_t* __s2) {return (wchar_t*)wcsstr(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcsstr(const wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcsstr(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcsstr(      wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcsstr(__s1, __s2);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wmemchr(const wchar_t* __s, wchar_t __c, size_t __n) {return (wchar_t*)wmemchr(__s, __c, __n);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wmemchr(const wchar_t* __s, wchar_t __c, size_t __n) {return __libcpp_wmemchr(__s, __c, __n);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wmemchr(      wchar_t* __s, wchar_t __c, size_t __n) {return __libcpp_wmemchr(__s, __c, __n);}
}
#endif


#if 0 /* evaluated by -frewrite-includes */
extern "C" {
size_t mbsnrtowcs(wchar_t *__restrict dst, const char **__restrict src,
                  size_t nmc, size_t len, mbstate_t *__restrict ps);
size_t wcsnrtombs(char *__restrict dst, const wchar_t **__restrict src,
                  size_t nwc, size_t len, mbstate_t *__restrict ps);
}  // extern "C++"
#endif  // __cplusplus && _LIBCPP_MSVCRT

#endif  // _LIBCPP_WCHAR_H
int mbtowc (wchar_t *pwc, const char *string, size_t n);

// Defined as on ReactOS - may need further adjustment if we decide to do locales properly
#define MB_CUR_MAX 2

// Microsoft extension (evaluation of arguments twice is intended)
#define __min(a,b) (((a) < (b)) ? (a) : (b))
#define __max(a,b) (((a) > (b)) ? (a) : (b))

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus

#if 0 /* evaluated by -frewrite-includes */
#define _NXDK_NOEXCEPT throw()
#else
#define _NXDK_NOEXCEPT noexcept
#endif

// libc++ expects MSVCRT to provide these overloads

inline static long abs (long __x) _NXDK_NOEXCEPT
{
    return labs(__x);
}

inline static long long abs (long long __x) _NXDK_NOEXCEPT
{
    return llabs(__x);
}

inline static ldiv_t div (long __x, long __y) _NXDK_NOEXCEPT
{
    return ldiv(__x, __y);
}

inline static lldiv_t div (long long __x, long long __y) _NXDK_NOEXCEPT
{
    return lldiv(__x, __y);
}

#undef _NXDK_NOEXCEPT

#endif

static void *_aligned_malloc (size_t size, size_t alignment)
{
    return aligned_alloc(alignment, size);
}

static void _aligned_free (void *memblock)
{
    free(memblock);
}
#endif

#endif

#ifdef __cplusplus

// -*- C++ -*-
//===---------------------------- math.h ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_MATH_H
#define _LIBCPP_MATH_H




#if 1 /* evaluated by -frewrite-includes */

#endif

#define _LIBCPP_STDLIB_INCLUDE_NEXT

// -*- C++ -*-
//===--------------------------- stdlib.h ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//


#if 1 /* evaluated by -frewrite-includes */


#if 1 /* evaluated by -frewrite-includes */

#endif


#if 1 /* evaluated by -frewrite-includes */
#undef _LIBCPP_STDLIB_INCLUDE_NEXT
#endif




#elif 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_STDLIB_H

/*
    stdlib.h synopsis

Macros:

    EXIT_FAILURE
    EXIT_SUCCESS
    MB_CUR_MAX
    NULL
    RAND_MAX

Types:

    size_t
    div_t
    ldiv_t
    lldiv_t                                                               // C99

double    atof (const char* nptr);
int       atoi (const char* nptr);
long      atol (const char* nptr);
long long atoll(const char* nptr);                                        // C99
double             strtod  (const char* restrict nptr, char** restrict endptr);
float              strtof  (const char* restrict nptr, char** restrict endptr); // C99
long double        strtold (const char* restrict nptr, char** restrict endptr); // C99
long               strtol  (const char* restrict nptr, char** restrict endptr, int base);
long long          strtoll (const char* restrict nptr, char** restrict endptr, int base); // C99
unsigned long      strtoul (const char* restrict nptr, char** restrict endptr, int base);
unsigned long long strtoull(const char* restrict nptr, char** restrict endptr, int base); // C99
int rand(void);
void srand(unsigned int seed);
void* calloc(size_t nmemb, size_t size);
void free(void* ptr);
void* malloc(size_t size);
void* realloc(void* ptr, size_t size);
void abort(void);
int atexit(void (*func)(void));
void exit(int status);
void _Exit(int status);
char* getenv(const char* name);
int system(const char* string);
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size,
              int (*compar)(const void *, const void *));
void qsort(void* base, size_t nmemb, size_t size,
           int (*compar)(const void *, const void *));
int         abs(      int j);
long        abs(     long j);
long long   abs(long long j);                                             // C++0X
long       labs(     long j);
long long llabs(long long j);                                             // C99
div_t     div(      int numer,       int denom);
ldiv_t    div(     long numer,      long denom);
lldiv_t   div(long long numer, long long denom);                          // C++0X
ldiv_t   ldiv(     long numer,      long denom);
lldiv_t lldiv(long long numer, long long denom);                          // C99
int mblen(const char* s, size_t n);
int mbtowc(wchar_t* restrict pwc, const char* restrict s, size_t n);
int wctomb(char* s, wchar_t wchar);
size_t mbstowcs(wchar_t* restrict pwcs, const char* restrict s, size_t n);
size_t wcstombs(char* restrict s, const wchar_t* restrict pwcs, size_t n);
int at_quick_exit(void (*func)(void))                                     // C++11
void quick_exit(int status);                                              // C++11
void *aligned_alloc(size_t alignment, size_t size);                       // C11

*/




#if 0 /* evaluated by -frewrite-includes */

#endif



#ifdef __cplusplus

#endif  // __cplusplus

#endif  // _LIBCPP_STDLIB_H


#ifndef _PDCLIB_MATH_H
#define _PDCLIB_MATH_H _PDCLIB_MATH_H

#ifdef __cplusplus
extern "C" {
#endif

typedef float float_t;
typedef double double_t;

#define HUGE_VAL (__builtin_huge_val())
#define HUGE_VALF (__builtin_huge_valf())
#define HUGE_VALL (__builtin_huge_vall())

#define INFINITY (__builtin_inff())

#define NAN (__builtin_nanf(""))

// immitate ReactOS's trick of modeling these after FPU status word flags
#define FP_NAN 0x0100
#define FP_NORMAL 0x0400
#define FP_INFINITE (FP_NAN | FP_NORMAL)
#define FP_ZERO 0x4000
#define FP_SUBNORMAL (FP_NORMAL | FP_ZERO)

#define FP_FAST_FMAF 1
#define FP_FAST_FMA 1
#define FP_FAST_FMAL 1

#define FP_ILOGB0 // FIXME
#define FP_ILOGBNAN // FIXME

#define MATH_ERRNO 1
#define MATH_ERREXCEPT 2

#define math_errhandling // FIXME

#ifdef _USE_MATH_DEFINES
    // these are non-standard
    #define M_E 2.7182818284590452354
    #define M_LOG2E 1.4426950408889634074
    #define M_LOG10E 0.43429448190325182765
    #define M_LN2 0.69314718055994530942
    #define M_LN10 2.30258509299404568402
    #define M_PI 3.14159265358979323846
    #define M_PI_2 1.57079632679489661923
    #define M_PI_4 0.78539816339744830962
    #define M_1_PI 0.31830988618379067154
    #define M_2_PI 0.63661977236758134308
    #define M_2_SQRTPI 1.12837916709551257390
    #define M_SQRT2 1.41421356237309504880
    #define M_SQRT1_2 0.70710678118654752440
#endif


#ifndef __cplusplus
    #define fpclassify(x) (sizeof(x) == sizeof(float) ? __fpclassifyf(x) : sizeof(x) == sizeof(double) ? __fpclassify(x) : __fpclassifyl(x))
    #define isfinite(x) ((fpclassify(x) & FP_NAN) == 0)
    #define isinf(x) (fpclassify(x) == FP_INFINITE)
    #define isnan(x) (fpclassify(x) == FP_NAN)
    #define isnormal(x) (fpclassify(x) == FP_NORMAL)
    #define signbit(x) (sizeof(x) == sizeof(float) ? __signbitf(x) : sizeof(x) == sizeof(double) ? __signbit(x) : __signbitl(x))

    // 7.12.14
    #define isgreater(x, y) ((__fp_unordered_compare((x), (y)) & 0x4500) == 0)
    #define isgreaterequal(x, y) ((__fp_unordered_compare((x), (y)) & FP_INFINITE) == 0)
    #define isless(x, y) ((__fp_unordered_compare((y), (x)) & 0x4500) == 0)
    #define islessequal(x, y) ((__fp_unordered_compare((y), (x)) & FP_INFINITE) == 0)
    #define islessgreater(x, y) ((__fp_unordered_compare((x), (y)) & FP_SUBNORMAL) == 0)
    #define isunordered(x, y) ((__fp_unordered_compare((x), (y)) & 0x4500) == 0x4500)
#else

#endif

// 7.12.4
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

// 7.12.5
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

// 7.12.6
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

// 7.12.7
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

// 7.12.8
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

// 7.12.9
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

// 7.12.10
double fmod(double x, double y);
float fmodf(float x, float y);
long double fmodl(long double x, long double y);

double remainder(double x, double y);
float remainderf(float x, float y);
long double remainderl(long double x, long double y);

double remquo(double x, double y, int *quo);
float remquof(float x, float y, int *quo);
long double remquol(long double x, long double y, int *quo);

// 7.12.11
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

// 7.12.12
double fdim(double x, double y);
float fdimf(float x, float y);
long double fdiml(long double x, long double y);

double fmax(double x, double y);
float fmaxf(float x, float y);
long double fmaxl(long double x, long double y);

double fmin(double x, double y);
float fminf(float x, float y);
long double fminl(long double x, long double y);

// 7.12.13
double fma(double x, double y, double z);
float fmaf(float x, float y, float z);
long double fmal(long double x, long double y, long double z);

#ifdef __cplusplus
}
#endif

#endif

#ifdef __cplusplus

// We support including .h headers inside 'extern "C"' contexts, so switch
// back to C++ linkage before including these C++ headers.
extern "C++" {



// -*- C++ -*-
//===---------------------------- limits ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_LIMITS
#define _LIBCPP_LIMITS





#if 0 /* evaluated by -frewrite-includes */

#endif // _LIBCPP_MSVCRT


#if 0 /* evaluated by -frewrite-includes */

#endif // __IBMCPP__


#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_PUSH_MACROS

// -*- C++ -*-
//===------------------------ __undef_macros ------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//


#ifdef min

#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
_LIBCPP_WARNING("macro min is incompatible with C++.  Try #define NOMINMAX "
                "before any Windows header. #undefing min")
#else
#warning: macro min is incompatible with C++.  #undefing min
#endif
#endif
#undef min
#endif

#ifdef max

#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
_LIBCPP_WARNING("macro max is incompatible with C++.  Try #define NOMINMAX "
                "before any Windows header. #undefing max")
#else
#warning: macro max is incompatible with C++.  #undefing max
#endif
#endif
#undef max
#endif



_LIBCPP_BEGIN_NAMESPACE_STD

enum float_round_style
{
    round_indeterminate       = -1,
    round_toward_zero         =  0,
    round_to_nearest          =  1,
    round_toward_infinity     =  2,
    round_toward_neg_infinity =  3
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

    static _LIBCPP_CONSTEXPR const  bool is_specialized = false;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type min() _NOEXCEPT {return type();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type max() _NOEXCEPT {return type();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type lowest() _NOEXCEPT {return type();}

    static _LIBCPP_CONSTEXPR const int  digits = 0;
    static _LIBCPP_CONSTEXPR const int  digits10 = 0;
    static _LIBCPP_CONSTEXPR const int  max_digits10 = 0;
    static _LIBCPP_CONSTEXPR const bool is_signed = false;
    static _LIBCPP_CONSTEXPR const bool is_integer = false;
    static _LIBCPP_CONSTEXPR const bool is_exact = false;
    static _LIBCPP_CONSTEXPR const int  radix = 0;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type epsilon() _NOEXCEPT {return type();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type round_error() _NOEXCEPT {return type();}

    static _LIBCPP_CONSTEXPR const int  min_exponent = 0;
    static _LIBCPP_CONSTEXPR const int  min_exponent10 = 0;
    static _LIBCPP_CONSTEXPR const int  max_exponent = 0;
    static _LIBCPP_CONSTEXPR const int  max_exponent10 = 0;

    static _LIBCPP_CONSTEXPR const bool has_infinity = false;
    static _LIBCPP_CONSTEXPR const bool has_quiet_NaN = false;
    static _LIBCPP_CONSTEXPR const bool has_signaling_NaN = false;
    static _LIBCPP_CONSTEXPR const float_denorm_style has_denorm = denorm_absent;
    static _LIBCPP_CONSTEXPR const bool has_denorm_loss = false;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type infinity() _NOEXCEPT {return type();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type quiet_NaN() _NOEXCEPT {return type();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type signaling_NaN() _NOEXCEPT {return type();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type denorm_min() _NOEXCEPT {return type();}

    static _LIBCPP_CONSTEXPR const bool is_iec559 = false;
    static _LIBCPP_CONSTEXPR const bool is_bounded = false;
    static _LIBCPP_CONSTEXPR const bool is_modulo = false;

    static _LIBCPP_CONSTEXPR const bool traps = false;
    static _LIBCPP_CONSTEXPR const bool tinyness_before = false;
    static _LIBCPP_CONSTEXPR const float_round_style round_style = round_toward_zero;
};

template <class _Tp, int __digits, bool _IsSigned>
struct __libcpp_compute_min
{
    static _LIBCPP_CONSTEXPR const _Tp value = _Tp(_Tp(1) << __digits);
};

template <class _Tp, int __digits>
struct __libcpp_compute_min<_Tp, __digits, false>
{
    static _LIBCPP_CONSTEXPR const _Tp value = _Tp(0);
};

template <class _Tp>
class __libcpp_numeric_limits<_Tp, true>
{
protected:
    typedef _Tp type;

    static _LIBCPP_CONSTEXPR const bool is_specialized = true;

    static _LIBCPP_CONSTEXPR const bool is_signed = type(-1) < type(0);
    static _LIBCPP_CONSTEXPR const int  digits = static_cast<int>(sizeof(type) * __CHAR_BIT__ - is_signed);
    static _LIBCPP_CONSTEXPR const int  digits10 = digits * 3 / 10;
    static _LIBCPP_CONSTEXPR const int  max_digits10 = 0;
    static _LIBCPP_CONSTEXPR const type __min = __libcpp_compute_min<type, digits, is_signed>::value;
    static _LIBCPP_CONSTEXPR const type __max = is_signed ? type(type(~0) ^ __min) : type(~0);
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type min() _NOEXCEPT {return __min;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type max() _NOEXCEPT {return __max;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type lowest() _NOEXCEPT {return min();}

    static _LIBCPP_CONSTEXPR const bool is_integer = true;
    static _LIBCPP_CONSTEXPR const bool is_exact = true;
    static _LIBCPP_CONSTEXPR const int  radix = 2;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type epsilon() _NOEXCEPT {return type(0);}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type round_error() _NOEXCEPT {return type(0);}

    static _LIBCPP_CONSTEXPR const int  min_exponent = 0;
    static _LIBCPP_CONSTEXPR const int  min_exponent10 = 0;
    static _LIBCPP_CONSTEXPR const int  max_exponent = 0;
    static _LIBCPP_CONSTEXPR const int  max_exponent10 = 0;

    static _LIBCPP_CONSTEXPR const bool has_infinity = false;
    static _LIBCPP_CONSTEXPR const bool has_quiet_NaN = false;
    static _LIBCPP_CONSTEXPR const bool has_signaling_NaN = false;
    static _LIBCPP_CONSTEXPR const float_denorm_style has_denorm = denorm_absent;
    static _LIBCPP_CONSTEXPR const bool has_denorm_loss = false;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type infinity() _NOEXCEPT {return type(0);}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type quiet_NaN() _NOEXCEPT {return type(0);}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type signaling_NaN() _NOEXCEPT {return type(0);}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type denorm_min() _NOEXCEPT {return type(0);}

    static _LIBCPP_CONSTEXPR const bool is_iec559 = false;
    static _LIBCPP_CONSTEXPR const bool is_bounded = true;
    static _LIBCPP_CONSTEXPR const bool is_modulo = !_VSTD::is_signed<_Tp>::value;


#if 1 /* evaluated by -frewrite-includes */
    static _LIBCPP_CONSTEXPR const bool traps = true;
#else
    static _LIBCPP_CONSTEXPR const bool traps = false;
#endif
    static _LIBCPP_CONSTEXPR const bool tinyness_before = false;
    static _LIBCPP_CONSTEXPR const float_round_style round_style = round_toward_zero;
};

template <>
class __libcpp_numeric_limits<bool, true>
{
protected:
    typedef bool type;

    static _LIBCPP_CONSTEXPR const bool is_specialized = true;

    static _LIBCPP_CONSTEXPR const bool is_signed = false;
    static _LIBCPP_CONSTEXPR const int  digits = 1;
    static _LIBCPP_CONSTEXPR const int  digits10 = 0;
    static _LIBCPP_CONSTEXPR const int  max_digits10 = 0;
    static _LIBCPP_CONSTEXPR const type __min = false;
    static _LIBCPP_CONSTEXPR const type __max = true;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type min() _NOEXCEPT {return __min;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type max() _NOEXCEPT {return __max;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type lowest() _NOEXCEPT {return min();}

    static _LIBCPP_CONSTEXPR const bool is_integer = true;
    static _LIBCPP_CONSTEXPR const bool is_exact = true;
    static _LIBCPP_CONSTEXPR const int  radix = 2;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type epsilon() _NOEXCEPT {return type(0);}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type round_error() _NOEXCEPT {return type(0);}

    static _LIBCPP_CONSTEXPR const int  min_exponent = 0;
    static _LIBCPP_CONSTEXPR const int  min_exponent10 = 0;
    static _LIBCPP_CONSTEXPR const int  max_exponent = 0;
    static _LIBCPP_CONSTEXPR const int  max_exponent10 = 0;

    static _LIBCPP_CONSTEXPR const bool has_infinity = false;
    static _LIBCPP_CONSTEXPR const bool has_quiet_NaN = false;
    static _LIBCPP_CONSTEXPR const bool has_signaling_NaN = false;
    static _LIBCPP_CONSTEXPR const float_denorm_style has_denorm = denorm_absent;
    static _LIBCPP_CONSTEXPR const bool has_denorm_loss = false;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type infinity() _NOEXCEPT {return type(0);}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type quiet_NaN() _NOEXCEPT {return type(0);}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type signaling_NaN() _NOEXCEPT {return type(0);}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type denorm_min() _NOEXCEPT {return type(0);}

    static _LIBCPP_CONSTEXPR const bool is_iec559 = false;
    static _LIBCPP_CONSTEXPR const bool is_bounded = true;
    static _LIBCPP_CONSTEXPR const bool is_modulo = false;

    static _LIBCPP_CONSTEXPR const bool traps = false;
    static _LIBCPP_CONSTEXPR const bool tinyness_before = false;
    static _LIBCPP_CONSTEXPR const float_round_style round_style = round_toward_zero;
};

template <>
class __libcpp_numeric_limits<float, true>
{
protected:
    typedef float type;

    static _LIBCPP_CONSTEXPR const bool is_specialized = true;

    static _LIBCPP_CONSTEXPR const bool is_signed = true;
    static _LIBCPP_CONSTEXPR const int  digits = __FLT_MANT_DIG__;
    static _LIBCPP_CONSTEXPR const int  digits10 = __FLT_DIG__;
    static _LIBCPP_CONSTEXPR const int  max_digits10 = 2+(digits * 30103l)/100000l;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type min() _NOEXCEPT {return __FLT_MIN__;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type max() _NOEXCEPT {return __FLT_MAX__;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type lowest() _NOEXCEPT {return -max();}

    static _LIBCPP_CONSTEXPR const bool is_integer = false;
    static _LIBCPP_CONSTEXPR const bool is_exact = false;
    static _LIBCPP_CONSTEXPR const int  radix = __FLT_RADIX__;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type epsilon() _NOEXCEPT {return __FLT_EPSILON__;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type round_error() _NOEXCEPT {return 0.5F;}

    static _LIBCPP_CONSTEXPR const int  min_exponent = __FLT_MIN_EXP__;
    static _LIBCPP_CONSTEXPR const int  min_exponent10 = __FLT_MIN_10_EXP__;
    static _LIBCPP_CONSTEXPR const int  max_exponent = __FLT_MAX_EXP__;
    static _LIBCPP_CONSTEXPR const int  max_exponent10 = __FLT_MAX_10_EXP__;

    static _LIBCPP_CONSTEXPR const bool has_infinity = true;
    static _LIBCPP_CONSTEXPR const bool has_quiet_NaN = true;
    static _LIBCPP_CONSTEXPR const bool has_signaling_NaN = true;
    static _LIBCPP_CONSTEXPR const float_denorm_style has_denorm = denorm_present;
    static _LIBCPP_CONSTEXPR const bool has_denorm_loss = false;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type infinity() _NOEXCEPT {return __builtin_huge_valf();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type quiet_NaN() _NOEXCEPT {return __builtin_nanf("");}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type signaling_NaN() _NOEXCEPT {return __builtin_nansf("");}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type denorm_min() _NOEXCEPT {return __FLT_DENORM_MIN__;}

    static _LIBCPP_CONSTEXPR const bool is_iec559 = true;
    static _LIBCPP_CONSTEXPR const bool is_bounded = true;
    static _LIBCPP_CONSTEXPR const bool is_modulo = false;

    static _LIBCPP_CONSTEXPR const bool traps = false;
    static _LIBCPP_CONSTEXPR const bool tinyness_before = false;
    static _LIBCPP_CONSTEXPR const float_round_style round_style = round_to_nearest;
};

template <>
class __libcpp_numeric_limits<double, true>
{
protected:
    typedef double type;

    static _LIBCPP_CONSTEXPR const bool is_specialized = true;

    static _LIBCPP_CONSTEXPR const bool is_signed = true;
    static _LIBCPP_CONSTEXPR const int  digits = __DBL_MANT_DIG__;
    static _LIBCPP_CONSTEXPR const int  digits10 = __DBL_DIG__;
    static _LIBCPP_CONSTEXPR const int  max_digits10 = 2+(digits * 30103l)/100000l;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type min() _NOEXCEPT {return __DBL_MIN__;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type max() _NOEXCEPT {return __DBL_MAX__;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type lowest() _NOEXCEPT {return -max();}

    static _LIBCPP_CONSTEXPR const bool is_integer = false;
    static _LIBCPP_CONSTEXPR const bool is_exact = false;
    static _LIBCPP_CONSTEXPR const int  radix = __FLT_RADIX__;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type epsilon() _NOEXCEPT {return __DBL_EPSILON__;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type round_error() _NOEXCEPT {return 0.5;}

    static _LIBCPP_CONSTEXPR const int  min_exponent = __DBL_MIN_EXP__;
    static _LIBCPP_CONSTEXPR const int  min_exponent10 = __DBL_MIN_10_EXP__;
    static _LIBCPP_CONSTEXPR const int  max_exponent = __DBL_MAX_EXP__;
    static _LIBCPP_CONSTEXPR const int  max_exponent10 = __DBL_MAX_10_EXP__;

    static _LIBCPP_CONSTEXPR const bool has_infinity = true;
    static _LIBCPP_CONSTEXPR const bool has_quiet_NaN = true;
    static _LIBCPP_CONSTEXPR const bool has_signaling_NaN = true;
    static _LIBCPP_CONSTEXPR const float_denorm_style has_denorm = denorm_present;
    static _LIBCPP_CONSTEXPR const bool has_denorm_loss = false;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type infinity() _NOEXCEPT {return __builtin_huge_val();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type quiet_NaN() _NOEXCEPT {return __builtin_nan("");}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type signaling_NaN() _NOEXCEPT {return __builtin_nans("");}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type denorm_min() _NOEXCEPT {return __DBL_DENORM_MIN__;}

    static _LIBCPP_CONSTEXPR const bool is_iec559 = true;
    static _LIBCPP_CONSTEXPR const bool is_bounded = true;
    static _LIBCPP_CONSTEXPR const bool is_modulo = false;

    static _LIBCPP_CONSTEXPR const bool traps = false;
    static _LIBCPP_CONSTEXPR const bool tinyness_before = false;
    static _LIBCPP_CONSTEXPR const float_round_style round_style = round_to_nearest;
};

template <>
class __libcpp_numeric_limits<long double, true>
{
protected:
    typedef long double type;

    static _LIBCPP_CONSTEXPR const bool is_specialized = true;

    static _LIBCPP_CONSTEXPR const bool is_signed = true;
    static _LIBCPP_CONSTEXPR const int  digits = __LDBL_MANT_DIG__;
    static _LIBCPP_CONSTEXPR const int  digits10 = __LDBL_DIG__;
    static _LIBCPP_CONSTEXPR const int  max_digits10 = 2+(digits * 30103l)/100000l;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type min() _NOEXCEPT {return __LDBL_MIN__;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type max() _NOEXCEPT {return __LDBL_MAX__;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type lowest() _NOEXCEPT {return -max();}

    static _LIBCPP_CONSTEXPR const bool is_integer = false;
    static _LIBCPP_CONSTEXPR const bool is_exact = false;
    static _LIBCPP_CONSTEXPR const int  radix = __FLT_RADIX__;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type epsilon() _NOEXCEPT {return __LDBL_EPSILON__;}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type round_error() _NOEXCEPT {return 0.5L;}

    static _LIBCPP_CONSTEXPR const int  min_exponent = __LDBL_MIN_EXP__;
    static _LIBCPP_CONSTEXPR const int  min_exponent10 = __LDBL_MIN_10_EXP__;
    static _LIBCPP_CONSTEXPR const int  max_exponent = __LDBL_MAX_EXP__;
    static _LIBCPP_CONSTEXPR const int  max_exponent10 = __LDBL_MAX_10_EXP__;

    static _LIBCPP_CONSTEXPR const bool has_infinity = true;
    static _LIBCPP_CONSTEXPR const bool has_quiet_NaN = true;
    static _LIBCPP_CONSTEXPR const bool has_signaling_NaN = true;
    static _LIBCPP_CONSTEXPR const float_denorm_style has_denorm = denorm_present;
    static _LIBCPP_CONSTEXPR const bool has_denorm_loss = false;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type infinity() _NOEXCEPT {return __builtin_huge_vall();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type quiet_NaN() _NOEXCEPT {return __builtin_nanl("");}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type signaling_NaN() _NOEXCEPT {return __builtin_nansl("");}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type denorm_min() _NOEXCEPT {return __LDBL_DENORM_MIN__;}


#if 0 /* evaluated by -frewrite-includes */
    static _LIBCPP_CONSTEXPR const bool is_iec559 = false;
#else
    static _LIBCPP_CONSTEXPR const bool is_iec559 = true;
#endif
    static _LIBCPP_CONSTEXPR const bool is_bounded = true;
    static _LIBCPP_CONSTEXPR const bool is_modulo = false;

    static _LIBCPP_CONSTEXPR const bool traps = false;
    static _LIBCPP_CONSTEXPR const bool tinyness_before = false;
    static _LIBCPP_CONSTEXPR const float_round_style round_style = round_to_nearest;
};

template <class _Tp>
class _LIBCPP_TEMPLATE_VIS numeric_limits
    : private __libcpp_numeric_limits<typename remove_cv<_Tp>::type>
{
    typedef __libcpp_numeric_limits<typename remove_cv<_Tp>::type> __base;
    typedef typename __base::type type;
public:
    static _LIBCPP_CONSTEXPR const bool is_specialized = __base::is_specialized;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type min() _NOEXCEPT {return __base::min();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type max() _NOEXCEPT {return __base::max();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type lowest() _NOEXCEPT {return __base::lowest();}

    static _LIBCPP_CONSTEXPR const int  digits = __base::digits;
    static _LIBCPP_CONSTEXPR const int  digits10 = __base::digits10;
    static _LIBCPP_CONSTEXPR const int  max_digits10 = __base::max_digits10;
    static _LIBCPP_CONSTEXPR const bool is_signed = __base::is_signed;
    static _LIBCPP_CONSTEXPR const bool is_integer = __base::is_integer;
    static _LIBCPP_CONSTEXPR const bool is_exact = __base::is_exact;
    static _LIBCPP_CONSTEXPR const int  radix = __base::radix;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type epsilon() _NOEXCEPT {return __base::epsilon();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type round_error() _NOEXCEPT {return __base::round_error();}

    static _LIBCPP_CONSTEXPR const int  min_exponent = __base::min_exponent;
    static _LIBCPP_CONSTEXPR const int  min_exponent10 = __base::min_exponent10;
    static _LIBCPP_CONSTEXPR const int  max_exponent = __base::max_exponent;
    static _LIBCPP_CONSTEXPR const int  max_exponent10 = __base::max_exponent10;

    static _LIBCPP_CONSTEXPR const bool has_infinity = __base::has_infinity;
    static _LIBCPP_CONSTEXPR const bool has_quiet_NaN = __base::has_quiet_NaN;
    static _LIBCPP_CONSTEXPR const bool has_signaling_NaN = __base::has_signaling_NaN;
    static _LIBCPP_CONSTEXPR const float_denorm_style has_denorm = __base::has_denorm;
    static _LIBCPP_CONSTEXPR const bool has_denorm_loss = __base::has_denorm_loss;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type infinity() _NOEXCEPT {return __base::infinity();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type quiet_NaN() _NOEXCEPT {return __base::quiet_NaN();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type signaling_NaN() _NOEXCEPT {return __base::signaling_NaN();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type denorm_min() _NOEXCEPT {return __base::denorm_min();}

    static _LIBCPP_CONSTEXPR const bool is_iec559 = __base::is_iec559;
    static _LIBCPP_CONSTEXPR const bool is_bounded = __base::is_bounded;
    static _LIBCPP_CONSTEXPR const bool is_modulo = __base::is_modulo;

    static _LIBCPP_CONSTEXPR const bool traps = __base::traps;
    static _LIBCPP_CONSTEXPR const bool tinyness_before = __base::tinyness_before;
    static _LIBCPP_CONSTEXPR const float_round_style round_style = __base::round_style;
};

template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::is_specialized;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<_Tp>::digits;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<_Tp>::digits10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<_Tp>::max_digits10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::is_signed;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::is_integer;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::is_exact;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<_Tp>::radix;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<_Tp>::min_exponent;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<_Tp>::min_exponent10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<_Tp>::max_exponent;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<_Tp>::max_exponent10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::has_infinity;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::has_quiet_NaN;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::has_signaling_NaN;
template <class _Tp>
    _LIBCPP_CONSTEXPR const float_denorm_style numeric_limits<_Tp>::has_denorm;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::has_denorm_loss;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::is_iec559;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::is_bounded;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::is_modulo;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::traps;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<_Tp>::tinyness_before;
template <class _Tp>
    _LIBCPP_CONSTEXPR const float_round_style numeric_limits<_Tp>::round_style;

template <class _Tp>
class _LIBCPP_TEMPLATE_VIS numeric_limits<const _Tp>
    : private numeric_limits<_Tp>
{
    typedef numeric_limits<_Tp> __base;
    typedef _Tp type;
public:
    static _LIBCPP_CONSTEXPR const bool is_specialized = __base::is_specialized;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type min() _NOEXCEPT {return __base::min();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type max() _NOEXCEPT {return __base::max();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type lowest() _NOEXCEPT {return __base::lowest();}

    static _LIBCPP_CONSTEXPR const int  digits = __base::digits;
    static _LIBCPP_CONSTEXPR const int  digits10 = __base::digits10;
    static _LIBCPP_CONSTEXPR const int  max_digits10 = __base::max_digits10;
    static _LIBCPP_CONSTEXPR const bool is_signed = __base::is_signed;
    static _LIBCPP_CONSTEXPR const bool is_integer = __base::is_integer;
    static _LIBCPP_CONSTEXPR const bool is_exact = __base::is_exact;
    static _LIBCPP_CONSTEXPR const int  radix = __base::radix;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type epsilon() _NOEXCEPT {return __base::epsilon();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type round_error() _NOEXCEPT {return __base::round_error();}

    static _LIBCPP_CONSTEXPR const int  min_exponent = __base::min_exponent;
    static _LIBCPP_CONSTEXPR const int  min_exponent10 = __base::min_exponent10;
    static _LIBCPP_CONSTEXPR const int  max_exponent = __base::max_exponent;
    static _LIBCPP_CONSTEXPR const int  max_exponent10 = __base::max_exponent10;

    static _LIBCPP_CONSTEXPR const bool has_infinity = __base::has_infinity;
    static _LIBCPP_CONSTEXPR const bool has_quiet_NaN = __base::has_quiet_NaN;
    static _LIBCPP_CONSTEXPR const bool has_signaling_NaN = __base::has_signaling_NaN;
    static _LIBCPP_CONSTEXPR const float_denorm_style has_denorm = __base::has_denorm;
    static _LIBCPP_CONSTEXPR const bool has_denorm_loss = __base::has_denorm_loss;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type infinity() _NOEXCEPT {return __base::infinity();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type quiet_NaN() _NOEXCEPT {return __base::quiet_NaN();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type signaling_NaN() _NOEXCEPT {return __base::signaling_NaN();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type denorm_min() _NOEXCEPT {return __base::denorm_min();}

    static _LIBCPP_CONSTEXPR const bool is_iec559 = __base::is_iec559;
    static _LIBCPP_CONSTEXPR const bool is_bounded = __base::is_bounded;
    static _LIBCPP_CONSTEXPR const bool is_modulo = __base::is_modulo;

    static _LIBCPP_CONSTEXPR const bool traps = __base::traps;
    static _LIBCPP_CONSTEXPR const bool tinyness_before = __base::tinyness_before;
    static _LIBCPP_CONSTEXPR const float_round_style round_style = __base::round_style;
};

template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::is_specialized;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const _Tp>::digits;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const _Tp>::digits10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const _Tp>::max_digits10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::is_signed;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::is_integer;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::is_exact;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const _Tp>::radix;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const _Tp>::min_exponent;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const _Tp>::min_exponent10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const _Tp>::max_exponent;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const _Tp>::max_exponent10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::has_infinity;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::has_quiet_NaN;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::has_signaling_NaN;
template <class _Tp>
    _LIBCPP_CONSTEXPR const float_denorm_style numeric_limits<const _Tp>::has_denorm;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::has_denorm_loss;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::is_iec559;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::is_bounded;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::is_modulo;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::traps;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const _Tp>::tinyness_before;
template <class _Tp>
    _LIBCPP_CONSTEXPR const float_round_style numeric_limits<const _Tp>::round_style;

template <class _Tp>
class _LIBCPP_TEMPLATE_VIS numeric_limits<volatile _Tp>
    : private numeric_limits<_Tp>
{
    typedef numeric_limits<_Tp> __base;
    typedef _Tp type;
public:
    static _LIBCPP_CONSTEXPR const bool is_specialized = __base::is_specialized;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type min() _NOEXCEPT {return __base::min();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type max() _NOEXCEPT {return __base::max();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type lowest() _NOEXCEPT {return __base::lowest();}

    static _LIBCPP_CONSTEXPR const int  digits = __base::digits;
    static _LIBCPP_CONSTEXPR const int  digits10 = __base::digits10;
    static _LIBCPP_CONSTEXPR const int  max_digits10 = __base::max_digits10;
    static _LIBCPP_CONSTEXPR const bool is_signed = __base::is_signed;
    static _LIBCPP_CONSTEXPR const bool is_integer = __base::is_integer;
    static _LIBCPP_CONSTEXPR const bool is_exact = __base::is_exact;
    static _LIBCPP_CONSTEXPR const int  radix = __base::radix;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type epsilon() _NOEXCEPT {return __base::epsilon();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type round_error() _NOEXCEPT {return __base::round_error();}

    static _LIBCPP_CONSTEXPR const int  min_exponent = __base::min_exponent;
    static _LIBCPP_CONSTEXPR const int  min_exponent10 = __base::min_exponent10;
    static _LIBCPP_CONSTEXPR const int  max_exponent = __base::max_exponent;
    static _LIBCPP_CONSTEXPR const int  max_exponent10 = __base::max_exponent10;

    static _LIBCPP_CONSTEXPR const bool has_infinity = __base::has_infinity;
    static _LIBCPP_CONSTEXPR const bool has_quiet_NaN = __base::has_quiet_NaN;
    static _LIBCPP_CONSTEXPR const bool has_signaling_NaN = __base::has_signaling_NaN;
    static _LIBCPP_CONSTEXPR const float_denorm_style has_denorm = __base::has_denorm;
    static _LIBCPP_CONSTEXPR const bool has_denorm_loss = __base::has_denorm_loss;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type infinity() _NOEXCEPT {return __base::infinity();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type quiet_NaN() _NOEXCEPT {return __base::quiet_NaN();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type signaling_NaN() _NOEXCEPT {return __base::signaling_NaN();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type denorm_min() _NOEXCEPT {return __base::denorm_min();}

    static _LIBCPP_CONSTEXPR const bool is_iec559 = __base::is_iec559;
    static _LIBCPP_CONSTEXPR const bool is_bounded = __base::is_bounded;
    static _LIBCPP_CONSTEXPR const bool is_modulo = __base::is_modulo;

    static _LIBCPP_CONSTEXPR const bool traps = __base::traps;
    static _LIBCPP_CONSTEXPR const bool tinyness_before = __base::tinyness_before;
    static _LIBCPP_CONSTEXPR const float_round_style round_style = __base::round_style;
};

template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::is_specialized;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<volatile _Tp>::digits;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<volatile _Tp>::digits10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<volatile _Tp>::max_digits10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::is_signed;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::is_integer;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::is_exact;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<volatile _Tp>::radix;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<volatile _Tp>::min_exponent;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<volatile _Tp>::min_exponent10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<volatile _Tp>::max_exponent;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<volatile _Tp>::max_exponent10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::has_infinity;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::has_quiet_NaN;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::has_signaling_NaN;
template <class _Tp>
    _LIBCPP_CONSTEXPR const float_denorm_style numeric_limits<volatile _Tp>::has_denorm;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::has_denorm_loss;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::is_iec559;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::is_bounded;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::is_modulo;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::traps;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<volatile _Tp>::tinyness_before;
template <class _Tp>
    _LIBCPP_CONSTEXPR const float_round_style numeric_limits<volatile _Tp>::round_style;

template <class _Tp>
class _LIBCPP_TEMPLATE_VIS numeric_limits<const volatile _Tp>
    : private numeric_limits<_Tp>
{
    typedef numeric_limits<_Tp> __base;
    typedef _Tp type;
public:
    static _LIBCPP_CONSTEXPR const bool is_specialized = __base::is_specialized;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type min() _NOEXCEPT {return __base::min();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type max() _NOEXCEPT {return __base::max();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type lowest() _NOEXCEPT {return __base::lowest();}

    static _LIBCPP_CONSTEXPR const int  digits = __base::digits;
    static _LIBCPP_CONSTEXPR const int  digits10 = __base::digits10;
    static _LIBCPP_CONSTEXPR const int  max_digits10 = __base::max_digits10;
    static _LIBCPP_CONSTEXPR const bool is_signed = __base::is_signed;
    static _LIBCPP_CONSTEXPR const bool is_integer = __base::is_integer;
    static _LIBCPP_CONSTEXPR const bool is_exact = __base::is_exact;
    static _LIBCPP_CONSTEXPR const int  radix = __base::radix;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type epsilon() _NOEXCEPT {return __base::epsilon();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type round_error() _NOEXCEPT {return __base::round_error();}

    static _LIBCPP_CONSTEXPR const int  min_exponent = __base::min_exponent;
    static _LIBCPP_CONSTEXPR const int  min_exponent10 = __base::min_exponent10;
    static _LIBCPP_CONSTEXPR const int  max_exponent = __base::max_exponent;
    static _LIBCPP_CONSTEXPR const int  max_exponent10 = __base::max_exponent10;

    static _LIBCPP_CONSTEXPR const bool has_infinity = __base::has_infinity;
    static _LIBCPP_CONSTEXPR const bool has_quiet_NaN = __base::has_quiet_NaN;
    static _LIBCPP_CONSTEXPR const bool has_signaling_NaN = __base::has_signaling_NaN;
    static _LIBCPP_CONSTEXPR const float_denorm_style has_denorm = __base::has_denorm;
    static _LIBCPP_CONSTEXPR const bool has_denorm_loss = __base::has_denorm_loss;
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type infinity() _NOEXCEPT {return __base::infinity();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type quiet_NaN() _NOEXCEPT {return __base::quiet_NaN();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type signaling_NaN() _NOEXCEPT {return __base::signaling_NaN();}
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR type denorm_min() _NOEXCEPT {return __base::denorm_min();}

    static _LIBCPP_CONSTEXPR const bool is_iec559 = __base::is_iec559;
    static _LIBCPP_CONSTEXPR const bool is_bounded = __base::is_bounded;
    static _LIBCPP_CONSTEXPR const bool is_modulo = __base::is_modulo;

    static _LIBCPP_CONSTEXPR const bool traps = __base::traps;
    static _LIBCPP_CONSTEXPR const bool tinyness_before = __base::tinyness_before;
    static _LIBCPP_CONSTEXPR const float_round_style round_style = __base::round_style;
};

template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::is_specialized;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const volatile _Tp>::digits;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const volatile _Tp>::digits10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const volatile _Tp>::max_digits10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::is_signed;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::is_integer;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::is_exact;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const volatile _Tp>::radix;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const volatile _Tp>::min_exponent;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const volatile _Tp>::min_exponent10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const volatile _Tp>::max_exponent;
template <class _Tp>
    _LIBCPP_CONSTEXPR const int numeric_limits<const volatile _Tp>::max_exponent10;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::has_infinity;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::has_quiet_NaN;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::has_signaling_NaN;
template <class _Tp>
    _LIBCPP_CONSTEXPR const float_denorm_style numeric_limits<const volatile _Tp>::has_denorm;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::has_denorm_loss;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::is_iec559;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::is_bounded;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::is_modulo;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::traps;
template <class _Tp>
    _LIBCPP_CONSTEXPR const bool numeric_limits<const volatile _Tp>::tinyness_before;
template <class _Tp>
    _LIBCPP_CONSTEXPR const float_round_style numeric_limits<const volatile _Tp>::round_style;

_LIBCPP_END_NAMESPACE_STD

_LIBCPP_POP_MACROS

#endif  // _LIBCPP_LIMITS

// div

#undef div
#undef ldiv
#ifndef _LIBCPP_HAS_NO_LONG_LONG
#undef lldiv
#endif

// MSVCRT already has the correct prototype in <stdlib.h> if __cplusplus is defined

#if 0 /* evaluated by -frewrite-includes */
inline _LIBCPP_INLINE_VISIBILITY ldiv_t div(long __x, long __y) _NOEXCEPT {
  return ::ldiv(__x, __y);
}
#ifndef _LIBCPP_HAS_NO_LONG_LONG
inline _LIBCPP_INLINE_VISIBILITY lldiv_t div(long long __x,
                                             long long __y) _NOEXCEPT {
  return ::lldiv(__x, __y);
}
#endif // _LIBCPP_HAS_NO_LONG_LONG
#endif // _LIBCPP_MSVCRT / __sun__ / _AIX

} // extern "C++"

#endif // __cplusplus

#else // _LIBCPP_MATH_H

// This include lives outside the header guard in order to support an MSVC
// extension which allows users to do:
//
// #define _USE_MATH_DEFINES
// #include <math.h>
//
// and receive the definitions of mathematical constants, even if <math.h>
// has previously been included.

#if 0 /* evaluated by -frewrite-includes */

#endif

#endif  // _LIBCPP_MATH_H
#endif  // __cplusplus

#endif  // _LIBCPP_STDLIB_H


#if 1 /* evaluated by -frewrite-includes */

#endif

#ifdef __GNUC__
#define _LIBCPP_UNREACHABLE() __builtin_unreachable()
#else
#define _LIBCPP_UNREACHABLE() _VSTD::abort()
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

using ::size_t;
using ::div_t;
using ::ldiv_t;
#ifndef _LIBCPP_HAS_NO_LONG_LONG
using ::lldiv_t;
#endif // _LIBCPP_HAS_NO_LONG_LONG
using ::atof;
using ::atoi;
using ::atol;
#ifndef _LIBCPP_HAS_NO_LONG_LONG
using ::atoll;
#endif // _LIBCPP_HAS_NO_LONG_LONG
using ::strtod;
using ::strtof;
using ::strtold;
using ::strtol;
#ifndef _LIBCPP_HAS_NO_LONG_LONG
using ::strtoll;
#endif // _LIBCPP_HAS_NO_LONG_LONG
using ::strtoul;
#ifndef _LIBCPP_HAS_NO_LONG_LONG
using ::strtoull;
#endif // _LIBCPP_HAS_NO_LONG_LONG
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
#ifndef _LIBCPP_WINDOWS_STORE_APP
using ::getenv;
using ::system;
#endif
using ::bsearch;
using ::qsort;
using ::abs;
using ::labs;
#ifndef _LIBCPP_HAS_NO_LONG_LONG
using ::llabs;
#endif // _LIBCPP_HAS_NO_LONG_LONG
using ::div;
using ::ldiv;
#ifndef _LIBCPP_HAS_NO_LONG_LONG
using ::lldiv;
#endif // _LIBCPP_HAS_NO_LONG_LONG
#ifndef NXDK
using ::mblen;
using ::mbtowc;
using ::wctomb;
using ::mbstowcs;
using ::wcstombs;
#endif // NXDK

#if 1 /* evaluated by -frewrite-includes */
using ::at_quick_exit;
using ::quick_exit;
#endif

#if 0 /* evaluated by -frewrite-includes */
using ::aligned_alloc;
#endif

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_CSTDLIB

// -*- C++ -*-
//===---------------------------- cstdio ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_CSTDIO
#define _LIBCPP_CSTDIO



// -*- C++ -*-
//===---------------------------- stdio.h ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//


#if 0 /* evaluated by -frewrite-includes */


#if 0 /* evaluated by -frewrite-includes */

#endif




#elif 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_STDIO_H




#if 1 /* evaluated by -frewrite-includes */

#endif


/* Input/output <stdio.h>

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef _PDCLIB_STDIO_H
#define _PDCLIB_STDIO_H _PDCLIB_STDIO_H

#ifdef __cplusplus
extern "C" {
#endif


/* __STDC_WANT_LIB_EXT1__ redefinition guard

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef __STDC_WANT_LIB_EXT1__
  #ifdef __STDC_WANT_LIB_EXT1_PREVIOUS__


#if 0 /* evaluated by -frewrite-includes */
      #error __STDC_WANT_LIB_EXT1__ undefined when it was defined earlier.
    #endif
  #else
    #define __STDC_WANT_LIB_EXT1_PREVIOUS__ -1
  #endif
#else


#if 0 /* evaluated by -frewrite-includes */
    #error __STDC_WANT_LIB_EXT1__ defined but empty. Should be an integer value.
  #endif
  #ifdef __STDC_WANT_LIB_EXT1_PREVIOUS__


#if 0 /* evaluated by -frewrite-includes */
      #error __STDC_WANT_LIB_EXT1__ redefined from previous value.
    #endif
  #else


#if 0 /* evaluated by -frewrite-includes */
      #define __STDC_WANT_LIB_EXT1_PREVIOUS__ 0


#elif 0 /* evaluated by -frewrite-includes */
      #define __STDC_WANT_LIB_EXT1_PREVIOUS__ 1
    #else
      #error __STDC_WANT_LIB_EXT1__ set to value other than 0,1 -- undefined behavior
    #endif
  #endif
#endif


#ifndef _PDCLIB_SIZE_T_DEFINED
#define _PDCLIB_SIZE_T_DEFINED _PDCLIB_SIZE_T_DEFINED
typedef _PDCLIB_size_t size_t;
#endif

#ifndef _PDCLIB_NULL_DEFINED
#define _PDCLIB_NULL_DEFINED _PDCLIB_NULL_DEFINED
#define NULL _PDCLIB_NULL
#endif

/* See setvbuf(), third argument */
#define _IOFBF (1u<<0)
#define _IOLBF (1u<<1)
#define _IONBF (1u<<2)

/* The following are platform-dependant, and defined in _PDCLIB_config.h. */
typedef struct _PDCLIB_fpos_t fpos_t;
typedef struct _PDCLIB_file_t FILE;
#define EOF -1
#define BUFSIZ _PDCLIB_BUFSIZ
#define FOPEN_MAX _PDCLIB_FOPEN_MAX
#define FILENAME_MAX _PDCLIB_FILENAME_MAX
#define L_tmpnam _PDCLIB_L_tmpnam
#define TMP_MAX _PDCLIB_TMP_MAX

/* See fseek(), third argument */
#define SEEK_CUR _PDCLIB_SEEK_CUR
#define SEEK_END _PDCLIB_SEEK_END
#define SEEK_SET _PDCLIB_SEEK_SET

extern FILE * stdin;
extern FILE * stdout;
extern FILE * stderr;

_PDCLIB_PUBLIC int remove( const char * filename );

_PDCLIB_PUBLIC int rename( const char * oldpath, const char * newpath );

_PDCLIB_PUBLIC int fclose( FILE * stream );

_PDCLIB_PUBLIC int fflush( FILE * stream );

_PDCLIB_PUBLIC FILE * fopen( const char * _PDCLIB_restrict filename, const char * _PDCLIB_restrict mode );

_PDCLIB_PUBLIC FILE * freopen( const char * _PDCLIB_restrict filename, const char * _PDCLIB_restrict mode, FILE * _PDCLIB_restrict stream );

/* If buf is a NULL pointer, call setvbuf( stream, NULL, _IONBF, BUFSIZ ).
   If buf is not a NULL pointer, call setvbuf( stream, buf, _IOFBF, BUFSIZ ).
*/
_PDCLIB_PUBLIC void setbuf( FILE * _PDCLIB_restrict stream, char * _PDCLIB_restrict buf );

_PDCLIB_PUBLIC int setvbuf( FILE * _PDCLIB_restrict stream, char * _PDCLIB_restrict buf, int mode, size_t size );

_PDCLIB_PUBLIC int fprintf( FILE * _PDCLIB_restrict stream, const char * _PDCLIB_restrict format, ... );

/* Equivalent to fprintf( stdout, format, ... ). */
_PDCLIB_PUBLIC int printf( const char * _PDCLIB_restrict format, ... );

/* Equivalent to fscanf( stdin, format, ... ). */
_PDCLIB_PUBLIC int scanf( const char * _PDCLIB_restrict format, ... );

_PDCLIB_PUBLIC int snprintf( char * _PDCLIB_restrict s, size_t n, const char * _PDCLIB_restrict format, ... );

/* Equivalent to fprintf( stdout, format, ... ), except that the result is
   written into the buffer pointed to by s, instead of stdout.
*/
_PDCLIB_PUBLIC int sprintf( char * _PDCLIB_restrict s, const char * _PDCLIB_restrict format, ... );

/* Equivalent to fscanf( stdin, format, ... ), except that the input is read
   from the buffer pointed to by s, instead of stdin.
*/
_PDCLIB_PUBLIC int sscanf( const char * _PDCLIB_restrict s, const char * _PDCLIB_restrict format, ... );

/* Equivalent to fprintf( stream, format, ... ), except that the argument stack
   is passed as va_list parameter. Note that va_list is not declared by
   <stdio.h>.
*/
_PDCLIB_PUBLIC int vfprintf( FILE * _PDCLIB_restrict stream, const char * _PDCLIB_restrict format, _PDCLIB_va_list arg );

_PDCLIB_PUBLIC int vfscanf( FILE * _PDCLIB_restrict stream, const char * _PDCLIB_restrict format, _PDCLIB_va_list arg );

_PDCLIB_PUBLIC int vprintf( const char * _PDCLIB_restrict format, _PDCLIB_va_list arg );

_PDCLIB_PUBLIC int vscanf( const char * _PDCLIB_restrict format, _PDCLIB_va_list arg );

_PDCLIB_PUBLIC int vsnprintf( char * _PDCLIB_restrict s, size_t n, const char * _PDCLIB_restrict format, _PDCLIB_va_list arg );

_PDCLIB_PUBLIC int vsprintf( char * _PDCLIB_restrict s, const char * _PDCLIB_restrict format, _PDCLIB_va_list arg );

/* Error-handling functions */

/* Clear the end-of-file and error indicators for the given stream. */
_PDCLIB_PUBLIC void clearerr( FILE * stream );

/* Return zero if the end-of-file indicator for the given stream is not set,
   nonzero otherwise.
*/
_PDCLIB_PUBLIC int feof( FILE * stream );

/* Return zero if the error indicator for the given stream is not set, nonzero
   otherwise.
*/
_PDCLIB_PUBLIC int ferror( FILE * stream );

/* If s is neither a NULL pointer nor an empty string, print the string to
   stderr (with appended colon (':') and a space) first. In any case, print an
   error message depending on the current value of errno (being the same as if
   strerror( errno ) had been called).
*/
_PDCLIB_PUBLIC void perror( const char * s );

/* Annex K -- Bounds-checking interfaces */




/* Extension hook for downstream projects that want to have non-standard
   extensions to standard headers.
*/
#ifdef _PDCLIB_EXTEND_STDIO_H

// SPDX-License-Identifier: MIT

// SPDX-FileCopyrightText: 2019 Stefan Schmidt

// Define required MS-specific aliases
#define _vsnprintf vsnprintf
#define _snprintf snprintf
#endif

#ifdef __cplusplus
}
#endif

#endif

#ifdef __cplusplus

#undef getc
#undef putc
#undef clearerr
#undef feof
#undef ferror

#endif

#endif  // _LIBCPP_STDIO_H


_LIBCPP_BEGIN_NAMESPACE_STD

using ::FILE;
using ::fpos_t;
using ::size_t;

using ::fclose;
using ::fflush;
using ::setbuf;
using ::setvbuf;
using ::fprintf;
using ::snprintf;
using ::sprintf;
using ::sscanf;
using ::vfprintf;
using ::vfscanf;
using ::vsnprintf;
using ::vsprintf;
using ::clearerr;
using ::feof;
using ::ferror;
using ::perror;

#ifndef _LIBCPP_HAS_NO_GLOBAL_FILESYSTEM_NAMESPACE
using ::fopen;
using ::freopen;
using ::remove;
using ::rename;
#endif


_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_CSTDIO

#endif


#if 0 /* evaluated by -frewrite-includes */
# define _LIBCPP_ASSERT(x, m) ((x) ? (void)0 : \
  _VSTD::__libcpp_debug_function(_VSTD::__libcpp_debug_info(__FILE__, __LINE__, #x, m)))
#endif


#if 0 /* evaluated by -frewrite-includes */
#ifndef _LIBCPP_DEBUG_ASSERT
#define _LIBCPP_DEBUG_ASSERT(x, m) _LIBCPP_ASSERT(x, m)
#endif
#define _LIBCPP_DEBUG_MODE(...) __VA_ARGS__
#endif

#ifndef _LIBCPP_ASSERT
#   define _LIBCPP_ASSERT(x, m) ((void)0)
#endif
#ifndef _LIBCPP_DEBUG_ASSERT
#   define _LIBCPP_DEBUG_ASSERT(x, m) ((void)0)
#endif
#ifndef _LIBCPP_DEBUG_MODE
#define _LIBCPP_DEBUG_MODE(...) ((void)0)
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

struct _LIBCPP_TEMPLATE_VIS __libcpp_debug_info {
  _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
  __libcpp_debug_info()
      : __file_(nullptr), __line_(-1), __pred_(nullptr), __msg_(nullptr) {}
  _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
  __libcpp_debug_info(const char* __f, int __l, const char* __p, const char* __m)
    : __file_(__f), __line_(__l), __pred_(__p), __msg_(__m) {}

  _LIBCPP_FUNC_VIS std::string what() const;

  const char* __file_;
  int __line_;
  const char* __pred_;
  const char* __msg_;
};

/// __libcpp_debug_function_type - The type of the assertion failure handler.
typedef void(*__libcpp_debug_function_type)(__libcpp_debug_info const&);

/// __libcpp_debug_function - The handler function called when a _LIBCPP_ASSERT
///    fails.
extern _LIBCPP_EXPORTED_FROM_ABI __libcpp_debug_function_type __libcpp_debug_function;

/// __libcpp_abort_debug_function - A debug handler that aborts when called.
_LIBCPP_NORETURN _LIBCPP_FUNC_VIS
void __libcpp_abort_debug_function(__libcpp_debug_info const&);

/// __libcpp_set_debug_function - Set the debug handler to the specified
///    function.
_LIBCPP_FUNC_VIS
bool __libcpp_set_debug_function(__libcpp_debug_function_type __func);

#if 1 /* evaluated by -frewrite-includes */

#endif // _LIBCPP_DEBUG_LEVEL >= 2 || defined(_LIBCPP_BUILDING_LIBRARY)

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_DEBUG_H



#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_BEGIN_NAMESPACE_STD

namespace rel_ops
{

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator!=(const _Tp& __x, const _Tp& __y)
{
    return !(__x == __y);
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator> (const _Tp& __x, const _Tp& __y)
{
    return __y < __x;
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator<=(const _Tp& __x, const _Tp& __y)
{
    return !(__y < __x);
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator>=(const _Tp& __x, const _Tp& __y)
{
    return !(__x < __y);
}

}  // rel_ops

// swap_ranges is defined in <type_traits>`

// swap is defined in <type_traits>

// move_if_noexcept

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
#ifndef _LIBCPP_CXX03_LANG
typename conditional
<
    !is_nothrow_move_constructible<_Tp>::value && is_copy_constructible<_Tp>::value,
    const _Tp&,
    _Tp&&
>::type
#else  // _LIBCPP_CXX03_LANG
const _Tp&
#endif
move_if_noexcept(_Tp& __x) _NOEXCEPT
{
    return _VSTD::move(__x);
}


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp> constexpr add_const_t<_Tp>& as_const(_Tp& __t) noexcept { return __t; }
template <class _Tp>                        void as_const(const _Tp&&) = delete;
#endif

struct _LIBCPP_TEMPLATE_VIS piecewise_construct_t { explicit piecewise_construct_t() = default; };

#if 1 /* evaluated by -frewrite-includes */
extern _LIBCPP_EXPORTED_FROM_ABI const piecewise_construct_t piecewise_construct;// = piecewise_construct_t();
#else
/* _LIBCPP_INLINE_VAR */ constexpr piecewise_construct_t piecewise_construct = piecewise_construct_t();
#endif


#if 0 /* evaluated by -frewrite-includes */
template <class, class>
struct __non_trivially_copyable_base {
  _LIBCPP_CONSTEXPR _LIBCPP_INLINE_VISIBILITY
  __non_trivially_copyable_base() _NOEXCEPT {}
  _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
  __non_trivially_copyable_base(__non_trivially_copyable_base const&) _NOEXCEPT {}
};
#endif

template <class _T1, class _T2>
struct _LIBCPP_TEMPLATE_VIS pair

#if 0 /* evaluated by -frewrite-includes */
: private __non_trivially_copyable_base<_T1, _T2>
#endif
{
    typedef _T1 first_type;
    typedef _T2 second_type;

    _T1 first;
    _T2 second;


#if 1 /* evaluated by -frewrite-includes */
    pair(pair const&) = default;
    pair(pair&&) = default;
#else
  // Use the implicitly declared copy constructor in C++03
#endif

#ifdef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY
    pair() : first(), second() {}

    _LIBCPP_INLINE_VISIBILITY
    pair(_T1 const& __t1, _T2 const& __t2) : first(__t1), second(__t2) {}

    template <class _U1, class _U2>
    _LIBCPP_INLINE_VISIBILITY
    pair(const pair<_U1, _U2>& __p) : first(__p.first), second(__p.second) {}

    _LIBCPP_INLINE_VISIBILITY
    pair& operator=(pair const& __p) {
        first = __p.first;
        second = __p.second;
        return *this;
    }
#else
    template <bool _Val>
    using _EnableB _LIBCPP_NODEBUG_TYPE = typename enable_if<_Val, bool>::type;

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
    using _CheckArgsDep _LIBCPP_NODEBUG_TYPE = typename conditional<
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
    using _CheckTLC _LIBCPP_NODEBUG_TYPE = typename conditional<
        __tuple_like_with_size<_Tuple, 2>::value
            && !is_same<typename decay<_Tuple>::type, pair>::value,
        _CheckTupleLikeConstructor,
        __check_tuple_constructor_fail
    >::type;

    template<bool _Dummy = true, _EnableB<
            _CheckArgsDep<_Dummy>::__enable_explicit_default()
    > = false>
    explicit _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
    pair() _NOEXCEPT_(is_nothrow_default_constructible<first_type>::value &&
                      is_nothrow_default_constructible<second_type>::value)
        : first(), second() {}

    template<bool _Dummy = true, _EnableB<
            _CheckArgsDep<_Dummy>::__enable_implicit_default()
    > = false>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
    pair() _NOEXCEPT_(is_nothrow_default_constructible<first_type>::value &&
                      is_nothrow_default_constructible<second_type>::value)
        : first(), second() {}

    template <bool _Dummy = true, _EnableB<
             _CheckArgsDep<_Dummy>::template __enable_explicit<_T1 const&, _T2 const&>()
    > = false>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    explicit pair(_T1 const& __t1, _T2 const& __t2)
        _NOEXCEPT_(is_nothrow_copy_constructible<first_type>::value &&
                   is_nothrow_copy_constructible<second_type>::value)
        : first(__t1), second(__t2) {}

    template<bool _Dummy = true, _EnableB<
            _CheckArgsDep<_Dummy>::template __enable_implicit<_T1 const&, _T2 const&>()
    > = false>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    pair(_T1 const& __t1, _T2 const& __t2)
        _NOEXCEPT_(is_nothrow_copy_constructible<first_type>::value &&
                   is_nothrow_copy_constructible<second_type>::value)
        : first(__t1), second(__t2) {}

    template<class _U1, class _U2, _EnableB<
             _CheckArgs::template __enable_explicit<_U1, _U2>()
    > = false>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    explicit pair(_U1&& __u1, _U2&& __u2)
        _NOEXCEPT_((is_nothrow_constructible<first_type, _U1>::value &&
                    is_nothrow_constructible<second_type, _U2>::value))
        : first(_VSTD::forward<_U1>(__u1)), second(_VSTD::forward<_U2>(__u2)) {}

    template<class _U1, class _U2, _EnableB<
            _CheckArgs::template __enable_implicit<_U1, _U2>()
    > = false>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    pair(_U1&& __u1, _U2&& __u2)
        _NOEXCEPT_((is_nothrow_constructible<first_type, _U1>::value &&
                    is_nothrow_constructible<second_type, _U2>::value))
        : first(_VSTD::forward<_U1>(__u1)), second(_VSTD::forward<_U2>(__u2)) {}

    template<class _U1, class _U2, _EnableB<
            _CheckArgs::template __enable_explicit<_U1 const&, _U2 const&>()
    > = false>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    explicit pair(pair<_U1, _U2> const& __p)
        _NOEXCEPT_((is_nothrow_constructible<first_type, _U1 const&>::value &&
                    is_nothrow_constructible<second_type, _U2 const&>::value))
        : first(__p.first), second(__p.second) {}

    template<class _U1, class _U2, _EnableB<
            _CheckArgs::template __enable_implicit<_U1 const&, _U2 const&>()
    > = false>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    pair(pair<_U1, _U2> const& __p)
        _NOEXCEPT_((is_nothrow_constructible<first_type, _U1 const&>::value &&
                    is_nothrow_constructible<second_type, _U2 const&>::value))
        : first(__p.first), second(__p.second) {}

    template<class _U1, class _U2, _EnableB<
            _CheckArgs::template __enable_explicit<_U1, _U2>()
    > = false>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    explicit pair(pair<_U1, _U2>&&__p)
        _NOEXCEPT_((is_nothrow_constructible<first_type, _U1&&>::value &&
                    is_nothrow_constructible<second_type, _U2&&>::value))
        : first(_VSTD::forward<_U1>(__p.first)), second(_VSTD::forward<_U2>(__p.second)) {}

    template<class _U1, class _U2, _EnableB<
            _CheckArgs::template __enable_implicit<_U1, _U2>()
    > = false>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    pair(pair<_U1, _U2>&& __p)
        _NOEXCEPT_((is_nothrow_constructible<first_type, _U1&&>::value &&
                    is_nothrow_constructible<second_type, _U2&&>::value))
        : first(_VSTD::forward<_U1>(__p.first)), second(_VSTD::forward<_U2>(__p.second)) {}

    template<class _Tuple, _EnableB<
            _CheckTLC<_Tuple>::template __enable_explicit<_Tuple>()
    > = false>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    explicit pair(_Tuple&& __p)
        : first(_VSTD::get<0>(_VSTD::forward<_Tuple>(__p))),
          second(_VSTD::get<1>(_VSTD::forward<_Tuple>(__p))) {}

    template<class _Tuple, _EnableB<
            _CheckTLC<_Tuple>::template __enable_implicit<_Tuple>()
    > = false>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    pair(_Tuple&& __p)
        : first(_VSTD::get<0>(_VSTD::forward<_Tuple>(__p))),
          second(_VSTD::get<1>(_VSTD::forward<_Tuple>(__p))) {}

    template <class... _Args1, class... _Args2>
    _LIBCPP_INLINE_VISIBILITY
    pair(piecewise_construct_t __pc,
         tuple<_Args1...> __first_args, tuple<_Args2...> __second_args)
        _NOEXCEPT_((is_nothrow_constructible<first_type, _Args1...>::value &&
                    is_nothrow_constructible<second_type, _Args2...>::value))
        : pair(__pc, __first_args, __second_args,
                typename __make_tuple_indices<sizeof...(_Args1)>::type(),
                typename __make_tuple_indices<sizeof...(_Args2) >::type()) {}

    _LIBCPP_INLINE_VISIBILITY
    pair& operator=(typename conditional<
                        is_copy_assignable<first_type>::value &&
                        is_copy_assignable<second_type>::value,
                    pair, __nat>::type const& __p)
        _NOEXCEPT_(is_nothrow_copy_assignable<first_type>::value &&
                   is_nothrow_copy_assignable<second_type>::value)
    {
        first = __p.first;
        second = __p.second;
        return *this;
    }

    _LIBCPP_INLINE_VISIBILITY
    pair& operator=(typename conditional<
                        is_move_assignable<first_type>::value &&
                        is_move_assignable<second_type>::value,
                    pair, __nat>::type&& __p)
        _NOEXCEPT_(is_nothrow_move_assignable<first_type>::value &&
                   is_nothrow_move_assignable<second_type>::value)
    {
        first = _VSTD::forward<first_type>(__p.first);
        second = _VSTD::forward<second_type>(__p.second);
        return *this;
    }

    template <class _Tuple, _EnableB<
            _CheckTLC<_Tuple>::template __enable_assign<_Tuple>()
     > = false>
    _LIBCPP_INLINE_VISIBILITY
    pair& operator=(_Tuple&& __p) {
        first = _VSTD::get<0>(_VSTD::forward<_Tuple>(__p));
        second = _VSTD::get<1>(_VSTD::forward<_Tuple>(__p));
        return *this;
    }
#endif

    _LIBCPP_INLINE_VISIBILITY
    void
    swap(pair& __p) _NOEXCEPT_(__is_nothrow_swappable<first_type>::value &&
                               __is_nothrow_swappable<second_type>::value)
    {
        using _VSTD::swap;
        swap(first,  __p.first);
        swap(second, __p.second);
    }
private:

#ifndef _LIBCPP_CXX03_LANG
    template <class... _Args1, class... _Args2, size_t... _I1, size_t... _I2>
        _LIBCPP_INLINE_VISIBILITY
        pair(piecewise_construct_t,
             tuple<_Args1...>& __first_args, tuple<_Args2...>& __second_args,
             __tuple_indices<_I1...>, __tuple_indices<_I2...>);
#endif
};

#ifndef _LIBCPP_HAS_NO_DEDUCTION_GUIDES
template<class _T1, class _T2>
pair(_T1, _T2) -> pair<_T1, _T2>;
#endif // _LIBCPP_HAS_NO_DEDUCTION_GUIDES

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
bool
operator==(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
{
    return __x.first == __y.first && __x.second == __y.second;
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
bool
operator!=(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
{
    return !(__x == __y);
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
bool
operator< (const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
{
    return __x.first < __y.first || (!(__y.first < __x.first) && __x.second < __y.second);
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
bool
operator> (const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
{
    return __y < __x;
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
bool
operator>=(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
{
    return !(__x < __y);
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
bool
operator<=(const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
{
    return !(__y < __x);
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    __is_swappable<_T1>::value &&
    __is_swappable<_T2>::value,
    void
>::type
swap(pair<_T1, _T2>& __x, pair<_T1, _T2>& __y)
                     _NOEXCEPT_((__is_nothrow_swappable<_T1>::value &&
                                 __is_nothrow_swappable<_T2>::value))
{
    __x.swap(__y);
}

template <class _Tp>
struct __unwrap_reference { typedef _LIBCPP_NODEBUG_TYPE _Tp type; };

template <class _Tp>
struct __unwrap_reference<reference_wrapper<_Tp> > { typedef _LIBCPP_NODEBUG_TYPE _Tp& type; };


#if 0 /* evaluated by -frewrite-includes */
template <class _Tp>
struct unwrap_reference : __unwrap_reference<_Tp> { };

template <class _Tp>
struct unwrap_ref_decay : unwrap_reference<typename decay<_Tp>::type> { };
#endif // > C++17

template <class _Tp>
struct __unwrap_ref_decay

#if 0 /* evaluated by -frewrite-includes */
    : unwrap_ref_decay<_Tp>
#else
    : __unwrap_reference<typename decay<_Tp>::type>
#endif
{ };

#ifndef _LIBCPP_CXX03_LANG

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
pair<typename __unwrap_ref_decay<_T1>::type, typename __unwrap_ref_decay<_T2>::type>
make_pair(_T1&& __t1, _T2&& __t2)
{
    return pair<typename __unwrap_ref_decay<_T1>::type, typename __unwrap_ref_decay<_T2>::type>
               (_VSTD::forward<_T1>(__t1), _VSTD::forward<_T2>(__t2));
}

#else  // _LIBCPP_CXX03_LANG

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY
pair<_T1,_T2>
make_pair(_T1 __x, _T2 __y)
{
    return pair<_T1, _T2>(__x, __y);
}

#endif  // _LIBCPP_CXX03_LANG

template <class _T1, class _T2>
  struct _LIBCPP_TEMPLATE_VIS tuple_size<pair<_T1, _T2> >
    : public integral_constant<size_t, 2> {};

template <size_t _Ip, class _T1, class _T2>
struct _LIBCPP_TEMPLATE_VIS tuple_element<_Ip, pair<_T1, _T2> >
{
    static_assert(_Ip < 2, "Index out of bounds in std::tuple_element<std::pair<T1, T2>>");
};

template <class _T1, class _T2>
struct _LIBCPP_TEMPLATE_VIS tuple_element<0, pair<_T1, _T2> >
{
    typedef _LIBCPP_NODEBUG_TYPE _T1 type;
};

template <class _T1, class _T2>
struct _LIBCPP_TEMPLATE_VIS tuple_element<1, pair<_T1, _T2> >
{
    typedef _LIBCPP_NODEBUG_TYPE _T2 type;
};

template <size_t _Ip> struct __get_pair;

template <>
struct __get_pair<0>
{
    template <class _T1, class _T2>
    static
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    _T1&
    get(pair<_T1, _T2>& __p) _NOEXCEPT {return __p.first;}

    template <class _T1, class _T2>
    static
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    const _T1&
    get(const pair<_T1, _T2>& __p) _NOEXCEPT {return __p.first;}

#ifndef _LIBCPP_CXX03_LANG
    template <class _T1, class _T2>
    static
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    _T1&&
    get(pair<_T1, _T2>&& __p) _NOEXCEPT {return _VSTD::forward<_T1>(__p.first);}

    template <class _T1, class _T2>
    static
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    const _T1&&
    get(const pair<_T1, _T2>&& __p) _NOEXCEPT {return _VSTD::forward<const _T1>(__p.first);}
#endif  // _LIBCPP_CXX03_LANG
};

template <>
struct __get_pair<1>
{
    template <class _T1, class _T2>
    static
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    _T2&
    get(pair<_T1, _T2>& __p) _NOEXCEPT {return __p.second;}

    template <class _T1, class _T2>
    static
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    const _T2&
    get(const pair<_T1, _T2>& __p) _NOEXCEPT {return __p.second;}

#ifndef _LIBCPP_CXX03_LANG
    template <class _T1, class _T2>
    static
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    _T2&&
    get(pair<_T1, _T2>&& __p) _NOEXCEPT {return _VSTD::forward<_T2>(__p.second);}

    template <class _T1, class _T2>
    static
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    const _T2&&
    get(const pair<_T1, _T2>&& __p) _NOEXCEPT {return _VSTD::forward<const _T2>(__p.second);}
#endif  // _LIBCPP_CXX03_LANG
};

template <size_t _Ip, class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
typename tuple_element<_Ip, pair<_T1, _T2> >::type&
get(pair<_T1, _T2>& __p) _NOEXCEPT
{
    return __get_pair<_Ip>::get(__p);
}

template <size_t _Ip, class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
const typename tuple_element<_Ip, pair<_T1, _T2> >::type&
get(const pair<_T1, _T2>& __p) _NOEXCEPT
{
    return __get_pair<_Ip>::get(__p);
}

#ifndef _LIBCPP_CXX03_LANG
template <size_t _Ip, class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
typename tuple_element<_Ip, pair<_T1, _T2> >::type&&
get(pair<_T1, _T2>&& __p) _NOEXCEPT
{
    return __get_pair<_Ip>::get(_VSTD::move(__p));
}

template <size_t _Ip, class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
const typename tuple_element<_Ip, pair<_T1, _T2> >::type&&
get(const pair<_T1, _T2>&& __p) _NOEXCEPT
{
    return __get_pair<_Ip>::get(_VSTD::move(__p));
}
#endif  // _LIBCPP_CXX03_LANG


#if 1 /* evaluated by -frewrite-includes */
template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY
constexpr _T1 & get(pair<_T1, _T2>& __p) _NOEXCEPT
{
    return __get_pair<0>::get(__p);
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY
constexpr _T1 const & get(pair<_T1, _T2> const& __p) _NOEXCEPT
{
    return __get_pair<0>::get(__p);
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY
constexpr _T1 && get(pair<_T1, _T2>&& __p) _NOEXCEPT
{
    return __get_pair<0>::get(_VSTD::move(__p));
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY
constexpr _T1 const && get(pair<_T1, _T2> const&& __p) _NOEXCEPT
{
    return __get_pair<0>::get(_VSTD::move(__p));
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY
constexpr _T1 & get(pair<_T2, _T1>& __p) _NOEXCEPT
{
    return __get_pair<1>::get(__p);
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY
constexpr _T1 const & get(pair<_T2, _T1> const& __p) _NOEXCEPT
{
    return __get_pair<1>::get(__p);
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY
constexpr _T1 && get(pair<_T2, _T1>&& __p) _NOEXCEPT
{
    return __get_pair<1>::get(_VSTD::move(__p));
}

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY
constexpr _T1 const && get(pair<_T2, _T1> const&& __p) _NOEXCEPT
{
    return __get_pair<1>::get(_VSTD::move(__p));
}

#endif


#if 1 /* evaluated by -frewrite-includes */

template<class _Tp, _Tp... _Ip>
struct _LIBCPP_TEMPLATE_VIS integer_sequence
{
    typedef _Tp value_type;
    static_assert( is_integral<_Tp>::value,
                  "std::integer_sequence can only be instantiated with an integral type" );
    static
    _LIBCPP_INLINE_VISIBILITY
    constexpr
    size_t
    size() noexcept { return sizeof...(_Ip); }
};

template<size_t... _Ip>
    using index_sequence = integer_sequence<size_t, _Ip...>;


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp, _Tp _Ep>
using __make_integer_sequence _LIBCPP_NODEBUG_TYPE = __make_integer_seq<integer_sequence, _Tp, _Ep>;

#else

template<typename _Tp, _Tp _Np> using __make_integer_sequence_unchecked _LIBCPP_NODEBUG_TYPE  =
  typename __detail::__make<_Np>::type::template __convert<integer_sequence, _Tp>;

template <class _Tp, _Tp _Ep>
struct __make_integer_sequence_checked
{
    static_assert(is_integral<_Tp>::value,
                  "std::make_integer_sequence can only be instantiated with an integral type" );
    static_assert(0 <= _Ep, "std::make_integer_sequence must have a non-negative sequence length");
    // Workaround GCC bug by preventing bad installations when 0 <= _Ep
    // https://gcc.gnu.org/bugzilla/show_bug.cgi?id=68929
    typedef _LIBCPP_NODEBUG_TYPE  __make_integer_sequence_unchecked<_Tp, 0 <= _Ep ? _Ep : 0> type;
};

template <class _Tp, _Tp _Ep>
using __make_integer_sequence _LIBCPP_NODEBUG_TYPE = typename __make_integer_sequence_checked<_Tp, _Ep>::type;

#endif

template<class _Tp, _Tp _Np>
    using make_integer_sequence = __make_integer_sequence<_Tp, _Np>;

template<size_t _Np>
    using make_index_sequence = make_integer_sequence<size_t, _Np>;

template<class... _Tp>
    using index_sequence_for = make_index_sequence<sizeof...(_Tp)>;

#endif  // _LIBCPP_STD_VER > 11


#if 1 /* evaluated by -frewrite-includes */
template<class _T1, class _T2 = _T1>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
_T1 exchange(_T1& __obj, _T2 && __new_value)
{
    _T1 __old_value = _VSTD::move(__obj);
    __obj = _VSTD::forward<_T2>(__new_value);
    return __old_value;
}
#endif  // _LIBCPP_STD_VER > 11


#if 1 /* evaluated by -frewrite-includes */

struct _LIBCPP_TYPE_VIS in_place_t {
    explicit in_place_t() = default;
};
_LIBCPP_INLINE_VAR constexpr in_place_t in_place{};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS in_place_type_t {
    explicit in_place_type_t() = default;
};
template <class _Tp>
_LIBCPP_INLINE_VAR constexpr in_place_type_t<_Tp> in_place_type{};

template <size_t _Idx>
struct _LIBCPP_TYPE_VIS in_place_index_t {
    explicit in_place_index_t() = default;
};
template <size_t _Idx>
_LIBCPP_INLINE_VAR constexpr in_place_index_t<_Idx> in_place_index{};

template <class _Tp> struct __is_inplace_type_imp : false_type {};
template <class _Tp> struct __is_inplace_type_imp<in_place_type_t<_Tp>> : true_type {};

template <class _Tp>
using __is_inplace_type = __is_inplace_type_imp<__uncvref_t<_Tp>>;

template <class _Tp> struct __is_inplace_index_imp : false_type {};
template <size_t _Idx> struct __is_inplace_index_imp<in_place_index_t<_Idx>> : true_type {};

template <class _Tp>
using __is_inplace_index = __is_inplace_index_imp<__uncvref_t<_Tp>>;

#endif // _LIBCPP_STD_VER > 14

template <class _Arg, class _Result>
struct _LIBCPP_TEMPLATE_VIS unary_function
{
    typedef _Arg    argument_type;
    typedef _Result result_type;
};

template <class _Size>
inline _LIBCPP_INLINE_VISIBILITY
_Size
__loadword(const void* __p)
{
    _Size __r;
    std::memcpy(&__r, __p, sizeof(__r));
    return __r;
}

// We use murmur2 when size_t is 32 bits, and cityhash64 when size_t
// is 64 bits.  This is because cityhash64 uses 64bit x 64bit
// multiplication, which can be very slow on 32-bit systems.
template <class _Size, size_t = sizeof(_Size)*__CHAR_BIT__>
struct __murmur2_or_cityhash;

template <class _Size>
struct __murmur2_or_cityhash<_Size, 32>
{
    inline _Size operator()(const void* __key, _Size __len)
         _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK;
};

// murmur2
template <class _Size>
_Size
__murmur2_or_cityhash<_Size, 32>::operator()(const void* __key, _Size __len)
{
    const _Size __m = 0x5bd1e995;
    const _Size __r = 24;
    _Size __h = __len;
    const unsigned char* __data = static_cast<const unsigned char*>(__key);
    for (; __len >= 4; __data += 4, __len -= 4)
    {
        _Size __k = __loadword<_Size>(__data);
        __k *= __m;
        __k ^= __k >> __r;
        __k *= __m;
        __h *= __m;
        __h ^= __k;
    }
    switch (__len)
    {
    case 3:
        __h ^= __data[2] << 16;
        _LIBCPP_FALLTHROUGH();
    case 2:
        __h ^= __data[1] << 8;
        _LIBCPP_FALLTHROUGH();
    case 1:
        __h ^= __data[0];
        __h *= __m;
    }
    __h ^= __h >> 13;
    __h *= __m;
    __h ^= __h >> 15;
    return __h;
}

template <class _Size>
struct __murmur2_or_cityhash<_Size, 64>
{
    inline _Size operator()(const void* __key, _Size __len)  _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK;

 private:
  // Some primes between 2^63 and 2^64.
  static const _Size __k0 = 0xc3a5c85c97cb3127ULL;
  static const _Size __k1 = 0xb492b66fbe98f273ULL;
  static const _Size __k2 = 0x9ae16a3b2f90404fULL;
  static const _Size __k3 = 0xc949d7c7509e6557ULL;

  static _Size __rotate(_Size __val, int __shift) {
    return __shift == 0 ? __val : ((__val >> __shift) | (__val << (64 - __shift)));
  }

  static _Size __rotate_by_at_least_1(_Size __val, int __shift) {
    return (__val >> __shift) | (__val << (64 - __shift));
  }

  static _Size __shift_mix(_Size __val) {
    return __val ^ (__val >> 47);
  }

  static _Size __hash_len_16(_Size __u, _Size __v)
     _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK
  {
    const _Size __mul = 0x9ddfea08eb382d69ULL;
    _Size __a = (__u ^ __v) * __mul;
    __a ^= (__a >> 47);
    _Size __b = (__v ^ __a) * __mul;
    __b ^= (__b >> 47);
    __b *= __mul;
    return __b;
  }

  static _Size __hash_len_0_to_16(const char* __s, _Size __len)
     _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK
  {
    if (__len > 8) {
      const _Size __a = __loadword<_Size>(__s);
      const _Size __b = __loadword<_Size>(__s + __len - 8);
      return __hash_len_16(__a, __rotate_by_at_least_1(__b + __len, __len)) ^ __b;
    }
    if (__len >= 4) {
      const uint32_t __a = __loadword<uint32_t>(__s);
      const uint32_t __b = __loadword<uint32_t>(__s + __len - 4);
      return __hash_len_16(__len + (__a << 3), __b);
    }
    if (__len > 0) {
      const unsigned char __a = __s[0];
      const unsigned char __b = __s[__len >> 1];
      const unsigned char __c = __s[__len - 1];
      const uint32_t __y = static_cast<uint32_t>(__a) +
                           (static_cast<uint32_t>(__b) << 8);
      const uint32_t __z = __len + (static_cast<uint32_t>(__c) << 2);
      return __shift_mix(__y * __k2 ^ __z * __k3) * __k2;
    }
    return __k2;
  }

  static _Size __hash_len_17_to_32(const char *__s, _Size __len)
     _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK
  {
    const _Size __a = __loadword<_Size>(__s) * __k1;
    const _Size __b = __loadword<_Size>(__s + 8);
    const _Size __c = __loadword<_Size>(__s + __len - 8) * __k2;
    const _Size __d = __loadword<_Size>(__s + __len - 16) * __k0;
    return __hash_len_16(__rotate(__a - __b, 43) + __rotate(__c, 30) + __d,
                         __a + __rotate(__b ^ __k3, 20) - __c + __len);
  }

  // Return a 16-byte hash for 48 bytes.  Quick and dirty.
  // Callers do best to use "random-looking" values for a and b.
  static pair<_Size, _Size> __weak_hash_len_32_with_seeds(
      _Size __w, _Size __x, _Size __y, _Size __z, _Size __a, _Size __b)
        _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK
  {
    __a += __w;
    __b = __rotate(__b + __a + __z, 21);
    const _Size __c = __a;
    __a += __x;
    __a += __y;
    __b += __rotate(__a, 44);
    return pair<_Size, _Size>(__a + __z, __b + __c);
  }

  // Return a 16-byte hash for s[0] ... s[31], a, and b.  Quick and dirty.
  static pair<_Size, _Size> __weak_hash_len_32_with_seeds(
      const char* __s, _Size __a, _Size __b)
    _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK
  {
    return __weak_hash_len_32_with_seeds(__loadword<_Size>(__s),
                                         __loadword<_Size>(__s + 8),
                                         __loadword<_Size>(__s + 16),
                                         __loadword<_Size>(__s + 24),
                                         __a,
                                         __b);
  }

  // Return an 8-byte hash for 33 to 64 bytes.
  static _Size __hash_len_33_to_64(const char *__s, size_t __len)
    _LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK
  {
    _Size __z = __loadword<_Size>(__s + 24);
    _Size __a = __loadword<_Size>(__s) +
                (__len + __loadword<_Size>(__s + __len - 16)) * __k0;
    _Size __b = __rotate(__a + __z, 52);
    _Size __c = __rotate(__a, 37);
    __a += __loadword<_Size>(__s + 8);
    __c += __rotate(__a, 7);
    __a += __loadword<_Size>(__s + 16);
    _Size __vf = __a + __z;
    _Size __vs = __b + __rotate(__a, 31) + __c;
    __a = __loadword<_Size>(__s + 16) + __loadword<_Size>(__s + __len - 32);
    __z += __loadword<_Size>(__s + __len - 8);
    __b = __rotate(__a + __z, 52);
    __c = __rotate(__a, 37);
    __a += __loadword<_Size>(__s + __len - 24);
    __c += __rotate(__a, 7);
    __a += __loadword<_Size>(__s + __len - 16);
    _Size __wf = __a + __z;
    _Size __ws = __b + __rotate(__a, 31) + __c;
    _Size __r = __shift_mix((__vf + __ws) * __k2 + (__wf + __vs) * __k0);
    return __shift_mix(__r * __k0 + __vs) * __k2;
  }
};

// cityhash64
template <class _Size>
_Size
__murmur2_or_cityhash<_Size, 64>::operator()(const void* __key, _Size __len)
{
  const char* __s = static_cast<const char*>(__key);
  if (__len <= 32) {
    if (__len <= 16) {
      return __hash_len_0_to_16(__s, __len);
    } else {
      return __hash_len_17_to_32(__s, __len);
    }
  } else if (__len <= 64) {
    return __hash_len_33_to_64(__s, __len);
  }

  // For strings over 64 bytes we hash the end first, and then as we
  // loop we keep 56 bytes of state: v, w, x, y, and z.
  _Size __x = __loadword<_Size>(__s + __len - 40);
  _Size __y = __loadword<_Size>(__s + __len - 16) +
              __loadword<_Size>(__s + __len - 56);
  _Size __z = __hash_len_16(__loadword<_Size>(__s + __len - 48) + __len,
                          __loadword<_Size>(__s + __len - 24));
  pair<_Size, _Size> __v = __weak_hash_len_32_with_seeds(__s + __len - 64, __len, __z);
  pair<_Size, _Size> __w = __weak_hash_len_32_with_seeds(__s + __len - 32, __y + __k1, __x);
  __x = __x * __k1 + __loadword<_Size>(__s);

  // Decrease len to the nearest multiple of 64, and operate on 64-byte chunks.
  __len = (__len - 1) & ~static_cast<_Size>(63);
  do {
    __x = __rotate(__x + __y + __v.first + __loadword<_Size>(__s + 8), 37) * __k1;
    __y = __rotate(__y + __v.second + __loadword<_Size>(__s + 48), 42) * __k1;
    __x ^= __w.second;
    __y += __v.first + __loadword<_Size>(__s + 40);
    __z = __rotate(__z + __w.first, 33) * __k1;
    __v = __weak_hash_len_32_with_seeds(__s, __v.second * __k1, __x + __w.first);
    __w = __weak_hash_len_32_with_seeds(__s + 32, __z + __w.second,
                                        __y + __loadword<_Size>(__s + 16));
    std::swap(__z, __x);
    __s += 64;
    __len -= 64;
  } while (__len != 0);
  return __hash_len_16(
      __hash_len_16(__v.first, __w.first) + __shift_mix(__y) * __k1 + __z,
      __hash_len_16(__v.second, __w.second) + __x);
}

template <class _Tp, size_t = sizeof(_Tp) / sizeof(size_t)>
struct __scalar_hash;

template <class _Tp>
struct __scalar_hash<_Tp, 0>
    : public unary_function<_Tp, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(_Tp __v) const _NOEXCEPT
    {
        union
        {
            _Tp    __t;
            size_t __a;
        } __u;
        __u.__a = 0;
        __u.__t = __v;
        return __u.__a;
    }
};

template <class _Tp>
struct __scalar_hash<_Tp, 1>
    : public unary_function<_Tp, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(_Tp __v) const _NOEXCEPT
    {
        union
        {
            _Tp    __t;
            size_t __a;
        } __u;
        __u.__t = __v;
        return __u.__a;
    }
};

template <class _Tp>
struct __scalar_hash<_Tp, 2>
    : public unary_function<_Tp, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(_Tp __v) const _NOEXCEPT
    {
        union
        {
            _Tp __t;
            struct
            {
                size_t __a;
                size_t __b;
            } __s;
        } __u;
        __u.__t = __v;
        return __murmur2_or_cityhash<size_t>()(&__u, sizeof(__u));
    }
};

template <class _Tp>
struct __scalar_hash<_Tp, 3>
    : public unary_function<_Tp, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(_Tp __v) const _NOEXCEPT
    {
        union
        {
            _Tp __t;
            struct
            {
                size_t __a;
                size_t __b;
                size_t __c;
            } __s;
        } __u;
        __u.__t = __v;
        return __murmur2_or_cityhash<size_t>()(&__u, sizeof(__u));
    }
};

template <class _Tp>
struct __scalar_hash<_Tp, 4>
    : public unary_function<_Tp, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(_Tp __v) const _NOEXCEPT
    {
        union
        {
            _Tp __t;
            struct
            {
                size_t __a;
                size_t __b;
                size_t __c;
                size_t __d;
            } __s;
        } __u;
        __u.__t = __v;
        return __murmur2_or_cityhash<size_t>()(&__u, sizeof(__u));
    }
};

struct _PairT {
  size_t first;
  size_t second;
};

_LIBCPP_INLINE_VISIBILITY
inline size_t __hash_combine(size_t __lhs, size_t __rhs) _NOEXCEPT {
    typedef __scalar_hash<_PairT> _HashT;
    const _PairT __p = {__lhs, __rhs};
    return _HashT()(__p);
}

template<class _Tp>
struct _LIBCPP_TEMPLATE_VIS hash<_Tp*>
    : public unary_function<_Tp*, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(_Tp* __v) const _NOEXCEPT
    {
        union
        {
            _Tp* __t;
            size_t __a;
        } __u;
        __u.__t = __v;
        return __murmur2_or_cityhash<size_t>()(&__u, sizeof(__u));
    }
};


template <>
struct _LIBCPP_TEMPLATE_VIS hash<bool>
    : public unary_function<bool, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(bool __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<char>
    : public unary_function<char, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(char __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<signed char>
    : public unary_function<signed char, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(signed char __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<unsigned char>
    : public unary_function<unsigned char, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(unsigned char __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

#ifndef _LIBCPP_HAS_NO_UNICODE_CHARS

template <>
struct _LIBCPP_TEMPLATE_VIS hash<char16_t>
    : public unary_function<char16_t, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(char16_t __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<char32_t>
    : public unary_function<char32_t, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(char32_t __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

#endif  // _LIBCPP_HAS_NO_UNICODE_CHARS

template <>
struct _LIBCPP_TEMPLATE_VIS hash<wchar_t>
    : public unary_function<wchar_t, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(wchar_t __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<short>
    : public unary_function<short, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(short __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<unsigned short>
    : public unary_function<unsigned short, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(unsigned short __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<int>
    : public unary_function<int, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(int __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<unsigned int>
    : public unary_function<unsigned int, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(unsigned int __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<long>
    : public unary_function<long, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(long __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<unsigned long>
    : public unary_function<unsigned long, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(unsigned long __v) const _NOEXCEPT {return static_cast<size_t>(__v);}
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<long long>
    : public __scalar_hash<long long>
{
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<unsigned long long>
    : public __scalar_hash<unsigned long long>
{
};


template <>
struct _LIBCPP_TEMPLATE_VIS hash<float>
    : public __scalar_hash<float>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(float __v) const _NOEXCEPT
    {
        // -0.0 and 0.0 should return same hash
       if (__v == 0.0f)
           return 0;
        return __scalar_hash<float>::operator()(__v);
    }
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<double>
    : public __scalar_hash<double>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(double __v) const _NOEXCEPT
    {
        // -0.0 and 0.0 should return same hash
       if (__v == 0.0)
           return 0;
        return __scalar_hash<double>::operator()(__v);
    }
};

template <>
struct _LIBCPP_TEMPLATE_VIS hash<long double>
    : public __scalar_hash<long double>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(long double __v) const _NOEXCEPT
    {
        // -0.0 and 0.0 should return same hash
        if (__v == 0.0L)
            return 0;

#if 1 /* evaluated by -frewrite-includes */
        // Zero out padding bits
        union
        {
            long double __t;
            struct
            {
                size_t __a;
                size_t __b;
                size_t __c;
                size_t __d;
            } __s;
        } __u;
        __u.__s.__a = 0;
        __u.__s.__b = 0;
        __u.__s.__c = 0;
        __u.__s.__d = 0;
        __u.__t = __v;
        return __u.__s.__a ^ __u.__s.__b ^ __u.__s.__c ^ __u.__s.__d;

#elif 0 /* evaluated by -frewrite-includes */
        // Zero out padding bits
        union
        {
            long double __t;
            struct
            {
                size_t __a;
                size_t __b;
            } __s;
        } __u;
        __u.__s.__a = 0;
        __u.__s.__b = 0;
        __u.__t = __v;
        return __u.__s.__a ^ __u.__s.__b;
#else
        return __scalar_hash<long double>::operator()(__v);
#endif
    }
};


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp, bool = is_enum<_Tp>::value>
struct _LIBCPP_TEMPLATE_VIS __enum_hash
    : public unary_function<_Tp, size_t>
{
    _LIBCPP_INLINE_VISIBILITY
    size_t operator()(_Tp __v) const _NOEXCEPT
    {
        typedef typename underlying_type<_Tp>::type type;
        return hash<type>{}(static_cast<type>(__v));
    }
};
template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS __enum_hash<_Tp, false> {
    __enum_hash() = delete;
    __enum_hash(__enum_hash const&) = delete;
    __enum_hash& operator=(__enum_hash const&) = delete;
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS hash : public __enum_hash<_Tp>
{
};
#endif


#if 1 /* evaluated by -frewrite-includes */

template <>
struct _LIBCPP_TEMPLATE_VIS hash<nullptr_t>
  : public unary_function<nullptr_t, size_t>
{
  _LIBCPP_INLINE_VISIBILITY
  size_t operator()(nullptr_t) const _NOEXCEPT {
    return 662607004ull;
  }
};
#endif

#ifndef _LIBCPP_CXX03_LANG
template <class _Key, class _Hash>
using __check_hash_requirements _LIBCPP_NODEBUG_TYPE  = integral_constant<bool,
    is_copy_constructible<_Hash>::value &&
    is_move_constructible<_Hash>::value &&
    __invokable_r<size_t, _Hash, _Key const&>::value
>;

template <class _Key, class _Hash = std::hash<_Key> >
using __has_enabled_hash _LIBCPP_NODEBUG_TYPE = integral_constant<bool,
    __check_hash_requirements<_Key, _Hash>::value &&
    is_default_constructible<_Hash>::value
>;


#if 1 /* evaluated by -frewrite-includes */
template <class _Type, class>
using __enable_hash_helper_imp _LIBCPP_NODEBUG_TYPE  = _Type;

template <class _Type, class ..._Keys>
using __enable_hash_helper _LIBCPP_NODEBUG_TYPE  = __enable_hash_helper_imp<_Type,
  typename enable_if<__all<__has_enabled_hash<_Keys>::value...>::value>::type
>;
#else
template <class _Type, class ...>
using __enable_hash_helper _LIBCPP_NODEBUG_TYPE = _Type;
#endif

#endif // !_LIBCPP_CXX03_LANG

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_UTILITY

// -*- C++ -*-
//===-------------------------- memory ------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_MEMORY
#define _LIBCPP_MEMORY





// -*- C++ -*-
//===-------------------------- typeinfo ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef __LIBCPP_TYPEINFO
#define __LIBCPP_TYPEINFO




// -*- C++ -*-
//===-------------------------- exception ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_EXCEPTION
#define _LIBCPP_EXCEPTION








#if 1 /* evaluated by -frewrite-includes */

// SPDX-License-Identifier: MIT

// SPDX-FileCopyrightText: 2019 Stefan Schmidt

#ifndef __VCRUNTIME_EXCEPTION_H__
#define __VCRUNTIME_EXCEPTION_H__

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
        exception () noexcept : _Data{NULL, false}
        {
        }

        explicit exception (const char *const _Message) noexcept
        {
            const __std_exception_data data = {_Message, true};
            __std_exception_copy(&data, &this->_Data);
        }

        // MS-specific extension to avoid string allocation
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

#endif
#endif


#if 1 /* evaluated by -frewrite-includes */

#endif

namespace std  // purposefully not using versioning namespace
{




#if 1 /* evaluated by -frewrite-includes */
typedef void (*unexpected_handler)();
_LIBCPP_FUNC_VIS unexpected_handler set_unexpected(unexpected_handler) _NOEXCEPT;
_LIBCPP_FUNC_VIS unexpected_handler get_unexpected() _NOEXCEPT;
_LIBCPP_NORETURN _LIBCPP_FUNC_VIS void unexpected();
#endif

typedef void (*terminate_handler)();
_LIBCPP_FUNC_VIS terminate_handler set_terminate(terminate_handler) _NOEXCEPT;
_LIBCPP_FUNC_VIS terminate_handler get_terminate() _NOEXCEPT;
_LIBCPP_NORETURN _LIBCPP_FUNC_VIS void terminate() _NOEXCEPT;

_LIBCPP_FUNC_VIS bool uncaught_exception() _NOEXCEPT;
_LIBCPP_FUNC_VIS _LIBCPP_AVAILABILITY_UNCAUGHT_EXCEPTIONS int uncaught_exceptions() _NOEXCEPT;

class _LIBCPP_TYPE_VIS exception_ptr;

_LIBCPP_FUNC_VIS exception_ptr current_exception() _NOEXCEPT;
_LIBCPP_NORETURN _LIBCPP_FUNC_VIS void rethrow_exception(exception_ptr);

#ifndef _LIBCPP_ABI_MICROSOFT

#else // _LIBCPP_ABI_MICROSOFT

class _LIBCPP_TYPE_VIS exception_ptr
{

#if 1 /* evaluated by -frewrite-includes */
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
    void* __ptr1_;
    void* __ptr2_;

#if 1 /* evaluated by -frewrite-includes */
#pragma clang diagnostic pop
#endif
public:
    exception_ptr() _NOEXCEPT;
    exception_ptr(nullptr_t) _NOEXCEPT;
    exception_ptr(const exception_ptr& __other) _NOEXCEPT;
    exception_ptr& operator=(const exception_ptr& __other) _NOEXCEPT;
    exception_ptr& operator=(nullptr_t) _NOEXCEPT;
    ~exception_ptr() _NOEXCEPT;
    _LIBCPP_EXPLICIT operator bool() const _NOEXCEPT;
};

_LIBCPP_FUNC_VIS exception_ptr __copy_exception_ptr(void *__except, const void* __ptr);
_LIBCPP_FUNC_VIS exception_ptr current_exception() _NOEXCEPT;
_LIBCPP_NORETURN _LIBCPP_FUNC_VIS void rethrow_exception(exception_ptr p);

// This is a built-in template function which automagically extracts the required
// information.
template <class _E> void *__GetExceptionInfo(_E);

template<class _Ep>
_LIBCPP_INLINE_VISIBILITY exception_ptr
make_exception_ptr(_Ep __e) _NOEXCEPT
{
  return __copy_exception_ptr(_VSTD::addressof(__e), __GetExceptionInfo(__e));
}

#endif // _LIBCPP_ABI_MICROSOFT
// nested_exception

class _LIBCPP_EXCEPTION_ABI nested_exception
{
    exception_ptr __ptr_;
public:
    nested_exception() _NOEXCEPT;
//     nested_exception(const nested_exception&) noexcept = default;
//     nested_exception& operator=(const nested_exception&) noexcept = default;
    virtual ~nested_exception() _NOEXCEPT;

    // access functions
    _LIBCPP_NORETURN void rethrow_nested() const;
    _LIBCPP_INLINE_VISIBILITY exception_ptr nested_ptr() const _NOEXCEPT {return __ptr_;}
};

template <class _Tp>
struct __nested
    : public _Tp,
      public nested_exception
{
    _LIBCPP_INLINE_VISIBILITY explicit __nested(const _Tp& __t) : _Tp(__t) {}
};

#ifndef _LIBCPP_NO_EXCEPTIONS
template <class _Tp, class _Up, bool>
struct __throw_with_nested;

template <class _Tp, class _Up>
struct __throw_with_nested<_Tp, _Up, true> {
    _LIBCPP_NORETURN static inline _LIBCPP_INLINE_VISIBILITY void
    __do_throw(_Tp&& __t)
    {
        throw __nested<_Up>(_VSTD::forward<_Tp>(__t));
    }
};

template <class _Tp, class _Up>
struct __throw_with_nested<_Tp, _Up, false> {
    _LIBCPP_NORETURN static inline _LIBCPP_INLINE_VISIBILITY void
#ifndef _LIBCPP_CXX03_LANG
    __do_throw(_Tp&& __t)
#else
    __do_throw (_Tp& __t)
#endif  // _LIBCPP_CXX03_LANG
    {
        throw _VSTD::forward<_Tp>(__t);
    }
};
#endif

template <class _Tp>
_LIBCPP_NORETURN
void
throw_with_nested(_Tp&& __t)
{
#ifndef _LIBCPP_NO_EXCEPTIONS
    typedef typename decay<_Tp>::type _Up;
    static_assert( is_copy_constructible<_Up>::value, "type thrown must be CopyConstructible");
    __throw_with_nested<_Tp, _Up,
        is_class<_Up>::value &&
        !is_base_of<nested_exception, _Up>::value &&
        !__libcpp_is_final<_Up>::value>::
            __do_throw(_VSTD::forward<_Tp>(__t));
#else
    ((void)__t);
    // FIXME: Make this abort
#endif
}

template <class _From, class _To>
struct __can_dynamic_cast : public _LIBCPP_BOOL_CONSTANT(
              is_polymorphic<_From>::value &&
                 (!is_base_of<_To, _From>::value ||
                   is_convertible<const _From*, const _To*>::value)) {};

template <class _Ep>
inline _LIBCPP_INLINE_VISIBILITY
void
rethrow_if_nested(const _Ep& __e,
                  typename enable_if< __can_dynamic_cast<_Ep, nested_exception>::value>::type* = 0)
{
    const nested_exception* __nep = dynamic_cast<const nested_exception*>(_VSTD::addressof(__e));
    if (__nep)
        __nep->rethrow_nested();
}

template <class _Ep>
inline _LIBCPP_INLINE_VISIBILITY
void
rethrow_if_nested(const _Ep&,
                  typename enable_if<!__can_dynamic_cast<_Ep, nested_exception>::value>::type* = 0)
{
}

}  // std

#endif  // _LIBCPP_EXCEPTION


#ifdef _LIBCPP_NO_EXCEPTIONS

#endif


#if 1 /* evaluated by -frewrite-includes */

#endif


#if 1 /* evaluated by -frewrite-includes */

// SPDX-License-Identifier: MIT

// SPDX-FileCopyrightText: 2019-2020 Stefan Schmidt

#ifndef __VCRUNTIME_TYPEINFO_H__
#define __VCRUNTIME_TYPEINFO_H__


/* Diagnostics <assert.h>

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/



#ifdef __cplusplus
extern "C" {
#endif

#ifndef _PDCLIB_ASSERT_H
#define _PDCLIB_ASSERT_H
void _xbox_assert(char const * const expression, char const * const file_name, char const * const function_name, unsigned long line);
#endif

/* If NDEBUG is set, assert() is a null operation. */
#undef assert

#ifdef NDEBUG
    #define assert(ignore) ((void)0)
#else
    #define assert(expression) \
        ((void) ((expression) ? 0 :  \
            (_xbox_assert(_PDCLIB_symbol2string(expression), \
                          __FILE__, \
                          __func__, \
                          __LINE__), 0)))
#endif

#ifndef __cplusplus
#define static_assert _Static_assert
#endif

#ifdef __cplusplus
}
#endif


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
        // FIXME: return human-readable name
        assert(false);
        return NULL;
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
    // According to the standard, this constructor should not exist. However,
    // not having any constructors causes LLVM to not emit a vftable.
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

#endif
#endif // defined(_LIBCPP_ABI_VCRUNTIME)


#endif  // __LIBCPP_TYPEINFO



// -*- C++ -*-
//===----------------------------- new ------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_NEW
#define _LIBCPP_NEW

/*
    new synopsis

namespace std
{

class bad_alloc
    : public exception
{
public:
    bad_alloc() noexcept;
    bad_alloc(const bad_alloc&) noexcept;
    bad_alloc& operator=(const bad_alloc&) noexcept;
    virtual const char* what() const noexcept;
};

class bad_array_new_length : public bad_alloc // C++14
{
public:
    bad_array_new_length() noexcept;
};

enum class align_val_t : size_t {}; // C++17

struct destroying_delete_t { // C++20
  explicit destroying_delete_t() = default;
};
inline constexpr destroying_delete_t destroying_delete{}; // C++20

struct nothrow_t { explicit nothrow_t() = default; };
extern const nothrow_t nothrow;
typedef void (*new_handler)();
new_handler set_new_handler(new_handler new_p) noexcept;
new_handler get_new_handler() noexcept;

// 21.6.4, pointer optimization barrier
template <class T> constexpr T* launder(T* p) noexcept; // C++17
}  // std

void* operator new(std::size_t size);                                   // replaceable, nodiscard in C++2a
void* operator new(std::size_t size, std::align_val_t alignment);       // replaceable, C++17, nodiscard in C++2a
void* operator new(std::size_t size, const std::nothrow_t&) noexcept;   // replaceable, nodiscard in C++2a
void* operator new(std::size_t size, std::align_val_t alignment,
                   const std::nothrow_t&) noexcept;                     // replaceable, C++17, nodiscard in C++2a
void  operator delete(void* ptr) noexcept;                              // replaceable
void  operator delete(void* ptr, std::size_t size) noexcept;            // replaceable, C++14
void  operator delete(void* ptr, std::align_val_t alignment) noexcept;  // replaceable, C++17
void  operator delete(void* ptr, std::size_t size,
                      std::align_val_t alignment) noexcept;             // replaceable, C++17
void  operator delete(void* ptr, const std::nothrow_t&) noexcept;       // replaceable
void  operator delete(void* ptr, std:align_val_t alignment,
                      const std::nothrow_t&) noexcept;                  // replaceable, C++17

void* operator new[](std::size_t size);                                 // replaceable, nodiscard in C++2a
void* operator new[](std::size_t size,
                     std::align_val_t alignment) noexcept;              // replaceable, C++17, nodiscard in C++2a
void* operator new[](std::size_t size, const std::nothrow_t&) noexcept; // replaceable, nodiscard in C++2a
void* operator new[](std::size_t size, std::align_val_t alignment,
                     const std::nothrow_t&) noexcept;                   // replaceable, C++17, nodiscard in C++2a
void  operator delete[](void* ptr) noexcept;                            // replaceable
void  operator delete[](void* ptr, std::size_t size) noexcept;          // replaceable, C++14
void  operator delete[](void* ptr,
                        std::align_val_t alignment) noexcept;           // replaceable, C++17
void  operator delete[](void* ptr, std::size_t size,
                        std::align_val_t alignment) noexcept;           // replaceable, C++17
void  operator delete[](void* ptr, const std::nothrow_t&) noexcept;     // replaceable
void  operator delete[](void* ptr, std::align_val_t alignment,
                        const std::nothrow_t&) noexcept;                // replaceable, C++17

void* operator new  (std::size_t size, void* ptr) noexcept;             // nodiscard in C++2a
void* operator new[](std::size_t size, void* ptr) noexcept;             // nodiscard in C++2a
void  operator delete  (void* ptr, void*) noexcept;
void  operator delete[](void* ptr, void*) noexcept;

*/






#ifdef _LIBCPP_NO_EXCEPTIONS

#endif


#if 0 /* evaluated by -frewrite-includes */

#endif


#if 1 /* evaluated by -frewrite-includes */

#endif


#if 1 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_LANGUAGE_SIZED_DEALLOCATION
#endif


#if 0 /* evaluated by -frewrite-includes */
# define _LIBCPP_HAS_NO_LIBRARY_SIZED_DEALLOCATION
#endif


#if 1 /* evaluated by -frewrite-includes */
# define _LIBCPP_HAS_NO_SIZED_DEALLOCATION
#endif


#if 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_HAS_NO_BUILTIN_OVERLOADED_OPERATOR_NEW_DELETE
#endif

namespace std  // purposefully not using versioning namespace
{


#if 1 /* evaluated by -frewrite-includes */
struct _LIBCPP_TYPE_VIS nothrow_t { explicit nothrow_t() = default; };
extern _LIBCPP_FUNC_VIS const nothrow_t nothrow;

#ifndef NXDK
class _LIBCPP_EXCEPTION_ABI bad_alloc
    : public exception
{
public:
    bad_alloc() _NOEXCEPT;
    virtual ~bad_alloc() _NOEXCEPT;
    virtual const char* what() const _NOEXCEPT;
};

class _LIBCPP_EXCEPTION_ABI bad_array_new_length
    : public bad_alloc
{
public:
    bad_array_new_length() _NOEXCEPT;
    virtual ~bad_array_new_length() _NOEXCEPT;
    virtual const char* what() const _NOEXCEPT;
};
#endif

typedef void (*new_handler)();
_LIBCPP_FUNC_VIS new_handler set_new_handler(new_handler) _NOEXCEPT;
_LIBCPP_FUNC_VIS new_handler get_new_handler() _NOEXCEPT;

#endif // !_LIBCPP_ABI_VCRUNTIME

_LIBCPP_NORETURN _LIBCPP_FUNC_VIS void __throw_bad_alloc();  // not in C++ spec


#if 1 /* evaluated by -frewrite-includes */
#ifndef _LIBCPP_CXX03_LANG
enum class _LIBCPP_ENUM_VIS align_val_t : size_t { };
#else
enum align_val_t { __zero = 0, __max = (size_t)-1 };
#endif
#endif


#if 0 /* evaluated by -frewrite-includes */
// Enable the declaration even if the compiler doesn't support the language
// feature.
struct destroying_delete_t {
  explicit destroying_delete_t() = default;
};
_LIBCPP_INLINE_VAR constexpr destroying_delete_t destroying_delete{};
#endif // _LIBCPP_STD_VER > 17

}  // std


#if 0 /* evaluated by -frewrite-includes */
#define _THROW_BAD_ALLOC throw(std::bad_alloc)
#else
#define _THROW_BAD_ALLOC
#endif


#if 1 /* evaluated by -frewrite-includes */

_LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_OVERRIDABLE_FUNC_VIS void* operator new(std::size_t __sz) _THROW_BAD_ALLOC;
_LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_OVERRIDABLE_FUNC_VIS void* operator new(std::size_t __sz, const std::nothrow_t&) _NOEXCEPT _LIBCPP_NOALIAS;
_LIBCPP_OVERRIDABLE_FUNC_VIS void  operator delete(void* __p) _NOEXCEPT;
_LIBCPP_OVERRIDABLE_FUNC_VIS void  operator delete(void* __p, const std::nothrow_t&) _NOEXCEPT;
#ifndef _LIBCPP_HAS_NO_LIBRARY_SIZED_DEALLOCATION
_LIBCPP_OVERRIDABLE_FUNC_VIS _LIBCPP_AVAILABILITY_SIZED_NEW_DELETE void  operator delete(void* __p, std::size_t __sz) _NOEXCEPT;
#endif

_LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_OVERRIDABLE_FUNC_VIS void* operator new[](std::size_t __sz) _THROW_BAD_ALLOC;
_LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_OVERRIDABLE_FUNC_VIS void* operator new[](std::size_t __sz, const std::nothrow_t&) _NOEXCEPT _LIBCPP_NOALIAS;
_LIBCPP_OVERRIDABLE_FUNC_VIS void  operator delete[](void* __p) _NOEXCEPT;
_LIBCPP_OVERRIDABLE_FUNC_VIS void  operator delete[](void* __p, const std::nothrow_t&) _NOEXCEPT;
#ifndef _LIBCPP_HAS_NO_LIBRARY_SIZED_DEALLOCATION
_LIBCPP_OVERRIDABLE_FUNC_VIS _LIBCPP_AVAILABILITY_SIZED_NEW_DELETE void  operator delete[](void* __p, std::size_t __sz) _NOEXCEPT;
#endif

#ifndef _LIBCPP_HAS_NO_LIBRARY_ALIGNED_ALLOCATION
_LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_OVERRIDABLE_FUNC_VIS void* operator new(std::size_t __sz, std::align_val_t) _THROW_BAD_ALLOC;
_LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_OVERRIDABLE_FUNC_VIS void* operator new(std::size_t __sz, std::align_val_t, const std::nothrow_t&) _NOEXCEPT _LIBCPP_NOALIAS;
_LIBCPP_OVERRIDABLE_FUNC_VIS void  operator delete(void* __p, std::align_val_t) _NOEXCEPT;
_LIBCPP_OVERRIDABLE_FUNC_VIS void  operator delete(void* __p, std::align_val_t, const std::nothrow_t&) _NOEXCEPT;
#ifndef _LIBCPP_HAS_NO_LIBRARY_SIZED_DEALLOCATION
_LIBCPP_OVERRIDABLE_FUNC_VIS _LIBCPP_AVAILABILITY_SIZED_NEW_DELETE void  operator delete(void* __p, std::size_t __sz, std::align_val_t) _NOEXCEPT;
#endif

_LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_OVERRIDABLE_FUNC_VIS void* operator new[](std::size_t __sz, std::align_val_t) _THROW_BAD_ALLOC;
_LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_OVERRIDABLE_FUNC_VIS void* operator new[](std::size_t __sz, std::align_val_t, const std::nothrow_t&) _NOEXCEPT _LIBCPP_NOALIAS;
_LIBCPP_OVERRIDABLE_FUNC_VIS void  operator delete[](void* __p, std::align_val_t) _NOEXCEPT;
_LIBCPP_OVERRIDABLE_FUNC_VIS void  operator delete[](void* __p, std::align_val_t, const std::nothrow_t&) _NOEXCEPT;
#ifndef _LIBCPP_HAS_NO_LIBRARY_SIZED_DEALLOCATION
_LIBCPP_OVERRIDABLE_FUNC_VIS _LIBCPP_AVAILABILITY_SIZED_NEW_DELETE void  operator delete[](void* __p, std::size_t __sz, std::align_val_t) _NOEXCEPT;
#endif
#endif

_LIBCPP_NODISCARD_AFTER_CXX17 inline _LIBCPP_INLINE_VISIBILITY void* operator new  (std::size_t, void* __p) _NOEXCEPT {return __p;}
_LIBCPP_NODISCARD_AFTER_CXX17 inline _LIBCPP_INLINE_VISIBILITY void* operator new[](std::size_t, void* __p) _NOEXCEPT {return __p;}
inline _LIBCPP_INLINE_VISIBILITY void  operator delete  (void*, void*) _NOEXCEPT {}
inline _LIBCPP_INLINE_VISIBILITY void  operator delete[](void*, void*) _NOEXCEPT {}

#endif // !_LIBCPP_ABI_VCRUNTIME

_LIBCPP_BEGIN_NAMESPACE_STD

_LIBCPP_CONSTEXPR inline _LIBCPP_INLINE_VISIBILITY bool __is_overaligned_for_new(size_t __align) _NOEXCEPT {
#ifdef __STDCPP_DEFAULT_NEW_ALIGNMENT__
  return __align > __STDCPP_DEFAULT_NEW_ALIGNMENT__;
#else
  return __align > alignment_of<max_align_t>::value;
#endif
}

inline _LIBCPP_INLINE_VISIBILITY void *__libcpp_allocate(size_t __size, size_t __align) {
#ifndef _LIBCPP_HAS_NO_ALIGNED_ALLOCATION
  if (__is_overaligned_for_new(__align)) {
    const align_val_t __align_val = static_cast<align_val_t>(__align);
# ifdef _LIBCPP_HAS_NO_BUILTIN_OVERLOADED_OPERATOR_NEW_DELETE
    return ::operator new(__size, __align_val);
# else
    return __builtin_operator_new(__size, __align_val);
# endif
  }
#else
  ((void)__align);
#endif
#ifdef _LIBCPP_HAS_NO_BUILTIN_OPERATOR_NEW_DELETE
  return ::operator new(__size);
#else
  return __builtin_operator_new(__size);
#endif
}

struct _DeallocateCaller {
  static inline _LIBCPP_INLINE_VISIBILITY
  void __do_deallocate_handle_size_align(void *__ptr, size_t __size, size_t __align) {

#if 0 /* evaluated by -frewrite-includes */
    ((void)__align);
    return __do_deallocate_handle_size(__ptr, __size);
#else
    if (__is_overaligned_for_new(__align)) {
      const align_val_t __align_val = static_cast<align_val_t>(__align);
      return __do_deallocate_handle_size(__ptr, __size, __align_val);
    } else {
      return __do_deallocate_handle_size(__ptr, __size);
    }
#endif
  }

  static inline _LIBCPP_INLINE_VISIBILITY
  void __do_deallocate_handle_align(void *__ptr, size_t __align) {

#if 0 /* evaluated by -frewrite-includes */
    ((void)__align);
    return __do_call(__ptr);
#else
    if (__is_overaligned_for_new(__align)) {
      const align_val_t __align_val = static_cast<align_val_t>(__align);
      return __do_call(__ptr, __align_val);
    } else {
      return __do_call(__ptr);
    }
#endif
  }

 private:
  static inline void __do_deallocate_handle_size(void *__ptr, size_t __size) {
#ifdef _LIBCPP_HAS_NO_SIZED_DEALLOCATION
    ((void)__size);
    return __do_call(__ptr);
#else
    return __do_call(__ptr, __size);
#endif
  }

#ifndef _LIBCPP_HAS_NO_ALIGNED_ALLOCATION
  static inline void __do_deallocate_handle_size(void *__ptr, size_t __size, align_val_t __align) {
#ifdef _LIBCPP_HAS_NO_SIZED_DEALLOCATION
    ((void)__size);
    return __do_call(__ptr, __align);
#else
    return __do_call(__ptr, __size, __align);
#endif
  }
#endif

private:
  template <class _A1, class _A2>
  static inline void __do_call(void *__ptr, _A1 __a1, _A2 __a2) {

#if 1 /* evaluated by -frewrite-includes */
    return ::operator delete(__ptr, __a1, __a2);
#else
    return __builtin_operator_delete(__ptr, __a1, __a2);
#endif
  }

  template <class _A1>
  static inline void __do_call(void *__ptr, _A1 __a1) {

#if 1 /* evaluated by -frewrite-includes */
    return ::operator delete(__ptr, __a1);
#else
    return __builtin_operator_delete(__ptr, __a1);
#endif
  }

  static inline void __do_call(void *__ptr) {
#ifdef _LIBCPP_HAS_NO_BUILTIN_OPERATOR_NEW_DELETE
    return ::operator delete(__ptr);
#else
    return __builtin_operator_delete(__ptr);
#endif
  }
};

inline _LIBCPP_INLINE_VISIBILITY void __libcpp_deallocate(void* __ptr, size_t __size, size_t __align) {
  _DeallocateCaller::__do_deallocate_handle_size_align(__ptr, __size, __align);
}

inline _LIBCPP_INLINE_VISIBILITY void __libcpp_deallocate_unsized(void* __ptr, size_t __align) {
  _DeallocateCaller::__do_deallocate_handle_align(__ptr, __align);
}

template <class _Tp>
_LIBCPP_NODISCARD_AFTER_CXX17 inline
_LIBCPP_CONSTEXPR _Tp* __launder(_Tp* __p) _NOEXCEPT
{
    static_assert (!(is_function<_Tp>::value), "can't launder functions" );
    static_assert (!(is_same<void, typename remove_cv<_Tp>::type>::value), "can't launder cv-void" );
#ifdef _LIBCPP_COMPILER_HAS_BUILTIN_LAUNDER
    return __builtin_launder(__p);
#else
    return __p;
#endif
}



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_NODISCARD_AFTER_CXX17 inline _LIBCPP_INLINE_VISIBILITY
constexpr _Tp* launder(_Tp* __p) noexcept
{
    return _VSTD::__launder(__p);
}
#endif

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_NEW



// -*- C++ -*-
//===-------------------------- iterator ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_ITERATOR
#define _LIBCPP_ITERATOR

/*
    iterator synopsis

namespace std
{

template<class Iterator>
struct iterator_traits
{
    typedef typename Iterator::difference_type difference_type;
    typedef typename Iterator::value_type value_type;
    typedef typename Iterator::pointer pointer;
    typedef typename Iterator::reference reference;
    typedef typename Iterator::iterator_category iterator_category;
};

template<class T>
struct iterator_traits<T*>
{
    typedef ptrdiff_t difference_type;
    typedef T value_type;
    typedef T* pointer;
    typedef T& reference;
    typedef random_access_iterator_tag iterator_category;
};

template<class Category, class T, class Distance = ptrdiff_t,
         class Pointer = T*, class Reference = T&>
struct iterator
{
    typedef T         value_type;
    typedef Distance  difference_type;
    typedef Pointer   pointer;
    typedef Reference reference;
    typedef Category  iterator_category;
};

struct input_iterator_tag  {};
struct output_iterator_tag {};
struct forward_iterator_tag       : public input_iterator_tag         {};
struct bidirectional_iterator_tag : public forward_iterator_tag       {};
struct random_access_iterator_tag : public bidirectional_iterator_tag {};

// 27.4.3, iterator operations
// extension: second argument not conforming to C++03
template <class InputIterator>  // constexpr in C++17
  constexpr void advance(InputIterator& i,
             typename iterator_traits<InputIterator>::difference_type n);

template <class InputIterator>  // constexpr in C++17
  constexpr typename iterator_traits<InputIterator>::difference_type
    distance(InputIterator first, InputIterator last);

template <class InputIterator>  // constexpr in C++17
  constexpr InputIterator next(InputIterator x,
typename iterator_traits<InputIterator>::difference_type n = 1);

template <class BidirectionalIterator>  // constexpr in C++17
  constexpr BidirectionalIterator prev(BidirectionalIterator x,
    typename iterator_traits<BidirectionalIterator>::difference_type n = 1);

template <class Iterator>
class reverse_iterator
    : public iterator<typename iterator_traits<Iterator>::iterator_category,
                      typename iterator_traits<Iterator>::value_type,
                      typename iterator_traits<Iterator>::difference_type,
                      typename iterator_traits<Iterator>::pointer,
                      typename iterator_traits<Iterator>::reference>
{
protected:
    Iterator current;
public:
    typedef Iterator                                            iterator_type;
    typedef typename iterator_traits<Iterator>::difference_type difference_type;
    typedef typename iterator_traits<Iterator>::reference       reference;
    typedef typename iterator_traits<Iterator>::pointer         pointer;

    constexpr reverse_iterator();
    constexpr explicit reverse_iterator(Iterator x);
    template <class U> constexpr reverse_iterator(const reverse_iterator<U>& u);
    template <class U> constexpr reverse_iterator& operator=(const reverse_iterator<U>& u);
    constexpr Iterator base() const;
    constexpr reference operator*() const;
    constexpr pointer   operator->() const;
    constexpr reverse_iterator& operator++();
    constexpr reverse_iterator  operator++(int);
    constexpr reverse_iterator& operator--();
    constexpr reverse_iterator  operator--(int);
    constexpr reverse_iterator  operator+ (difference_type n) const;
    constexpr reverse_iterator& operator+=(difference_type n);
    constexpr reverse_iterator  operator- (difference_type n) const;
    constexpr reverse_iterator& operator-=(difference_type n);
    constexpr reference         operator[](difference_type n) const;
};

template <class Iterator1, class Iterator2>
constexpr bool                          // constexpr in C++17
operator==(const reverse_iterator<Iterator1>& x, const reverse_iterator<Iterator2>& y);

template <class Iterator1, class Iterator2>
constexpr bool                          // constexpr in C++17
operator<(const reverse_iterator<Iterator1>& x, const reverse_iterator<Iterator2>& y);

template <class Iterator1, class Iterator2>
constexpr bool                          // constexpr in C++17
operator!=(const reverse_iterator<Iterator1>& x, const reverse_iterator<Iterator2>& y);

template <class Iterator1, class Iterator2>
constexpr bool                          // constexpr in C++17
operator>(const reverse_iterator<Iterator1>& x, const reverse_iterator<Iterator2>& y);

template <class Iterator1, class Iterator2>
constexpr bool                          // constexpr in C++17
operator>=(const reverse_iterator<Iterator1>& x, const reverse_iterator<Iterator2>& y);

template <class Iterator1, class Iterator2>
constexpr bool                          // constexpr in C++17
operator<=(const reverse_iterator<Iterator1>& x, const reverse_iterator<Iterator2>& y);

template <class Iterator1, class Iterator2>
constexpr auto
operator-(const reverse_iterator<Iterator1>& x, const reverse_iterator<Iterator2>& y)
-> decltype(__y.base() - __x.base());   // constexpr in C++17

template <class Iterator>
constexpr reverse_iterator<Iterator>
operator+(typename reverse_iterator<Iterator>::difference_type n,
          const reverse_iterator<Iterator>& x);   // constexpr in C++17

template <class Iterator>
constexpr reverse_iterator<Iterator> make_reverse_iterator(Iterator i); // C++14, constexpr in C++17

template <class Container>
class back_insert_iterator
{
protected:
    Container* container;
public:
    typedef Container                   container_type;
    typedef void                        value_type;
    typedef void                        difference_type;
    typedef void                        reference;
    typedef void                        pointer;

    explicit back_insert_iterator(Container& x);
    back_insert_iterator& operator=(const typename Container::value_type& value);
    back_insert_iterator& operator*();
    back_insert_iterator& operator++();
    back_insert_iterator  operator++(int);
};

template <class Container> back_insert_iterator<Container> back_inserter(Container& x);

template <class Container>
class front_insert_iterator
{
protected:
    Container* container;
public:
    typedef Container                    container_type;
    typedef void                         value_type;
    typedef void                         difference_type;
    typedef void                         reference;
    typedef void                         pointer;

    explicit front_insert_iterator(Container& x);
    front_insert_iterator& operator=(const typename Container::value_type& value);
    front_insert_iterator& operator*();
    front_insert_iterator& operator++();
    front_insert_iterator  operator++(int);
};

template <class Container> front_insert_iterator<Container> front_inserter(Container& x);

template <class Container>
class insert_iterator
{
protected:
    Container* container;
    typename Container::iterator iter;
public:
    typedef Container              container_type;
    typedef void                   value_type;
    typedef void                   difference_type;
    typedef void                   reference;
    typedef void                   pointer;

    insert_iterator(Container& x, typename Container::iterator i);
    insert_iterator& operator=(const typename Container::value_type& value);
    insert_iterator& operator*();
    insert_iterator& operator++();
    insert_iterator& operator++(int);
};

template <class Container, class Iterator>
insert_iterator<Container> inserter(Container& x, Iterator i);

template <class Iterator>
class move_iterator {
public:
    typedef Iterator                                              iterator_type;
    typedef typename iterator_traits<Iterator>::difference_type   difference_type;
    typedef Iterator                                              pointer;
    typedef typename iterator_traits<Iterator>::value_type        value_type;
    typedef typename iterator_traits<Iterator>::iterator_category iterator_category;
    typedef value_type&&                                          reference;

    constexpr move_iterator();  // all the constexprs are in C++17
    constexpr explicit move_iterator(Iterator i);
    template <class U>
      constexpr move_iterator(const move_iterator<U>& u);
    template <class U>
      constexpr move_iterator& operator=(const move_iterator<U>& u);
    constexpr iterator_type base() const;
    constexpr reference operator*() const;
    constexpr pointer operator->() const;
    constexpr move_iterator& operator++();
    constexpr move_iterator operator++(int);
    constexpr move_iterator& operator--();
    constexpr move_iterator operator--(int);
    constexpr move_iterator operator+(difference_type n) const;
    constexpr move_iterator& operator+=(difference_type n);
    constexpr move_iterator operator-(difference_type n) const;
    constexpr move_iterator& operator-=(difference_type n);
    constexpr unspecified operator[](difference_type n) const;
private:
    Iterator current; // exposition only
};

template <class Iterator1, class Iterator2>
constexpr bool   // constexpr in C++17
operator==(const move_iterator<Iterator1>& x, const move_iterator<Iterator2>& y);

template <class Iterator1, class Iterator2>
constexpr bool   // constexpr in C++17
operator!=(const move_iterator<Iterator1>& x, const move_iterator<Iterator2>& y);

template <class Iterator1, class Iterator2>
constexpr bool   // constexpr in C++17
operator<(const move_iterator<Iterator1>& x, const move_iterator<Iterator2>& y);

template <class Iterator1, class Iterator2>
constexpr bool   // constexpr in C++17
operator<=(const move_iterator<Iterator1>& x, const move_iterator<Iterator2>& y);

template <class Iterator1, class Iterator2>
constexpr bool   // constexpr in C++17
operator>(const move_iterator<Iterator1>& x, const move_iterator<Iterator2>& y);

template <class Iterator1, class Iterator2>
constexpr bool   // constexpr in C++17
operator>=(const move_iterator<Iterator1>& x, const move_iterator<Iterator2>& y);

template <class Iterator1, class Iterator2>
constexpr auto   // constexpr in C++17
operator-(const move_iterator<Iterator1>& x,
          const move_iterator<Iterator2>& y) -> decltype(x.base() - y.base());

template <class Iterator>
constexpr move_iterator<Iterator> operator+(   // constexpr in C++17
            typename move_iterator<Iterator>::difference_type n,
            const move_iterator<Iterator>& x);

template <class Iterator>   // constexpr in C++17
constexpr  move_iterator<Iterator> make_move_iterator(const Iterator& i);


template <class T, class charT = char, class traits = char_traits<charT>, class Distance = ptrdiff_t>
class istream_iterator
    : public iterator<input_iterator_tag, T, Distance, const T*, const T&>
{
public:
    typedef charT char_type;
    typedef traits traits_type;
    typedef basic_istream<charT,traits> istream_type;

    constexpr istream_iterator();
    istream_iterator(istream_type& s);
    istream_iterator(const istream_iterator& x);
    ~istream_iterator();

    const T& operator*() const;
    const T* operator->() const;
    istream_iterator& operator++();
    istream_iterator  operator++(int);
};

template <class T, class charT, class traits, class Distance>
bool operator==(const istream_iterator<T,charT,traits,Distance>& x,
                const istream_iterator<T,charT,traits,Distance>& y);
template <class T, class charT, class traits, class Distance>
bool operator!=(const istream_iterator<T,charT,traits,Distance>& x,
                const istream_iterator<T,charT,traits,Distance>& y);

template <class T, class charT = char, class traits = char_traits<charT> >
class ostream_iterator
    : public iterator<output_iterator_tag, void, void, void ,void>
{
public:
    typedef charT char_type;
    typedef traits traits_type;
    typedef basic_ostream<charT,traits> ostream_type;

    ostream_iterator(ostream_type& s);
    ostream_iterator(ostream_type& s, const charT* delimiter);
    ostream_iterator(const ostream_iterator& x);
    ~ostream_iterator();
    ostream_iterator& operator=(const T& value);

    ostream_iterator& operator*();
    ostream_iterator& operator++();
    ostream_iterator& operator++(int);
};

template<class charT, class traits = char_traits<charT> >
class istreambuf_iterator
    : public iterator<input_iterator_tag, charT,
                      typename traits::off_type, unspecified,
                      charT>
{
public:
    typedef charT                         char_type;
    typedef traits                        traits_type;
    typedef typename traits::int_type     int_type;
    typedef basic_streambuf<charT,traits> streambuf_type;
    typedef basic_istream<charT,traits>   istream_type;

    istreambuf_iterator() noexcept;
    istreambuf_iterator(istream_type& s) noexcept;
    istreambuf_iterator(streambuf_type* s) noexcept;
    istreambuf_iterator(a-private-type) noexcept;

    charT                operator*() const;
    pointer operator->() const;
    istreambuf_iterator& operator++();
    a-private-type       operator++(int);

    bool equal(const istreambuf_iterator& b) const;
};

template <class charT, class traits>
bool operator==(const istreambuf_iterator<charT,traits>& a,
                const istreambuf_iterator<charT,traits>& b);
template <class charT, class traits>
bool operator!=(const istreambuf_iterator<charT,traits>& a,
                const istreambuf_iterator<charT,traits>& b);

template <class charT, class traits = char_traits<charT> >
class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
{
public:
    typedef charT                         char_type;
    typedef traits                        traits_type;
    typedef basic_streambuf<charT,traits> streambuf_type;
    typedef basic_ostream<charT,traits>   ostream_type;

    ostreambuf_iterator(ostream_type& s) noexcept;
    ostreambuf_iterator(streambuf_type* s) noexcept;
    ostreambuf_iterator& operator=(charT c);
    ostreambuf_iterator& operator*();
    ostreambuf_iterator& operator++();
    ostreambuf_iterator& operator++(int);
    bool failed() const noexcept;
};

template <class C> constexpr auto begin(C& c) -> decltype(c.begin());
template <class C> constexpr auto begin(const C& c) -> decltype(c.begin());
template <class C> constexpr auto end(C& c) -> decltype(c.end());
template <class C> constexpr auto end(const C& c) -> decltype(c.end());
template <class T, size_t N> constexpr T* begin(T (&array)[N]);
template <class T, size_t N> constexpr T* end(T (&array)[N]);

template <class C> auto constexpr cbegin(const C& c) -> decltype(std::begin(c));        // C++14
template <class C> auto constexpr cend(const C& c) -> decltype(std::end(c));            // C++14
template <class C> auto constexpr rbegin(C& c) -> decltype(c.rbegin());                 // C++14
template <class C> auto constexpr rbegin(const C& c) -> decltype(c.rbegin());           // C++14
template <class C> auto constexpr rend(C& c) -> decltype(c.rend());                     // C++14
template <class C> constexpr auto rend(const C& c) -> decltype(c.rend());               // C++14
template <class E> reverse_iterator<const E*> constexpr rbegin(initializer_list<E> il); // C++14
template <class E> reverse_iterator<const E*> constexpr rend(initializer_list<E> il);   // C++14
template <class T, size_t N> reverse_iterator<T*> constexpr rbegin(T (&array)[N]);      // C++14
template <class T, size_t N> reverse_iterator<T*> constexpr rend(T (&array)[N]);        // C++14
template <class C> constexpr auto crbegin(const C& c) -> decltype(std::rbegin(c));      // C++14
template <class C> constexpr auto crend(const C& c) -> decltype(std::rend(c));          // C++14

// 24.8, container access:
template <class C> constexpr auto size(const C& c) -> decltype(c.size());         // C++17
template <class T, size_t N> constexpr size_t size(const T (&array)[N]) noexcept; // C++17

template <class C> constexpr auto ssize(const C& c)
    -> common_type_t<ptrdiff_t, make_signed_t<decltype(c.size())>>;				       // C++20
template <class T, ptrdiff_t> constexpr ptrdiff_t ssize(const T (&array)[N]) noexcept; // C++20

template <class C> constexpr auto empty(const C& c) -> decltype(c.empty());       // C++17
template <class T, size_t N> constexpr bool empty(const T (&array)[N]) noexcept;  // C++17
template <class E> constexpr bool empty(initializer_list<E> il) noexcept;         // C++17
template <class C> constexpr auto data(C& c) -> decltype(c.data());               // C++17
template <class C> constexpr auto data(const C& c) -> decltype(c.data());         // C++17
template <class T, size_t N> constexpr T* data(T (&array)[N]) noexcept;           // C++17
template <class E> constexpr const E* data(initializer_list<E> il) noexcept;      // C++17

}  // std

*/




// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_FUNCTIONAL_BASE
#define _LIBCPP_FUNCTIONAL_BASE









#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_BEGIN_NAMESPACE_STD

template <class _Arg1, class _Arg2, class _Result>
struct _LIBCPP_TEMPLATE_VIS binary_function
{
    typedef _Arg1   first_argument_type;
    typedef _Arg2   second_argument_type;
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


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS less : binary_function<_Tp, _Tp, bool>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x < __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS less<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) < _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) < _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) < _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif

// __weak_result_type

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
struct __maybe_derive_from_unary_function  // bool is true
    : public __derives_from_unary_function<_Tp>::type
{
};

template <class _Tp>
struct __maybe_derive_from_unary_function<_Tp, false>
{
};

template <class _Tp, bool = __derives_from_binary_function<_Tp>::value>
struct __maybe_derive_from_binary_function  // bool is true
    : public __derives_from_binary_function<_Tp>::type
{
};

template <class _Tp>
struct __maybe_derive_from_binary_function<_Tp, false>
{
};

template <class _Tp, bool = __has_result_type<_Tp>::value>
struct __weak_result_type_imp // bool is true
    : public __maybe_derive_from_unary_function<_Tp>,
      public __maybe_derive_from_binary_function<_Tp>
{
    typedef _LIBCPP_NODEBUG_TYPE typename _Tp::result_type result_type;
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

// 0 argument case

template <class _Rp>
struct __weak_result_type<_Rp ()>
{
    typedef _LIBCPP_NODEBUG_TYPE  _Rp result_type;
};

template <class _Rp>
struct __weak_result_type<_Rp (&)()>
{
    typedef _LIBCPP_NODEBUG_TYPE  _Rp result_type;
};

template <class _Rp>
struct __weak_result_type<_Rp (*)()>
{
    typedef _LIBCPP_NODEBUG_TYPE  _Rp result_type;
};

// 1 argument case

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

// 2 argument case

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


#ifndef _LIBCPP_CXX03_LANG
// 3 or more arguments

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
    typedef decltype(__invoke(_VSTD::declval<_Tp>(), _VSTD::declval<_Args>()...)) type;
};

#else // defined(_LIBCPP_CXX03_LANG)



#endif  // !defined(_LIBCPP_CXX03_LANG)


template <class _Ret>
struct __invoke_void_return_wrapper
{
#ifndef _LIBCPP_CXX03_LANG
    template <class ..._Args>
    static _Ret __call(_Args&&... __args) {
        return __invoke(_VSTD::forward<_Args>(__args)...);
    }
#else
    template <class _Fn>
    static _Ret __call(_Fn __f) {
        return __invoke(__f);
    }

    template <class _Fn, class _A0>
    static _Ret __call(_Fn __f, _A0& __a0) {
        return __invoke(__f, __a0);
    }

    template <class _Fn, class _A0, class _A1>
    static _Ret __call(_Fn __f, _A0& __a0, _A1& __a1) {
        return __invoke(__f, __a0, __a1);
    }

    template <class _Fn, class _A0, class _A1, class _A2>
    static _Ret __call(_Fn __f, _A0& __a0, _A1& __a1, _A2& __a2){
        return __invoke(__f, __a0, __a1, __a2);
    }
#endif
};

template <>
struct __invoke_void_return_wrapper<void>
{
#ifndef _LIBCPP_CXX03_LANG
    template <class ..._Args>
    static void __call(_Args&&... __args) {
        __invoke(_VSTD::forward<_Args>(__args)...);
    }
#else
    template <class _Fn>
    static void __call(_Fn __f) {
        __invoke(__f);
    }

    template <class _Fn, class _A0>
    static void __call(_Fn __f, _A0& __a0) {
        __invoke(__f, __a0);
    }

    template <class _Fn, class _A0, class _A1>
    static void __call(_Fn __f, _A0& __a0, _A1& __a1) {
        __invoke(__f, __a0, __a1);
    }

    template <class _Fn, class _A0, class _A1, class _A2>
    static void __call(_Fn __f, _A0& __a0, _A1& __a1, _A2& __a2) {
        __invoke(__f, __a0, __a1, __a2);
    }
#endif
};

template <class _Tp>
class _LIBCPP_TEMPLATE_VIS reference_wrapper
    : public __weak_result_type<_Tp>
{
public:
    // types
    typedef _Tp type;
private:
    type* __f_;

public:
    // construct/copy/destroy
    _LIBCPP_INLINE_VISIBILITY reference_wrapper(type& __f) _NOEXCEPT
        : __f_(_VSTD::addressof(__f)) {}
#ifndef _LIBCPP_CXX03_LANG
    private: reference_wrapper(type&&); public: // = delete; // do not bind to temps
#endif

    // access
    _LIBCPP_INLINE_VISIBILITY operator type&    () const _NOEXCEPT {return *__f_;}
    _LIBCPP_INLINE_VISIBILITY          type& get() const _NOEXCEPT {return *__f_;}

#ifndef _LIBCPP_CXX03_LANG
    // invoke
    template <class... _ArgTypes>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_of<type&, _ArgTypes...>::type
    operator() (_ArgTypes&&... __args) const {
        return __invoke(get(), _VSTD::forward<_ArgTypes>(__args)...);
    }
#else

    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return<type>::type
    operator() () const {
        return __invoke(get());
    }

    template <class _A0>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return0<type, _A0>::type
    operator() (_A0& __a0) const {
        return __invoke(get(), __a0);
    }

    template <class _A0>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return0<type, _A0 const>::type
    operator() (_A0 const& __a0) const {
        return __invoke(get(), __a0);
    }

    template <class _A0, class _A1>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return1<type, _A0, _A1>::type
    operator() (_A0& __a0, _A1& __a1) const {
        return __invoke(get(), __a0, __a1);
    }

    template <class _A0, class _A1>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return1<type, _A0 const, _A1>::type
    operator() (_A0 const& __a0, _A1& __a1) const {
        return __invoke(get(), __a0, __a1);
    }

    template <class _A0, class _A1>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return1<type, _A0, _A1 const>::type
    operator() (_A0& __a0, _A1 const& __a1) const {
        return __invoke(get(), __a0, __a1);
    }

    template <class _A0, class _A1>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return1<type, _A0 const, _A1 const>::type
    operator() (_A0 const& __a0, _A1 const& __a1) const {
        return __invoke(get(), __a0, __a1);
    }

    template <class _A0, class _A1, class _A2>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return2<type, _A0, _A1, _A2>::type
    operator() (_A0& __a0, _A1& __a1, _A2& __a2) const {
        return __invoke(get(), __a0, __a1, __a2);
    }

    template <class _A0, class _A1, class _A2>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return2<type, _A0 const, _A1, _A2>::type
    operator() (_A0 const& __a0, _A1& __a1, _A2& __a2) const {
        return __invoke(get(), __a0, __a1, __a2);
    }

    template <class _A0, class _A1, class _A2>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return2<type, _A0, _A1 const, _A2>::type
    operator() (_A0& __a0, _A1 const& __a1, _A2& __a2) const {
        return __invoke(get(), __a0, __a1, __a2);
    }

    template <class _A0, class _A1, class _A2>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return2<type, _A0, _A1, _A2 const>::type
    operator() (_A0& __a0, _A1& __a1, _A2 const& __a2) const {
        return __invoke(get(), __a0, __a1, __a2);
    }

    template <class _A0, class _A1, class _A2>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return2<type, _A0 const, _A1 const, _A2>::type
    operator() (_A0 const& __a0, _A1 const& __a1, _A2& __a2) const {
        return __invoke(get(), __a0, __a1, __a2);
    }

    template <class _A0, class _A1, class _A2>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return2<type, _A0 const, _A1, _A2 const>::type
    operator() (_A0 const& __a0, _A1& __a1, _A2 const& __a2) const {
        return __invoke(get(), __a0, __a1, __a2);
    }

    template <class _A0, class _A1, class _A2>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return2<type, _A0, _A1 const, _A2 const>::type
    operator() (_A0& __a0, _A1 const& __a1, _A2 const& __a2) const {
        return __invoke(get(), __a0, __a1, __a2);
    }

    template <class _A0, class _A1, class _A2>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return2<type, _A0 const, _A1 const, _A2 const>::type
    operator() (_A0 const& __a0, _A1 const& __a1, _A2 const& __a2) const {
        return __invoke(get(), __a0, __a1, __a2);
    }
#endif // _LIBCPP_CXX03_LANG
};


template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
reference_wrapper<_Tp>
ref(_Tp& __t) _NOEXCEPT
{
    return reference_wrapper<_Tp>(__t);
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
reference_wrapper<_Tp>
ref(reference_wrapper<_Tp> __t) _NOEXCEPT
{
    return ref(__t.get());
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
reference_wrapper<const _Tp>
cref(const _Tp& __t) _NOEXCEPT
{
    return reference_wrapper<const _Tp>(__t);
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
reference_wrapper<const _Tp>
cref(reference_wrapper<_Tp> __t) _NOEXCEPT
{
    return cref(__t.get());
}

#ifndef _LIBCPP_CXX03_LANG
template <class _Tp> void ref(const _Tp&&) = delete;
template <class _Tp> void cref(const _Tp&&) = delete;
#endif


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, class, class = void>
struct __is_transparent : false_type {};

template <class _Tp, class _Up>
struct __is_transparent<_Tp, _Up,
                        typename __void_t<typename _Tp::is_transparent>::type>
   : true_type {};
#endif

// allocator_arg_t

struct _LIBCPP_TEMPLATE_VIS allocator_arg_t { explicit allocator_arg_t() = default; };


#if 1 /* evaluated by -frewrite-includes */
extern _LIBCPP_EXPORTED_FROM_ABI const allocator_arg_t allocator_arg;
#else
/* _LIBCPP_INLINE_VAR */ constexpr allocator_arg_t allocator_arg = allocator_arg_t();
#endif

// uses_allocator

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
struct _LIBCPP_TEMPLATE_VIS uses_allocator
    : public __uses_allocator<_Tp, _Alloc>
{
};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, class _Alloc>
_LIBCPP_INLINE_VAR constexpr size_t uses_allocator_v = uses_allocator<_Tp, _Alloc>::value;
#endif

#ifndef _LIBCPP_CXX03_LANG

// allocator construction

template <class _Tp, class _Alloc, class ..._Args>
struct __uses_alloc_ctor_imp
{
    typedef _LIBCPP_NODEBUG_TYPE typename __uncvref<_Alloc>::type _RawAlloc;
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
inline _LIBCPP_INLINE_VISIBILITY
void __user_alloc_construct_impl (integral_constant<int, 0>, _Tp *__storage, const _Allocator &, _Args &&... __args )
{
    new (__storage) _Tp (_VSTD::forward<_Args>(__args)...);
}

// FIXME: This should have a version which takes a non-const alloc.
template <class _Tp, class _Allocator, class... _Args>
inline _LIBCPP_INLINE_VISIBILITY
void __user_alloc_construct_impl (integral_constant<int, 1>, _Tp *__storage, const _Allocator &__a, _Args &&... __args )
{
    new (__storage) _Tp (allocator_arg, __a, _VSTD::forward<_Args>(__args)...);
}

// FIXME: This should have a version which takes a non-const alloc.
template <class _Tp, class _Allocator, class... _Args>
inline _LIBCPP_INLINE_VISIBILITY
void __user_alloc_construct_impl (integral_constant<int, 2>, _Tp *__storage, const _Allocator &__a, _Args &&... __args )
{
    new (__storage) _Tp (_VSTD::forward<_Args>(__args)..., __a);
}

#endif  // _LIBCPP_CXX03_LANG

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_FUNCTIONAL_BASE




#ifdef __APPLE__

#endif




#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_BEGIN_NAMESPACE_STD

struct _LIBCPP_TEMPLATE_VIS input_iterator_tag {};
struct _LIBCPP_TEMPLATE_VIS output_iterator_tag {};
struct _LIBCPP_TEMPLATE_VIS forward_iterator_tag       : public input_iterator_tag {};
struct _LIBCPP_TEMPLATE_VIS bidirectional_iterator_tag : public forward_iterator_tag {};
struct _LIBCPP_TEMPLATE_VIS random_access_iterator_tag : public bidirectional_iterator_tag {};

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
    typedef typename _Iter::difference_type   difference_type;
    typedef typename _Iter::value_type        value_type;
    typedef typename _Iter::pointer           pointer;
    typedef typename _Iter::reference         reference;
    typedef typename _Iter::iterator_category iterator_category;
};

template <class _Iter, bool> struct __iterator_traits {};

template <class _Iter>
struct __iterator_traits<_Iter, true>
    :  __iterator_traits_impl
      <
        _Iter,
        is_convertible<typename _Iter::iterator_category, input_iterator_tag>::value ||
        is_convertible<typename _Iter::iterator_category, output_iterator_tag>::value
      >
{};

// iterator_traits<Iterator> will only have the nested types if Iterator::iterator_category
//    exists.  Else iterator_traits<Iterator> will be an empty class.  This is a
//    conforming extension which allows some programs to compile and behave as
//    the client expects instead of failing at compile time.

template <class _Iter>
struct _LIBCPP_TEMPLATE_VIS iterator_traits
    : __iterator_traits<_Iter, __has_iterator_typedefs<_Iter>::value> {};

template<class _Tp>
struct _LIBCPP_TEMPLATE_VIS iterator_traits<_Tp*>
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

#ifndef _LIBCPP_HAS_NO_DEDUCTION_GUIDES
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
#endif

template<class _Category, class _Tp, class _Distance = ptrdiff_t,
         class _Pointer = _Tp*, class _Reference = _Tp&>
struct _LIBCPP_TEMPLATE_VIS iterator
{
    typedef _Tp        value_type;
    typedef _Distance  difference_type;
    typedef _Pointer   pointer;
    typedef _Reference reference;
    typedef _Category  iterator_category;
};

template <class _InputIter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
void __advance(_InputIter& __i,
             typename iterator_traits<_InputIter>::difference_type __n, input_iterator_tag)
{
    for (; __n > 0; --__n)
        ++__i;
}

template <class _BiDirIter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
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
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
void __advance(_RandIter& __i,
             typename iterator_traits<_RandIter>::difference_type __n, random_access_iterator_tag)
{
   __i += __n;
}

template <class _InputIter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
void advance(_InputIter& __i,
             typename iterator_traits<_InputIter>::difference_type __n)
{
    _LIBCPP_ASSERT(__n >= 0 || __is_bidirectional_iterator<_InputIter>::value,
                       "Attempt to advance(it, -n) on a non-bidi iterator");
    __advance(__i, __n, typename iterator_traits<_InputIter>::iterator_category());
}

template <class _InputIter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
typename iterator_traits<_InputIter>::difference_type
__distance(_InputIter __first, _InputIter __last, input_iterator_tag)
{
    typename iterator_traits<_InputIter>::difference_type __r(0);
    for (; __first != __last; ++__first)
        ++__r;
    return __r;
}

template <class _RandIter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
typename iterator_traits<_RandIter>::difference_type
__distance(_RandIter __first, _RandIter __last, random_access_iterator_tag)
{
    return __last - __first;
}

template <class _InputIter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
typename iterator_traits<_InputIter>::difference_type
distance(_InputIter __first, _InputIter __last)
{
    return __distance(__first, __last, typename iterator_traits<_InputIter>::iterator_category());
}

template <class _InputIter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
typename enable_if
<
    __is_input_iterator<_InputIter>::value,
    _InputIter
>::type
next(_InputIter __x,
     typename iterator_traits<_InputIter>::difference_type __n = 1)
{
    _LIBCPP_ASSERT(__n >= 0 || __is_bidirectional_iterator<_InputIter>::value,
                       "Attempt to next(it, -n) on a non-bidi iterator");

    _VSTD::advance(__x, __n);
    return __x;
}

template <class _InputIter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
typename enable_if
<
    __is_input_iterator<_InputIter>::value,
    _InputIter
>::type
prev(_InputIter __x,
     typename iterator_traits<_InputIter>::difference_type __n = 1)
{
    _LIBCPP_ASSERT(__n <= 0 || __is_bidirectional_iterator<_InputIter>::value,
                       "Attempt to prev(it, +n) on a non-bidi iterator");
    _VSTD::advance(__x, -__n);
    return __x;
}


template <class _Tp, class = void>
struct __is_stashing_iterator : false_type {};

template <class _Tp>
struct __is_stashing_iterator<_Tp, typename __void_t<typename _Tp::__stashing_iterator_tag>::type>
  : true_type {};

template <class _Iter>
class _LIBCPP_TEMPLATE_VIS reverse_iterator
    : public iterator<typename iterator_traits<_Iter>::iterator_category,
                      typename iterator_traits<_Iter>::value_type,
                      typename iterator_traits<_Iter>::difference_type,
                      typename iterator_traits<_Iter>::pointer,
                      typename iterator_traits<_Iter>::reference>
{
private:
    /*mutable*/ _Iter __t;  // no longer used as of LWG #2360, not removed due to ABI break

    static_assert(!__is_stashing_iterator<_Iter>::value,
      "The specified iterator type cannot be used with reverse_iterator; "
      "Using stashing iterators with reverse_iterator causes undefined behavior");

protected:
    _Iter current;
public:
    typedef _Iter                                            iterator_type;
    typedef typename iterator_traits<_Iter>::difference_type difference_type;
    typedef typename iterator_traits<_Iter>::reference       reference;
    typedef typename iterator_traits<_Iter>::pointer         pointer;

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reverse_iterator() : __t(), current() {}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    explicit reverse_iterator(_Iter __x) : __t(__x), current(__x) {}
    template <class _Up>
        _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
        reverse_iterator(const reverse_iterator<_Up>& __u) : __t(__u.base()), current(__u.base()) {}
    template <class _Up>
        _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
        reverse_iterator& operator=(const reverse_iterator<_Up>& __u)
            { __t = current = __u.base(); return *this; }
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    _Iter base() const {return current;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reference operator*() const {_Iter __tmp = current; return *--__tmp;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    pointer  operator->() const {return _VSTD::addressof(operator*());}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reverse_iterator& operator++() {--current; return *this;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reverse_iterator  operator++(int) {reverse_iterator __tmp(*this); --current; return __tmp;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reverse_iterator& operator--() {++current; return *this;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reverse_iterator  operator--(int) {reverse_iterator __tmp(*this); ++current; return __tmp;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reverse_iterator  operator+ (difference_type __n) const {return reverse_iterator(current - __n);}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reverse_iterator& operator+=(difference_type __n) {current -= __n; return *this;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reverse_iterator  operator- (difference_type __n) const {return reverse_iterator(current + __n);}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reverse_iterator& operator-=(difference_type __n) {current += __n; return *this;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reference         operator[](difference_type __n) const {return *(*this + __n);}
};

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
bool
operator==(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __x.base() == __y.base();
}

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
bool
operator<(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __x.base() > __y.base();
}

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
bool
operator!=(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __x.base() != __y.base();
}

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
bool
operator>(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __x.base() < __y.base();
}

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
bool
operator>=(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __x.base() <= __y.base();
}

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
bool
operator<=(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __x.base() >= __y.base();
}

#ifndef _LIBCPP_CXX03_LANG
template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
auto
operator-(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
-> decltype(__y.base() - __x.base())
{
    return __y.base() - __x.base();
}
#else
template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY
typename reverse_iterator<_Iter1>::difference_type
operator-(const reverse_iterator<_Iter1>& __x, const reverse_iterator<_Iter2>& __y)
{
    return __y.base() - __x.base();
}
#endif

template <class _Iter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
reverse_iterator<_Iter>
operator+(typename reverse_iterator<_Iter>::difference_type __n, const reverse_iterator<_Iter>& __x)
{
    return reverse_iterator<_Iter>(__x.base() - __n);
}


#if 1 /* evaluated by -frewrite-includes */
template <class _Iter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
reverse_iterator<_Iter> make_reverse_iterator(_Iter __i)
{
    return reverse_iterator<_Iter>(__i);
}
#endif

template <class _Container>
class _LIBCPP_TEMPLATE_VIS back_insert_iterator
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

    _LIBCPP_INLINE_VISIBILITY explicit back_insert_iterator(_Container& __x) : container(_VSTD::addressof(__x)) {}
    _LIBCPP_INLINE_VISIBILITY back_insert_iterator& operator=(const typename _Container::value_type& __value_)
        {container->push_back(__value_); return *this;}
#ifndef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY back_insert_iterator& operator=(typename _Container::value_type&& __value_)
        {container->push_back(_VSTD::move(__value_)); return *this;}
#endif  // _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY back_insert_iterator& operator*()     {return *this;}
    _LIBCPP_INLINE_VISIBILITY back_insert_iterator& operator++()    {return *this;}
    _LIBCPP_INLINE_VISIBILITY back_insert_iterator  operator++(int) {return *this;}
};

template <class _Container>
inline _LIBCPP_INLINE_VISIBILITY
back_insert_iterator<_Container>
back_inserter(_Container& __x)
{
    return back_insert_iterator<_Container>(__x);
}

template <class _Container>
class _LIBCPP_TEMPLATE_VIS front_insert_iterator
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

    _LIBCPP_INLINE_VISIBILITY explicit front_insert_iterator(_Container& __x) : container(_VSTD::addressof(__x)) {}
    _LIBCPP_INLINE_VISIBILITY front_insert_iterator& operator=(const typename _Container::value_type& __value_)
        {container->push_front(__value_); return *this;}
#ifndef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY front_insert_iterator& operator=(typename _Container::value_type&& __value_)
        {container->push_front(_VSTD::move(__value_)); return *this;}
#endif  // _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY front_insert_iterator& operator*()     {return *this;}
    _LIBCPP_INLINE_VISIBILITY front_insert_iterator& operator++()    {return *this;}
    _LIBCPP_INLINE_VISIBILITY front_insert_iterator  operator++(int) {return *this;}
};

template <class _Container>
inline _LIBCPP_INLINE_VISIBILITY
front_insert_iterator<_Container>
front_inserter(_Container& __x)
{
    return front_insert_iterator<_Container>(__x);
}

template <class _Container>
class _LIBCPP_TEMPLATE_VIS insert_iterator
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

    _LIBCPP_INLINE_VISIBILITY insert_iterator(_Container& __x, typename _Container::iterator __i)
        : container(_VSTD::addressof(__x)), iter(__i) {}
    _LIBCPP_INLINE_VISIBILITY insert_iterator& operator=(const typename _Container::value_type& __value_)
        {iter = container->insert(iter, __value_); ++iter; return *this;}
#ifndef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY insert_iterator& operator=(typename _Container::value_type&& __value_)
        {iter = container->insert(iter, _VSTD::move(__value_)); ++iter; return *this;}
#endif  // _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY insert_iterator& operator*()        {return *this;}
    _LIBCPP_INLINE_VISIBILITY insert_iterator& operator++()       {return *this;}
    _LIBCPP_INLINE_VISIBILITY insert_iterator& operator++(int)    {return *this;}
};

template <class _Container>
inline _LIBCPP_INLINE_VISIBILITY
insert_iterator<_Container>
inserter(_Container& __x, typename _Container::iterator __i)
{
    return insert_iterator<_Container>(__x, __i);
}

template <class _Tp, class _CharT = char,
          class _Traits = char_traits<_CharT>, class _Distance = ptrdiff_t>
class _LIBCPP_TEMPLATE_VIS istream_iterator
    : public iterator<input_iterator_tag, _Tp, _Distance, const _Tp*, const _Tp&>
{
public:
    typedef _CharT char_type;
    typedef _Traits traits_type;
    typedef basic_istream<_CharT,_Traits> istream_type;
private:
    istream_type* __in_stream_;
    _Tp __value_;
public:
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR istream_iterator() : __in_stream_(0), __value_() {}
    _LIBCPP_INLINE_VISIBILITY istream_iterator(istream_type& __s) : __in_stream_(_VSTD::addressof(__s))
        {
            if (!(*__in_stream_ >> __value_))
                __in_stream_ = 0;
        }

    _LIBCPP_INLINE_VISIBILITY const _Tp& operator*() const {return __value_;}
    _LIBCPP_INLINE_VISIBILITY const _Tp* operator->() const {return _VSTD::addressof((operator*()));}
    _LIBCPP_INLINE_VISIBILITY istream_iterator& operator++()
        {
            if (!(*__in_stream_ >> __value_))
                __in_stream_ = 0;
            return *this;
        }
    _LIBCPP_INLINE_VISIBILITY istream_iterator  operator++(int)
        {istream_iterator __t(*this); ++(*this); return __t;}

    template <class _Up, class _CharU, class _TraitsU, class _DistanceU>
    friend _LIBCPP_INLINE_VISIBILITY
    bool
    operator==(const istream_iterator<_Up, _CharU, _TraitsU, _DistanceU>& __x,
               const istream_iterator<_Up, _CharU, _TraitsU, _DistanceU>& __y);

    template <class _Up, class _CharU, class _TraitsU, class _DistanceU>
    friend _LIBCPP_INLINE_VISIBILITY
    bool
    operator==(const istream_iterator<_Up, _CharU, _TraitsU, _DistanceU>& __x,
               const istream_iterator<_Up, _CharU, _TraitsU, _DistanceU>& __y);
};

template <class _Tp, class _CharT, class _Traits, class _Distance>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator==(const istream_iterator<_Tp, _CharT, _Traits, _Distance>& __x,
           const istream_iterator<_Tp, _CharT, _Traits, _Distance>& __y)
{
    return __x.__in_stream_ == __y.__in_stream_;
}

template <class _Tp, class _CharT, class _Traits, class _Distance>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator!=(const istream_iterator<_Tp, _CharT, _Traits, _Distance>& __x,
           const istream_iterator<_Tp, _CharT, _Traits, _Distance>& __y)
{
    return !(__x == __y);
}

template <class _Tp, class _CharT = char, class _Traits = char_traits<_CharT> >
class _LIBCPP_TEMPLATE_VIS ostream_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
{
public:
    typedef _CharT char_type;
    typedef _Traits traits_type;
    typedef basic_ostream<_CharT,_Traits> ostream_type;
private:
    ostream_type* __out_stream_;
    const char_type* __delim_;
public:
    _LIBCPP_INLINE_VISIBILITY ostream_iterator(ostream_type& __s) _NOEXCEPT
        : __out_stream_(_VSTD::addressof(__s)), __delim_(0) {}
    _LIBCPP_INLINE_VISIBILITY ostream_iterator(ostream_type& __s, const _CharT* __delimiter) _NOEXCEPT
        : __out_stream_(_VSTD::addressof(__s)), __delim_(__delimiter) {}
    _LIBCPP_INLINE_VISIBILITY ostream_iterator& operator=(const _Tp& __value_)
        {
            *__out_stream_ << __value_;
            if (__delim_)
                *__out_stream_ << __delim_;
            return *this;
        }

    _LIBCPP_INLINE_VISIBILITY ostream_iterator& operator*()     {return *this;}
    _LIBCPP_INLINE_VISIBILITY ostream_iterator& operator++()    {return *this;}
    _LIBCPP_INLINE_VISIBILITY ostream_iterator& operator++(int) {return *this;}
};

template<class _CharT, class _Traits>
class _LIBCPP_TEMPLATE_VIS istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT,
                      typename _Traits::off_type, _CharT*,
                      _CharT>
{
public:
    typedef _CharT                          char_type;
    typedef _Traits                         traits_type;
    typedef typename _Traits::int_type      int_type;
    typedef basic_streambuf<_CharT,_Traits> streambuf_type;
    typedef basic_istream<_CharT,_Traits>   istream_type;
private:
    mutable streambuf_type* __sbuf_;

    class __proxy
    {
        char_type __keep_;
        streambuf_type* __sbuf_;
        _LIBCPP_INLINE_VISIBILITY __proxy(char_type __c, streambuf_type* __s)
            : __keep_(__c), __sbuf_(__s) {}
        friend class istreambuf_iterator;
    public:
        _LIBCPP_INLINE_VISIBILITY char_type operator*() const {return __keep_;}
    };

    _LIBCPP_INLINE_VISIBILITY
    bool __test_for_eof() const
    {
        if (__sbuf_ && traits_type::eq_int_type(__sbuf_->sgetc(), traits_type::eof()))
            __sbuf_ = 0;
        return __sbuf_ == 0;
    }
public:
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR istreambuf_iterator() _NOEXCEPT : __sbuf_(0) {}
    _LIBCPP_INLINE_VISIBILITY istreambuf_iterator(istream_type& __s) _NOEXCEPT
        : __sbuf_(__s.rdbuf()) {}
    _LIBCPP_INLINE_VISIBILITY istreambuf_iterator(streambuf_type* __s) _NOEXCEPT
        : __sbuf_(__s) {}
    _LIBCPP_INLINE_VISIBILITY istreambuf_iterator(const __proxy& __p) _NOEXCEPT
        : __sbuf_(__p.__sbuf_) {}

    _LIBCPP_INLINE_VISIBILITY char_type  operator*() const
        {return static_cast<char_type>(__sbuf_->sgetc());}
    _LIBCPP_INLINE_VISIBILITY istreambuf_iterator& operator++()
        {
            __sbuf_->sbumpc();
            return *this;
        }
    _LIBCPP_INLINE_VISIBILITY __proxy              operator++(int)
        {
            return __proxy(__sbuf_->sbumpc(), __sbuf_);
        }

    _LIBCPP_INLINE_VISIBILITY bool equal(const istreambuf_iterator& __b) const
        {return __test_for_eof() == __b.__test_for_eof();}
};

template <class _CharT, class _Traits>
inline _LIBCPP_INLINE_VISIBILITY
bool operator==(const istreambuf_iterator<_CharT,_Traits>& __a,
                const istreambuf_iterator<_CharT,_Traits>& __b)
                {return __a.equal(__b);}

template <class _CharT, class _Traits>
inline _LIBCPP_INLINE_VISIBILITY
bool operator!=(const istreambuf_iterator<_CharT,_Traits>& __a,
                const istreambuf_iterator<_CharT,_Traits>& __b)
                {return !__a.equal(__b);}

template <class _CharT, class _Traits>
class _LIBCPP_TEMPLATE_VIS ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
{
public:
    typedef _CharT                          char_type;
    typedef _Traits                         traits_type;
    typedef basic_streambuf<_CharT,_Traits> streambuf_type;
    typedef basic_ostream<_CharT,_Traits>   ostream_type;
private:
    streambuf_type* __sbuf_;
public:
    _LIBCPP_INLINE_VISIBILITY ostreambuf_iterator(ostream_type& __s) _NOEXCEPT
        : __sbuf_(__s.rdbuf()) {}
    _LIBCPP_INLINE_VISIBILITY ostreambuf_iterator(streambuf_type* __s) _NOEXCEPT
        : __sbuf_(__s) {}
    _LIBCPP_INLINE_VISIBILITY ostreambuf_iterator& operator=(_CharT __c)
        {
            if (__sbuf_ && traits_type::eq_int_type(__sbuf_->sputc(__c), traits_type::eof()))
                __sbuf_ = 0;
            return *this;
        }
    _LIBCPP_INLINE_VISIBILITY ostreambuf_iterator& operator*()     {return *this;}
    _LIBCPP_INLINE_VISIBILITY ostreambuf_iterator& operator++()    {return *this;}
    _LIBCPP_INLINE_VISIBILITY ostreambuf_iterator& operator++(int) {return *this;}
    _LIBCPP_INLINE_VISIBILITY bool failed() const _NOEXCEPT {return __sbuf_ == 0;}

    template <class _Ch, class _Tr>
    friend
    _LIBCPP_HIDDEN
    ostreambuf_iterator<_Ch, _Tr>
    __pad_and_output(ostreambuf_iterator<_Ch, _Tr> __s,
                     const _Ch* __ob, const _Ch* __op, const _Ch* __oe,
                     ios_base& __iob, _Ch __fl);
};

template <class _Iter>
class _LIBCPP_TEMPLATE_VIS move_iterator
{
private:
    _Iter __i;
public:
    typedef _Iter                                            iterator_type;
    typedef typename iterator_traits<iterator_type>::iterator_category iterator_category;
    typedef typename iterator_traits<iterator_type>::value_type value_type;
    typedef typename iterator_traits<iterator_type>::difference_type difference_type;
    typedef iterator_type pointer;
#ifndef _LIBCPP_CXX03_LANG
    typedef typename iterator_traits<iterator_type>::reference __reference;
    typedef typename conditional<
            is_reference<__reference>::value,
            typename remove_reference<__reference>::type&&,
            __reference
        >::type reference;
#else
    typedef typename iterator_traits<iterator_type>::reference reference;
#endif

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    move_iterator() : __i() {}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    explicit move_iterator(_Iter __x) : __i(__x) {}
    template <class _Up>
      _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
      move_iterator(const move_iterator<_Up>& __u) : __i(__u.base()) {}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14 _Iter base() const {return __i;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reference operator*() const { return static_cast<reference>(*__i); }
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    pointer  operator->() const { return __i;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    move_iterator& operator++() {++__i; return *this;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    move_iterator  operator++(int) {move_iterator __tmp(*this); ++__i; return __tmp;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    move_iterator& operator--() {--__i; return *this;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    move_iterator  operator--(int) {move_iterator __tmp(*this); --__i; return __tmp;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    move_iterator  operator+ (difference_type __n) const {return move_iterator(__i + __n);}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    move_iterator& operator+=(difference_type __n) {__i += __n; return *this;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    move_iterator  operator- (difference_type __n) const {return move_iterator(__i - __n);}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    move_iterator& operator-=(difference_type __n) {__i -= __n; return *this;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
    reference operator[](difference_type __n) const { return static_cast<reference>(__i[__n]); }
};

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
bool
operator==(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
{
    return __x.base() == __y.base();
}

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
bool
operator<(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
{
    return __x.base() < __y.base();
}

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
bool
operator!=(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
{
    return __x.base() != __y.base();
}

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
bool
operator>(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
{
    return __x.base() > __y.base();
}

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
bool
operator>=(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
{
    return __x.base() >= __y.base();
}

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
bool
operator<=(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
{
    return __x.base() <= __y.base();
}

#ifndef _LIBCPP_CXX03_LANG
template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
auto
operator-(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
-> decltype(__x.base() - __y.base())
{
    return __x.base() - __y.base();
}
#else
template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY
typename move_iterator<_Iter1>::difference_type
operator-(const move_iterator<_Iter1>& __x, const move_iterator<_Iter2>& __y)
{
    return __x.base() - __y.base();
}
#endif

template <class _Iter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
move_iterator<_Iter>
operator+(typename move_iterator<_Iter>::difference_type __n, const move_iterator<_Iter>& __x)
{
    return move_iterator<_Iter>(__x.base() + __n);
}

template <class _Iter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
move_iterator<_Iter>
make_move_iterator(_Iter __i)
{
    return move_iterator<_Iter>(__i);
}

// __wrap_iter

template <class _Iter> class __wrap_iter;

template <class _Iter1, class _Iter2>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
bool
operator==(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;

template <class _Iter1, class _Iter2>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
bool
operator<(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;

template <class _Iter1, class _Iter2>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
bool
operator!=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;

template <class _Iter1, class _Iter2>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
bool
operator>(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;

template <class _Iter1, class _Iter2>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
bool
operator>=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;

template <class _Iter1, class _Iter2>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
bool
operator<=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;

#ifndef _LIBCPP_CXX03_LANG
template <class _Iter1, class _Iter2>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
auto
operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
-> decltype(__x.base() - __y.base());
#else
template <class _Iter1, class _Iter2>
_LIBCPP_INLINE_VISIBILITY
typename __wrap_iter<_Iter1>::difference_type
operator-(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;
#endif

template <class _Iter>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
__wrap_iter<_Iter>
operator+(typename __wrap_iter<_Iter>::difference_type, __wrap_iter<_Iter>) _NOEXCEPT;

template <class _Ip, class _Op> _Op _LIBCPP_INLINE_VISIBILITY copy(_Ip, _Ip, _Op);
template <class _B1, class _B2> _B2 _LIBCPP_INLINE_VISIBILITY copy_backward(_B1, _B1, _B2);
template <class _Ip, class _Op> _Op _LIBCPP_INLINE_VISIBILITY move(_Ip, _Ip, _Op);
template <class _B1, class _B2> _B2 _LIBCPP_INLINE_VISIBILITY move_backward(_B1, _B1, _B2);

#if 1 /* evaluated by -frewrite-includes */

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
typename enable_if
<
    is_trivially_copy_assignable<_Tp>::value,
    _Tp*
>::type
__unwrap_iter(__wrap_iter<_Tp*>);
#endif

template <class _Iter>
class __wrap_iter
{
public:
    typedef _Iter                                                      iterator_type;
    typedef typename iterator_traits<iterator_type>::iterator_category iterator_category;
    typedef typename iterator_traits<iterator_type>::value_type        value_type;
    typedef typename iterator_traits<iterator_type>::difference_type   difference_type;
    typedef typename iterator_traits<iterator_type>::pointer           pointer;
    typedef typename iterator_traits<iterator_type>::reference         reference;
private:
    iterator_type __i;
public:
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG __wrap_iter() _NOEXCEPT

#if 1 /* evaluated by -frewrite-includes */
                : __i{}
#endif
    {

#if 0 /* evaluated by -frewrite-includes */
        __get_db()->__insert_i(this);
#endif
    }
    template <class _Up> _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
        __wrap_iter(const __wrap_iter<_Up>& __u,
            typename enable_if<is_convertible<_Up, iterator_type>::value>::type* = 0) _NOEXCEPT
            : __i(__u.base())
    {
    }
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG reference operator*() const _NOEXCEPT
    {
        return *__i;
    }
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG pointer  operator->() const _NOEXCEPT
    {
        return (pointer)_VSTD::addressof(*__i);
    }
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG __wrap_iter& operator++() _NOEXCEPT
    {
        ++__i;
        return *this;
    }
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG __wrap_iter  operator++(int) _NOEXCEPT
        {__wrap_iter __tmp(*this); ++(*this); return __tmp;}

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG __wrap_iter& operator--() _NOEXCEPT
    {

#if 0 /* evaluated by -frewrite-includes */
        _LIBCPP_ASSERT(__get_const_db()->__decrementable(this),
                       "Attempted to decrement non-decrementable iterator");
#endif
        --__i;
        return *this;
    }
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG __wrap_iter  operator--(int) _NOEXCEPT
        {__wrap_iter __tmp(*this); --(*this); return __tmp;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG __wrap_iter  operator+ (difference_type __n) const _NOEXCEPT
        {__wrap_iter __w(*this); __w += __n; return __w;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG __wrap_iter& operator+=(difference_type __n) _NOEXCEPT
    {

#if 0 /* evaluated by -frewrite-includes */
        _LIBCPP_ASSERT(__get_const_db()->__addable(this, __n),
                   "Attempted to add/subtract iterator outside of valid range");
#endif
        __i += __n;
        return *this;
    }
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG __wrap_iter  operator- (difference_type __n) const _NOEXCEPT
        {return *this + (-__n);}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG __wrap_iter& operator-=(difference_type __n) _NOEXCEPT
        {*this += -__n; return *this;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG reference    operator[](difference_type __n) const _NOEXCEPT
    {

#if 0 /* evaluated by -frewrite-includes */
        _LIBCPP_ASSERT(__get_const_db()->__subscriptable(this, __n),
                   "Attempted to subscript iterator outside of valid range");
#endif
        return __i[__n];
    }

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG iterator_type base() const _NOEXCEPT {return __i;}

private:

#if 0 /* evaluated by -frewrite-includes */
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG __wrap_iter(const void* __p, iterator_type __x) : __i(__x)
    {
        __get_db()->__insert_ic(this, __p);
    }
#else
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG __wrap_iter(iterator_type __x) _NOEXCEPT : __i(__x) {}
#endif

    template <class _Up> friend class __wrap_iter;
    template <class _CharT, class _Traits, class _Alloc> friend class basic_string;
    template <class _Tp, class _Alloc> friend class _LIBCPP_TEMPLATE_VIS vector;
    template <class _Tp, size_t> friend class _LIBCPP_TEMPLATE_VIS span;

    template <class _Iter1, class _Iter2>
    _LIBCPP_CONSTEXPR_IF_NODEBUG friend
    bool
    operator==(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;

    template <class _Iter1, class _Iter2>
    _LIBCPP_CONSTEXPR_IF_NODEBUG friend
    bool
    operator<(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;

    template <class _Iter1, class _Iter2>
    _LIBCPP_CONSTEXPR_IF_NODEBUG friend
    bool
    operator!=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;

    template <class _Iter1, class _Iter2>
    _LIBCPP_CONSTEXPR_IF_NODEBUG friend
    bool
    operator>(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;

    template <class _Iter1, class _Iter2>
    _LIBCPP_CONSTEXPR_IF_NODEBUG friend
    bool
    operator>=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;

    template <class _Iter1, class _Iter2>
    _LIBCPP_CONSTEXPR_IF_NODEBUG friend
    bool
    operator<=(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;

#ifndef _LIBCPP_CXX03_LANG
    template <class _Iter1, class _Iter2>
    _LIBCPP_CONSTEXPR_IF_NODEBUG friend
    auto
    operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
    -> decltype(__x.base() - __y.base());
#else
    template <class _Iter1, class _Iter2>
    _LIBCPP_CONSTEXPR_IF_NODEBUG friend
    typename __wrap_iter<_Iter1>::difference_type
    operator-(const __wrap_iter<_Iter1>&, const __wrap_iter<_Iter2>&) _NOEXCEPT;
#endif

    template <class _Iter1>
    _LIBCPP_CONSTEXPR_IF_NODEBUG friend
    __wrap_iter<_Iter1>
    operator+(typename __wrap_iter<_Iter1>::difference_type, __wrap_iter<_Iter1>) _NOEXCEPT;

    template <class _Ip, class _Op> friend _Op copy(_Ip, _Ip, _Op);
    template <class _B1, class _B2> friend _B2 copy_backward(_B1, _B1, _B2);
    template <class _Ip, class _Op> friend _Op move(_Ip, _Ip, _Op);
    template <class _B1, class _B2> friend _B2 move_backward(_B1, _B1, _B2);


#if 1 /* evaluated by -frewrite-includes */
    template <class _Tp>
    _LIBCPP_CONSTEXPR_IF_NODEBUG friend
    typename enable_if
    <
        is_trivially_copy_assignable<_Tp>::value,
        _Tp*
    >::type
    __unwrap_iter(__wrap_iter<_Tp*>);
#else
  template <class _Tp>
  inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
  typename enable_if
  <
      is_trivially_copy_assignable<_Tp>::value,
      __wrap_iter<_Tp*>
  >::type
  __unwrap_iter(__wrap_iter<_Tp*> __i);
#endif
};

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
bool
operator==(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
{
    return __x.base() == __y.base();
}

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
bool
operator<(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
{

#if 0 /* evaluated by -frewrite-includes */
    _LIBCPP_ASSERT(__get_const_db()->__less_than_comparable(&__x, &__y),
                   "Attempted to compare incomparable iterators");
#endif
    return __x.base() < __y.base();
}

template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
bool
operator!=(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
{
    return !(__x == __y);
}

#ifndef _LIBCPP_CXX03_LANG
template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
auto
operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
-> decltype(__x.base() - __y.base())
{

#if 0 /* evaluated by -frewrite-includes */
    _LIBCPP_ASSERT(__get_const_db()->__less_than_comparable(&__x, &__y),
                   "Attempted to subtract incompatible iterators");
#endif
    return __x.base() - __y.base();
}
#else
template <class _Iter1, class _Iter2>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
typename __wrap_iter<_Iter1>::difference_type
operator-(const __wrap_iter<_Iter1>& __x, const __wrap_iter<_Iter2>& __y) _NOEXCEPT
{

#if 0 /* evaluated by -frewrite-includes */
    _LIBCPP_ASSERT(__get_const_db()->__less_than_comparable(&__x, &__y),
                   "Attempted to subtract incompatible iterators");
#endif
    return __x.base() - __y.base();
}
#endif

template <class _Iter>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
__wrap_iter<_Iter>
operator+(typename __wrap_iter<_Iter>::difference_type __n,
          __wrap_iter<_Iter> __x) _NOEXCEPT
{
    __x += __n;
    return __x;
}

template <class _Iter>
struct __libcpp_is_trivial_iterator
    : public _LIBCPP_BOOL_CONSTANT(is_pointer<_Iter>::value) {};

template <class _Iter>
struct __libcpp_is_trivial_iterator<move_iterator<_Iter> >
    : public _LIBCPP_BOOL_CONSTANT(__libcpp_is_trivial_iterator<_Iter>::value) {};

template <class _Iter>
struct __libcpp_is_trivial_iterator<reverse_iterator<_Iter> >
    : public _LIBCPP_BOOL_CONSTANT(__libcpp_is_trivial_iterator<_Iter>::value) {};

template <class _Iter>
struct __libcpp_is_trivial_iterator<__wrap_iter<_Iter> >
    : public _LIBCPP_BOOL_CONSTANT(__libcpp_is_trivial_iterator<_Iter>::value) {};


template <class _Tp, size_t _Np>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
_Tp*
begin(_Tp (&__array)[_Np])
{
    return __array;
}

template <class _Tp, size_t _Np>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
_Tp*
end(_Tp (&__array)[_Np])
{
    return __array + _Np;
}


#if 1 /* evaluated by -frewrite-includes */


#if 1 /* evaluated by -frewrite-includes */


#endif


#else  // defined(_LIBCPP_CXX03_LANG)

#endif  // !defined(_LIBCPP_CXX03_LANG)


#if 1 /* evaluated by -frewrite-includes */


template <class _Cont>
_LIBCPP_INLINE_VISIBILITY
constexpr auto size(const _Cont& __c)
_NOEXCEPT_(noexcept(__c.size()))
-> decltype        (__c.size())
{ return            __c.size(); }

template <class _Tp, size_t _Sz>
_LIBCPP_INLINE_VISIBILITY
constexpr size_t size(const _Tp (&)[_Sz]) noexcept { return _Sz; }


#if 0 /* evaluated by -frewrite-includes */
template <class _Cont>
_LIBCPP_INLINE_VISIBILITY
constexpr auto ssize(const _Cont& __c)
_NOEXCEPT_(noexcept(static_cast<common_type_t<ptrdiff_t, make_signed_t<decltype(__c.size())>>>(__c.size())))
->                              common_type_t<ptrdiff_t, make_signed_t<decltype(__c.size())>>
{ return            static_cast<common_type_t<ptrdiff_t, make_signed_t<decltype(__c.size())>>>(__c.size()); }

template <class _Tp, ptrdiff_t _Sz>
_LIBCPP_INLINE_VISIBILITY
constexpr ptrdiff_t ssize(const _Tp (&)[_Sz]) noexcept { return _Sz; }
#endif

template <class _Cont>
_LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_INLINE_VISIBILITY
constexpr auto empty(const _Cont& __c)
_NOEXCEPT_(noexcept(__c.empty()))
-> decltype        (__c.empty())
{ return            __c.empty(); }

template <class _Tp, size_t _Sz>
_LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_INLINE_VISIBILITY
constexpr bool empty(const _Tp (&)[_Sz]) noexcept { return false; }

template <class _Ep>
_LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_INLINE_VISIBILITY
constexpr bool empty(initializer_list<_Ep> __il) noexcept { return __il.size() == 0; }

template <class _Cont> constexpr
_LIBCPP_INLINE_VISIBILITY
auto data(_Cont& __c)
_NOEXCEPT_(noexcept(__c.data()))
-> decltype        (__c.data())
{ return            __c.data(); }

template <class _Cont> constexpr
_LIBCPP_INLINE_VISIBILITY
auto data(const _Cont& __c)
_NOEXCEPT_(noexcept(__c.data()))
-> decltype        (__c.data())
{ return            __c.data(); }

template <class _Tp, size_t _Sz>
_LIBCPP_INLINE_VISIBILITY
constexpr _Tp* data(_Tp (&__array)[_Sz]) noexcept { return __array; }

template <class _Ep>
_LIBCPP_INLINE_VISIBILITY
constexpr const _Ep* data(initializer_list<_Ep> __il) noexcept { return __il.begin(); }
#endif


_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_ITERATOR



// -*- C++ -*-
//===--------------------------- tuple ------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_TUPLE
#define _LIBCPP_TUPLE











#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_BEGIN_NAMESPACE_STD

#ifndef _LIBCPP_CXX03_LANG


// __tuple_leaf

template <size_t _Ip, class _Hp,
          bool=is_empty<_Hp>::value && !__libcpp_is_final<_Hp>::value
         >
class __tuple_leaf;

template <size_t _Ip, class _Hp, bool _Ep>
inline _LIBCPP_INLINE_VISIBILITY
void swap(__tuple_leaf<_Ip, _Hp, _Ep>& __x, __tuple_leaf<_Ip, _Hp, _Ep>& __y)
    _NOEXCEPT_(__is_nothrow_swappable<_Hp>::value)
{
    swap(__x.get(), __y.get());
}

template <size_t _Ip, class _Hp, bool>
class __tuple_leaf
{
    _Hp __value_;

    template <class _Tp>
    static constexpr bool __can_bind_reference() {

#if 1 /* evaluated by -frewrite-includes */
      return !__reference_binds_to_temporary(_Hp, _Tp);
#else
      return true;
#endif
    }

    __tuple_leaf& operator=(const __tuple_leaf&);
public:
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR __tuple_leaf()
             _NOEXCEPT_(is_nothrow_default_constructible<_Hp>::value) : __value_()
       {static_assert(!is_reference<_Hp>::value,
              "Attempted to default construct a reference element in a tuple");}

    template <class _Alloc>
        _LIBCPP_INLINE_VISIBILITY
        __tuple_leaf(integral_constant<int, 0>, const _Alloc&)
            : __value_()
        {static_assert(!is_reference<_Hp>::value,
              "Attempted to default construct a reference element in a tuple");}

    template <class _Alloc>
        _LIBCPP_INLINE_VISIBILITY
        __tuple_leaf(integral_constant<int, 1>, const _Alloc& __a)
            : __value_(allocator_arg_t(), __a)
        {static_assert(!is_reference<_Hp>::value,
              "Attempted to default construct a reference element in a tuple");}

    template <class _Alloc>
        _LIBCPP_INLINE_VISIBILITY
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
        _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
        explicit __tuple_leaf(_Tp&& __t) _NOEXCEPT_((is_nothrow_constructible<_Hp, _Tp>::value))
            : __value_(_VSTD::forward<_Tp>(__t))
        {static_assert(__can_bind_reference<_Tp&&>(),
       "Attempted construction of reference element binds to a temporary whose lifetime has ended");}

    template <class _Tp, class _Alloc>
        _LIBCPP_INLINE_VISIBILITY
        explicit __tuple_leaf(integral_constant<int, 0>, const _Alloc&, _Tp&& __t)
            : __value_(_VSTD::forward<_Tp>(__t))
        {static_assert(__can_bind_reference<_Tp&&>(),
       "Attempted construction of reference element binds to a temporary whose lifetime has ended");}

    template <class _Tp, class _Alloc>
        _LIBCPP_INLINE_VISIBILITY
        explicit __tuple_leaf(integral_constant<int, 1>, const _Alloc& __a, _Tp&& __t)
            : __value_(allocator_arg_t(), __a, _VSTD::forward<_Tp>(__t))
        {static_assert(!is_reference<_Hp>::value,
            "Attempted to uses-allocator construct a reference element in a tuple");}

    template <class _Tp, class _Alloc>
        _LIBCPP_INLINE_VISIBILITY
        explicit __tuple_leaf(integral_constant<int, 2>, const _Alloc& __a, _Tp&& __t)
            : __value_(_VSTD::forward<_Tp>(__t), __a)
        {static_assert(!is_reference<_Hp>::value,
           "Attempted to uses-allocator construct a reference element in a tuple");}

    __tuple_leaf(const __tuple_leaf& __t) = default;
    __tuple_leaf(__tuple_leaf&& __t) = default;

    template <class _Tp>
        _LIBCPP_INLINE_VISIBILITY
        __tuple_leaf&
        operator=(_Tp&& __t) _NOEXCEPT_((is_nothrow_assignable<_Hp&, _Tp>::value))
        {
            __value_ = _VSTD::forward<_Tp>(__t);
            return *this;
        }

    _LIBCPP_INLINE_VISIBILITY
    int swap(__tuple_leaf& __t) _NOEXCEPT_(__is_nothrow_swappable<__tuple_leaf>::value)
    {
        _VSTD::swap(*this, __t);
        return 0;
    }

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11       _Hp& get()       _NOEXCEPT {return __value_;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11 const _Hp& get() const _NOEXCEPT {return __value_;}
};

template <size_t _Ip, class _Hp>
class __tuple_leaf<_Ip, _Hp, true>
    : private _Hp
{

    __tuple_leaf& operator=(const __tuple_leaf&);
public:
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR __tuple_leaf()
             _NOEXCEPT_(is_nothrow_default_constructible<_Hp>::value) {}

    template <class _Alloc>
        _LIBCPP_INLINE_VISIBILITY
        __tuple_leaf(integral_constant<int, 0>, const _Alloc&) {}

    template <class _Alloc>
        _LIBCPP_INLINE_VISIBILITY
        __tuple_leaf(integral_constant<int, 1>, const _Alloc& __a)
            : _Hp(allocator_arg_t(), __a) {}

    template <class _Alloc>
        _LIBCPP_INLINE_VISIBILITY
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
        _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
        explicit __tuple_leaf(_Tp&& __t) _NOEXCEPT_((is_nothrow_constructible<_Hp, _Tp>::value))
            : _Hp(_VSTD::forward<_Tp>(__t)) {}

    template <class _Tp, class _Alloc>
        _LIBCPP_INLINE_VISIBILITY
        explicit __tuple_leaf(integral_constant<int, 0>, const _Alloc&, _Tp&& __t)
            : _Hp(_VSTD::forward<_Tp>(__t)) {}

    template <class _Tp, class _Alloc>
        _LIBCPP_INLINE_VISIBILITY
        explicit __tuple_leaf(integral_constant<int, 1>, const _Alloc& __a, _Tp&& __t)
            : _Hp(allocator_arg_t(), __a, _VSTD::forward<_Tp>(__t)) {}

    template <class _Tp, class _Alloc>
        _LIBCPP_INLINE_VISIBILITY
        explicit __tuple_leaf(integral_constant<int, 2>, const _Alloc& __a, _Tp&& __t)
            : _Hp(_VSTD::forward<_Tp>(__t), __a) {}

    __tuple_leaf(__tuple_leaf const &) = default;
    __tuple_leaf(__tuple_leaf &&) = default;

    template <class _Tp>
        _LIBCPP_INLINE_VISIBILITY
        __tuple_leaf&
        operator=(_Tp&& __t) _NOEXCEPT_((is_nothrow_assignable<_Hp&, _Tp>::value))
        {
            _Hp::operator=(_VSTD::forward<_Tp>(__t));
            return *this;
        }

    _LIBCPP_INLINE_VISIBILITY
    int
    swap(__tuple_leaf& __t) _NOEXCEPT_(__is_nothrow_swappable<__tuple_leaf>::value)
    {
        _VSTD::swap(*this, __t);
        return 0;
    }

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11       _Hp& get()       _NOEXCEPT {return static_cast<_Hp&>(*this);}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11 const _Hp& get() const _NOEXCEPT {return static_cast<const _Hp&>(*this);}
};

template <class ..._Tp>
_LIBCPP_INLINE_VISIBILITY
void __swallow(_Tp&&...) _NOEXCEPT {}

template <class _Tp>
struct __all_default_constructible;

template <class ..._Tp>
struct __all_default_constructible<__tuple_types<_Tp...>>
    : __all<is_default_constructible<_Tp>::value...>
{ };

// __tuple_impl

template<class _Indx, class ..._Tp> struct __tuple_impl;

template<size_t ..._Indx, class ..._Tp>
struct _LIBCPP_DECLSPEC_EMPTY_BASES __tuple_impl<__tuple_indices<_Indx...>, _Tp...>
    : public __tuple_leaf<_Indx, _Tp>...
{
    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR __tuple_impl()
        _NOEXCEPT_(__all<is_nothrow_default_constructible<_Tp>::value...>::value) {}

    template <size_t ..._Uf, class ..._Tf,
              size_t ..._Ul, class ..._Tl, class ..._Up>
        _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
        explicit
        __tuple_impl(__tuple_indices<_Uf...>, __tuple_types<_Tf...>,
                     __tuple_indices<_Ul...>, __tuple_types<_Tl...>,
                     _Up&&... __u)
                     _NOEXCEPT_((__all<is_nothrow_constructible<_Tf, _Up>::value...>::value &&
                                 __all<is_nothrow_default_constructible<_Tl>::value...>::value)) :
            __tuple_leaf<_Uf, _Tf>(_VSTD::forward<_Up>(__u))...,
            __tuple_leaf<_Ul, _Tl>()...
            {}

    template <class _Alloc, size_t ..._Uf, class ..._Tf,
              size_t ..._Ul, class ..._Tl, class ..._Up>
        _LIBCPP_INLINE_VISIBILITY
        explicit
        __tuple_impl(allocator_arg_t, const _Alloc& __a,
                     __tuple_indices<_Uf...>, __tuple_types<_Tf...>,
                     __tuple_indices<_Ul...>, __tuple_types<_Tl...>,
                     _Up&&... __u) :
            __tuple_leaf<_Uf, _Tf>(__uses_alloc_ctor<_Tf, _Alloc, _Up>(), __a,
            _VSTD::forward<_Up>(__u))...,
            __tuple_leaf<_Ul, _Tl>(__uses_alloc_ctor<_Tl, _Alloc>(), __a)...
            {}

    template <class _Tuple,
              class = typename enable_if
                      <
                         __tuple_constructible<_Tuple, tuple<_Tp...> >::value
                      >::type
             >
        _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
        __tuple_impl(_Tuple&& __t) _NOEXCEPT_((__all<is_nothrow_constructible<_Tp, typename tuple_element<_Indx,
                                       typename __make_tuple_types<_Tuple>::type>::type>::value...>::value))
            : __tuple_leaf<_Indx, _Tp>(_VSTD::forward<typename tuple_element<_Indx,
                                       typename __make_tuple_types<_Tuple>::type>::type>(_VSTD::get<_Indx>(__t)))...
            {}

    template <class _Alloc, class _Tuple,
              class = typename enable_if
                      <
                         __tuple_constructible<_Tuple, tuple<_Tp...> >::value
                      >::type
             >
        _LIBCPP_INLINE_VISIBILITY
        __tuple_impl(allocator_arg_t, const _Alloc& __a, _Tuple&& __t)
            : __tuple_leaf<_Indx, _Tp>(__uses_alloc_ctor<_Tp, _Alloc, typename tuple_element<_Indx,
                                       typename __make_tuple_types<_Tuple>::type>::type>(), __a,
                                       _VSTD::forward<typename tuple_element<_Indx,
                                       typename __make_tuple_types<_Tuple>::type>::type>(_VSTD::get<_Indx>(__t)))...
            {}

    template <class _Tuple>
        _LIBCPP_INLINE_VISIBILITY
        typename enable_if
        <
            __tuple_assignable<_Tuple, tuple<_Tp...> >::value,
            __tuple_impl&
        >::type
        operator=(_Tuple&& __t) _NOEXCEPT_((__all<is_nothrow_assignable<_Tp&, typename tuple_element<_Indx,
                                       typename __make_tuple_types<_Tuple>::type>::type>::value...>::value))
        {
            __swallow(__tuple_leaf<_Indx, _Tp>::operator=(_VSTD::forward<typename tuple_element<_Indx,
                                       typename __make_tuple_types<_Tuple>::type>::type>(_VSTD::get<_Indx>(__t)))...);
            return *this;
        }

    __tuple_impl(const __tuple_impl&) = default;
    __tuple_impl(__tuple_impl&&) = default;

    _LIBCPP_INLINE_VISIBILITY
    __tuple_impl&
    operator=(const __tuple_impl& __t) _NOEXCEPT_((__all<is_nothrow_copy_assignable<_Tp>::value...>::value))
    {
        __swallow(__tuple_leaf<_Indx, _Tp>::operator=(static_cast<const __tuple_leaf<_Indx, _Tp>&>(__t).get())...);
        return *this;
    }

    _LIBCPP_INLINE_VISIBILITY
    __tuple_impl&
    operator=(__tuple_impl&& __t) _NOEXCEPT_((__all<is_nothrow_move_assignable<_Tp>::value...>::value))
    {
        __swallow(__tuple_leaf<_Indx, _Tp>::operator=(_VSTD::forward<_Tp>(static_cast<__tuple_leaf<_Indx, _Tp>&>(__t).get()))...);
        return *this;
    }

    _LIBCPP_INLINE_VISIBILITY
    void swap(__tuple_impl& __t)
        _NOEXCEPT_(__all<__is_nothrow_swappable<_Tp>::value...>::value)
    {
        __swallow(__tuple_leaf<_Indx, _Tp>::swap(static_cast<__tuple_leaf<_Indx, _Tp>&>(__t))...);
    }
};



template <class ..._Tp>
class _LIBCPP_TEMPLATE_VIS tuple
{
    typedef __tuple_impl<typename __make_tuple_indices<sizeof...(_Tp)>::type, _Tp...> _BaseT;

    _BaseT __base_;


#if 0 /* evaluated by -frewrite-includes */
    static constexpr bool _EnableImplicitReducedArityExtension = true;
#else
    static constexpr bool _EnableImplicitReducedArityExtension = false;
#endif

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
        // This trait is used to disable the tuple-like constructor when
        // the UTypes... constructor should be selected instead.
        // See LWG issue #2549.
        template <class _Tuple>
        using _PreferTupleLikeConstructor = _Or<
            // Don't attempt the two checks below if the tuple we are given
            // has the same type as this tuple.
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
    template <size_t _Jp, class ..._Up> friend _LIBCPP_CONSTEXPR_AFTER_CXX11
        typename tuple_element<_Jp, tuple<_Up...> >::type& get(tuple<_Up...>&) _NOEXCEPT;
    template <size_t _Jp, class ..._Up> friend _LIBCPP_CONSTEXPR_AFTER_CXX11
        const typename tuple_element<_Jp, tuple<_Up...> >::type& get(const tuple<_Up...>&) _NOEXCEPT;
    template <size_t _Jp, class ..._Up> friend _LIBCPP_CONSTEXPR_AFTER_CXX11
        typename tuple_element<_Jp, tuple<_Up...> >::type&& get(tuple<_Up...>&&) _NOEXCEPT;
    template <size_t _Jp, class ..._Up> friend _LIBCPP_CONSTEXPR_AFTER_CXX11
        const typename tuple_element<_Jp, tuple<_Up...> >::type&& get(const tuple<_Up...>&&) _NOEXCEPT;
public:

    template <bool _Dummy = true, _EnableIf<
        _CheckArgsConstructor<_Dummy>::__enable_implicit_default()
    , void*> = nullptr>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
    tuple()
        _NOEXCEPT_(__all<is_nothrow_default_constructible<_Tp>::value...>::value) {}

    template <bool _Dummy = true, _EnableIf<
        _CheckArgsConstructor<_Dummy>::__enable_explicit_default()
    , void*> = nullptr>
    explicit _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
    tuple()
        _NOEXCEPT_(__all<is_nothrow_default_constructible<_Tp>::value...>::value) {}

    tuple(tuple const&) = default;
    tuple(tuple&&) = default;

    template <class _AllocArgT, class _Alloc, _EnableIf<
             _CheckArgsConstructor<_IsSame<allocator_arg_t, _AllocArgT>::value >::__enable_implicit_default()
      , void*> = nullptr
    >
    _LIBCPP_INLINE_VISIBILITY
    tuple(_AllocArgT, _Alloc const& __a)
      : __base_(allocator_arg_t(), __a,
                    __tuple_indices<>(), __tuple_types<>(),
                    typename __make_tuple_indices<sizeof...(_Tp), 0>::type(),
                    __tuple_types<_Tp...>()) {}

    template <class _AllocArgT, class _Alloc, _EnableIf<
             _CheckArgsConstructor<_IsSame<allocator_arg_t, _AllocArgT>::value>::__enable_explicit_default()
      , void*> = nullptr
    >
    explicit _LIBCPP_INLINE_VISIBILITY
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
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    tuple(const _Tp& ... __t) _NOEXCEPT_((__all<is_nothrow_copy_constructible<_Tp>::value...>::value))
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
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    explicit tuple(const _Tp& ... __t) _NOEXCEPT_((__all<is_nothrow_copy_constructible<_Tp>::value...>::value))
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
      _LIBCPP_INLINE_VISIBILITY
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
      _LIBCPP_INLINE_VISIBILITY
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
        _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
        tuple(_Up&&... __u)
            _NOEXCEPT_((
                is_nothrow_constructible<_BaseT,
                    typename __make_tuple_indices<sizeof...(_Up)>::type,
                    typename __make_tuple_types<tuple, sizeof...(_Up)>::type,
                    typename __make_tuple_indices<sizeof...(_Tp), sizeof...(_Up)>::type,
                    typename __make_tuple_types<tuple, sizeof...(_Tp), sizeof...(_Up)>::type,
                    _Up...
                >::value
            ))
            : __base_(typename __make_tuple_indices<sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Up)>::type(),
                    typename __make_tuple_indices<sizeof...(_Tp), sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Tp), sizeof...(_Up)>::type(),
                    _VSTD::forward<_Up>(__u)...) {}

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
        _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
        explicit
        tuple(_Up&&... __u)
            _NOEXCEPT_((
                is_nothrow_constructible<_BaseT,
                    typename __make_tuple_indices<sizeof...(_Up)>::type,
                    typename __make_tuple_types<tuple, sizeof...(_Up)>::type,
                    typename __make_tuple_indices<sizeof...(_Tp), sizeof...(_Up)>::type,
                    typename __make_tuple_types<tuple, sizeof...(_Tp), sizeof...(_Up)>::type,
                    _Up...
                >::value
            ))
            : __base_(typename __make_tuple_indices<sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Up)>::type(),
                    typename __make_tuple_indices<sizeof...(_Tp), sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Tp), sizeof...(_Up)>::type(),
                    _VSTD::forward<_Up>(__u)...) {}

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
        _LIBCPP_INLINE_VISIBILITY
        tuple(allocator_arg_t, const _Alloc& __a, _Up&&... __u)
            : __base_(allocator_arg_t(), __a,
                    typename __make_tuple_indices<sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Up)>::type(),
                    typename __make_tuple_indices<sizeof...(_Tp), sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Tp), sizeof...(_Up)>::type(),
                    _VSTD::forward<_Up>(__u)...) {}

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
        _LIBCPP_INLINE_VISIBILITY
        explicit
        tuple(allocator_arg_t, const _Alloc& __a, _Up&&... __u)
            : __base_(allocator_arg_t(), __a,
                    typename __make_tuple_indices<sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Up)>::type(),
                    typename __make_tuple_indices<sizeof...(_Tp), sizeof...(_Up)>::type(),
                    typename __make_tuple_types<tuple, sizeof...(_Tp), sizeof...(_Up)>::type(),
                    _VSTD::forward<_Up>(__u)...) {}

    template <class _Tuple, _EnableImplicitTupleLikeConstructor<_Tuple, true> = false>
        _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
        tuple(_Tuple&& __t) _NOEXCEPT_((is_nothrow_constructible<_BaseT, _Tuple>::value))
            : __base_(_VSTD::forward<_Tuple>(__t)) {}

    template <class _Tuple, _EnableImplicitTupleLikeConstructor<const _Tuple&, false> = false>
        _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
        tuple(const _Tuple& __t) _NOEXCEPT_((is_nothrow_constructible<_BaseT, const _Tuple&>::value))
            : __base_(__t) {}
    template <class _Tuple, _EnableExplicitTupleLikeConstructor<_Tuple, true> = false>
        _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
        explicit
        tuple(_Tuple&& __t) _NOEXCEPT_((is_nothrow_constructible<_BaseT, _Tuple>::value))
            : __base_(_VSTD::forward<_Tuple>(__t)) {}

    template <class _Tuple, _EnableExplicitTupleLikeConstructor<const _Tuple&, false> = false>
        _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
        explicit
        tuple(const _Tuple& __t) _NOEXCEPT_((is_nothrow_constructible<_BaseT, const _Tuple&>::value))
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
        _LIBCPP_INLINE_VISIBILITY
        tuple(allocator_arg_t, const _Alloc& __a, _Tuple&& __t)
            : __base_(allocator_arg_t(), __a, _VSTD::forward<_Tuple>(__t)) {}

    template <class _Alloc, class _Tuple,
              typename enable_if
                      <
                         _CheckTupleLikeConstructor<
                             __tuple_like_with_size<_Tuple, sizeof...(_Tp)>::value
                         >::template __enable_explicit<_Tuple>(),
                         bool
                      >::type = false
             >
        _LIBCPP_INLINE_VISIBILITY
        explicit
        tuple(allocator_arg_t, const _Alloc& __a, _Tuple&& __t)
            : __base_(allocator_arg_t(), __a, _VSTD::forward<_Tuple>(__t)) {}

    using _CanCopyAssign = __all<is_copy_assignable<_Tp>::value...>;
    using _CanMoveAssign = __all<is_move_assignable<_Tp>::value...>;

    _LIBCPP_INLINE_VISIBILITY
    tuple& operator=(typename conditional<_CanCopyAssign::value, tuple, __nat>::type const& __t)
        _NOEXCEPT_((__all<is_nothrow_copy_assignable<_Tp>::value...>::value))
    {
        __base_.operator=(__t.__base_);
        return *this;
    }

    _LIBCPP_INLINE_VISIBILITY
    tuple& operator=(typename conditional<_CanMoveAssign::value, tuple, __nat>::type&& __t)
        _NOEXCEPT_((__all<is_nothrow_move_assignable<_Tp>::value...>::value))
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
        _LIBCPP_INLINE_VISIBILITY
        tuple&
        operator=(_Tuple&& __t) _NOEXCEPT_((is_nothrow_assignable<_BaseT&, _Tuple>::value))
        {
            __base_.operator=(_VSTD::forward<_Tuple>(__t));
            return *this;
        }

    _LIBCPP_INLINE_VISIBILITY
    void swap(tuple& __t) _NOEXCEPT_(__all<__is_nothrow_swappable<_Tp>::value...>::value)
        {__base_.swap(__t.__base_);}
};

template <>
class _LIBCPP_TEMPLATE_VIS tuple<>
{
public:
    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR tuple() _NOEXCEPT = default;
    template <class _Alloc>
    _LIBCPP_INLINE_VISIBILITY
        tuple(allocator_arg_t, const _Alloc&) _NOEXCEPT {}
    template <class _Alloc>
    _LIBCPP_INLINE_VISIBILITY
        tuple(allocator_arg_t, const _Alloc&, const tuple&) _NOEXCEPT {}
    template <class _Up>
    _LIBCPP_INLINE_VISIBILITY
        tuple(array<_Up, 0>) _NOEXCEPT {}
    template <class _Alloc, class _Up>
    _LIBCPP_INLINE_VISIBILITY
        tuple(allocator_arg_t, const _Alloc&, array<_Up, 0>) _NOEXCEPT {}
    _LIBCPP_INLINE_VISIBILITY
    void swap(tuple&) _NOEXCEPT {}
};

#ifndef _LIBCPP_HAS_NO_DEDUCTION_GUIDES
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
#endif

template <class ..._Tp>
inline _LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    __all<__is_swappable<_Tp>::value...>::value,
    void
>::type
swap(tuple<_Tp...>& __t, tuple<_Tp...>& __u)
                 _NOEXCEPT_(__all<__is_nothrow_swappable<_Tp>::value...>::value)
    {__t.swap(__u);}


#if 1 /* evaluated by -frewrite-includes */

namespace __find_detail {

static constexpr size_t __not_found = -1;
static constexpr size_t __ambiguous = __not_found - 1;

inline _LIBCPP_INLINE_VISIBILITY
constexpr size_t __find_idx_return(size_t __curr_i, size_t __res, bool __matches) {
    return !__matches ? __res :
        (__res == __not_found ? __curr_i : __ambiguous);
}

template <size_t _Nx>
inline _LIBCPP_INLINE_VISIBILITY
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

} // namespace __find_detail;

#endif

// tie

template <class ..._Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
tuple<_Tp&...>
tie(_Tp&... __t) _NOEXCEPT
{
    return tuple<_Tp&...>(__t...);
}

template <class _Up>
struct __ignore_t
{
    template <class _Tp>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    const __ignore_t& operator=(_Tp&&) const {return *this;}
};

namespace {
  _LIBCPP_INLINE_VAR constexpr __ignore_t<unsigned char> ignore = __ignore_t<unsigned char>();
}

template <class... _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
tuple<typename __unwrap_ref_decay<_Tp>::type...>
make_tuple(_Tp&&... __t)
{
    return tuple<typename __unwrap_ref_decay<_Tp>::type...>(_VSTD::forward<_Tp>(__t)...);
}

template <class... _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
tuple<_Tp&&...>
forward_as_tuple(_Tp&&... __t) _NOEXCEPT
{
    return tuple<_Tp&&...>(_VSTD::forward<_Tp>(__t)...);
}

template <size_t _Ip>
struct __tuple_equal
{
    template <class _Tp, class _Up>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _Tp& __x, const _Up& __y)
    {
        return __tuple_equal<_Ip - 1>()(__x, __y) && _VSTD::get<_Ip-1>(__x) == _VSTD::get<_Ip-1>(__y);
    }
};

template <>
struct __tuple_equal<0>
{
    template <class _Tp, class _Up>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _Tp&, const _Up&)
    {
        return true;
    }
};

template <class ..._Tp, class ..._Up>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
bool
operator==(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
{
    static_assert (sizeof...(_Tp) == sizeof...(_Up), "Can't compare tuples of different sizes");
    return __tuple_equal<sizeof...(_Tp)>()(__x, __y);
}

template <class ..._Tp, class ..._Up>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
bool
operator!=(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
{
    return !(__x == __y);
}

template <size_t _Ip>
struct __tuple_less
{
    template <class _Tp, class _Up>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _Tp& __x, const _Up& __y)
    {
        const size_t __idx = tuple_size<_Tp>::value - _Ip;
        if (_VSTD::get<__idx>(__x) < _VSTD::get<__idx>(__y))
            return true;
        if (_VSTD::get<__idx>(__y) < _VSTD::get<__idx>(__x))
            return false;
        return __tuple_less<_Ip-1>()(__x, __y);
    }
};

template <>
struct __tuple_less<0>
{
    template <class _Tp, class _Up>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _Tp&, const _Up&)
    {
        return false;
    }
};

template <class ..._Tp, class ..._Up>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
bool
operator<(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
{
    static_assert (sizeof...(_Tp) == sizeof...(_Up), "Can't compare tuples of different sizes");
    return __tuple_less<sizeof...(_Tp)>()(__x, __y);
}

template <class ..._Tp, class ..._Up>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
bool
operator>(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
{
    return __y < __x;
}

template <class ..._Tp, class ..._Up>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
bool
operator>=(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
{
    return !(__x < __y);
}

template <class ..._Tp, class ..._Up>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
bool
operator<=(const tuple<_Tp...>& __x, const tuple<_Up...>& __y)
{
    return !(__y < __x);
}


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR constexpr size_t tuple_size_v = tuple_size<_Tp>::value;

#define _LIBCPP_NOEXCEPT_RETURN(...) noexcept(noexcept(__VA_ARGS__)) { return __VA_ARGS__; }

template <class _Fn, class _Tuple, size_t ..._Id>
inline _LIBCPP_INLINE_VISIBILITY
constexpr decltype(auto) __apply_tuple_impl(_Fn && __f, _Tuple && __t,
                                            __tuple_indices<_Id...>)
_LIBCPP_NOEXCEPT_RETURN(
    _VSTD::__invoke_constexpr(
        _VSTD::forward<_Fn>(__f),
        _VSTD::get<_Id>(_VSTD::forward<_Tuple>(__t))...)
)

template <class _Fn, class _Tuple>
inline _LIBCPP_INLINE_VISIBILITY
constexpr decltype(auto) apply(_Fn && __f, _Tuple && __t)
_LIBCPP_NOEXCEPT_RETURN(
    _VSTD::__apply_tuple_impl(
        _VSTD::forward<_Fn>(__f), _VSTD::forward<_Tuple>(__t),
        typename __make_tuple_indices<tuple_size_v<remove_reference_t<_Tuple>>>::type{})
)

template <class _Tp, class _Tuple, size_t... _Idx>
inline _LIBCPP_INLINE_VISIBILITY
constexpr _Tp __make_from_tuple_impl(_Tuple&& __t, __tuple_indices<_Idx...>)
_LIBCPP_NOEXCEPT_RETURN(
    _Tp(_VSTD::get<_Idx>(_VSTD::forward<_Tuple>(__t))...)
)

template <class _Tp, class _Tuple>
inline _LIBCPP_INLINE_VISIBILITY
constexpr _Tp make_from_tuple(_Tuple&& __t)
_LIBCPP_NOEXCEPT_RETURN(
    _VSTD::__make_from_tuple_impl<_Tp>(_VSTD::forward<_Tuple>(__t),
        typename __make_tuple_indices<tuple_size_v<remove_reference_t<_Tuple>>>::type{})
)

#undef _LIBCPP_NOEXCEPT_RETURN

#endif // _LIBCPP_STD_VER > 14

#endif // !defined(_LIBCPP_CXX03_LANG)

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_TUPLE

// -*- C++ -*-
//===--------------------------- stdexcept --------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_STDEXCEPT
#define _LIBCPP_STDEXCEPT

/*
    stdexcept synopsis

namespace std
{

class logic_error;
    class domain_error;
    class invalid_argument;
    class length_error;
    class out_of_range;
class runtime_error;
    class range_error;
    class overflow_error;
    class underflow_error;

for each class xxx_error:

class xxx_error : public exception // at least indirectly
{
public:
    explicit xxx_error(const string& what_arg);
    explicit xxx_error(const char*   what_arg);

    virtual const char* what() const noexcept // returns what_arg
};

}  // std

*/



#ifdef _LIBCPP_NO_EXCEPTIONS

#endif


#if 1 /* evaluated by -frewrite-includes */

#endif





namespace std  // purposefully not using versioning namespace
{

class _LIBCPP_EXCEPTION_ABI logic_error
    : public exception
{
#ifndef _LIBCPP_ABI_VCRUNTIME
private:
    _VSTD::__libcpp_refstring __imp_;
public:
    explicit logic_error(const string&);
    explicit logic_error(const char*);

    logic_error(const logic_error&) _NOEXCEPT;
    logic_error& operator=(const logic_error&) _NOEXCEPT;

    virtual ~logic_error() _NOEXCEPT;

    virtual const char* what() const _NOEXCEPT;
#else
public:
    explicit logic_error(const _VSTD::string&); // Symbol uses versioned std::string
    _LIBCPP_INLINE_VISIBILITY explicit logic_error(const char* __s) : exception(__s) {}
#endif
};

class _LIBCPP_EXCEPTION_ABI runtime_error
    : public exception
{
#ifndef _LIBCPP_ABI_VCRUNTIME
private:
    _VSTD::__libcpp_refstring __imp_;
public:
    explicit runtime_error(const string&);
    explicit runtime_error(const char*);

    runtime_error(const runtime_error&) _NOEXCEPT;
    runtime_error& operator=(const runtime_error&) _NOEXCEPT;

    virtual ~runtime_error() _NOEXCEPT;

    virtual const char* what() const _NOEXCEPT;
#else
public:
   explicit runtime_error(const _VSTD::string&); // Symbol uses versioned std::string
   _LIBCPP_INLINE_VISIBILITY explicit runtime_error(const char* __s) : exception(__s) {}
#endif // _LIBCPP_ABI_VCRUNTIME
};

class _LIBCPP_EXCEPTION_ABI domain_error
    : public logic_error
{
public:
    _LIBCPP_INLINE_VISIBILITY explicit domain_error(const string& __s) : logic_error(__s) {}
    _LIBCPP_INLINE_VISIBILITY explicit domain_error(const char* __s)   : logic_error(__s) {}

#ifndef _LIBCPP_ABI_VCRUNTIME
    virtual ~domain_error() _NOEXCEPT;
#endif
};

class _LIBCPP_EXCEPTION_ABI invalid_argument
    : public logic_error
{
public:
    _LIBCPP_INLINE_VISIBILITY explicit invalid_argument(const string& __s) : logic_error(__s) {}
    _LIBCPP_INLINE_VISIBILITY explicit invalid_argument(const char* __s)   : logic_error(__s) {}

#ifndef _LIBCPP_ABI_VCRUNTIME
    virtual ~invalid_argument() _NOEXCEPT;
#endif
};

class _LIBCPP_EXCEPTION_ABI length_error
    : public logic_error
{
public:
    _LIBCPP_INLINE_VISIBILITY explicit length_error(const string& __s) : logic_error(__s) {}
    _LIBCPP_INLINE_VISIBILITY explicit length_error(const char* __s)   : logic_error(__s) {}
#ifndef _LIBCPP_ABI_VCRUNTIME
    virtual ~length_error() _NOEXCEPT;
#endif
};

class _LIBCPP_EXCEPTION_ABI out_of_range
    : public logic_error
{
public:
    _LIBCPP_INLINE_VISIBILITY explicit out_of_range(const string& __s) : logic_error(__s) {}
    _LIBCPP_INLINE_VISIBILITY explicit out_of_range(const char* __s)   : logic_error(__s) {}

#ifndef _LIBCPP_ABI_VCRUNTIME
    virtual ~out_of_range() _NOEXCEPT;
#endif
};

class _LIBCPP_EXCEPTION_ABI range_error
    : public runtime_error
{
public:
    _LIBCPP_INLINE_VISIBILITY explicit range_error(const string& __s) : runtime_error(__s) {}
    _LIBCPP_INLINE_VISIBILITY explicit range_error(const char* __s)   : runtime_error(__s) {}

#ifndef _LIBCPP_ABI_VCRUNTIME
    virtual ~range_error() _NOEXCEPT;
#endif
};

class _LIBCPP_EXCEPTION_ABI overflow_error
    : public runtime_error
{
public:
    _LIBCPP_INLINE_VISIBILITY explicit overflow_error(const string& __s) : runtime_error(__s) {}
    _LIBCPP_INLINE_VISIBILITY explicit overflow_error(const char* __s)   : runtime_error(__s) {}

#ifndef _LIBCPP_ABI_VCRUNTIME
    virtual ~overflow_error() _NOEXCEPT;
#endif
};

class _LIBCPP_EXCEPTION_ABI underflow_error
    : public runtime_error
{
public:
    _LIBCPP_INLINE_VISIBILITY explicit underflow_error(const string& __s) : runtime_error(__s) {}
    _LIBCPP_INLINE_VISIBILITY explicit underflow_error(const char* __s)   : runtime_error(__s) {}

#ifndef _LIBCPP_ABI_VCRUNTIME
    virtual ~underflow_error() _NOEXCEPT;
#endif
};

}  // std

_LIBCPP_BEGIN_NAMESPACE_STD

// in the dylib
_LIBCPP_NORETURN _LIBCPP_FUNC_VIS void __throw_runtime_error(const char*);


_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_STDEXCEPT


#if 1 /* evaluated by -frewrite-includes */

// -*- C++ -*-
//===--------------------------- atomic -----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_ATOMIC
#define _LIBCPP_ATOMIC









#if 1 /* evaluated by -frewrite-includes */

#endif

#ifdef _LIBCPP_HAS_NO_THREADS
# error <atomic> is not supported on this single threaded system
#endif
#ifdef _LIBCPP_HAS_NO_ATOMIC_HEADER
# error <atomic> is not implemented
#endif
#ifdef kill_dependency
# error C++ standard library is incompatible with <stdatomic.h>
#endif

#define _LIBCPP_CHECK_STORE_MEMORY_ORDER(__m) \
  _LIBCPP_DIAGNOSE_WARNING(__m == memory_order_consume || \
                           __m == memory_order_acquire || \
                           __m == memory_order_acq_rel,   \
                        "memory order argument to atomic operation is invalid")

#define _LIBCPP_CHECK_LOAD_MEMORY_ORDER(__m) \
  _LIBCPP_DIAGNOSE_WARNING(__m == memory_order_release || \
                           __m == memory_order_acq_rel,   \
                        "memory order argument to atomic operation is invalid")

#define _LIBCPP_CHECK_EXCHANGE_MEMORY_ORDER(__m, __f) \
  _LIBCPP_DIAGNOSE_WARNING(__f == memory_order_release || \
                           __f == memory_order_acq_rel,   \
                        "memory order argument to atomic operation is invalid")

_LIBCPP_BEGIN_NAMESPACE_STD

// Figure out what the underlying type for `memory_order` would be if it were
// declared as an unscoped enum (accounting for -fshort-enums). Use this result
// to pin the underlying type in C++20.
enum __legacy_memory_order {
    __mo_relaxed,
    __mo_consume,
    __mo_acquire,
    __mo_release,
    __mo_acq_rel,
    __mo_seq_cst
};

typedef underlying_type<__legacy_memory_order>::type __memory_order_underlying_t;


#if 0 /* evaluated by -frewrite-includes */

enum class memory_order : __memory_order_underlying_t {
  relaxed = __mo_relaxed,
  consume = __mo_consume,
  acquire = __mo_acquire,
  release = __mo_release,
  acq_rel = __mo_acq_rel,
  seq_cst = __mo_seq_cst
};

inline constexpr auto memory_order_relaxed = memory_order::relaxed;
inline constexpr auto memory_order_consume = memory_order::consume;
inline constexpr auto memory_order_acquire = memory_order::acquire;
inline constexpr auto memory_order_release = memory_order::release;
inline constexpr auto memory_order_acq_rel = memory_order::acq_rel;
inline constexpr auto memory_order_seq_cst = memory_order::seq_cst;

#else

typedef enum memory_order {
  memory_order_relaxed = __mo_relaxed,
  memory_order_consume = __mo_consume,
  memory_order_acquire = __mo_acquire,
  memory_order_release = __mo_release,
  memory_order_acq_rel = __mo_acq_rel,
  memory_order_seq_cst = __mo_seq_cst,
} memory_order;

#endif // _LIBCPP_STD_VER > 17



#if 0 /* evaluated by -frewrite-includes */


#endif


#if 0 /* evaluated by -frewrite-includes */

template <typename _Tp>
struct __cxx_atomic_base_impl {

  _LIBCPP_INLINE_VISIBILITY
#ifndef _LIBCPP_CXX03_LANG
    __cxx_atomic_base_impl() _NOEXCEPT = default;
#else
    __cxx_atomic_base_impl() _NOEXCEPT : __a_value() {}
#endif // _LIBCPP_CXX03_LANG
  _LIBCPP_CONSTEXPR explicit __cxx_atomic_base_impl(_Tp value) _NOEXCEPT
    : __a_value(value) {}
  _Tp __a_value;
};

#elif 1 /* evaluated by -frewrite-includes */

template <typename _Tp>
struct __cxx_atomic_base_impl {

  _LIBCPP_INLINE_VISIBILITY
#ifndef _LIBCPP_CXX03_LANG
    __cxx_atomic_base_impl() _NOEXCEPT = default;
#else
    __cxx_atomic_base_impl() _NOEXCEPT : __a_value() {}
#endif // _LIBCPP_CXX03_LANG
  _LIBCPP_CONSTEXPR explicit __cxx_atomic_base_impl(_Tp value) _NOEXCEPT
    : __a_value(value) {}
  _LIBCPP_DISABLE_EXTENSION_WARNING _Atomic(_Tp) __a_value;
};

#define __cxx_atomic_is_lock_free(__s) __c11_atomic_is_lock_free(__s)

#endif // _LIBCPP_HAS_GCC_ATOMIC_IMP, _LIBCPP_HAS_C_ATOMIC_IMP

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp kill_dependency(_Tp __y) _NOEXCEPT
{
    return __y;
}


#if 1 /* evaluated by -frewrite-includes */
# define ATOMIC_BOOL_LOCK_FREE      __CLANG_ATOMIC_BOOL_LOCK_FREE
# define ATOMIC_CHAR_LOCK_FREE      __CLANG_ATOMIC_CHAR_LOCK_FREE
# define ATOMIC_CHAR16_T_LOCK_FREE  __CLANG_ATOMIC_CHAR16_T_LOCK_FREE
# define ATOMIC_CHAR32_T_LOCK_FREE  __CLANG_ATOMIC_CHAR32_T_LOCK_FREE
# define ATOMIC_WCHAR_T_LOCK_FREE   __CLANG_ATOMIC_WCHAR_T_LOCK_FREE
# define ATOMIC_SHORT_LOCK_FREE     __CLANG_ATOMIC_SHORT_LOCK_FREE
# define ATOMIC_INT_LOCK_FREE       __CLANG_ATOMIC_INT_LOCK_FREE
# define ATOMIC_LONG_LOCK_FREE      __CLANG_ATOMIC_LONG_LOCK_FREE
# define ATOMIC_LLONG_LOCK_FREE     __CLANG_ATOMIC_LLONG_LOCK_FREE
# define ATOMIC_POINTER_LOCK_FREE   __CLANG_ATOMIC_POINTER_LOCK_FREE
#endif

#ifdef _LIBCPP_ATOMIC_ONLY_USE_BUILTINS

#else
template <typename _Tp,
          typename _Base = __cxx_atomic_base_impl<_Tp> >
#endif //_LIBCPP_ATOMIC_ONLY_USE_BUILTINS
struct __cxx_atomic_impl : public _Base {


#if 0 /* evaluated by -frewrite-includes */
    static_assert(is_trivially_copyable<_Tp>::value,
      "std::atomic<Tp> requires that 'Tp' be a trivially copyable type");
#endif

  _LIBCPP_INLINE_VISIBILITY __cxx_atomic_impl() _NOEXCEPT _LIBCPP_DEFAULT
  _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR explicit __cxx_atomic_impl(_Tp value) _NOEXCEPT
    : _Base(value) {}
};

// general atomic<T>

template <class _Tp, bool = is_integral<_Tp>::value && !is_same<_Tp, bool>::value>
struct __atomic_base  // false
{
    mutable __cxx_atomic_impl<_Tp> __a_;


#if 1 /* evaluated by -frewrite-includes */
  static _LIBCPP_CONSTEXPR bool is_always_lock_free = __atomic_always_lock_free(sizeof(__a_), 0);
#endif

    _LIBCPP_INLINE_VISIBILITY
    bool is_lock_free() const volatile _NOEXCEPT
        {return __cxx_atomic_is_lock_free(sizeof(_Tp));}
    _LIBCPP_INLINE_VISIBILITY
    bool is_lock_free() const _NOEXCEPT
        {return static_cast<__atomic_base const volatile*>(this)->is_lock_free();}
    _LIBCPP_INLINE_VISIBILITY
    void store(_Tp __d, memory_order __m = memory_order_seq_cst) volatile _NOEXCEPT
      _LIBCPP_CHECK_STORE_MEMORY_ORDER(__m)
        {__cxx_atomic_store(&__a_, __d, __m);}
    _LIBCPP_INLINE_VISIBILITY
    void store(_Tp __d, memory_order __m = memory_order_seq_cst) _NOEXCEPT
      _LIBCPP_CHECK_STORE_MEMORY_ORDER(__m)
        {__cxx_atomic_store(&__a_, __d, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp load(memory_order __m = memory_order_seq_cst) const volatile _NOEXCEPT
      _LIBCPP_CHECK_LOAD_MEMORY_ORDER(__m)
        {return __cxx_atomic_load(&__a_, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp load(memory_order __m = memory_order_seq_cst) const _NOEXCEPT
      _LIBCPP_CHECK_LOAD_MEMORY_ORDER(__m)
        {return __cxx_atomic_load(&__a_, __m);}
    _LIBCPP_INLINE_VISIBILITY
    operator _Tp() const volatile _NOEXCEPT {return load();}
    _LIBCPP_INLINE_VISIBILITY
    operator _Tp() const _NOEXCEPT          {return load();}
    _LIBCPP_INLINE_VISIBILITY
    bool compare_exchange_weak(_Tp& __e, _Tp __d,
                               memory_order __s, memory_order __f) volatile _NOEXCEPT
      _LIBCPP_CHECK_EXCHANGE_MEMORY_ORDER(__s, __f)
        {return __cxx_atomic_compare_exchange_weak(&__a_, &__e, __d, __s, __f);}
    _LIBCPP_INLINE_VISIBILITY
    bool compare_exchange_weak(_Tp& __e, _Tp __d,
                               memory_order __s, memory_order __f) _NOEXCEPT
      _LIBCPP_CHECK_EXCHANGE_MEMORY_ORDER(__s, __f)
        {return __cxx_atomic_compare_exchange_weak(&__a_, &__e, __d, __s, __f);}
    _LIBCPP_INLINE_VISIBILITY
    bool compare_exchange_strong(_Tp& __e, _Tp __d,
                                 memory_order __s, memory_order __f) volatile _NOEXCEPT
      _LIBCPP_CHECK_EXCHANGE_MEMORY_ORDER(__s, __f)
        {return __cxx_atomic_compare_exchange_strong(&__a_, &__e, __d, __s, __f);}
    _LIBCPP_INLINE_VISIBILITY
    bool compare_exchange_strong(_Tp& __e, _Tp __d,
                                 memory_order __s, memory_order __f) _NOEXCEPT
      _LIBCPP_CHECK_EXCHANGE_MEMORY_ORDER(__s, __f)
        {return __cxx_atomic_compare_exchange_strong(&__a_, &__e, __d, __s, __f);}
    _LIBCPP_INLINE_VISIBILITY
    bool compare_exchange_weak(_Tp& __e, _Tp __d,
                              memory_order __m = memory_order_seq_cst) volatile _NOEXCEPT
        {return __cxx_atomic_compare_exchange_weak(&__a_, &__e, __d, __m, __m);}
    _LIBCPP_INLINE_VISIBILITY
    bool compare_exchange_weak(_Tp& __e, _Tp __d,
                               memory_order __m = memory_order_seq_cst) _NOEXCEPT
        {return __cxx_atomic_compare_exchange_weak(&__a_, &__e, __d, __m, __m);}
    _LIBCPP_INLINE_VISIBILITY
    bool compare_exchange_strong(_Tp& __e, _Tp __d,
                              memory_order __m = memory_order_seq_cst) volatile _NOEXCEPT
        {return __cxx_atomic_compare_exchange_strong(&__a_, &__e, __d, __m, __m);}
    _LIBCPP_INLINE_VISIBILITY
    bool compare_exchange_strong(_Tp& __e, _Tp __d,
                                 memory_order __m = memory_order_seq_cst) _NOEXCEPT
        {return __cxx_atomic_compare_exchange_strong(&__a_, &__e, __d, __m, __m);}

    _LIBCPP_INLINE_VISIBILITY
    __atomic_base() _NOEXCEPT _LIBCPP_DEFAULT

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
    __atomic_base(_Tp __d) _NOEXCEPT : __a_(__d) {}

#ifndef _LIBCPP_CXX03_LANG
    __atomic_base(const __atomic_base&) = delete;
    __atomic_base& operator=(const __atomic_base&) = delete;
    __atomic_base& operator=(const __atomic_base&) volatile = delete;
#else
private:
    __atomic_base(const __atomic_base&);
    __atomic_base& operator=(const __atomic_base&);
    __atomic_base& operator=(const __atomic_base&) volatile;
#endif
};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp, bool __b>
_LIBCPP_CONSTEXPR bool __atomic_base<_Tp, __b>::is_always_lock_free;
#endif

// atomic<Integral>

template <class _Tp>
struct __atomic_base<_Tp, true>
    : public __atomic_base<_Tp, false>
{
    typedef __atomic_base<_Tp, false> __base;
    _LIBCPP_INLINE_VISIBILITY
    __atomic_base() _NOEXCEPT _LIBCPP_DEFAULT
    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR __atomic_base(_Tp __d) _NOEXCEPT : __base(__d) {}

    _LIBCPP_INLINE_VISIBILITY
    _Tp fetch_add(_Tp __op, memory_order __m = memory_order_seq_cst) volatile _NOEXCEPT
        {return __cxx_atomic_fetch_add(&this->__a_, __op, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp fetch_add(_Tp __op, memory_order __m = memory_order_seq_cst) _NOEXCEPT
        {return __cxx_atomic_fetch_add(&this->__a_, __op, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp fetch_sub(_Tp __op, memory_order __m = memory_order_seq_cst) volatile _NOEXCEPT
        {return __cxx_atomic_fetch_sub(&this->__a_, __op, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp fetch_sub(_Tp __op, memory_order __m = memory_order_seq_cst) _NOEXCEPT
        {return __cxx_atomic_fetch_sub(&this->__a_, __op, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp fetch_and(_Tp __op, memory_order __m = memory_order_seq_cst) volatile _NOEXCEPT
        {return __cxx_atomic_fetch_and(&this->__a_, __op, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp fetch_and(_Tp __op, memory_order __m = memory_order_seq_cst) _NOEXCEPT
        {return __cxx_atomic_fetch_and(&this->__a_, __op, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp fetch_or(_Tp __op, memory_order __m = memory_order_seq_cst) volatile _NOEXCEPT
        {return __cxx_atomic_fetch_or(&this->__a_, __op, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp fetch_or(_Tp __op, memory_order __m = memory_order_seq_cst) _NOEXCEPT
        {return __cxx_atomic_fetch_or(&this->__a_, __op, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp fetch_xor(_Tp __op, memory_order __m = memory_order_seq_cst) volatile _NOEXCEPT
        {return __cxx_atomic_fetch_xor(&this->__a_, __op, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp fetch_xor(_Tp __op, memory_order __m = memory_order_seq_cst) _NOEXCEPT
        {return __cxx_atomic_fetch_xor(&this->__a_, __op, __m);}

    _LIBCPP_INLINE_VISIBILITY
    _Tp operator++(int) volatile _NOEXCEPT      {return fetch_add(_Tp(1));}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator++(int) _NOEXCEPT               {return fetch_add(_Tp(1));}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator--(int) volatile _NOEXCEPT      {return fetch_sub(_Tp(1));}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator--(int) _NOEXCEPT               {return fetch_sub(_Tp(1));}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator++() volatile _NOEXCEPT         {return fetch_add(_Tp(1)) + _Tp(1);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator++() _NOEXCEPT                  {return fetch_add(_Tp(1)) + _Tp(1);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator--() volatile _NOEXCEPT         {return fetch_sub(_Tp(1)) - _Tp(1);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator--() _NOEXCEPT                  {return fetch_sub(_Tp(1)) - _Tp(1);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator+=(_Tp __op) volatile _NOEXCEPT {return fetch_add(__op) + __op;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator+=(_Tp __op) _NOEXCEPT          {return fetch_add(__op) + __op;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator-=(_Tp __op) volatile _NOEXCEPT {return fetch_sub(__op) - __op;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator-=(_Tp __op) _NOEXCEPT          {return fetch_sub(__op) - __op;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator&=(_Tp __op) volatile _NOEXCEPT {return fetch_and(__op) & __op;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator&=(_Tp __op) _NOEXCEPT          {return fetch_and(__op) & __op;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator|=(_Tp __op) volatile _NOEXCEPT {return fetch_or(__op) | __op;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator|=(_Tp __op) _NOEXCEPT          {return fetch_or(__op) | __op;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator^=(_Tp __op) volatile _NOEXCEPT {return fetch_xor(__op) ^ __op;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator^=(_Tp __op) _NOEXCEPT          {return fetch_xor(__op) ^ __op;}
};

// atomic<T>

template <class _Tp>
struct atomic
    : public __atomic_base<_Tp>
{
    typedef __atomic_base<_Tp> __base;
    _LIBCPP_INLINE_VISIBILITY
    atomic() _NOEXCEPT _LIBCPP_DEFAULT
    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR atomic(_Tp __d) _NOEXCEPT : __base(__d) {}

    _LIBCPP_INLINE_VISIBILITY
    _Tp operator=(_Tp __d) volatile _NOEXCEPT
        {__base::store(__d); return __d;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp operator=(_Tp __d) _NOEXCEPT
        {__base::store(__d); return __d;}
};

// atomic<T*>

template <class _Tp>
struct atomic<_Tp*>
    : public __atomic_base<_Tp*>
{
    typedef __atomic_base<_Tp*> __base;
    _LIBCPP_INLINE_VISIBILITY
    atomic() _NOEXCEPT _LIBCPP_DEFAULT
    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR atomic(_Tp* __d) _NOEXCEPT : __base(__d) {}

    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator=(_Tp* __d) volatile _NOEXCEPT
        {__base::store(__d); return __d;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator=(_Tp* __d) _NOEXCEPT
        {__base::store(__d); return __d;}

    _LIBCPP_INLINE_VISIBILITY
    _Tp* fetch_add(ptrdiff_t __op, memory_order __m = memory_order_seq_cst)
                                                                        volatile _NOEXCEPT
        {return __cxx_atomic_fetch_add(&this->__a_, __op, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* fetch_add(ptrdiff_t __op, memory_order __m = memory_order_seq_cst) _NOEXCEPT
        {return __cxx_atomic_fetch_add(&this->__a_, __op, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* fetch_sub(ptrdiff_t __op, memory_order __m = memory_order_seq_cst)
                                                                        volatile _NOEXCEPT
        {return __cxx_atomic_fetch_sub(&this->__a_, __op, __m);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* fetch_sub(ptrdiff_t __op, memory_order __m = memory_order_seq_cst) _NOEXCEPT
        {return __cxx_atomic_fetch_sub(&this->__a_, __op, __m);}

    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator++(int) volatile _NOEXCEPT            {return fetch_add(1);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator++(int) _NOEXCEPT                     {return fetch_add(1);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator--(int) volatile _NOEXCEPT            {return fetch_sub(1);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator--(int) _NOEXCEPT                     {return fetch_sub(1);}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator++() volatile _NOEXCEPT               {return fetch_add(1) + 1;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator++() _NOEXCEPT                        {return fetch_add(1) + 1;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator--() volatile _NOEXCEPT               {return fetch_sub(1) - 1;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator--() _NOEXCEPT                        {return fetch_sub(1) - 1;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator+=(ptrdiff_t __op) volatile _NOEXCEPT {return fetch_add(__op) + __op;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator+=(ptrdiff_t __op) _NOEXCEPT          {return fetch_add(__op) + __op;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator-=(ptrdiff_t __op) volatile _NOEXCEPT {return fetch_sub(__op) - __op;}
    _LIBCPP_INLINE_VISIBILITY
    _Tp* operator-=(ptrdiff_t __op) _NOEXCEPT          {return fetch_sub(__op) - __op;}
};

// atomic_is_lock_free

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
bool
atomic_is_lock_free(const volatile atomic<_Tp>* __o) _NOEXCEPT
{
    return __o->is_lock_free();
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
bool
atomic_is_lock_free(const atomic<_Tp>* __o) _NOEXCEPT
{
    return __o->is_lock_free();
}

// atomic_init

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
void
atomic_init(volatile atomic<_Tp>* __o, _Tp __d) _NOEXCEPT
{
    __cxx_atomic_init(&__o->__a_, __d);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
void
atomic_init(atomic<_Tp>* __o, _Tp __d) _NOEXCEPT
{
    __cxx_atomic_init(&__o->__a_, __d);
}

// atomic_store

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
void
atomic_store(volatile atomic<_Tp>* __o, _Tp __d) _NOEXCEPT
{
    __o->store(__d);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
void
atomic_store(atomic<_Tp>* __o, _Tp __d) _NOEXCEPT
{
    __o->store(__d);
}

// atomic_store_explicit

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
void
atomic_store_explicit(volatile atomic<_Tp>* __o, _Tp __d, memory_order __m) _NOEXCEPT
  _LIBCPP_CHECK_STORE_MEMORY_ORDER(__m)
{
    __o->store(__d, __m);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
void
atomic_store_explicit(atomic<_Tp>* __o, _Tp __d, memory_order __m) _NOEXCEPT
  _LIBCPP_CHECK_STORE_MEMORY_ORDER(__m)
{
    __o->store(__d, __m);
}

// atomic_load

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp
atomic_load(const volatile atomic<_Tp>* __o) _NOEXCEPT
{
    return __o->load();
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp
atomic_load(const atomic<_Tp>* __o) _NOEXCEPT
{
    return __o->load();
}

// atomic_load_explicit

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp
atomic_load_explicit(const volatile atomic<_Tp>* __o, memory_order __m) _NOEXCEPT
  _LIBCPP_CHECK_LOAD_MEMORY_ORDER(__m)
{
    return __o->load(__m);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp
atomic_load_explicit(const atomic<_Tp>* __o, memory_order __m) _NOEXCEPT
  _LIBCPP_CHECK_LOAD_MEMORY_ORDER(__m)
{
    return __o->load(__m);
}

// atomic_exchange

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp
atomic_exchange(volatile atomic<_Tp>* __o, _Tp __d) _NOEXCEPT
{
    return __o->exchange(__d);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp
atomic_exchange(atomic<_Tp>* __o, _Tp __d) _NOEXCEPT
{
    return __o->exchange(__d);
}

// atomic_exchange_explicit

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp
atomic_exchange_explicit(volatile atomic<_Tp>* __o, _Tp __d, memory_order __m) _NOEXCEPT
{
    return __o->exchange(__d, __m);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp
atomic_exchange_explicit(atomic<_Tp>* __o, _Tp __d, memory_order __m) _NOEXCEPT
{
    return __o->exchange(__d, __m);
}

// atomic_compare_exchange_weak

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
bool
atomic_compare_exchange_weak(volatile atomic<_Tp>* __o, _Tp* __e, _Tp __d) _NOEXCEPT
{
    return __o->compare_exchange_weak(*__e, __d);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
bool
atomic_compare_exchange_weak(atomic<_Tp>* __o, _Tp* __e, _Tp __d) _NOEXCEPT
{
    return __o->compare_exchange_weak(*__e, __d);
}

// atomic_compare_exchange_strong

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
bool
atomic_compare_exchange_strong(volatile atomic<_Tp>* __o, _Tp* __e, _Tp __d) _NOEXCEPT
{
    return __o->compare_exchange_strong(*__e, __d);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
bool
atomic_compare_exchange_strong(atomic<_Tp>* __o, _Tp* __e, _Tp __d) _NOEXCEPT
{
    return __o->compare_exchange_strong(*__e, __d);
}

// atomic_compare_exchange_weak_explicit

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
bool
atomic_compare_exchange_weak_explicit(volatile atomic<_Tp>* __o, _Tp* __e,
                                      _Tp __d,
                                      memory_order __s, memory_order __f) _NOEXCEPT
  _LIBCPP_CHECK_EXCHANGE_MEMORY_ORDER(__s, __f)
{
    return __o->compare_exchange_weak(*__e, __d, __s, __f);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
bool
atomic_compare_exchange_weak_explicit(atomic<_Tp>* __o, _Tp* __e, _Tp __d,
                                      memory_order __s, memory_order __f) _NOEXCEPT
  _LIBCPP_CHECK_EXCHANGE_MEMORY_ORDER(__s, __f)
{
    return __o->compare_exchange_weak(*__e, __d, __s, __f);
}

// atomic_compare_exchange_strong_explicit

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
bool
atomic_compare_exchange_strong_explicit(volatile atomic<_Tp>* __o,
                                        _Tp* __e, _Tp __d,
                                        memory_order __s, memory_order __f) _NOEXCEPT
  _LIBCPP_CHECK_EXCHANGE_MEMORY_ORDER(__s, __f)
{
    return __o->compare_exchange_strong(*__e, __d, __s, __f);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
bool
atomic_compare_exchange_strong_explicit(atomic<_Tp>* __o, _Tp* __e,
                                        _Tp __d,
                                        memory_order __s, memory_order __f) _NOEXCEPT
  _LIBCPP_CHECK_EXCHANGE_MEMORY_ORDER(__s, __f)
{
    return __o->compare_exchange_strong(*__e, __d, __s, __f);
}

// atomic_fetch_add

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_add(volatile atomic<_Tp>* __o, _Tp __op) _NOEXCEPT
{
    return __o->fetch_add(__op);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_add(atomic<_Tp>* __o, _Tp __op) _NOEXCEPT
{
    return __o->fetch_add(__op);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp*
atomic_fetch_add(volatile atomic<_Tp*>* __o, ptrdiff_t __op) _NOEXCEPT
{
    return __o->fetch_add(__op);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp*
atomic_fetch_add(atomic<_Tp*>* __o, ptrdiff_t __op) _NOEXCEPT
{
    return __o->fetch_add(__op);
}

// atomic_fetch_add_explicit

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_add_explicit(volatile atomic<_Tp>* __o, _Tp __op, memory_order __m) _NOEXCEPT
{
    return __o->fetch_add(__op, __m);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_add_explicit(atomic<_Tp>* __o, _Tp __op, memory_order __m) _NOEXCEPT
{
    return __o->fetch_add(__op, __m);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp*
atomic_fetch_add_explicit(volatile atomic<_Tp*>* __o, ptrdiff_t __op,
                          memory_order __m) _NOEXCEPT
{
    return __o->fetch_add(__op, __m);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp*
atomic_fetch_add_explicit(atomic<_Tp*>* __o, ptrdiff_t __op, memory_order __m) _NOEXCEPT
{
    return __o->fetch_add(__op, __m);
}

// atomic_fetch_sub

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_sub(volatile atomic<_Tp>* __o, _Tp __op) _NOEXCEPT
{
    return __o->fetch_sub(__op);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_sub(atomic<_Tp>* __o, _Tp __op) _NOEXCEPT
{
    return __o->fetch_sub(__op);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp*
atomic_fetch_sub(volatile atomic<_Tp*>* __o, ptrdiff_t __op) _NOEXCEPT
{
    return __o->fetch_sub(__op);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp*
atomic_fetch_sub(atomic<_Tp*>* __o, ptrdiff_t __op) _NOEXCEPT
{
    return __o->fetch_sub(__op);
}

// atomic_fetch_sub_explicit

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_sub_explicit(volatile atomic<_Tp>* __o, _Tp __op, memory_order __m) _NOEXCEPT
{
    return __o->fetch_sub(__op, __m);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_sub_explicit(atomic<_Tp>* __o, _Tp __op, memory_order __m) _NOEXCEPT
{
    return __o->fetch_sub(__op, __m);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp*
atomic_fetch_sub_explicit(volatile atomic<_Tp*>* __o, ptrdiff_t __op,
                          memory_order __m) _NOEXCEPT
{
    return __o->fetch_sub(__op, __m);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
_Tp*
atomic_fetch_sub_explicit(atomic<_Tp*>* __o, ptrdiff_t __op, memory_order __m) _NOEXCEPT
{
    return __o->fetch_sub(__op, __m);
}

// atomic_fetch_and

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_and(volatile atomic<_Tp>* __o, _Tp __op) _NOEXCEPT
{
    return __o->fetch_and(__op);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_and(atomic<_Tp>* __o, _Tp __op) _NOEXCEPT
{
    return __o->fetch_and(__op);
}

// atomic_fetch_and_explicit

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_and_explicit(volatile atomic<_Tp>* __o, _Tp __op, memory_order __m) _NOEXCEPT
{
    return __o->fetch_and(__op, __m);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_and_explicit(atomic<_Tp>* __o, _Tp __op, memory_order __m) _NOEXCEPT
{
    return __o->fetch_and(__op, __m);
}

// atomic_fetch_or

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_or(volatile atomic<_Tp>* __o, _Tp __op) _NOEXCEPT
{
    return __o->fetch_or(__op);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_or(atomic<_Tp>* __o, _Tp __op) _NOEXCEPT
{
    return __o->fetch_or(__op);
}

// atomic_fetch_or_explicit

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_or_explicit(volatile atomic<_Tp>* __o, _Tp __op, memory_order __m) _NOEXCEPT
{
    return __o->fetch_or(__op, __m);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_or_explicit(atomic<_Tp>* __o, _Tp __op, memory_order __m) _NOEXCEPT
{
    return __o->fetch_or(__op, __m);
}

// atomic_fetch_xor

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_xor(volatile atomic<_Tp>* __o, _Tp __op) _NOEXCEPT
{
    return __o->fetch_xor(__op);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_xor(atomic<_Tp>* __o, _Tp __op) _NOEXCEPT
{
    return __o->fetch_xor(__op);
}

// atomic_fetch_xor_explicit

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_xor_explicit(volatile atomic<_Tp>* __o, _Tp __op, memory_order __m) _NOEXCEPT
{
    return __o->fetch_xor(__op, __m);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_integral<_Tp>::value && !is_same<_Tp, bool>::value,
    _Tp
>::type
atomic_fetch_xor_explicit(atomic<_Tp>* __o, _Tp __op, memory_order __m) _NOEXCEPT
{
    return __o->fetch_xor(__op, __m);
}

// flag type and operations

typedef struct atomic_flag
{
    __cxx_atomic_impl<_LIBCPP_ATOMIC_FLAG_TYPE> __a_;



    _LIBCPP_INLINE_VISIBILITY
    atomic_flag() _NOEXCEPT _LIBCPP_DEFAULT

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
    atomic_flag(bool __b) _NOEXCEPT : __a_(__b) {} // EXTENSION

#ifndef _LIBCPP_CXX03_LANG
    atomic_flag(const atomic_flag&) = delete;
    atomic_flag& operator=(const atomic_flag&) = delete;
    atomic_flag& operator=(const atomic_flag&) volatile = delete;
#else
private:
    atomic_flag(const atomic_flag&);
    atomic_flag& operator=(const atomic_flag&);
    atomic_flag& operator=(const atomic_flag&) volatile;
#endif
} atomic_flag;


_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_ATOMIC
#endif



#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_PUSH_MACROS

// -*- C++ -*-
//===------------------------ __undef_macros ------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//


#ifdef min

#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
_LIBCPP_WARNING("macro min is incompatible with C++.  Try #define NOMINMAX "
                "before any Windows header. #undefing min")
#else
#warning: macro min is incompatible with C++.  #undefing min
#endif
#endif
#undef min
#endif

#ifdef max

#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
_LIBCPP_WARNING("macro max is incompatible with C++.  Try #define NOMINMAX "
                "before any Windows header. #undefing max")
#else
#warning: macro max is incompatible with C++.  #undefing max
#endif
#endif
#undef max
#endif


_LIBCPP_BEGIN_NAMESPACE_STD

template <class _ValueType>
inline _LIBCPP_INLINE_VISIBILITY
_ValueType __libcpp_relaxed_load(_ValueType const* __value) {

#if 1 /* evaluated by -frewrite-includes */
    return __atomic_load_n(__value, __ATOMIC_RELAXED);
#else
    return *__value;
#endif
}

template <class _ValueType>
inline _LIBCPP_INLINE_VISIBILITY
_ValueType __libcpp_acquire_load(_ValueType const* __value) {

#if 1 /* evaluated by -frewrite-includes */
    return __atomic_load_n(__value, __ATOMIC_ACQUIRE);
#else
    return *__value;
#endif
}

// addressof moved to <type_traits>

template <class _Tp> class allocator;

template <>
class _LIBCPP_TEMPLATE_VIS allocator<void>
{
public:
    typedef void*             pointer;
    typedef const void*       const_pointer;
    typedef void              value_type;

    template <class _Up> struct rebind {typedef allocator<_Up> other;};
};

template <>
class _LIBCPP_TEMPLATE_VIS allocator<const void>
{
public:
    typedef const void*       pointer;
    typedef const void*       const_pointer;
    typedef const void        value_type;

    template <class _Up> struct rebind {typedef allocator<_Up> other;};
};

// pointer_traits

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
    typedef _LIBCPP_NODEBUG_TYPE typename _Ptr::element_type type;
};

#ifndef _LIBCPP_HAS_NO_VARIADICS

template <template <class, class...> class _Sp, class _Tp, class ..._Args>
struct __pointer_traits_element_type<_Sp<_Tp, _Args...>, true>
{
    typedef _LIBCPP_NODEBUG_TYPE typename _Sp<_Tp, _Args...>::element_type type;
};

template <template <class, class...> class _Sp, class _Tp, class ..._Args>
struct __pointer_traits_element_type<_Sp<_Tp, _Args...>, false>
{
    typedef _LIBCPP_NODEBUG_TYPE _Tp type;
};

#else  // _LIBCPP_HAS_NO_VARIADICS


#endif  // _LIBCPP_HAS_NO_VARIADICS

template <class _Tp, class = void>
struct __has_difference_type : false_type {};

template <class _Tp>
struct __has_difference_type<_Tp,
            typename __void_t<typename _Tp::difference_type>::type> : true_type {};

template <class _Ptr, bool = __has_difference_type<_Ptr>::value>
struct __pointer_traits_difference_type
{
    typedef _LIBCPP_NODEBUG_TYPE ptrdiff_t type;
};

template <class _Ptr>
struct __pointer_traits_difference_type<_Ptr, true>
{
    typedef _LIBCPP_NODEBUG_TYPE typename _Ptr::difference_type type;
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
#ifndef _LIBCPP_CXX03_LANG
    typedef _LIBCPP_NODEBUG_TYPE typename _Tp::template rebind<_Up> type;
#else
    typedef _LIBCPP_NODEBUG_TYPE typename _Tp::template rebind<_Up>::other type;
#endif
};

#ifndef _LIBCPP_HAS_NO_VARIADICS

template <template <class, class...> class _Sp, class _Tp, class ..._Args, class _Up>
struct __pointer_traits_rebind<_Sp<_Tp, _Args...>, _Up, true>
{
#ifndef _LIBCPP_CXX03_LANG
    typedef _LIBCPP_NODEBUG_TYPE typename _Sp<_Tp, _Args...>::template rebind<_Up> type;
#else
    typedef _LIBCPP_NODEBUG_TYPE typename _Sp<_Tp, _Args...>::template rebind<_Up>::other type;
#endif
};

template <template <class, class...> class _Sp, class _Tp, class ..._Args, class _Up>
struct __pointer_traits_rebind<_Sp<_Tp, _Args...>, _Up, false>
{
    typedef _Sp<_Up, _Args...> type;
};

#else  // _LIBCPP_HAS_NO_VARIADICS

template <template <class> class _Sp, class _Tp, class _Up>
struct __pointer_traits_rebind<_Sp<_Tp>, _Up, true>
{
#ifndef _LIBCPP_CXX03_LANG
    typedef typename _Sp<_Tp>::template rebind<_Up> type;
#else
    typedef typename _Sp<_Tp>::template rebind<_Up>::other type;
#endif
};

template <template <class> class _Sp, class _Tp, class _Up>
struct __pointer_traits_rebind<_Sp<_Tp>, _Up, false>
{
    typedef _Sp<_Up> type;
};

template <template <class, class> class _Sp, class _Tp, class _A0, class _Up>
struct __pointer_traits_rebind<_Sp<_Tp, _A0>, _Up, true>
{
#ifndef _LIBCPP_CXX03_LANG
    typedef typename _Sp<_Tp, _A0>::template rebind<_Up> type;
#else
    typedef typename _Sp<_Tp, _A0>::template rebind<_Up>::other type;
#endif
};

template <template <class, class> class _Sp, class _Tp, class _A0, class _Up>
struct __pointer_traits_rebind<_Sp<_Tp, _A0>, _Up, false>
{
    typedef _Sp<_Up, _A0> type;
};

template <template <class, class, class> class _Sp, class _Tp, class _A0,
                                         class _A1, class _Up>
struct __pointer_traits_rebind<_Sp<_Tp, _A0, _A1>, _Up, true>
{
#ifndef _LIBCPP_CXX03_LANG
    typedef typename _Sp<_Tp, _A0, _A1>::template rebind<_Up> type;
#else
    typedef typename _Sp<_Tp, _A0, _A1>::template rebind<_Up>::other type;
#endif
};

template <template <class, class, class> class _Sp, class _Tp, class _A0,
                                         class _A1, class _Up>
struct __pointer_traits_rebind<_Sp<_Tp, _A0, _A1>, _Up, false>
{
    typedef _Sp<_Up, _A0, _A1> type;
};

template <template <class, class, class, class> class _Sp, class _Tp, class _A0,
                                                class _A1, class _A2, class _Up>
struct __pointer_traits_rebind<_Sp<_Tp, _A0, _A1, _A2>, _Up, true>
{
#ifndef _LIBCPP_CXX03_LANG
    typedef typename _Sp<_Tp, _A0, _A1, _A2>::template rebind<_Up> type;
#else
    typedef typename _Sp<_Tp, _A0, _A1, _A2>::template rebind<_Up>::other type;
#endif
};

template <template <class, class, class, class> class _Sp, class _Tp, class _A0,
                                                class _A1, class _A2, class _Up>
struct __pointer_traits_rebind<_Sp<_Tp, _A0, _A1, _A2>, _Up, false>
{
    typedef _Sp<_Up, _A0, _A1, _A2> type;
};

#endif  // _LIBCPP_HAS_NO_VARIADICS

template <class _Ptr>
struct _LIBCPP_TEMPLATE_VIS pointer_traits
{
    typedef _Ptr                                                     pointer;
    typedef typename __pointer_traits_element_type<pointer>::type    element_type;
    typedef typename __pointer_traits_difference_type<pointer>::type difference_type;

#ifndef _LIBCPP_CXX03_LANG
    template <class _Up> using rebind = typename __pointer_traits_rebind<pointer, _Up>::type;
#else
    template <class _Up> struct rebind
        {typedef typename __pointer_traits_rebind<pointer, _Up>::type other;};
#endif  // _LIBCPP_CXX03_LANG

private:
    struct __nat {};
public:
    _LIBCPP_INLINE_VISIBILITY
    static pointer pointer_to(typename conditional<is_void<element_type>::value,
                                           __nat, element_type>::type& __r)
        {return pointer::pointer_to(__r);}
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS pointer_traits<_Tp*>
{
    typedef _Tp*      pointer;
    typedef _Tp       element_type;
    typedef ptrdiff_t difference_type;

#ifndef _LIBCPP_CXX03_LANG
    template <class _Up> using rebind = _Up*;
#else
    template <class _Up> struct rebind {typedef _Up* other;};
#endif

private:
    struct __nat {};
public:
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    static pointer pointer_to(typename conditional<is_void<element_type>::value,
                                      __nat, element_type>::type& __r) _NOEXCEPT
        {return _VSTD::addressof(__r);}
};

template <class _From, class _To>
struct __rebind_pointer {
#ifndef _LIBCPP_CXX03_LANG
    typedef typename pointer_traits<_From>::template rebind<_To>        type;
#else
    typedef typename pointer_traits<_From>::template rebind<_To>::other type;
#endif
};

// allocator_traits

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
    typedef _LIBCPP_NODEBUG_TYPE typename _Dp::pointer type;
};

template <class _Tp, class _Dp>
struct __pointer_type<_Tp, _Dp, false>
{
    typedef _LIBCPP_NODEBUG_TYPE _Tp* type;
};

}  // __pointer_type_imp

template <class _Tp, class _Dp>
struct __pointer_type
{
    typedef _LIBCPP_NODEBUG_TYPE typename __pointer_type_imp::__pointer_type<_Tp, typename remove_reference<_Dp>::type>::type type;
};

template <class _Tp, class = void>
struct __has_const_pointer : false_type {};

template <class _Tp>
struct __has_const_pointer<_Tp,
            typename __void_t<typename _Tp::const_pointer>::type> : true_type {};

template <class _Tp, class _Ptr, class _Alloc, bool = __has_const_pointer<_Alloc>::value>
struct __const_pointer
{
    typedef _LIBCPP_NODEBUG_TYPE typename _Alloc::const_pointer type;
};

template <class _Tp, class _Ptr, class _Alloc>
struct __const_pointer<_Tp, _Ptr, _Alloc, false>
{
#ifndef _LIBCPP_CXX03_LANG
    typedef _LIBCPP_NODEBUG_TYPE typename pointer_traits<_Ptr>::template rebind<const _Tp> type;
#else
    typedef typename pointer_traits<_Ptr>::template rebind<const _Tp>::other type;
#endif
};

template <class _Tp, class = void>
struct __has_void_pointer : false_type {};

template <class _Tp>
struct __has_void_pointer<_Tp,
               typename __void_t<typename _Tp::void_pointer>::type> : true_type {};

template <class _Ptr, class _Alloc, bool = __has_void_pointer<_Alloc>::value>
struct __void_pointer
{
    typedef _LIBCPP_NODEBUG_TYPE typename _Alloc::void_pointer type;
};

template <class _Ptr, class _Alloc>
struct __void_pointer<_Ptr, _Alloc, false>
{
#ifndef _LIBCPP_CXX03_LANG
    typedef _LIBCPP_NODEBUG_TYPE typename pointer_traits<_Ptr>::template rebind<void> type;
#else
    typedef _LIBCPP_NODEBUG_TYPE typename pointer_traits<_Ptr>::template rebind<void>::other type;
#endif
};

template <class _Tp, class = void>
struct __has_const_void_pointer : false_type {};

template <class _Tp>
struct __has_const_void_pointer<_Tp,
            typename __void_t<typename _Tp::const_void_pointer>::type> : true_type {};

template <class _Ptr, class _Alloc, bool = __has_const_void_pointer<_Alloc>::value>
struct __const_void_pointer
{
    typedef _LIBCPP_NODEBUG_TYPE typename _Alloc::const_void_pointer type;
};

template <class _Ptr, class _Alloc>
struct __const_void_pointer<_Ptr, _Alloc, false>
{
#ifndef _LIBCPP_CXX03_LANG
    typedef _LIBCPP_NODEBUG_TYPE typename pointer_traits<_Ptr>::template rebind<const void> type;
#else
    typedef _LIBCPP_NODEBUG_TYPE typename pointer_traits<_Ptr>::template rebind<const void>::other type;
#endif
};

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
_Tp*
__to_raw_pointer(_Tp* __p) _NOEXCEPT
{
    return __p;
}


#if 1 /* evaluated by -frewrite-includes */
template <class _Pointer>
inline _LIBCPP_INLINE_VISIBILITY
typename pointer_traits<_Pointer>::element_type*
__to_raw_pointer(_Pointer __p) _NOEXCEPT
{
    return _VSTD::__to_raw_pointer(__p.operator->());
}
#else
template <class _Pointer>
inline _LIBCPP_INLINE_VISIBILITY
auto
__to_raw_pointer(const _Pointer& __p) _NOEXCEPT
-> decltype(pointer_traits<_Pointer>::to_address(__p))
{
    return pointer_traits<_Pointer>::to_address(__p);
}

template <class _Pointer, class... _None>
inline _LIBCPP_INLINE_VISIBILITY
auto
__to_raw_pointer(const _Pointer& __p, _None...) _NOEXCEPT
{
    return _VSTD::__to_raw_pointer(__p.operator->());
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY constexpr
_Tp*
to_address(_Tp* __p) _NOEXCEPT
{
    static_assert(!is_function_v<_Tp>, "_Tp is a function type");
    return __p;
}

template <class _Pointer>
inline _LIBCPP_INLINE_VISIBILITY
auto
to_address(const _Pointer& __p) _NOEXCEPT
{
    return _VSTD::__to_raw_pointer(__p);
}
#endif

template <class _Tp, class = void>
struct __has_size_type : false_type {};

template <class _Tp>
struct __has_size_type<_Tp,
               typename __void_t<typename _Tp::size_type>::type> : true_type {};

template <class _Alloc, class _DiffType, bool = __has_size_type<_Alloc>::value>
struct __size_type
{
    typedef _LIBCPP_NODEBUG_TYPE typename make_unsigned<_DiffType>::type type;
};

template <class _Alloc, class _DiffType>
struct __size_type<_Alloc, _DiffType, true>
{
    typedef _LIBCPP_NODEBUG_TYPE typename _Alloc::size_type type;
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
    typedef _LIBCPP_NODEBUG_TYPE false_type type;
};

template <class _Alloc>
struct __propagate_on_container_copy_assignment<_Alloc, true>
{
    typedef _LIBCPP_NODEBUG_TYPE typename _Alloc::propagate_on_container_copy_assignment type;
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
    typedef _LIBCPP_NODEBUG_TYPE typename _Alloc::propagate_on_container_move_assignment type;
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
    typedef _LIBCPP_NODEBUG_TYPE typename _Alloc::propagate_on_container_swap type;
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
    typedef _LIBCPP_NODEBUG_TYPE typename _VSTD::is_empty<_Alloc>::type type;
};

template <class _Alloc>
struct __is_always_equal<_Alloc, true>
{
    typedef _LIBCPP_NODEBUG_TYPE typename _Alloc::is_always_equal type;
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
    typedef _LIBCPP_NODEBUG_TYPE typename _Tp::template rebind<_Up>::other type;
};

#ifndef _LIBCPP_HAS_NO_VARIADICS

template <template <class, class...> class _Alloc, class _Tp, class ..._Args, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _Args...>, _Up, true>
{
    typedef _LIBCPP_NODEBUG_TYPE typename _Alloc<_Tp, _Args...>::template rebind<_Up>::other type;
};

template <template <class, class...> class _Alloc, class _Tp, class ..._Args, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _Args...>, _Up, false>
{
    typedef _LIBCPP_NODEBUG_TYPE _Alloc<_Up, _Args...> type;
};

#else  // _LIBCPP_HAS_NO_VARIADICS

template <template <class> class _Alloc, class _Tp, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp>, _Up, true>
{
    typedef typename _Alloc<_Tp>::template rebind<_Up>::other type;
};

template <template <class> class _Alloc, class _Tp, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp>, _Up, false>
{
    typedef _Alloc<_Up> type;
};

template <template <class, class> class _Alloc, class _Tp, class _A0, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _A0>, _Up, true>
{
    typedef typename _Alloc<_Tp, _A0>::template rebind<_Up>::other type;
};

template <template <class, class> class _Alloc, class _Tp, class _A0, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _A0>, _Up, false>
{
    typedef _Alloc<_Up, _A0> type;
};

template <template <class, class, class> class _Alloc, class _Tp, class _A0,
                                         class _A1, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _A0, _A1>, _Up, true>
{
    typedef typename _Alloc<_Tp, _A0, _A1>::template rebind<_Up>::other type;
};

template <template <class, class, class> class _Alloc, class _Tp, class _A0,
                                         class _A1, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _A0, _A1>, _Up, false>
{
    typedef _Alloc<_Up, _A0, _A1> type;
};

template <template <class, class, class, class> class _Alloc, class _Tp, class _A0,
                                                class _A1, class _A2, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _A0, _A1, _A2>, _Up, true>
{
    typedef typename _Alloc<_Tp, _A0, _A1, _A2>::template rebind<_Up>::other type;
};

template <template <class, class, class, class> class _Alloc, class _Tp, class _A0,
                                                class _A1, class _A2, class _Up>
struct __allocator_traits_rebind<_Alloc<_Tp, _A0, _A1, _A2>, _Up, false>
{
    typedef _Alloc<_Up, _A0, _A1, _A2> type;
};

#endif  // _LIBCPP_HAS_NO_VARIADICS

#ifndef _LIBCPP_CXX03_LANG

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
            decltype(_VSTD::__has_allocate_hint_test(declval<_Alloc>(),
                                          declval<_SizeType>(),
                                          declval<_ConstVoidPtr>())),
            true_type>::value>
{
};

#else  // _LIBCPP_CXX03_LANG

template <class _Alloc, class _SizeType, class _ConstVoidPtr>
struct __has_allocate_hint
    : true_type
{
};

#endif  // _LIBCPP_CXX03_LANG


#if 1 /* evaluated by -frewrite-includes */

template <class _Alloc, class _Tp, class ..._Args>
decltype(_VSTD::declval<_Alloc>().construct(_VSTD::declval<_Tp*>(),
                                           _VSTD::declval<_Args>()...),
                                           true_type())
__has_construct_test(_Alloc&& __a, _Tp* __p, _Args&& ...__args);

template <class _Alloc, class _Pointer, class ..._Args>
false_type
__has_construct_test(const _Alloc& __a, _Pointer&& __p, _Args&& ...__args);

template <class _Alloc, class _Pointer, class ..._Args>
struct __has_construct
    : integral_constant<bool,
        is_same<
            decltype(_VSTD::__has_construct_test(declval<_Alloc>(),
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
            decltype(_VSTD::__has_destroy_test(declval<_Alloc>(),
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
            decltype(_VSTD::__has_max_size_test(declval<_Alloc&>())),
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
            decltype(_VSTD::__has_select_on_container_copy_construction_test(declval<_Alloc&>())),
            true_type>::value>
{
};

#else  // _LIBCPP_CXX03_LANG

template <class _Alloc, class _Pointer, class _Tp, class = void>
struct __has_construct : std::false_type {};

template <class _Alloc, class _Pointer, class _Tp>
struct __has_construct<_Alloc, _Pointer, _Tp, typename __void_t<
    decltype(_VSTD::declval<_Alloc>().construct(_VSTD::declval<_Pointer>(), _VSTD::declval<_Tp>()))
>::type> : std::true_type {};

template <class _Alloc, class _Pointer, class = void>
struct __has_destroy : false_type {};

template <class _Alloc, class _Pointer>
struct __has_destroy<_Alloc, _Pointer, typename __void_t<
    decltype(_VSTD::declval<_Alloc>().destroy(_VSTD::declval<_Pointer>()))
>::type> : std::true_type {};

template <class _Alloc>
struct __has_max_size
    : true_type
{
};

template <class _Alloc>
struct __has_select_on_container_copy_construction
    : false_type
{
};

#endif  // _LIBCPP_CXX03_LANG

template <class _Alloc, class _Ptr, bool = __has_difference_type<_Alloc>::value>
struct __alloc_traits_difference_type
{
    typedef _LIBCPP_NODEBUG_TYPE typename pointer_traits<_Ptr>::difference_type type;
};

template <class _Alloc, class _Ptr>
struct __alloc_traits_difference_type<_Alloc, _Ptr, true>
{
    typedef _LIBCPP_NODEBUG_TYPE typename _Alloc::difference_type type;
};

template <class _Tp>
struct __is_default_allocator : false_type {};

template <class _Tp>
struct __is_default_allocator<_VSTD::allocator<_Tp> > : true_type {};



template <class _Alloc,
    bool = __has_construct<_Alloc, typename _Alloc::value_type*,  typename _Alloc::value_type&&>::value && !__is_default_allocator<_Alloc>::value
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
struct _LIBCPP_TEMPLATE_VIS allocator_traits
{
    typedef _Alloc                              allocator_type;
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

#ifndef _LIBCPP_CXX03_LANG
    template <class _Tp> using rebind_alloc =
                  typename __allocator_traits_rebind<allocator_type, _Tp>::type;
    template <class _Tp> using rebind_traits = allocator_traits<rebind_alloc<_Tp> >;
#else  // _LIBCPP_CXX03_LANG
    template <class _Tp> struct rebind_alloc
        {typedef typename __allocator_traits_rebind<allocator_type, _Tp>::type other;};
    template <class _Tp> struct rebind_traits
        {typedef allocator_traits<typename rebind_alloc<_Tp>::other> other;};
#endif  // _LIBCPP_CXX03_LANG

    _LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_INLINE_VISIBILITY
    static pointer allocate(allocator_type& __a, size_type __n)
        {return __a.allocate(__n);}
    _LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_INLINE_VISIBILITY
    static pointer allocate(allocator_type& __a, size_type __n, const_void_pointer __hint)
        {return __allocate(__a, __n, __hint,
            __has_allocate_hint<allocator_type, size_type, const_void_pointer>());}

    _LIBCPP_INLINE_VISIBILITY
    static void deallocate(allocator_type& __a, pointer __p, size_type __n) _NOEXCEPT
        {__a.deallocate(__p, __n);}

#ifndef _LIBCPP_HAS_NO_VARIADICS
    template <class _Tp, class... _Args>
        _LIBCPP_INLINE_VISIBILITY
        static void construct(allocator_type& __a, _Tp* __p, _Args&&... __args)
            {__construct(__has_construct<allocator_type, _Tp*, _Args...>(),
                         __a, __p, _VSTD::forward<_Args>(__args)...);}
#else  // _LIBCPP_HAS_NO_VARIADICS
    template <class _Tp>
        _LIBCPP_INLINE_VISIBILITY
        static void construct(allocator_type&, _Tp* __p)
            {
                ::new ((void*)__p) _Tp();
            }
    template <class _Tp, class _A0>
        _LIBCPP_INLINE_VISIBILITY
        static void construct(allocator_type& __a, _Tp* __p, const _A0& __a0)
            {
                __construct(__has_construct<allocator_type, _Tp*, const _A0&>(),
                            __a, __p, __a0);
            }
    template <class _Tp, class _A0, class _A1>
        _LIBCPP_INLINE_VISIBILITY
        static void construct(allocator_type&, _Tp* __p, const _A0& __a0,
                              const _A1& __a1)
            {
                ::new ((void*)__p) _Tp(__a0, __a1);
            }
    template <class _Tp, class _A0, class _A1, class _A2>
        _LIBCPP_INLINE_VISIBILITY
        static void construct(allocator_type&, _Tp* __p, const _A0& __a0,
                              const _A1& __a1, const _A2& __a2)
            {
                ::new ((void*)__p) _Tp(__a0, __a1, __a2);
            }
#endif  // _LIBCPP_HAS_NO_VARIADICS

    template <class _Tp>
        _LIBCPP_INLINE_VISIBILITY
        static void destroy(allocator_type& __a, _Tp* __p)
            {__destroy(__has_destroy<allocator_type, _Tp*>(), __a, __p);}

    _LIBCPP_INLINE_VISIBILITY
    static size_type max_size(const allocator_type& __a) _NOEXCEPT
        {return __max_size(__has_max_size<const allocator_type>(), __a);}

    _LIBCPP_INLINE_VISIBILITY
    static allocator_type
        select_on_container_copy_construction(const allocator_type& __a)
            {return __select_on_container_copy_construction(
                __has_select_on_container_copy_construction<const allocator_type>(),
                __a);}

    template <class _Ptr>
        _LIBCPP_INLINE_VISIBILITY
        static
        void
        __construct_forward_with_exception_guarantees(allocator_type& __a, _Ptr __begin1, _Ptr __end1, _Ptr& __begin2)
        {
            static_assert(__is_cpp17_move_insertable<allocator_type>::value,
              "The specified type does not meet the requirements of Cpp17MoveInsertible");
            for (; __begin1 != __end1; ++__begin1, (void) ++__begin2)
              construct(__a, _VSTD::__to_raw_pointer(__begin2),
#ifdef _LIBCPP_NO_EXCEPTIONS
                        _VSTD::move(*__begin1)
#else
                        _VSTD::move_if_noexcept(*__begin1)
#endif
                        );
        }

    template <class _Tp>
        _LIBCPP_INLINE_VISIBILITY
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
                _VSTD::memcpy(__begin2, __begin1, _Np * sizeof(_Tp));
                __begin2 += _Np;
            }
        }

    template <class _Iter, class _Ptr>
        _LIBCPP_INLINE_VISIBILITY
        static
        void
        __construct_range_forward(allocator_type& __a, _Iter __begin1, _Iter __end1, _Ptr& __begin2)
        {
            for (; __begin1 != __end1; ++__begin1, (void) ++__begin2)
                construct(__a, _VSTD::__to_raw_pointer(__begin2), *__begin1);
        }

    template <class _SourceTp, class _DestTp,
              class _RawSourceTp = typename remove_const<_SourceTp>::type,
              class _RawDestTp = typename remove_const<_DestTp>::type>
        _LIBCPP_INLINE_VISIBILITY
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
                _VSTD::memcpy(const_cast<_RawDestTp*>(__begin2), __begin1, _Np * sizeof(_DestTp));
                __begin2 += _Np;
            }
        }

    template <class _Ptr>
        _LIBCPP_INLINE_VISIBILITY
        static
        void
        __construct_backward_with_exception_guarantees(allocator_type& __a, _Ptr __begin1, _Ptr __end1, _Ptr& __end2)
        {
            static_assert(__is_cpp17_move_insertable<allocator_type>::value,
              "The specified type does not meet the requirements of Cpp17MoveInsertable");
            while (__end1 != __begin1)
            {
              construct(__a, _VSTD::__to_raw_pointer(__end2 - 1),
#ifdef _LIBCPP_NO_EXCEPTIONS
                        _VSTD::move(*--__end1)
#else
                        _VSTD::move_if_noexcept(*--__end1)
#endif
                        );
              --__end2;
            }
        }

    template <class _Tp>
        _LIBCPP_INLINE_VISIBILITY
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
                _VSTD::memcpy(__end2, __begin1, _Np * sizeof(_Tp));
        }

private:

    _LIBCPP_INLINE_VISIBILITY
    static pointer __allocate(allocator_type& __a, size_type __n,
        const_void_pointer __hint, true_type)
        {return __a.allocate(__n, __hint);}
    _LIBCPP_INLINE_VISIBILITY
    static pointer __allocate(allocator_type& __a, size_type __n,
        const_void_pointer, false_type)
        {return __a.allocate(__n);}

#ifndef _LIBCPP_HAS_NO_VARIADICS
    template <class _Tp, class... _Args>
        _LIBCPP_INLINE_VISIBILITY
        static void __construct(true_type, allocator_type& __a, _Tp* __p, _Args&&... __args)
            {__a.construct(__p, _VSTD::forward<_Args>(__args)...);}
    template <class _Tp, class... _Args>
        _LIBCPP_INLINE_VISIBILITY
        static void __construct(false_type, allocator_type&, _Tp* __p, _Args&&... __args)
            {
                ::new ((void*)__p) _Tp(_VSTD::forward<_Args>(__args)...);
            }
#else  // _LIBCPP_HAS_NO_VARIADICS
    template <class _Tp, class _A0>
        _LIBCPP_INLINE_VISIBILITY
        static void __construct(true_type, allocator_type& __a, _Tp* __p,
                                const _A0& __a0)
            {__a.construct(__p, __a0);}
    template <class _Tp, class _A0>
        _LIBCPP_INLINE_VISIBILITY
        static void __construct(false_type, allocator_type&, _Tp* __p,
                                const _A0& __a0)
            {
                ::new ((void*)__p) _Tp(__a0);
            }
#endif  // _LIBCPP_HAS_NO_VARIADICS

    template <class _Tp>
        _LIBCPP_INLINE_VISIBILITY
        static void __destroy(true_type, allocator_type& __a, _Tp* __p)
            {__a.destroy(__p);}
    template <class _Tp>
        _LIBCPP_INLINE_VISIBILITY
        static void __destroy(false_type, allocator_type&, _Tp* __p)
            {
                __p->~_Tp();
            }

    _LIBCPP_INLINE_VISIBILITY
    static size_type __max_size(true_type, const allocator_type& __a) _NOEXCEPT
            {return __a.max_size();}
    _LIBCPP_INLINE_VISIBILITY
    static size_type __max_size(false_type, const allocator_type&) _NOEXCEPT
            {return numeric_limits<size_type>::max() / sizeof(value_type);}

    _LIBCPP_INLINE_VISIBILITY
    static allocator_type
        __select_on_container_copy_construction(true_type, const allocator_type& __a)
            {return __a.select_on_container_copy_construction();}
    _LIBCPP_INLINE_VISIBILITY
    static allocator_type
        __select_on_container_copy_construction(false_type, const allocator_type& __a)
            {return __a;}
};

template <class _Traits, class _Tp>
struct __rebind_alloc_helper
{
#ifndef _LIBCPP_CXX03_LANG
    typedef _LIBCPP_NODEBUG_TYPE typename _Traits::template rebind_alloc<_Tp>        type;
#else
    typedef typename _Traits::template rebind_alloc<_Tp>::other type;
#endif
};

// allocator

template <class _Tp>
class _LIBCPP_TEMPLATE_VIS allocator
{
public:
    typedef size_t            size_type;
    typedef ptrdiff_t         difference_type;
    typedef _Tp*              pointer;
    typedef const _Tp*        const_pointer;
    typedef _Tp&              reference;
    typedef const _Tp&        const_reference;
    typedef _Tp               value_type;

    typedef true_type propagate_on_container_move_assignment;
    typedef true_type is_always_equal;

    template <class _Up> struct rebind {typedef allocator<_Up> other;};

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    allocator() _NOEXCEPT {}

    template <class _Up>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    allocator(const allocator<_Up>&) _NOEXCEPT {}

    _LIBCPP_INLINE_VISIBILITY pointer address(reference __x) const _NOEXCEPT
        {return _VSTD::addressof(__x);}
    _LIBCPP_INLINE_VISIBILITY const_pointer address(const_reference __x) const _NOEXCEPT
        {return _VSTD::addressof(__x);}
    _LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_INLINE_VISIBILITY
    pointer allocate(size_type __n, allocator<void>::const_pointer = 0)
        {
        if (__n > max_size())
            __throw_length_error("allocator<T>::allocate(size_t n)"
                                 " 'n' exceeds maximum supported size");
        return static_cast<pointer>(_VSTD::__libcpp_allocate(__n * sizeof(_Tp), _LIBCPP_ALIGNOF(_Tp)));
        }
    _LIBCPP_INLINE_VISIBILITY void deallocate(pointer __p, size_type __n) _NOEXCEPT
        {_VSTD::__libcpp_deallocate((void*)__p, __n * sizeof(_Tp), _LIBCPP_ALIGNOF(_Tp));}
    _LIBCPP_INLINE_VISIBILITY size_type max_size() const _NOEXCEPT
        {return size_type(~0) / sizeof(_Tp);}

#if 1 /* evaluated by -frewrite-includes */
    template <class _Up, class... _Args>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(_Up* __p, _Args&&... __args)
        {
            ::new((void*)__p) _Up(_VSTD::forward<_Args>(__args)...);
        }
#else  // !defined(_LIBCPP_HAS_NO_RVALUE_REFERENCES) && !defined(_LIBCPP_HAS_NO_VARIADICS)
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p)
        {
            ::new((void*)__p) _Tp();
        }

#if 0 /* evaluated by -frewrite-includes */

    template <class _A0>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p, _A0& __a0)
        {
            ::new((void*)__p) _Tp(__a0);
        }
    template <class _A0>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p, const _A0& __a0)
        {
            ::new((void*)__p) _Tp(__a0);
        }
# endif  // defined(_LIBCPP_HAS_NO_RVALUE_REFERENCES)
    template <class _A0, class _A1>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p, _A0& __a0, _A1& __a1)
        {
            ::new((void*)__p) _Tp(__a0, __a1);
        }
    template <class _A0, class _A1>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p, const _A0& __a0, _A1& __a1)
        {
            ::new((void*)__p) _Tp(__a0, __a1);
        }
    template <class _A0, class _A1>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p, _A0& __a0, const _A1& __a1)
        {
            ::new((void*)__p) _Tp(__a0, __a1);
        }
    template <class _A0, class _A1>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p, const _A0& __a0, const _A1& __a1)
        {
            ::new((void*)__p) _Tp(__a0, __a1);
        }
#endif  // !defined(_LIBCPP_HAS_NO_RVALUE_REFERENCES) && !defined(_LIBCPP_HAS_NO_VARIADICS)
    _LIBCPP_INLINE_VISIBILITY void destroy(pointer __p) {__p->~_Tp();}
};

template <class _Tp>
class _LIBCPP_TEMPLATE_VIS allocator<const _Tp>
{
public:
    typedef size_t            size_type;
    typedef ptrdiff_t         difference_type;
    typedef const _Tp*        pointer;
    typedef const _Tp*        const_pointer;
    typedef const _Tp&        reference;
    typedef const _Tp&        const_reference;
    typedef const _Tp         value_type;

    typedef true_type propagate_on_container_move_assignment;
    typedef true_type is_always_equal;

    template <class _Up> struct rebind {typedef allocator<_Up> other;};

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    allocator() _NOEXCEPT {}

    template <class _Up>
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
    allocator(const allocator<_Up>&) _NOEXCEPT {}

    _LIBCPP_INLINE_VISIBILITY const_pointer address(const_reference __x) const _NOEXCEPT
        {return _VSTD::addressof(__x);}
    _LIBCPP_INLINE_VISIBILITY pointer allocate(size_type __n, allocator<void>::const_pointer = 0)
    {
        if (__n > max_size())
            __throw_length_error("allocator<const T>::allocate(size_t n)"
                                 " 'n' exceeds maximum supported size");
        return static_cast<pointer>(_VSTD::__libcpp_allocate(__n * sizeof(_Tp), _LIBCPP_ALIGNOF(_Tp)));
    }
    _LIBCPP_INLINE_VISIBILITY void deallocate(pointer __p, size_type __n) _NOEXCEPT
        {_VSTD::__libcpp_deallocate((void*) const_cast<_Tp *>(__p), __n * sizeof(_Tp), _LIBCPP_ALIGNOF(_Tp));}
    _LIBCPP_INLINE_VISIBILITY size_type max_size() const _NOEXCEPT
        {return size_type(~0) / sizeof(_Tp);}

#if 1 /* evaluated by -frewrite-includes */
    template <class _Up, class... _Args>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(_Up* __p, _Args&&... __args)
        {
            ::new((void*)__p) _Up(_VSTD::forward<_Args>(__args)...);
        }
#else  // !defined(_LIBCPP_HAS_NO_RVALUE_REFERENCES) && !defined(_LIBCPP_HAS_NO_VARIADICS)
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p)
        {
            ::new((void*) const_cast<_Tp *>(__p)) _Tp();
        }

#if 0 /* evaluated by -frewrite-includes */

    template <class _A0>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p, _A0& __a0)
        {
            ::new((void*) const_cast<_Tp *>(__p)) _Tp(__a0);
        }
    template <class _A0>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p, const _A0& __a0)
        {
            ::new((void*) const_cast<_Tp *>(__p)) _Tp(__a0);
        }
# endif  // defined(_LIBCPP_HAS_NO_RVALUE_REFERENCES)
    template <class _A0, class _A1>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p, _A0& __a0, _A1& __a1)
        {
            ::new((void*) const_cast<_Tp *>(__p)) _Tp(__a0, __a1);
        }
    template <class _A0, class _A1>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p, const _A0& __a0, _A1& __a1)
        {
            ::new((void*) const_cast<_Tp *>(__p)) _Tp(__a0, __a1);
        }
    template <class _A0, class _A1>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p, _A0& __a0, const _A1& __a1)
        {
            ::new((void*) const_cast<_Tp *>(__p)) _Tp(__a0, __a1);
        }
    template <class _A0, class _A1>
        _LIBCPP_INLINE_VISIBILITY
        void
        construct(pointer __p, const _A0& __a0, const _A1& __a1)
        {
            ::new((void*) const_cast<_Tp *>(__p)) _Tp(__a0, __a1);
        }
#endif  // !defined(_LIBCPP_HAS_NO_RVALUE_REFERENCES) && !defined(_LIBCPP_HAS_NO_VARIADICS)
    _LIBCPP_INLINE_VISIBILITY void destroy(pointer __p) {__p->~_Tp();}
};

template <class _Tp, class _Up>
inline _LIBCPP_INLINE_VISIBILITY
bool operator==(const allocator<_Tp>&, const allocator<_Up>&) _NOEXCEPT {return true;}

template <class _Tp, class _Up>
inline _LIBCPP_INLINE_VISIBILITY
bool operator!=(const allocator<_Tp>&, const allocator<_Up>&) _NOEXCEPT {return false;}

template <class _OutputIterator, class _Tp>
class _LIBCPP_TEMPLATE_VIS raw_storage_iterator
    : public iterator<output_iterator_tag,
                      _Tp,                                         // purposefully not C++03
                      ptrdiff_t,                                   // purposefully not C++03
                      _Tp*,                                        // purposefully not C++03
                      raw_storage_iterator<_OutputIterator, _Tp>&> // purposefully not C++03
{
private:
    _OutputIterator __x_;
public:
    _LIBCPP_INLINE_VISIBILITY explicit raw_storage_iterator(_OutputIterator __x) : __x_(__x) {}
    _LIBCPP_INLINE_VISIBILITY raw_storage_iterator& operator*() {return *this;}
    _LIBCPP_INLINE_VISIBILITY raw_storage_iterator& operator=(const _Tp& __element)
        {::new(_VSTD::addressof(*__x_)) _Tp(__element); return *this;}

#if 1 /* evaluated by -frewrite-includes */
    _LIBCPP_INLINE_VISIBILITY raw_storage_iterator& operator=(_Tp&& __element)
        {::new(_VSTD::addressof(*__x_)) _Tp(_VSTD::move(__element)); return *this;}
#endif
    _LIBCPP_INLINE_VISIBILITY raw_storage_iterator& operator++() {++__x_; return *this;}
    _LIBCPP_INLINE_VISIBILITY raw_storage_iterator  operator++(int)
        {raw_storage_iterator __t(*this); ++__x_; return __t;}

#if 1 /* evaluated by -frewrite-includes */
    _LIBCPP_INLINE_VISIBILITY _OutputIterator base() const { return __x_; }
#endif
};

template <class _Tp>
_LIBCPP_NODISCARD_EXT _LIBCPP_NO_CFI
pair<_Tp*, ptrdiff_t>
get_temporary_buffer(ptrdiff_t __n) _NOEXCEPT
{
    pair<_Tp*, ptrdiff_t> __r(0, 0);
    const ptrdiff_t __m = (~ptrdiff_t(0) ^
                           ptrdiff_t(ptrdiff_t(1) << (sizeof(ptrdiff_t) * __CHAR_BIT__ - 1)))
                           / sizeof(_Tp);
    if (__n > __m)
        __n = __m;
    while (__n > 0)
    {

#if 1 /* evaluated by -frewrite-includes */
    if (__is_overaligned_for_new(_LIBCPP_ALIGNOF(_Tp)))
        {
            std::align_val_t __al =
                std::align_val_t(std::alignment_of<_Tp>::value);
            __r.first = static_cast<_Tp*>(::operator new(
                __n * sizeof(_Tp), __al, nothrow));
        } else {
            __r.first = static_cast<_Tp*>(::operator new(
                __n * sizeof(_Tp), nothrow));
        }
#else
    if (__is_overaligned_for_new(_LIBCPP_ALIGNOF(_Tp)))
        {
            // Since aligned operator new is unavailable, return an empty
            // buffer rather than one with invalid alignment.
            return __r;
        }

        __r.first = static_cast<_Tp*>(::operator new(__n * sizeof(_Tp), nothrow));
#endif

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
inline _LIBCPP_INLINE_VISIBILITY
void return_temporary_buffer(_Tp* __p) _NOEXCEPT
{
  _VSTD::__libcpp_deallocate_unsized((void*)__p, _LIBCPP_ALIGNOF(_Tp));
}


#if 0 /* evaluated by -frewrite-includes */
template <class _Tp>
struct _LIBCPP_DEPRECATED_IN_CXX11 auto_ptr_ref
{
    _Tp* __ptr_;
};

template<class _Tp>
class _LIBCPP_TEMPLATE_VIS _LIBCPP_DEPRECATED_IN_CXX11 auto_ptr
{
private:
    _Tp* __ptr_;
public:
    typedef _Tp element_type;

    _LIBCPP_INLINE_VISIBILITY explicit auto_ptr(_Tp* __p = 0) throw() : __ptr_(__p) {}
    _LIBCPP_INLINE_VISIBILITY auto_ptr(auto_ptr& __p) throw() : __ptr_(__p.release()) {}
    template<class _Up> _LIBCPP_INLINE_VISIBILITY auto_ptr(auto_ptr<_Up>& __p) throw()
        : __ptr_(__p.release()) {}
    _LIBCPP_INLINE_VISIBILITY auto_ptr& operator=(auto_ptr& __p) throw()
        {reset(__p.release()); return *this;}
    template<class _Up> _LIBCPP_INLINE_VISIBILITY auto_ptr& operator=(auto_ptr<_Up>& __p) throw()
        {reset(__p.release()); return *this;}
    _LIBCPP_INLINE_VISIBILITY auto_ptr& operator=(auto_ptr_ref<_Tp> __p) throw()
        {reset(__p.__ptr_); return *this;}
    _LIBCPP_INLINE_VISIBILITY ~auto_ptr() throw() {delete __ptr_;}

    _LIBCPP_INLINE_VISIBILITY _Tp& operator*() const throw()
        {return *__ptr_;}
    _LIBCPP_INLINE_VISIBILITY _Tp* operator->() const throw() {return __ptr_;}
    _LIBCPP_INLINE_VISIBILITY _Tp* get() const throw() {return __ptr_;}
    _LIBCPP_INLINE_VISIBILITY _Tp* release() throw()
    {
        _Tp* __t = __ptr_;
        __ptr_ = 0;
        return __t;
    }
    _LIBCPP_INLINE_VISIBILITY void reset(_Tp* __p = 0) throw()
    {
        if (__ptr_ != __p)
            delete __ptr_;
        __ptr_ = __p;
    }

    _LIBCPP_INLINE_VISIBILITY auto_ptr(auto_ptr_ref<_Tp> __p) throw() : __ptr_(__p.__ptr_) {}
    template<class _Up> _LIBCPP_INLINE_VISIBILITY operator auto_ptr_ref<_Up>() throw()
        {auto_ptr_ref<_Up> __t; __t.__ptr_ = release(); return __t;}
    template<class _Up> _LIBCPP_INLINE_VISIBILITY operator auto_ptr<_Up>() throw()
        {return auto_ptr<_Up>(release());}
};

template <>
class _LIBCPP_TEMPLATE_VIS _LIBCPP_DEPRECATED_IN_CXX11 auto_ptr<void>
{
public:
    typedef void element_type;
};
#endif

template <class _Tp, int _Idx,
          bool _CanBeEmptyBase =
              is_empty<_Tp>::value && !__libcpp_is_final<_Tp>::value>
struct __compressed_pair_elem {
  typedef _Tp _ParamT;
  typedef _Tp& reference;
  typedef const _Tp& const_reference;

#ifndef _LIBCPP_CXX03_LANG
  _LIBCPP_INLINE_VISIBILITY constexpr __compressed_pair_elem() : __value_() {}

  template <class _Up, class = typename enable_if<
      !is_same<__compressed_pair_elem, typename decay<_Up>::type>::value
  >::type>
  _LIBCPP_INLINE_VISIBILITY
  constexpr explicit
  __compressed_pair_elem(_Up&& __u)
      : __value_(_VSTD::forward<_Up>(__u))
    {
    }

  template <class... _Args, size_t... _Indexes>
  _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
  __compressed_pair_elem(piecewise_construct_t, tuple<_Args...> __args,
                         __tuple_indices<_Indexes...>)
      : __value_(_VSTD::forward<_Args>(_VSTD::get<_Indexes>(__args))...) {}
#else
  _LIBCPP_INLINE_VISIBILITY __compressed_pair_elem() : __value_() {}
  _LIBCPP_INLINE_VISIBILITY
  __compressed_pair_elem(_ParamT __p) : __value_(std::forward<_ParamT>(__p)) {}
#endif

  _LIBCPP_INLINE_VISIBILITY reference __get() _NOEXCEPT { return __value_; }
  _LIBCPP_INLINE_VISIBILITY
  const_reference __get() const _NOEXCEPT { return __value_; }

private:
  _Tp __value_;
};

template <class _Tp, int _Idx>
struct __compressed_pair_elem<_Tp, _Idx, true> : private _Tp {
  typedef _Tp _ParamT;
  typedef _Tp& reference;
  typedef const _Tp& const_reference;
  typedef _Tp __value_type;

#ifndef _LIBCPP_CXX03_LANG
  _LIBCPP_INLINE_VISIBILITY constexpr __compressed_pair_elem() = default;

  template <class _Up, class = typename enable_if<
        !is_same<__compressed_pair_elem, typename decay<_Up>::type>::value
  >::type>
  _LIBCPP_INLINE_VISIBILITY
  constexpr explicit
  __compressed_pair_elem(_Up&& __u)
      : __value_type(_VSTD::forward<_Up>(__u))
  {}

  template <class... _Args, size_t... _Indexes>
  _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
  __compressed_pair_elem(piecewise_construct_t, tuple<_Args...> __args,
                         __tuple_indices<_Indexes...>)
      : __value_type(_VSTD::forward<_Args>(_VSTD::get<_Indexes>(__args))...) {}
#else
  _LIBCPP_INLINE_VISIBILITY __compressed_pair_elem() : __value_type() {}
  _LIBCPP_INLINE_VISIBILITY
  __compressed_pair_elem(_ParamT __p)
      : __value_type(std::forward<_ParamT>(__p)) {}
#endif

  _LIBCPP_INLINE_VISIBILITY reference __get() _NOEXCEPT { return *this; }
  _LIBCPP_INLINE_VISIBILITY
  const_reference __get() const _NOEXCEPT { return *this; }
};

// Tag used to construct the second element of the compressed pair.
struct __second_tag {};

template <class _T1, class _T2>
class __compressed_pair : private __compressed_pair_elem<_T1, 0>,
                          private __compressed_pair_elem<_T2, 1> {
  typedef _LIBCPP_NODEBUG_TYPE __compressed_pair_elem<_T1, 0> _Base1;
  typedef _LIBCPP_NODEBUG_TYPE __compressed_pair_elem<_T2, 1> _Base2;

  // NOTE: This static assert should never fire because __compressed_pair
  // is *almost never* used in a scenario where it's possible for T1 == T2.
  // (The exception is std::function where it is possible that the function
  //  object and the allocator have the same type).
  static_assert((!is_same<_T1, _T2>::value),
    "__compressed_pair cannot be instantated when T1 and T2 are the same type; "
    "The current implementation is NOT ABI-compatible with the previous "
    "implementation for this configuration");

public:
#ifndef _LIBCPP_CXX03_LANG
  template <bool _Dummy = true,
      class = typename enable_if<
          __dependent_type<is_default_constructible<_T1>, _Dummy>::value &&
          __dependent_type<is_default_constructible<_T2>, _Dummy>::value
      >::type
  >
  _LIBCPP_INLINE_VISIBILITY
  constexpr __compressed_pair() {}

  template <class _Tp, typename enable_if<!is_same<typename decay<_Tp>::type,
                                                   __compressed_pair>::value,
                                          bool>::type = true>
  _LIBCPP_INLINE_VISIBILITY constexpr explicit
  __compressed_pair(_Tp&& __t)
      : _Base1(std::forward<_Tp>(__t)), _Base2() {}

  template <class _Tp>
  _LIBCPP_INLINE_VISIBILITY constexpr
  __compressed_pair(__second_tag, _Tp&& __t)
      : _Base1(), _Base2(std::forward<_Tp>(__t)) {}

  template <class _U1, class _U2>
  _LIBCPP_INLINE_VISIBILITY constexpr
  __compressed_pair(_U1&& __t1, _U2&& __t2)
      : _Base1(std::forward<_U1>(__t1)), _Base2(std::forward<_U2>(__t2)) {}

  template <class... _Args1, class... _Args2>
  _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX14
  __compressed_pair(piecewise_construct_t __pc, tuple<_Args1...> __first_args,
                    tuple<_Args2...> __second_args)
      : _Base1(__pc, _VSTD::move(__first_args),
               typename __make_tuple_indices<sizeof...(_Args1)>::type()),
        _Base2(__pc, _VSTD::move(__second_args),
               typename __make_tuple_indices<sizeof...(_Args2)>::type()) {}

#else
  _LIBCPP_INLINE_VISIBILITY
  __compressed_pair() {}

  _LIBCPP_INLINE_VISIBILITY explicit
  __compressed_pair(_T1 __t1) : _Base1(_VSTD::forward<_T1>(__t1)) {}

  _LIBCPP_INLINE_VISIBILITY
  __compressed_pair(__second_tag, _T2 __t2)
      : _Base1(), _Base2(_VSTD::forward<_T2>(__t2)) {}

  _LIBCPP_INLINE_VISIBILITY
  __compressed_pair(_T1 __t1, _T2 __t2)
      : _Base1(_VSTD::forward<_T1>(__t1)), _Base2(_VSTD::forward<_T2>(__t2)) {}
#endif

  _LIBCPP_INLINE_VISIBILITY
  typename _Base1::reference first() _NOEXCEPT {
    return static_cast<_Base1&>(*this).__get();
  }

  _LIBCPP_INLINE_VISIBILITY
  typename _Base1::const_reference first() const _NOEXCEPT {
    return static_cast<_Base1 const&>(*this).__get();
  }

  _LIBCPP_INLINE_VISIBILITY
  typename _Base2::reference second() _NOEXCEPT {
    return static_cast<_Base2&>(*this).__get();
  }

  _LIBCPP_INLINE_VISIBILITY
  typename _Base2::const_reference second() const _NOEXCEPT {
    return static_cast<_Base2 const&>(*this).__get();
  }

  _LIBCPP_INLINE_VISIBILITY
  void swap(__compressed_pair& __x)
    _NOEXCEPT_(__is_nothrow_swappable<_T1>::value &&
               __is_nothrow_swappable<_T2>::value)
  {
    using std::swap;
    swap(first(), __x.first());
    swap(second(), __x.second());
  }
};

template <class _T1, class _T2>
inline _LIBCPP_INLINE_VISIBILITY
void swap(__compressed_pair<_T1, _T2>& __x, __compressed_pair<_T1, _T2>& __y)
    _NOEXCEPT_(__is_nothrow_swappable<_T1>::value &&
               __is_nothrow_swappable<_T2>::value) {
  __x.swap(__y);
}

// default_delete

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS default_delete {
    static_assert(!is_function<_Tp>::value,
                  "default_delete cannot be instantiated for function types");
#ifndef _LIBCPP_CXX03_LANG
  _LIBCPP_INLINE_VISIBILITY constexpr default_delete() _NOEXCEPT = default;
#else
  _LIBCPP_INLINE_VISIBILITY default_delete() {}
#endif
  template <class _Up>
  _LIBCPP_INLINE_VISIBILITY
  default_delete(const default_delete<_Up>&,
                 typename enable_if<is_convertible<_Up*, _Tp*>::value>::type* =
                     0) _NOEXCEPT {}

  _LIBCPP_INLINE_VISIBILITY void operator()(_Tp* __ptr) const _NOEXCEPT {
    static_assert(sizeof(_Tp) > 0,
                  "default_delete can not delete incomplete type");
    static_assert(!is_void<_Tp>::value,
                  "default_delete can not delete incomplete type");
    delete __ptr;
  }
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS default_delete<_Tp[]> {
private:
  template <class _Up>
  struct _EnableIfConvertible
      : enable_if<is_convertible<_Up(*)[], _Tp(*)[]>::value> {};

public:
#ifndef _LIBCPP_CXX03_LANG
  _LIBCPP_INLINE_VISIBILITY constexpr default_delete() _NOEXCEPT = default;
#else
  _LIBCPP_INLINE_VISIBILITY default_delete() {}
#endif

  template <class _Up>
  _LIBCPP_INLINE_VISIBILITY
  default_delete(const default_delete<_Up[]>&,
                 typename _EnableIfConvertible<_Up>::type* = 0) _NOEXCEPT {}

  template <class _Up>
  _LIBCPP_INLINE_VISIBILITY
  typename _EnableIfConvertible<_Up>::type
  operator()(_Up* __ptr) const _NOEXCEPT {
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
class _LIBCPP_TEMPLATE_VIS unique_ptr {
public:
  typedef _Tp element_type;
  typedef _Dp deleter_type;
  typedef _LIBCPP_NODEBUG_TYPE typename __pointer_type<_Tp, deleter_type>::type pointer;

  static_assert(!is_rvalue_reference<deleter_type>::value,
                "the specified deleter type cannot be an rvalue reference");

private:
  __compressed_pair<pointer, deleter_type> __ptr_;

  struct __nat { int __for_bool_; };

  typedef _LIBCPP_NODEBUG_TYPE __unique_ptr_deleter_sfinae<_Dp> _DeleterSFINAE;

  template <bool _Dummy>
  using _LValRefType _LIBCPP_NODEBUG_TYPE =
      typename __dependent_type<_DeleterSFINAE, _Dummy>::__lval_ref_type;

  template <bool _Dummy>
  using _GoodRValRefType _LIBCPP_NODEBUG_TYPE =
      typename __dependent_type<_DeleterSFINAE, _Dummy>::__good_rval_ref_type;

  template <bool _Dummy>
  using _BadRValRefType _LIBCPP_NODEBUG_TYPE  =
      typename __dependent_type<_DeleterSFINAE, _Dummy>::__bad_rval_ref_type;

  template <bool _Dummy, class _Deleter = typename __dependent_type<
                             __identity<deleter_type>, _Dummy>::type>
  using _EnableIfDeleterDefaultConstructible _LIBCPP_NODEBUG_TYPE =
      typename enable_if<is_default_constructible<_Deleter>::value &&
                         !is_pointer<_Deleter>::value>::type;

  template <class _ArgType>
  using _EnableIfDeleterConstructible _LIBCPP_NODEBUG_TYPE  =
      typename enable_if<is_constructible<deleter_type, _ArgType>::value>::type;

  template <class _UPtr, class _Up>
  using _EnableIfMoveConvertible _LIBCPP_NODEBUG_TYPE  = typename enable_if<
      is_convertible<typename _UPtr::pointer, pointer>::value &&
      !is_array<_Up>::value
  >::type;

  template <class _UDel>
  using _EnableIfDeleterConvertible _LIBCPP_NODEBUG_TYPE  = typename enable_if<
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
  _LIBCPP_INLINE_VISIBILITY
  _LIBCPP_CONSTEXPR unique_ptr() _NOEXCEPT : __ptr_(pointer()) {}

  template <bool _Dummy = true,
            class = _EnableIfDeleterDefaultConstructible<_Dummy> >
  _LIBCPP_INLINE_VISIBILITY
  _LIBCPP_CONSTEXPR unique_ptr(nullptr_t) _NOEXCEPT : __ptr_(pointer()) {}

  template <bool _Dummy = true,
            class = _EnableIfDeleterDefaultConstructible<_Dummy> >
  _LIBCPP_INLINE_VISIBILITY
  explicit unique_ptr(pointer __p) _NOEXCEPT : __ptr_(__p) {}

  template <bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_LValRefType<_Dummy> > >
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(pointer __p, _LValRefType<_Dummy> __d) _NOEXCEPT
      : __ptr_(__p, __d) {}

  template <bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_GoodRValRefType<_Dummy> > >
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(pointer __p, _GoodRValRefType<_Dummy> __d) _NOEXCEPT
      : __ptr_(__p, _VSTD::move(__d)) {
    static_assert(!is_reference<deleter_type>::value,
                  "rvalue deleter bound to reference");
  }

  template <bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_BadRValRefType<_Dummy> > >
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(pointer __p, _BadRValRefType<_Dummy> __d) = delete;

  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(unique_ptr&& __u) _NOEXCEPT
      : __ptr_(__u.release(), _VSTD::forward<deleter_type>(__u.get_deleter())) {
  }

  template <class _Up, class _Ep,
      class = _EnableIfMoveConvertible<unique_ptr<_Up, _Ep>, _Up>,
      class = _EnableIfDeleterConvertible<_Ep>
  >
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(unique_ptr<_Up, _Ep>&& __u) _NOEXCEPT
      : __ptr_(__u.release(), _VSTD::forward<_Ep>(__u.get_deleter())) {}


#if 0 /* evaluated by -frewrite-includes */
  template <class _Up>
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(auto_ptr<_Up>&& __p,
             typename enable_if<is_convertible<_Up*, _Tp*>::value &&
                                    is_same<_Dp, default_delete<_Tp> >::value,
                                __nat>::type = __nat()) _NOEXCEPT
      : __ptr_(__p.release()) {}
#endif

  _LIBCPP_INLINE_VISIBILITY
  unique_ptr& operator=(unique_ptr&& __u) _NOEXCEPT {
    reset(__u.release());
    __ptr_.second() = _VSTD::forward<deleter_type>(__u.get_deleter());
    return *this;
  }

  template <class _Up, class _Ep,
      class = _EnableIfMoveConvertible<unique_ptr<_Up, _Ep>, _Up>,
      class = _EnableIfDeleterAssignable<_Ep>
  >
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr& operator=(unique_ptr<_Up, _Ep>&& __u) _NOEXCEPT {
    reset(__u.release());
    __ptr_.second() = _VSTD::forward<_Ep>(__u.get_deleter());
    return *this;
  }


#if 0 /* evaluated by -frewrite-includes */
  template <class _Up>
  _LIBCPP_INLINE_VISIBILITY
      typename enable_if<is_convertible<_Up*, _Tp*>::value &&
                             is_same<_Dp, default_delete<_Tp> >::value,
                         unique_ptr&>::type
      operator=(auto_ptr<_Up> __p) {
    reset(__p.release());
    return *this;
  }
#endif

#ifdef _LIBCPP_CXX03_LANG
  unique_ptr(unique_ptr const&) = delete;
  unique_ptr& operator=(unique_ptr const&) = delete;
#endif


  _LIBCPP_INLINE_VISIBILITY
  ~unique_ptr() { reset(); }

  _LIBCPP_INLINE_VISIBILITY
  unique_ptr& operator=(nullptr_t) _NOEXCEPT {
    reset();
    return *this;
  }

  _LIBCPP_INLINE_VISIBILITY
  typename add_lvalue_reference<_Tp>::type
  operator*() const {
    return *__ptr_.first();
  }
  _LIBCPP_INLINE_VISIBILITY
  pointer operator->() const _NOEXCEPT {
    return __ptr_.first();
  }
  _LIBCPP_INLINE_VISIBILITY
  pointer get() const _NOEXCEPT {
    return __ptr_.first();
  }
  _LIBCPP_INLINE_VISIBILITY
  deleter_type& get_deleter() _NOEXCEPT {
    return __ptr_.second();
  }
  _LIBCPP_INLINE_VISIBILITY
  const deleter_type& get_deleter() const _NOEXCEPT {
    return __ptr_.second();
  }
  _LIBCPP_INLINE_VISIBILITY
  _LIBCPP_EXPLICIT operator bool() const _NOEXCEPT {
    return __ptr_.first() != nullptr;
  }

  _LIBCPP_INLINE_VISIBILITY
  pointer release() _NOEXCEPT {
    pointer __t = __ptr_.first();
    __ptr_.first() = pointer();
    return __t;
  }

  _LIBCPP_INLINE_VISIBILITY
  void reset(pointer __p = pointer()) _NOEXCEPT {
    pointer __tmp = __ptr_.first();
    __ptr_.first() = __p;
    if (__tmp)
      __ptr_.second()(__tmp);
  }

  _LIBCPP_INLINE_VISIBILITY
  void swap(unique_ptr& __u) _NOEXCEPT {
    __ptr_.swap(__u.__ptr_);
  }
};


template <class _Tp, class _Dp>
class _LIBCPP_TEMPLATE_VIS unique_ptr<_Tp[], _Dp> {
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
  using _LValRefType _LIBCPP_NODEBUG_TYPE =
      typename __dependent_type<_DeleterSFINAE, _Dummy>::__lval_ref_type;

  template <bool _Dummy>
  using _GoodRValRefType _LIBCPP_NODEBUG_TYPE =
      typename __dependent_type<_DeleterSFINAE, _Dummy>::__good_rval_ref_type;

  template <bool _Dummy>
  using _BadRValRefType _LIBCPP_NODEBUG_TYPE =
      typename __dependent_type<_DeleterSFINAE, _Dummy>::__bad_rval_ref_type;

  template <bool _Dummy, class _Deleter = typename __dependent_type<
                             __identity<deleter_type>, _Dummy>::type>
  using _EnableIfDeleterDefaultConstructible _LIBCPP_NODEBUG_TYPE  =
      typename enable_if<is_default_constructible<_Deleter>::value &&
                         !is_pointer<_Deleter>::value>::type;

  template <class _ArgType>
  using _EnableIfDeleterConstructible _LIBCPP_NODEBUG_TYPE  =
      typename enable_if<is_constructible<deleter_type, _ArgType>::value>::type;

  template <class _Pp>
  using _EnableIfPointerConvertible _LIBCPP_NODEBUG_TYPE  = typename enable_if<
      _CheckArrayPointerConversion<_Pp>::value
  >::type;

  template <class _UPtr, class _Up,
        class _ElemT = typename _UPtr::element_type>
  using _EnableIfMoveConvertible _LIBCPP_NODEBUG_TYPE  = typename enable_if<
      is_array<_Up>::value &&
      is_same<pointer, element_type*>::value &&
      is_same<typename _UPtr::pointer, _ElemT*>::value &&
      is_convertible<_ElemT(*)[], element_type(*)[]>::value
    >::type;

  template <class _UDel>
  using _EnableIfDeleterConvertible _LIBCPP_NODEBUG_TYPE  = typename enable_if<
      (is_reference<_Dp>::value && is_same<_Dp, _UDel>::value) ||
      (!is_reference<_Dp>::value && is_convertible<_UDel, _Dp>::value)
    >::type;

  template <class _UDel>
  using _EnableIfDeleterAssignable _LIBCPP_NODEBUG_TYPE  = typename enable_if<
      is_assignable<_Dp&, _UDel&&>::value
    >::type;

public:
  template <bool _Dummy = true,
            class = _EnableIfDeleterDefaultConstructible<_Dummy> >
  _LIBCPP_INLINE_VISIBILITY
  _LIBCPP_CONSTEXPR unique_ptr() _NOEXCEPT : __ptr_(pointer()) {}

  template <bool _Dummy = true,
            class = _EnableIfDeleterDefaultConstructible<_Dummy> >
  _LIBCPP_INLINE_VISIBILITY
  _LIBCPP_CONSTEXPR unique_ptr(nullptr_t) _NOEXCEPT : __ptr_(pointer()) {}

  template <class _Pp, bool _Dummy = true,
            class = _EnableIfDeleterDefaultConstructible<_Dummy>,
            class = _EnableIfPointerConvertible<_Pp> >
  _LIBCPP_INLINE_VISIBILITY
  explicit unique_ptr(_Pp __p) _NOEXCEPT
      : __ptr_(__p) {}

  template <class _Pp, bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_LValRefType<_Dummy> >,
            class = _EnableIfPointerConvertible<_Pp> >
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(_Pp __p, _LValRefType<_Dummy> __d) _NOEXCEPT
      : __ptr_(__p, __d) {}

  template <bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_LValRefType<_Dummy> > >
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(nullptr_t, _LValRefType<_Dummy> __d) _NOEXCEPT
      : __ptr_(nullptr, __d) {}

  template <class _Pp, bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_GoodRValRefType<_Dummy> >,
            class = _EnableIfPointerConvertible<_Pp> >
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(_Pp __p, _GoodRValRefType<_Dummy> __d) _NOEXCEPT
      : __ptr_(__p, _VSTD::move(__d)) {
    static_assert(!is_reference<deleter_type>::value,
                  "rvalue deleter bound to reference");
  }

  template <bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_GoodRValRefType<_Dummy> > >
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(nullptr_t, _GoodRValRefType<_Dummy> __d) _NOEXCEPT
      : __ptr_(nullptr, _VSTD::move(__d)) {
    static_assert(!is_reference<deleter_type>::value,
                  "rvalue deleter bound to reference");
  }

  template <class _Pp, bool _Dummy = true,
            class = _EnableIfDeleterConstructible<_BadRValRefType<_Dummy> >,
            class = _EnableIfPointerConvertible<_Pp> >
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(_Pp __p, _BadRValRefType<_Dummy> __d) = delete;

  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(unique_ptr&& __u) _NOEXCEPT
      : __ptr_(__u.release(), _VSTD::forward<deleter_type>(__u.get_deleter())) {
  }

  _LIBCPP_INLINE_VISIBILITY
  unique_ptr& operator=(unique_ptr&& __u) _NOEXCEPT {
    reset(__u.release());
    __ptr_.second() = _VSTD::forward<deleter_type>(__u.get_deleter());
    return *this;
  }

  template <class _Up, class _Ep,
      class = _EnableIfMoveConvertible<unique_ptr<_Up, _Ep>, _Up>,
      class = _EnableIfDeleterConvertible<_Ep>
  >
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr(unique_ptr<_Up, _Ep>&& __u) _NOEXCEPT
      : __ptr_(__u.release(), _VSTD::forward<_Ep>(__u.get_deleter())) {
  }

  template <class _Up, class _Ep,
      class = _EnableIfMoveConvertible<unique_ptr<_Up, _Ep>, _Up>,
      class = _EnableIfDeleterAssignable<_Ep>
  >
  _LIBCPP_INLINE_VISIBILITY
  unique_ptr&
  operator=(unique_ptr<_Up, _Ep>&& __u) _NOEXCEPT {
    reset(__u.release());
    __ptr_.second() = _VSTD::forward<_Ep>(__u.get_deleter());
    return *this;
  }

#ifdef _LIBCPP_CXX03_LANG
  unique_ptr(unique_ptr const&) = delete;
  unique_ptr& operator=(unique_ptr const&) = delete;
#endif

public:
  _LIBCPP_INLINE_VISIBILITY
  ~unique_ptr() { reset(); }

  _LIBCPP_INLINE_VISIBILITY
  unique_ptr& operator=(nullptr_t) _NOEXCEPT {
    reset();
    return *this;
  }

  _LIBCPP_INLINE_VISIBILITY
  typename add_lvalue_reference<_Tp>::type
  operator[](size_t __i) const {
    return __ptr_.first()[__i];
  }
  _LIBCPP_INLINE_VISIBILITY
  pointer get() const _NOEXCEPT {
    return __ptr_.first();
  }

  _LIBCPP_INLINE_VISIBILITY
  deleter_type& get_deleter() _NOEXCEPT {
    return __ptr_.second();
  }

  _LIBCPP_INLINE_VISIBILITY
  const deleter_type& get_deleter() const _NOEXCEPT {
    return __ptr_.second();
  }
  _LIBCPP_INLINE_VISIBILITY
  _LIBCPP_EXPLICIT operator bool() const _NOEXCEPT {
    return __ptr_.first() != nullptr;
  }

  _LIBCPP_INLINE_VISIBILITY
  pointer release() _NOEXCEPT {
    pointer __t = __ptr_.first();
    __ptr_.first() = pointer();
    return __t;
  }

  template <class _Pp>
  _LIBCPP_INLINE_VISIBILITY
  typename enable_if<
      _CheckArrayPointerConversion<_Pp>::value
  >::type
  reset(_Pp __p) _NOEXCEPT {
    pointer __tmp = __ptr_.first();
    __ptr_.first() = __p;
    if (__tmp)
      __ptr_.second()(__tmp);
  }

  _LIBCPP_INLINE_VISIBILITY
  void reset(nullptr_t = nullptr) _NOEXCEPT {
    pointer __tmp = __ptr_.first();
    __ptr_.first() = nullptr;
    if (__tmp)
      __ptr_.second()(__tmp);
  }

  _LIBCPP_INLINE_VISIBILITY
  void swap(unique_ptr& __u) _NOEXCEPT {
    __ptr_.swap(__u.__ptr_);
  }

};

template <class _Tp, class _Dp>
inline _LIBCPP_INLINE_VISIBILITY
typename enable_if<
    __is_swappable<_Dp>::value,
    void
>::type
swap(unique_ptr<_Tp, _Dp>& __x, unique_ptr<_Tp, _Dp>& __y) _NOEXCEPT {__x.swap(__y);}

template <class _T1, class _D1, class _T2, class _D2>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator==(const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y) {return __x.get() == __y.get();}

template <class _T1, class _D1, class _T2, class _D2>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator!=(const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y) {return !(__x == __y);}

template <class _T1, class _D1, class _T2, class _D2>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator< (const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y)
{
    typedef typename unique_ptr<_T1, _D1>::pointer _P1;
    typedef typename unique_ptr<_T2, _D2>::pointer _P2;
    typedef typename common_type<_P1, _P2>::type _Vp;
    return less<_Vp>()(__x.get(), __y.get());
}

template <class _T1, class _D1, class _T2, class _D2>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator> (const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y) {return __y < __x;}

template <class _T1, class _D1, class _T2, class _D2>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator<=(const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y) {return !(__y < __x);}

template <class _T1, class _D1, class _T2, class _D2>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator>=(const unique_ptr<_T1, _D1>& __x, const unique_ptr<_T2, _D2>& __y) {return !(__x < __y);}

template <class _T1, class _D1>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator==(const unique_ptr<_T1, _D1>& __x, nullptr_t) _NOEXCEPT
{
    return !__x;
}

template <class _T1, class _D1>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator==(nullptr_t, const unique_ptr<_T1, _D1>& __x) _NOEXCEPT
{
    return !__x;
}

template <class _T1, class _D1>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator!=(const unique_ptr<_T1, _D1>& __x, nullptr_t) _NOEXCEPT
{
    return static_cast<bool>(__x);
}

template <class _T1, class _D1>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator!=(nullptr_t, const unique_ptr<_T1, _D1>& __x) _NOEXCEPT
{
    return static_cast<bool>(__x);
}

template <class _T1, class _D1>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator<(const unique_ptr<_T1, _D1>& __x, nullptr_t)
{
    typedef typename unique_ptr<_T1, _D1>::pointer _P1;
    return less<_P1>()(__x.get(), nullptr);
}

template <class _T1, class _D1>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator<(nullptr_t, const unique_ptr<_T1, _D1>& __x)
{
    typedef typename unique_ptr<_T1, _D1>::pointer _P1;
    return less<_P1>()(nullptr, __x.get());
}

template <class _T1, class _D1>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator>(const unique_ptr<_T1, _D1>& __x, nullptr_t)
{
    return nullptr < __x;
}

template <class _T1, class _D1>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator>(nullptr_t, const unique_ptr<_T1, _D1>& __x)
{
    return __x < nullptr;
}

template <class _T1, class _D1>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator<=(const unique_ptr<_T1, _D1>& __x, nullptr_t)
{
    return !(nullptr < __x);
}

template <class _T1, class _D1>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator<=(nullptr_t, const unique_ptr<_T1, _D1>& __x)
{
    return !(__x < nullptr);
}

template <class _T1, class _D1>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator>=(const unique_ptr<_T1, _D1>& __x, nullptr_t)
{
    return !(__x < nullptr);
}

template <class _T1, class _D1>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator>=(nullptr_t, const unique_ptr<_T1, _D1>& __x)
{
    return !(nullptr < __x);
}


#if 1 /* evaluated by -frewrite-includes */

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
inline _LIBCPP_INLINE_VISIBILITY
typename __unique_if<_Tp>::__unique_single
make_unique(_Args&&... __args)
{
    return unique_ptr<_Tp>(new _Tp(_VSTD::forward<_Args>(__args)...));
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
typename __unique_if<_Tp>::__unique_array_unknown_bound
make_unique(size_t __n)
{
    typedef typename remove_extent<_Tp>::type _Up;
    return unique_ptr<_Tp>(new _Up[__n]());
}

template<class _Tp, class... _Args>
    typename __unique_if<_Tp>::__unique_array_known_bound
    make_unique(_Args&&...) = delete;

#endif  // _LIBCPP_STD_VER > 11

template <class _Tp, class _Dp>
#ifdef _LIBCPP_CXX03_LANG
struct _LIBCPP_TEMPLATE_VIS hash<unique_ptr<_Tp, _Dp> >
#else
struct _LIBCPP_TEMPLATE_VIS hash<__enable_hash_helper<
    unique_ptr<_Tp, _Dp>, typename unique_ptr<_Tp, _Dp>::pointer> >
#endif
{
    typedef unique_ptr<_Tp, _Dp> argument_type;
    typedef size_t               result_type;
    _LIBCPP_INLINE_VISIBILITY
    result_type operator()(const argument_type& __ptr) const
    {
        typedef typename argument_type::pointer pointer;
        return hash<pointer>()(__ptr.get());
    }
};

struct __destruct_n
{
private:
    size_t __size_;

    template <class _Tp>
    _LIBCPP_INLINE_VISIBILITY void __process(_Tp* __p, false_type) _NOEXCEPT
        {for (size_t __i = 0; __i < __size_; ++__i, ++__p) __p->~_Tp();}

    template <class _Tp>
    _LIBCPP_INLINE_VISIBILITY void __process(_Tp*, true_type) _NOEXCEPT
        {}

    _LIBCPP_INLINE_VISIBILITY void __incr(false_type) _NOEXCEPT
        {++__size_;}
    _LIBCPP_INLINE_VISIBILITY void __incr(true_type) _NOEXCEPT
        {}

    _LIBCPP_INLINE_VISIBILITY void __set(size_t __s, false_type) _NOEXCEPT
        {__size_ = __s;}
    _LIBCPP_INLINE_VISIBILITY void __set(size_t, true_type) _NOEXCEPT
        {}
public:
    _LIBCPP_INLINE_VISIBILITY explicit __destruct_n(size_t __s) _NOEXCEPT
        : __size_(__s) {}

    template <class _Tp>
    _LIBCPP_INLINE_VISIBILITY void __incr(_Tp*) _NOEXCEPT
        {__incr(integral_constant<bool, is_trivially_destructible<_Tp>::value>());}

    template <class _Tp>
    _LIBCPP_INLINE_VISIBILITY void __set(size_t __s, _Tp*) _NOEXCEPT
        {__set(__s, integral_constant<bool, is_trivially_destructible<_Tp>::value>());}

    template <class _Tp>
    _LIBCPP_INLINE_VISIBILITY void operator()(_Tp* __p) _NOEXCEPT
        {__process(__p, integral_constant<bool, is_trivially_destructible<_Tp>::value>());}
};

template <class _Alloc>
class __allocator_destructor
{
    typedef _LIBCPP_NODEBUG_TYPE allocator_traits<_Alloc> __alloc_traits;
public:
    typedef _LIBCPP_NODEBUG_TYPE typename __alloc_traits::pointer pointer;
    typedef _LIBCPP_NODEBUG_TYPE typename __alloc_traits::size_type size_type;
private:
    _Alloc& __alloc_;
    size_type __s_;
public:
    _LIBCPP_INLINE_VISIBILITY __allocator_destructor(_Alloc& __a, size_type __s)
             _NOEXCEPT
        : __alloc_(__a), __s_(__s) {}
    _LIBCPP_INLINE_VISIBILITY
    void operator()(pointer __p) _NOEXCEPT
        {__alloc_traits::deallocate(__alloc_, __p, __s_);}
};

template <class _InputIterator, class _ForwardIterator>
_ForwardIterator
uninitialized_copy(_InputIterator __f, _InputIterator __l, _ForwardIterator __r)
{
    typedef typename iterator_traits<_ForwardIterator>::value_type value_type;
#ifndef _LIBCPP_NO_EXCEPTIONS
    _ForwardIterator __s = __r;
    try
    {
#endif
        for (; __f != __l; ++__f, (void) ++__r)
            ::new (static_cast<void*>(_VSTD::addressof(*__r))) value_type(*__f);
#ifndef _LIBCPP_NO_EXCEPTIONS
    }
    catch (...)
    {
        for (; __s != __r; ++__s)
            __s->~value_type();
        throw;
    }
#endif
    return __r;
}

template <class _InputIterator, class _Size, class _ForwardIterator>
_ForwardIterator
uninitialized_copy_n(_InputIterator __f, _Size __n, _ForwardIterator __r)
{
    typedef typename iterator_traits<_ForwardIterator>::value_type value_type;
#ifndef _LIBCPP_NO_EXCEPTIONS
    _ForwardIterator __s = __r;
    try
    {
#endif
        for (; __n > 0; ++__f, (void) ++__r, (void) --__n)
            ::new (static_cast<void*>(_VSTD::addressof(*__r))) value_type(*__f);
#ifndef _LIBCPP_NO_EXCEPTIONS
    }
    catch (...)
    {
        for (; __s != __r; ++__s)
            __s->~value_type();
        throw;
    }
#endif
    return __r;
}

template <class _ForwardIterator, class _Tp>
void
uninitialized_fill(_ForwardIterator __f, _ForwardIterator __l, const _Tp& __x)
{
    typedef typename iterator_traits<_ForwardIterator>::value_type value_type;
#ifndef _LIBCPP_NO_EXCEPTIONS
    _ForwardIterator __s = __f;
    try
    {
#endif
        for (; __f != __l; ++__f)
            ::new (static_cast<void*>(_VSTD::addressof(*__f))) value_type(__x);
#ifndef _LIBCPP_NO_EXCEPTIONS
    }
    catch (...)
    {
        for (; __s != __f; ++__s)
            __s->~value_type();
        throw;
    }
#endif
}

template <class _ForwardIterator, class _Size, class _Tp>
_ForwardIterator
uninitialized_fill_n(_ForwardIterator __f, _Size __n, const _Tp& __x)
{
    typedef typename iterator_traits<_ForwardIterator>::value_type value_type;
#ifndef _LIBCPP_NO_EXCEPTIONS
    _ForwardIterator __s = __f;
    try
    {
#endif
        for (; __n > 0; ++__f, (void) --__n)
            ::new (static_cast<void*>(_VSTD::addressof(*__f))) value_type(__x);
#ifndef _LIBCPP_NO_EXCEPTIONS
    }
    catch (...)
    {
        for (; __s != __f; ++__s)
            __s->~value_type();
        throw;
    }
#endif
    return __f;
}

#if 1 /* evaluated by -frewrite-includes */


template <class _ForwardIterator>
inline _LIBCPP_INLINE_VISIBILITY
void uninitialized_default_construct(_ForwardIterator __first, _ForwardIterator __last) {
    using _Vt = typename iterator_traits<_ForwardIterator>::value_type;
    auto __idx = __first;
#ifndef _LIBCPP_NO_EXCEPTIONS
    try {
#endif
    for (; __idx != __last; ++__idx)
        ::new((void*)_VSTD::addressof(*__idx)) _Vt;
#ifndef _LIBCPP_NO_EXCEPTIONS
    } catch (...) {
        _VSTD::destroy(__first, __idx);
        throw;
    }
#endif
}

template <class _ForwardIterator, class _Size>
inline _LIBCPP_INLINE_VISIBILITY
_ForwardIterator uninitialized_default_construct_n(_ForwardIterator __first, _Size __n) {
    using _Vt = typename iterator_traits<_ForwardIterator>::value_type;
    auto __idx = __first;
#ifndef _LIBCPP_NO_EXCEPTIONS
    try {
#endif
    for (; __n > 0; (void)++__idx, --__n)
        ::new((void*)_VSTD::addressof(*__idx)) _Vt;
    return __idx;
#ifndef _LIBCPP_NO_EXCEPTIONS
    } catch (...) {
        _VSTD::destroy(__first, __idx);
        throw;
    }
#endif
}


template <class _ForwardIterator>
inline _LIBCPP_INLINE_VISIBILITY
void uninitialized_value_construct(_ForwardIterator __first, _ForwardIterator __last) {
    using _Vt = typename iterator_traits<_ForwardIterator>::value_type;
    auto __idx = __first;
#ifndef _LIBCPP_NO_EXCEPTIONS
    try {
#endif
    for (; __idx != __last; ++__idx)
        ::new((void*)_VSTD::addressof(*__idx)) _Vt();
#ifndef _LIBCPP_NO_EXCEPTIONS
    } catch (...) {
        _VSTD::destroy(__first, __idx);
        throw;
    }
#endif
}

template <class _ForwardIterator, class _Size>
inline _LIBCPP_INLINE_VISIBILITY
_ForwardIterator uninitialized_value_construct_n(_ForwardIterator __first, _Size __n) {
    using _Vt = typename iterator_traits<_ForwardIterator>::value_type;
    auto __idx = __first;
    for (; __n > 0; (void)++__idx, --__n)
        ::new((void*)_VSTD::addressof(*__idx)) _Vt();
    return __idx;
}


template <class _InputIt, class _ForwardIt>
inline _LIBCPP_INLINE_VISIBILITY
_ForwardIt uninitialized_move(_InputIt __first, _InputIt __last, _ForwardIt __first_res) {
    using _Vt = typename iterator_traits<_ForwardIt>::value_type;
    auto __idx = __first_res;
    for (; __first != __last; (void)++__idx, ++__first)
        ::new((void*)_VSTD::addressof(*__idx)) _Vt(std::move(*__first));
    return __idx;
}

template <class _InputIt, class _Size, class _ForwardIt>
inline _LIBCPP_INLINE_VISIBILITY
pair<_InputIt, _ForwardIt>
uninitialized_move_n(_InputIt __first, _Size __n, _ForwardIt __first_res) {
    using _Vt = typename iterator_traits<_ForwardIt>::value_type;
    auto __idx = __first_res;
    for (; __n > 0; ++__idx, (void)++__first, --__n)
        ::new((void*)_VSTD::addressof(*__idx)) _Vt(std::move(*__first));
    return {__first, __idx};
}


#endif // _LIBCPP_STD_VER > 14

// NOTE: Relaxed and acq/rel atomics (for increment and decrement respectively)
// should be sufficient for thread safety.
// See https://bugs.llvm.org/show_bug.cgi?id=22803

#if 1 /* evaluated by -frewrite-includes */
#   define _LIBCPP_HAS_BUILTIN_ATOMIC_SUPPORT

#elif 0 /* evaluated by -frewrite-includes */
#   define _LIBCPP_HAS_BUILTIN_ATOMIC_SUPPORT
#endif

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _Tp
__libcpp_atomic_refcount_increment(_Tp& __t) _NOEXCEPT
{

#if 1 /* evaluated by -frewrite-includes */
    return __atomic_add_fetch(&__t, 1, __ATOMIC_RELAXED);
#else
    return __t += 1;
#endif
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _Tp
__libcpp_atomic_refcount_decrement(_Tp& __t) _NOEXCEPT
{
#if 1 /* evaluated by -frewrite-includes */
    return __atomic_add_fetch(&__t, -1, __ATOMIC_ACQ_REL);
#else
    return __t -= 1;
#endif
}

class _LIBCPP_EXCEPTION_ABI bad_weak_ptr
    : public std::exception
{
public:
    virtual ~bad_weak_ptr() _NOEXCEPT;
    virtual const char* what() const  _NOEXCEPT;
};

template<class _Tp> class _LIBCPP_TEMPLATE_VIS weak_ptr;

class _LIBCPP_TYPE_VIS __shared_count
{
    __shared_count(const __shared_count&);
    __shared_count& operator=(const __shared_count&);

protected:
    long __shared_owners_;
    virtual ~__shared_count();
private:
    virtual void __on_zero_shared() _NOEXCEPT = 0;

public:
    _LIBCPP_INLINE_VISIBILITY
    explicit __shared_count(long __refs = 0) _NOEXCEPT
        : __shared_owners_(__refs) {}


#if 0 /* evaluated by -frewrite-includes */
    void __add_shared() _NOEXCEPT;
    bool __release_shared() _NOEXCEPT;
#else
    _LIBCPP_INLINE_VISIBILITY
    void __add_shared() _NOEXCEPT {
      __libcpp_atomic_refcount_increment(__shared_owners_);
    }
    _LIBCPP_INLINE_VISIBILITY
    bool __release_shared() _NOEXCEPT {
      if (__libcpp_atomic_refcount_decrement(__shared_owners_) == -1) {
        __on_zero_shared();
        return true;
      }
      return false;
    }
#endif
    _LIBCPP_INLINE_VISIBILITY
    long use_count() const _NOEXCEPT {
        return __libcpp_relaxed_load(&__shared_owners_) + 1;
    }
};

class _LIBCPP_TYPE_VIS __shared_weak_count
    : private __shared_count
{
    long __shared_weak_owners_;

public:
    _LIBCPP_INLINE_VISIBILITY
    explicit __shared_weak_count(long __refs = 0) _NOEXCEPT
        : __shared_count(__refs),
          __shared_weak_owners_(__refs) {}
protected:
    virtual ~__shared_weak_count();

public:
    _LIBCPP_INLINE_VISIBILITY
    void __add_shared() _NOEXCEPT {
      __shared_count::__add_shared();
    }
    _LIBCPP_INLINE_VISIBILITY
    void __add_weak() _NOEXCEPT {
      __libcpp_atomic_refcount_increment(__shared_weak_owners_);
    }
    _LIBCPP_INLINE_VISIBILITY
    void __release_shared() _NOEXCEPT {
      if (__shared_count::__release_shared())
        __release_weak();
    }
    void __release_weak() _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    long use_count() const _NOEXCEPT {return __shared_count::use_count();}
    __shared_weak_count* lock() _NOEXCEPT;

    // Define the function out only if we build static libc++ without RTTI.
    // Otherwise we may break clients who need to compile their projects with
    // -fno-rtti and yet link against a libc++.dylib compiled
    // without -fno-rtti.

#if 1 /* evaluated by -frewrite-includes */
    virtual const void* __get_deleter(const type_info&) const _NOEXCEPT;
#endif
private:
    virtual void __on_zero_shared_weak() _NOEXCEPT = 0;
};

template <class _Tp, class _Dp, class _Alloc>
class __shared_ptr_pointer
    : public __shared_weak_count
{
    __compressed_pair<__compressed_pair<_Tp, _Dp>, _Alloc> __data_;
public:
    _LIBCPP_INLINE_VISIBILITY
    __shared_ptr_pointer(_Tp __p, _Dp __d, _Alloc __a)
        :  __data_(__compressed_pair<_Tp, _Dp>(__p, _VSTD::move(__d)), _VSTD::move(__a)) {}

#ifndef _LIBCPP_NO_RTTI
    virtual const void* __get_deleter(const type_info&) const _NOEXCEPT;
#endif

private:
    virtual void __on_zero_shared() _NOEXCEPT;
    virtual void __on_zero_shared_weak() _NOEXCEPT;
};

#ifndef _LIBCPP_NO_RTTI

template <class _Tp, class _Dp, class _Alloc>
const void*
__shared_ptr_pointer<_Tp, _Dp, _Alloc>::__get_deleter(const type_info& __t) const _NOEXCEPT
{
    return __t == typeid(_Dp) ? _VSTD::addressof(__data_.first().second()) : nullptr;
}

#endif  // _LIBCPP_NO_RTTI

template <class _Tp, class _Dp, class _Alloc>
void
__shared_ptr_pointer<_Tp, _Dp, _Alloc>::__on_zero_shared() _NOEXCEPT
{
    __data_.first().second()(__data_.first().first());
    __data_.first().second().~_Dp();
}

template <class _Tp, class _Dp, class _Alloc>
void
__shared_ptr_pointer<_Tp, _Dp, _Alloc>::__on_zero_shared_weak() _NOEXCEPT
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
#ifndef _LIBCPP_HAS_NO_VARIADICS

    _LIBCPP_INLINE_VISIBILITY
    __shared_ptr_emplace(_Alloc __a)
        :  __data_(_VSTD::move(__a)) {}

    template <class ..._Args>
        _LIBCPP_INLINE_VISIBILITY
        __shared_ptr_emplace(_Alloc __a, _Args&& ...__args)
            :  __data_(piecewise_construct, _VSTD::forward_as_tuple(__a),
                   _VSTD::forward_as_tuple(_VSTD::forward<_Args>(__args)...)) {}
#endif  // _LIBCPP_HAS_NO_VARIADICS

private:
    virtual void __on_zero_shared() _NOEXCEPT;
    virtual void __on_zero_shared_weak() _NOEXCEPT;
public:
    _LIBCPP_INLINE_VISIBILITY
    _Tp* get() _NOEXCEPT {return _VSTD::addressof(__data_.second());}
};

template <class _Tp, class _Alloc>
void
__shared_ptr_emplace<_Tp, _Alloc>::__on_zero_shared() _NOEXCEPT
{
    __data_.second().~_Tp();
}

template <class _Tp, class _Alloc>
void
__shared_ptr_emplace<_Tp, _Alloc>::__on_zero_shared_weak() _NOEXCEPT
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
class _LIBCPP_TEMPLATE_VIS allocator<__shared_ptr_dummy_rebind_allocator_type>
{
public:
    template <class _Other>
    struct rebind
    {
        typedef allocator<_Other> other;
    };
};

template<class _Tp> class _LIBCPP_TEMPLATE_VIS enable_shared_from_this;

template<class _Tp>
class _LIBCPP_TEMPLATE_VIS shared_ptr
{
public:
    typedef _Tp element_type;

#if 1 /* evaluated by -frewrite-includes */
    typedef weak_ptr<_Tp> weak_type;
#endif
private:
    element_type*      __ptr_;
    __shared_weak_count* __cntrl_;

    struct __nat {int __for_bool_;};
public:
    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR shared_ptr() _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR shared_ptr(nullptr_t) _NOEXCEPT;
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
    template<class _Yp> _LIBCPP_INLINE_VISIBILITY shared_ptr(const shared_ptr<_Yp>& __r, element_type* __p) _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    shared_ptr(const shared_ptr& __r) _NOEXCEPT;
    template<class _Yp>
        _LIBCPP_INLINE_VISIBILITY
        shared_ptr(const shared_ptr<_Yp>& __r,
                   typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type = __nat())
                       _NOEXCEPT;
#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES
    _LIBCPP_INLINE_VISIBILITY
    shared_ptr(shared_ptr&& __r) _NOEXCEPT;
    template<class _Yp> _LIBCPP_INLINE_VISIBILITY  shared_ptr(shared_ptr<_Yp>&& __r,
                   typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type = __nat())
                       _NOEXCEPT;
#endif  // _LIBCPP_HAS_NO_RVALUE_REFERENCES
    template<class _Yp> explicit shared_ptr(const weak_ptr<_Yp>& __r,
                   typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type= __nat());

#if 0 /* evaluated by -frewrite-includes */
#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES
    template<class _Yp>
        shared_ptr(auto_ptr<_Yp>&& __r,
                   typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type = __nat());
#else
    template<class _Yp>
        shared_ptr(auto_ptr<_Yp> __r,
                   typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type = __nat());
#endif
#endif
#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES
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
#else  // _LIBCPP_HAS_NO_RVALUE_REFERENCES
    template <class _Yp, class _Dp>
        shared_ptr(unique_ptr<_Yp, _Dp>,
                   typename enable_if
                   <
                       !is_lvalue_reference<_Dp>::value &&
                       !is_array<_Yp>::value &&
                       is_convertible<typename unique_ptr<_Yp, _Dp>::pointer, element_type*>::value,
                       __nat
                   >::type = __nat());
    template <class _Yp, class _Dp>
        shared_ptr(unique_ptr<_Yp, _Dp>,
                   typename enable_if
                   <
                       is_lvalue_reference<_Dp>::value &&
                       !is_array<_Yp>::value &&
                       is_convertible<typename unique_ptr<_Yp, _Dp>::pointer, element_type*>::value,
                       __nat
                   >::type = __nat());
#endif  // _LIBCPP_HAS_NO_RVALUE_REFERENCES

    ~shared_ptr();

    _LIBCPP_INLINE_VISIBILITY
    shared_ptr& operator=(const shared_ptr& __r) _NOEXCEPT;
    template<class _Yp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            shared_ptr&
        >::type
        _LIBCPP_INLINE_VISIBILITY
        operator=(const shared_ptr<_Yp>& __r) _NOEXCEPT;
#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES
    _LIBCPP_INLINE_VISIBILITY
    shared_ptr& operator=(shared_ptr&& __r) _NOEXCEPT;
    template<class _Yp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            shared_ptr<_Tp>&
        >::type
        _LIBCPP_INLINE_VISIBILITY
        operator=(shared_ptr<_Yp>&& __r);

#if 0 /* evaluated by -frewrite-includes */
    template<class _Yp>
        _LIBCPP_INLINE_VISIBILITY
        typename enable_if
        <
            !is_array<_Yp>::value &&
            is_convertible<_Yp*, element_type*>::value,
            shared_ptr
        >::type&
        operator=(auto_ptr<_Yp>&& __r);
#endif
#else  // _LIBCPP_HAS_NO_RVALUE_REFERENCES

#if 0 /* evaluated by -frewrite-includes */
    template<class _Yp>
        _LIBCPP_INLINE_VISIBILITY
        typename enable_if
        <
            !is_array<_Yp>::value &&
            is_convertible<_Yp*, element_type*>::value,
            shared_ptr&
        >::type
        operator=(auto_ptr<_Yp> __r);
#endif
#endif
    template <class _Yp, class _Dp>
        typename enable_if
        <
            !is_array<_Yp>::value &&
            is_convertible<typename unique_ptr<_Yp, _Dp>::pointer, element_type*>::value,
            shared_ptr&
        >::type
#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES
        _LIBCPP_INLINE_VISIBILITY
        operator=(unique_ptr<_Yp, _Dp>&& __r);
#else  // _LIBCPP_HAS_NO_RVALUE_REFERENCES
        _LIBCPP_INLINE_VISIBILITY
        operator=(unique_ptr<_Yp, _Dp> __r);
#endif

    _LIBCPP_INLINE_VISIBILITY
    void swap(shared_ptr& __r) _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    void reset() _NOEXCEPT;
    template<class _Yp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            void
        >::type
        _LIBCPP_INLINE_VISIBILITY
        reset(_Yp* __p);
    template<class _Yp, class _Dp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            void
        >::type
        _LIBCPP_INLINE_VISIBILITY
        reset(_Yp* __p, _Dp __d);
    template<class _Yp, class _Dp, class _Alloc>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            void
        >::type
        _LIBCPP_INLINE_VISIBILITY
        reset(_Yp* __p, _Dp __d, _Alloc __a);

    _LIBCPP_INLINE_VISIBILITY
    element_type* get() const _NOEXCEPT {return __ptr_;}
    _LIBCPP_INLINE_VISIBILITY
    typename add_lvalue_reference<element_type>::type operator*() const _NOEXCEPT
        {return *__ptr_;}
    _LIBCPP_INLINE_VISIBILITY
    element_type* operator->() const _NOEXCEPT {return __ptr_;}
    _LIBCPP_INLINE_VISIBILITY
    long use_count() const _NOEXCEPT {return __cntrl_ ? __cntrl_->use_count() : 0;}
    _LIBCPP_INLINE_VISIBILITY
    bool unique() const _NOEXCEPT {return use_count() == 1;}
    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_EXPLICIT operator bool() const _NOEXCEPT {return get() != 0;}
    template <class _Up>
        _LIBCPP_INLINE_VISIBILITY
        bool owner_before(shared_ptr<_Up> const& __p) const _NOEXCEPT
        {return __cntrl_ < __p.__cntrl_;}
    template <class _Up>
        _LIBCPP_INLINE_VISIBILITY
        bool owner_before(weak_ptr<_Up> const& __p) const _NOEXCEPT
        {return __cntrl_ < __p.__cntrl_;}
    _LIBCPP_INLINE_VISIBILITY
    bool
    __owner_equivalent(const shared_ptr& __p) const
        {return __cntrl_ == __p.__cntrl_;}

#ifndef _LIBCPP_NO_RTTI
    template <class _Dp>
        _LIBCPP_INLINE_VISIBILITY
        _Dp* __get_deleter() const _NOEXCEPT
            {return static_cast<_Dp*>(__cntrl_
                    ? const_cast<void *>(__cntrl_->__get_deleter(typeid(_Dp)))
                      : nullptr);}
#endif  // _LIBCPP_NO_RTTI

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
        _LIBCPP_INLINE_VISIBILITY
        typename enable_if<is_convertible<_OrigPtr*,
                                          const enable_shared_from_this<_Yp>*
        >::value,
            void>::type
        __enable_weak_this(const enable_shared_from_this<_Yp>* __e,
                           _OrigPtr* __ptr) _NOEXCEPT
        {
            typedef typename remove_cv<_Yp>::type _RawYp;
            if (__e && __e->__weak_this_.expired())
            {
                __e->__weak_this_ = shared_ptr<_RawYp>(*this,
                    const_cast<_RawYp*>(static_cast<const _Yp*>(__ptr)));
            }
        }

    _LIBCPP_INLINE_VISIBILITY void __enable_weak_this(...) _NOEXCEPT {}

    template <class _Up> friend class _LIBCPP_TEMPLATE_VIS shared_ptr;
    template <class _Up> friend class _LIBCPP_TEMPLATE_VIS weak_ptr;
};


template<class _Tp>
inline
_LIBCPP_CONSTEXPR
shared_ptr<_Tp>::shared_ptr() _NOEXCEPT
    : __ptr_(0),
      __cntrl_(0)
{
}

template<class _Tp>
inline
_LIBCPP_CONSTEXPR
shared_ptr<_Tp>::shared_ptr(nullptr_t) _NOEXCEPT
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
#ifndef _LIBCPP_NO_EXCEPTIONS
    try
    {
#endif  // _LIBCPP_NO_EXCEPTIONS
        typedef typename __shared_ptr_default_allocator<_Tp>::type _AllocT;
        typedef __shared_ptr_pointer<nullptr_t, _Dp, _AllocT > _CntrlBlk;
        __cntrl_ = new _CntrlBlk(__p, __d, _AllocT());
#ifndef _LIBCPP_NO_EXCEPTIONS
    }
    catch (...)
    {
        __d(__p);
        throw;
    }
#endif  // _LIBCPP_NO_EXCEPTIONS
}

template<class _Tp>
template<class _Yp, class _Dp, class _Alloc>
shared_ptr<_Tp>::shared_ptr(_Yp* __p, _Dp __d, _Alloc __a,
                            typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type)
    : __ptr_(__p)
{
#ifndef _LIBCPP_NO_EXCEPTIONS
    try
    {
#endif  // _LIBCPP_NO_EXCEPTIONS
        typedef __shared_ptr_pointer<_Yp*, _Dp, _Alloc> _CntrlBlk;
        typedef typename __allocator_traits_rebind<_Alloc, _CntrlBlk>::type _A2;
        typedef __allocator_destructor<_A2> _D2;
        _A2 __a2(__a);
        unique_ptr<_CntrlBlk, _D2> __hold2(__a2.allocate(1), _D2(__a2, 1));
        ::new(static_cast<void*>(_VSTD::addressof(*__hold2.get())))
            _CntrlBlk(__p, __d, __a);
        __cntrl_ = _VSTD::addressof(*__hold2.release());
        __enable_weak_this(__p, __p);
#ifndef _LIBCPP_NO_EXCEPTIONS
    }
    catch (...)
    {
        __d(__p);
        throw;
    }
#endif  // _LIBCPP_NO_EXCEPTIONS
}

template<class _Tp>
template<class _Dp, class _Alloc>
shared_ptr<_Tp>::shared_ptr(nullptr_t __p, _Dp __d, _Alloc __a)
    : __ptr_(0)
{
#ifndef _LIBCPP_NO_EXCEPTIONS
    try
    {
#endif  // _LIBCPP_NO_EXCEPTIONS
        typedef __shared_ptr_pointer<nullptr_t, _Dp, _Alloc> _CntrlBlk;
        typedef typename __allocator_traits_rebind<_Alloc, _CntrlBlk>::type _A2;
        typedef __allocator_destructor<_A2> _D2;
        _A2 __a2(__a);
        unique_ptr<_CntrlBlk, _D2> __hold2(__a2.allocate(1), _D2(__a2, 1));
        ::new(static_cast<void*>(_VSTD::addressof(*__hold2.get())))
            _CntrlBlk(__p, __d, __a);
        __cntrl_ = _VSTD::addressof(*__hold2.release());
#ifndef _LIBCPP_NO_EXCEPTIONS
    }
    catch (...)
    {
        __d(__p);
        throw;
    }
#endif  // _LIBCPP_NO_EXCEPTIONS
}

template<class _Tp>
template<class _Yp>
inline
shared_ptr<_Tp>::shared_ptr(const shared_ptr<_Yp>& __r, element_type *__p) _NOEXCEPT
    : __ptr_(__p),
      __cntrl_(__r.__cntrl_)
{
    if (__cntrl_)
        __cntrl_->__add_shared();
}

template<class _Tp>
inline
shared_ptr<_Tp>::shared_ptr(const shared_ptr& __r) _NOEXCEPT
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
         _NOEXCEPT
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    if (__cntrl_)
        __cntrl_->__add_shared();
}

#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES

template<class _Tp>
inline
shared_ptr<_Tp>::shared_ptr(shared_ptr&& __r) _NOEXCEPT
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
         _NOEXCEPT
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    __r.__ptr_ = 0;
    __r.__cntrl_ = 0;
}

#endif  // _LIBCPP_HAS_NO_RVALUE_REFERENCES


#if 0 /* evaluated by -frewrite-includes */
template<class _Tp>
template<class _Yp>
#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES
shared_ptr<_Tp>::shared_ptr(auto_ptr<_Yp>&& __r,
#else
shared_ptr<_Tp>::shared_ptr(auto_ptr<_Yp> __r,
#endif
                            typename enable_if<is_convertible<_Yp*, element_type*>::value, __nat>::type)
    : __ptr_(__r.get())
{
    typedef __shared_ptr_pointer<_Yp*, default_delete<_Yp>, allocator<_Yp> > _CntrlBlk;
    __cntrl_ = new _CntrlBlk(__r.get(), default_delete<_Yp>(), allocator<_Yp>());
    __enable_weak_this(__r.get(), __r.get());
    __r.release();
}
#endif

template<class _Tp>
template <class _Yp, class _Dp>
#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES
shared_ptr<_Tp>::shared_ptr(unique_ptr<_Yp, _Dp>&& __r,
#else
shared_ptr<_Tp>::shared_ptr(unique_ptr<_Yp, _Dp> __r,
#endif
                            typename enable_if
                            <
                                !is_lvalue_reference<_Dp>::value &&
                                !is_array<_Yp>::value &&
                                is_convertible<typename unique_ptr<_Yp, _Dp>::pointer, element_type*>::value,
                                __nat
                            >::type)
    : __ptr_(__r.get())
{

#if 1 /* evaluated by -frewrite-includes */
    if (__ptr_ == nullptr)
        __cntrl_ = nullptr;
    else
#endif
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
#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES
shared_ptr<_Tp>::shared_ptr(unique_ptr<_Yp, _Dp>&& __r,
#else
shared_ptr<_Tp>::shared_ptr(unique_ptr<_Yp, _Dp> __r,
#endif
                            typename enable_if
                            <
                                is_lvalue_reference<_Dp>::value &&
                                !is_array<_Yp>::value &&
                                is_convertible<typename unique_ptr<_Yp, _Dp>::pointer, element_type*>::value,
                                __nat
                            >::type)
    : __ptr_(__r.get())
{

#if 1 /* evaluated by -frewrite-includes */
    if (__ptr_ == nullptr)
        __cntrl_ = nullptr;
    else
#endif
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
    ::new(__hold2.get()) _CntrlBlk(__a2, _VSTD::forward<_Args>(__args)...);
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
    ::new(static_cast<void*>(_VSTD::addressof(*__hold2.get())))
        _CntrlBlk(__a, _VSTD::forward<_Args>(__args)...);
    shared_ptr<_Tp> __r;
    __r.__ptr_ = __hold2.get()->get();
    __r.__cntrl_ = _VSTD::addressof(*__hold2.release());
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
shared_ptr<_Tp>::operator=(const shared_ptr& __r) _NOEXCEPT
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
shared_ptr<_Tp>::operator=(const shared_ptr<_Yp>& __r) _NOEXCEPT
{
    shared_ptr(__r).swap(*this);
    return *this;
}

#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES

template<class _Tp>
inline
shared_ptr<_Tp>&
shared_ptr<_Tp>::operator=(shared_ptr&& __r) _NOEXCEPT
{
    shared_ptr(_VSTD::move(__r)).swap(*this);
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
    shared_ptr(_VSTD::move(__r)).swap(*this);
    return *this;
}


#if 0 /* evaluated by -frewrite-includes */
template<class _Tp>
template<class _Yp>
inline
typename enable_if
<
    !is_array<_Yp>::value &&
    is_convertible<_Yp*, typename shared_ptr<_Tp>::element_type*>::value,
    shared_ptr<_Tp>
>::type&
shared_ptr<_Tp>::operator=(auto_ptr<_Yp>&& __r)
{
    shared_ptr(_VSTD::move(__r)).swap(*this);
    return *this;
}
#endif

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
    shared_ptr(_VSTD::move(__r)).swap(*this);
    return *this;
}

#else  // _LIBCPP_HAS_NO_RVALUE_REFERENCES


#if 0 /* evaluated by -frewrite-includes */
template<class _Tp>
template<class _Yp>
inline _LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    !is_array<_Yp>::value &&
    is_convertible<_Yp*, typename shared_ptr<_Tp>::element_type*>::value,
    shared_ptr<_Tp>&
>::type
shared_ptr<_Tp>::operator=(auto_ptr<_Yp> __r)
{
    shared_ptr(__r).swap(*this);
    return *this;
}
#endif

template<class _Tp>
template <class _Yp, class _Dp>
inline _LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    !is_array<_Yp>::value &&
    is_convertible<typename unique_ptr<_Yp, _Dp>::pointer,
                   typename shared_ptr<_Tp>::element_type*>::value,
    shared_ptr<_Tp>&
>::type
shared_ptr<_Tp>::operator=(unique_ptr<_Yp, _Dp> __r)
{
    shared_ptr(_VSTD::move(__r)).swap(*this);
    return *this;
}

#endif  // _LIBCPP_HAS_NO_RVALUE_REFERENCES

template<class _Tp>
inline
void
shared_ptr<_Tp>::swap(shared_ptr& __r) _NOEXCEPT
{
    _VSTD::swap(__ptr_, __r.__ptr_);
    _VSTD::swap(__cntrl_, __r.__cntrl_);
}

template<class _Tp>
inline
void
shared_ptr<_Tp>::reset() _NOEXCEPT
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
inline _LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    !is_array<_Tp>::value,
    shared_ptr<_Tp>
>::type
make_shared(_Args&& ...__args)
{
    return shared_ptr<_Tp>::make_shared(_VSTD::forward<_Args>(__args)...);
}

template<class _Tp, class _Alloc, class ..._Args>
inline _LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    !is_array<_Tp>::value,
    shared_ptr<_Tp>
>::type
allocate_shared(const _Alloc& __a, _Args&& ...__args)
{
    return shared_ptr<_Tp>::allocate_shared(__a, _VSTD::forward<_Args>(__args)...);
}

template<class _Tp, class _Up>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator==(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) _NOEXCEPT
{
    return __x.get() == __y.get();
}

template<class _Tp, class _Up>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator!=(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) _NOEXCEPT
{
    return !(__x == __y);
}

template<class _Tp, class _Up>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator<(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) _NOEXCEPT
{

#if 0 /* evaluated by -frewrite-includes */
    typedef typename common_type<_Tp*, _Up*>::type _Vp;
    return less<_Vp>()(__x.get(), __y.get());
#else
    return less<>()(__x.get(), __y.get());
#endif

}

template<class _Tp, class _Up>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator>(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) _NOEXCEPT
{
    return __y < __x;
}

template<class _Tp, class _Up>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator<=(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) _NOEXCEPT
{
    return !(__y < __x);
}

template<class _Tp, class _Up>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator>=(const shared_ptr<_Tp>& __x, const shared_ptr<_Up>& __y) _NOEXCEPT
{
    return !(__x < __y);
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator==(const shared_ptr<_Tp>& __x, nullptr_t) _NOEXCEPT
{
    return !__x;
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator==(nullptr_t, const shared_ptr<_Tp>& __x) _NOEXCEPT
{
    return !__x;
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator!=(const shared_ptr<_Tp>& __x, nullptr_t) _NOEXCEPT
{
    return static_cast<bool>(__x);
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator!=(nullptr_t, const shared_ptr<_Tp>& __x) _NOEXCEPT
{
    return static_cast<bool>(__x);
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator<(const shared_ptr<_Tp>& __x, nullptr_t) _NOEXCEPT
{
    return less<_Tp*>()(__x.get(), nullptr);
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator<(nullptr_t, const shared_ptr<_Tp>& __x) _NOEXCEPT
{
    return less<_Tp*>()(nullptr, __x.get());
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator>(const shared_ptr<_Tp>& __x, nullptr_t) _NOEXCEPT
{
    return nullptr < __x;
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator>(nullptr_t, const shared_ptr<_Tp>& __x) _NOEXCEPT
{
    return __x < nullptr;
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator<=(const shared_ptr<_Tp>& __x, nullptr_t) _NOEXCEPT
{
    return !(nullptr < __x);
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator<=(nullptr_t, const shared_ptr<_Tp>& __x) _NOEXCEPT
{
    return !(__x < nullptr);
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator>=(const shared_ptr<_Tp>& __x, nullptr_t) _NOEXCEPT
{
    return !(__x < nullptr);
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator>=(nullptr_t, const shared_ptr<_Tp>& __x) _NOEXCEPT
{
    return !(nullptr < __x);
}

template<class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
void
swap(shared_ptr<_Tp>& __x, shared_ptr<_Tp>& __y) _NOEXCEPT
{
    __x.swap(__y);
}

template<class _Tp, class _Up>
inline _LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    !is_array<_Tp>::value && !is_array<_Up>::value,
    shared_ptr<_Tp>
>::type
static_pointer_cast(const shared_ptr<_Up>& __r) _NOEXCEPT
{
    return shared_ptr<_Tp>(__r, static_cast<_Tp*>(__r.get()));
}

template<class _Tp, class _Up>
inline _LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    !is_array<_Tp>::value && !is_array<_Up>::value,
    shared_ptr<_Tp>
>::type
dynamic_pointer_cast(const shared_ptr<_Up>& __r) _NOEXCEPT
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
const_pointer_cast(const shared_ptr<_Up>& __r) _NOEXCEPT
{
    typedef typename remove_extent<_Tp>::type _RTp;
    return shared_ptr<_Tp>(__r, const_cast<_RTp*>(__r.get()));
}

#ifndef _LIBCPP_NO_RTTI

template<class _Dp, class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
_Dp*
get_deleter(const shared_ptr<_Tp>& __p) _NOEXCEPT
{
    return __p.template __get_deleter<_Dp>();
}

#endif  // _LIBCPP_NO_RTTI

template<class _Tp>
class _LIBCPP_TEMPLATE_VIS weak_ptr
{
public:
    typedef _Tp element_type;
private:
    element_type*        __ptr_;
    __shared_weak_count* __cntrl_;

public:
    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_CONSTEXPR weak_ptr() _NOEXCEPT;
    template<class _Yp> _LIBCPP_INLINE_VISIBILITY weak_ptr(shared_ptr<_Yp> const& __r,
                   typename enable_if<is_convertible<_Yp*, _Tp*>::value, __nat*>::type = 0)
                        _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    weak_ptr(weak_ptr const& __r) _NOEXCEPT;
    template<class _Yp> _LIBCPP_INLINE_VISIBILITY weak_ptr(weak_ptr<_Yp> const& __r,
                   typename enable_if<is_convertible<_Yp*, _Tp*>::value, __nat*>::type = 0)
                         _NOEXCEPT;

#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES
    _LIBCPP_INLINE_VISIBILITY
    weak_ptr(weak_ptr&& __r) _NOEXCEPT;
    template<class _Yp> _LIBCPP_INLINE_VISIBILITY weak_ptr(weak_ptr<_Yp>&& __r,
                   typename enable_if<is_convertible<_Yp*, _Tp*>::value, __nat*>::type = 0)
                         _NOEXCEPT;
#endif  // _LIBCPP_HAS_NO_RVALUE_REFERENCES
    ~weak_ptr();

    _LIBCPP_INLINE_VISIBILITY
    weak_ptr& operator=(weak_ptr const& __r) _NOEXCEPT;
    template<class _Yp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            weak_ptr&
        >::type
        _LIBCPP_INLINE_VISIBILITY
        operator=(weak_ptr<_Yp> const& __r) _NOEXCEPT;

#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES

    _LIBCPP_INLINE_VISIBILITY
    weak_ptr& operator=(weak_ptr&& __r) _NOEXCEPT;
    template<class _Yp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            weak_ptr&
        >::type
        _LIBCPP_INLINE_VISIBILITY
        operator=(weak_ptr<_Yp>&& __r) _NOEXCEPT;

#endif  // _LIBCPP_HAS_NO_RVALUE_REFERENCES

    template<class _Yp>
        typename enable_if
        <
            is_convertible<_Yp*, element_type*>::value,
            weak_ptr&
        >::type
        _LIBCPP_INLINE_VISIBILITY
        operator=(shared_ptr<_Yp> const& __r) _NOEXCEPT;

    _LIBCPP_INLINE_VISIBILITY
    void swap(weak_ptr& __r) _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    void reset() _NOEXCEPT;

    _LIBCPP_INLINE_VISIBILITY
    long use_count() const _NOEXCEPT
        {return __cntrl_ ? __cntrl_->use_count() : 0;}
    _LIBCPP_INLINE_VISIBILITY
    bool expired() const _NOEXCEPT
        {return __cntrl_ == 0 || __cntrl_->use_count() == 0;}
    shared_ptr<_Tp> lock() const _NOEXCEPT;
    template<class _Up>
        _LIBCPP_INLINE_VISIBILITY
        bool owner_before(const shared_ptr<_Up>& __r) const _NOEXCEPT
        {return __cntrl_ < __r.__cntrl_;}
    template<class _Up>
        _LIBCPP_INLINE_VISIBILITY
        bool owner_before(const weak_ptr<_Up>& __r) const _NOEXCEPT
        {return __cntrl_ < __r.__cntrl_;}

    template <class _Up> friend class _LIBCPP_TEMPLATE_VIS weak_ptr;
    template <class _Up> friend class _LIBCPP_TEMPLATE_VIS shared_ptr;
};

template<class _Tp>
inline
_LIBCPP_CONSTEXPR
weak_ptr<_Tp>::weak_ptr() _NOEXCEPT
    : __ptr_(0),
      __cntrl_(0)
{
}

template<class _Tp>
inline
weak_ptr<_Tp>::weak_ptr(weak_ptr const& __r) _NOEXCEPT
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
                         _NOEXCEPT
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
         _NOEXCEPT
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    if (__cntrl_)
        __cntrl_->__add_weak();
}

#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES

template<class _Tp>
inline
weak_ptr<_Tp>::weak_ptr(weak_ptr&& __r) _NOEXCEPT
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
         _NOEXCEPT
    : __ptr_(__r.__ptr_),
      __cntrl_(__r.__cntrl_)
{
    __r.__ptr_ = 0;
    __r.__cntrl_ = 0;
}

#endif  // _LIBCPP_HAS_NO_RVALUE_REFERENCES

template<class _Tp>
weak_ptr<_Tp>::~weak_ptr()
{
    if (__cntrl_)
        __cntrl_->__release_weak();
}

template<class _Tp>
inline
weak_ptr<_Tp>&
weak_ptr<_Tp>::operator=(weak_ptr const& __r) _NOEXCEPT
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
weak_ptr<_Tp>::operator=(weak_ptr<_Yp> const& __r) _NOEXCEPT
{
    weak_ptr(__r).swap(*this);
    return *this;
}

#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES

template<class _Tp>
inline
weak_ptr<_Tp>&
weak_ptr<_Tp>::operator=(weak_ptr&& __r) _NOEXCEPT
{
    weak_ptr(_VSTD::move(__r)).swap(*this);
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
weak_ptr<_Tp>::operator=(weak_ptr<_Yp>&& __r) _NOEXCEPT
{
    weak_ptr(_VSTD::move(__r)).swap(*this);
    return *this;
}

#endif  // _LIBCPP_HAS_NO_RVALUE_REFERENCES

template<class _Tp>
template<class _Yp>
inline
typename enable_if
<
    is_convertible<_Yp*, _Tp*>::value,
    weak_ptr<_Tp>&
>::type
weak_ptr<_Tp>::operator=(shared_ptr<_Yp> const& __r) _NOEXCEPT
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
weak_ptr<_Tp>::lock() const _NOEXCEPT
{
    shared_ptr<_Tp> __r;
    __r.__cntrl_ = __cntrl_ ? __cntrl_->lock() : __cntrl_;
    if (__r.__cntrl_)
        __r.__ptr_ = __ptr_;
    return __r;
}


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void> struct owner_less;
#else
template <class _Tp> struct owner_less;
#endif

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS owner_less<shared_ptr<_Tp> >
    : binary_function<shared_ptr<_Tp>, shared_ptr<_Tp>, bool>
{
    typedef bool result_type;
    _LIBCPP_INLINE_VISIBILITY
    bool operator()(shared_ptr<_Tp> const& __x, shared_ptr<_Tp> const& __y) const _NOEXCEPT
        {return __x.owner_before(__y);}
    _LIBCPP_INLINE_VISIBILITY
    bool operator()(shared_ptr<_Tp> const& __x,   weak_ptr<_Tp> const& __y) const _NOEXCEPT
        {return __x.owner_before(__y);}
    _LIBCPP_INLINE_VISIBILITY
    bool operator()(  weak_ptr<_Tp> const& __x, shared_ptr<_Tp> const& __y) const _NOEXCEPT
        {return __x.owner_before(__y);}
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS owner_less<weak_ptr<_Tp> >
    : binary_function<weak_ptr<_Tp>, weak_ptr<_Tp>, bool>
{
    typedef bool result_type;
    _LIBCPP_INLINE_VISIBILITY
    bool operator()(  weak_ptr<_Tp> const& __x,   weak_ptr<_Tp> const& __y) const _NOEXCEPT
        {return __x.owner_before(__y);}
    _LIBCPP_INLINE_VISIBILITY
    bool operator()(shared_ptr<_Tp> const& __x,   weak_ptr<_Tp> const& __y) const _NOEXCEPT
        {return __x.owner_before(__y);}
    _LIBCPP_INLINE_VISIBILITY
    bool operator()(  weak_ptr<_Tp> const& __x, shared_ptr<_Tp> const& __y) const _NOEXCEPT
        {return __x.owner_before(__y);}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS owner_less<void>
{
    template <class _Tp, class _Up>
    _LIBCPP_INLINE_VISIBILITY
    bool operator()( shared_ptr<_Tp> const& __x, shared_ptr<_Up> const& __y) const _NOEXCEPT
        {return __x.owner_before(__y);}
    template <class _Tp, class _Up>
    _LIBCPP_INLINE_VISIBILITY
    bool operator()( shared_ptr<_Tp> const& __x,   weak_ptr<_Up> const& __y) const _NOEXCEPT
        {return __x.owner_before(__y);}
    template <class _Tp, class _Up>
    _LIBCPP_INLINE_VISIBILITY
    bool operator()(   weak_ptr<_Tp> const& __x, shared_ptr<_Up> const& __y) const _NOEXCEPT
        {return __x.owner_before(__y);}
    template <class _Tp, class _Up>
    _LIBCPP_INLINE_VISIBILITY
    bool operator()(   weak_ptr<_Tp> const& __x,   weak_ptr<_Up> const& __y) const _NOEXCEPT
        {return __x.owner_before(__y);}
    typedef void is_transparent;
};
#endif

template<class _Tp>
class _LIBCPP_TEMPLATE_VIS enable_shared_from_this
{
    mutable weak_ptr<_Tp> __weak_this_;
protected:
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
    enable_shared_from_this() _NOEXCEPT {}
    _LIBCPP_INLINE_VISIBILITY
    enable_shared_from_this(enable_shared_from_this const&) _NOEXCEPT {}
    _LIBCPP_INLINE_VISIBILITY
    enable_shared_from_this& operator=(enable_shared_from_this const&) _NOEXCEPT
        {return *this;}
    _LIBCPP_INLINE_VISIBILITY
    ~enable_shared_from_this() {}
public:
    _LIBCPP_INLINE_VISIBILITY
    shared_ptr<_Tp> shared_from_this()
        {return shared_ptr<_Tp>(__weak_this_);}
    _LIBCPP_INLINE_VISIBILITY
    shared_ptr<_Tp const> shared_from_this() const
        {return shared_ptr<const _Tp>(__weak_this_);}


#if 1 /* evaluated by -frewrite-includes */
    _LIBCPP_INLINE_VISIBILITY
    weak_ptr<_Tp> weak_from_this() _NOEXCEPT
       { return __weak_this_; }

    _LIBCPP_INLINE_VISIBILITY
    weak_ptr<const _Tp> weak_from_this() const _NOEXCEPT
        { return __weak_this_; }
#endif // _LIBCPP_STD_VER > 14

    template <class _Up> friend class shared_ptr;
};

template <class _Tp>
struct _LIBCPP_TEMPLATE_VIS hash<shared_ptr<_Tp> >
{
    typedef shared_ptr<_Tp>      argument_type;
    typedef size_t               result_type;

    _LIBCPP_INLINE_VISIBILITY
    result_type operator()(const argument_type& __ptr) const _NOEXCEPT
    {
        return hash<_Tp*>()(__ptr.get());
    }
};

template<class _CharT, class _Traits, class _Yp>
inline _LIBCPP_INLINE_VISIBILITY
basic_ostream<_CharT, _Traits>&
operator<<(basic_ostream<_CharT, _Traits>& __os, shared_ptr<_Yp> const& __p);



#if 1 /* evaluated by -frewrite-includes */

class _LIBCPP_TYPE_VIS __sp_mut
{
    void* __lx;
public:
    void lock() _NOEXCEPT;
    void unlock() _NOEXCEPT;

private:
    _LIBCPP_CONSTEXPR __sp_mut(void*) _NOEXCEPT;
    __sp_mut(const __sp_mut&);
    __sp_mut& operator=(const __sp_mut&);

    friend _LIBCPP_FUNC_VIS __sp_mut& __get_sp_mut(const void*);
};

_LIBCPP_FUNC_VIS _LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR
__sp_mut& __get_sp_mut(const void*);

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
bool
atomic_is_lock_free(const shared_ptr<_Tp>*)
{
    return false;
}

template <class _Tp>
_LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR
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
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR
shared_ptr<_Tp>
atomic_load_explicit(const shared_ptr<_Tp>* __p, memory_order)
{
    return atomic_load(__p);
}

template <class _Tp>
_LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR
void
atomic_store(shared_ptr<_Tp>* __p, shared_ptr<_Tp> __r)
{
    __sp_mut& __m = __get_sp_mut(__p);
    __m.lock();
    __p->swap(__r);
    __m.unlock();
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR
void
atomic_store_explicit(shared_ptr<_Tp>* __p, shared_ptr<_Tp> __r, memory_order)
{
    atomic_store(__p, __r);
}

template <class _Tp>
_LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR
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
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR
shared_ptr<_Tp>
atomic_exchange_explicit(shared_ptr<_Tp>* __p, shared_ptr<_Tp> __r, memory_order)
{
    return atomic_exchange(__p, __r);
}

template <class _Tp>
_LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR
bool
atomic_compare_exchange_strong(shared_ptr<_Tp>* __p, shared_ptr<_Tp>* __v, shared_ptr<_Tp> __w)
{
    shared_ptr<_Tp> __temp;
    __sp_mut& __m = __get_sp_mut(__p);
    __m.lock();
    if (__p->__owner_equivalent(*__v))
    {
        _VSTD::swap(__temp, *__p);
        *__p = __w;
        __m.unlock();
        return true;
    }
    _VSTD::swap(__temp, *__v);
    *__v = *__p;
    __m.unlock();
    return false;
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR
bool
atomic_compare_exchange_weak(shared_ptr<_Tp>* __p, shared_ptr<_Tp>* __v, shared_ptr<_Tp> __w)
{
    return atomic_compare_exchange_strong(__p, __v, __w);
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR
bool
atomic_compare_exchange_strong_explicit(shared_ptr<_Tp>* __p, shared_ptr<_Tp>* __v,
                                        shared_ptr<_Tp> __w, memory_order, memory_order)
{
    return atomic_compare_exchange_strong(__p, __v, __w);
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
_LIBCPP_AVAILABILITY_ATOMIC_SHARED_PTR
bool
atomic_compare_exchange_weak_explicit(shared_ptr<_Tp>* __p, shared_ptr<_Tp>* __v,
                                      shared_ptr<_Tp> __w, memory_order, memory_order)
{
    return atomic_compare_exchange_weak(__p, __v, __w);
}

#endif  // !defined(_LIBCPP_HAS_NO_ATOMIC_HEADER)

//enum class

#if 0 /* evaluated by -frewrite-includes */
# ifndef _LIBCPP_CXX03_LANG
enum class pointer_safety : unsigned char {
  relaxed,
  preferred,
  strict
};
# endif
#else
struct _LIBCPP_TYPE_VIS pointer_safety
{
    enum __lx
    {
        relaxed,
        preferred,
        strict
    };

    __lx __v_;

    _LIBCPP_INLINE_VISIBILITY
    pointer_safety() : __v_() {}

    _LIBCPP_INLINE_VISIBILITY
    pointer_safety(__lx __v) : __v_(__v) {}
    _LIBCPP_INLINE_VISIBILITY
    operator int() const {return __v_;}
};
#endif


#if 1 /* evaluated by -frewrite-includes */
_LIBCPP_FUNC_VIS pointer_safety get_pointer_safety() _NOEXCEPT;
#else
// This function is only offered in C++03 under ABI v1.

#if 0 /* evaluated by -frewrite-includes */
inline _LIBCPP_INLINE_VISIBILITY
pointer_safety get_pointer_safety() _NOEXCEPT {
  return pointer_safety::relaxed;
}
# endif
#endif


_LIBCPP_FUNC_VIS void declare_reachable(void* __p);
_LIBCPP_FUNC_VIS void declare_no_pointers(char* __p, size_t __n);
_LIBCPP_FUNC_VIS void undeclare_no_pointers(char* __p, size_t __n);
_LIBCPP_FUNC_VIS void* __undeclare_reachable(void* __p);

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
_Tp*
undeclare_reachable(_Tp* __p)
{
    return static_cast<_Tp*>(__undeclare_reachable(__p));
}

_LIBCPP_FUNC_VIS void* align(size_t __align, size_t __sz, void*& __ptr, size_t& __space);

// --- Helper for container swap --
template <typename _Alloc>
inline _LIBCPP_INLINE_VISIBILITY
void __swap_allocator(_Alloc & __a1, _Alloc & __a2)

#if 1 /* evaluated by -frewrite-includes */
    _NOEXCEPT
#else
    _NOEXCEPT_(__is_nothrow_swappable<_Alloc>::value)
#endif
{
    __swap_allocator(__a1, __a2,
      integral_constant<bool, _VSTD::allocator_traits<_Alloc>::propagate_on_container_swap::value>());
}

template <typename _Alloc>
_LIBCPP_INLINE_VISIBILITY
void __swap_allocator(_Alloc & __a1, _Alloc & __a2, true_type)

#if 1 /* evaluated by -frewrite-includes */
    _NOEXCEPT
#else
    _NOEXCEPT_(__is_nothrow_swappable<_Alloc>::value)
#endif
{
    using _VSTD::swap;
    swap(__a1, __a2);
}

template <typename _Alloc>
inline _LIBCPP_INLINE_VISIBILITY
void __swap_allocator(_Alloc &, _Alloc &, false_type) _NOEXCEPT {}

template <typename _Alloc, typename _Traits=allocator_traits<_Alloc> >
struct __noexcept_move_assign_container : public integral_constant<bool,
    _Traits::propagate_on_container_move_assignment::value

#if 1 /* evaluated by -frewrite-includes */
        || _Traits::is_always_equal::value
#else
        && is_nothrow_move_assignable<_Alloc>::value
#endif
    > {};


#ifndef _LIBCPP_HAS_NO_VARIADICS
template <class _Tp, class _Alloc>
struct __temp_value {
    typedef allocator_traits<_Alloc> _Traits;

    typename aligned_storage<sizeof(_Tp), _LIBCPP_ALIGNOF(_Tp)>::type __v;
    _Alloc &__a;

    _Tp *__addr() { return reinterpret_cast<_Tp *>(addressof(__v)); }
    _Tp &   get() { return *__addr(); }

    template<class... _Args>
    _LIBCPP_NO_CFI
    __temp_value(_Alloc &__alloc, _Args&& ... __args) : __a(__alloc) {
      _Traits::construct(__a, reinterpret_cast<_Tp*>(addressof(__v)),
                         _VSTD::forward<_Args>(__args)...);
    }

    ~__temp_value() { _Traits::destroy(__a, __addr()); }
    };
#endif

template<typename _Alloc, typename = void, typename = void>
struct __is_allocator : false_type {};

template<typename _Alloc>
struct __is_allocator<_Alloc,
       typename __void_t<typename _Alloc::value_type>::type,
       typename __void_t<decltype(_VSTD::declval<_Alloc&>().allocate(size_t(0)))>::type
     >
   : true_type {};

// __builtin_new_allocator -- A non-templated helper for allocating and
// deallocating memory using __builtin_operator_new and
// __builtin_operator_delete. It should be used in preference to
// `std::allocator<T>` to avoid additional instantiations.
struct __builtin_new_allocator {
  struct __builtin_new_deleter {
    typedef void* pointer_type;

    _LIBCPP_CONSTEXPR explicit __builtin_new_deleter(size_t __size, size_t __align)
        : __size_(__size), __align_(__align) {}

    void operator()(void* p) const _NOEXCEPT {
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
                                 size_t __align) _NOEXCEPT {
      std::__libcpp_deallocate(__p, __s, __align);
  }

  template <class _Tp>
  _LIBCPP_NODEBUG _LIBCPP_ALWAYS_INLINE
  static __holder_t __allocate_type(size_t __n) {
      return __allocate_bytes(__n * sizeof(_Tp), _LIBCPP_ALIGNOF(_Tp));
  }

  template <class _Tp>
  _LIBCPP_NODEBUG _LIBCPP_ALWAYS_INLINE
  static void __deallocate_type(void* __p, size_t __n) _NOEXCEPT {
      __deallocate_bytes(__p, __n * sizeof(_Tp), _LIBCPP_ALIGNOF(_Tp));
  }
};


_LIBCPP_END_NAMESPACE_STD

_LIBCPP_POP_MACROS


#if 0 /* evaluated by -frewrite-includes */

#endif

#endif  // _LIBCPP_MEMORY

// -*- C++ -*-
//===------------------------ functional ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_FUNCTIONAL
#define _LIBCPP_FUNCTIONAL














#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_BEGIN_NAMESPACE_STD


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS plus : binary_function<_Tp, _Tp, _Tp>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x + __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS plus<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) + _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) + _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) + _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS minus : binary_function<_Tp, _Tp, _Tp>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x - __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS minus<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) - _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) - _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) - _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS multiplies : binary_function<_Tp, _Tp, _Tp>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x * __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS multiplies<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) * _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) * _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) * _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS divides : binary_function<_Tp, _Tp, _Tp>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x / __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS divides<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) / _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) / _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) / _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS modulus : binary_function<_Tp, _Tp, _Tp>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x % __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS modulus<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) % _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) % _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) % _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS negate : unary_function<_Tp, _Tp>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    _Tp operator()(const _Tp& __x) const
        {return -__x;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS negate<void>
{
    template <class _Tp>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_Tp&& __x) const
    _NOEXCEPT_(noexcept(- _VSTD::forward<_Tp>(__x)))
    -> decltype        (- _VSTD::forward<_Tp>(__x))
        { return        - _VSTD::forward<_Tp>(__x); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS equal_to : binary_function<_Tp, _Tp, bool>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x == __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS equal_to<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) == _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) == _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) == _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS not_equal_to : binary_function<_Tp, _Tp, bool>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x != __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS not_equal_to<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) != _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) != _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) != _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS greater : binary_function<_Tp, _Tp, bool>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x > __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS greater<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) > _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) > _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) > _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif


// less in <__functional_base>


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS greater_equal : binary_function<_Tp, _Tp, bool>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x >= __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS greater_equal<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) >= _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) >= _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) >= _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS less_equal : binary_function<_Tp, _Tp, bool>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x <= __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS less_equal<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) <= _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) <= _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) <= _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS logical_and : binary_function<_Tp, _Tp, bool>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x && __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS logical_and<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) && _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) && _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) && _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS logical_or : binary_function<_Tp, _Tp, bool>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    bool operator()(const _Tp& __x, const _Tp& __y) const
        {return __x || __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS logical_or<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) || _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) || _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) || _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS logical_not : unary_function<_Tp, bool>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    bool operator()(const _Tp& __x) const
        {return !__x;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS logical_not<void>
{
    template <class _Tp>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_Tp&& __x) const
    _NOEXCEPT_(noexcept(!_VSTD::forward<_Tp>(__x)))
    -> decltype        (!_VSTD::forward<_Tp>(__x))
        { return        !_VSTD::forward<_Tp>(__x); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS bit_and : binary_function<_Tp, _Tp, _Tp>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x & __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS bit_and<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) & _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) & _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) & _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS bit_or : binary_function<_Tp, _Tp, _Tp>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x | __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS bit_or<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) | _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) | _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) | _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
#else
template <class _Tp>
#endif
struct _LIBCPP_TEMPLATE_VIS bit_xor : binary_function<_Tp, _Tp, _Tp>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    _Tp operator()(const _Tp& __x, const _Tp& __y) const
        {return __x ^ __y;}
};


#if 1 /* evaluated by -frewrite-includes */
template <>
struct _LIBCPP_TEMPLATE_VIS bit_xor<void>
{
    template <class _T1, class _T2>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_T1&& __t, _T2&& __u) const
    _NOEXCEPT_(noexcept(_VSTD::forward<_T1>(__t) ^ _VSTD::forward<_T2>(__u)))
    -> decltype        (_VSTD::forward<_T1>(__t) ^ _VSTD::forward<_T2>(__u))
        { return        _VSTD::forward<_T1>(__t) ^ _VSTD::forward<_T2>(__u); }
    typedef void is_transparent;
};
#endif



#if 1 /* evaluated by -frewrite-includes */
template <class _Tp = void>
struct _LIBCPP_TEMPLATE_VIS bit_not : unary_function<_Tp, _Tp>
{
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    _Tp operator()(const _Tp& __x) const
        {return ~__x;}
};

template <>
struct _LIBCPP_TEMPLATE_VIS bit_not<void>
{
    template <class _Tp>
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    auto operator()(_Tp&& __x) const
    _NOEXCEPT_(noexcept(~_VSTD::forward<_Tp>(__x)))
    -> decltype        (~_VSTD::forward<_Tp>(__x))
        { return        ~_VSTD::forward<_Tp>(__x); }
    typedef void is_transparent;
};
#endif

template <class _Predicate>
class _LIBCPP_TEMPLATE_VIS _LIBCPP_DEPRECATED_IN_CXX17 unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
{
    _Predicate __pred_;
public:
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    explicit unary_negate(const _Predicate& __pred)
        : __pred_(__pred) {}
    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    bool operator()(const typename _Predicate::argument_type& __x) const
        {return !__pred_(__x);}
};

template <class _Predicate>
_LIBCPP_DEPRECATED_IN_CXX17 inline _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
unary_negate<_Predicate>
not1(const _Predicate& __pred) {return unary_negate<_Predicate>(__pred);}

template <class _Predicate>
class _LIBCPP_TEMPLATE_VIS _LIBCPP_DEPRECATED_IN_CXX17 binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
                             typename _Predicate::second_argument_type,
                             bool>
{
    _Predicate __pred_;
public:
    _LIBCPP_INLINE_VISIBILITY explicit _LIBCPP_CONSTEXPR_AFTER_CXX11
    binary_negate(const _Predicate& __pred) : __pred_(__pred) {}

    _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
    bool operator()(const typename _Predicate::first_argument_type& __x,
                    const typename _Predicate::second_argument_type& __y) const
        {return !__pred_(__x, __y);}
};

template <class _Predicate>
_LIBCPP_DEPRECATED_IN_CXX17 inline _LIBCPP_CONSTEXPR_AFTER_CXX11 _LIBCPP_INLINE_VISIBILITY
binary_negate<_Predicate>
not2(const _Predicate& __pred) {return binary_negate<_Predicate>(__pred);}

////////////////////////////////////////////////////////////////////////////////
//                                MEMFUN
//==============================================================================

template <class _Tp>
class __mem_fn
    : public __weak_result_type<_Tp>
{
public:
    // types
    typedef _Tp type;
private:
    type __f_;

public:
    _LIBCPP_INLINE_VISIBILITY __mem_fn(type __f) _NOEXCEPT : __f_(__f) {}

#ifndef _LIBCPP_CXX03_LANG
    // invoke
    template <class... _ArgTypes>
    _LIBCPP_INLINE_VISIBILITY
    typename __invoke_return<type, _ArgTypes...>::type
    operator() (_ArgTypes&&... __args) const {
        return __invoke(__f_, _VSTD::forward<_ArgTypes>(__args)...);
    }
#endif
};

template<class _Rp, class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
__mem_fn<_Rp _Tp::*>
mem_fn(_Rp _Tp::* __pm) _NOEXCEPT
{
    return __mem_fn<_Rp _Tp::*>(__pm);
}

////////////////////////////////////////////////////////////////////////////////
//                                FUNCTION
//==============================================================================

// bad_function_call

class _LIBCPP_EXCEPTION_ABI bad_function_call
    : public exception
{
#ifdef _LIBCPP_ABI_BAD_FUNCTION_CALL_KEY_FUNCTION
public:
    virtual ~bad_function_call() _NOEXCEPT;

    virtual const char* what() const _NOEXCEPT;
#endif
};


template<class _Fp> class _LIBCPP_TEMPLATE_VIS function; // undefined

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
_LIBCPP_INLINE_VISIBILITY
bool __not_null(_Fp const&) { return true; }

template <class _Fp>
_LIBCPP_INLINE_VISIBILITY
bool __not_null(_Fp* __ptr) { return __ptr; }

template <class _Ret, class _Class>
_LIBCPP_INLINE_VISIBILITY
bool __not_null(_Ret _Class::*__ptr) { return __ptr; }

template <class _Fp>
_LIBCPP_INLINE_VISIBILITY
bool __not_null(function<_Fp> const& __f) { return !!__f; }

} // namespace __function

#ifndef _LIBCPP_CXX03_LANG

namespace __function {

// __alloc_func holds a functor and an allocator.

template <class _Fp, class _Ap, class _FB> class __alloc_func;
template <class _Fp, class _FB>
class __default_alloc_func;

template <class _Fp, class _Ap, class _Rp, class... _ArgTypes>
class __alloc_func<_Fp, _Ap, _Rp(_ArgTypes...)>
{
    __compressed_pair<_Fp, _Ap> __f_;

  public:
    typedef _LIBCPP_NODEBUG_TYPE _Fp _Target;
    typedef _LIBCPP_NODEBUG_TYPE _Ap _Alloc;

    _LIBCPP_INLINE_VISIBILITY
    const _Target& __target() const { return __f_.first(); }

    // WIN32 APIs may define __allocator, so use __get_allocator instead.
    _LIBCPP_INLINE_VISIBILITY
    const _Alloc& __get_allocator() const { return __f_.second(); }

    _LIBCPP_INLINE_VISIBILITY
    explicit __alloc_func(_Target&& __f)
        : __f_(piecewise_construct, _VSTD::forward_as_tuple(_VSTD::move(__f)),
               _VSTD::forward_as_tuple())
    {
    }

    _LIBCPP_INLINE_VISIBILITY
    explicit __alloc_func(const _Target& __f, const _Alloc& __a)
        : __f_(piecewise_construct, _VSTD::forward_as_tuple(__f),
               _VSTD::forward_as_tuple(__a))
    {
    }

    _LIBCPP_INLINE_VISIBILITY
    explicit __alloc_func(const _Target& __f, _Alloc&& __a)
        : __f_(piecewise_construct, _VSTD::forward_as_tuple(__f),
               _VSTD::forward_as_tuple(_VSTD::move(__a)))
    {
    }

    _LIBCPP_INLINE_VISIBILITY
    explicit __alloc_func(_Target&& __f, _Alloc&& __a)
        : __f_(piecewise_construct, _VSTD::forward_as_tuple(_VSTD::move(__f)),
               _VSTD::forward_as_tuple(_VSTD::move(__a)))
    {
    }

    _LIBCPP_INLINE_VISIBILITY
    _Rp operator()(_ArgTypes&&... __arg)
    {
        typedef __invoke_void_return_wrapper<_Rp> _Invoker;
        return _Invoker::__call(__f_.first(),
                                _VSTD::forward<_ArgTypes>(__arg)...);
    }

    _LIBCPP_INLINE_VISIBILITY
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

    _LIBCPP_INLINE_VISIBILITY
    void destroy() _NOEXCEPT { __f_.~__compressed_pair<_Target, _Alloc>(); }

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
  typedef _LIBCPP_NODEBUG_TYPE _Fp _Target;

  _LIBCPP_INLINE_VISIBILITY
  const _Target& __target() const { return __f_; }

  _LIBCPP_INLINE_VISIBILITY
  explicit __default_alloc_func(_Target&& __f) : __f_(std::move(__f)) {}

  _LIBCPP_INLINE_VISIBILITY
  explicit __default_alloc_func(const _Target& __f) : __f_(__f) {}

  _LIBCPP_INLINE_VISIBILITY
  _Rp operator()(_ArgTypes&&... __arg) {
    typedef __invoke_void_return_wrapper<_Rp> _Invoker;
    return _Invoker::__call(__f_, _VSTD::forward<_ArgTypes>(__arg)...);
  }

  _LIBCPP_INLINE_VISIBILITY
  __default_alloc_func* __clone() const {
      __builtin_new_allocator::__holder_t __hold =
        __builtin_new_allocator::__allocate_type<__default_alloc_func>(1);
    __default_alloc_func* __res =
        ::new (__hold.get()) __default_alloc_func(__f_);
    (void)__hold.release();
    return __res;
  }

  _LIBCPP_INLINE_VISIBILITY
  void destroy() _NOEXCEPT { __f_.~_Target(); }

  static void __destroy_and_delete(__default_alloc_func* __f) {
    __f->destroy();
      __builtin_new_allocator::__deallocate_type<__default_alloc_func>(__f, 1);
  }
};

// __base provides an abstract interface for copyable functors.

template<class _Fp> class __base;

template<class _Rp, class ..._ArgTypes>
class __base<_Rp(_ArgTypes...)>
{
    __base(const __base&);
    __base& operator=(const __base&);
public:
    _LIBCPP_INLINE_VISIBILITY __base() {}
    _LIBCPP_INLINE_VISIBILITY virtual ~__base() {}
    virtual __base* __clone() const = 0;
    virtual void __clone(__base*) const = 0;
    virtual void destroy() _NOEXCEPT = 0;
    virtual void destroy_deallocate() _NOEXCEPT = 0;
    virtual _Rp operator()(_ArgTypes&& ...) = 0;
#ifndef _LIBCPP_NO_RTTI
    virtual const void* target(const type_info&) const _NOEXCEPT = 0;
    virtual const std::type_info& target_type() const _NOEXCEPT = 0;
#endif  // _LIBCPP_NO_RTTI
};

// __func implements __base for a given functor type.

template<class _FD, class _Alloc, class _FB> class __func;

template<class _Fp, class _Alloc, class _Rp, class ..._ArgTypes>
class __func<_Fp, _Alloc, _Rp(_ArgTypes...)>
    : public  __base<_Rp(_ArgTypes...)>
{
    __alloc_func<_Fp, _Alloc, _Rp(_ArgTypes...)> __f_;
public:
    _LIBCPP_INLINE_VISIBILITY
    explicit __func(_Fp&& __f)
        : __f_(_VSTD::move(__f)) {}

    _LIBCPP_INLINE_VISIBILITY
    explicit __func(const _Fp& __f, const _Alloc& __a)
        : __f_(__f, __a) {}

    _LIBCPP_INLINE_VISIBILITY
    explicit __func(const _Fp& __f, _Alloc&& __a)
        : __f_(__f, _VSTD::move(__a)) {}

    _LIBCPP_INLINE_VISIBILITY
    explicit __func(_Fp&& __f, _Alloc&& __a)
        : __f_(_VSTD::move(__f), _VSTD::move(__a)) {}

    virtual __base<_Rp(_ArgTypes...)>* __clone() const;
    virtual void __clone(__base<_Rp(_ArgTypes...)>*) const;
    virtual void destroy() _NOEXCEPT;
    virtual void destroy_deallocate() _NOEXCEPT;
    virtual _Rp operator()(_ArgTypes&&... __arg);
#ifndef _LIBCPP_NO_RTTI
    virtual const void* target(const type_info&) const _NOEXCEPT;
    virtual const std::type_info& target_type() const _NOEXCEPT;
#endif  // _LIBCPP_NO_RTTI
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
__func<_Fp, _Alloc, _Rp(_ArgTypes...)>::destroy() _NOEXCEPT
{
    __f_.destroy();
}

template<class _Fp, class _Alloc, class _Rp, class ..._ArgTypes>
void
__func<_Fp, _Alloc, _Rp(_ArgTypes...)>::destroy_deallocate() _NOEXCEPT
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
    return __f_(_VSTD::forward<_ArgTypes>(__arg)...);
}

#ifndef _LIBCPP_NO_RTTI

template<class _Fp, class _Alloc, class _Rp, class ..._ArgTypes>
const void*
__func<_Fp, _Alloc, _Rp(_ArgTypes...)>::target(const type_info& __ti) const _NOEXCEPT
{
    if (__ti == typeid(_Fp))
        return &__f_.__target();
    return (const void*)0;
}

template<class _Fp, class _Alloc, class _Rp, class ..._ArgTypes>
const std::type_info&
__func<_Fp, _Alloc, _Rp(_ArgTypes...)>::target_type() const _NOEXCEPT
{
    return typeid(_Fp);
}

#endif  // _LIBCPP_NO_RTTI

// __value_func creates a value-type from a __func.

template <class _Fp> class __value_func;

template <class _Rp, class... _ArgTypes> class __value_func<_Rp(_ArgTypes...)>
{
    typename aligned_storage<3 * sizeof(void*)>::type __buf_;

    typedef __base<_Rp(_ArgTypes...)> __func;
    __func* __f_;

    _LIBCPP_NO_CFI static __func* __as_base(void* p)
    {
        return reinterpret_cast<__func*>(p);
    }

  public:
    _LIBCPP_INLINE_VISIBILITY
    __value_func() _NOEXCEPT : __f_(0) {}

    template <class _Fp, class _Alloc>
    _LIBCPP_INLINE_VISIBILITY __value_func(_Fp&& __f, const _Alloc& __a)
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
                    ::new ((void*)&__buf_) _Fun(_VSTD::move(__f), _Alloc(__af));
            }
            else
            {
                typedef __allocator_destructor<_FunAlloc> _Dp;
                unique_ptr<__func, _Dp> __hold(__af.allocate(1), _Dp(__af, 1));
                ::new ((void*)__hold.get()) _Fun(_VSTD::move(__f), _Alloc(__a));
                __f_ = __hold.release();
            }
        }
    }

    template <class _Fp,
        class = typename enable_if<!is_same<typename decay<_Fp>::type, __value_func>::value>::type>
    _LIBCPP_INLINE_VISIBILITY explicit __value_func(_Fp&& __f)
        : __value_func(std::forward<_Fp>(__f), allocator<_Fp>()) {}

    _LIBCPP_INLINE_VISIBILITY
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

    _LIBCPP_INLINE_VISIBILITY
    __value_func(__value_func&& __f) _NOEXCEPT
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

    _LIBCPP_INLINE_VISIBILITY
    ~__value_func()
    {
        if ((void*)__f_ == &__buf_)
            __f_->destroy();
        else if (__f_)
            __f_->destroy_deallocate();
    }

    _LIBCPP_INLINE_VISIBILITY
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

    _LIBCPP_INLINE_VISIBILITY
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

    _LIBCPP_INLINE_VISIBILITY
    _Rp operator()(_ArgTypes&&... __args) const
    {
        if (__f_ == 0)
            __throw_bad_function_call();
        return (*__f_)(_VSTD::forward<_ArgTypes>(__args)...);
    }

    _LIBCPP_INLINE_VISIBILITY
    void swap(__value_func& __f) _NOEXCEPT
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
            _VSTD::swap(__f_, __f.__f_);
    }

    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_EXPLICIT operator bool() const _NOEXCEPT { return __f_ != 0; }

#ifndef _LIBCPP_NO_RTTI
    _LIBCPP_INLINE_VISIBILITY
    const std::type_info& target_type() const _NOEXCEPT
    {
        if (__f_ == 0)
            return typeid(void);
        return __f_->target_type();
    }

    template <typename _Tp>
    _LIBCPP_INLINE_VISIBILITY const _Tp* target() const _NOEXCEPT
    {
        if (__f_ == 0)
            return 0;
        return (const _Tp*)__f_->target(typeid(_Tp));
    }
#endif // _LIBCPP_NO_RTTI
};

// Storage for a functor object, to be used with __policy to manage copy and
// destruction.
union __policy_storage
{
    mutable char __small[sizeof(void*) * 2];
    void* __large;
};

// True if _Fun can safely be held in __policy_storage.__small.
template <typename _Fun>
struct __use_small_storage
    : public _VSTD::integral_constant<
          bool, sizeof(_Fun) <= sizeof(__policy_storage) &&
                    _LIBCPP_ALIGNOF(_Fun) <= _LIBCPP_ALIGNOF(__policy_storage) &&
                    _VSTD::is_trivially_copy_constructible<_Fun>::value &&
                    _VSTD::is_trivially_destructible<_Fun>::value> {};

// Policy contains information about how to copy, destroy, and move the
// underlying functor. You can think of it as a vtable of sorts.
struct __policy
{
    // Used to copy or destroy __large values. null for trivial objects.
    void* (*const __clone)(const void*);
    void (*const __destroy)(void*);

    // True if this is the null policy (no value).
    const bool __is_null;

    // The target type. May be null if RTTI is disabled.
    const std::type_info* const __type_info;

    // Returns a pointer to a static policy object suitable for the functor
    // type.
    template <typename _Fun>
    _LIBCPP_INLINE_VISIBILITY static const __policy* __create()
    {
        return __choose_policy<_Fun>(__use_small_storage<_Fun>());
    }

    _LIBCPP_INLINE_VISIBILITY
    static const __policy* __create_empty()
    {
        static const _LIBCPP_CONSTEXPR __policy __policy_ = {nullptr, nullptr,
                                                             true,
#ifndef _LIBCPP_NO_RTTI
                                                             &typeid(void)
#else
                                                             nullptr
#endif
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
    _LIBCPP_INLINE_VISIBILITY static const __policy*
    __choose_policy(/* is_small = */ false_type) {
      static const _LIBCPP_CONSTEXPR __policy __policy_ = {
          &__large_clone<_Fun>, &__large_destroy<_Fun>, false,
#ifndef _LIBCPP_NO_RTTI
          &typeid(typename _Fun::_Target)
#else
          nullptr
#endif
      };
        return &__policy_;
    }

    template <typename _Fun>
    _LIBCPP_INLINE_VISIBILITY static const __policy*
        __choose_policy(/* is_small = */ true_type)
    {
        static const _LIBCPP_CONSTEXPR __policy __policy_ = {
            nullptr, nullptr, false,
#ifndef _LIBCPP_NO_RTTI
            &typeid(typename _Fun::_Target)
#else
            nullptr
#endif
        };
        return &__policy_;
    }
};

// Used to choose between perfect forwarding or pass-by-value. Pass-by-value is
// faster for types that can be passed in registers.
template <typename _Tp>
using __fast_forward =
    typename _VSTD::conditional<_VSTD::is_scalar<_Tp>::value, _Tp, _Tp&&>::type;

// __policy_invoker calls an instance of __alloc_func held in __policy_storage.

template <class _Fp> struct __policy_invoker;

template <class _Rp, class... _ArgTypes>
struct __policy_invoker<_Rp(_ArgTypes...)>
{
    typedef _Rp (*__Call)(const __policy_storage*,
                          __fast_forward<_ArgTypes>...);

    __Call __call_;

    // Creates an invoker that throws bad_function_call.
    _LIBCPP_INLINE_VISIBILITY
    __policy_invoker() : __call_(&__call_empty) {}

    // Creates an invoker that calls the given instance of __func.
    template <typename _Fun>
    _LIBCPP_INLINE_VISIBILITY static __policy_invoker __create()
    {
        return __policy_invoker(&__call_impl<_Fun>);
    }

  private:
    _LIBCPP_INLINE_VISIBILITY
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
        return (*__f)(_VSTD::forward<_ArgTypes>(__args)...);
    }
};

// __policy_func uses a __policy and __policy_invoker to create a type-erased,
// copyable functor.

template <class _Fp> class __policy_func;

template <class _Rp, class... _ArgTypes> class __policy_func<_Rp(_ArgTypes...)>
{
    // Inline storage for small objects.
    __policy_storage __buf_;

    // Calls the value stored in __buf_. This could technically be part of
    // policy, but storing it here eliminates a level of indirection inside
    // operator().
    typedef __function::__policy_invoker<_Rp(_ArgTypes...)> __invoker;
    __invoker __invoker_;

    // The policy that describes how to move / copy / destroy __buf_. Never
    // null, even if the function is empty.
    const __policy* __policy_;

  public:
    _LIBCPP_INLINE_VISIBILITY
    __policy_func() : __policy_(__policy::__create_empty()) {}

    template <class _Fp, class _Alloc>
    _LIBCPP_INLINE_VISIBILITY __policy_func(_Fp&& __f, const _Alloc& __a)
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
                    _Fun(_VSTD::move(__f), _Alloc(__af));
            }
            else
            {
                typedef __allocator_destructor<_FunAlloc> _Dp;
                unique_ptr<_Fun, _Dp> __hold(__af.allocate(1), _Dp(__af, 1));
                ::new ((void*)__hold.get())
                    _Fun(_VSTD::move(__f), _Alloc(__af));
                __buf_.__large = __hold.release();
            }
        }
    }

    template <class _Fp, class = typename enable_if<!is_same<typename decay<_Fp>::type, __policy_func>::value>::type>
    _LIBCPP_INLINE_VISIBILITY explicit __policy_func(_Fp&& __f)
        : __policy_(__policy::__create_empty()) {
      typedef __default_alloc_func<_Fp, _Rp(_ArgTypes...)> _Fun;

      if (__function::__not_null(__f)) {
        __invoker_ = __invoker::template __create<_Fun>();
        __policy_ = __policy::__create<_Fun>();
        if (__use_small_storage<_Fun>()) {
          ::new ((void*)&__buf_.__small) _Fun(_VSTD::move(__f));
        } else {
          __builtin_new_allocator::__holder_t __hold =
              __builtin_new_allocator::__allocate_type<_Fun>(1);
          __buf_.__large = ::new (__hold.get()) _Fun(_VSTD::move(__f));
          (void)__hold.release();
        }
      }
    }

    _LIBCPP_INLINE_VISIBILITY
    __policy_func(const __policy_func& __f)
        : __buf_(__f.__buf_), __invoker_(__f.__invoker_),
          __policy_(__f.__policy_)
    {
        if (__policy_->__clone)
            __buf_.__large = __policy_->__clone(__f.__buf_.__large);
    }

    _LIBCPP_INLINE_VISIBILITY
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

    _LIBCPP_INLINE_VISIBILITY
    ~__policy_func()
    {
        if (__policy_->__destroy)
            __policy_->__destroy(__buf_.__large);
    }

    _LIBCPP_INLINE_VISIBILITY
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

    _LIBCPP_INLINE_VISIBILITY
    __policy_func& operator=(nullptr_t)
    {
        const __policy* __p = __policy_;
        __policy_ = __policy::__create_empty();
        __invoker_ = __invoker();
        if (__p->__destroy)
            __p->__destroy(__buf_.__large);
        return *this;
    }

    _LIBCPP_INLINE_VISIBILITY
    _Rp operator()(_ArgTypes&&... __args) const
    {
        return __invoker_.__call_(_VSTD::addressof(__buf_),
                                  _VSTD::forward<_ArgTypes>(__args)...);
    }

    _LIBCPP_INLINE_VISIBILITY
    void swap(__policy_func& __f)
    {
        _VSTD::swap(__invoker_, __f.__invoker_);
        _VSTD::swap(__policy_, __f.__policy_);
        _VSTD::swap(__buf_, __f.__buf_);
    }

    _LIBCPP_INLINE_VISIBILITY
    explicit operator bool() const _NOEXCEPT
    {
        return !__policy_->__is_null;
    }

#ifndef _LIBCPP_NO_RTTI
    _LIBCPP_INLINE_VISIBILITY
    const std::type_info& target_type() const _NOEXCEPT
    {
        return *__policy_->__type_info;
    }

    template <typename _Tp>
    _LIBCPP_INLINE_VISIBILITY const _Tp* target() const _NOEXCEPT
    {
        if (__policy_->__is_null || typeid(_Tp) != *__policy_->__type_info)
            return nullptr;
        if (__policy_->__clone) // Out of line storage.
            return reinterpret_cast<const _Tp*>(__buf_.__large);
        else
            return reinterpret_cast<const _Tp*>(&__buf_.__small);
    }
#endif // _LIBCPP_NO_RTTI
};

}  // __function

template<class _Rp, class ..._ArgTypes>
class _LIBCPP_TEMPLATE_VIS function<_Rp(_ArgTypes...)>
    : public __function::__maybe_derive_from_unary_function<_Rp(_ArgTypes...)>,
      public __function::__maybe_derive_from_binary_function<_Rp(_ArgTypes...)>
{
#ifndef _LIBCPP_ABI_OPTIMIZED_FUNCTION
    typedef __function::__value_func<_Rp(_ArgTypes...)> __func;
#else
    typedef __function::__policy_func<_Rp(_ArgTypes...)> __func;
#endif

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

    // construct/copy/destroy:
    _LIBCPP_INLINE_VISIBILITY
    function() _NOEXCEPT { }
    _LIBCPP_INLINE_VISIBILITY
    function(nullptr_t) _NOEXCEPT {}
    function(const function&);
    function(function&&) _NOEXCEPT;
    template<class _Fp, class = _EnableIfCallable<_Fp>>
    function(_Fp);


#if 0 /* evaluated by -frewrite-includes */
    template<class _Alloc>
      _LIBCPP_INLINE_VISIBILITY
      function(allocator_arg_t, const _Alloc&) _NOEXCEPT {}
    template<class _Alloc>
      _LIBCPP_INLINE_VISIBILITY
      function(allocator_arg_t, const _Alloc&, nullptr_t) _NOEXCEPT {}
    template<class _Alloc>
      function(allocator_arg_t, const _Alloc&, const function&);
    template<class _Alloc>
      function(allocator_arg_t, const _Alloc&, function&&);
    template<class _Fp, class _Alloc, class = _EnableIfCallable<_Fp>>
      function(allocator_arg_t, const _Alloc& __a, _Fp __f);
#endif

    function& operator=(const function&);
    function& operator=(function&&) _NOEXCEPT;
    function& operator=(nullptr_t) _NOEXCEPT;
    template<class _Fp, class = _EnableIfCallable<_Fp>>
    function& operator=(_Fp&&);

    ~function();

    // function modifiers:
    void swap(function&) _NOEXCEPT;


#if 0 /* evaluated by -frewrite-includes */
    template<class _Fp, class _Alloc>
      _LIBCPP_INLINE_VISIBILITY
      void assign(_Fp&& __f, const _Alloc& __a)
        {function(allocator_arg, __a, _VSTD::forward<_Fp>(__f)).swap(*this);}
#endif

    // function capacity:
    _LIBCPP_INLINE_VISIBILITY
    _LIBCPP_EXPLICIT operator bool() const _NOEXCEPT {
      return static_cast<bool>(__f_);
    }

    // deleted overloads close possible hole in the type system
    template<class _R2, class... _ArgTypes2>
      bool operator==(const function<_R2(_ArgTypes2...)>&) const = delete;
    template<class _R2, class... _ArgTypes2>
      bool operator!=(const function<_R2(_ArgTypes2...)>&) const = delete;
public:
    // function invocation:
    _Rp operator()(_ArgTypes...) const;

#ifndef _LIBCPP_NO_RTTI
    // function target access:
    const std::type_info& target_type() const _NOEXCEPT;
    template <typename _Tp> _Tp* target() _NOEXCEPT;
    template <typename _Tp> const _Tp* target() const _NOEXCEPT;
#endif  // _LIBCPP_NO_RTTI
};

#ifndef _LIBCPP_HAS_NO_DEDUCTION_GUIDES
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
#endif // !_LIBCPP_HAS_NO_DEDUCTION_GUIDES

template<class _Rp, class ..._ArgTypes>
function<_Rp(_ArgTypes...)>::function(const function& __f) : __f_(__f.__f_) {}


#if 0 /* evaluated by -frewrite-includes */
template<class _Rp, class ..._ArgTypes>
template <class _Alloc>
function<_Rp(_ArgTypes...)>::function(allocator_arg_t, const _Alloc&,
                                     const function& __f) : __f_(__f.__f_) {}
#endif

template <class _Rp, class... _ArgTypes>
function<_Rp(_ArgTypes...)>::function(function&& __f) _NOEXCEPT
    : __f_(_VSTD::move(__f.__f_)) {}


#if 0 /* evaluated by -frewrite-includes */
template<class _Rp, class ..._ArgTypes>
template <class _Alloc>
function<_Rp(_ArgTypes...)>::function(allocator_arg_t, const _Alloc&,
                                      function&& __f)
    : __f_(_VSTD::move(__f.__f_)) {}
#endif

template <class _Rp, class... _ArgTypes>
template <class _Fp, class>
function<_Rp(_ArgTypes...)>::function(_Fp __f) : __f_(_VSTD::move(__f)) {}


#if 0 /* evaluated by -frewrite-includes */
template <class _Rp, class... _ArgTypes>
template <class _Fp, class _Alloc, class>
function<_Rp(_ArgTypes...)>::function(allocator_arg_t, const _Alloc& __a,
                                      _Fp __f)
    : __f_(_VSTD::move(__f), __a) {}
#endif

template<class _Rp, class ..._ArgTypes>
function<_Rp(_ArgTypes...)>&
function<_Rp(_ArgTypes...)>::operator=(const function& __f)
{
    function(__f).swap(*this);
    return *this;
}

template<class _Rp, class ..._ArgTypes>
function<_Rp(_ArgTypes...)>&
function<_Rp(_ArgTypes...)>::operator=(function&& __f) _NOEXCEPT
{
    __f_ = std::move(__f.__f_);
    return *this;
}

template<class _Rp, class ..._ArgTypes>
function<_Rp(_ArgTypes...)>&
function<_Rp(_ArgTypes...)>::operator=(nullptr_t) _NOEXCEPT
{
    __f_ = nullptr;
    return *this;
}

template<class _Rp, class ..._ArgTypes>
template <class _Fp, class>
function<_Rp(_ArgTypes...)>&
function<_Rp(_ArgTypes...)>::operator=(_Fp&& __f)
{
    function(_VSTD::forward<_Fp>(__f)).swap(*this);
    return *this;
}

template<class _Rp, class ..._ArgTypes>
function<_Rp(_ArgTypes...)>::~function() {}

template<class _Rp, class ..._ArgTypes>
void
function<_Rp(_ArgTypes...)>::swap(function& __f) _NOEXCEPT
{
    __f_.swap(__f.__f_);
}

template<class _Rp, class ..._ArgTypes>
_Rp
function<_Rp(_ArgTypes...)>::operator()(_ArgTypes... __arg) const
{
    return __f_(_VSTD::forward<_ArgTypes>(__arg)...);
}

#ifndef _LIBCPP_NO_RTTI

template<class _Rp, class ..._ArgTypes>
const std::type_info&
function<_Rp(_ArgTypes...)>::target_type() const _NOEXCEPT
{
    return __f_.target_type();
}

template<class _Rp, class ..._ArgTypes>
template <typename _Tp>
_Tp*
function<_Rp(_ArgTypes...)>::target() _NOEXCEPT
{
    return (_Tp*)(__f_.template target<_Tp>());
}

template<class _Rp, class ..._ArgTypes>
template <typename _Tp>
const _Tp*
function<_Rp(_ArgTypes...)>::target() const _NOEXCEPT
{
    return __f_.template target<_Tp>();
}

#endif  // _LIBCPP_NO_RTTI

template <class _Rp, class... _ArgTypes>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator==(const function<_Rp(_ArgTypes...)>& __f, nullptr_t) _NOEXCEPT {return !__f;}

template <class _Rp, class... _ArgTypes>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator==(nullptr_t, const function<_Rp(_ArgTypes...)>& __f) _NOEXCEPT {return !__f;}

template <class _Rp, class... _ArgTypes>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator!=(const function<_Rp(_ArgTypes...)>& __f, nullptr_t) _NOEXCEPT {return (bool)__f;}

template <class _Rp, class... _ArgTypes>
inline _LIBCPP_INLINE_VISIBILITY
bool
operator!=(nullptr_t, const function<_Rp(_ArgTypes...)>& __f) _NOEXCEPT {return (bool)__f;}

template <class _Rp, class... _ArgTypes>
inline _LIBCPP_INLINE_VISIBILITY
void
swap(function<_Rp(_ArgTypes...)>& __x, function<_Rp(_ArgTypes...)>& __y) _NOEXCEPT
{return __x.swap(__y);}

#else // _LIBCPP_CXX03_LANG



#endif

////////////////////////////////////////////////////////////////////////////////
//                                  BIND
//==============================================================================

template<class _Tp> struct __is_bind_expression : public false_type {};
template<class _Tp> struct _LIBCPP_TEMPLATE_VIS is_bind_expression
    : public __is_bind_expression<typename remove_cv<_Tp>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR constexpr size_t is_bind_expression_v = is_bind_expression<_Tp>::value;
#endif

template<class _Tp> struct __is_placeholder : public integral_constant<int, 0> {};
template<class _Tp> struct _LIBCPP_TEMPLATE_VIS is_placeholder
    : public __is_placeholder<typename remove_cv<_Tp>::type> {};


#if 1 /* evaluated by -frewrite-includes */
template <class _Tp>
_LIBCPP_INLINE_VAR constexpr size_t is_placeholder_v = is_placeholder<_Tp>::value;
#endif

namespace placeholders
{

template <int _Np> struct __ph {};


#if 1 /* evaluated by -frewrite-includes */
_LIBCPP_FUNC_VIS extern const __ph<1>   _1;
_LIBCPP_FUNC_VIS extern const __ph<2>   _2;
_LIBCPP_FUNC_VIS extern const __ph<3>   _3;
_LIBCPP_FUNC_VIS extern const __ph<4>   _4;
_LIBCPP_FUNC_VIS extern const __ph<5>   _5;
_LIBCPP_FUNC_VIS extern const __ph<6>   _6;
_LIBCPP_FUNC_VIS extern const __ph<7>   _7;
_LIBCPP_FUNC_VIS extern const __ph<8>   _8;
_LIBCPP_FUNC_VIS extern const __ph<9>   _9;
_LIBCPP_FUNC_VIS extern const __ph<10> _10;
#else
/* _LIBCPP_INLINE_VAR */ constexpr __ph<1>   _1{};
/* _LIBCPP_INLINE_VAR */ constexpr __ph<2>   _2{};
/* _LIBCPP_INLINE_VAR */ constexpr __ph<3>   _3{};
/* _LIBCPP_INLINE_VAR */ constexpr __ph<4>   _4{};
/* _LIBCPP_INLINE_VAR */ constexpr __ph<5>   _5{};
/* _LIBCPP_INLINE_VAR */ constexpr __ph<6>   _6{};
/* _LIBCPP_INLINE_VAR */ constexpr __ph<7>   _7{};
/* _LIBCPP_INLINE_VAR */ constexpr __ph<8>   _8{};
/* _LIBCPP_INLINE_VAR */ constexpr __ph<9>   _9{};
/* _LIBCPP_INLINE_VAR */ constexpr __ph<10> _10{};
#endif // defined(_LIBCPP_CXX03_LANG) || defined(_LIBCPP_BUILDING_LIBRARY)

}  // placeholders

template<int _Np>
struct __is_placeholder<placeholders::__ph<_Np> >
    : public integral_constant<int, _Np> {};


#ifndef _LIBCPP_CXX03_LANG

template <class _Tp, class _Uj>
inline _LIBCPP_INLINE_VISIBILITY
_Tp&
__mu(reference_wrapper<_Tp> __t, _Uj&)
{
    return __t.get();
}

template <class _Ti, class ..._Uj, size_t ..._Indx>
inline _LIBCPP_INLINE_VISIBILITY
typename __invoke_of<_Ti&, _Uj...>::type
__mu_expand(_Ti& __ti, tuple<_Uj...>& __uj, __tuple_indices<_Indx...>)
{
    return __ti(_VSTD::forward<_Uj>(_VSTD::get<_Indx>(__uj))...);
}

template <class _Ti, class ..._Uj>
inline _LIBCPP_INLINE_VISIBILITY
typename _EnableIf
<
    is_bind_expression<_Ti>::value,
    __invoke_of<_Ti&, _Uj...>
>::type
__mu(_Ti& __ti, tuple<_Uj...>& __uj)
{
    typedef typename __make_tuple_indices<sizeof...(_Uj)>::type __indices;
    return  __mu_expand(__ti, __uj, __indices());
}

template <bool IsPh, class _Ti, class _Uj>
struct __mu_return2 {};

template <class _Ti, class _Uj>
struct __mu_return2<true, _Ti, _Uj>
{
    typedef typename tuple_element<is_placeholder<_Ti>::value - 1, _Uj>::type type;
};

template <class _Ti, class _Uj>
inline _LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    0 < is_placeholder<_Ti>::value,
    typename __mu_return2<0 < is_placeholder<_Ti>::value, _Ti, _Uj>::type
>::type
__mu(_Ti&, _Uj& __uj)
{
    const size_t _Indx = is_placeholder<_Ti>::value - 1;
    return _VSTD::forward<typename tuple_element<_Indx, _Uj>::type>(_VSTD::get<_Indx>(__uj));
}

template <class _Ti, class _Uj>
inline _LIBCPP_INLINE_VISIBILITY
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
struct __mu_return_invokable  // false
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
inline _LIBCPP_INLINE_VISIBILITY
typename __bind_return<_Fp, _BoundArgs, _Args>::type
__apply_functor(_Fp& __f, _BoundArgs& __bound_args, __tuple_indices<_Indx...>,
                _Args&& __args)
{
    return _VSTD::__invoke(__f, _VSTD::__mu(_VSTD::get<_Indx>(__bound_args), __args)...);
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
      _LIBCPP_INLINE_VISIBILITY
      explicit __bind(_Gp&& __f, _BA&& ...__bound_args)
        : __f_(_VSTD::forward<_Gp>(__f)),
          __bound_args_(_VSTD::forward<_BA>(__bound_args)...) {}

    template <class ..._Args>
        _LIBCPP_INLINE_VISIBILITY
        typename __bind_return<_Fd, _Td, tuple<_Args&&...> >::type
        operator()(_Args&& ...__args)
        {
            return _VSTD::__apply_functor(__f_, __bound_args_, __indices(),
                                  tuple<_Args&&...>(_VSTD::forward<_Args>(__args)...));
        }

    template <class ..._Args>
        _LIBCPP_INLINE_VISIBILITY
        typename __bind_return<const _Fd, const _Td, tuple<_Args&&...> >::type
        operator()(_Args&& ...__args) const
        {
            return _VSTD::__apply_functor(__f_, __bound_args_, __indices(),
                                   tuple<_Args&&...>(_VSTD::forward<_Args>(__args)...));
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
      _LIBCPP_INLINE_VISIBILITY
      explicit __bind_r(_Gp&& __f, _BA&& ...__bound_args)
        : base(_VSTD::forward<_Gp>(__f),
               _VSTD::forward<_BA>(__bound_args)...) {}

    template <class ..._Args>
        _LIBCPP_INLINE_VISIBILITY
        typename enable_if
        <
            is_convertible<typename __bind_return<_Fd, _Td, tuple<_Args&&...> >::type,
                           result_type>::value || is_void<_Rp>::value,
            result_type
        >::type
        operator()(_Args&& ...__args)
        {
            typedef __invoke_void_return_wrapper<_Rp> _Invoker;
            return _Invoker::__call(static_cast<base&>(*this), _VSTD::forward<_Args>(__args)...);
        }

    template <class ..._Args>
        _LIBCPP_INLINE_VISIBILITY
        typename enable_if
        <
            is_convertible<typename __bind_return<const _Fd, const _Td, tuple<_Args&&...> >::type,
                           result_type>::value || is_void<_Rp>::value,
            result_type
        >::type
        operator()(_Args&& ...__args) const
        {
            typedef __invoke_void_return_wrapper<_Rp> _Invoker;
            return _Invoker::__call(static_cast<base const&>(*this), _VSTD::forward<_Args>(__args)...);
        }
};

template<class _Rp, class _Fp, class ..._BoundArgs>
struct __is_bind_expression<__bind_r<_Rp, _Fp, _BoundArgs...> > : public true_type {};

template<class _Fp, class ..._BoundArgs>
inline _LIBCPP_INLINE_VISIBILITY
__bind<_Fp, _BoundArgs...>
bind(_Fp&& __f, _BoundArgs&&... __bound_args)
{
    typedef __bind<_Fp, _BoundArgs...> type;
    return type(_VSTD::forward<_Fp>(__f), _VSTD::forward<_BoundArgs>(__bound_args)...);
}

template<class _Rp, class _Fp, class ..._BoundArgs>
inline _LIBCPP_INLINE_VISIBILITY
__bind_r<_Rp, _Fp, _BoundArgs...>
bind(_Fp&& __f, _BoundArgs&&... __bound_args)
{
    typedef __bind_r<_Rp, _Fp, _BoundArgs...> type;
    return type(_VSTD::forward<_Fp>(__f), _VSTD::forward<_BoundArgs>(__bound_args)...);
}

#endif  // _LIBCPP_CXX03_LANG


#if 1 /* evaluated by -frewrite-includes */

template <class _Fn, class ..._Args>
invoke_result_t<_Fn, _Args...>
invoke(_Fn&& __f, _Args&&... __args)
    noexcept(is_nothrow_invocable_v<_Fn, _Args...>)
{
    return _VSTD::__invoke(_VSTD::forward<_Fn>(__f), _VSTD::forward<_Args>(__args)...);
}

template <class _DecayFunc>
class _LIBCPP_TEMPLATE_VIS __not_fn_imp {
  _DecayFunc __fd;

public:
    __not_fn_imp() = delete;

    template <class ..._Args>
    _LIBCPP_INLINE_VISIBILITY
    auto operator()(_Args&& ...__args) &
            noexcept(noexcept(!_VSTD::invoke(__fd, _VSTD::forward<_Args>(__args)...)))
        -> decltype(          !_VSTD::invoke(__fd, _VSTD::forward<_Args>(__args)...))
        { return              !_VSTD::invoke(__fd, _VSTD::forward<_Args>(__args)...); }

    template <class ..._Args>
    _LIBCPP_INLINE_VISIBILITY
    auto operator()(_Args&& ...__args) &&
            noexcept(noexcept(!_VSTD::invoke(_VSTD::move(__fd), _VSTD::forward<_Args>(__args)...)))
        -> decltype(          !_VSTD::invoke(_VSTD::move(__fd), _VSTD::forward<_Args>(__args)...))
        { return              !_VSTD::invoke(_VSTD::move(__fd), _VSTD::forward<_Args>(__args)...); }

    template <class ..._Args>
    _LIBCPP_INLINE_VISIBILITY
    auto operator()(_Args&& ...__args) const&
            noexcept(noexcept(!_VSTD::invoke(__fd, _VSTD::forward<_Args>(__args)...)))
        -> decltype(          !_VSTD::invoke(__fd, _VSTD::forward<_Args>(__args)...))
        { return              !_VSTD::invoke(__fd, _VSTD::forward<_Args>(__args)...); }


    template <class ..._Args>
    _LIBCPP_INLINE_VISIBILITY
    auto operator()(_Args&& ...__args) const&&
            noexcept(noexcept(!_VSTD::invoke(_VSTD::move(__fd), _VSTD::forward<_Args>(__args)...)))
        -> decltype(          !_VSTD::invoke(_VSTD::move(__fd), _VSTD::forward<_Args>(__args)...))
        { return              !_VSTD::invoke(_VSTD::move(__fd), _VSTD::forward<_Args>(__args)...); }

private:
    template <class _RawFunc,
              class = enable_if_t<!is_same<decay_t<_RawFunc>, __not_fn_imp>::value>>
    _LIBCPP_INLINE_VISIBILITY
    explicit __not_fn_imp(_RawFunc&& __rf)
        : __fd(_VSTD::forward<_RawFunc>(__rf)) {}

    template <class _RawFunc>
    friend inline _LIBCPP_INLINE_VISIBILITY
    __not_fn_imp<decay_t<_RawFunc>> not_fn(_RawFunc&&);
};

template <class _RawFunc>
inline _LIBCPP_INLINE_VISIBILITY
__not_fn_imp<decay_t<_RawFunc>> not_fn(_RawFunc&& __fn) {
    return __not_fn_imp<decay_t<_RawFunc>>(_VSTD::forward<_RawFunc>(__fn));
}

#endif

// struct hash<T*> in <memory>

template <class _BinaryPredicate, class _ForwardIterator1, class _ForwardIterator2>
pair<_ForwardIterator1, _ForwardIterator1> _LIBCPP_CONSTEXPR_AFTER_CXX11
__search(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
         _ForwardIterator2 __first2, _ForwardIterator2 __last2, _BinaryPredicate __pred,
         forward_iterator_tag, forward_iterator_tag)
{
    if (__first2 == __last2)
        return make_pair(__first1, __first1);  // Everything matches an empty sequence
    while (true)
    {
        // Find first element in sequence 1 that matchs *__first2, with a mininum of loop checks
        while (true)
        {
            if (__first1 == __last1)  // return __last1 if no element matches *__first2
                return make_pair(__last1, __last1);
            if (__pred(*__first1, *__first2))
                break;
            ++__first1;
        }
        // *__first1 matches *__first2, now match elements after here
        _ForwardIterator1 __m1 = __first1;
        _ForwardIterator2 __m2 = __first2;
        while (true)
        {
            if (++__m2 == __last2)  // If pattern exhausted, __first1 is the answer (works for 1 element pattern)
                return make_pair(__first1, __m1);
            if (++__m1 == __last1)  // Otherwise if source exhaused, pattern not found
                return make_pair(__last1, __last1);
            if (!__pred(*__m1, *__m2))  // if there is a mismatch, restart with a new __first1
            {
                ++__first1;
                break;
            }  // else there is a match, check next elements
        }
    }
}

template <class _BinaryPredicate, class _RandomAccessIterator1, class _RandomAccessIterator2>
_LIBCPP_CONSTEXPR_AFTER_CXX11
pair<_RandomAccessIterator1, _RandomAccessIterator1>
__search(_RandomAccessIterator1 __first1, _RandomAccessIterator1 __last1,
         _RandomAccessIterator2 __first2, _RandomAccessIterator2 __last2, _BinaryPredicate __pred,
           random_access_iterator_tag, random_access_iterator_tag)
{
    typedef typename iterator_traits<_RandomAccessIterator1>::difference_type _D1;
    typedef typename iterator_traits<_RandomAccessIterator2>::difference_type _D2;
    // Take advantage of knowing source and pattern lengths.  Stop short when source is smaller than pattern
    const _D2 __len2 = __last2 - __first2;
    if (__len2 == 0)
        return make_pair(__first1, __first1);
    const _D1 __len1 = __last1 - __first1;
    if (__len1 < __len2)
        return make_pair(__last1, __last1);
    const _RandomAccessIterator1 __s = __last1 - (__len2 - 1);  // Start of pattern match can't go beyond here

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
             ++__m1;          // no need to check range on __m1 because __s guarantees we have enough source
             if (!__pred(*__m1, *__m2))
             {
                 ++__first1;
                 break;
             }
         }
    }
}


#if 1 /* evaluated by -frewrite-includes */

// default searcher
template<class _ForwardIterator, class _BinaryPredicate = equal_to<>>
class _LIBCPP_TYPE_VIS default_searcher {
public:
    _LIBCPP_INLINE_VISIBILITY
    default_searcher(_ForwardIterator __f, _ForwardIterator __l,
                       _BinaryPredicate __p = _BinaryPredicate())
        : __first_(__f), __last_(__l), __pred_(__p) {}

    template <typename _ForwardIterator2>
    _LIBCPP_INLINE_VISIBILITY
    pair<_ForwardIterator2, _ForwardIterator2>
    operator () (_ForwardIterator2 __f, _ForwardIterator2 __l) const
    {
        return _VSTD::__search(__f, __l, __first_, __last_, __pred_,
            typename _VSTD::iterator_traits<_ForwardIterator>::iterator_category(),
            typename _VSTD::iterator_traits<_ForwardIterator2>::iterator_category());
    }

private:
    _ForwardIterator __first_;
    _ForwardIterator __last_;
    _BinaryPredicate __pred_;
    };

#endif // _LIBCPP_STD_VER > 14


#if 0 /* evaluated by -frewrite-includes */
template <class _Tp>
using unwrap_reference_t = typename unwrap_reference<_Tp>::type;

template <class _Tp>
using unwrap_ref_decay_t = typename unwrap_ref_decay<_Tp>::type;
#endif // > C++17

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

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_FUNCTIONAL



// -*- C++ -*-
//===------------------------------ bit ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===---------------------------------------------------------------------===//

#ifndef _LIBCPP_BIT
#define _LIBCPP_BIT

/*
    bit synopsis

namespace std {

  template <class T>
    constexpr bool ispow2(T x) noexcept; // C++20
  template <class T>
    constexpr T ceil2(T x);              // C++20
  template <class T>
    constexpr T floor2(T x) noexcept;    // C++20
  template <class T>
    constexpr T log2p1(T x) noexcept;    // C++20

  // 23.20.2, rotating
  template<class T>
    constexpr T rotl(T x, unsigned int s) noexcept; // C++20
  template<class T>
    constexpr T rotr(T x, unsigned int s) noexcept; // C++20

  // 23.20.3, counting
  template<class T>
    constexpr int countl_zero(T x) noexcept;  // C++20
  template<class T>
    constexpr int countl_one(T x) noexcept;   // C++20
  template<class T>
    constexpr int countr_zero(T x) noexcept;  // C++20
  template<class T>
    constexpr int countr_one(T x) noexcept;   // C++20
  template<class T>
    constexpr int popcount(T x) noexcept;     // C++20

  // 20.15.9, endian
  enum class endian {
    little = see below,        // C++20
    big = see below,           // C++20
    native = see below         // C++20
};

} // namespace std

*/








#if 0 /* evaluated by -frewrite-includes */

#endif

#if 0 /* evaluated by -frewrite-includes */

#endif


#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_PUSH_MACROS

// -*- C++ -*-
//===------------------------ __undef_macros ------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//


#ifdef min

#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
_LIBCPP_WARNING("macro min is incompatible with C++.  Try #define NOMINMAX "
                "before any Windows header. #undefing min")
#else
#warning: macro min is incompatible with C++.  #undefing min
#endif
#endif
#undef min
#endif

#ifdef max

#if 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
_LIBCPP_WARNING("macro max is incompatible with C++.  Try #define NOMINMAX "
                "before any Windows header. #undefing max")
#else
#warning: macro max is incompatible with C++.  #undefing max
#endif
#endif
#undef max
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

#ifndef _LIBCPP_COMPILER_MSVC

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
int __libcpp_ctz(unsigned __x)           _NOEXCEPT { return __builtin_ctz(__x); }

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
int __libcpp_ctz(unsigned long __x)      _NOEXCEPT { return __builtin_ctzl(__x); }

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
int __libcpp_ctz(unsigned long long __x) _NOEXCEPT { return __builtin_ctzll(__x); }


inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
int __libcpp_clz(unsigned __x)           _NOEXCEPT { return __builtin_clz(__x); }

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
int __libcpp_clz(unsigned long __x)      _NOEXCEPT { return __builtin_clzl(__x); }

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
int __libcpp_clz(unsigned long long __x) _NOEXCEPT { return __builtin_clzll(__x); }


inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
int __libcpp_popcount(unsigned __x)           _NOEXCEPT { return __builtin_popcount(__x); }

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
int __libcpp_popcount(unsigned long __x)      _NOEXCEPT { return __builtin_popcountl(__x); }

inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
int __libcpp_popcount(unsigned long long __x) _NOEXCEPT { return __builtin_popcountll(__x); }

#else  // _LIBCPP_COMPILER_MSVC

// Precondition:  __x != 0
inline _LIBCPP_INLINE_VISIBILITY
int __libcpp_ctz(unsigned __x) {
  static_assert(sizeof(unsigned) == sizeof(unsigned long), "");
  static_assert(sizeof(unsigned long) == 4, "");
  unsigned long __where;
  if (_BitScanForward(&__where, __x))
    return static_cast<int>(__where);
  return 32;
}

inline _LIBCPP_INLINE_VISIBILITY
int __libcpp_ctz(unsigned long __x) {
    static_assert(sizeof(unsigned long) == sizeof(unsigned), "");
    return __ctz(static_cast<unsigned>(__x));
}

inline _LIBCPP_INLINE_VISIBILITY
int __libcpp_ctz(unsigned long long __x) {
    unsigned long __where;

#if 0 /* evaluated by -frewrite-includes */
    (defined(_M_AMD64) || defined(__x86_64__))
  if (_BitScanForward64(&__where, __x))
    return static_cast<int>(__where);
#else
  // Win32 doesn't have _BitScanForward64 so emulate it with two 32 bit calls.
  if (_BitScanForward(&__where, static_cast<unsigned long>(__x)))
    return static_cast<int>(__where);
  if (_BitScanForward(&__where, static_cast<unsigned long>(__x >> 32)))
    return static_cast<int>(__where + 32);
#endif
  return 64;
}

// Precondition:  __x != 0
inline _LIBCPP_INLINE_VISIBILITY
int __libcpp_clz(unsigned __x) {
  static_assert(sizeof(unsigned) == sizeof(unsigned long), "");
  static_assert(sizeof(unsigned long) == 4, "");
  unsigned long __where;
  if (_BitScanReverse(&__where, __x))
    return static_cast<int>(31 - __where);
  return 32; // Undefined Behavior.
}

inline _LIBCPP_INLINE_VISIBILITY
int __libcpp_clz(unsigned long __x) {
    static_assert(sizeof(unsigned) == sizeof(unsigned long), "");
    return __libcpp_clz(static_cast<unsigned>(__x));
}

inline _LIBCPP_INLINE_VISIBILITY
int __libcpp_clz(unsigned long long __x) {
  unsigned long __where;

#if 0 /* evaluated by -frewrite-includes */
  if (_BitScanReverse64(&__where, __x))
    return static_cast<int>(63 - __where);
#else
  // Win32 doesn't have _BitScanReverse64 so emulate it with two 32 bit calls.
  if (_BitScanReverse(&__where, static_cast<unsigned long>(__x >> 32)))
    return static_cast<int>(63 - (__where + 32));
  if (_BitScanReverse(&__where, static_cast<unsigned long>(__x)))
    return static_cast<int>(63 - __where);
#endif
  return 64; // Undefined Behavior.
}

inline _LIBCPP_INLINE_VISIBILITY int __libcpp_popcount(unsigned __x) {
  static_assert(sizeof(unsigned) == 4, "");
  return __popcnt(__x);
}

inline _LIBCPP_INLINE_VISIBILITY int __libcpp_popcount(unsigned long __x) {
  static_assert(sizeof(unsigned long) == 4, "");
  return __popcnt(__x);
}

inline _LIBCPP_INLINE_VISIBILITY int __libcpp_popcount(unsigned long long __x) {
  static_assert(sizeof(unsigned long long) == 8, "");
  return __popcnt64(__x);
}

#endif // _LIBCPP_COMPILER_MSVC

template <class _Tp>
using __bitop_unsigned_integer _LIBCPP_NODEBUG_TYPE = integral_constant<bool,
         is_integral<_Tp>::value &&
         is_unsigned<_Tp>::value &&
        _IsNotSame<typename remove_cv<_Tp>::type, bool>::value &&
        _IsNotSame<typename remove_cv<_Tp>::type, signed char>::value &&
        _IsNotSame<typename remove_cv<_Tp>::type, wchar_t>::value &&
        _IsNotSame<typename remove_cv<_Tp>::type, char16_t>::value &&
        _IsNotSame<typename remove_cv<_Tp>::type, char32_t>::value
    >;


template<class _Tp>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
_Tp __rotl(_Tp __t, unsigned int __cnt) _NOEXCEPT
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__rotl requires unsigned");
    const unsigned int __dig = numeric_limits<_Tp>::digits;
    if ((__cnt % __dig) == 0)
        return __t;
    return (__t << (__cnt % __dig)) | (__t >> (__dig - (__cnt % __dig)));
}


template<class _Tp>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
_Tp __rotr(_Tp __t, unsigned int __cnt) _NOEXCEPT
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__rotr requires unsigned");
    const unsigned int __dig = numeric_limits<_Tp>::digits;
    if ((__cnt % __dig) == 0)
        return __t;
    return (__t >> (__cnt % __dig)) | (__t << (__dig - (__cnt % __dig)));
}



template<class _Tp>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
int __countr_zero(_Tp __t) _NOEXCEPT
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__countr_zero requires unsigned");
    if (__t == 0)
        return numeric_limits<_Tp>::digits;

    if      (sizeof(_Tp) <= sizeof(unsigned int))
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
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
int __countl_zero(_Tp __t) _NOEXCEPT
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__countl_zero requires unsigned");
    if (__t == 0)
        return numeric_limits<_Tp>::digits;

    if      (sizeof(_Tp) <= sizeof(unsigned int))
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
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
int __countl_one(_Tp __t) _NOEXCEPT
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__countl_one requires unsigned");
    return __t != numeric_limits<_Tp>::max()
        ? __countl_zero(static_cast<_Tp>(~__t))
        : numeric_limits<_Tp>::digits;
}


template<class _Tp>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
int __countr_one(_Tp __t) _NOEXCEPT
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__countr_one requires unsigned");
    return __t != numeric_limits<_Tp>::max()
        ? __countr_zero(static_cast<_Tp>(~__t))
        : numeric_limits<_Tp>::digits;
}


template<class _Tp>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
int
__popcount(_Tp __t) _NOEXCEPT
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__libcpp_popcount requires unsigned");
    if      (sizeof(_Tp) <= sizeof(unsigned int))
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


// integral log base 2
template<class _Tp>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
unsigned __bit_log2(_Tp __t) _NOEXCEPT
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__bit_log2 requires unsigned");
    return std::numeric_limits<_Tp>::digits - 1 - __countl_zero(__t);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
bool __ispow2(_Tp __t) _NOEXCEPT
{
    static_assert(__bitop_unsigned_integer<_Tp>::value, "__ispow2 requires unsigned");
	return __t != 0 && (((__t & (__t - 1)) == 0));
}



#if 0 /* evaluated by -frewrite-includes */

template<class _Tp>
_LIBCPP_INLINE_VISIBILITY constexpr
enable_if_t<__bitop_unsigned_integer<_Tp>::value, _Tp>
rotl(_Tp __t, unsigned int __cnt) noexcept
{
    return __rotl(__t, __cnt);
}


// rotr
template<class _Tp>
_LIBCPP_INLINE_VISIBILITY constexpr
enable_if_t<__bitop_unsigned_integer<_Tp>::value, _Tp>
rotr(_Tp __t, unsigned int __cnt) noexcept
{
    return __rotr(__t, __cnt);
}


template<class _Tp>
_LIBCPP_INLINE_VISIBILITY constexpr
enable_if_t<__bitop_unsigned_integer<_Tp>::value, int>
countl_zero(_Tp __t) noexcept
{
    return __countl_zero(__t);
}


template<class _Tp>
_LIBCPP_INLINE_VISIBILITY constexpr
enable_if_t<__bitop_unsigned_integer<_Tp>::value, int>
countl_one(_Tp __t) noexcept
{
    return __countl_one(__t);
}


template<class _Tp>
_LIBCPP_INLINE_VISIBILITY constexpr
enable_if_t<__bitop_unsigned_integer<_Tp>::value, int>
countr_zero(_Tp __t) noexcept
{
	return __countr_zero(__t);
}


template<class _Tp>
_LIBCPP_INLINE_VISIBILITY constexpr
enable_if_t<__bitop_unsigned_integer<_Tp>::value, int>
countr_one(_Tp __t) noexcept
{
    return __countr_one(__t);
}


template<class _Tp>
_LIBCPP_INLINE_VISIBILITY constexpr
enable_if_t<__bitop_unsigned_integer<_Tp>::value, int>
popcount(_Tp __t) noexcept
{
    return __popcount(__t);
}


template <class _Tp>
_LIBCPP_INLINE_VISIBILITY constexpr
enable_if_t<__bitop_unsigned_integer<_Tp>::value, bool>
ispow2(_Tp __t) noexcept
{
    return __ispow2(__t);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY constexpr
enable_if_t<__bitop_unsigned_integer<_Tp>::value, _Tp>
floor2(_Tp __t) noexcept
{
    return __t == 0 ? 0 : _Tp{1} << __bit_log2(__t);
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY constexpr
enable_if_t<__bitop_unsigned_integer<_Tp>::value, _Tp>
ceil2(_Tp __t) noexcept
{
    if (__t < 2) return 1;
    const unsigned __n = numeric_limits<_Tp>::digits - countl_zero((_Tp)(__t - 1u));
    _LIBCPP_DEBUG_ASSERT(__libcpp_is_constant_evaluated() || __n != numeric_limits<_Tp>::digits, "Bad input to ceil2");

    if constexpr (sizeof(_Tp) >= sizeof(unsigned))
        return _Tp{1} << __n;
    else
    {
        const unsigned __extra = numeric_limits<unsigned>::digits  - numeric_limits<_Tp>::digits;
        const unsigned __retVal = 1u << (__n + __extra);
        return (_Tp) (__retVal >> __extra);
    }
}

template <class _Tp>
_LIBCPP_INLINE_VISIBILITY constexpr
enable_if_t<__bitop_unsigned_integer<_Tp>::value, _Tp>
log2p1(_Tp __t) noexcept
{
    return __t == 0 ? 0 : __bit_log2(__t) + 1;
}


enum class endian
{
    little = 0xDEAD,
    big    = 0xFACE,

#if 0 /* evaluated by -frewrite-includes */
    native = little

#elif 0 /* evaluated by -frewrite-includes */
    native = big
#else
    native = 0xCAFE
#endif
};

#endif // _LIBCPP_STD_VER > 17

_LIBCPP_END_NAMESPACE_STD

_LIBCPP_POP_MACROS

#endif // _LIBCPP_BIT





#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_PUSH_MACROS

// -*- C++ -*-
//===------------------------ __undef_macros ------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

_LIBCPP_BEGIN_NAMESPACE_STD

// I'd like to replace these with _VSTD::equal_to<void>, but can't because:
//   * That only works with C++14 and later, and
//   * We haven't included <functional> here.
template <class _T1, class _T2 = _T1>
struct __equal_to
{
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11 bool operator()(const _T1& __x, const _T1& __y) const {return __x == __y;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11 bool operator()(const _T1& __x, const _T2& __y) const {return __x == __y;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11 bool operator()(const _T2& __x, const _T1& __y) const {return __x == __y;}
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11 bool operator()(const _T2& __x, const _T2& __y) const {return __x == __y;}
};

template <class _T1>
struct __equal_to<_T1, _T1>
{
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _T1& __x, const _T1& __y) const {return __x == __y;}
};

template <class _T1>
struct __equal_to<const _T1, _T1>
{
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _T1& __x, const _T1& __y) const {return __x == __y;}
};

template <class _T1>
struct __equal_to<_T1, const _T1>
{
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _T1& __x, const _T1& __y) const {return __x == __y;}
};

template <class _T1, class _T2 = _T1>
struct __less
{
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _T1& __x, const _T1& __y) const {return __x < __y;}

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _T1& __x, const _T2& __y) const {return __x < __y;}

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _T2& __x, const _T1& __y) const {return __x < __y;}

    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _T2& __x, const _T2& __y) const {return __x < __y;}
};

template <class _T1>
struct __less<_T1, _T1>
{
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _T1& __x, const _T1& __y) const {return __x < __y;}
};

template <class _T1>
struct __less<const _T1, _T1>
{
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _T1& __x, const _T1& __y) const {return __x < __y;}
};

template <class _T1>
struct __less<_T1, const _T1>
{
    _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
    bool operator()(const _T1& __x, const _T1& __y) const {return __x < __y;}
};

template <class _Predicate>
class __invert // invert the sense of a comparison
{
private:
    _Predicate __p_;
public:
    _LIBCPP_INLINE_VISIBILITY __invert() {}

    _LIBCPP_INLINE_VISIBILITY
    explicit __invert(_Predicate __p) : __p_(__p) {}

    template <class _T1>
    _LIBCPP_INLINE_VISIBILITY
    bool operator()(const _T1& __x) {return !__p_(__x);}

    template <class _T1, class _T2>
    _LIBCPP_INLINE_VISIBILITY
    bool operator()(const _T1& __x, const _T2& __y) {return __p_(__y, __x);}
};

// Perform division by two quickly for positive integers (llvm.org/PR39129)

template <typename _Integral>
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
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
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR
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
  // Pass the comparator by lvalue reference. Or in debug mode, using a
  // debugging wrapper that stores a reference.
#ifndef _LIBCPP_DEBUG
  typedef typename add_lvalue_reference<_Comp>::type type;
#else
  typedef __debug_less<_Comp> type;
#endif
};


// copy
template <class _Iter>
inline _LIBCPP_INLINE_VISIBILITY
_Iter
__unwrap_iter(_Iter __i)
{
    return __i;
}

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY
typename enable_if
<
    is_trivially_copy_assignable<_Tp>::value,
    _Tp*
>::type
__unwrap_iter(move_iterator<_Tp*> __i)
{
    return __i.base();
}


#if 1 /* evaluated by -frewrite-includes */

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
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
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
typename enable_if
<
    is_trivially_copy_assignable<_Tp>::value,
    const _Tp*
>::type
__unwrap_iter(__wrap_iter<const _Tp*> __i)
{
    return __i.base();
}

#else

template <class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_IF_NODEBUG
typename enable_if
<
    is_trivially_copy_assignable<_Tp>::value,
    __wrap_iter<_Tp*>
>::type
__unwrap_iter(__wrap_iter<_Tp*> __i)
{
    return __i;
}

#endif  // _LIBCPP_DEBUG_LEVEL < 2


// fill_n

template <class _OutputIterator, class _Size, class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
_OutputIterator
__fill_n(_OutputIterator __first, _Size __n, const _Tp& __value_)
{
    for (; __n > 0; ++__first, (void) --__n)
        *__first = __value_;
    return __first;
}

template <class _OutputIterator, class _Size, class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
_OutputIterator
fill_n(_OutputIterator __first, _Size __n, const _Tp& __value_)
{
   return _VSTD::__fill_n(__first, __convert_to_integral(__n), __value_);
}

// fill

template <class _ForwardIterator, class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
void
__fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value_, forward_iterator_tag)
{
    for (; __first != __last; ++__first)
        *__first = __value_;
}

template <class _RandomAccessIterator, class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
void
__fill(_RandomAccessIterator __first, _RandomAccessIterator __last, const _Tp& __value_, random_access_iterator_tag)
{
    _VSTD::fill_n(__first, __last - __first, __value_);
}

template <class _ForwardIterator, class _Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
void
fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value_)
{
    _VSTD::__fill(__first, __last, __value_, typename iterator_traits<_ForwardIterator>::iterator_category());
}

// min_element

template <class _ForwardIterator, class _Compare>
_LIBCPP_NODISCARD_EXT inline
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
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
_LIBCPP_NODISCARD_EXT inline
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
_ForwardIterator
min_element(_ForwardIterator __first, _ForwardIterator __last)
{
    return _VSTD::min_element(__first, __last,
              __less<typename iterator_traits<_ForwardIterator>::value_type>());
}

// min

template <class _Tp, class _Compare>
_LIBCPP_NODISCARD_EXT inline
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
const _Tp&
min(const _Tp& __a, const _Tp& __b, _Compare __comp)
{
    return __comp(__b, __a) ? __b : __a;
}

template <class _Tp>
_LIBCPP_NODISCARD_EXT inline
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
const _Tp&
min(const _Tp& __a, const _Tp& __b)
{
    return _VSTD::min(__a, __b, __less<_Tp>());
}

#ifndef _LIBCPP_CXX03_LANG

template<class _Tp, class _Compare>
_LIBCPP_NODISCARD_EXT inline
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
_Tp
min(initializer_list<_Tp> __t, _Compare __comp)
{
    return *_VSTD::min_element(__t.begin(), __t.end(), __comp);
}

template<class _Tp>
_LIBCPP_NODISCARD_EXT inline
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX11
_Tp
min(initializer_list<_Tp> __t)
{
    return *_VSTD::min_element(__t.begin(), __t.end(), __less<_Tp>());
}

#endif  // _LIBCPP_CXX03_LANG

// __independent_bits_engine

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
                                         sizeof(_UIntType) * __CHAR_BIT__ - 1>::value;
};

template<class _Engine, class _UIntType>
class __independent_bits_engine
{
public:
    // types
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

#ifdef _LIBCPP_CXX03_LANG
    static const _Working_result_type _Rp = _Engine::_Max - _Engine::_Min
                                          + _Working_result_type(1);
#else
    static _LIBCPP_CONSTEXPR const _Working_result_type _Rp = _Engine::max() - _Engine::min()
                                                      + _Working_result_type(1);
#endif
    static _LIBCPP_CONSTEXPR const size_t __m = __log2<_Working_result_type, _Rp>::value;
    static _LIBCPP_CONSTEXPR const size_t _WDt = numeric_limits<_Working_result_type>::digits;
    static _LIBCPP_CONSTEXPR const size_t _EDt = numeric_limits<_Engine_result_type>::digits;

public:
    // constructors and seeding functions
    __independent_bits_engine(_Engine& __e, size_t __w);

    // generating functions
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

// uniform_int_distribution

template<class _IntType = int>
class uniform_int_distribution
{
public:
    // types
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
    // constructors and reset functions
    explicit uniform_int_distribution(result_type __a = 0,
                                      result_type __b = numeric_limits<result_type>::max())
        : __p_(param_type(__a, __b)) {}
    explicit uniform_int_distribution(const param_type& __p) : __p_(__p) {}
    void reset() {}

    // generating functions
    template<class _URNG> result_type operator()(_URNG& __g)
        {return (*this)(__g, __p_);}
    template<class _URNG> result_type operator()(_URNG& __g, const param_type& __p);

    // property functions
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
_LIBCPP_DISABLE_UBSAN_UNSIGNED_INTEGER_CHECK
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


#if 1 /* evaluated by -frewrite-includes */
class _LIBCPP_TYPE_VIS __rs_default;

_LIBCPP_FUNC_VIS __rs_default __rs_get();

class _LIBCPP_TYPE_VIS __rs_default
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

    static _LIBCPP_CONSTEXPR result_type min() {return _Min;}
    static _LIBCPP_CONSTEXPR result_type max() {return _Max;}

    friend _LIBCPP_FUNC_VIS __rs_default __rs_get();
};

_LIBCPP_FUNC_VIS __rs_default __rs_get();

template <class _RandomAccessIterator>
_LIBCPP_DEPRECATED_IN_CXX14 void
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
_LIBCPP_DEPRECATED_IN_CXX14 void
random_shuffle(_RandomAccessIterator __first, _RandomAccessIterator __last,
#ifndef _LIBCPP_CXX03_LANG
               _RandomNumberGenerator&& __rand)
#else
               _RandomNumberGenerator& __rand)
#endif
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
#endif

template <class _PopulationIterator, class _SampleIterator, class _Distance,
          class _UniformRandomNumberGenerator>
_LIBCPP_INLINE_VISIBILITY
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
    _Distance __r = _VSTD::uniform_int_distribution<_Distance>(0, __k)(__g);
    if (__r < __sz)
      __output_iter[__r] = *__first;
  }
  return __output_iter + _VSTD::min(__n, __k);
}

template <class _PopulationIterator, class _SampleIterator, class _Distance,
          class _UniformRandomNumberGenerator>
_LIBCPP_INLINE_VISIBILITY
_SampleIterator __sample(_PopulationIterator __first,
                         _PopulationIterator __last, _SampleIterator __output_iter,
                         _Distance __n,
                         _UniformRandomNumberGenerator& __g,
                         forward_iterator_tag) {
  _Distance __unsampled_sz = _VSTD::distance(__first, __last);
  for (__n = _VSTD::min(__n, __unsampled_sz); __n != 0; ++__first) {
    _Distance __r =
        _VSTD::uniform_int_distribution<_Distance>(0, --__unsampled_sz)(__g);
    if (__r < __n) {
      *__output_iter++ = *__first;
      --__n;
    }
  }
  return __output_iter;
}

template <class _PopulationIterator, class _SampleIterator, class _Distance,
          class _UniformRandomNumberGenerator>
_LIBCPP_INLINE_VISIBILITY
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
  _LIBCPP_ASSERT(__n >= 0, "N must be a positive number.");
  return _VSTD::__sample(
      __first, __last, __output_iter, _CommonType(__n),
      __g, _PopCategory());
}


#if 1 /* evaluated by -frewrite-includes */
template <class _PopulationIterator, class _SampleIterator, class _Distance,
          class _UniformRandomNumberGenerator>
inline _LIBCPP_INLINE_VISIBILITY
_SampleIterator sample(_PopulationIterator __first,
                       _PopulationIterator __last, _SampleIterator __output_iter,
                       _Distance __n, _UniformRandomNumberGenerator&& __g) {
    return _VSTD::__sample(__first, __last, __output_iter, __n, __g);
}
#endif // _LIBCPP_STD_VER > 14

// lexicographical_compare

template <class _Compare, class _InputIterator1, class _InputIterator2>
_LIBCPP_CONSTEXPR_AFTER_CXX17 bool
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
_LIBCPP_NODISCARD_EXT inline
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
bool
lexicographical_compare(_InputIterator1 __first1, _InputIterator1 __last1,
                        _InputIterator2 __first2, _InputIterator2 __last2, _Compare __comp)
{
    typedef typename __comp_ref_type<_Compare>::type _Comp_ref;
    return __lexicographical_compare<_Comp_ref>(__first1, __last1, __first2, __last2, __comp);
}

template <class _InputIterator1, class _InputIterator2>
_LIBCPP_NODISCARD_EXT inline
_LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_AFTER_CXX17
bool
lexicographical_compare(_InputIterator1 __first1, _InputIterator1 __last1,
                        _InputIterator2 __first2, _InputIterator2 __last2)
{
    return _VSTD::lexicographical_compare(__first1, __last1, __first2, __last2,
                                         __less<typename iterator_traits<_InputIterator1>::value_type,
                                                typename iterator_traits<_InputIterator2>::value_type>());
}

_LIBCPP_END_NAMESPACE_STD

_LIBCPP_POP_MACROS


#endif  // _LIBCPP_ALGORITHM



_LIBCPP_PUSH_MACROS

_LIBCPP_BEGIN_NAMESPACE_STD

// char_traits

template <class _CharT>
struct _LIBCPP_TEMPLATE_VIS char_traits
{
    typedef _CharT    char_type;
    typedef int       int_type;
    typedef streamoff off_type;
    typedef streampos pos_type;
    typedef mbstate_t state_type;

    static inline void _LIBCPP_CONSTEXPR_AFTER_CXX14
        assign(char_type& __c1, const char_type& __c2) _NOEXCEPT {__c1 = __c2;}
    static inline _LIBCPP_CONSTEXPR bool eq(char_type __c1, char_type __c2) _NOEXCEPT
        {return __c1 == __c2;}
    static inline _LIBCPP_CONSTEXPR bool lt(char_type __c1, char_type __c2) _NOEXCEPT
        {return __c1 < __c2;}

    static _LIBCPP_CONSTEXPR_AFTER_CXX14
    int compare(const char_type* __s1, const char_type* __s2, size_t __n);
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR_AFTER_CXX14
    size_t length(const char_type* __s);
    _LIBCPP_INLINE_VISIBILITY static _LIBCPP_CONSTEXPR_AFTER_CXX14
    const char_type* find(const char_type* __s, size_t __n, const char_type& __a);
    static char_type*       move(char_type* __s1, const char_type* __s2, size_t __n);
    _LIBCPP_INLINE_VISIBILITY
    static char_type*       copy(char_type* __s1, const char_type* __s2, size_t __n);
    _LIBCPP_INLINE_VISIBILITY
    static char_type*       assign(char_type* __s, size_t __n, char_type __a);

    static inline _LIBCPP_CONSTEXPR int_type  not_eof(int_type __c) _NOEXCEPT
        {return eq_int_type(__c, eof()) ? ~eof() : __c;}
    static inline _LIBCPP_CONSTEXPR char_type to_char_type(int_type __c) _NOEXCEPT
        {return char_type(__c);}
    static inline _LIBCPP_CONSTEXPR int_type  to_int_type(char_type __c) _NOEXCEPT
        {return int_type(__c);}
    static inline _LIBCPP_CONSTEXPR bool      eq_int_type(int_type __c1, int_type __c2) _NOEXCEPT
        {return __c1 == __c2;}
    static inline _LIBCPP_CONSTEXPR int_type  eof() _NOEXCEPT
        {return int_type(EOF);}
};

// char_traits<char>

template <>
struct _LIBCPP_TEMPLATE_VIS char_traits<char>
{
    typedef char      char_type;
    typedef int       int_type;
    typedef streamoff off_type;
    typedef streampos pos_type;
    typedef mbstate_t state_type;

    static inline _LIBCPP_CONSTEXPR_AFTER_CXX14
    void assign(char_type& __c1, const char_type& __c2) _NOEXCEPT {__c1 = __c2;}
    static inline _LIBCPP_CONSTEXPR bool eq(char_type __c1, char_type __c2) _NOEXCEPT
            {return __c1 == __c2;}
    static inline _LIBCPP_CONSTEXPR bool lt(char_type __c1, char_type __c2) _NOEXCEPT
        {return (unsigned char)__c1 < (unsigned char)__c2;}

    static _LIBCPP_CONSTEXPR_AFTER_CXX14
    int compare(const char_type* __s1, const char_type* __s2, size_t __n) _NOEXCEPT;
    static inline size_t _LIBCPP_CONSTEXPR_AFTER_CXX14
    length(const char_type* __s)  _NOEXCEPT {return __builtin_strlen(__s);}
    static _LIBCPP_CONSTEXPR_AFTER_CXX14
    const char_type* find(const char_type* __s, size_t __n, const char_type& __a) _NOEXCEPT;
    static inline char_type* move(char_type* __s1, const char_type* __s2, size_t __n) _NOEXCEPT
        {return __n == 0 ? __s1 : (char_type*) memmove(__s1, __s2, __n);}
    static inline char_type* copy(char_type* __s1, const char_type* __s2, size_t __n) _NOEXCEPT
        {
            _LIBCPP_ASSERT(__s2 < __s1 || __s2 >= __s1+__n, "char_traits::copy overlapped range");
            return __n == 0 ? __s1 : (char_type*)memcpy(__s1, __s2, __n);
        }
    static inline char_type* assign(char_type* __s, size_t __n, char_type __a) _NOEXCEPT
        {return __n == 0 ? __s : (char_type*)memset(__s, to_int_type(__a), __n);}

    static inline _LIBCPP_CONSTEXPR int_type  not_eof(int_type __c) _NOEXCEPT
        {return eq_int_type(__c, eof()) ? ~eof() : __c;}
    static inline _LIBCPP_CONSTEXPR char_type to_char_type(int_type __c) _NOEXCEPT
        {return char_type(__c);}
    static inline _LIBCPP_CONSTEXPR int_type to_int_type(char_type __c) _NOEXCEPT
        {return int_type((unsigned char)__c);}
    static inline _LIBCPP_CONSTEXPR bool eq_int_type(int_type __c1, int_type __c2) _NOEXCEPT
        {return __c1 == __c2;}
    static inline _LIBCPP_CONSTEXPR int_type  eof() _NOEXCEPT
        {return int_type(EOF);}
};

inline _LIBCPP_CONSTEXPR_AFTER_CXX14
int
char_traits<char>::compare(const char_type* __s1, const char_type* __s2, size_t __n) _NOEXCEPT
{
    if (__n == 0)
        return 0;

#if 1 /* evaluated by -frewrite-includes */
    return __builtin_memcmp(__s1, __s2, __n);

#elif 0 /* evaluated by -frewrite-includes */
    return memcmp(__s1, __s2, __n);
#else
    for (; __n; --__n, ++__s1, ++__s2)
    {
        if (lt(*__s1, *__s2))
            return -1;
        if (lt(*__s2, *__s1))
            return 1;
    }
    return 0;
#endif
}

inline _LIBCPP_CONSTEXPR_AFTER_CXX14
const char*
char_traits<char>::find(const char_type* __s, size_t __n, const char_type& __a) _NOEXCEPT
{
    if (__n == 0)
        return nullptr;

#if 1 /* evaluated by -frewrite-includes */
    return __builtin_char_memchr(__s, to_int_type(__a), __n);

#elif 0 /* evaluated by -frewrite-includes */
    return (const char_type*) memchr(__s, to_int_type(__a), __n);
#else
    for (; __n; --__n)
    {
        if (eq(*__s, __a))
            return __s;
        ++__s;
    }
    return nullptr;
#endif
}


// char_traits<wchar_t>

template <>
struct _LIBCPP_TEMPLATE_VIS char_traits<wchar_t>
{
    typedef wchar_t   char_type;
    typedef wint_t    int_type;
    typedef streamoff off_type;
    typedef streampos pos_type;
    typedef mbstate_t state_type;

    static inline _LIBCPP_CONSTEXPR_AFTER_CXX14
    void assign(char_type& __c1, const char_type& __c2) _NOEXCEPT {__c1 = __c2;}
    static inline _LIBCPP_CONSTEXPR bool eq(char_type __c1, char_type __c2) _NOEXCEPT
        {return __c1 == __c2;}
    static inline _LIBCPP_CONSTEXPR bool lt(char_type __c1, char_type __c2) _NOEXCEPT
        {return __c1 < __c2;}

    static _LIBCPP_CONSTEXPR_AFTER_CXX14
    int compare(const char_type* __s1, const char_type* __s2, size_t __n) _NOEXCEPT;
    static _LIBCPP_CONSTEXPR_AFTER_CXX14
    size_t length(const char_type* __s) _NOEXCEPT;
    static _LIBCPP_CONSTEXPR_AFTER_CXX14
    const char_type* find(const char_type* __s, size_t __n, const char_type& __a) _NOEXCEPT;
    static inline char_type* move(char_type* __s1, const char_type* __s2, size_t __n) _NOEXCEPT
        {return __n == 0 ? __s1 : (char_type*)wmemmove(__s1, __s2, __n);}
    static inline char_type* copy(char_type* __s1, const char_type* __s2, size_t __n) _NOEXCEPT
        {
            _LIBCPP_ASSERT(__s2 < __s1 || __s2 >= __s1+__n, "char_traits::copy overlapped range");
            return __n == 0 ? __s1 : (char_type*)wmemcpy(__s1, __s2, __n);
        }
    static inline char_type* assign(char_type* __s, size_t __n, char_type __a) _NOEXCEPT
        {return __n == 0 ? __s : (char_type*)wmemset(__s, __a, __n);}

    static inline _LIBCPP_CONSTEXPR int_type  not_eof(int_type __c) _NOEXCEPT
        {return eq_int_type(__c, eof()) ? ~eof() : __c;}
    static inline _LIBCPP_CONSTEXPR char_type to_char_type(int_type __c) _NOEXCEPT
        {return char_type(__c);}
    static inline _LIBCPP_CONSTEXPR int_type to_int_type(char_type __c) _NOEXCEPT
        {return int_type(__c);}
    static inline _LIBCPP_CONSTEXPR bool eq_int_type(int_type __c1, int_type __c2) _NOEXCEPT
        {return __c1 == __c2;}
    static inline _LIBCPP_CONSTEXPR int_type eof() _NOEXCEPT
        {return int_type(WEOF);}
};

inline _LIBCPP_CONSTEXPR_AFTER_CXX14
int
char_traits<wchar_t>::compare(const char_type* __s1, const char_type* __s2, size_t __n) _NOEXCEPT
{
    if (__n == 0)
        return 0;

#if 1 /* evaluated by -frewrite-includes */
    return __builtin_wmemcmp(__s1, __s2, __n);

#elif 0 /* evaluated by -frewrite-includes */
    return wmemcmp(__s1, __s2, __n);
#else
    for (; __n; --__n, ++__s1, ++__s2)
    {
        if (lt(*__s1, *__s2))
            return -1;
        if (lt(*__s2, *__s1))
            return 1;
    }
    return 0;
#endif
}


template <class _Traits>
_LIBCPP_INLINE_VISIBILITY
_LIBCPP_CONSTEXPR
inline size_t __char_traits_length_checked(const typename _Traits::char_type* __s) _NOEXCEPT {

#if 0 /* evaluated by -frewrite-includes */
  return __s ? _Traits::length(__s) : (_VSTD::__libcpp_debug_function(_VSTD::__libcpp_debug_info(__FILE__, __LINE__, "p == nullptr", "null pointer pass to non-null argument of char_traits<...>::length")), 0);
#else
  return _Traits::length(__s);
#endif
}

inline _LIBCPP_CONSTEXPR_AFTER_CXX14
size_t
char_traits<wchar_t>::length(const char_type* __s) _NOEXCEPT
{

#if 1 /* evaluated by -frewrite-includes */
    return __builtin_wcslen(__s);

#elif 0 /* evaluated by -frewrite-includes */
    return wcslen(__s);
#else
    size_t __len = 0;
    for (; !eq(*__s, char_type(0)); ++__s)
        ++__len;
    return __len;
#endif
}

inline _LIBCPP_CONSTEXPR_AFTER_CXX14
const wchar_t*
char_traits<wchar_t>::find(const char_type* __s, size_t __n, const char_type& __a) _NOEXCEPT
{
    if (__n == 0)
        return nullptr;

#if 1 /* evaluated by -frewrite-includes */
    return __builtin_wmemchr(__s, __a, __n);

#elif 0 /* evaluated by -frewrite-includes */
    return wmemchr(__s, __a, __n);
#else
    for (; __n; --__n)
    {
        if (eq(*__s, __a))
            return __s;
        ++__s;
    }
    return nullptr;
#endif
}

// helper fns for basic_string and string_view

template<class _Ptr>
inline _LIBCPP_INLINE_VISIBILITY
size_t __do_string_hash(_Ptr __p, _Ptr __e)
{
    typedef typename iterator_traits<_Ptr>::value_type value_type;
    return __murmur2_or_cityhash<size_t>()(__p, (__e-__p)*sizeof(value_type));
}

template <class _CharT, class _Iter, class _Traits=char_traits<_CharT> >
struct __quoted_output_proxy
{
    _Iter  __first;
    _Iter  __last;
    _CharT  __delim;
    _CharT  __escape;

    __quoted_output_proxy(_Iter __f, _Iter __l, _CharT __d, _CharT __e)
    : __first(__f), __last(__l), __delim(__d), __escape(__e) {}
    //  This would be a nice place for a string_ref
};

_LIBCPP_END_NAMESPACE_STD

_LIBCPP_POP_MACROS

#endif  // _LIBCPP___STRING


_LIBCPP_PUSH_MACROS

_LIBCPP_BEGIN_NAMESPACE_STD


_LIBCPP_END_NAMESPACE_STD

_LIBCPP_POP_MACROS

#endif // _LIBCPP_STRING_VIEW




// -*- C++ -*-
//===--------------------------- cwchar -----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_CWCHAR
#define _LIBCPP_CWCHAR




// -*- C++ -*-
//===--------------------------- cwctype ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_CWCTYPE
#define _LIBCPP_CWCTYPE




// -*- C++ -*-
//===---------------------------- cctype ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_CCTYPE
#define _LIBCPP_CCTYPE




// -*- C++ -*-
//===---------------------------- ctype.h ---------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP_CTYPE_H
#define _LIBCPP_CTYPE_H





#if 1 /* evaluated by -frewrite-includes */

#endif


/* Character handling <ctype.h>

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#ifndef _PDCLIB_CTYPE_H
#define _PDCLIB_CTYPE_H _PDCLIB_CTYPE_H

#ifdef __cplusplus
extern "C" {
#endif



/* Character classification functions */

/* Note that there is a difference between "whitespace" (any printing, non-
   graph character, like horizontal and vertical tab), and "blank" (the literal
   ' ' space character).

   There will be masking macros for each of these later on, but right now I
   focus on the functions only.
*/

/* Returns isalpha( c ) || isdigit( c ) */
_PDCLIB_PUBLIC int isalnum( int c );

/* Returns isupper( c ) || islower( c ) in the "C" locale.
   In any other locale, also returns true for a locale-specific set of
   alphabetic characters which are neither control characters, digits,
   punctation, or whitespace.
*/
_PDCLIB_PUBLIC int isalpha( int c );

/* Returns true if the character isspace() and used for separating words within
   a line of text. In the "C" locale, only ' ' and '\t' are considered blanks.
*/
_PDCLIB_PUBLIC int isblank( int c );

/* Returns true if the character is a control character. */
_PDCLIB_PUBLIC int iscntrl( int c );

/* Returns true if the character is a decimal digit. Locale-independent. */
_PDCLIB_PUBLIC int isdigit( int c );

/* Returns true for every printing character except space (' ').
   NOTE: This definition differs from that of iswgraph() in <wctype.h>,
         which considers any iswspace() character, not only ' '.
*/
_PDCLIB_PUBLIC int isgraph( int c );

/* Returns true for lowercase letters in the "C" locale.
   In any other locale, also returns true for a locale-specific set of
   characters which are neither control characters, digits, punctation, or
   space (' '). In a locale other than the "C" locale, a character might test
   true for both islower() and isupper().
*/
_PDCLIB_PUBLIC int islower( int c );

/* Returns true for every printing character including space (' '). */
_PDCLIB_PUBLIC int isprint( int c );

/* Returns true for a locale-specific set of punctuation charcters; these
   may not be whitespace or alphanumeric. In the "C" locale, returns true
   for every printing character that is not whitespace or alphanumeric.
*/
_PDCLIB_PUBLIC int ispunct( int c );

/* Returns true for every standard whitespace character (' ', '\f', '\n', '\r',
   '\t', '\v') in the "C" locale. In any other locale, also returns true for a
   locale-specific set of characters for which isalnum() is false.
*/
_PDCLIB_PUBLIC int isspace( int c );

/* Returns true for uppercase letters in the "C" locale.
   In any other locale, also returns true for a locale-specific set of
   characters which are neither control characters, digits, punctation, or
   space (' '). In a locale other than the "C" locale, a character might test
   true for both islower() and isupper().
*/
_PDCLIB_PUBLIC int isupper( int c );

/* Returns true for any hexadecimal-digit character. Locale-independent. */
_PDCLIB_PUBLIC int isxdigit( int c );

/* Character case mapping functions */

/* Converts an uppercase letter to a corresponding lowercase letter. Input that
   is not an uppercase letter remains unchanged.
*/
_PDCLIB_PUBLIC int tolower( int c );

/* Converts a lowercase letter to a corresponding uppercase letter. Input that
   is not a lowercase letter remains unchanged.
*/
_PDCLIB_PUBLIC int toupper( int c );

/* Extension hook for downstream projects that want to have non-standard
   extensions to standard headers.
*/
#ifdef _PDCLIB_EXTEND_CTYPE_H

// SPDX-License-Identifier: MIT

// SPDX-FileCopyrightText: 2019 Stefan Schmidt

#ifdef __cplusplus
extern "C" {
#endif

// (obsolete) POSIX function, but required by libc++
static int isascii (int c)
{
    return c >= 0 && c < 128;
}

// Defined as on Win32
#define _UPPER   0x01
#define _LOWER   0x02
#define _DIGIT   0x04
#define _SPACE   0x08
#define _PUNCT   0x10
#define _CONTROL 0x20
#define _BLANK   0x40
#define _HEX     0x80
#define _ALPHA   (0x0100 | _UPPER | _LOWER)

#ifdef __cplusplus
}
#endif
#endif

#ifdef __cplusplus
}
#endif

#endif

#ifdef __cplusplus

#undef isalnum
#undef isalpha
#undef isblank
#undef iscntrl
#undef isdigit
#undef isgraph
#undef islower
#undef isprint
#undef ispunct
#undef isspace
#undef isupper
#undef isxdigit
#undef tolower
#undef toupper

#endif

#endif  // _LIBCPP_CTYPE_H


#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_BEGIN_NAMESPACE_STD

#ifdef isalnum
#undef isalnum
#endif

#ifdef isalpha
#undef isalpha
#endif

#ifdef isblank
#undef isblank
#endif

#ifdef iscntrl
#undef iscntrl
#endif

#ifdef isdigit
#undef isdigit
#endif

#ifdef isgraph
#undef isgraph
#endif

#ifdef islower
#undef islower
#endif

#ifdef isprint
#undef isprint
#endif

#ifdef ispunct
#undef ispunct
#endif

#ifdef isspace
#undef isspace
#endif

#ifdef isupper
#undef isupper
#endif

#ifdef isxdigit
#undef isxdigit
#endif

#ifdef tolower
#undef tolower
#endif

#ifdef toupper
#undef toupper
#endif


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

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_CCTYPE



#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_BEGIN_NAMESPACE_STD

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

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_CWCTYPE

// -*- C++ -*-
//===--------------------------- wchar.h ----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//


#if 0 /* evaluated by -frewrite-includes */


#if 0 /* evaluated by -frewrite-includes */

#endif




#elif 0 /* evaluated by -frewrite-includes */
#define _LIBCPP_WCHAR_H





#if 0 /* evaluated by -frewrite-includes */

#endif

#ifdef __cplusplus
#define __CORRECT_ISO_CPP_WCHAR_H_PROTO
#endif



// Determine whether we have const-correct overloads for wcschr and friends.

#if 0 /* evaluated by -frewrite-includes */
#  define _LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS 1

#elif 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS 1
#  endif

#elif 0 /* evaluated by -frewrite-includes */

#if 0 /* evaluated by -frewrite-includes */
#    define _LIBCPP_WCHAR_H_HAS_CONST_OVERLOADS 1
#  endif
#endif


#if 0 /* evaluated by -frewrite-includes */
extern "C++" {
inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcschr(const wchar_t* __s, wchar_t __c) {return (wchar_t*)wcschr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcschr(const wchar_t* __s, wchar_t __c) {return __libcpp_wcschr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcschr(      wchar_t* __s, wchar_t __c) {return __libcpp_wcschr(__s, __c);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcspbrk(const wchar_t* __s1, const wchar_t* __s2) {return (wchar_t*)wcspbrk(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcspbrk(const wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcspbrk(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcspbrk(      wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcspbrk(__s1, __s2);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcsrchr(const wchar_t* __s, wchar_t __c) {return (wchar_t*)wcsrchr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcsrchr(const wchar_t* __s, wchar_t __c) {return __libcpp_wcsrchr(__s, __c);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcsrchr(      wchar_t* __s, wchar_t __c) {return __libcpp_wcsrchr(__s, __c);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wcsstr(const wchar_t* __s1, const wchar_t* __s2) {return (wchar_t*)wcsstr(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wcsstr(const wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcsstr(__s1, __s2);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wcsstr(      wchar_t* __s1, const wchar_t* __s2) {return __libcpp_wcsstr(__s1, __s2);}

inline _LIBCPP_INLINE_VISIBILITY
wchar_t* __libcpp_wmemchr(const wchar_t* __s, wchar_t __c, size_t __n) {return (wchar_t*)wmemchr(__s, __c, __n);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
const wchar_t* wmemchr(const wchar_t* __s, wchar_t __c, size_t __n) {return __libcpp_wmemchr(__s, __c, __n);}
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_PREFERRED_OVERLOAD
      wchar_t* wmemchr(      wchar_t* __s, wchar_t __c, size_t __n) {return __libcpp_wmemchr(__s, __c, __n);}
}
#endif


#if 0 /* evaluated by -frewrite-includes */
extern "C" {
size_t mbsnrtowcs(wchar_t *__restrict dst, const char **__restrict src,
                  size_t nmc, size_t len, mbstate_t *__restrict ps);
size_t wcsnrtombs(char *__restrict dst, const wchar_t **__restrict src,
                  size_t nwc, size_t len, mbstate_t *__restrict ps);
}  // extern "C++"
#endif  // __cplusplus && _LIBCPP_MSVCRT

#endif  // _LIBCPP_WCHAR_H


#if 1 /* evaluated by -frewrite-includes */

#endif

_LIBCPP_BEGIN_NAMESPACE_STD

using ::mbstate_t;
using ::size_t;
using ::tm;
using ::wint_t;
using ::FILE;
#ifndef NXDK
using ::fwprintf;
using ::fwscanf;
using ::swprintf;
using ::vfwprintf;
using ::vswprintf;
using ::swscanf;
using ::vfwscanf;
using ::vswscanf;
using ::fgetwc;
using ::fgetws;
using ::fputwc;
using ::fputws;
using ::fwide;
using ::getwc;
using ::putwc;
using ::ungetwc;
#endif // NXDK
using ::wcstod;
using ::wcstof;
using ::wcstold;
using ::wcstol;
#ifndef _LIBCPP_HAS_NO_LONG_LONG
#ifndef NXDK
using ::wcstoll;
#endif // NXDK
#endif // _LIBCPP_HAS_NO_LONG_LONG
using ::wcstoul;
#ifndef _LIBCPP_HAS_NO_LONG_LONG
using ::wcstoull;
#endif // _LIBCPP_HAS_NO_LONG_LONG
using ::wcscpy;
using ::wcsncpy;
using ::wcscat;
using ::wcsncat;
using ::wcscmp;
using ::wcscoll;
using ::wcsncmp;
using ::wcsxfrm;
using ::wcschr;
using ::wcspbrk;
using ::wcsrchr;
using ::wcsstr;
using ::wmemchr;
using ::wcscspn;
using ::wcslen;
using ::wcsspn;
using ::wcstok;
using ::wmemcmp;
using ::wmemcpy;
using ::wmemmove;
using ::wmemset;
#ifndef NXDK
using ::wcsftime;
#endif // NXDK
using ::btowc;
using ::wctob;
using ::mbsinit;
using ::mbrlen;
using ::mbrtowc;
using ::wcrtomb;
using ::mbsrtowcs;
#ifndef NXDK
using ::wcsrtombs;
#endif

_LIBCPP_END_NAMESPACE_STD

#endif  // _LIBCPP_CWCHAR



_LIBCPP_PUSH_MACROS

_LIBCPP_BEGIN_NAMESPACE_STD


// basic_string

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
inline _LIBCPP_INLINE_VISIBILITY
basic_string<_CharT, _Traits, _Allocator>
operator+(const basic_string<_CharT, _Traits, _Allocator>& __x, const _CharT* __y);

template<class _CharT, class _Traits, class _Allocator>
basic_string<_CharT, _Traits, _Allocator>
operator+(const basic_string<_CharT, _Traits, _Allocator>& __x, _CharT __y);

_LIBCPP_EXTERN_TEMPLATE(_LIBCPP_FUNC_VIS string operator+<char, char_traits<char>, allocator<char> >(char const*, string const&))

template <bool>
class _LIBCPP_TEMPLATE_VIS __basic_string_common
{
protected:
    _LIBCPP_NORETURN void __throw_length_error() const;
    _LIBCPP_NORETURN void __throw_out_of_range() const;
};


_LIBCPP_EXTERN_TEMPLATE(class _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS __basic_string_common<true>)

#ifdef _LIBCPP_NO_EXCEPTIONS
template <class _Iter>
struct __libcpp_string_gets_noexcept_iterator_impl : public true_type {};

#elif 0 /* evaluated by -frewrite-includes */
template <class _Iter>
struct __libcpp_string_gets_noexcept_iterator_impl : public false_type {};
#else
template <class _Iter, bool = __is_forward_iterator<_Iter>::value>
struct __libcpp_string_gets_noexcept_iterator_impl : public _LIBCPP_BOOL_CONSTANT((
    noexcept(++(declval<_Iter&>())) &&
    is_nothrow_assignable<_Iter&, _Iter>::value &&
    noexcept(declval<_Iter>() == declval<_Iter>()) &&
    noexcept(*declval<_Iter>())
)) {};

template <class _Iter>
struct __libcpp_string_gets_noexcept_iterator_impl<_Iter, false> : public false_type {};
#endif


template <class _Iter>
struct __libcpp_string_gets_noexcept_iterator
    : public _LIBCPP_BOOL_CONSTANT(__libcpp_is_trivial_iterator<_Iter>::value || __libcpp_string_gets_noexcept_iterator_impl<_Iter>::value) {};


template<class _CharT, class _Traits, class _Allocator>
class _LIBCPP_TEMPLATE_VIS basic_string
    : private __basic_string_common<true>
{
public:
    typedef basic_string                                 __self;
    typedef _Traits                                      traits_type;
    typedef _CharT                                       value_type;
    typedef _Allocator                                   allocator_type;
    typedef allocator_traits<allocator_type>             __alloc_traits;
    typedef typename __alloc_traits::size_type           size_type;
    typedef typename __alloc_traits::difference_type     difference_type;
    typedef value_type&                                  reference;
    typedef const value_type&                            const_reference;
    typedef typename __alloc_traits::pointer             pointer;
    typedef typename __alloc_traits::const_pointer       const_pointer;

#if 0 /* evaluated by -frewrite-includes */
    typedef pointer                                      iterator;
    typedef const_pointer                                const_iterator;
#else  // defined(_LIBCPP_RAW_ITERATORS)
    typedef __wrap_iter<pointer>                         iterator;
    typedef __wrap_iter<const_pointer>                   const_iterator;
#endif  // defined(_LIBCPP_RAW_ITERATORS)
    typedef _VSTD::reverse_iterator<iterator>             reverse_iterator;
    typedef _VSTD::reverse_iterator<const_iterator>       const_reverse_iterator;

private:

#ifdef _LIBCPP_ABI_ALTERNATE_STRING_LAYOUT

    struct __long
    {
        pointer   __data_;
        size_type __size_;
        size_type __cap_;
    };

#ifdef _LIBCPP_BIG_ENDIAN
    static const size_type __short_mask = 0x01;
    static const size_type __long_mask  = 0x1ul;
#else  // _LIBCPP_BIG_ENDIAN
    static const size_type __short_mask = 0x80;
    static const size_type __long_mask  = ~(size_type(~0) >> 1);
#endif  // _LIBCPP_BIG_ENDIAN

    enum {__min_cap = (sizeof(__long) - 1)/sizeof(value_type) > 2 ?
                      (sizeof(__long) - 1)/sizeof(value_type) : 2};

    struct __short
    {
        value_type __data_[__min_cap];
        struct
            : __padding<value_type>
        {
            unsigned char __size_;
        };
    };

#else

    struct __long
    {
        size_type __cap_;
        size_type __size_;
        pointer   __data_;
    };

#ifdef _LIBCPP_BIG_ENDIAN
    static const size_type __short_mask = 0x80;
    static const size_type __long_mask  = ~(size_type(~0) >> 1);
#else  // _LIBCPP_BIG_ENDIAN
    static const size_type __short_mask = 0x01;
    static const size_type __long_mask  = 0x1ul;
#endif  // _LIBCPP_BIG_ENDIAN

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

#endif  // _LIBCPP_ABI_ALTERNATE_STRING_LAYOUT

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
            __long  __l;
            __short __s;
            __raw   __r;
        };
    };

    __compressed_pair<__rep, allocator_type> __r_;

public:
    static const size_type npos = -1;

    _LIBCPP_INLINE_VISIBILITY basic_string()
        _NOEXCEPT_(is_nothrow_default_constructible<allocator_type>::value);

    _LIBCPP_INLINE_VISIBILITY explicit basic_string(const allocator_type& __a)

#if 0 /* evaluated by -frewrite-includes */
        _NOEXCEPT_(is_nothrow_copy_constructible<allocator_type>::value);
#else
        _NOEXCEPT;
#endif

    basic_string(const basic_string& __str);
    basic_string(const basic_string& __str, const allocator_type& __a);

#ifndef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY
    basic_string(basic_string&& __str)
#if 0 /* evaluated by -frewrite-includes */
        _NOEXCEPT_(is_nothrow_move_constructible<allocator_type>::value);
#else
        _NOEXCEPT;
#endif

    _LIBCPP_INLINE_VISIBILITY
    basic_string(basic_string&& __str, const allocator_type& __a);
#endif  // _LIBCPP_CXX03_LANG

    template <class = typename enable_if<__is_allocator<_Allocator>::value, nullptr_t>::type>
    _LIBCPP_INLINE_VISIBILITY
    basic_string(const _CharT* __s) {
      _LIBCPP_ASSERT(__s != nullptr, "basic_string(const char*) detected nullptr");
      __init(__s, traits_type::length(__s));

    }

    template <class = typename enable_if<__is_allocator<_Allocator>::value, nullptr_t>::type>
        _LIBCPP_INLINE_VISIBILITY
        basic_string(const _CharT* __s, const _Allocator& __a);

    _LIBCPP_INLINE_VISIBILITY
    basic_string(const _CharT* __s, size_type __n);
    _LIBCPP_INLINE_VISIBILITY
    basic_string(const _CharT* __s, size_type __n, const _Allocator& __a);
    _LIBCPP_INLINE_VISIBILITY
    basic_string(size_type __n, _CharT __c);

    template <class = typename enable_if<__is_allocator<_Allocator>::value, nullptr_t>::type>
        _LIBCPP_INLINE_VISIBILITY
        basic_string(size_type __n, _CharT __c, const _Allocator& __a);

    basic_string(const basic_string& __str, size_type __pos, size_type __n,
                 const _Allocator& __a = _Allocator());
    _LIBCPP_INLINE_VISIBILITY
    basic_string(const basic_string& __str, size_type __pos,
                 const _Allocator& __a = _Allocator());

    template<class _InputIterator, class = typename enable_if<__is_input_iterator<_InputIterator>::value>::type>
        _LIBCPP_INLINE_VISIBILITY
        basic_string(_InputIterator __first, _InputIterator __last);
    template<class _InputIterator, class = typename enable_if<__is_input_iterator<_InputIterator>::value>::type>
        _LIBCPP_INLINE_VISIBILITY
        basic_string(_InputIterator __first, _InputIterator __last, const allocator_type& __a);
#ifndef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY
    basic_string(initializer_list<_CharT> __il);
    _LIBCPP_INLINE_VISIBILITY
    basic_string(initializer_list<_CharT> __il, const _Allocator& __a);
#endif  // _LIBCPP_CXX03_LANG

    inline ~basic_string();

    basic_string& operator=(const basic_string& __str);


#if 0 /* evaluated by -frewrite-includes */
    _LIBCPP_INLINE_VISIBILITY
    iterator begin() _NOEXCEPT
        {return iterator(this, __get_pointer());}
    _LIBCPP_INLINE_VISIBILITY
    const_iterator begin() const _NOEXCEPT
        {return const_iterator(this, __get_pointer());}
    _LIBCPP_INLINE_VISIBILITY
    iterator end() _NOEXCEPT
        {return iterator(this, __get_pointer() + size());}
    _LIBCPP_INLINE_VISIBILITY
    const_iterator end() const _NOEXCEPT
        {return const_iterator(this, __get_pointer() + size());}
#else
    _LIBCPP_INLINE_VISIBILITY
    iterator begin() _NOEXCEPT
        {return iterator(__get_pointer());}
    _LIBCPP_INLINE_VISIBILITY
    const_iterator begin() const _NOEXCEPT
        {return const_iterator(__get_pointer());}
    _LIBCPP_INLINE_VISIBILITY
    iterator end() _NOEXCEPT
        {return iterator(__get_pointer() + size());}
    _LIBCPP_INLINE_VISIBILITY
    const_iterator end() const _NOEXCEPT
        {return const_iterator(__get_pointer() + size());}
#endif  // _LIBCPP_DEBUG_LEVEL >= 2
    _LIBCPP_INLINE_VISIBILITY
    reverse_iterator rbegin() _NOEXCEPT
        {return reverse_iterator(end());}
    _LIBCPP_INLINE_VISIBILITY
    const_reverse_iterator rbegin() const _NOEXCEPT
        {return const_reverse_iterator(end());}
    _LIBCPP_INLINE_VISIBILITY
    reverse_iterator rend() _NOEXCEPT
        {return reverse_iterator(begin());}
    _LIBCPP_INLINE_VISIBILITY
    const_reverse_iterator rend() const _NOEXCEPT
        {return const_reverse_iterator(begin());}

    _LIBCPP_INLINE_VISIBILITY
    const_iterator cbegin() const _NOEXCEPT
        {return begin();}
    _LIBCPP_INLINE_VISIBILITY
    const_iterator cend() const _NOEXCEPT
        {return end();}
    _LIBCPP_INLINE_VISIBILITY
    const_reverse_iterator crbegin() const _NOEXCEPT
        {return rbegin();}
    _LIBCPP_INLINE_VISIBILITY
    const_reverse_iterator crend() const _NOEXCEPT
        {return rend();}

    _LIBCPP_INLINE_VISIBILITY size_type size() const _NOEXCEPT
        {return __is_long() ? __get_long_size() : __get_short_size();}
    _LIBCPP_INLINE_VISIBILITY size_type length() const _NOEXCEPT {return size();}
    _LIBCPP_INLINE_VISIBILITY size_type max_size() const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY size_type capacity() const _NOEXCEPT
        {return (__is_long() ? __get_long_cap()
                             : static_cast<size_type>(__min_cap)) - 1;}

    void resize(size_type __n, value_type __c);
    _LIBCPP_INLINE_VISIBILITY void resize(size_type __n) {resize(__n, value_type());}

    void reserve(size_type __res_arg);
    _LIBCPP_INLINE_VISIBILITY void __resize_default_init(size_type __n);

    _LIBCPP_INLINE_VISIBILITY
    void reserve() _NOEXCEPT {reserve(0);}
    _LIBCPP_INLINE_VISIBILITY
    void shrink_to_fit() _NOEXCEPT {reserve();}
    _LIBCPP_INLINE_VISIBILITY
    void clear() _NOEXCEPT;
    _LIBCPP_NODISCARD_AFTER_CXX17 _LIBCPP_INLINE_VISIBILITY
    bool empty() const _NOEXCEPT {return size() == 0;}

    _LIBCPP_INLINE_VISIBILITY const_reference operator[](size_type __pos) const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY reference       operator[](size_type __pos)       _NOEXCEPT;

    const_reference at(size_type __n) const;
    reference       at(size_type __n);

    _LIBCPP_INLINE_VISIBILITY basic_string& operator+=(const basic_string& __str) {return append(__str);}

    _LIBCPP_INLINE_VISIBILITY basic_string& operator+=(const value_type* __s)     {return append(__s);}
    _LIBCPP_INLINE_VISIBILITY basic_string& operator+=(value_type __c)            {push_back(__c); return *this;}
#ifndef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY basic_string& operator+=(initializer_list<value_type> __il) {return append(__il);}
#endif  // _LIBCPP_CXX03_LANG

    _LIBCPP_INLINE_VISIBILITY
    basic_string& append(const basic_string& __str);

    basic_string& append(const basic_string& __str, size_type __pos, size_type __n=npos);

    basic_string& append(const value_type* __s, size_type __n);
    basic_string& append(const value_type* __s);
    basic_string& append(size_type __n, value_type __c);

    _LIBCPP_INLINE_VISIBILITY
    void __append_default_init(size_type __n);

    template <class _ForwardIterator>
    _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
    basic_string& __append_forward_unsafe(_ForwardIterator, _ForwardIterator);
    template<class _InputIterator>
    _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
    typename enable_if
        <
            __is_exactly_input_iterator<_InputIterator>::value
                || !__libcpp_string_gets_noexcept_iterator<_InputIterator>::value,
            basic_string&
        >::type
    _LIBCPP_INLINE_VISIBILITY
    append(_InputIterator __first, _InputIterator __last) {
      const basic_string __temp (__first, __last, __alloc());
      append(__temp.data(), __temp.size());
      return *this;
    }
    template<class _ForwardIterator>
    _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
    typename enable_if
        <
            __is_forward_iterator<_ForwardIterator>::value
                && __libcpp_string_gets_noexcept_iterator<_ForwardIterator>::value,
            basic_string&
        >::type
    _LIBCPP_INLINE_VISIBILITY
    append(_ForwardIterator __first, _ForwardIterator __last) {
      return __append_forward_unsafe(__first, __last);
    }

#ifndef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY
    basic_string& append(initializer_list<value_type> __il) {return append(__il.begin(), __il.size());}
#endif  // _LIBCPP_CXX03_LANG

    void push_back(value_type __c);
    _LIBCPP_INLINE_VISIBILITY
    void pop_back();
    _LIBCPP_INLINE_VISIBILITY reference       front() _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY const_reference front() const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY reference       back() _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY const_reference back() const _NOEXCEPT;

    _LIBCPP_INLINE_VISIBILITY
    basic_string& assign(const basic_string& __str) { return *this = __str; }
#ifndef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY
    basic_string& assign(basic_string&& __str)
        _NOEXCEPT_((__noexcept_move_assign_container<_Allocator, __alloc_traits>::value))
        {*this = _VSTD::move(__str); return *this;}
#endif
    basic_string& assign(const basic_string& __str, size_type __pos, size_type __n=npos);
    basic_string& assign(const value_type* __s, size_type __n);
    basic_string& assign(const value_type* __s);
    basic_string& assign(size_type __n, value_type __c);
    template<class _InputIterator>
    _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
    typename enable_if
        <
           __is_exactly_input_iterator<_InputIterator>::value
                || !__libcpp_string_gets_noexcept_iterator<_InputIterator>::value,
            basic_string&
        >::type
        assign(_InputIterator __first, _InputIterator __last);
    template<class _ForwardIterator>
    _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
    typename enable_if
        <
            __is_forward_iterator<_ForwardIterator>::value
                 && __libcpp_string_gets_noexcept_iterator<_ForwardIterator>::value,
            basic_string&
        >::type
        assign(_ForwardIterator __first, _ForwardIterator __last);
#ifndef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY
    basic_string& assign(initializer_list<value_type> __il) {return assign(__il.begin(), __il.size());}
#endif  // _LIBCPP_CXX03_LANG

    _LIBCPP_INLINE_VISIBILITY
    basic_string& insert(size_type __pos1, const basic_string& __str);

    basic_string& insert(size_type __pos1, const basic_string& __str, size_type __pos2, size_type __n=npos);
    basic_string& insert(size_type __pos, const value_type* __s, size_type __n);
    basic_string& insert(size_type __pos, const value_type* __s);
    basic_string& insert(size_type __pos, size_type __n, value_type __c);
    iterator      insert(const_iterator __pos, value_type __c);
    _LIBCPP_INLINE_VISIBILITY
    iterator      insert(const_iterator __pos, size_type __n, value_type __c);
    template<class _InputIterator>
    _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
    typename enable_if
        <
           __is_exactly_input_iterator<_InputIterator>::value
                || !__libcpp_string_gets_noexcept_iterator<_InputIterator>::value,
            iterator
        >::type
        insert(const_iterator __pos, _InputIterator __first, _InputIterator __last);
    template<class _ForwardIterator>
    _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
    typename enable_if
        <
            __is_forward_iterator<_ForwardIterator>::value
                 && __libcpp_string_gets_noexcept_iterator<_ForwardIterator>::value,
            iterator
        >::type
        insert(const_iterator __pos, _ForwardIterator __first, _ForwardIterator __last);
#ifndef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY
    iterator insert(const_iterator __pos, initializer_list<value_type> __il)
                    {return insert(__pos, __il.begin(), __il.end());}
#endif  // _LIBCPP_CXX03_LANG

    basic_string& erase(size_type __pos = 0, size_type __n = npos);
    _LIBCPP_INLINE_VISIBILITY
    iterator      erase(const_iterator __pos);
    _LIBCPP_INLINE_VISIBILITY
    iterator      erase(const_iterator __first, const_iterator __last);

    _LIBCPP_INLINE_VISIBILITY
    basic_string& replace(size_type __pos1, size_type __n1, const basic_string& __str);

    basic_string& replace(size_type __pos1, size_type __n1, const basic_string& __str, size_type __pos2, size_type __n2=npos);

    basic_string& replace(size_type __pos, size_type __n1, const value_type* __s, size_type __n2);
    basic_string& replace(size_type __pos, size_type __n1, const value_type* __s);
    basic_string& replace(size_type __pos, size_type __n1, size_type __n2, value_type __c);
    _LIBCPP_INLINE_VISIBILITY
    basic_string& replace(const_iterator __i1, const_iterator __i2, const basic_string& __str);

    _LIBCPP_INLINE_VISIBILITY
    basic_string& replace(const_iterator __i1, const_iterator __i2, const value_type* __s, size_type __n);
    _LIBCPP_INLINE_VISIBILITY
    basic_string& replace(const_iterator __i1, const_iterator __i2, const value_type* __s);
    _LIBCPP_INLINE_VISIBILITY
    basic_string& replace(const_iterator __i1, const_iterator __i2, size_type __n, value_type __c);
    template<class _InputIterator>
    _LIBCPP_METHOD_TEMPLATE_IMPLICIT_INSTANTIATION_VIS
    typename enable_if
        <
            __is_input_iterator<_InputIterator>::value,
            basic_string&
        >::type
        replace(const_iterator __i1, const_iterator __i2, _InputIterator __j1, _InputIterator __j2);
#ifndef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY
    basic_string& replace(const_iterator __i1, const_iterator __i2, initializer_list<value_type> __il)
        {return replace(__i1, __i2, __il.begin(), __il.end());}
#endif  // _LIBCPP_CXX03_LANG

    size_type copy(value_type* __s, size_type __n, size_type __pos = 0) const;
    _LIBCPP_INLINE_VISIBILITY
    basic_string substr(size_type __pos = 0, size_type __n = npos) const;

    _LIBCPP_INLINE_VISIBILITY
    void swap(basic_string& __str)

#if 1 /* evaluated by -frewrite-includes */
        _NOEXCEPT;
#else
        _NOEXCEPT_(!__alloc_traits::propagate_on_container_swap::value ||
                    __is_nothrow_swappable<allocator_type>::value);
#endif

    _LIBCPP_INLINE_VISIBILITY
    const value_type* c_str() const _NOEXCEPT {return data();}
    _LIBCPP_INLINE_VISIBILITY
    const value_type* data() const _NOEXCEPT  {return _VSTD::__to_raw_pointer(__get_pointer());}

#if 1 /* evaluated by -frewrite-includes */
    _LIBCPP_INLINE_VISIBILITY
    value_type* data()             _NOEXCEPT  {return _VSTD::__to_raw_pointer(__get_pointer());}
#endif

    _LIBCPP_INLINE_VISIBILITY
    allocator_type get_allocator() const _NOEXCEPT {return __alloc();}

    _LIBCPP_INLINE_VISIBILITY
    size_type find(const basic_string& __str, size_type __pos = 0) const _NOEXCEPT;

    size_type find(const value_type* __s, size_type __pos, size_type __n) const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    size_type find(const value_type* __s, size_type __pos = 0) const _NOEXCEPT;
    size_type find(value_type __c, size_type __pos = 0) const _NOEXCEPT;

    _LIBCPP_INLINE_VISIBILITY
    size_type rfind(const basic_string& __str, size_type __pos = npos) const _NOEXCEPT;

    size_type rfind(const value_type* __s, size_type __pos, size_type __n) const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    size_type rfind(const value_type* __s, size_type __pos = npos) const _NOEXCEPT;
    size_type rfind(value_type __c, size_type __pos = npos) const _NOEXCEPT;

    _LIBCPP_INLINE_VISIBILITY
    size_type find_first_of(const basic_string& __str, size_type __pos = 0) const _NOEXCEPT;

    size_type find_first_of(const value_type* __s, size_type __pos, size_type __n) const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    size_type find_first_of(const value_type* __s, size_type __pos = 0) const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    size_type find_first_of(value_type __c, size_type __pos = 0) const _NOEXCEPT;

    _LIBCPP_INLINE_VISIBILITY
    size_type find_last_of(const basic_string& __str, size_type __pos = npos) const _NOEXCEPT;

    size_type find_last_of(const value_type* __s, size_type __pos, size_type __n) const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    size_type find_last_of(const value_type* __s, size_type __pos = npos) const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    size_type find_last_of(value_type __c, size_type __pos = npos) const _NOEXCEPT;

    _LIBCPP_INLINE_VISIBILITY
    size_type find_first_not_of(const basic_string& __str, size_type __pos = 0) const _NOEXCEPT;

    size_type find_first_not_of(const value_type* __s, size_type __pos, size_type __n) const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    size_type find_first_not_of(const value_type* __s, size_type __pos = 0) const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    size_type find_first_not_of(value_type __c, size_type __pos = 0) const _NOEXCEPT;

    _LIBCPP_INLINE_VISIBILITY
    size_type find_last_not_of(const basic_string& __str, size_type __pos = npos) const _NOEXCEPT;

    size_type find_last_not_of(const value_type* __s, size_type __pos, size_type __n) const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    size_type find_last_not_of(const value_type* __s, size_type __pos = npos) const _NOEXCEPT;
    _LIBCPP_INLINE_VISIBILITY
    size_type find_last_not_of(value_type __c, size_type __pos = npos) const _NOEXCEPT;


    _LIBCPP_INLINE_VISIBILITY bool __invariants() const;

    _LIBCPP_INLINE_VISIBILITY void __clear_and_shrink() _NOEXCEPT;

    _LIBCPP_INLINE_VISIBILITY
    bool __is_long() const _NOEXCEPT
        {return bool(__r_.first().__s.__size_ & __short_mask);}


private:
    _LIBCPP_INLINE_VISIBILITY
    allocator_type& __alloc() _NOEXCEPT
        {return __r_.second();}
    _LIBCPP_INLINE_VISIBILITY
    const allocator_type& __alloc() const _NOEXCEPT
        {return __r_.second();}

#ifdef _LIBCPP_ABI_ALTERNATE_STRING_LAYOUT

    _LIBCPP_INLINE_VISIBILITY
    void __set_short_size(size_type __s) _NOEXCEPT
#   ifdef _LIBCPP_BIG_ENDIAN
        {__r_.first().__s.__size_ = (unsigned char)(__s << 1);}
#   else
        {__r_.first().__s.__size_ = (unsigned char)(__s);}
#   endif

    _LIBCPP_INLINE_VISIBILITY
    size_type __get_short_size() const _NOEXCEPT
#   ifdef _LIBCPP_BIG_ENDIAN
        {return __r_.first().__s.__size_ >> 1;}
#   else
        {return __r_.first().__s.__size_;}
#   endif

#else  // _LIBCPP_ABI_ALTERNATE_STRING_LAYOUT

    _LIBCPP_INLINE_VISIBILITY
    void __set_short_size(size_type __s) _NOEXCEPT
#   ifdef _LIBCPP_BIG_ENDIAN
        {__r_.first().__s.__size_ = (unsigned char)(__s);}
#   else
        {__r_.first().__s.__size_ = (unsigned char)(__s << 1);}
#   endif

    _LIBCPP_INLINE_VISIBILITY
    size_type __get_short_size() const _NOEXCEPT
#   ifdef _LIBCPP_BIG_ENDIAN
        {return __r_.first().__s.__size_;}
#   else
        {return __r_.first().__s.__size_ >> 1;}
#   endif

#endif  // _LIBCPP_ABI_ALTERNATE_STRING_LAYOUT

    _LIBCPP_INLINE_VISIBILITY
    void __set_long_size(size_type __s) _NOEXCEPT
        {__r_.first().__l.__size_ = __s;}
    _LIBCPP_INLINE_VISIBILITY
    size_type __get_long_size() const _NOEXCEPT
        {return __r_.first().__l.__size_;}
    _LIBCPP_INLINE_VISIBILITY
    void __set_size(size_type __s) _NOEXCEPT
        {if (__is_long()) __set_long_size(__s); else __set_short_size(__s);}

    _LIBCPP_INLINE_VISIBILITY
    void __set_long_cap(size_type __s) _NOEXCEPT
        {__r_.first().__l.__cap_  = __long_mask | __s;}
    _LIBCPP_INLINE_VISIBILITY
    size_type __get_long_cap() const _NOEXCEPT
        {return __r_.first().__l.__cap_ & size_type(~__long_mask);}

    _LIBCPP_INLINE_VISIBILITY
    void __set_long_pointer(pointer __p) _NOEXCEPT
        {__r_.first().__l.__data_ = __p;}
    _LIBCPP_INLINE_VISIBILITY
    pointer __get_long_pointer() _NOEXCEPT
        {return __r_.first().__l.__data_;}
    _LIBCPP_INLINE_VISIBILITY
    const_pointer __get_long_pointer() const _NOEXCEPT
        {return __r_.first().__l.__data_;}
    _LIBCPP_INLINE_VISIBILITY
    pointer __get_short_pointer() _NOEXCEPT
        {return pointer_traits<pointer>::pointer_to(__r_.first().__s.__data_[0]);}
    _LIBCPP_INLINE_VISIBILITY
    const_pointer __get_short_pointer() const _NOEXCEPT
        {return pointer_traits<const_pointer>::pointer_to(__r_.first().__s.__data_[0]);}
    _LIBCPP_INLINE_VISIBILITY
    pointer __get_pointer() _NOEXCEPT
        {return __is_long() ? __get_long_pointer() : __get_short_pointer();}
    _LIBCPP_INLINE_VISIBILITY
    const_pointer __get_pointer() const _NOEXCEPT
        {return __is_long() ? __get_long_pointer() : __get_short_pointer();}

    _LIBCPP_INLINE_VISIBILITY
    void __zero() _NOEXCEPT
        {
            size_type (&__a)[__n_words] = __r_.first().__r.__words;
            for (unsigned __i = 0; __i < __n_words; ++__i)
                __a[__i] = 0;
        }

    template <size_type __a> static
        _LIBCPP_INLINE_VISIBILITY
        size_type __align_it(size_type __s) _NOEXCEPT
            {return (__s + (__a-1)) & ~(__a-1);}
    enum {__alignment = 16};
    static _LIBCPP_INLINE_VISIBILITY
    size_type __recommend(size_type __s) _NOEXCEPT
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

    _LIBCPP_INLINE_VISIBILITY
    void __copy_assign_alloc(const basic_string& __str)
        {__copy_assign_alloc(__str, integral_constant<bool,
                      __alloc_traits::propagate_on_container_copy_assignment::value>());}

    _LIBCPP_INLINE_VISIBILITY
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
                    __alloc() = _VSTD::move(__a);
                    __set_long_pointer(__p);
                    __set_long_cap(__str.__get_long_cap());
                    __set_long_size(__str.size());
                }
            }
        }

    _LIBCPP_INLINE_VISIBILITY
    void __copy_assign_alloc(const basic_string&, false_type) _NOEXCEPT
        {}

#ifndef _LIBCPP_CXX03_LANG
    _LIBCPP_INLINE_VISIBILITY
    void __move_assign(basic_string& __str, false_type)
        _NOEXCEPT_(__alloc_traits::is_always_equal::value);
    _LIBCPP_INLINE_VISIBILITY
    void __move_assign(basic_string& __str, true_type)

#if 1 /* evaluated by -frewrite-includes */
        _NOEXCEPT;
#else
        _NOEXCEPT_(is_nothrow_move_assignable<allocator_type>::value);
#endif
#endif

    _LIBCPP_INLINE_VISIBILITY
    void
    __move_assign_alloc(basic_string& __str)
        _NOEXCEPT_(
            !__alloc_traits::propagate_on_container_move_assignment::value ||
            is_nothrow_move_assignable<allocator_type>::value)
    {__move_assign_alloc(__str, integral_constant<bool,
                      __alloc_traits::propagate_on_container_move_assignment::value>());}

    _LIBCPP_INLINE_VISIBILITY
    void __move_assign_alloc(basic_string& __c, true_type)
        _NOEXCEPT_(is_nothrow_move_assignable<allocator_type>::value)
        {
            __alloc() = _VSTD::move(__c.__alloc());
        }

    _LIBCPP_INLINE_VISIBILITY
    void __move_assign_alloc(basic_string&, false_type)
        _NOEXCEPT
        {}

    _LIBCPP_INLINE_VISIBILITY void __invalidate_all_iterators();
    _LIBCPP_INLINE_VISIBILITY void __invalidate_iterators_past(size_type);

    friend basic_string operator+<>(const basic_string&, const basic_string&);
    friend basic_string operator+<>(const value_type*, const basic_string&);
    friend basic_string operator+<>(value_type, const basic_string&);
    friend basic_string operator+<>(const basic_string&, const value_type*);
    friend basic_string operator+<>(const basic_string&, value_type);
};

#ifndef _LIBCPP_HAS_NO_DEDUCTION_GUIDES
template<class _InputIterator,
         class _CharT = typename iterator_traits<_InputIterator>::value_type,
         class _Allocator = allocator<_CharT>,
         class = typename enable_if<__is_input_iterator<_InputIterator>::value, void>::type,
         class = typename enable_if<__is_allocator<_Allocator>::value, void>::type
         >
basic_string(_InputIterator, _InputIterator, _Allocator = _Allocator())
  -> basic_string<_CharT, char_traits<_CharT>, _Allocator>;

#endif



template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string()
    _NOEXCEPT_(is_nothrow_default_constructible<allocator_type>::value)
{

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
    __zero();
}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(const allocator_type& __a)

#if 0 /* evaluated by -frewrite-includes */
        _NOEXCEPT_(is_nothrow_copy_constructible<allocator_type>::value)
#else
        _NOEXCEPT
#endif
: __r_(__second_tag(), __a)
{

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
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
    traits_type::copy(_VSTD::__to_raw_pointer(__p), __s, __sz);
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
    traits_type::copy(_VSTD::__to_raw_pointer(__p), __s, __sz);
    traits_type::assign(__p[__sz], value_type());
}

template <class _CharT, class _Traits, class _Allocator>
template <class>
basic_string<_CharT, _Traits, _Allocator>::basic_string(const _CharT* __s, const _Allocator& __a)
    : __r_(__second_tag(), __a)
{
    _LIBCPP_ASSERT(__s != nullptr, "basic_string(const char*, allocator) detected nullptr");
    __init(__s, traits_type::length(__s));

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(const _CharT* __s, size_type __n)
{
    _LIBCPP_ASSERT(__n == 0 || __s != nullptr, "basic_string(const char*, n) detected nullptr");
    __init(__s, __n);

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(const _CharT* __s, size_type __n, const _Allocator& __a)
    : __r_(__second_tag(), __a)
{
    _LIBCPP_ASSERT(__n == 0 || __s != nullptr, "basic_string(const char*, n, allocator) detected nullptr");
    __init(__s, __n);

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
}

template <class _CharT, class _Traits, class _Allocator>
basic_string<_CharT, _Traits, _Allocator>::basic_string(const basic_string& __str)
    : __r_(__second_tag(), __alloc_traits::select_on_container_copy_construction(__str.__alloc()))
{
    if (!__str.__is_long())
        __r_.first().__r = __str.__r_.first().__r;
    else
        __init(_VSTD::__to_raw_pointer(__str.__get_long_pointer()), __str.__get_long_size());

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
}

template <class _CharT, class _Traits, class _Allocator>
basic_string<_CharT, _Traits, _Allocator>::basic_string(
    const basic_string& __str, const allocator_type& __a)
    : __r_(__second_tag(), __a)
{
    if (!__str.__is_long())
        __r_.first().__r = __str.__r_.first().__r;
    else
        __init(_VSTD::__to_raw_pointer(__str.__get_long_pointer()), __str.__get_long_size());

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
}

#ifndef _LIBCPP_CXX03_LANG

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(basic_string&& __str)

#if 0 /* evaluated by -frewrite-includes */
        _NOEXCEPT_(is_nothrow_move_constructible<allocator_type>::value)
#else
        _NOEXCEPT
#endif
    : __r_(_VSTD::move(__str.__r_))
{
    __str.__zero();
}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(basic_string&& __str, const allocator_type& __a)
    : __r_(__second_tag(), __a)
{
    if (__str.__is_long() && __a != __str.__alloc()) // copy, not move
        __init(_VSTD::__to_raw_pointer(__str.__get_long_pointer()), __str.__get_long_size());
    else
    {
        __r_.first().__r = __str.__r_.first().__r;
        __str.__zero();
    }

}

#endif  // _LIBCPP_CXX03_LANG

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
    traits_type::assign(_VSTD::__to_raw_pointer(__p), __n, __c);
    traits_type::assign(__p[__n], value_type());
}

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(size_type __n, _CharT __c)
{
    __init(__n, __c);

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
}

template <class _CharT, class _Traits, class _Allocator>
template <class>
basic_string<_CharT, _Traits, _Allocator>::basic_string(size_type __n, _CharT __c, const _Allocator& __a)
    : __r_(__second_tag(), __a)
{
    __init(__n, __c);

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
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
    __init(__str.data() + __pos, _VSTD::min(__n, __str_sz - __pos));

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
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

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
}

template <class _CharT, class _Traits, class _Allocator>
template <class _InputIterator>
typename enable_if
<
    __is_exactly_input_iterator<_InputIterator>::value,
    void
>::type
basic_string<_CharT, _Traits, _Allocator>::__init(_InputIterator __first, _InputIterator __last)
{
    __zero();
#ifndef _LIBCPP_NO_EXCEPTIONS
    try
    {
#endif  // _LIBCPP_NO_EXCEPTIONS
    for (; __first != __last; ++__first)
        push_back(*__first);
#ifndef _LIBCPP_NO_EXCEPTIONS
    }
    catch (...)
    {
        if (__is_long())
            __alloc_traits::deallocate(__alloc(), __get_long_pointer(), __get_long_cap());
        throw;
    }
#endif  // _LIBCPP_NO_EXCEPTIONS
}

template <class _CharT, class _Traits, class _Allocator>
template <class _ForwardIterator>
typename enable_if
<
    __is_forward_iterator<_ForwardIterator>::value,
    void
>::type
basic_string<_CharT, _Traits, _Allocator>::__init(_ForwardIterator __first, _ForwardIterator __last)
{
    size_type __sz = static_cast<size_type>(_VSTD::distance(__first, __last));
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
    for (; __first != __last; ++__first, (void) ++__p)
        traits_type::assign(*__p, *__first);
    traits_type::assign(*__p, value_type());
}

template <class _CharT, class _Traits, class _Allocator>
template<class _InputIterator, class>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(_InputIterator __first, _InputIterator __last)
{
    __init(__first, __last);

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
}

template <class _CharT, class _Traits, class _Allocator>
template<class _InputIterator, class>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(_InputIterator __first, _InputIterator __last,
                                                        const allocator_type& __a)
    : __r_(__second_tag(), __a)
{
    __init(__first, __last);

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
}

#ifndef _LIBCPP_CXX03_LANG

template <class _CharT, class _Traits, class _Allocator>
inline
basic_string<_CharT, _Traits, _Allocator>::basic_string(
    initializer_list<_CharT> __il)
{
    __init(__il.begin(), __il.end());

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
}

template <class _CharT, class _Traits, class _Allocator>
inline

basic_string<_CharT, _Traits, _Allocator>::basic_string(
    initializer_list<_CharT> __il, const _Allocator& __a)
    : __r_(__second_tag(), __a)
{
    __init(__il.begin(), __il.end());

#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__insert_c(this);
#endif
}

#endif  // _LIBCPP_CXX03_LANG

template <class _CharT, class _Traits, class _Allocator>
basic_string<_CharT, _Traits, _Allocator>::~basic_string()
{
#if 0 /* evaluated by -frewrite-includes */
    __get_db()->__erase_c(this);
#endif
    if (__is_long())
        __alloc_traits::deallocate(__alloc(), __get_long_pointer(), __get_long_cap());
}


template<class _CharT, class _Traits, class _Allocator>
    const typename basic_string<_CharT, _Traits, _Allocator>::size_type
                   basic_string<_CharT, _Traits, _Allocator>::npos;

template <class _CharT, class _Allocator>
struct _LIBCPP_TEMPLATE_VIS
    hash<basic_string<_CharT, char_traits<_CharT>, _Allocator> >
    : public unary_function<
          basic_string<_CharT, char_traits<_CharT>, _Allocator>, size_t>
{
    size_t
    operator()(const basic_string<_CharT, char_traits<_CharT>, _Allocator>& __val) const _NOEXCEPT
    { return __do_string_hash(__val.data(), __val.data() + __val.size()); }
};





_LIBCPP_EXTERN_TEMPLATE(class _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS basic_string<char>)
_LIBCPP_EXTERN_TEMPLATE(class _LIBCPP_EXTERN_TEMPLATE_TYPE_VIS basic_string<wchar_t>)




_LIBCPP_END_NAMESPACE_STD

_LIBCPP_POP_MACROS

#endif  // _LIBCPP_STRING


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