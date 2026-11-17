// Name: wincore_winvideo.cpp_toggleMoviePlayback_FUN_0055a4a0
// Address: 0055a4a0
// Address Range: [[0055a4a0, 0055a508]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_0055a4a0(HWND notify_window,int play_state)

#include "nocturne.h"

void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_0055a4a0(HWND notify_window,int play_state)

{
  bool bVar1;
  char *lpstrCommand;
  
  bVar1 = g_DWORD_02de3120 == 0;
  g_DWORD_02de3120 = (DWORD)bVar1;
  if (play_state == 0) {
    g_DWORD_02de3120 = play_state;
  }
  else if (bVar1) {
    if (g_INT_02de312c == 0) {
      mciSendStringA("play mov window notify",(LPSTR)0x0,0,notify_window);
      return;
    }
    lpstrCommand = "play mov fullscreen notify";
    goto LAB_0055a4da;
  }
  notify_window = 0;
  lpstrCommand = "pause mov";
LAB_0055a4da:
  mciSendStringA(lpstrCommand,(LPSTR)0x0,0,notify_window);
  return;
}
