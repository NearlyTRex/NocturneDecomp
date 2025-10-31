// Name: sound_mp3.cpp_CallReadOrWriteBits_FUN_0052f850
// Address: 0052f850
// Address Range: [[0052f850, 0052f8c2]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_CallReadOrWriteBits_FUN_0052f850()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 00535093 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_CallReadOrWriteBits(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void sound_mp3_cpp_CallReadOrWriteBits_FUN_0052f850(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int local_14;
  
  local_14 = 0;
  iVar1 = *(int *)(in_stack_00000010 + 0x10);
  do {
    iVar4 = 0;
    if (0 < iVar1) {
      puVar3 = (undefined4 *)(local_14 + in_stack_0000000c);
      piVar5 = (int *)(local_14 + in_stack_00000008);
      do {
        if (*piVar5 == 0) {
          *puVar3 = 0x3f;
        }
        else {
          uVar2 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
          *puVar3 = uVar2;
        }
        puVar3 = puVar3 + 0x60;
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0x20;
      } while (iVar4 < iVar1);
    }
    local_14 = local_14 + 4;
  } while (local_14 != 0x80);
  return;
}


// Assembly code:
// 0052f850: PUSH EBX
//   Label: sound_mp3.cpp_CallReadOrWriteBits_FUN_0052f850
// 0052f851: PUSH ESI
// 0052f852: PUSH EDI
// 0052f853: PUSH EBP
// 0052f854: SUB ESP,0x4
// 0052f857: XOR EDX,EDX
// 0052f859: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0052f85d: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 0052f860: MOV EBP,dword ptr [EBP + 0x10]
// 0052f863: XOR ESI,ESI
//   Label: LAB_0052f863
// 0052f865: TEST EBP,EBP
// 0052f867: JLE 0x0052f897
//   XREF to: 0052f897 (CONDITIONAL_JUMP)
// 0052f869: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0052f86c: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0052f870: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0052f874: ADD EBX,EDI
// 0052f876: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0052f879: ADD EDI,EAX
// 0052f87b: CMP dword ptr [EDI],0x0
//   Label: LAB_0052f87b
// 0052f87e: JNZ 0x0052f8b0
//   XREF to: 0052f8b0 (CONDITIONAL_JUMP)
// 0052f880: MOV dword ptr [EBX],0x3f
// 0052f886: ADD EBX,0x180
//   Label: LAB_0052f886
// 0052f88c: INC ESI
// 0052f88d: ADD EDI,0x80
// 0052f893: CMP ESI,EBP
// 0052f895: JL 0x0052f87b
//   XREF to: 0052f87b (CONDITIONAL_JUMP)
// 0052f897: MOV ECX,dword ptr [ESP]
//   Label: LAB_0052f897
//   XREF to: Stack[-0x14] (DATA)
// 0052f89a: ADD ECX,0x4
// 0052f89d: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 0052f8a0: CMP ECX,0x80
// 0052f8a6: JNZ 0x0052f863
//   XREF to: 0052f863 (CONDITIONAL_JUMP)
// 0052f8a8: ADD ESP,0x4
// 0052f8ab: POP EBP
// 0052f8ac: POP EDI
// 0052f8ad: POP ESI
// 0052f8ae: POP EBX
// 0052f8af: RET
// 0052f8b0: PUSH 0x6
//   Label: LAB_0052f8b0
// 0052f8b2: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0052f8b6: PUSH ECX
// 0052f8b7: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f8bc: ADD ESP,0x8
// 0052f8bf: MOV dword ptr [EBX],EAX
// 0052f8c1: JMP 0x0052f886
//   XREF to: 0052f886 (UNCONDITIONAL_JUMP)
