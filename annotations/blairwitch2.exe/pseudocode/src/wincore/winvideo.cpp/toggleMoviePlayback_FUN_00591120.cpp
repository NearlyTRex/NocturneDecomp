// Name: wincore_winvideo.cpp_toggleMoviePlayback_FUN_00591120
// Address: 00591120
// Address Range: [[00591120, 00591188]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_00591120(HWND notify_window,int play_state)

#include "nocturne.h"

void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_00591120(HWND notify_window,int play_state)

{
  bool bVar1;
  char *lpstrCommand;
  
  bVar1 = g_MovieHandle == 0;
  g_MovieHandle = (int)bVar1;
  if (play_state == 0) {
    g_MovieHandle = play_state;
  }
  else if (bVar1) {
    if (g_FullscreenMovie == 0) {
      mciSendStringA("play mov window notify",(LPSTR)0x0,0,notify_window);
      return;
    }
    lpstrCommand = "play mov fullscreen notify";
    goto LAB_0059115a;
  }
  notify_window = (HWND)0x0;
  lpstrCommand = "pause mov";
LAB_0059115a:
  mciSendStringA(lpstrCommand,(LPSTR)0x0,0,notify_window);
  return;
}
