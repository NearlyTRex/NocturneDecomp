// Name: crt_string.c_strstr_FUN_005fedd0
// Address: 005fedd0
// Address Range: [[005fedd0, 005fee9e]]
// Convention: __cdecl
// Signature: char * crt_string.c_strstr_FUN_005fedd0(char * haystack_str, char * needle_str)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040fe68 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdb57 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005592c0 (005592c0) at 00559305 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c8e7 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 0059496b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_readNonEmptyLine_FUN_005895f0 (005895f0) at 0058967f [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad2ad [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_parseConfigFile_FUN_005a45c0 (005a45c0) at 005a47ad [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_trimLineAndRemoveComments_FUN_005a4530 (005a4530) at 005a453d [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x005fee62) overlaps instruction at (ram,0x005fee60)
    */

char * __cdecl crt_string_c_strstr_FUN_005fedd0(char *haystack_str,char *needle_str)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  
  cVar1 = *needle_str;
  if (cVar1 != '\0') {
    if (needle_str[1] == '\0') {
      do {
        if (*haystack_str == cVar1) {
          return haystack_str;
        }
        if (*haystack_str == '\0') {
          return (char *)0x0;
        }
        cVar2 = haystack_str[1];
        if (cVar2 == cVar1) {
          return haystack_str + 1;
        }
        haystack_str = haystack_str + 2;
      } while (cVar2 != '\0');
      return (char *)0x0;
    }
    pcVar4 = (char *)0xffffffff;
    bVar12 = true;
    pcVar6 = haystack_str;
    do {
      pcVar8 = pcVar6;
      if (pcVar4 == (char *)0x0) break;
      pcVar4 = pcVar4 + -1;
      pcVar8 = pcVar6 + 1;
      bVar12 = *pcVar6 == '\0';
      pcVar6 = pcVar8;
    } while (!bVar12);
    if (!bVar12) {
      pcVar8 = pcVar4;
    }
    uVar5 = 0xffffffff;
    pcVar6 = needle_str;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar6 = (char *)(~uVar5 - 1);
    while( true ) {
      pcVar4 = pcVar8 + (-1 - (int)haystack_str);
      bVar12 = pcVar4 == pcVar6;
      if (pcVar4 < pcVar6) break;
      if (pcVar4 == (char *)0x0) {
LAB_005fee60_2:
        haystack_str = pcVar4;
      }
      else {
        do {
          pcVar9 = haystack_str;
          if (pcVar4 == (char *)0x0) break;
          pcVar4 = pcVar4 + -1;
          pcVar9 = haystack_str + 1;
          bVar12 = *needle_str == *haystack_str;
          haystack_str = pcVar9;
        } while (!bVar12);
        haystack_str = pcVar9;
        if (!bVar12) goto LAB_005fee60_2;
      }
      pbVar10 = (byte *)(haystack_str + -1);
      if (pbVar10 == (byte *)0x0) break;
      bVar12 = false;
      iVar3 = 0;
      bVar13 = true;
      pcVar4 = pcVar6;
      pbVar7 = pbVar10;
      pbVar11 = (byte *)needle_str;
      do {
        if (pcVar4 == (char *)0x0) break;
        pcVar4 = pcVar4 + -1;
        bVar12 = *pbVar7 < *pbVar11;
        bVar13 = *pbVar7 == *pbVar11;
        pbVar7 = pbVar7 + 1;
        pbVar11 = pbVar11 + 1;
      } while (bVar13);
      if (!bVar13) {
        iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (iVar3 == 0) {
        return (char *)pbVar10;
      }
    }
    haystack_str = (char *)0x0;
  }
  return haystack_str;
}


