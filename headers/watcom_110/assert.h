/*
 *  assert.h
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#undef assert

#ifdef NDEBUG
 #define assert(__ignore) ((void)0)
#else
 _WCRTLINK extern void _assert( char *, char *, int );
 _WCRTLINK extern void _wassert( char *, char *, int );
 _WCRTLINK extern void __assert( int, char *, char *, int );
 _WCRTLINK extern void __wassert( int, char *, char *, int );
#if !defined(NO_EXT_KEYS) /* extensions enabled */
 #ifdef _UNICODE
  #define assert(expr)   ((expr)?(void)0:_wassert(#expr,__FILE__,__LINE__))
 #else
  #define assert(expr)   ((expr)?(void)0:_assert(#expr,__FILE__,__LINE__))
 #endif
#else
 #ifdef _UNICODE
  #define assert(expr)	__wassert(expr,#expr,__FILE__,__LINE__)
 #else
  #define assert(expr)	__assert(expr,#expr,__FILE__,__LINE__)
 #endif
#endif
#endif
#ifdef __cplusplus
};
#endif
