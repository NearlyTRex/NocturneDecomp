// Name: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
// Address: 005a07a0
// Address Range: [[005a07a0, 005a081b]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 (CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CDeformableModel * __cdecl
core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
          (CDeformableModelInstance *this_ptr)

{
  if (this_ptr->model_ptr == (CDeformableModel *)0x0) {
    if (this_ptr->model_name[0] != '\0') {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0xdd3;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Tried to do something with model %s, but modelPtr not set.  (CDeformableModelInstance::preCache not called.",this_ptr->model_name);
      return this_ptr->model_ptr;
    }
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0xdd1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModelInstance::getModelPtr - modelPtr=NULL, and no name specified.");
  }
  return this_ptr->model_ptr;
}
