// Name: wincore_winvideo.cpp_toggleMoviePlayback_FUN_005f4990
// Address: 005f4990
// Address Range: [[005f4990, 005f49f8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_005f4990(HWND notify_window,int play_state)

#include "nocturne.h"

void __cdecl
wincore_winvideo_cpp_toggleMoviePlayback_FUN_005f4990(HWND notify_window,int play_state)

{
  bool bVar1;
  char *lpstrCommand;
  
  bVar1 = g_MovieHandle == 0;
  g_MovieHandle = (DWORD)bVar1;
  if (play_state == 0) {
    g_MovieHandle = play_state;
  }
  else if (bVar1) {
    if (g_FullscreenMovie == 0) {
      (*g_mciSendStringAFunc)("play mov window notify",(LPSTR)0x0,0,notify_window);
      return;
    }
    lpstrCommand = "play mov fullscreen notify";
    goto LAB_005f49ca;
  }
  notify_window = (HWND)0x0;
  lpstrCommand = "pause mov";
LAB_005f49ca:
  (*g_mciSendStringAFunc)(lpstrCommand,(LPSTR)0x0,0,notify_window);
  return;
}
