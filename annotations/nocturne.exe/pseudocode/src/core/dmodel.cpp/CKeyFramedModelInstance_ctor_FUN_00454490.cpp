// Name: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
// Address: 00454490
// Address Range: [[00454490, 004544af]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance *this_ptr)

{
  this_ptr->model_name[0] = '\0';
  this_ptr->model_ptr = (CKeyFramedModel *)0x0;
  core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_004544b0(this_ptr);
  return this_ptr;
}
