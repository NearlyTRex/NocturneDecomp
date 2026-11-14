// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
// Address: 00569130
// Address Range: [[00569130, 00569176]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance *this_ptr,int bone_index,CVector3f *out_position)

#include "nocturne.h"

CVector3f * __stack2_esi core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance *this_ptr,int bone_index,CVector3f *out_position)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this_ptr->bone_transform).bone_model_matrices[bone_index].m[1].z;
  fVar2 = (this_ptr->bone_transform).bone_model_matrices[bone_index].m[2].z;
  out_position->x = (this_ptr->bone_transform).bone_model_matrices[bone_index].m[0].z;
  out_position->y = fVar1;
  out_position->z = fVar2;
  return out_position;
}
