// Name: core_dracbrid.cpp_CDraculaBride_getTargetPoints_FUN_0047d790
// Address: 0047d790
// Address Range: [[0047d790, 0047d88c]]
// Convention: __cdecl
// Signature: int __cdecl core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_0047d790(CDraculaBride *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_0047d790(CDraculaBride *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_103c [1014];
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float afStack_38 [5];
  float fStack_24;
  CVector3f CStack_18;
  int iStack_c;
  
  bVar1 = 0;
  if (this_ptr->mist_state != 0) {
    return 0;
  }
  iStack_c = 3;
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01bc0d34);
  CStack_54.x = afStack_38[2];
  *(float *)((int)&CStack_54 + (uint)bVar1 * -8 + 4) = afStack_38[(uint)bVar1 * -2 + 3];
  *(float *)((int)&CStack_54 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  if (out_points_array != &CStack_54) {
    out_points_array->x = CStack_54.x;
    out_points_array->y = CStack_54.y;
    out_points_array->z = CStack_54.z;
  }
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01bc0d48);
  CStack_18.x = fStack_24;
  *(float *)((int)&CStack_18 + (uint)bVar1 * -8 + 4) = afStack_38[(uint)bVar1 * -2 + 6];
  *(float *)((int)&CStack_18 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7];
  if (out_points_array + 1 != &CStack_18) {
    out_points_array[1].x = CStack_18.x;
    out_points_array[1].y = CStack_18.y;
    out_points_array[1].z = CStack_18.z;
  }
  core_skeleton_cpp_FUN_00569130(&(this_ptr->base).base.model,_DAT_01bc0d50);
  CStack_48.x = fStack_3c;
  *(float *)((int)&CStack_48 + (uint)bVar1 * -8 + 4) = afStack_38[(uint)bVar1 * -2];
  *(float *)((int)&CStack_48 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (out_points_array + 2 != &CStack_48) {
    out_points_array[2].x = CStack_48.x;
    out_points_array[2].y = CStack_48.y;
    out_points_array[2].z = CStack_48.z;
  }
  return iStack_c;
}
