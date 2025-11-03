// Name: core_dmodel.cpp_loadModel_FUN_00478c00
// Address: 00478c00
// Address Range: [[00478c00, 00478ca1]]
// Convention: __cdecl
// Signature: CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00478c00(char * filename)
// Cross-references:
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443328 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 (00478d60) at 00478d68 [UNCONDITIONAL_CALL]
//   core_fire.cpp_loadDynamiteAssets_FUN_004c41d0 (004c41d0) at 004c41d5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0061f924
//   TerminatedCString s_Can_t_load_s_because_key_0061f937
//   int g_KeyframeModelCount
//   CKeyFramedModel[256] g_CKeyFramedModelPool
//   undefined4 DAT_026acb5c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_00478c00(char *filename)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_KeyframeModelCount) {
    pCVar2 = g_CKeyFramedModelPool;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(pCVar2->model_filename,filename);
      if (iVar1 == 0) {
        return pCVar2;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar3 < g_KeyframeModelCount);
  }
  if (0xff < g_KeyframeModelCount) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x4cd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't load %s because keyFrame model manager is full.  (Size is %d)",filename,0x100)
    ;
  }
  pCVar2 = g_CKeyFramedModelPool + g_KeyframeModelCount;
  g_KeyframeModelCount = g_KeyframeModelCount + 1;
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(pCVar2,filename);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00478190(pCVar2);
  return pCVar2;
}


// Assembly code:
// 00478c00: PUSH EBX
//   Label: core_dmodel.cpp_loadModel_FUN_00478c00
// 00478c01: PUSH ESI
// 00478c02: PUSH EDI
// 00478c03: PUSH EBP
// 00478c04: MOV EBP,ESP
// 00478c06: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00478c09: MOV EDX,dword ptr [0x026a7480]
//   XREF to: 026a7480 (READ)
// 00478c0f: XOR ESI,ESI
// 00478c11: TEST EDX,EDX
// 00478c13: JLE 0x00478c39
//   XREF to: 00478c39 (CONDITIONAL_JUMP)
// 00478c15: MOV EBX,0x26a7484
//   XREF to: 026a7484 (DATA)
// 00478c1a: PUSH EDI
//   Label: LAB_00478c1a
// 00478c1b: PUSH EBX
//   XREF to: 026a7484 (DATA)
//   XREF to: 026acb5c (DATA)
// 00478c1c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00478c21: ADD ESP,0x8
// 00478c24: TEST EAX,EAX
// 00478c26: JZ 0x00478c9b
//   XREF to: 00478c9b (CONDITIONAL_JUMP)
// 00478c28: MOV ECX,dword ptr [0x026a7480]
//   XREF to: 026a7480 (READ)
// 00478c2e: INC ESI
// 00478c2f: ADD EBX,0x56d8
// 00478c35: CMP ESI,ECX
// 00478c37: JL 0x00478c1a
//   XREF to: 00478c1a (CONDITIONAL_JUMP)
// 00478c39: CMP dword ptr [0x026a7480],0x100
//   Label: LAB_00478c39
//   XREF to: 026a7480 (READ)
// 00478c43: JL 0x00478c6d
//   XREF to: 00478c6d (CONDITIONAL_JUMP)
// 00478c45: PUSH 0x100
// 00478c4a: PUSH EDI
// 00478c4b: MOV ESI,0x61f924
//   XREF to: 0061f924 (DATA)
// 00478c50: MOV EAX,0x4cd
// 00478c55: PUSH 0x61f937
//   XREF to: 0061f937 (DATA)
// 00478c5a: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00478c60: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00478c65: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00478c6a: ADD ESP,0xc
// 00478c6d: MOV EDX,dword ptr [0x026a7480]
//   Label: LAB_00478c6d
//   XREF to: 026a7480 (READ)
// 00478c73: IMUL EBX,EDX,0x56d8
// 00478c79: PUSH EDI
// 00478c7a: ADD EBX,0x26a7484
//   XREF to: 026a7484 (DATA)
// 00478c80: LEA ECX,[EDX + 0x1]
// 00478c83: PUSH EBX
// 00478c84: MOV dword ptr [0x026a7480],ECX
//   XREF to: 026a7480 (WRITE)
// 00478c8a: CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   XREF to: 00476db0 (UNCONDITIONAL_CALL)
// 00478c8f: ADD ESP,0x8
// 00478c92: PUSH EBX
// 00478c93: CALL core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
//   XREF to: 00478190 (UNCONDITIONAL_CALL)
// 00478c98: ADD ESP,0x4
// 00478c9b: MOV EAX,EBX
//   Label: LAB_00478c9b
//   XREF to: 026a7484 (DATA)
// 00478c9d: POP EBP
// 00478c9e: POP EDI
// 00478c9f: POP ESI
// 00478ca0: POP EBX
// 00478ca1: RET
