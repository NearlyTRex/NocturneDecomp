// Name: core_curtain.cpp_FindCurtainTextures_FUN_0044b960
// Address: 0044b960
// Address Range: [[0044b960, 0044ba2f]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FindCurtainTextures_FUN_0044b960()
// Globals:
//   TerminatedCString s_ART_s_00619e8b
//   TerminatedCString s_core_curtain_cpp_00619e93
//   TerminatedCString s_Cannot_find_curtain_text_00619ea7
//   undefined1 DAT_00619ecd
//   undefined1 DAT_00619ece
//   undefined1 DAT_00619ecf
//   undefined1 DAT_00619ed0
//   TerminatedCString s_ART_s_00619ed2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_curtain.cpp_FindCurtainTextures(undefined4 param_1, undefined4
   param_2) */

void core_curtain_cpp_FindCurtainTextures_FUN_0044b960
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               int param_5,FILE *param_6,undefined4 param_7,FILE *param_8)

{
  char cVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uStack_104;
  undefined1 auStack_100 [248];
  
  pcVar2 = (char *)(param_5 + 0x16c);
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"ART\\%s\n",pcVar2);
  pcVar4 = (char *)&uStack_104;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    pcVar3 = (char *)&uStack_104;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = (char *)&uStack_104;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_0044b9c3;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_0044b9c3;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_0044b9c3:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\curtain.cpp";
    g_CurrentLineNumber = 0x438;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot find curtain texture extension",unaff_EBX);
  }
  pcVar2 = &DAT_00619ecd;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  uStack_104 = auStack_100;
  crt_stdio_c_fprintf_FUN_005fe6d0(param_8,"ART\\%s\n");
  return;
}


// Assembly code:
// 0044b960: PUSH ESI
//   Label: core_curtain.cpp_FindCurtainTextures_FUN_0044b960
// 0044b961: PUSH EDI
// 0044b962: SUB ESP,0x100
// 0044b968: MOV ESI,dword ptr [ESP + 0x10c]
//   XREF to: Stack[0x4] (READ)
// 0044b96f: ADD ESI,0x16c
// 0044b975: PUSH ESI
// 0044b976: PUSH 0x619e8b
//   XREF to: 00619e8b (DATA)
// 0044b97b: MOV EDX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 0044b982: PUSH EDX
// 0044b983: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0044b988: ADD ESP,0xc
// 0044b98b: MOV EDI,ESP
// 0044b98d: MOV DL,0x2e
// 0044b98f: PUSH EDI
// 0044b990: MOV AL,byte ptr [ESI]
//   Label: LAB_0044b990
// 0044b992: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x108] (DATA)
// 0044b994: CMP AL,0x0
// 0044b996: JZ 0x0044b9a8
//   XREF to: 0044b9a8 (CONDITIONAL_JUMP)
// 0044b998: MOV AL,byte ptr [ESI + 0x1]
// 0044b99b: ADD ESI,0x2
// 0044b99e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x107] (WRITE)
// 0044b9a1: ADD EDI,0x2
// 0044b9a4: CMP AL,0x0
// 0044b9a6: JNZ 0x0044b990
//   XREF to: 0044b990 (CONDITIONAL_JUMP)
// 0044b9a8: POP EDI
//   Label: LAB_0044b9a8
// 0044b9a9: MOV ESI,ESP
// 0044b9ab: MOV AL,byte ptr [ESI]
//   Label: LAB_0044b9ab
//   XREF to: Stack[-0x108] (DATA)
// 0044b9ad: CMP AL,DL
// 0044b9af: JZ 0x0044b9c3
//   XREF to: 0044b9c3 (CONDITIONAL_JUMP)
// 0044b9b1: CMP AL,0x0
// 0044b9b3: JZ 0x0044b9c1
//   XREF to: 0044b9c1 (CONDITIONAL_JUMP)
// 0044b9b5: INC ESI
// 0044b9b6: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x107] (DATA)
// 0044b9b8: CMP AL,DL
// 0044b9ba: JZ 0x0044b9c3
//   XREF to: 0044b9c3 (CONDITIONAL_JUMP)
// 0044b9bc: INC ESI
// 0044b9bd: CMP AL,0x0
// 0044b9bf: JNZ 0x0044b9ab
//   XREF to: 0044b9ab (CONDITIONAL_JUMP)
// 0044b9c1: SUB ESI,ESI
//   Label: LAB_0044b9c1
// 0044b9c3: MOV EDI,ESI
//   Label: LAB_0044b9c3
// 0044b9c5: TEST ESI,ESI
// 0044b9c7: JZ 0x0044ba09
//   XREF to: 0044ba09 (CONDITIONAL_JUMP)
// 0044b9c9: MOV ESI,0x619ecd
//   Label: LAB_0044b9c9
//   XREF to: 00619ecd (DATA)
// 0044b9ce: PUSH EDI
// 0044b9cf: MOV AL,byte ptr [ESI]
//   Label: LAB_0044b9cf
//   XREF to: 00619ecd (READ)
//   XREF to: 00619ecf (READ)
// 0044b9d1: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x105] (DATA)
// 0044b9d3: CMP AL,0x0
// 0044b9d5: JZ 0x0044b9e7
//   XREF to: 0044b9e7 (CONDITIONAL_JUMP)
// 0044b9d7: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00619ece (READ)
//   XREF to: 00619ed0 (READ)
// 0044b9da: ADD ESI,0x2
// 0044b9dd: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x105] (WRITE)
// 0044b9e0: ADD EDI,0x2
// 0044b9e3: CMP AL,0x0
// 0044b9e5: JNZ 0x0044b9cf
//   XREF to: 0044b9cf (CONDITIONAL_JUMP)
// 0044b9e7: POP EDI
//   Label: LAB_0044b9e7
// 0044b9e8: MOV ESI,ESP
// 0044b9ea: PUSH ESI
// 0044b9eb: PUSH 0x619ed2
//   XREF to: 00619ed2 (DATA)
// 0044b9f0: MOV ESI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 0044b9f7: PUSH ESI
// 0044b9f8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0044b9fd: ADD ESP,0xc
// 0044ba00: ADD ESP,0x100
// 0044ba06: POP EDI
// 0044ba07: POP ESI
// 0044ba08: RET
// 0044ba09: PUSH EBX
//   Label: LAB_0044ba09
// 0044ba0a: MOV ECX,0x619e93
//   XREF to: 00619e93 (PARAM)
// 0044ba0f: MOV EBX,0x438
// 0044ba14: PUSH 0x619ea7
//   XREF to: 00619ea7 (DATA)
// 0044ba19: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0044ba1f: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0044ba25: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0044ba2a: ADD ESP,0x4
// 0044ba2d: POP EBX
// 0044ba2e: JMP 0x0044b9c9
//   XREF to: 0044b9c9 (UNCONDITIONAL_JUMP)
