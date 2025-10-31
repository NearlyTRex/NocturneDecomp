// Name: wincore_winrun.cpp_plotClippedPixel_FUN_005f2f90
// Address: 005f2f90
// Address Range: [[005f2f90, 005f2fc3]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_plotClippedPixel_FUN_005f2f90(int x_coord, int y_coord)
// Globals:
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_005f2f90(int x_coord,int y_coord)

{
  if ((((g_ClipLeft < x_coord) && (g_ClipTop < y_coord)) && (x_coord < g_ClipRight)) &&
     (y_coord < g_ClipBottom)) {
    engine_2d_c_plotPixel_FUN_00401140(x_coord,y_coord);
    return;
  }
  return;
}


// Assembly code:
// 005f2f90: MOV EDX,dword ptr [ESP + 0x4]
//   Label: wincore_winrun.cpp_plotClippedPixel_FUN_005f2f90
//   XREF to: Stack[0x4] (READ)
// 005f2f94: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005f2f98: CMP EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005f2f9e: JLE 0x005f2fb8
//   XREF to: 005f2fb8 (CONDITIONAL_JUMP)
// 005f2fa0: CMP EAX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 005f2fa6: JLE 0x005f2fb8
//   XREF to: 005f2fb8 (CONDITIONAL_JUMP)
// 005f2fa8: CMP EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 005f2fae: JGE 0x005f2fb8
//   XREF to: 005f2fb8 (CONDITIONAL_JUMP)
// 005f2fb0: CMP EAX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 005f2fb6: JL 0x005f2fb9
//   XREF to: 005f2fb9 (CONDITIONAL_JUMP)
// 005f2fb8: RET
//   Label: LAB_005f2fb8
// 005f2fb9: PUSH EAX
//   Label: LAB_005f2fb9
// 005f2fba: PUSH EDX
// 005f2fbb: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 005f2fc0: ADD ESP,0x8
// 005f2fc3: RET
