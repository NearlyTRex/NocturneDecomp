// Name: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
// Address: 0044fd20
// Address Range: [[0044fd20, 0044fd66]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance *this_ptr)

{
  if (this_ptr->model_ptr != (CKeyFramedModel *)0x0) {
    return this_ptr->model_ptr;
  }
  g_CurrentFilename = "..\\core\\dmodel.cpp";
  g_CurrentLineNumber = 1325;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Tried to do something with model %s, but modelPtr not set.  (CKeyFramedModelInstance::preCache not called.");
  return this_ptr->model_ptr;
}
