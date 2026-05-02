// Name: core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043a2b0
// Address: 0043a2b0
// MANUAL RECONSTRUCTION
// Address Range: [[0043a2b0, 0043a41c] [03fc2e0c, 03fc2f36]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_0043a2b0(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_0043a2b0(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr)

{
  CVector3f *pCVar2;
  CMatrix3x4f local_108;
  CMatrix3x4f local_d8;
  CMatrix3x4f local_48;
  CVector3f local_18;
  
  core_xform_cpp_inverse_FUN_005f6210
            ((model_ptr->bone_transform).bone_world_matrices +
             this_ptr->collide_bones[bone_index].parent_bone_index,&local_48);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_48,&this_ptr->collide_bones[bone_index].world_matrix,&local_d8);
  this_ptr->collide_bones[bone_index].local_matrix.m[0].x = local_d8.m[0].w;
  this_ptr->collide_bones[bone_index].local_matrix.m[0].y = local_d8.m[1].w;
  this_ptr->collide_bones[bone_index].local_matrix.m[0].z = local_d8.m[2].w;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].x = local_d8.m[0].x;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].y = local_d8.m[1].x;
  this_ptr->collide_bones[bone_index].local_matrix.m[1].z = local_d8.m[2].x;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].x = local_d8.m[0].y;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].y = local_d8.m[1].y;
  this_ptr->collide_bones[bone_index].local_matrix.m[2].z = local_d8.m[2].y;
  core_xform_cpp_inverse_FUN_005f6210(&local_d8,&local_108);
  pCVar2 = &this_ptr->collide_bones[bone_index].position_offset;
  if (pCVar2 == &local_18) {
    return;
  }
  pCVar2->x = local_108.m[0].z;
  this_ptr->collide_bones[bone_index].position_offset.y = local_108.m[1].z;
  this_ptr->collide_bones[bone_index].position_offset.z = local_108.m[2].z;
  return;
}
