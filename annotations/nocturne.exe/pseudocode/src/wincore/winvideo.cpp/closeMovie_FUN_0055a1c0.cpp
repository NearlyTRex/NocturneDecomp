// Name: wincore_winvideo.cpp_closeMovie_FUN_0055a1c0
// Address: 0055a1c0
// Address Range: [[0055a1c0, 0055a203]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_closeMovie_FUN_0055a1c0(HWND window_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winvideo_cpp_closeMovie_FUN_0055a1c0(HWND window_handle)

{
  if (_DAT_02de3124 == 0) {
    return;
  }
  mciSendStringA("close mov",(LPSTR)0x0,0,0);
  _DAT_02de3120 = 0;
  _DAT_02de3124 = 0;
  InvalidateRect(window_handle,(RECT *)0x0,1);
  UpdateWindow(window_handle);
  return;
}
