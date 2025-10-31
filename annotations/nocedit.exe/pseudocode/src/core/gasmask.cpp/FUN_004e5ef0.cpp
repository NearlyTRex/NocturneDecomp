// Name: core_gasmask.cpp_FUN_004e5ef0
// Address: 004e5ef0
// Address Range: [[004e5ef0, 004e5f39]]
// Convention: unknown
// Signature: undefined core_gasmask.cpp_FUN_004e5ef0()
// Globals:
//   TerminatedCString s_MODELS_s_0062dad7
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_gasmask.cpp_FUN_004e5ef0(undefined4 param_1, undefined4
   param_2) */

void core_gasmask_cpp_FUN_004e5ef0(void)

{
  CKeyFramedModel *pCVar1;
  FILE *dependency_file;
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"MODELS\\%s\n",pCVar1);
  dependency_file = (FILE *)0x0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
            (pCVar1,dependency_file,(int)in_stack_00000004);
  return;
}


// Assembly code:
// 004e5ef0: PUSH EBX
//   Label: core_gasmask.cpp_FUN_004e5ef0
// 004e5ef1: PUSH ESI
// 004e5ef2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004e5ef6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004e5efa: PUSH ESI
// 004e5efb: PUSH EBX
// 004e5efc: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004e5f01: ADD ESP,0x8
// 004e5f04: ADD EBX,0x158
// 004e5f0a: PUSH EBX
// 004e5f0b: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004e5f10: ADD ESP,0x4
// 004e5f13: PUSH EAX
// 004e5f14: PUSH 0x62dad7
//   XREF to: 0062dad7 (DATA)
// 004e5f19: PUSH ESI
// 004e5f1a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004e5f1f: ADD ESP,0xc
// 004e5f22: PUSH 0x0
// 004e5f24: PUSH ESI
// 004e5f25: PUSH EBX
// 004e5f26: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004e5f2b: ADD ESP,0x4
// 004e5f2e: PUSH EAX
// 004e5f2f: CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   XREF to: 0047ed00 (UNCONDITIONAL_CALL)
// 004e5f34: ADD ESP,0xc
// 004e5f37: POP ESI
// 004e5f38: POP EBX
// 004e5f39: RET
