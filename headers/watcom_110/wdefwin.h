/*
 *  wdefwin.h	default windowing calls
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 */
#ifndef _WDEFWIN_H_INCLUDED
#define _WDEFWIN_H_INCLUDED
#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif
#ifdef __cplusplus
extern "C" {
#endif

#ifndef __SW_BW
  #error wdefwin.h is for use the default windowing system, use the /bw switch
#endif

#ifndef _COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#if ( defined(__OS2__) && (defined(__386__)||defined(__PPC__)) ) || defined(__NT__) || \
    defined(__WINDOWS_386__) || defined(__WINDOWS__)
_WCRTLINK extern int _dwDeleteOnClose( int handle );
_WCRTLINK extern int _dwSetAboutDlg( const char *title, const char *text );
_WCRTLINK extern int _dwSetAppTitle( const char *title );
_WCRTLINK extern int _dwSetConTitle( int handle, const char *title );
_WCRTLINK extern int _dwYield( void );
_WCRTLINK extern int _dwShutDown( void );
#else
  #error You cannot use the default windowing system in a non GUI environment
  #error Make sure you use the /bt= switch to select the target system
#endif  

#ifdef __cplusplus
};
#endif
#endif
