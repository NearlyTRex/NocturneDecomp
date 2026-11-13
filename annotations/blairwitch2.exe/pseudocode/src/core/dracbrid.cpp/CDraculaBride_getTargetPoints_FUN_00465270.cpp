// Name: core_dracbrid.cpp_CDraculaBride_getTargetPoints_FUN_00465270
// Address: 00465270
// Address Range: [[00465270, 0046536c]]
// Convention: __cdecl
// Signature: int __cdecl core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_00465270(CDraculaBride *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_00465270(CDraculaBride *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_103c [1014];
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  CVector3f CStack_18;
  int iStack_c;
  
  bVar1 = 0;
  if (this_ptr->mist_state != 0) {
    return 0;
  }
  iStack_c = 3;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_01ba5778,&CStack_30);
  CStack_54.x = CStack_30.x;
  *(uint *)((int)&CStack_54 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_30 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_54 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_30 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array != &CStack_54) {
    out_points_array->x = CStack_54.x;
    out_points_array->y = CStack_54.y;
    out_points_array->z = CStack_54.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_01ba578c,&CStack_24);
  CStack_18.x = CStack_24.x;
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_18 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 1 != &CStack_18) {
    out_points_array[1].x = CStack_18.x;
    out_points_array[1].y = CStack_18.y;
    out_points_array[1].z = CStack_18.z;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
            (&(this_ptr->base).base.model,_DAT_01ba5794,&CStack_3c);
  CStack_48.x = CStack_3c.x;
  *(uint *)((int)&CStack_48 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_3c + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_48 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_3c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array + 2 != &CStack_48) {
    out_points_array[2].x = CStack_48.x;
    out_points_array[2].y = CStack_48.y;
    out_points_array[2].z = CStack_48.z;
  }
  return iStack_c;
}
