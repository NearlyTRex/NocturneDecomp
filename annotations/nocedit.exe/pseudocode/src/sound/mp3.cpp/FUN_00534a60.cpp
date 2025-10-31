// Name: sound_mp3.cpp_FUN_00534a60
// Address: 00534a60
// Address Range: [[00534a60, 00534b98]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_00534a60()
// Cross-references:
//   sound_mp3.cpp_FUN_00534210 (00534210) at 0053435a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a5106 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a6cad [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005acfe3 [UNCONDITIONAL_CALL]
// Globals:
//   undefined1 DAT_02f68188
//   undefined1 DAT_02f68189
//   undefined1 DAT_02f6818a
//   undefined1 DAT_02f6818b
// Function calls:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_FUN_00534a60(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

int sound_mp3_cpp_FUN_00534a60(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  byte bVar10;
  char *in_stack_00000004;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  int local_14;
  
  bVar10 = 0;
  pcVar8 = &DAT_02f68188;
  pcVar6 = in_stack_00000004;
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  local_14 = 0;
  puVar5 = in_stack_00000008;
  while( true ) {
    iVar2 = *(int *)(in_stack_00000004 + 0x108);
    if (0 < iVar2) {
      if (in_stack_0000000c < iVar2) {
        iVar2 = in_stack_0000000c;
      }
      uVar4 = *(int *)(in_stack_00000004 + 0x104) * iVar2 * 2;
      puVar7 = *(undefined4 **)(in_stack_00000004 + 0x10c);
      puVar9 = puVar5;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar10 * -2 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar10 * -2 + 1);
      }
      *(int *)(in_stack_00000004 + 0x108) = *(int *)(in_stack_00000004 + 0x108) - iVar2;
      local_14 = local_14 + iVar2;
      in_stack_0000000c = in_stack_0000000c - iVar2;
      *(int *)(in_stack_00000004 + 0x10c) =
           *(int *)(in_stack_00000004 + 0x10c) + *(int *)(in_stack_00000004 + 0x104) * iVar2 * 2;
      puVar5 = (undefined4 *)((int)puVar5 + *(int *)(in_stack_00000004 + 0x104) * iVar2 * 2);
    }
    for (; 0x47f < in_stack_0000000c; in_stack_0000000c = in_stack_0000000c - iVar2) {
      iVar2 = sound_mp3_cpp_MpegLoadMaybe_FUN_00534d40();
      if (iVar2 < 1) {
        return local_14;
      }
      puVar5 = (undefined4 *)((int)puVar5 + in_stack_00000008[0x41] * iVar2 * 2);
    }
    if (in_stack_0000000c < 1) break;
    iVar2 = sound_mp3_cpp_MpegLoadMaybe_FUN_00534d40();
    in_stack_00000008[0x42] = iVar2;
    if (iVar2 < 1) {
      return local_14;
    }
    in_stack_00000008[0x43] = in_stack_00000004 + 0x110;
  }
  return local_14;
}


