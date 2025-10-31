//
//  new.h -- C++ default storage allocators
//
//  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
//
#ifndef _NEW_H_INCLUDED
#define _NEW_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif

#ifndef __cplusplus
#error new.h is for use with C++
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif
#ifndef _STDDEF_H_INCLUDED
 #include <stddef.h>
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

extern void *operator new( size_t );
extern void *operator new( size_t, void * );
extern void *operator new []( size_t );
extern void *operator new []( size_t, void * );
extern void operator delete( void * );
extern void operator delete []( void * );
_WPRTLINK extern PFV set_new_handler( PFV );
_WPRTLINK extern PFU _set_new_handler( PFU );
#if defined(__SW_BR)
  _WPRTLINK extern _PUP _set_op_new( _PUP );
  _WPRTLINK extern _PUP _set_op_new_array( _PUP );
  _WPRTLINK extern _PVV _set_op_delete( _PVV );
  _WPRTLINK extern _PVV _set_op_delete_array( _PVV );
#endif

#endif
