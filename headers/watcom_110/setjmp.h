/*
 *  setjmp.h
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef _SETJMP_H_INCLUDED
#define _SETJMP_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#if defined(__PPC__)
 typedef unsigned int jmp_buf[1];
#elif defined(__AXP__)
 typedef double jmp_buf[24];
#else
 typedef unsigned int jmp_buf[13];
#endif

_WCRTLINK extern int  _setjmp( jmp_buf __env );
_WCRTLINK extern void longjmp( jmp_buf __env, int __val );

#if !defined(_SETJMPEX_H_INCLUDED_)
 #define setjmp(__env)  _setjmp(__env)
#endif

#if defined(__PPC__)
#elif defined(__AXP__)
#elif defined(__386__)
 #pragma aux _setjmp __parm __caller [__eax] __modify [__8087];
 #pragma aux longjmp __aborts;
#else
 #pragma aux _setjmp __modify [__8087];
 #pragma aux longjmp __aborts;
#endif


#ifdef __cplusplus
};
#endif
#endif
