// Name: core_smiley.cpp_CSmiley_getTargetPoints_FUN_005a3690
// Address: 005a3690
// Address Range: [[005a3690, 005a37ed]]
// Convention: __cdecl
// Signature: int __cdecl core_smiley_cpp_CSmiley_getTargetPoints_FUN_005a3690(CSmiley *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_smiley_cpp_CSmiley_getTargetPoints_FUN_005a3690(CSmiley *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (this_ptr->model_variant == 3) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_30,g_SmileyIndices[0]);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_24,g_SmileyIndices[5]);
  if (out_points_array + 1 != pCVar2) {
    out_points_array[1].x = pCVar2->x;
    out_points_array[1].y = pCVar2->y;
    out_points_array[1].z = pCVar2->z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_48,g_SmileyIndices[6]);
  if (out_points_array + 2 != pCVar2) {
    out_points_array[2].x = pCVar2->x;
    out_points_array[2].y = pCVar2->y;
    out_points_array[2].z = pCVar2->z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_3c,g_SmileyIndices[9]);
  if (out_points_array + 3 != pCVar2) {
    out_points_array[3].x = pCVar2->x;
    out_points_array[3].y = pCVar2->y;
    out_points_array[3].z = pCVar2->z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_18,g_SmileyIndices[0xb]);
  if (out_points_array + 4 != pCVar2) {
    out_points_array[4].x = pCVar2->x;
    out_points_array[4].y = pCVar2->y;
    out_points_array[4].z = pCVar2->z;
  }
  return 5;
}
