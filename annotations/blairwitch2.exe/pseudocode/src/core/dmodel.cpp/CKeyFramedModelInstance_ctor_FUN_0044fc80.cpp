// Name: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
// Address: 0044fc80
// Address Range: [[0044fc80, 0044fc9f]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance *this_ptr)

{
  this_ptr->model_name[0] = '\0';
  this_ptr->model_ptr = (CKeyFramedModel *)0x0;
  core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_0044fca0(this_ptr);
  return this_ptr;
}
