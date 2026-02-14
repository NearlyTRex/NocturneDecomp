// Name: core_anvil.cpp_CAnvil_addFilesToExtract_FUN_00412090
// Address: 00412090
// Address Range: [[00412090, 004120d9]]
// Convention: __cdecl
// Signature: void __cdecl core_anvil_cpp_CAnvil_addFilesToExtract_FUN_00412090(CAnvil *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_anvil_cpp_CAnvil_addFilesToExtract_FUN_00412090(CAnvil *this_ptr,_FILE *file_handle)

{
  CKeyFramedModel *pCVar1;
  int skip_raw_files;
  
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(&this_ptr->base,file_handle);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  _fprintf(file_handle,"MODELS\\%s\n",pCVar1);
  skip_raw_files = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  core_dmodel_cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00(pCVar1,file_handle,skip_raw_files);
  return;
}
