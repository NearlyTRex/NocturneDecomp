// Name: core_fire.cpp_CTrail_FUN_004c5df0
// Address: 004c5df0
// Address Range: [[004c5df0, 004c5e34]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CTrail_FUN_004c5df0(CTrail * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c9060 (004c9060) at 004c908f [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_FUN_004c5df0(CTrail *this_ptr)

{
  CTrail *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  if (this_ptr != in_stack_00000008) {
    *(undefined4 *)this_ptr->field0_0x0 = *(undefined4 *)in_stack_00000008->field0_0x0;
    *(undefined4 *)(this_ptr->field0_0x0 + 4) = *(undefined4 *)(in_stack_00000008->field0_0x0 + 4);
    *(undefined4 *)(this_ptr->field0_0x0 + 8) = *(undefined4 *)(in_stack_00000008->field0_0x0 + 8);
  }
  *(undefined4 *)(this_ptr->field0_0x0 + 0xc) = in_stack_0000000c;
  *(undefined4 *)(this_ptr->field0_0x0 + 0x14) = in_stack_00000010;
  *(undefined4 *)(this_ptr->field0_0x0 + 0x10) = in_stack_00000014;
  *(undefined4 *)(this_ptr->field0_0x0 + 0x18) = in_stack_00000014;
  *(undefined4 *)(this_ptr->field0_0x0 + 0x1c) = in_stack_00000010;
  *(undefined4 *)(this_ptr->field0_0x0 + 0x20) = in_stack_00000018;
  return;
}


// Assembly code:
// 004c5df0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CTrail_FUN_004c5df0
//   XREF to: Stack[0x4] (READ)
// 004c5df4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004c5df8: CMP EAX,EDX
// 004c5dfa: JNZ 0x004c5e23
//   XREF to: 004c5e23 (CONDITIONAL_JUMP)
// 004c5dfc: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_004c5dfc
//   XREF to: Stack[0xc] (READ)
// 004c5e00: MOV dword ptr [EAX + 0xc],EDX
// 004c5e03: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 004c5e07: MOV dword ptr [EAX + 0x14],EDX
// 004c5e0a: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x14] (READ)
// 004c5e0e: MOV dword ptr [EAX + 0x10],EDX
// 004c5e11: MOV dword ptr [EAX + 0x18],EDX
// 004c5e14: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 004c5e18: MOV dword ptr [EAX + 0x1c],EDX
// 004c5e1b: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 004c5e1f: MOV dword ptr [EAX + 0x20],EDX
// 004c5e22: RET
// 004c5e23: MOV ECX,dword ptr [EDX]
//   Label: LAB_004c5e23
// 004c5e25: MOV dword ptr [EAX],ECX
// 004c5e27: MOV ECX,dword ptr [EDX + 0x4]
// 004c5e2a: MOV dword ptr [EAX + 0x4],ECX
// 004c5e2d: MOV ECX,dword ptr [EDX + 0x8]
// 004c5e30: MOV dword ptr [EAX + 0x8],ECX
// 004c5e33: JMP 0x004c5dfc
//   XREF to: 004c5dfc (UNCONDITIONAL_JUMP)
