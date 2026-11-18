// Name: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
// Address: 00547810
// Address Range: [[00547810, 0054788b]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance *this_ptr)

{
  if (this_ptr->model_ptr == (CDeformableModel *)0x0) {
    if (this_ptr->model_name[0] != '\0') {
      g_CHAR_PTR_01d046a0 = "..\\core\\skeleton.cpp";
      g_INT_01d046a4 = 0xde2;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Tried to do something with model %s, but modelPtr not set.  (CDeformableModelInstance::preCache not called.");
      return this_ptr->model_ptr;
    }
    g_CHAR_PTR_01d046a0 = "..\\core\\skeleton.cpp";
    g_INT_01d046a4 = 0xde0;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDeformableModelInstance::getModelPtr - modelPtr=NULL, and no name specified.");
  }
  return this_ptr->model_ptr;
}
