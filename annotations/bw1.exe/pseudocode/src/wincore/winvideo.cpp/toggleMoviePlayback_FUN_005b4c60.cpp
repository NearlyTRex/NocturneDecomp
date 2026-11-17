// Name: wincore_winvideo.cpp_toggleMoviePlayback_FUN_005b4c60
// Address: 005b4c60
// Address Range: [[005b4c60, 005b4cc8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_005b4c60(HWND notify_window,int play_state)

#include "nocturne.h"

void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_005b4c60(HWND notify_window,int play_state)

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
    goto LAB_005b4c9a;
  }
  notify_window = (HWND)0x0;
  lpstrCommand = "pause mov";
LAB_005b4c9a:
  mciSendStringA(lpstrCommand,(LPSTR)0x0,0,notify_window);
  return;
}
