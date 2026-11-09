// Name: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
// Address: 0054c130
// Address Range: [[0054c130, 0054c172]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance *this_ptr)

{
  core_skeleton_cpp_FUN_0054c1b0
            (this_ptr,*(uint *)&this_ptr->field_0x4,*(uint *)&this_ptr->field_0x8,
             0xffffffff);
  if (*(float *)&this_ptr->field_0x14 <= (float)_DAT_005d1fcc) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
            (this_ptr,*(int *)&this_ptr->field_0x18,*(float *)&this_ptr->field_0x1c,
             *(float *)&this_ptr->field_0x14,-1,core_skeleton_cpp_FUN_0054bef0);
  return;
}
