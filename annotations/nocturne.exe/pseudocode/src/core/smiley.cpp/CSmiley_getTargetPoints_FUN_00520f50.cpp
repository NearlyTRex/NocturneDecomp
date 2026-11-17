// Name: core_smiley.cpp_CSmiley_getTargetPoints_FUN_00520f50
// Address: 00520f50
// Address Range: [[00520f50, 005210ad]]
// Convention: __cdecl
// Signature: int __cdecl core_smiley_cpp_CSmiley_getTargetPoints_FUN_00520f50(CSmiley *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_smiley_cpp_CSmiley_getTargetPoints_FUN_00520f50(CSmiley *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (this_ptr->model_variant == 3) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_30,g_INT_02da8a74);
  if (out_points_array != pCVar1) {
    out_points_array->x = pCVar1->x;
    out_points_array->y = pCVar1->y;
    out_points_array->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_24,g_INT_02da8a88);
  if (out_points_array + 1 != pCVar1) {
    out_points_array[1].x = pCVar1->x;
    out_points_array[1].y = pCVar1->y;
    out_points_array[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_48,g_INT_02da8a8c);
  if (out_points_array + 2 != pCVar1) {
    out_points_array[2].x = pCVar1->x;
    out_points_array[2].y = pCVar1->y;
    out_points_array[2].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_3c,g_INT_02da8a98);
  if (out_points_array + 3 != pCVar1) {
    out_points_array[3].x = pCVar1->x;
    out_points_array[3].y = pCVar1->y;
    out_points_array[3].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_18,g_INT_02da8aa0);
  if (out_points_array + 4 != pCVar1) {
    out_points_array[4].x = pCVar1->x;
    out_points_array[4].y = pCVar1->y;
    out_points_array[4].z = pCVar1->z;
  }
  return 5;
}
