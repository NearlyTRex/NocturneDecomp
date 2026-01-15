// Name: core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
// Address: 0047edd0
// Address Range: [[0047edd0, 0047ee26]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
          (CKeyFramedModelInstance *this_ptr,FILE *file_handle)

{
  CKeyFramedModel *pCVar1;
  int skip_raw_files;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(this_ptr);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
  if (pCVar1->poly_count < 1) {
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"MODELS\\%s\n",this_ptr->model_name);
  skip_raw_files = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(pCVar1,file_handle,skip_raw_files);
  return;
}
