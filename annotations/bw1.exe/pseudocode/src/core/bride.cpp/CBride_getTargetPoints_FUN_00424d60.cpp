// Name: core_bride.cpp_CBride_getTargetPoints_FUN_00424d60
// Address: 00424d60
// Address Range: [[00424d60, 00424e12]]
// Convention: __cdecl
// Signature: int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_00424d60(CBride *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_bride_cpp_CBride_getTargetPoints_FUN_00424d60(CBride *this_ptr,CVector3f *out_points_array)

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
  if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[8] * 4) == 0) {
    core_skeleton_cpp_FUN_00569130(pCVar1,DAT_007c53ac);
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
    core_skeleton_cpp_FUN_00569130(pCVar1,DAT_007c5388);
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
