// Name: wincore_winvideo.cpp_toggleMoviePlayback_FUN_00582e40
// Address: 00582e40
// Address Range: [[00582e40, 00582ea8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_00582e40(HWND notify_window,int play_state)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_00582e40(HWND notify_window,int play_state)

{
  bool bVar1;
  char *lpstrCommand;
  
  bVar1 = _DAT_02d22fac == 0;
  _DAT_02d22fac = (uint)bVar1;
  if (play_state == 0) {
    _DAT_02d22fac = play_state;
  }
  else if (bVar1) {
    if (_DAT_02d22fb8 == 0) {
      mciSendStringA("play mov window notify",(LPSTR)0x0,0,notify_window);
      return;
    }
    lpstrCommand = "play mov fullscreen notify";
    goto LAB_00582e7a;
  }
  notify_window = (HWND)0x0;
  lpstrCommand = "pause mov";
LAB_00582e7a:
  mciSendStringA(lpstrCommand,(LPSTR)0x0,0,notify_window);
  return;
}
