// Name: engine_2d.c_project3DPointClipped_FUN_004017c0
// Address: 004017c0
// Address Range: [[004017c0, 004017f3]]
// Convention: __cdecl
// Signature: void engine_2d.c_project3DPointClipped_FUN_004017c0(int x_3d, int y_3d, int z_depth)
// Function calls:
//   engine_2d.c_project3DPointToScreen_FUN_00401770

#include "nocturne.h"

void __cdecl engine_2d_c_project3DPointClipped_FUN_004017c0(int x_3d,int y_3d,int z_depth)

{
  if ((((0 < z_depth) && (x_3d <= z_depth)) && (SBORROW4(x_3d,-z_depth) == x_3d + z_depth < 0)) &&
     ((y_3d <= z_depth && (SBORROW4(y_3d,-z_depth) == y_3d + z_depth < 0)))) {
    engine_2d_c_project3DPointToScreen_FUN_00401770(x_3d,y_3d,z_depth);
    return;
  }
  return;
}


// Assembly code:
// 004017c0: PUSH EBX
//   Label: engine_2d.c_project3DPointClipped_FUN_004017c0
// 004017c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004017c5: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004017c9: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004017cd: TEST EAX,EAX
// 004017cf: JLE 0x004017e5
//   XREF to: 004017e5 (CONDITIONAL_JUMP)
// 004017d1: CMP EBX,EAX
// 004017d3: JG 0x004017e5
//   XREF to: 004017e5 (CONDITIONAL_JUMP)
// 004017d5: MOV EDX,EAX
// 004017d7: NEG EDX
// 004017d9: CMP EBX,EDX
// 004017db: JL 0x004017e5
//   XREF to: 004017e5 (CONDITIONAL_JUMP)
// 004017dd: CMP ECX,EAX
// 004017df: JG 0x004017e5
//   XREF to: 004017e5 (CONDITIONAL_JUMP)
// 004017e1: CMP ECX,EDX
// 004017e3: JGE 0x004017e7
//   XREF to: 004017e7 (CONDITIONAL_JUMP)
// 004017e5: POP EBX
//   Label: LAB_004017e5
// 004017e6: RET
// 004017e7: PUSH EAX
//   Label: LAB_004017e7
// 004017e8: PUSH ECX
// 004017e9: PUSH EBX
// 004017ea: CALL engine_2d.c_project3DPointToScreen_FUN_00401770
//   XREF to: 00401770 (UNCONDITIONAL_CALL)
// 004017ef: ADD ESP,0xc
// 004017f2: POP EBX
// 004017f3: RET
