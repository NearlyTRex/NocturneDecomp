// Name: core_crate.cpp_FUN_00448b60
// Address: 00448b60
// Address Range: [[00448b60, 00448ba9]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448b60()
// Globals:
//   TerminatedCString s_MODELS_s_00619b4f
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_crate.cpp_FUN_00448b60(undefined4 param_1, undefined4 param_2)
    */

void core_crate_cpp_FUN_00448b60(void)

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
// 00448b60: PUSH EBX
//   Label: core_crate.cpp_FUN_00448b60
// 00448b61: PUSH ESI
// 00448b62: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00448b66: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00448b6a: PUSH ESI
// 00448b6b: PUSH EBX
// 00448b6c: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00448b71: ADD ESP,0x8
// 00448b74: ADD EBX,0x158
// 00448b7a: PUSH EBX
// 00448b7b: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00448b80: ADD ESP,0x4
// 00448b83: PUSH EAX
// 00448b84: PUSH 0x619b4f
//   XREF to: 00619b4f (DATA)
// 00448b89: PUSH ESI
// 00448b8a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00448b8f: ADD ESP,0xc
// 00448b92: PUSH 0x0
// 00448b94: PUSH ESI
// 00448b95: PUSH EBX
// 00448b96: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00448b9b: ADD ESP,0x4
// 00448b9e: PUSH EAX
// 00448b9f: CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   XREF to: 0047ed00 (UNCONDITIONAL_CALL)
// 00448ba4: ADD ESP,0xc
// 00448ba7: POP ESI
// 00448ba8: POP EBX
// 00448ba9: RET
