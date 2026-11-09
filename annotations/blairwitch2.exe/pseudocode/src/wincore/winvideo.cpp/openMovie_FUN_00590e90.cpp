// Name: wincore_winvideo.cpp_openMovie_FUN_00590e90
// Address: 00590e90
// Address Range: [[00590e90, 00591113]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_openMovie_FUN_00590e90(HWND parent_window,char *movie_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winvideo_cpp_openMovie_FUN_00590e90(HWND parent_window,char *movie_filename)

{
  byte *pbVar1;
  MCIERROR MVar2;
  byte *pbVar3;
  CHAR aCStack_1b4 [260];
  byte bStack_b0;
  byte abStack_af [127];
  tagRECT tStack_30;
  tagRECT tStack_20;
  
  if (_DAT_02665a50 != 0) {
    wincore_winvideo_cpp_closeMovie_FUN_00590e40(parent_window);
  }
  FUN_005b7790
            (aCStack_1b4,"open \"%s\" alias mov style child parent %d",movie_filename,parent_window);
  MVar2 = mciSendStringA(aCStack_1b4,(LPSTR)0x0,0,(HWND)0x0);
  if (MVar2 != 0) {
    MessageBoxA(parent_window,"Unable to open .AVI!",(LPCSTR)0x0,0x30);
    _DAT_02665a50 = 0;
    return;
  }
  _DAT_02665a50 = 1;
  MVar2 = mciSendStringA("status mov window handle",aCStack_1b4,0x104,(HWND)0x0);
  if (MVar2 == 0) {
    _DAT_02665a48 = (HWND)atoi(aCStack_1b4);
  }
  else {
    mciGetErrorStringA(MVar2,aCStack_1b4,0x104);
    MessageBoxA(parent_window,aCStack_1b4,(LPCSTR)0x0,0x30);
  }
  if ((_DAT_02665a58 == 0) && (_DAT_02665a50 != 0)) {
    GetClientRect(parent_window,&tStack_20);
    mciSendStringA("where mov source",(LPSTR)&bStack_b0,0x80,(HWND)0x0);
    SetRectEmpty(&tStack_30);
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
    MoveWindow(_DAT_02665a48,tStack_20.right / 2 - tStack_30.right / 2,
               tStack_20.bottom / 2 - tStack_30.bottom / 2,tStack_30.right,tStack_30.bottom,1);
    return;
  }
  return;
}
