// Name: core_flamecan.cpp_FUN_004cb750
// Address: 004cb750
// Address Range: [[004cb750, 004cb799]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb750()
// Globals:
//   TerminatedCString s_MODELS_s_0062a360
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004cb750(undefined4 param_1, undefined4 param_2)
    */

void core_flamecan_cpp_FUN_004cb750(void)

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
// 004cb750: PUSH EBX
//   Label: core_flamecan.cpp_FUN_004cb750
// 004cb751: PUSH ESI
// 004cb752: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004cb756: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004cb75a: PUSH ESI
// 004cb75b: PUSH EBX
// 004cb75c: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004cb761: ADD ESP,0x8
// 004cb764: ADD EBX,0x158
// 004cb76a: PUSH EBX
// 004cb76b: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004cb770: ADD ESP,0x4
// 004cb773: PUSH EAX
// 004cb774: PUSH 0x62a360
//   XREF to: 0062a360 (DATA)
// 004cb779: PUSH ESI
// 004cb77a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004cb77f: ADD ESP,0xc
// 004cb782: PUSH 0x0
// 004cb784: PUSH ESI
// 004cb785: PUSH EBX
// 004cb786: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004cb78b: ADD ESP,0x4
// 004cb78e: PUSH EAX
// 004cb78f: CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   XREF to: 0047ed00 (UNCONDITIONAL_CALL)
// 004cb794: ADD ESP,0xc
// 004cb797: POP ESI
// 004cb798: POP EBX
// 004cb799: RET
