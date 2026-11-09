// Name: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
// Address: 005675a0
// Address Range: [[005675a0, 005675e2]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance *this_ptr)

{
  core_skeleton_cpp_FUN_00567620
            (this_ptr,*(uint *)&this_ptr->field_0x4,*(uint *)&this_ptr->field_0x8,
             0xffffffff);
  if (*(float *)&this_ptr->field_0x14 <= (float)_DAT_005f24c9) {
    return;
  }
  core_skeleton_cpp_FUN_00568100
            (this_ptr,*(uint *)&this_ptr->field_0x18,*(uint *)&this_ptr->field_0x1c,
             *(uint *)&this_ptr->field_0x14,0xffffffff,core_skeleton_cpp_FUN_00567360);
  return;
}
