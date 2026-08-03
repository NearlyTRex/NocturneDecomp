// Name: core_boneguy.cpp_CBoneGuy_getTargetPoints_FUN_00419fc0
// Address: 00419fc0
// Address Range: [[00419fc0, 0041a0e3]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_getTargetPoints_FUN_00419fc0(CBoneGuy *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_CBoneGuy_getTargetPoints_FUN_00419fc0(CBoneGuy *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (this_ptr->blown_up != 0) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_30,DAT_00764794);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_24,DAT_007647a8);
  if (out_points_array + 1 != pCVar1) {
    out_points_array[1].x = pCVar1->x;
    out_points_array[1].y = pCVar1->y;
    out_points_array[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_18,DAT_007647ac);
  if (out_points_array + 2 != pCVar1) {
    out_points_array[2].x = pCVar1->x;
    out_points_array[2].y = pCVar1->y;
    out_points_array[2].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_3c,DAT_007647b8);
  if (out_points_array + 3 != pCVar1) {
    out_points_array[3].x = pCVar1->x;
    out_points_array[3].y = pCVar1->y;
    out_points_array[3].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_48,DAT_007647bc);
  if (out_points_array + 4 != pCVar1) {
    out_points_array[4].x = pCVar1->x;
    out_points_array[4].y = pCVar1->y;
    out_points_array[4].z = pCVar1->z;
  }
  return 5;
}
