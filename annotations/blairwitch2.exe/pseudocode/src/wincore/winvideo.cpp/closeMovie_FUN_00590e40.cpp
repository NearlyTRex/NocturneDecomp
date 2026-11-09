// Name: wincore_winvideo.cpp_closeMovie_FUN_00590e40
// Address: 00590e40
// Address Range: [[00590e40, 00590e83]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_closeMovie_FUN_00590e40(HWND window_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winvideo_cpp_closeMovie_FUN_00590e40(HWND window_handle)

{
  if (_DAT_02665a50 == 0) {
    return;
  }
  mciSendStringA("close mov",(LPSTR)0x0,0,(HWND)0x0);
  _DAT_02665a4c = 0;
  _DAT_02665a50 = 0;
  InvalidateRect(window_handle,(RECT *)0x0,1);
  UpdateWindow(window_handle);
  return;
}
