// Name: core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
// Address: 00478d80
// Address Range: [[00478d80, 00478dc6]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance *this_ptr)

#include "nocturne.h"

CKeyFramedModel * __cdecl
core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance *this_ptr)

{
  if (this_ptr->model_ptr != (CKeyFramedModel *)0x0) {
    return this_ptr->model_ptr;
  }
  g_CurrentFilename = "..\\core\\dmodel.cpp";
  g_CurrentLineNumber = 0x52d;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Tried to do something with model %s, but modelPtr not set.  (CKeyFramedModelInstance::preCache not called.",this_ptr->model_name);
  return this_ptr->model_ptr;
}
