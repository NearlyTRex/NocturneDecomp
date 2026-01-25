// Name: core_boxactor.cpp_CBoxActor_FUN_00422900
// Address: 00422900
// Address Range: [[00422900, 00422941]]
// Convention: __cdecl
// Signature: void core_boxactor.cpp_CBoxActor_FUN_00422900(CBoxActor * this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_FUN_00422900(CBoxActor *this_ptr)

{
  CKeyFramedModel *pCVar1;
  FILE *in_stack_00000008;
  int skip_raw_files;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"MODELS\\%s\n",pCVar1);
  skip_raw_files = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
            (pCVar1,in_stack_00000008,skip_raw_files);
  return;
}
