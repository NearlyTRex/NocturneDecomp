// Name: wincore_winvideo.cpp_toggleMoviePlayback_FUN_005f4990
// Address: 005f4990
// Address Range: [[005f4990, 005f49f8]]
// Convention: __cdecl
// Signature: void wincore_winvideo.cpp_toggleMoviePlayback_FUN_005f4990(HWND notify_window, int play_state)
// Globals:
//   mciSendStringA* mciSendStringA = 00211850
//   TerminatedCString s_play_mov_fullscreen_noti_00658250
//   TerminatedCString s_play_mov_window_notify_0065826b
//   TerminatedCString s_pause_mov_00658282
//   DWORD g_MovieHandle
//   int g_FullscreenMovie

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
      (*mciSendStringA)("play mov window notify",(LPSTR)0x0,0,notify_window);
      return;
    }
    lpstrCommand = "play mov fullscreen notify";
    goto LAB_005f49ca;
  }
  notify_window = (HWND)0x0;
  lpstrCommand = "pause mov";
LAB_005f49ca:
  (*mciSendStringA)(lpstrCommand,(LPSTR)0x0,0,notify_window);
  return;
}


// Assembly code:
// 005f4990: PUSH EBX
//   Label: wincore_winvideo.cpp_toggleMoviePlayback_FUN_005f4990
// 005f4991: PUSH EDI
// 005f4992: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005f4996: CMP dword ptr [0x03f99500],0x0
//   XREF to: 03f99500 (READ)
// 005f499d: SETZ AL
// 005f49a0: AND EAX,0xff
// 005f49a5: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005f49a9: MOV [0x03f99500],EAX
//   XREF to: 03f99500 (WRITE)
// 005f49ae: TEST EBX,EBX
// 005f49b0: JZ 0x005f49d4
//   XREF to: 005f49d4 (CONDITIONAL_JUMP)
// 005f49b2: TEST EAX,EAX
// 005f49b4: JZ 0x005f49da
//   XREF to: 005f49da (CONDITIONAL_JUMP)
// 005f49b6: MOV EDI,dword ptr [0x03f9950c]
//   XREF to: 03f9950c (READ)
// 005f49bc: TEST EDI,EDI
// 005f49be: JZ 0x005f49e7
//   XREF to: 005f49e7 (CONDITIONAL_JUMP)
// 005f49c0: PUSH EDX
// 005f49c1: PUSH 0x0
// 005f49c3: PUSH 0x0
// 005f49c5: PUSH 0x658250
//   XREF to: 00658250 (DATA)
// 005f49ca: CALL dword ptr CS:[0x611410]
//   Label: LAB_005f49ca
//   XREF to: 00611410 (READ)
// 005f49d1: POP EDI
// 005f49d2: POP EBX
// 005f49d3: RET
// 005f49d4: MOV dword ptr [0x03f99500],EBX
//   Label: LAB_005f49d4
//   XREF to: 03f99500 (WRITE)
// 005f49da: PUSH 0x0
//   Label: LAB_005f49da
// 005f49dc: PUSH 0x0
// 005f49de: PUSH 0x0
// 005f49e0: PUSH 0x658282
//   XREF to: 00658282 (DATA)
// 005f49e5: JMP 0x005f49ca
//   XREF to: 005f49ca (UNCONDITIONAL_JUMP)
// 005f49e7: PUSH EDX
//   Label: LAB_005f49e7
// 005f49e8: PUSH EDI
// 005f49e9: PUSH EDI
// 005f49ea: PUSH 0x65826b
//   XREF to: 0065826b (DATA)
// 005f49ef: CALL dword ptr CS:[0x611410]
//   XREF to: 00611410 (READ)
// 005f49f6: POP EDI
// 005f49f7: POP EBX
// 005f49f8: RET