// Assembly code:
// 005fedd0: PUSH EBX
//   Label: crt_string.c_strstr_FUN_005fedd0
// 005fedd1: PUSH ESI
// 005fedd2: PUSH EDI
// 005fedd3: PUSH EBP
// 005fedd4: SUB ESP,0x4
// 005fedd7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005feddb: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005feddf: MOV AH,byte ptr [EBX]
// 005fede1: TEST AH,AH
// 005fede3: JNZ 0x005fedec
//   XREF to: 005fedec (CONDITIONAL_JUMP)
// 005fede5: MOV EAX,ESI
// 005fede7: JMP 0x005fee97
//   XREF to: 005fee97 (UNCONDITIONAL_JUMP)
// 005fedec: CMP byte ptr [EBX + 0x1],0x0
//   Label: LAB_005fedec
// 005fedf0: JNZ 0x005fee16
//   XREF to: 005fee16 (CONDITIONAL_JUMP)
// 005fedf2: MOV DL,AH
// 005fedf4: MOV AL,byte ptr [ESI]
//   Label: LAB_005fedf4
// 005fedf6: CMP AL,DL
// 005fedf8: JZ 0x005fee0c
//   XREF to: 005fee0c (CONDITIONAL_JUMP)
// 005fedfa: CMP AL,0x0
// 005fedfc: JZ 0x005fee0a
//   XREF to: 005fee0a (CONDITIONAL_JUMP)
// 005fedfe: INC ESI
// 005fedff: MOV AL,byte ptr [ESI]
// 005fee01: CMP AL,DL
// 005fee03: JZ 0x005fee0c
//   XREF to: 005fee0c (CONDITIONAL_JUMP)
// 005fee05: INC ESI
// 005fee06: CMP AL,0x0
// 005fee08: JNZ 0x005fedf4
//   XREF to: 005fedf4 (CONDITIONAL_JUMP)
// 005fee0a: SUB ESI,ESI
//   Label: LAB_005fee0a
// 005fee0c: MOV EAX,ESI
//   Label: LAB_005fee0c
// 005fee0e: ADD ESP,0x4
// 005fee11: POP EBP
// 005fee12: POP EDI
// 005fee13: POP ESI
// 005fee14: POP EBX
// 005fee15: RET
// 005fee16: MOV ECX,0xffffffff
//   Label: LAB_005fee16
// 005fee1b: MOV EDI,ESI
// 005fee1d: XOR AL,AL
// 005fee1f: PUSH ES
// 005fee20: JECXZ 0x005fee2d
//   XREF to: 005fee2d (CONDITIONAL_JUMP)
// 005fee22: MOV DX,DS
// 005fee24: MOV ES,DX
// 005fee26: SCASB.REPNE ES:EDI
// 005fee28: JNZ 0x005fee2d
//   XREF to: 005fee2d (CONDITIONAL_JUMP)
// 005fee2a: DEC EDI
// 005fee2b: TEST AX,0xcf89
// 005fee2f: POP ES
// 005fee30: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x14] (DATA)
// 005fee33: MOV EDI,EBX
// 005fee35: PUSH ES
// 005fee36: MOV AX,DS
// 005fee38: MOV ES,AX
// 005fee3a: SUB ECX,ECX
// 005fee3c: DEC ECX
// 005fee3d: XOR EAX,EAX
// 005fee3f: SCASB.REPNE ES:EDI
// 005fee41: NOT ECX
// 005fee43: DEC ECX
// 005fee44: POP ES
// 005fee45: MOV EBP,ECX
// 005fee47: MOV ECX,dword ptr [ESP]
//   Label: LAB_005fee47
//   XREF to: Stack[-0x14] (DATA)
// 005fee4a: SUB ECX,ESI
// 005fee4c: CMP ECX,EBP
// 005fee4e: JC 0x005fee95
//   XREF to: 005fee95 (CONDITIONAL_JUMP)
// 005fee50: MOV EDI,ESI
// 005fee52: MOV AL,byte ptr [EBX]
// 005fee54: PUSH ES
// 005fee55: JECXZ 0x005fee62
//   XREF to: 005fee62 (CONDITIONAL_JUMP)
// 005fee57: MOV DX,DS
// 005fee59: MOV ES,DX
// 005fee5b: SCASB.REPNE ES:EDI
// 005fee5d: JNZ 0x005fee62
//   XREF to: 005fee62 (CONDITIONAL_JUMP)
// 005fee5f: DEC EDI
// 005fee60: TEST AX,0xcf89
// 005fee64: POP ES
// 005fee65: MOV EDX,EDI
// 005fee67: TEST EDI,EDI
// 005fee69: JZ 0x005fee95
//   XREF to: 005fee95 (CONDITIONAL_JUMP)
// 005fee6b: MOV ECX,EBP
// 005fee6d: MOV EDI,EBX
// 005fee6f: MOV ESI,EDX
// 005fee71: PUSH ES
// 005fee72: MOV AX,DS
// 005fee74: MOV ES,AX
// 005fee76: XOR EAX,EAX
// 005fee78: CMPSB.REPE ES:EDI,ESI
// 005fee7a: JZ 0x005fee81
//   XREF to: 005fee81 (CONDITIONAL_JUMP)
// 005fee7c: SBB EAX,EAX
// 005fee7e: SBB EAX,-0x1
// 005fee81: POP ES
//   Label: LAB_005fee81
// 005fee82: TEST EAX,EAX
// 005fee84: JNZ 0x005fee90
//   XREF to: 005fee90 (CONDITIONAL_JUMP)
// 005fee86: MOV EAX,EDX
// 005fee88: ADD ESP,0x4
// 005fee8b: POP EBP
// 005fee8c: POP EDI
// 005fee8d: POP ESI
// 005fee8e: POP EBX
// 005fee8f: RET
// 005fee90: LEA ESI,[EDX + 0x1]
//   Label: LAB_005fee90
// 005fee93: JMP 0x005fee47
//   XREF to: 005fee47 (UNCONDITIONAL_JUMP)
// 005fee95: XOR EAX,EAX
//   Label: LAB_005fee95
// 005fee97: ADD ESP,0x4
//   Label: LAB_005fee97
// 005fee9a: POP EBP
// 005fee9b: POP EDI
// 005fee9c: POP ESI
// 005fee9d: POP EBX
// 005fee9e: RET
