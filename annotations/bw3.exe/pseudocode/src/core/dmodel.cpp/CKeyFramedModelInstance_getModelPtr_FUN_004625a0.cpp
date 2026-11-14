// Name: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
// Address: 004625a0
// Address Range: [[004625a0, 004625e6]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance *this_ptr)

{
  if (this_ptr->model_ptr != (CKeyFramedModel *)0x0) {
    return this_ptr->model_ptr;
  }
  _DAT_01d71de0 = "..\\core\\dmodel.cpp";
  _DAT_01d71de4 = 0x52d;
  core_main_c_FUN_004e4330("Tried to do something with model %s, but modelPtr not set.  (CKeyFramedModelInstance::preCache not called.",this_ptr->model_name);
  return this_ptr->model_ptr;
}
