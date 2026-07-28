// Name: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
// Address: 0051e020
// Address Range: [[0051e020, 0051e09b]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance *this_ptr)

{
  if (this_ptr->model_ptr == (CDeformableModel *)0x0) {
    if (this_ptr->model_name[0] != '\0') {
      PTR_01cc4800 = "..\\core\\skeleton.cpp";
      INT_01cc4804 = 0xdd3;
      core_main_c_FUN_004c8440("Tried to do something with model %s, but modelPtr not set.  (CDeformableModelInstance::preCache not called.",this_ptr->model_name);
      return this_ptr->model_ptr;
    }
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0xdd1;
    core_main_c_FUN_004c8440("CDeformableModelInstance::getModelPtr - modelPtr=NULL, and no name specified.");
  }
  return this_ptr->model_ptr;
}
