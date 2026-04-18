// Name: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
// Address: 00478dd0
// MANUAL RECONSTRUCTION
// Address Range: [[00478dd0, 00478e0c]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance *this_ptr,char *filename)

{
  strcpy(this_ptr->model_name,filename);
  this_ptr->model_ptr = (CKeyFramedModel *)0x0;
  core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00478d00(this_ptr);
  return;
}
