// Name: core_anvil.cpp_CAnvil_FUN_00412090
// Address: 00412090
// Address Range: [[00412090, 004120d9]]
// Convention: __cdecl
// Signature: void core_anvil.cpp_CAnvil_FUN_00412090(CAnvil * this_ptr)
// Globals:
//   TerminatedCString s_MODELS_s_00614d95
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_FUN_00412090(CAnvil *this_ptr)

{
  CKeyFramedModel *pCVar1;
  FILE *dependency_file;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(&this_ptr->base_actor,in_stack_00000008)
  ;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"MODELS\\%s\n",pCVar1);
  dependency_file = (FILE *)0x0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
            (pCVar1,dependency_file,(int)this_ptr);
  return;
}


// Assembly code:
// 00412090: PUSH EBX
//   Label: core_anvil.cpp_CAnvil_FUN_00412090
// 00412091: PUSH ESI
// 00412092: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00412096: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0041209a: PUSH ESI
// 0041209b: PUSH EBX
// 0041209c: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 004120a1: ADD ESP,0x8
// 004120a4: ADD EBX,0x158
// 004120aa: PUSH EBX
// 004120ab: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004120b0: ADD ESP,0x4
// 004120b3: PUSH EAX
// 004120b4: PUSH 0x614d95
//   XREF to: 00614d95 (DATA)
// 004120b9: PUSH ESI
// 004120ba: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004120bf: ADD ESP,0xc
// 004120c2: PUSH 0x0
// 004120c4: PUSH ESI
// 004120c5: PUSH EBX
// 004120c6: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004120cb: ADD ESP,0x4
// 004120ce: PUSH EAX
// 004120cf: CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
//   XREF to: 0047ed00 (UNCONDITIONAL_CALL)
// 004120d4: ADD ESP,0xc
// 004120d7: POP ESI
// 004120d8: POP EBX
// 004120d9: RET
