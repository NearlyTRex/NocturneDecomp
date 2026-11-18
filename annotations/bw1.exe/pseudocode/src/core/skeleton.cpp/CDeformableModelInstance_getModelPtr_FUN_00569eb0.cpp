// Name: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
// Address: 00569eb0
// Address Range: [[00569eb0, 00569f2b]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance *this_ptr)

{
  if (this_ptr->model_ptr == (CDeformableModel *)0x0) {
    if (this_ptr->model_name[0] != '\0') {
      g_CHAR_PTR_01d1d400 = "..\\core\\skeleton.cpp";
      g_INT_01d1d404 = 0xdf2;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Tried to do something with model %s, but modelPtr not set.  (CDeformableModelInstance::preCache not called.");
      return this_ptr->model_ptr;
    }
    g_CHAR_PTR_01d1d400 = "..\\core\\skeleton.cpp";
    g_INT_01d1d404 = 0xdf0;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDeformableModelInstance::getModelPtr - modelPtr=NULL, and no name specified.");
  }
  return this_ptr->model_ptr;
}
