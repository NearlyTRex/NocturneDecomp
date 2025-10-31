/****************************************************************************
 *
 *  WINDOWS.H - 
 *	
 *	Include file for Windows 3.0 applications
 *
 *  Copyright by WATCOM International Corp. 1988-1996.  All rights reserved.
 *
 ****************************************************************************/

#if !defined(_ENABLE_AUTODEPEND)
  #pragma read_only_file;
#endif
#ifdef _WINDOWS_16_
#include <win16.h>
#else
#include <_win386.h>
#endif
