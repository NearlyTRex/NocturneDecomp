// Name: sound_mp3.cpp_FUN_0052f7a0
// Address: 0052f7a0
// Address Range: [[0052f7a0, 0052f84a]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_0052f7a0()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 00535072 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_FUN_0052f7a0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void sound_mp3_cpp_FUN_0052f7a0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_14;
  
  iVar1 = *(int *)(in_stack_0000000c + 0x10);
  iVar5 = *(int *)(in_stack_0000000c + 0x14);
  if (0 < iVar5) {
    local_14 = 0;
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        puVar3 = (undefined4 *)(local_14 + in_stack_00000008);
        do {
          iVar4 = iVar4 + 1;
          uVar2 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
          *puVar3 = uVar2;
          puVar3 = puVar3 + 0x20;
        } while (iVar4 < iVar1);
      }
      local_14 = local_14 + 4;
    } while (local_14 < iVar5 << 2);
  }
  if (iVar5 < 0x20) {
    iVar5 = iVar5 << 2;
    do {
      uVar2 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
      iVar4 = 0;
      if (0 < iVar1) {
        puVar3 = (undefined4 *)(in_stack_0000000c + iVar5);
        do {
          iVar4 = iVar4 + 1;
          *puVar3 = uVar2;
          puVar3 = puVar3 + 0x20;
        } while (iVar4 < iVar1);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x80);
  }
  return;
}


// Assembly code:
// 0052f7a0: PUSH EBX
//   Label: sound_mp3.cpp_FUN_0052f7a0
// 0052f7a1: PUSH ESI
// 0052f7a2: PUSH EDI
// 0052f7a3: PUSH EBP
// 0052f7a4: SUB ESP,0xc
// 0052f7a7: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0052f7ab: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0052f7af: MOV EDI,dword ptr [EAX + 0x10]
// 0052f7b2: MOV EAX,dword ptr [EAX + 0x14]
// 0052f7b5: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 0052f7b8: TEST EAX,EAX
// 0052f7ba: JLE 0x0052f806
//   XREF to: 0052f806 (CONDITIONAL_JUMP)
// 0052f7bc: XOR EAX,EAX
// 0052f7be: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052f7c2: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0052f7c5: SHL EAX,0x2
// 0052f7c8: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052f7cc: XOR EBX,EBX
//   Label: LAB_0052f7cc
// 0052f7ce: TEST EDI,EDI
// 0052f7d0: JLE 0x0052f7f3
//   XREF to: 0052f7f3 (CONDITIONAL_JUMP)
// 0052f7d2: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0052f7d6: ADD ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0052f7da: PUSH 0x4
//   Label: LAB_0052f7da
// 0052f7dc: PUSH EBP
// 0052f7dd: ADD ESI,0x80
// 0052f7e3: INC EBX
// 0052f7e4: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f7e9: ADD ESP,0x8
// 0052f7ec: MOV dword ptr [ESI + -0x80],EAX
// 0052f7ef: CMP EBX,EDI
// 0052f7f1: JL 0x0052f7da
//   XREF to: 0052f7da (CONDITIONAL_JUMP)
// 0052f7f3: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_0052f7f3
//   XREF to: Stack[-0x14] (READ)
// 0052f7f7: ADD ECX,0x4
// 0052f7fa: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0052f7fe: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0052f802: CMP ECX,EBX
// 0052f804: JL 0x0052f7cc
//   XREF to: 0052f7cc (CONDITIONAL_JUMP)
// 0052f806: MOV ESI,dword ptr [ESP]
//   Label: LAB_0052f806
//   XREF to: Stack[-0x1c] (DATA)
// 0052f809: CMP ESI,0x20
// 0052f80c: JGE 0x0052f843
//   XREF to: 0052f843 (CONDITIONAL_JUMP)
// 0052f80e: SHL ESI,0x2
// 0052f811: PUSH 0x4
//   Label: LAB_0052f811
// 0052f813: PUSH EBP
// 0052f814: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f819: ADD ESP,0x8
// 0052f81c: MOV EBX,EAX
// 0052f81e: XOR EAX,EAX
// 0052f820: TEST EDI,EDI
// 0052f822: JLE 0x0052f838
//   XREF to: 0052f838 (CONDITIONAL_JUMP)
// 0052f824: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0052f828: ADD EDX,ESI
// 0052f82a: ADD EDX,0x80
//   Label: LAB_0052f82a
// 0052f830: INC EAX
// 0052f831: MOV dword ptr [EDX + -0x80],EBX
// 0052f834: CMP EAX,EDI
// 0052f836: JL 0x0052f82a
//   XREF to: 0052f82a (CONDITIONAL_JUMP)
// 0052f838: ADD ESI,0x4
//   Label: LAB_0052f838
// 0052f83b: CMP ESI,0x80
// 0052f841: JL 0x0052f811
//   XREF to: 0052f811 (CONDITIONAL_JUMP)
// 0052f843: ADD ESP,0xc
//   Label: LAB_0052f843
// 0052f846: POP EBP
// 0052f847: POP EDI
// 0052f848: POP ESI
// 0052f849: POP EBX
// 0052f84a: RET
