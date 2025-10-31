// Name: core_battery.cpp_FUN_00418110
// Address: 00418110
// Address Range: [[00418110, 00418159]]
// Convention: unknown
// Signature: undefined core_battery.cpp_FUN_00418110()
// Globals:
//   TerminatedCString s_MODELS_s_00615a4a
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_battery.cpp_FUN_00418110(undefined4 param_1, undefined4
   param_2) */

void core_battery_cpp_FUN_00418110(void)

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
// 00418110: PUSH EBX
//   Label: core_battery.cpp_FUN_00418110
// 00418111: PUSH ESI
// 00418112: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00418116: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0041811a: PUSH ESI
// 0041811b: PUSH EBX
// 0041811c: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 00418121: ADD ESP,0x8
// 00418124: ADD EBX,0x158
// 0041812a: PUSH EBX
// 0041812b: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00418130: ADD ESP,0x4
// 00418133: PUSH EAX
// 00418134: PUSH 0x615a4a
//   XREF to: 00615a4a (DATA)
// 00418139: PUSH ESI
// 0041813a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0041813f: ADD ESP,0xc
// 00418142: PUSH 0x0
// 00418144: PUSH ESI
// 00418145: PUSH EBX
// 00418146: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0041814b: ADD ESP,0x4
// 0041814e: PUSH EAX
// 0041814f: CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   XREF to: 0047ed00 (UNCONDITIONAL_CALL)
// 00418154: ADD ESP,0xc
// 00418157: POP ESI
// 00418158: POP EBX
// 00418159: RET
