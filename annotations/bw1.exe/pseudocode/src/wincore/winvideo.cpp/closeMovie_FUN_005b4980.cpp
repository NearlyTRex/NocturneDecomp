// Name: wincore_winvideo.cpp_closeMovie_FUN_005b4980
// Address: 005b4980
// Address Range: [[005b4980, 005b49c3]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_closeMovie_FUN_005b4980(HWND window_handle)

#include "nocturne.h"

void __cdecl wincore_winvideo_cpp_closeMovie_FUN_005b4980(HWND window_handle)

{
  if (g_INT_02c9d2a0 == 0) {
    return;
  }
  mciSendStringA("close mov",(LPSTR)0x0,0,(HWND)0x0);
  g_INT_02c9d29c = 0;
  g_INT_02c9d2a0 = 0;
  InvalidateRect(window_handle,(RECT *)0x0,1);
  UpdateWindow(window_handle);
  return;
}
