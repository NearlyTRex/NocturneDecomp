// Name: core_fire.cpp_FUN_004c5680
// Address: 004c5680
// Address Range: [[004c5680, 004c56dd]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c5680()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c8fd0 (004c8fd0) at 004c9000 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void core_fire_cpp_FUN_004c5680(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  if (in_stack_00000004 + 1 != in_stack_00000008) {
    in_stack_00000004[1] = *in_stack_00000008;
    in_stack_00000004[2] = in_stack_00000008[1];
    in_stack_00000004[3] = in_stack_00000008[2];
  }
  if (in_stack_00000004 + 7 != in_stack_0000000c) {
    in_stack_00000004[7] = *in_stack_0000000c;
    in_stack_00000004[8] = in_stack_0000000c[1];
    in_stack_00000004[9] = in_stack_0000000c[2];
  }
  *in_stack_00000004 = 1;
  in_stack_00000004[5] = 0x3e800000;
  in_stack_00000004[6] = in_stack_00000010;
  in_stack_00000004[10] = in_stack_00000014;
  return;
}


// Assembly code:
// 004c5680: PUSH EBX
//   Label: core_fire.cpp_FUN_004c5680
// 004c5681: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004c5685: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004c5689: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004c568d: LEA EAX,[EDX + 0x4]
// 004c5690: CMP EAX,ECX
// 004c5692: JNZ 0x004c56b8
//   XREF to: 004c56b8 (CONDITIONAL_JUMP)
// 004c5694: LEA EAX,[EDX + 0x1c]
//   Label: LAB_004c5694
// 004c5697: CMP EAX,EBX
// 004c5699: JNZ 0x004c56cc
//   XREF to: 004c56cc (CONDITIONAL_JUMP)
// 004c569b: MOV dword ptr [EDX],0x1
//   Label: LAB_004c569b
// 004c56a1: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004c56a5: MOV dword ptr [EDX + 0x14],0x3e800000
// 004c56ac: MOV dword ptr [EDX + 0x18],EAX
// 004c56af: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 004c56b3: MOV dword ptr [EDX + 0x28],EAX
// 004c56b6: POP EBX
// 004c56b7: RET
// 004c56b8: PUSH ESI
//   Label: LAB_004c56b8
// 004c56b9: MOV ESI,dword ptr [ECX]
// 004c56bb: MOV dword ptr [EAX],ESI
// 004c56bd: MOV ESI,dword ptr [ECX + 0x4]
// 004c56c0: MOV dword ptr [EAX + 0x4],ESI
// 004c56c3: MOV ESI,dword ptr [ECX + 0x8]
// 004c56c6: MOV dword ptr [EAX + 0x8],ESI
// 004c56c9: POP ESI
// 004c56ca: JMP 0x004c5694
//   XREF to: 004c5694 (UNCONDITIONAL_JUMP)
// 004c56cc: MOV ECX,dword ptr [EBX]
//   Label: LAB_004c56cc
// 004c56ce: MOV dword ptr [EAX],ECX
// 004c56d0: MOV ECX,dword ptr [EBX + 0x4]
// 004c56d3: MOV dword ptr [EAX + 0x4],ECX
// 004c56d6: MOV ECX,dword ptr [EBX + 0x8]
// 004c56d9: MOV dword ptr [EAX + 0x8],ECX
// 004c56dc: JMP 0x004c569b
//   XREF to: 004c569b (UNCONDITIONAL_JUMP)
