// Name: sound_mp3.cpp_FUN_0052f8e0
// Address: 0052f8e0
// Address Range: [[0052f8e0, 0052fb46]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_0052f8e0()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 005353f2 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0052f8c4 = 0052f9f7
// Function calls:
//   sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_FUN_0052f8e0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5) */

void sound_mp3_cpp_FUN_0052f8e0(void)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int local_28;
  int local_24;
  int *local_14;
  
  iVar1 = *(int *)(in_stack_00000014 + 0x10);
  iVar4 = *(int *)(in_stack_00000014 + 0x18);
  if (0 < iVar4) {
    local_28 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        piVar7 = (int *)(local_28 + in_stack_0000000c);
        do {
          if (*piVar7 != 0) {
            bVar2 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
            *(uint *)(in_stack_00000008 + iVar5 * 0x80 + local_28) = (uint)bVar2;
          }
          iVar5 = iVar5 + 1;
          piVar7 = piVar7 + 0x20;
        } while (iVar5 < iVar1);
      }
      local_28 = local_28 + 4;
    } while (local_28 < iVar4 << 2);
  }
  if (iVar4 < 0x20) {
    iVar5 = iVar4 * 4;
    do {
      iVar6 = 0;
      if (0 < iVar1) {
        puVar8 = (undefined4 *)(in_stack_00000008 + iVar5);
        do {
          iVar6 = iVar6 + 1;
          *puVar8 = 0;
          puVar8 = puVar8 + 0x20;
        } while (iVar6 < iVar1);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x80);
  }
  if (0 < iVar4) {
    local_24 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        local_14 = (int *)(local_24 + in_stack_0000000c);
        puVar8 = (undefined4 *)(local_24 + in_stack_00000010);
        do {
          if (*local_14 == 0) {
            puVar8[0x40] = 0x3f;
            puVar8[0x20] = puVar8[0x40];
            *puVar8 = puVar8[0x40];
            goto switchD_0052f9f0_default;
          }
          switch(*(undefined4 *)(iVar5 * 0x80 + in_stack_00000008 + local_24)) {
          case 0:
            uVar3 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
            *puVar8 = uVar3;
            uVar3 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
            puVar8[0x20] = uVar3;
            goto LAB_0052fa18;
          case 1:
            uVar3 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
            puVar8[0x20] = uVar3;
            *puVar8 = uVar3;
LAB_0052fa18:
            uVar3 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
            puVar8[0x40] = uVar3;
            break;
          case 2:
            uVar3 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
            puVar8[0x40] = uVar3;
            puVar8[0x20] = uVar3;
            *puVar8 = uVar3;
            break;
          case 3:
            uVar3 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
            *puVar8 = uVar3;
            uVar3 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
            puVar8[0x40] = uVar3;
            puVar8[0x20] = uVar3;
          }
switchD_0052f9f0_default:
          puVar8 = puVar8 + 0x60;
          local_14 = local_14 + 0x20;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      local_24 = local_24 + 4;
    } while (local_24 < iVar4 << 2);
  }
  if (iVar4 < 0x20) {
    iVar4 = iVar4 * 4;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        puVar8 = (undefined4 *)(in_stack_00000010 + iVar4);
        do {
          puVar8[0x40] = 0x3f;
          puVar8[0x20] = puVar8[0x40];
          iVar5 = iVar5 + 1;
          *puVar8 = puVar8[0x40];
          puVar8 = puVar8 + 0x60;
        } while (iVar5 < iVar1);
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0x80);
  }
  return;
}


