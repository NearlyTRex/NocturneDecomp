// Name: core_anvil.cpp_CAnvil_FUN_00412090
// Address: 00412090
// Address Range: [[00412090, 004120d9]]
// Convention: __cdecl
// Signature: void core_anvil.cpp_CAnvil_FUN_00412090(CAnvil * this_ptr)

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
