// Name: core_bride.cpp_CBride_getTargetPoints_FUN_0041ed20
// Address: 0041ed20
// Address Range: [[0041ed20, 0041edd2]]
// Convention: __cdecl
// Signature: int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_0041ed20(CBride *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_0041ed20(CBride *this_ptr,CVector3f *out_points_array)

{
  CDeformableModelInstance *pCVar1;
  byte bVar2;
  float afStackY_1024 [1016];
  CVector3f CStack_3c;
  CVector3f CStack_30;
  float fStack_24;
  float afStack_20 [5];
  
  bVar2 = 0;
  pCVar1 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[8]] == 0) {
    core_skeleton_cpp_FUN_00546a90(pCVar1,DAT_007bcd00);
    CStack_30.x = fStack_24;
    *(float *)((int)&CStack_30 + (uint)bVar2 * -8 + 4) = afStack_20[(uint)bVar2 * -2];
    *(float *)((int)&CStack_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    if (out_points_array != &CStack_30) {
      out_points_array->x = CStack_30.x;
      out_points_array->y = CStack_30.y;
      out_points_array->z = CStack_30.z;
      return 1;
    }
  }
  else {
    core_skeleton_cpp_FUN_00546a90(pCVar1,DAT_007bccdc);
    CStack_3c.x = afStack_20[2];
    *(float *)((int)&CStack_3c + (uint)bVar2 * -8 + 4) = afStack_20[(uint)bVar2 * -2 + 3];
    *(float *)((int)&CStack_3c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
    if (out_points_array != &CStack_3c) {
      out_points_array->x = CStack_3c.x;
      out_points_array->y = CStack_3c.y;
      out_points_array->z = CStack_3c.z;
    }
  }
  return 1;
}
