// Name: core_filmreel.cpp_FUN_004be9b0
// Address: 004be9b0
// Address Range: [[004be9b0, 004be9f9]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be9b0()
// Globals:
//   TerminatedCString s_MODELS_s_00629b1c
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_filmreel.cpp_FUN_004be9b0(undefined4 param_1, undefined4
   param_2) */

void core_filmreel_cpp_FUN_004be9b0(void)

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
// 004be9b0: PUSH EBX
//   Label: core_filmreel.cpp_FUN_004be9b0
// 004be9b1: PUSH ESI
// 004be9b2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004be9b6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004be9ba: PUSH ESI
// 004be9bb: PUSH EBX
// 004be9bc: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004be9c1: ADD ESP,0x8
// 004be9c4: ADD EBX,0x158
// 004be9ca: PUSH EBX
// 004be9cb: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004be9d0: ADD ESP,0x4
// 004be9d3: PUSH EAX
// 004be9d4: PUSH 0x629b1c
//   XREF to: 00629b1c (DATA)
// 004be9d9: PUSH ESI
// 004be9da: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004be9df: ADD ESP,0xc
// 004be9e2: PUSH 0x0
// 004be9e4: PUSH ESI
// 004be9e5: PUSH EBX
// 004be9e6: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004be9eb: ADD ESP,0x4
// 004be9ee: PUSH EAX
// 004be9ef: CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   XREF to: 0047ed00 (UNCONDITIONAL_CALL)
// 004be9f4: ADD ESP,0xc
// 004be9f7: POP ESI
// 004be9f8: POP EBX
// 004be9f9: RET
