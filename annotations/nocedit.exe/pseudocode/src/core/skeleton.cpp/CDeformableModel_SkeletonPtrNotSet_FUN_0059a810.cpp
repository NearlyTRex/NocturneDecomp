// Name: core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810
// Address: 0059a810
// Address Range: [[0059a810, 0059a857]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810()
// Cross-references:
//   core_cloth.cpp_FUN_00439710 (00439710) at 00439a1f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 005968f5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c24e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058d790 (0058d790) at 0058d7ad [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e600 (0058e600) at 0058e617 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e690 (0058e690) at 0058e6a6 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_ParseSkeletonBase_FUN_0058f120 (0058f120) at 0058f136 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0 (005a16c0) at 005a16db [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820 (005a0820) at 005a082e [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_FUN_0059b640 (0059b640) at 0059b64c [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_FUN_0059b800 (0059b800) at 0059b80e [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 (0059d460) at 0059d4b5 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_0059d9e0 (0059d9e0) at 0059d9ec [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_0059dbe0 (0059dbe0) at 0059dbec [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064e7f7
//   TerminatedCString s_Tried_to_do_something_wi_0064e80c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet(CDeformableModel*
   param_1) */

undefined4
core_skeleton_cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810
          (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,int param_5
          ,int param_6)

{
  if (*(int *)(param_5 + 0x8fac) != 0) {
    return *(undefined4 *)(param_5 + 0x8fac);
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 0x2e6;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to do something with the skeleton, but skeleton ptr not set!",unaff_EBX);
  return *(undefined4 *)(param_6 + 0x8fac);
}


// Assembly code:
// 0059a810: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810
//   XREF to: Stack[0x4] (READ)
// 0059a814: CMP dword ptr [EAX + 0x8fac],0x0
// 0059a81b: JZ 0x0059a828
//   XREF to: 0059a828 (CONDITIONAL_JUMP)
// 0059a81d: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0059a821: MOV EAX,dword ptr [EAX + 0x8fac]
// 0059a827: RET
// 0059a828: PUSH EBX
//   Label: LAB_0059a828
// 0059a829: MOV ECX,0x64e7f7
//   XREF to: 0064e7f7 (PARAM)
// 0059a82e: MOV EBX,0x2e6
// 0059a833: PUSH 0x64e80c
//   XREF to: 0064e80c (DATA)
// 0059a838: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0059a83e: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0059a844: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059a849: ADD ESP,0x4
// 0059a84c: POP EBX
// 0059a84d: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0059a851: MOV EAX,dword ptr [EAX + 0x8fac]
// 0059a857: RET
