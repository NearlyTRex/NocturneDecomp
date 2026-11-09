// Name: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
// Address: 0044fd20
// Address Range: [[0044fd20, 0044fd66]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance *this_ptr)

{
  if (*(int *)&this_ptr->field_0x178 != 0) {
    return *(CKeyFramedModel **)&this_ptr->field_0x178;
  }
  _DAT_01d046a0 = "..\\core\\dmodel.cpp";
  _DAT_01d046a4 = 0x52d;
  core_main_c_FUN_004e4500("Tried to do something with model %s, but modelPtr not set.  (CKeyFramedModelInstance::preCache not called.",&this_ptr->field_0x78);
  return *(CKeyFramedModel **)&this_ptr->field_0x178;
}
