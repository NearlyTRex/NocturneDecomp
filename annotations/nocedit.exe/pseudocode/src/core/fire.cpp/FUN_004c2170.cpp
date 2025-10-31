// Name: core_fire.cpp_FUN_004c2170
// Address: 004c2170
// Address Range: [[004c2170, 004c21c2]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c2170()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7d60 (004c7d60) at 004c7da4 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void core_fire_cpp_FUN_004c2170(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  if (in_stack_00000004 != in_stack_00000008) {
    *in_stack_00000004 = *in_stack_00000008;
    in_stack_00000004[1] = in_stack_00000008[1];
    in_stack_00000004[2] = in_stack_00000008[2];
  }
  if (in_stack_00000004 + 3 != in_stack_0000000c) {
    in_stack_00000004[3] = *in_stack_0000000c;
    in_stack_00000004[4] = in_stack_0000000c[1];
    in_stack_00000004[5] = in_stack_0000000c[2];
  }
  in_stack_00000004[8] = 2;
  in_stack_00000004[6] = in_stack_00000010;
  in_stack_00000004[7] = in_stack_00000014;
  return;
}


// Assembly code:
// 004c2170: PUSH EBX
//   Label: core_fire.cpp_FUN_004c2170
// 004c2171: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004c2175: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004c2179: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004c217d: CMP EAX,EDX
// 004c217f: JNZ 0x004c219f
//   XREF to: 004c219f (CONDITIONAL_JUMP)
// 004c2181: LEA EDX,[EAX + 0xc]
//   Label: LAB_004c2181
// 004c2184: CMP EDX,ECX
// 004c2186: JNZ 0x004c21b1
//   XREF to: 004c21b1 (CONDITIONAL_JUMP)
// 004c2188: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_004c2188
//   XREF to: Stack[0x10] (READ)
// 004c218c: MOV dword ptr [EAX + 0x20],0x2
// 004c2193: MOV dword ptr [EAX + 0x18],EDX
// 004c2196: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 004c219a: MOV dword ptr [EAX + 0x1c],EDX
// 004c219d: POP EBX
// 004c219e: RET
// 004c219f: MOV EBX,dword ptr [EDX]
//   Label: LAB_004c219f
// 004c21a1: MOV dword ptr [EAX],EBX
// 004c21a3: MOV EBX,dword ptr [EDX + 0x4]
// 004c21a6: MOV dword ptr [EAX + 0x4],EBX
// 004c21a9: MOV EBX,dword ptr [EDX + 0x8]
// 004c21ac: MOV dword ptr [EAX + 0x8],EBX
// 004c21af: JMP 0x004c2181
//   XREF to: 004c2181 (UNCONDITIONAL_JUMP)
// 004c21b1: MOV EBX,dword ptr [ECX]
//   Label: LAB_004c21b1
// 004c21b3: MOV dword ptr [EDX],EBX
// 004c21b5: MOV EBX,dword ptr [ECX + 0x4]
// 004c21b8: MOV dword ptr [EDX + 0x4],EBX
// 004c21bb: MOV EBX,dword ptr [ECX + 0x8]
// 004c21be: MOV dword ptr [EDX + 0x8],EBX
// 004c21c1: JMP 0x004c2188
//   XREF to: 004c2188 (UNCONDITIONAL_JUMP)
