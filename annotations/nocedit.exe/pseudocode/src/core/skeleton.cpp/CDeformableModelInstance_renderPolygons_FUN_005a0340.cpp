// Name: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
// Address: 005a0340
// Address Range: [[005a0340, 005a03ab]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042b0a5 [UNCONDITIONAL_CALL]
//   core_morph.cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0 (0052bcb0) at 0052c8ab [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_GetPtr_RotateVerts_Render_FUN_005a0150 (005a0150) at 005a018b [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\core\skeleton.cpp_0064ee38
//   TerminatedCString s_CDeformableModelInstance_0064ee4d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_FUN_0059abf0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModelInstance_renderPolygons(undefined4
   param_1, undefined4 param_2, undefined4 param_3) */

void core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x2230) < 0) {
    g_CurrentFilename = ">..\\core\\skeleton.cpp" + 1;
    g_CurrentLineNumber = 0xd23;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModelInstance::renderPolygons called but LOD is not set!");
  }
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  core_skeleton_cpp_CDeformableModel_FUN_0059abf0();
  return;
}


// Assembly code:
// 005a0340: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
// 005a0341: PUSH EDI
// 005a0342: PUSH EBP
// 005a0343: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005a0347: CMP dword ptr [EBX + 0x2230],0x0
// 005a034e: JL 0x005a0385
//   XREF to: 005a0385 (CONDITIONAL_JUMP)
// 005a0350: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_005a0350
//   XREF to: Stack[0xc] (READ)
// 005a0354: PUSH EDI
// 005a0355: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a0359: PUSH EBP
// 005a035a: LEA EAX,[EBX + 0x21b8]
// 005a0360: PUSH EAX
// 005a0361: LEA EAX,[EBX + 0x2140]
// 005a0367: PUSH EAX
// 005a0368: MOV EAX,dword ptr [EBX + 0x2230]
// 005a036e: PUSH EAX
// 005a036f: PUSH EBX
// 005a0370: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a0375: ADD ESP,0x4
// 005a0378: PUSH EAX
// 005a0379: CALL core_skeleton.cpp_CDeformableModel_FUN_0059abf0
//   XREF to: 0059abf0 (UNCONDITIONAL_CALL)
// 005a037e: ADD ESP,0x18
// 005a0381: POP EBP
// 005a0382: POP EDI
// 005a0383: POP EBX
// 005a0384: RET
// 005a0385: PUSH ESI
//   Label: LAB_005a0385
// 005a0386: MOV ECX,0x64ee38
//   XREF to: 0064ee38 (PARAM)
// 005a038b: MOV ESI,0xd23
// 005a0390: PUSH 0x64ee4d
//   XREF to: 0064ee4d (DATA)
// 005a0395: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a039b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a03a1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a03a6: ADD ESP,0x4
// 005a03a9: POP ESI
// 005a03aa: JMP 0x005a0350
//   XREF to: 005a0350 (UNCONDITIONAL_JUMP)
