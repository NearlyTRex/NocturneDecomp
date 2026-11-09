// Name: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
// Address: 00547810
// Address Range: [[00547810, 0054788b]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance *this_ptr)

{
  if (*(int *)&this_ptr->field_0x22b0 == 0) {
    if (this_ptr->field_0x2260 != '\0') {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0xde2;
      core_main_c_FUN_004e4500("Tried to do something with model %s, but modelPtr not set.  (CDeformableModelInstance::preCache not called.",&this_ptr->field_0x2260);
      return *(CDeformableModel **)&this_ptr->field_0x22b0;
    }
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0xde0;
    core_main_c_FUN_004e4500("CDeformableModelInstance::getModelPtr - modelPtr=NULL, and no name specified.");
  }
  return *(CDeformableModel **)&this_ptr->field_0x22b0;
}
