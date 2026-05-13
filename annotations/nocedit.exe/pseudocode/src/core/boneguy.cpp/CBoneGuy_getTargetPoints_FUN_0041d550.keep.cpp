// Name: core_boneguy.cpp_CBoneGuy_getTargetPoints_FUN_0041d550
// Address: 0041d550
// MANUAL RECONSTRUCTION
// Address Range: [[0041d550, 0041d673]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_CBoneGuy_getTargetPoints_FUN_0041d550(CBoneGuy *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_boneguy_cpp_CBoneGuy_getTargetPoints_FUN_0041d550(CBoneGuy *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  if (this_ptr->blown_up != 0) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_30,g_BoneGuyIndices[0]);
  if (out_points_array != pCVar1) {
    *out_points_array = *pCVar1;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_24,g_BoneGuyIndices[5]);
  if (out_points_array + 1 != pCVar2) {
    out_points_array[1] = *pCVar2;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_18,g_BoneGuyIndices[6]);
  if (out_points_array + 2 != pCVar2) {
    out_points_array[2] = *pCVar2;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_3c,g_BoneGuyIndices[9]);
  if (out_points_array + 3 != pCVar2) {
    out_points_array[3] = *pCVar2;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_48,g_BoneGuyIndices[10]);
  if (out_points_array + 4 != pCVar2) {
    out_points_array[4] = *pCVar2;
  }
  return 5;
}
