// Name: shape_edittool.cpp_plotPixelWithClipping_FUN_0049d190
// Address: 0049d190
// Address Range: [[0049d190, 0049d1e2]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_plotPixelWithClipping_FUN_0049d190(int x_coord, int y_coord, int use_clipping)
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_plotPixelWithClipping_FUN_0049d190(int x_coord,int y_coord,int use_clipping)

{
  if (((((-1 < x_coord) && (-1 < y_coord)) && (x_coord < g_WindowWidth)) &&
      (y_coord < g_WindowHeight)) &&
     ((use_clipping == 0 ||
      (((g_ClipLeft <= x_coord && (x_coord < g_ClipRight)) &&
       ((g_ClipTop <= y_coord && (y_coord < g_ClipBottom)))))))) {
    engine_2d_c_plotPixel_FUN_00401140(x_coord,y_coord);
    return;
  }
  return;
}


// Assembly code:
// 0049d190: MOV EDX,dword ptr [ESP + 0x4]
//   Label: shape_edittool.cpp_plotPixelWithClipping_FUN_0049d190
//   XREF to: Stack[0x4] (READ)
// 0049d194: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0049d198: TEST EDX,EDX
// 0049d19a: JL 0x0049d1d7
//   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
// 0049d19c: TEST EAX,EAX
// 0049d19e: JL 0x0049d1d7
//   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
// 0049d1a0: CMP EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0049d1a6: JGE 0x0049d1d7
//   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
// 0049d1a8: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0049d1ae: JGE 0x0049d1d7
//   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
// 0049d1b0: CMP dword ptr [ESP + 0xc],0x0
//   XREF to: Stack[0xc] (READ)
// 0049d1b5: JZ 0x0049d1d8
//   XREF to: 0049d1d8 (CONDITIONAL_JUMP)
// 0049d1b7: CMP EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0049d1bd: JL 0x0049d1d7
//   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
// 0049d1bf: CMP EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0049d1c5: JGE 0x0049d1d7
//   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
// 0049d1c7: CMP EAX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0049d1cd: JL 0x0049d1d7
//   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
// 0049d1cf: CMP EAX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0049d1d5: JL 0x0049d1d8
//   XREF to: 0049d1d8 (CONDITIONAL_JUMP)
// 0049d1d7: RET
//   Label: LAB_0049d1d7
// 0049d1d8: PUSH EAX
//   Label: LAB_0049d1d8
// 0049d1d9: PUSH EDX
// 0049d1da: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0049d1df: ADD ESP,0x8
// 0049d1e2: RET
