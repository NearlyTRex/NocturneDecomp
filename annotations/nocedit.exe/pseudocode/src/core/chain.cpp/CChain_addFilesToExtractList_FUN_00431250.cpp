// Name: core_chain.cpp_CChain_addFilesToExtractList_FUN_00431250
// Address: 00431250
// Address Range: [[00431250, 0043132c]]
// Convention: unknown
// Signature: undefined core_chain.cpp_CChain_addFilesToExtractList_FUN_00431250()
// Globals:
//   TerminatedCString s_CHAINLINK_RAW_00617906
//   TerminatedCString s_ART_s_00617914
//   TerminatedCString s_core_chain_cpp_0061791c
//   TerminatedCString s_CChain_addFilesToExtract_0061792e
//   TerminatedCString s_ACT_0061795e
//   TerminatedCString s_ART_s_00617963
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 actors_other_chain.cpp_CChain_addFilesToExtractList(CChain* param_1,
   undefined4 param_2) */

void core_chain_cpp_CChain_addFilesToExtractList_FUN_00431250
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               int param_5,undefined4 param_6,FILE *param_7,undefined4 param_8,undefined4 param_9,
               FILE *param_10)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  undefined4 uStack_fc;
  undefined1 auStack_f4 [240];
  
  pcVar3 = (char *)(param_5 + 0x174);
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar3,"CHAINLINK.RAW");
  if (iVar2 == 0) {
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(param_7,"ART\\%s\n",pcVar3);
  pcVar4 = (char *)&uStack_fc;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)&uStack_fc;
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004312d1;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_004312d1;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_004312d1:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\chain.cpp";
    g_CurrentLineNumber = 600;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CChain::addFilesToExtractList - invalid texture",unaff_EBX);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar4,".ACT");
  uStack_fc = auStack_f4;
  crt_stdio_c_fprintf_FUN_005fe6d0(param_10,"ART\\%s\n");
  return;
}


// Assembly code:
// 00431250: PUSH ESI
//   Label: core_chain.cpp_CChain_addFilesToExtractList_FUN_00431250
// 00431251: SUB ESP,0x100
// 00431257: MOV ESI,dword ptr [ESP + 0x108]
//   XREF to: Stack[0x4] (READ)
// 0043125e: PUSH 0x617906
//   XREF to: 00617906 (DATA)
// 00431263: ADD ESI,0x174
// 00431269: PUSH ESI
// 0043126a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0043126f: ADD ESP,0x8
// 00431272: TEST EAX,EAX
// 00431274: JNZ 0x0043127e
//   XREF to: 0043127e (CONDITIONAL_JUMP)
// 00431276: ADD ESP,0x100
// 0043127c: POP ESI
// 0043127d: RET
// 0043127e: PUSH EDI
//   Label: LAB_0043127e
// 0043127f: PUSH ESI
// 00431280: PUSH 0x617914
//   XREF to: 00617914 (DATA)
// 00431285: MOV EDX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 0043128c: PUSH EDX
// 0043128d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00431292: ADD ESP,0xc
// 00431295: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x104] (DATA)
// 00431299: MOV DL,0x2e
// 0043129b: PUSH EDI
// 0043129c: MOV AL,byte ptr [ESI]
//   Label: LAB_0043129c
// 0043129e: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x104] (DATA)
// 004312a0: CMP AL,0x0
// 004312a2: JZ 0x004312b4
//   XREF to: 004312b4 (CONDITIONAL_JUMP)
// 004312a4: MOV AL,byte ptr [ESI + 0x1]
// 004312a7: ADD ESI,0x2
// 004312aa: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x103] (WRITE)
// 004312ad: ADD EDI,0x2
// 004312b0: CMP AL,0x0
// 004312b2: JNZ 0x0043129c
//   XREF to: 0043129c (CONDITIONAL_JUMP)
// 004312b4: POP EDI
//   Label: LAB_004312b4
// 004312b5: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x104] (DATA)
// 004312b9: MOV AL,byte ptr [ESI]
//   Label: LAB_004312b9
//   XREF to: Stack[-0x104] (DATA)
// 004312bb: CMP AL,DL
// 004312bd: JZ 0x004312d1
//   XREF to: 004312d1 (CONDITIONAL_JUMP)
// 004312bf: CMP AL,0x0
// 004312c1: JZ 0x004312cf
//   XREF to: 004312cf (CONDITIONAL_JUMP)
// 004312c3: INC ESI
// 004312c4: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x103] (DATA)
// 004312c6: CMP AL,DL
// 004312c8: JZ 0x004312d1
//   XREF to: 004312d1 (CONDITIONAL_JUMP)
// 004312ca: INC ESI
// 004312cb: CMP AL,0x0
// 004312cd: JNZ 0x004312b9
//   XREF to: 004312b9 (CONDITIONAL_JUMP)
// 004312cf: SUB ESI,ESI
//   Label: LAB_004312cf
// 004312d1: MOV EDI,ESI
//   Label: LAB_004312d1
// 004312d3: TEST ESI,ESI
// 004312d5: JNZ 0x004312fc
//   XREF to: 004312fc (CONDITIONAL_JUMP)
// 004312d7: PUSH EBX
// 004312d8: MOV ECX,0x61791c
//   XREF to: 0061791c (PARAM)
// 004312dd: MOV EBX,0x258
// 004312e2: PUSH 0x61792e
//   XREF to: 0061792e (DATA)
// 004312e7: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004312ed: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004312f3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004312f8: ADD ESP,0x4
// 004312fb: POP EBX
// 004312fc: PUSH 0x61795e
//   Label: LAB_004312fc
//   XREF to: 0061795e (DATA)
// 00431301: PUSH EDI
// 00431302: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00431307: ADD ESP,0x8
// 0043130a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x104] (DATA)
// 0043130e: PUSH EAX
// 0043130f: PUSH 0x617963
//   XREF to: 00617963 (DATA)
// 00431314: MOV ESI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 0043131b: PUSH ESI
// 0043131c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00431321: ADD ESP,0xc
// 00431324: POP EDI
// 00431325: ADD ESP,0x100
// 0043132b: POP ESI
// 0043132c: RET
