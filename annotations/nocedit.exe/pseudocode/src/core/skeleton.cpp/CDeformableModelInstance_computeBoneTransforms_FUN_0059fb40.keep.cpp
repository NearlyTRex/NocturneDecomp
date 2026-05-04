// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
// Address: 0059fb40
// MANUAL RECONSTRUCTION
// Address Range: [[0059fb40, 0059fd5d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance *this_ptr)

{
  CMatrix3x4f *pCVar1;
  CSkeleton *pCVar3;
  int iVar3;
  CVector3f CStack_3c;
  CMatrix3x4f *local_24;
  CQuaternion4f *local_1c;
  int iVar1;
  
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar3 = 0;
  if (0 < pCVar3->bone_count) {
    pCVar1 = (this_ptr->bone_transform).bone_world_matrices;
    local_1c = (this_ptr->bone_transform).pose_data.bone_rotations;
    local_24 = pCVar1;
    do {
      core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(local_24,local_1c);
      if ((this_ptr->bone_transform).bone_scales[iVar3] != 1.0) {
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[0].w =
             (this_ptr->bone_transform).bone_scales[iVar3] *
             (this_ptr->bone_transform).bone_world_matrices[iVar3].m[0].w;
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[0].x =
             (this_ptr->bone_transform).bone_scales[iVar3] *
             (this_ptr->bone_transform).bone_world_matrices[iVar3].m[0].x;
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[0].y =
             (this_ptr->bone_transform).bone_scales[iVar3] *
             (this_ptr->bone_transform).bone_world_matrices[iVar3].m[0].y;
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[1].w =
             (this_ptr->bone_transform).bone_scales[iVar3] *
             (this_ptr->bone_transform).bone_world_matrices[iVar3].m[1].w;
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[1].x =
             (this_ptr->bone_transform).bone_scales[iVar3] *
             (this_ptr->bone_transform).bone_world_matrices[iVar3].m[1].x;
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[1].y =
             (this_ptr->bone_transform).bone_scales[iVar3] *
             (this_ptr->bone_transform).bone_world_matrices[iVar3].m[1].y;
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[2].w =
             (this_ptr->bone_transform).bone_scales[iVar3] *
             (this_ptr->bone_transform).bone_world_matrices[iVar3].m[2].w;
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[2].x =
             (this_ptr->bone_transform).bone_scales[iVar3] *
             (this_ptr->bone_transform).bone_world_matrices[iVar3].m[2].x;
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[2].y =
             (this_ptr->bone_transform).bone_scales[iVar3] *
             (this_ptr->bone_transform).bone_world_matrices[iVar3].m[2].y;
      }
      iVar1 = pCVar3->bone_list[iVar3].parent_index;
      if (iVar1 < 0) {
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[0].z =
             this_ptr->transformed_vertices[iVar3].x +
             (this_ptr->bone_transform).pose_data.root_position.x;
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[1].z =
             this_ptr->transformed_vertices[iVar3].y +
             (this_ptr->bone_transform).pose_data.root_position.y;
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[2].z =
             this_ptr->transformed_vertices[iVar3].z +
             (this_ptr->bone_transform).pose_data.root_position.z;
      }
      else {
        core_xform_cpp_transformVector3x4_FUN_005f4dc0
                  (&CStack_3c,&this_ptr->transformed_vertices[iVar3],
                   pCVar1 + iVar1);
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[0].z = CStack_3c.x;
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[1].z = CStack_3c.y;
        (this_ptr->bone_transform).bone_world_matrices[iVar3].m[2].z = CStack_3c.z;
      }
      iVar3 = iVar3 + 1;
      local_24 = local_24 + 1;
      local_1c = local_1c + 1;
    } while (iVar3 < pCVar3->bone_count);
  }
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
