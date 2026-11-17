// Name: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
// Address: 00468900
// Address Range: [[00468900, 00468946]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance *this_ptr)

{
  if (this_ptr->model_ptr != (CKeyFramedModel *)0x0) {
    return this_ptr->model_ptr;
  }
  g_CHAR_PTR_01d1d400 = "..\\core\\dmodel.cpp";
  g_INT_01d1d404 = 0x52d;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Tried to do something with model %s, but modelPtr not set.  (CKeyFramedModelInstance::preCache not called.");
  return this_ptr->model_ptr;
}
