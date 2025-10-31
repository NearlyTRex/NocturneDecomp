// Name: sound_mp3.cpp_FUN_0052f0e0
// Address: 0052f0e0
// Address Range: [[0052f0e0, 0052f153]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_0052f0e0()
// Function calls:
//   sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40

#include "nocturne.h"

bool sound_mp3_cpp_FUN_0052f0e0(void)

{
  uint uVar1;
  uint uVar2;
  int in_stack_00000004;
  uint in_stack_00000008;
  byte in_stack_0000000c;
  
  if ((*(uint *)(in_stack_00000004 + 0xc) & 7) != 0) {
    sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
  }
  uVar1 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
  while (((uVar1 & (2 << (in_stack_0000000c & 0x1f)) - 1U) != in_stack_00000008 &&
         (*(int *)(in_stack_00000004 + 0x1c) == 0))) {
    uVar2 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
    uVar1 = uVar1 << 8 | uVar2;
  }
  return *(int *)(in_stack_00000004 + 0x1c) == 0;
}


// Assembly code:
// 0052f0e0: PUSH EBX
//   Label: sound_mp3.cpp_FUN_0052f0e0
// 0052f0e1: PUSH ESI
// 0052f0e2: PUSH EDI
// 0052f0e3: PUSH EBP
// 0052f0e4: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052f0e8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052f0ec: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0052f0f0: MOV EDI,0x2
// 0052f0f5: MOV CL,BL
// 0052f0f7: SHL EDI,CL
// 0052f0f9: MOV EAX,dword ptr [ESI + 0xc]
// 0052f0fc: DEC EDI
// 0052f0fd: AND EAX,0x7
// 0052f100: JNZ 0x0052f12f
//   XREF to: 0052f12f (CONDITIONAL_JUMP)
// 0052f102: PUSH EBX
//   Label: LAB_0052f102
// 0052f103: PUSH ESI
// 0052f104: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f109: ADD ESP,0x8
// 0052f10c: MOV EBX,EAX
// 0052f10e: MOV EAX,EBX
//   Label: LAB_0052f10e
// 0052f110: AND EAX,EDI
// 0052f112: CMP EAX,EBP
// 0052f114: JZ 0x0052f11d
//   XREF to: 0052f11d (CONDITIONAL_JUMP)
// 0052f116: MOV EAX,dword ptr [ESI + 0x1c]
// 0052f119: TEST EAX,EAX
// 0052f11b: JZ 0x0052f142
//   XREF to: 0052f142 (CONDITIONAL_JUMP)
// 0052f11d: MOV EAX,dword ptr [ESI + 0x1c]
//   Label: LAB_0052f11d
// 0052f120: TEST EAX,EAX
// 0052f122: SETZ AL
// 0052f125: AND EAX,0xff
// 0052f12a: POP EBP
// 0052f12b: POP EDI
// 0052f12c: POP ESI
// 0052f12d: POP EBX
// 0052f12e: RET
// 0052f12f: MOV EDX,0x8
//   Label: LAB_0052f12f
// 0052f134: SUB EDX,EAX
// 0052f136: PUSH EDX
// 0052f137: PUSH ESI
// 0052f138: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f13d: ADD ESP,0x8
// 0052f140: JMP 0x0052f102
//   XREF to: 0052f102 (UNCONDITIONAL_JUMP)
// 0052f142: PUSH 0x8
//   Label: LAB_0052f142
// 0052f144: PUSH ESI
// 0052f145: SHL EBX,0x8
// 0052f148: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f14d: ADD ESP,0x8
// 0052f150: OR EBX,EAX
// 0052f152: JMP 0x0052f10e
//   XREF to: 0052f10e (UNCONDITIONAL_JUMP)
