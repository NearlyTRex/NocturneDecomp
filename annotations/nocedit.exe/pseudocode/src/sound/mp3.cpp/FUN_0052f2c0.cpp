// Name: sound_mp3.cpp_FUN_0052f2c0
// Address: 0052f2c0
// Address Range: [[0052f2c0, 0052f316]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_0052f2c0()
// Cross-references:
//   sound_mp3.cpp_HuffmanDecodeTableThing_FUN_00531680 (00531680) at 00531cbc [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_FUN_0052f2c0(undefined4 param_1, undefined4 param_2) */

void sound_mp3_cpp_FUN_0052f2c0(void)

{
  uint uVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  uVar1 = *(int *)(in_stack_00000004 + 0x531c) + in_stack_00000008;
  *(uint *)(in_stack_00000004 + 0x531c) = uVar1;
  *(int *)(in_stack_00000004 + 0x1314) = *(int *)(in_stack_00000004 + 0x1314) - in_stack_00000008;
  while (7 < uVar1) {
    *(int *)(in_stack_00000004 + 0x531c) = *(int *)(in_stack_00000004 + 0x531c) + -8;
    uVar1 = *(uint *)(in_stack_00000004 + 0x531c);
    *(int *)(in_stack_00000004 + 0x1318) = *(int *)(in_stack_00000004 + 0x1318) + -1;
  }
  return;
}


// Assembly code:
// 0052f2c0: PUSH EBX
//   Label: sound_mp3.cpp_FUN_0052f2c0
// 0052f2c1: PUSH EBP
// 0052f2c2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052f2c6: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052f2ca: MOV EBX,dword ptr [EAX + 0x531c]
// 0052f2d0: MOV ECX,dword ptr [EAX + 0x1314]
// 0052f2d6: ADD EBX,EDX
// 0052f2d8: SUB ECX,EDX
// 0052f2da: MOV dword ptr [EAX + 0x531c],EBX
// 0052f2e0: MOV dword ptr [EAX + 0x1314],ECX
// 0052f2e6: CMP EBX,0x8
// 0052f2e9: JC 0x0052f314
//   XREF to: 0052f314 (CONDITIONAL_JUMP)
// 0052f2eb: PUSH EDI
// 0052f2ec: MOV EDI,dword ptr [EAX + 0x531c]
//   Label: LAB_0052f2ec
// 0052f2f2: SUB EDI,0x8
// 0052f2f5: MOV EBP,dword ptr [EAX + 0x1318]
// 0052f2fb: MOV dword ptr [EAX + 0x531c],EDI
// 0052f301: DEC EBP
// 0052f302: MOV EDX,dword ptr [EAX + 0x531c]
// 0052f308: MOV dword ptr [EAX + 0x1318],EBP
// 0052f30e: CMP EDX,0x8
// 0052f311: JNC 0x0052f2ec
//   XREF to: 0052f2ec (CONDITIONAL_JUMP)
// 0052f313: POP EDI
// 0052f314: POP EBP
//   Label: LAB_0052f314
// 0052f315: POP EBX
// 0052f316: RET