// Assembly code:
// 0052f8e0: PUSH EBX
//   Label: sound_mp3.cpp_FUN_0052f8e0
// 0052f8e1: PUSH ESI
// 0052f8e2: PUSH EDI
// 0052f8e3: PUSH EBP
// 0052f8e4: SUB ESP,0x24
// 0052f8e7: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0052f8eb: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x14] (READ)
// 0052f8ef: MOV EDI,dword ptr [EAX + 0x10]
// 0052f8f2: MOV EAX,dword ptr [EAX + 0x18]
// 0052f8f5: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x34] (DATA)
// 0052f8f8: TEST EAX,EAX
// 0052f8fa: JLE 0x0052f953
//   XREF to: 0052f953 (CONDITIONAL_JUMP)
// 0052f8fc: XOR EAX,EAX
// 0052f8fe: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0052f902: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 0052f905: SHL EAX,0x2
// 0052f908: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0052f90c: XOR EBX,EBX
//   Label: LAB_0052f90c
// 0052f90e: TEST EDI,EDI
// 0052f910: JLE 0x0052f940
//   XREF to: 0052f940 (CONDITIONAL_JUMP)
// 0052f912: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 0052f916: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 0052f91a: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052f91e: LEA EBP,[EAX + EDX*0x1]
// 0052f921: MOV EAX,EBX
//   Label: LAB_0052f921
// 0052f923: SHL EAX,0x7
// 0052f926: MOV ECX,dword ptr [EBP]
// 0052f929: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052f92d: TEST ECX,ECX
// 0052f92f: JNZ 0x0052faa4
//   XREF to: 0052faa4 (CONDITIONAL_JUMP)
// 0052f935: INC EBX
//   Label: LAB_0052f935
// 0052f936: ADD EBP,0x80
// 0052f93c: CMP EBX,EDI
// 0052f93e: JL 0x0052f921
//   XREF to: 0052f921 (CONDITIONAL_JUMP)
// 0052f940: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_0052f940
//   XREF to: Stack[-0x28] (READ)
// 0052f944: ADD ECX,0x4
// 0052f947: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 0052f94b: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0052f94f: CMP ECX,EBX
// 0052f951: JL 0x0052f90c
//   XREF to: 0052f90c (CONDITIONAL_JUMP)
// 0052f953: MOV EBP,dword ptr [ESP]
//   Label: LAB_0052f953
//   XREF to: Stack[-0x34] (DATA)
// 0052f956: CMP EBP,0x20
// 0052f959: JGE 0x0052f98a
//   XREF to: 0052f98a (CONDITIONAL_JUMP)
// 0052f95b: LEA EAX,[EBP*0x4 + 0x0]
// 0052f962: XOR EBX,EBX
//   Label: LAB_0052f962
// 0052f964: TEST EDI,EDI
// 0052f966: JLE 0x0052f980
//   XREF to: 0052f980 (CONDITIONAL_JUMP)
// 0052f968: MOV EBP,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0052f96c: ADD EBP,EAX
// 0052f96e: INC EBX
//   Label: LAB_0052f96e
// 0052f96f: MOV dword ptr [EBP],0x0
// 0052f976: ADD EBP,0x80
// 0052f97c: CMP EBX,EDI
// 0052f97e: JL 0x0052f96e
//   XREF to: 0052f96e (CONDITIONAL_JUMP)
// 0052f980: ADD EAX,0x4
//   Label: LAB_0052f980
// 0052f983: CMP EAX,0x80
// 0052f988: JL 0x0052f962
//   XREF to: 0052f962 (CONDITIONAL_JUMP)
// 0052f98a: CMP dword ptr [ESP],0x0
//   Label: LAB_0052f98a
//   XREF to: Stack[-0x34] (DATA)
// 0052f98e: JLE 0x0052fa55
//   XREF to: 0052fa55 (CONDITIONAL_JUMP)
// 0052f994: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 0052f997: XOR EBX,EBX
// 0052f999: SHL EAX,0x2
// 0052f99c: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0052f9a0: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0052f9a4: XOR EBP,EBP
//   Label: LAB_0052f9a4
// 0052f9a6: TEST EDI,EDI
// 0052f9a8: JLE 0x0052fa3e
//   XREF to: 0052fa3e (CONDITIONAL_JUMP)
// 0052f9ae: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 0052f9b2: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 0052f9b6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 0052f9ba: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x10] (READ)
// 0052f9be: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052f9c2: ADD EAX,EDX
// 0052f9c4: ADD EBX,ECX
// 0052f9c6: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052f9ca: MOV EDX,dword ptr [ESP + 0x20]
//   Label: LAB_0052f9ca
//   XREF to: Stack[-0x14] (READ)
// 0052f9ce: MOV EAX,EBP
// 0052f9d0: MOV ECX,dword ptr [EDX]
// 0052f9d2: SHL EAX,0x7
// 0052f9d5: TEST ECX,ECX
// 0052f9d7: JZ 0x0052fb2a
//   XREF to: 0052fb2a (CONDITIONAL_JUMP)
// 0052f9dd: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0052f9e1: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 0052f9e5: ADD EAX,EDX
// 0052f9e7: ADD EAX,ECX
// 0052f9e9: MOV EAX,dword ptr [EAX]
// 0052f9eb: CMP EAX,0x3
// 0052f9ee: JA 0x0052fa26
//   XREF to: 0052fa26 (CONDITIONAL_JUMP)
// 0052f9f0: JMP dword ptr [EAX*0x4 + 0x52f8c4]
//   Label: switchD
//   XREF to: 0052f9f7 (COMPUTED_JUMP)
//   XREF to: 0052fac8 (COMPUTED_JUMP)
//   XREF to: 0052fae3 (COMPUTED_JUMP)
//   XREF to: 0052fb0c (COMPUTED_JUMP)
//   XREF to: 0052f8c4 (DATA)
// 0052f9f7: PUSH 0x6
//   Label: caseD_0
// 0052f9f9: PUSH ESI
// 0052f9fa: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f9ff: ADD ESP,0x8
// 0052fa02: PUSH 0x6
// 0052fa04: PUSH ESI
// 0052fa05: MOV dword ptr [EBX],EAX
// 0052fa07: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052fa0c: ADD ESP,0x8
// 0052fa0f: PUSH 0x6
// 0052fa11: PUSH ESI
// 0052fa12: MOV dword ptr [EBX + 0x80],EAX
// 0052fa18: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   Label: LAB_0052fa18
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052fa1d: ADD ESP,0x8
// 0052fa20: MOV dword ptr [EBX + 0x100],EAX
// 0052fa26: MOV EAX,dword ptr [ESP + 0x20]
//   Label: default
//   XREF to: Stack[-0x14] (READ)
// 0052fa2a: ADD EBX,0x180
// 0052fa30: ADD EAX,0x80
// 0052fa35: INC EBP
// 0052fa36: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052fa3a: CMP EBP,EDI
// 0052fa3c: JL 0x0052f9ca
//   XREF to: 0052f9ca (CONDITIONAL_JUMP)
// 0052fa3e: MOV EBP,dword ptr [ESP + 0x10]
//   Label: LAB_0052fa3e
//   XREF to: Stack[-0x24] (READ)
// 0052fa42: ADD EBP,0x4
// 0052fa45: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x2c] (READ)
// 0052fa49: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 0052fa4d: CMP EBP,EDX
// 0052fa4f: JL 0x0052f9a4
//   XREF to: 0052f9a4 (CONDITIONAL_JUMP)
// 0052fa55: MOV ECX,dword ptr [ESP]
//   Label: LAB_0052fa55
//   XREF to: Stack[-0x34] (DATA)
// 0052fa58: CMP ECX,0x20
// 0052fa5b: JGE 0x0052fa9c
//   XREF to: 0052fa9c (CONDITIONAL_JUMP)
// 0052fa5d: LEA EDX,[ECX*0x4 + 0x0]
// 0052fa64: XOR ESI,ESI
//   Label: LAB_0052fa64
// 0052fa66: TEST EDI,EDI
// 0052fa68: JLE 0x0052fa91
//   XREF to: 0052fa91 (CONDITIONAL_JUMP)
// 0052fa6a: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x10] (READ)
// 0052fa6e: ADD EBX,EDX
// 0052fa70: ADD EBX,0x180
//   Label: LAB_0052fa70
// 0052fa76: MOV dword ptr [EBX + -0x80],0x3f
// 0052fa7d: MOV EAX,dword ptr [EBX + -0x80]
// 0052fa80: MOV dword ptr [EBX + 0xffffff00],EAX
// 0052fa86: INC ESI
// 0052fa87: MOV dword ptr [EBX + 0xfffffe80],EAX
// 0052fa8d: CMP ESI,EDI
// 0052fa8f: JL 0x0052fa70
//   XREF to: 0052fa70 (CONDITIONAL_JUMP)
// 0052fa91: ADD EDX,0x4
//   Label: LAB_0052fa91
// 0052fa94: CMP EDX,0x80
// 0052fa9a: JL 0x0052fa64
//   XREF to: 0052fa64 (CONDITIONAL_JUMP)
// 0052fa9c: ADD ESP,0x24
//   Label: LAB_0052fa9c
// 0052fa9f: POP EBP
// 0052faa0: POP EDI
// 0052faa1: POP ESI
// 0052faa2: POP EBX
// 0052faa3: RET
// 0052faa4: PUSH 0x2
//   Label: LAB_0052faa4
// 0052faa6: PUSH ESI
// 0052faa7: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052faac: ADD ESP,0x8
// 0052faaf: XOR EDX,EDX
// 0052fab1: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0052fab5: MOV DL,AL
// 0052fab7: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0052fabb: ADD EAX,ECX
// 0052fabd: ADD EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 0052fac1: MOV dword ptr [EAX],EDX
// 0052fac3: JMP 0x0052f935
//   XREF to: 0052f935 (UNCONDITIONAL_JUMP)
// 0052fac8: PUSH 0x6
//   Label: caseD_1
// 0052faca: PUSH ESI
// 0052facb: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052fad0: ADD ESP,0x8
// 0052fad3: PUSH 0x6
// 0052fad5: MOV dword ptr [EBX + 0x80],EAX
// 0052fadb: PUSH ESI
// 0052fadc: MOV dword ptr [EBX],EAX
// 0052fade: JMP 0x0052fa18
//   XREF to: 0052fa18 (UNCONDITIONAL_JUMP)
// 0052fae3: PUSH 0x6
//   Label: caseD_3
// 0052fae5: PUSH ESI
// 0052fae6: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052faeb: ADD ESP,0x8
// 0052faee: PUSH 0x6
// 0052faf0: PUSH ESI
// 0052faf1: MOV dword ptr [EBX],EAX
// 0052faf3: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052faf8: MOV dword ptr [EBX + 0x100],EAX
// 0052fafe: ADD ESP,0x8
// 0052fb01: MOV dword ptr [EBX + 0x80],EAX
// 0052fb07: JMP 0x0052fa26
//   XREF to: 0052fa26 (UNCONDITIONAL_JUMP)
// 0052fb0c: PUSH 0x6
//   Label: caseD_2
// 0052fb0e: PUSH ESI
// 0052fb0f: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052fb14: MOV dword ptr [EBX + 0x100],EAX
// 0052fb1a: MOV dword ptr [EBX + 0x80],EAX
// 0052fb20: ADD ESP,0x8
// 0052fb23: MOV dword ptr [EBX],EAX
// 0052fb25: JMP 0x0052fa26
//   XREF to: 0052fa26 (UNCONDITIONAL_JUMP)
// 0052fb2a: MOV dword ptr [EBX + 0x100],0x3f
//   Label: LAB_0052fb2a
// 0052fb34: MOV EAX,dword ptr [EBX + 0x100]
// 0052fb3a: MOV dword ptr [EBX + 0x80],EAX
// 0052fb40: MOV dword ptr [EBX],EAX
// 0052fb42: JMP 0x0052fa26
//   XREF to: 0052fa26 (UNCONDITIONAL_JUMP)
