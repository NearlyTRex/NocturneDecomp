/*****************************************************************************\
*                                                                             *
* subinapi.h - Sub Input Public Header File                                   *
*                                                                             *
*              Version 1.1                                                    *
*                                                                             *
*              Copyright (c) 1992-1993, Microsoft Corp.  All rights reserved. *
*                                                                             *
\*****************************************************************************/

#ifndef _INC_WINDOWS
#include <windows.h>    /* <windows.h> must be pre-included */
#endif /* _INC_WINDOWS */

#ifndef _INC_SUBINAPI     /* prevent multiple includes */
#define _INC_SUBINAPI

/****** Screen Keyboard *****************************************************/

#ifndef WM_SUBINP              /* defined in penwin.h */
#define WM_SUBINP              (WM_PENWINFIRST+9)
#endif

typedef struct tagSUBINPINFO
   {
   HWND hwnd;
   BOOL fVisible;
	BOOL fMinimized;
	RECT rect;
   DWORD dwReserved;
   }
   SUBINPINFO, FAR *LPSUBINPINFO;

/*	wCommand values */
#define SUBINP_QUERY              0x0000
#define SUBINP_SHOW               0x0001
#define SUBINP_HIDE               0x0002
#define SUBINP_CENTER             0x0010
#define SUBINP_MOVE               0x0020
#define SUBINP_MINIMIZE           0x0040

/* notification values */
#define SIN_CHANGED            8

#define SIN_POSCHANGED         1
#define SIN_VISCHANGED         2
#define SIN_MINCHANGED         4
#define SIN_TERMINATED         0xffff

/* main api (mssubinp.dll): */
UINT WINAPI ShowSubInput(HWND, UINT, LPPOINT, LPSUBINPINFO);

#endif /* _INC_SUBINAPI */
