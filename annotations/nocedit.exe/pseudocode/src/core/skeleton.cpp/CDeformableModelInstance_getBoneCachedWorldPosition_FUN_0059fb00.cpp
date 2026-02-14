// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
// Address: 0059fb00
// Address Range: [[0059fb00, 0059fb36]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index)

#include "nocturne.h"

CVector3f * __cdecl core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance *this_ptr,CVector3f *out_position,int bone_index)

{
  out_position->x = (this_ptr->bone_transform).bone_world_matrices[bone_index].m[0].z;
  out_position->y = (this_ptr->bone_transform).bone_world_matrices[bone_index].m[1].z;
  out_position->z = (this_ptr->bone_transform).bone_world_matrices[bone_index].m[2].z;
  return out_position;
}
