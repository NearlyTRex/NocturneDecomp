/*
 *  signal.h	Signal definitions
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef _SIGNAL_H_INCLUDED
#define _SIGNAL_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif
typedef int	sig_atomic_t;

typedef void (*__sig_func)( int );

#define SIG_IGN 	((__sig_func) 1)
#define SIG_DFL 	((__sig_func) 2)
#define SIG_ERR 	((__sig_func) 3)

#define SIGABRT 1
#define SIGFPE	2
#define SIGILL	3
#define SIGINT	4
#define SIGSEGV 5
#define SIGTERM 6
#define SIGBREAK 7
/* following are OS/2 1.x process flag A,B and C */
#define SIGUSR1 8
#define SIGUSR2 9
#define SIGUSR3 10
/* following are for OS/2 2.x only */
#define SIGIDIVZ 11
#define SIGIOVFL 12

#define _SIGMAX     12
#define _SIGMIN     1


_WCRTLINK extern int  raise( int __sig );
_WCRTLINK extern void (*signal( int __sig, void (*__func)(int) ) )(int);

#ifdef __cplusplus
};
#endif
#endif
