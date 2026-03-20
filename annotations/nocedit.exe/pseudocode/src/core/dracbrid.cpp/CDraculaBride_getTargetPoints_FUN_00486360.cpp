// Name: core_dracbrid.cpp_CDraculaBride_getTargetPoints_FUN_00486360
// Address: 00486360
// Address Range: [[00486360, 00486421]]
// Convention: __cdecl
// Signature: int __cdecl core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_00486360(CDraculaBride *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_dracbrid_cpp_CDraculaBride_getTargetPoints_FUN_00486360(CDraculaBride *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (this_ptr->mist_state != 0) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_24,g_DraculaBrideIndices[0]);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_18,g_DraculaBrideIndices[5]);
  if (out_points_array + 1 != pCVar2) {
    out_points_array[1].x = pCVar2->x;
    out_points_array[1].y = pCVar2->y;
    out_points_array[1].z = pCVar2->z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_30,g_DraculaBrideIndices[7]);
  if (out_points_array + 2 != pCVar2) {
    out_points_array[2].x = pCVar2->x;
    out_points_array[2].y = pCVar2->y;
    out_points_array[2].z = pCVar2->z;
  }
  return 3;
}
