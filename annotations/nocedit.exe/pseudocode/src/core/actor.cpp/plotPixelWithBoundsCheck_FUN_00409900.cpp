// Name: core_actor.cpp_plotPixelWithBoundsCheck_FUN_00409900
// Address: 00409900
// Address Range: [[00409900, 0040992b]]
// Convention: __cdecl
// Signature: void core_actor.cpp_plotPixelWithBoundsCheck_FUN_00409900(int x, int y)
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_00409900(int x,int y)

{
  if ((((-1 < x) && (-1 < y)) && (x < g_WindowWidth)) && (y < g_WindowHeight)) {
    engine_2d_c_plotPixel_FUN_00401140(x,y);
    return;
  }
  return;
}


// Assembly code:
// 00409900: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_plotPixelWithBoundsCheck_FUN_00409900
//   XREF to: Stack[0x4] (READ)
// 00409904: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00409908: TEST EAX,EAX
// 0040990a: JL 0x00409920
//   XREF to: 00409920 (CONDITIONAL_JUMP)
// 0040990c: TEST EDX,EDX
// 0040990e: JL 0x00409920
//   XREF to: 00409920 (CONDITIONAL_JUMP)
// 00409910: CMP EAX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00409916: JGE 0x00409920
//   XREF to: 00409920 (CONDITIONAL_JUMP)
// 00409918: CMP EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0040991e: JL 0x00409921
//   XREF to: 00409921 (CONDITIONAL_JUMP)
// 00409920: RET
//   Label: LAB_00409920
// 00409921: PUSH EDX
//   Label: LAB_00409921
// 00409922: PUSH EAX
// 00409923: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00409928: ADD ESP,0x8
// 0040992b: RET
