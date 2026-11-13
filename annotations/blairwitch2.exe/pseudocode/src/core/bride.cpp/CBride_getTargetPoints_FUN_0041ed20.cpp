// Name: core_bride.cpp_CBride_getTargetPoints_FUN_0041ed20
// Address: 0041ed20
// Address Range: [[0041ed20, 0041edd2]]
// Convention: __cdecl
// Signature: int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_0041ed20(CBride *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_0041ed20(CBride *this_ptr,CVector3f *out_points_array)

{
  CDeformableModelInstance *this_ptr_00;
  byte bVar1;
  float afStackY_1024 [1016];
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  bVar1 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[8]] == 0) {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
              (this_ptr_00,DAT_007bcd00,&CStack_24);
    CStack_30.x = CStack_24.x;
    *(uint *)((int)&CStack_30 + (uint)bVar1 * -8 + 4) =
         *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + 4);
    *(uint *)((int)&CStack_30 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
         *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
    if (out_points_array != &CStack_30) {
      out_points_array->x = CStack_30.x;
      out_points_array->y = CStack_30.y;
      out_points_array->z = CStack_30.z;
      return 1;
    }
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
              (this_ptr_00,DAT_007bccdc,&CStack_18);
    CStack_3c.x = CStack_18.x;
    *(uint *)((int)&CStack_3c + (uint)bVar1 * -8 + 4) =
         *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + 4);
    *(uint *)((int)&CStack_3c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
         *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
    if (out_points_array != &CStack_3c) {
      out_points_array->x = CStack_3c.x;
      out_points_array->y = CStack_3c.y;
      out_points_array->z = CStack_3c.z;
    }
  }
  return 1;
}
