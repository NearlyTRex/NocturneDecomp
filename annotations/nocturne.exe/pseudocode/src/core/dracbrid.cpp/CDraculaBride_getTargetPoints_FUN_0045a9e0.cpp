// Name: core_dracbrid.cpp_CDraculaBride_getTargetPoints_FUN_0045a9e0
// Address: 0045a9e0
// Address Range: [[0045a9e0, 0045aaa1]]
// Convention: __cdecl
// Signature: int __cdecl core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_0045a9e0(CDraculaBride *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_0045a9e0(CDraculaBride *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (this_ptr->mist_state != 0) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_24,_DAT_01b4d260);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_18,_DAT_01b4d274);
  if (out_points_array + 1 != pCVar1) {
    out_points_array[1].x = pCVar1->x;
    out_points_array[1].y = pCVar1->y;
    out_points_array[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_30,_DAT_01b4d27c);
  if (out_points_array + 2 != pCVar1) {
    out_points_array[2].x = pCVar1->x;
    out_points_array[2].y = pCVar1->y;
    out_points_array[2].z = pCVar1->z;
  }
  return 3;
}
