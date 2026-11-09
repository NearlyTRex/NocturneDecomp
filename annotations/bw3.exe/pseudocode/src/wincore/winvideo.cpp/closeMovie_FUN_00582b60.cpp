// Name: wincore_winvideo.cpp_closeMovie_FUN_00582b60
// Address: 00582b60
// Address Range: [[00582b60, 00582ba3]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_closeMovie_FUN_00582b60(HWND window_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winvideo_cpp_closeMovie_FUN_00582b60(HWND window_handle)

{
  if (_DAT_02d22fb0 == 0) {
    return;
  }
  mciSendStringA("close mov",(LPSTR)0x0,0,(HWND)0x0);
  _DAT_02d22fac = 0;
  _DAT_02d22fb0 = 0;
  InvalidateRect(window_handle,(RECT *)0x0,1);
  UpdateWindow(window_handle);
  return;
}
