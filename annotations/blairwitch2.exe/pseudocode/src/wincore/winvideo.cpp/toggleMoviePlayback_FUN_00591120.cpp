// Name: wincore_winvideo.cpp_toggleMoviePlayback_FUN_00591120
// Address: 00591120
// Address Range: [[00591120, 00591188]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_00591120(HWND notify_window,int play_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_00591120(HWND notify_window,int play_state)

{
  bool bVar1;
  char *lpstrCommand;
  
  bVar1 = _DAT_02665a4c == 0;
  _DAT_02665a4c = (uint)bVar1;
  if (play_state == 0) {
    _DAT_02665a4c = play_state;
  }
  else if (bVar1) {
    if (_DAT_02665a58 == 0) {
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
