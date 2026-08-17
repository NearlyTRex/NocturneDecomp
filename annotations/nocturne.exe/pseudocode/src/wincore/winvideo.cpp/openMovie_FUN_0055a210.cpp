// Name: wincore_winvideo.cpp_openMovie_FUN_0055a210
// Address: 0055a210
// Address Range: [[0055a210, 0055a493]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_openMovie_FUN_0055a210(HWND parent_window,char *movie_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winvideo_cpp_openMovie_FUN_0055a210(HWND parent_window,char *movie_filename)

{
  byte *pbVar1;
  MCIERROR MVar2;
  byte *pbVar3;
  char local_1b4 [260];
  byte local_b0;
  byte local_af [127];
  tagRECT local_30;
  tagRECT local_20;
  
  if (_DAT_02de3124 != 0) {
    wincore_winvideo_cpp_closeMovie_FUN_0055a1c0(parent_window);
  }
  _sprintf(local_1b4,"open \"%s\" alias mov style child parent %d",movie_filename,parent_window);
  MVar2 = mciSendStringA(local_1b4,(LPSTR)0x0,0,0);
  if (MVar2 != 0) {
    MessageBoxA(parent_window,"Unable to open .AVI!",(LPCSTR)0x0,0x30);
    _DAT_02de3124 = 0;
    return;
  }
  _DAT_02de3124 = 1;
  MVar2 = mciSendStringA("status mov window handle",local_1b4,0x104,0);
  if (MVar2 == 0) {
    _DAT_02de311c = atoi(local_1b4);
  }
  else {
    mciGetErrorStringA(MVar2,local_1b4,0x104);
    MessageBoxA(parent_window,local_1b4,(LPCSTR)0x0,0x30);
  }
  if ((_DAT_02de312c == 0) && (_DAT_02de3124 != 0)) {
    GetClientRect(parent_window,&local_20);
    mciSendStringA("where mov source",(LPSTR)&local_b0,0x80,0);
    SetRectEmpty(&local_30);
    pbVar3 = &local_b0;
    while (local_b0 == 0x20) {
      pbVar1 = pbVar3 + 1;
      pbVar3 = pbVar3 + 1;
      local_b0 = *pbVar1;
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
      local_30.right = local_30.right * 10 + (*pbVar3 - 0x30);
    }
    for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
    }
    for (; (0x2f < *pbVar3 && (*pbVar3 < 0x3a)); pbVar3 = pbVar3 + 1) {
      local_30.bottom = local_30.bottom * 10 + (*pbVar3 - 0x30);
    }
    if ((400 < local_20.right) || (300 < local_20.bottom)) {
      local_30.right = local_30.right * 2;
      local_30.bottom = local_30.bottom * 2;
    }
    MoveWindow(_DAT_02de311c,local_20.right / 2 - local_30.right / 2,
               local_20.bottom / 2 - local_30.bottom / 2,local_30.right,local_30.bottom,1);
    return;
  }
  return;
}
