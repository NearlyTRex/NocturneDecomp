// Name: core_boxactor.cpp_CBoxActor_writeDependencies_FUN_00422900
// Address: 00422900
// Address Range: [[00422900, 00422941]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_writeDependencies_FUN_00422900(CBoxActor *this_ptr,FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_boxactor_cpp_CBoxActor_writeDependencies_FUN_00422900(CBoxActor *this_ptr,FILE *file_handle)

{
  CKeyFramedModel *pCVar1;
  int skip_raw_files;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"MODELS\\%s\n",pCVar1);
  skip_raw_files = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(pCVar1,file_handle,skip_raw_files);
  return;
}
