// Name: cockpit_drawsurf.cpp_computeCohenSutherlandOutcode_FUN_00487de0
// Address: 00487de0
// Address Range: [[00487de0, 00487e11]]
// Convention: __cdecl
// Signature: char cockpit_drawsurf.cpp_computeCohenSutherlandOutcode_FUN_00487de0(int point_x, int point_y, int clip_left, int clip_top, int clip_right, int clip_bottom)

#include "nocturne.h"

char __cdecl
cockpit_drawsurf_cpp_computeCohenSutherlandOutcode_FUN_00487de0
          (int point_x,int point_y,int clip_left,int clip_top,int clip_right,int clip_bottom)

{
  byte bVar1;
  
  bVar1 = clip_bottom < point_y;
  if (point_y < clip_top) {
    bVar1 = bVar1 | 2;
  }
  if (clip_right < point_x) {
    bVar1 = bVar1 | 4;
  }
  if (point_x < clip_left) {
    bVar1 = bVar1 | 8;
  }
  return bVar1;
}


// Assembly code:
// 00487de0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_computeCohenSutherlandOutcode_FUN_00487de0
// 00487de1: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00487de5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00487de9: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 00487ded: XOR EAX,EAX
// 00487def: CMP EDX,EBX
// 00487df1: JLE 0x00487df8
//   XREF to: 00487df8 (CONDITIONAL_JUMP)
// 00487df3: MOV EAX,0x1
// 00487df8: CMP EDX,dword ptr [ESP + 0x14]
//   Label: LAB_00487df8
//   XREF to: Stack[0x10] (READ)
// 00487dfc: JGE 0x00487e00
//   XREF to: 00487e00 (CONDITIONAL_JUMP)
// 00487dfe: OR AL,0x2
// 00487e00: CMP ECX,dword ptr [ESP + 0x18]
//   Label: LAB_00487e00
//   XREF to: Stack[0x14] (READ)
// 00487e04: JLE 0x00487e08
//   XREF to: 00487e08 (CONDITIONAL_JUMP)
// 00487e06: OR AL,0x4
// 00487e08: CMP ECX,dword ptr [ESP + 0x10]
//   Label: LAB_00487e08
//   XREF to: Stack[0xc] (READ)
// 00487e0c: JGE 0x00487e10
//   XREF to: 00487e10 (CONDITIONAL_JUMP)
// 00487e0e: OR AL,0x8
// 00487e10: POP EBX
//   Label: LAB_00487e10
// 00487e11: RET
