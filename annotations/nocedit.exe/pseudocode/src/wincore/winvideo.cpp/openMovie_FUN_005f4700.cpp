// Name: wincore_winvideo.cpp_openMovie_FUN_005f4700
// Address: 005f4700
// Address Range: [[005f4700, 005f4983]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_openMovie_FUN_005f4700(HWND parent_window,char *movie_filename)

#include "nocturne.h"

void __cdecl wincore_winvideo_cpp_openMovie_FUN_005f4700(HWND parent_window,char *movie_filename)

{
  byte *pbVar1;
  MCIERROR MVar2;
  byte *pbVar3;
  char local_1b4 [260];
  byte bStack_b0;
  byte abStack_af [127];
  tagRECT tStack_30;
  tagRECT tStack_20;
  
  if (g_MoviePlaying != 0) {
    wincore_winvideo_cpp_closeMovie_FUN_005f46b0(parent_window);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (local_1b4,"open \"%s\" alias mov style child parent %d",movie_filename,parent_window);
  MVar2 = (*g_mciSendStringAFunc)(local_1b4,(LPSTR)0x0,0,(HWND)0x0);
  if (MVar2 != 0) {
    (*g_MessageBoxAFunc)(parent_window,"Unable to open .AVI!",(LPCSTR)0x0,0x30);
    g_MoviePlaying = 0;
    return;
  }
  g_MoviePlaying = 1;
  MVar2 = (*g_mciSendStringAFunc)("status mov window handle",local_1b4,0x104,(HWND)0x0);
  if (MVar2 == 0) {
    g_MovieWindowHandle = (HWND)crt_stdlib_c_atoi_FUN_005ffef0(local_1b4);
  }
  else {
    (*g_mciGetErrorStringAFunc)(MVar2,local_1b4,0x104);
    (*g_MessageBoxAFunc)(parent_window,local_1b4,(LPCSTR)0x0,0x30);
  }
  if ((g_FullscreenMovie == 0) && (g_MoviePlaying != 0)) {
    (*g_GetClientRectFunc)(parent_window,&tStack_20);
    (*g_mciSendStringAFunc)("where mov source",(LPSTR)&bStack_b0,0x80,(HWND)0x0);
    (*g_SetRectEmptyFunc)(&tStack_30);
    pbVar3 = &bStack_b0;
    while (bStack_b0 == 0x20) {
      pbVar1 = pbVar3 + 1;
      pbVar3 = pbVar3 + 1;
      bStack_b0 = *pbVar1;
    }
    for (; *pbVar3 != 0x20; pbVar3 = pbVar3 + 1) {
    }
    for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
    }
    for (; *pbVar3 != 0x20; pbVar3 = pbVar3 + 1) {
    }
    for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
    }
    for (; (0x2f < *pbVar3 && (*pbVar3 < 0x3a)); pbVar3 = pbVar3 + 1) {
      tStack_30.right = tStack_30.right * 10 + (*pbVar3 - 0x30);
    }
    for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
    }
    for (; (0x2f < *pbVar3 && (*pbVar3 < 0x3a)); pbVar3 = pbVar3 + 1) {
      tStack_30.bottom = tStack_30.bottom * 10 + (*pbVar3 - 0x30);
    }
    if ((400 < tStack_20.right) || (300 < tStack_20.bottom)) {
      tStack_30.right = tStack_30.right * 2;
      tStack_30.bottom = tStack_30.bottom * 2;
    }
    (*g_MoveWindowFunc)(g_MovieWindowHandle,tStack_20.right / 2 - tStack_30.right / 2,
                        tStack_20.bottom / 2 - tStack_30.bottom / 2,tStack_30.right,tStack_30.bottom
                        ,1);
    return;
  }
  return;
}
