/*
 *  stddef.h	Standard definitions
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef _STDDEF_H_INCLUDED
#define _STDDEF_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#define _SIZE_T_DEFINED_
typedef unsigned size_t;
#endif

#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED_
#ifdef __cplusplus
typedef long char wchar_t;
#else
typedef unsigned short wchar_t;
#endif
#endif

#ifndef NULL
 #if defined(__SMALL__) || defined(__MEDIUM__) || defined(__386__) || defined(__AXP__) || defined(__PPC__)
  #define NULL   0
 #else
  #define NULL   0L
 #endif
#endif

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED_
#if defined(__HUGE__)
typedef long ptrdiff_t;
#else
typedef int ptrdiff_t;
#endif
#endif

#ifdef __cplusplus
#define offsetof(__typ,__id) __offsetof(__typ,__id)
#else
#define offsetof(__typ,__id) ((size_t)&(((__typ*)0)->__id))
#endif
#if !defined(NO_EXT_KEYS) /* extensions enabled */
#if defined(__386__) || defined(__AXP__) || defined(__PPC__)
 _WCRTLINK extern int *__threadid(void); /* pointer to thread id */
 #define _threadid (__threadid())
 #if defined(__NT__)
  _WCRTLINK extern unsigned long __threadhandle( void );
 #endif
#else
 _WCRTLINK extern int _WCFAR *_threadid;	/* pointer to thread id */
#endif
#endif
#ifdef __cplusplus
};
#endif
#endif