// Assembly code:
// 00534a60: PUSH EBX
//   Label: sound_mp3.cpp_FUN_00534a60
// 00534a61: PUSH ESI
// 00534a62: PUSH EDI
// 00534a63: PUSH EBP
// 00534a64: SUB ESP,0x8
// 00534a67: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00534a6b: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00534a6f: MOV EDI,0x2f68188
//   XREF to: 02f68188 (DATA)
// 00534a74: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00534a78: PUSH EDI
//   XREF to: 02f68188 (DATA)
// 00534a79: MOV AL,byte ptr [ESI]
//   Label: LAB_00534a79
// 00534a7b: MOV byte ptr [EDI],AL
//   XREF to: 02f68188 (WRITE)
//   XREF to: 02f6818a (WRITE)
// 00534a7d: CMP AL,0x0
// 00534a7f: JZ 0x00534a91
//   XREF to: 00534a91 (CONDITIONAL_JUMP)
// 00534a81: MOV AL,byte ptr [ESI + 0x1]
// 00534a84: ADD ESI,0x2
// 00534a87: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f68189 (WRITE)
//   XREF to: 02f6818b (WRITE)
// 00534a8a: ADD EDI,0x2
// 00534a8d: CMP AL,0x0
// 00534a8f: JNZ 0x00534a79
//   XREF to: 00534a79 (CONDITIONAL_JUMP)
// 00534a91: POP EDI
//   Label: LAB_00534a91
// 00534a92: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00534a96: XOR EDX,EDX
// 00534a98: ADD EAX,0x110
// 00534a9d: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00534aa1: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00534aa4: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00534aa4
//   XREF to: Stack[0x4] (READ)
// 00534aa8: MOV ECX,dword ptr [EAX + 0x108]
// 00534aae: TEST ECX,ECX
// 00534ab0: JLE 0x00534b25
//   XREF to: 00534b25 (CONDITIONAL_JUMP)
// 00534ab2: MOV EDX,ECX
// 00534ab4: CMP ECX,EBX
// 00534ab6: JLE 0x00534aba
//   XREF to: 00534aba (CONDITIONAL_JUMP)
// 00534ab8: MOV EDX,EBX
// 00534aba: MOV ECX,dword ptr [ESP + 0x1c]
//   Label: LAB_00534aba
//   XREF to: Stack[0x4] (READ)
// 00534abe: MOV ECX,dword ptr [ECX + 0x104]
// 00534ac4: IMUL ECX,EDX
// 00534ac7: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00534acb: MOV EDI,EBP
// 00534acd: MOV ESI,dword ptr [ESI + 0x10c]
// 00534ad3: ADD ECX,ECX
// 00534ad5: PUSH EDI
// 00534ad6: MOV EAX,ECX
// 00534ad8: SHR ECX,0x2
// 00534adb: MOVSD.REP ES:EDI,ESI
// 00534add: MOV CL,AL
// 00534adf: AND CL,0x3
// 00534ae2: MOVSB.REP ES:EDI,ESI
// 00534ae4: POP EDI
// 00534ae5: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00534ae9: SUB dword ptr [EAX + 0x108],EDX
// 00534aef: MOV EAX,dword ptr [EAX + 0x104]
// 00534af5: IMUL EAX,EDX
// 00534af8: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00534afc: MOV ESI,dword ptr [ECX + 0x10c]
// 00534b02: ADD EAX,EAX
// 00534b04: ADD ESI,EAX
// 00534b06: MOV EAX,dword ptr [ECX + 0x104]
// 00534b0c: IMUL EAX,EDX
// 00534b0f: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00534b13: ADD EDI,EDX
// 00534b15: SUB EBX,EDX
// 00534b17: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00534b1b: ADD EAX,EAX
// 00534b1d: MOV dword ptr [ECX + 0x10c],ESI
// 00534b23: ADD EBP,EAX
// 00534b25: CMP EBX,0x480
//   Label: LAB_00534b25
// 00534b2b: JGE 0x00534b3e
//   XREF to: 00534b3e (CONDITIONAL_JUMP)
// 00534b2d: CMP EBX,0x1
// 00534b30: JGE 0x00534b6f
//   XREF to: 00534b6f (CONDITIONAL_JUMP)
// 00534b32: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00534b32
//   XREF to: Stack[-0x14] (READ)
// 00534b36: ADD ESP,0x8
// 00534b39: POP EBP
// 00534b3a: POP EDI
// 00534b3b: POP ESI
// 00534b3c: POP EBX
// 00534b3d: RET
// 00534b3e: PUSH EBP
//   Label: LAB_00534b3e
// 00534b3f: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00534b43: PUSH ECX
// 00534b44: CALL sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40
//   XREF to: 00534d40 (UNCONDITIONAL_CALL)
// 00534b49: ADD ESP,0x8
// 00534b4c: TEST EAX,EAX
// 00534b4e: JLE 0x00534b32
//   XREF to: 00534b32 (CONDITIONAL_JUMP)
// 00534b50: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00534b54: MOV EDX,dword ptr [EDX + 0x104]
// 00534b5a: IMUL EDX,EAX
// 00534b5d: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00534b61: SUB EBX,EAX
// 00534b63: ADD ESI,EAX
// 00534b65: ADD EDX,EDX
// 00534b67: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00534b6b: ADD EBP,EDX
// 00534b6d: JMP 0x00534b25
//   XREF to: 00534b25 (UNCONDITIONAL_JUMP)
// 00534b6f: MOV EDI,dword ptr [ESP]
//   Label: LAB_00534b6f
//   XREF to: Stack[-0x18] (DATA)
// 00534b72: PUSH EDI
// 00534b73: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00534b77: PUSH EAX
// 00534b78: CALL sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40
//   XREF to: 00534d40 (UNCONDITIONAL_CALL)
// 00534b7d: ADD ESP,0x8
// 00534b80: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00534b84: MOV dword ptr [EDX + 0x108],EAX
// 00534b8a: TEST EAX,EAX
// 00534b8c: JLE 0x00534b32
//   XREF to: 00534b32 (CONDITIONAL_JUMP)
// 00534b8e: MOV dword ptr [EDX + 0x10c],EDI
// 00534b94: JMP 0x00534aa4
//   XREF to: 00534aa4 (UNCONDITIONAL_JUMP)
