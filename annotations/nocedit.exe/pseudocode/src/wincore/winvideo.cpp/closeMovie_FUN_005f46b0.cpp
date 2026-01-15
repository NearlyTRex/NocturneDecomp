// Name: wincore_winvideo.cpp_closeMovie_FUN_005f46b0
// Address: 005f46b0
// Address Range: [[005f46b0, 005f46f3]]
// Convention: __cdecl
// Signature: void wincore_winvideo.cpp_closeMovie_FUN_005f46b0(HWND window_handle)

#include "nocturne.h"

void __cdecl wincore_winvideo_cpp_closeMovie_FUN_005f46b0(HWND window_handle)

{
  if (g_MoviePlaying == 0) {
    return;
  }
  (*mciSendStringA)("close mov",(LPSTR)0x0,0,(HWND)0x0);
  g_MovieHandle = 0;
  g_MoviePlaying = 0;
  (*InvalidateRect)(window_handle,(RECT *)0x0,1);
  (*UpdateWindow)(window_handle);
  return;
}
