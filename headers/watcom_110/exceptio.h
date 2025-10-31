//
//  exception.h	Exceptions
//
//  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
//
#ifndef _EXCEPTION_H_INCLUDED
#define _EXCEPTION_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif

#ifndef __cplusplus
#error exception.h is for use with C++
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifndef _PFV_DEFINED
#define _PFV_DEFINED
#define _PFV_DEFINED_
typedef void (*PFV)( void );
#endif
#ifndef _PFU_DEFINED
#define _PFU_DEFINED
#define _PFU_DEFINED_
typedef int (*PFU)( unsigned );
#endif
#ifndef _PNH_DEFINED
#define _PNH_DEFINED
#define _PNH_DEFINED_
typedef int (*_PNH)( unsigned );
#endif
#if defined(__SW_BR)
  #ifndef _PPV_DEFINED
  #define _PPV_DEFINED
  #define _PPV_DEFINED_
  typedef void (*_PVV)( void *);
  #endif
  #ifndef _PUP_DEFINED
  #define _PUP_DEFINED
  #define _PUP_DEFINED_
  typedef void* (*_PUP)( unsigned );
  #endif
#endif

#ifndef _WATCOM_EXCEPTION_DEFINED
#define _WATCOM_EXCEPTION_DEFINED
#define _WATCOM_EXCEPTION_DEFINED_
struct __WATCOM_exception {
#if defined(__AXP__) || defined(__PPC__)
    void *__filler;
#endif
};
#endif

// corresponds to Header<exception>

#include <stdexcept>

class _WPRTLINK bad_exception : public exception {
public:
    bad_exception( void ) _WCTHROWS(())
        : exception( "exception missing from function exception specification" ) {
    }
    bad_exception( bad_exception const & ) _WCTHROWS(()) {
    }
    bad_exception & operator=( bad_exception & ) _WCTHROWS(()) {
	return *this;
    }
    virtual ~bad_exception( void ) _WCTHROWS(()) {
    }
    virtual char const * what( void ) const _WCTHROWS(()) {
	return exception::what();
    }
};

typedef void (*unexpected_handler)( void );
typedef void (*terminate_handler)( void );

_WPRTLINK extern void terminate( void );
_WPRTLINK extern terminate_handler set_terminate( terminate_handler );
_WPRTLINK extern void unexpected( void );
_WPRTLINK extern unexpected_handler set_unexpected( unexpected_handler );

#endif
