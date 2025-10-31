// Name: wincore_winvideo.cpp_closeMovie_FUN_005f46b0
// Address: 005f46b0
// Address Range: [[005f46b0, 005f46f3]]
// Convention: __cdecl
// Signature: void wincore_winvideo.cpp_closeMovie_FUN_005f46b0(HWND window_handle)
// Cross-references:
//   wincore_winrun.cpp_mainWindowProc_FUN_005f3150 (005f3150) at 005f349c [UNCONDITIONAL_CALL]
//   wincore_winvideo.cpp_openMovie_FUN_005f4700 (005f4700) at 005f471b [UNCONDITIONAL_CALL]
//   wincore_winvideo.cpp_playMovie_FUN_005f4a00 (005f4a00) at 005f4a91 [UNCONDITIONAL_CALL]
// Globals:
//   mciSendStringA* mciSendStringA = 00211850
//   InvalidateRect* InvalidateRect = 00211b0c
//   UpdateWindow* UpdateWindow = 00211c28
//   TerminatedCString s_close_mov_006581ee
//   DWORD g_MovieHandle
//   int g_MoviePlaying
// Function calls:
//   InvalidateRect
//   mciSendStringA
//   UpdateWindow

#include "nocturne.h"

void __cdecl wincore_winvideo_cpp_closeMovie_FUN_005f46b0(HWND window_handle)

{
  HWND in_stack_00000018;
  
  if (g_MoviePlaying == 0) {
    return;
  }
  (*mciSendStringA)("close mov",(LPSTR)0x0,0,(HWND)0x0);
  g_MovieHandle = 0;
  g_MoviePlaying = 0;
  (*InvalidateRect)(in_stack_00000018,(RECT *)0x0,1);
  (*UpdateWindow)(in_stack_00000018);
  return;
}


// Assembly code:
// 005f46b0: CMP dword ptr [0x03f99504],0x0
//   Label: wincore_winvideo.cpp_closeMovie_FUN_005f46b0
//   XREF to: 03f99504 (READ)
// 005f46b7: JNZ 0x005f46ba
//   XREF to: 005f46ba (CONDITIONAL_JUMP)
// 005f46b9: RET
// 005f46ba: PUSH ESI
//   Label: LAB_005f46ba
// 005f46bb: PUSH 0x0
// 005f46bd: PUSH 0x0
// 005f46bf: PUSH 0x0
// 005f46c1: PUSH 0x6581ee
//   XREF to: 006581ee (DATA)
// 005f46c6: CALL dword ptr CS:[0x611410]
//   XREF to: EXTERNAL:00000012 (COMPUTED_CALL)
//   XREF to: 00611410 (READ)
// 005f46cd: PUSH 0x1
// 005f46cf: XOR ECX,ECX
// 005f46d1: PUSH ECX
// 005f46d2: MOV ESI,dword ptr [ESP + 0x10]
// 005f46d6: PUSH ESI
// 005f46d7: MOV dword ptr [0x03f99500],ECX
//   XREF to: 03f99500 (WRITE)
// 005f46dd: MOV dword ptr [0x03f99504],ECX
//   XREF to: 03f99504 (WRITE)
// 005f46e3: CALL dword ptr CS:[0x6114b4]
//   XREF to: EXTERNAL:00000039 (COMPUTED_CALL)
//   XREF to: 006114b4 (READ)
// 005f46ea: PUSH ESI
// 005f46eb: CALL dword ptr CS:[0x6114fc]
//   XREF to: EXTERNAL:0000004b (COMPUTED_CALL)
//   XREF to: 006114fc (READ)
// 005f46f2: POP ESI
// 005f46f3: RET
