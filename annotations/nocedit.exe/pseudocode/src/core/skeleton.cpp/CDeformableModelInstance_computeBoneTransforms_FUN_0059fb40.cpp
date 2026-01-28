// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
// Address: 0059fb40
// Address Range: [[0059fb40, 0059fd5d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 (CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
          (CDeformableModelInstance *this_ptr)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  CDeformableModelInstance *pCVar4;
  CVector3f CStack_3c;
  CVector3f *local_30;
  CSkeleton *local_2c;
  int local_28;
  CMatrix3x4f *local_24;
  CSkeleton *local_20;
  CQuaternion4f *local_1c;
  int local_18;
  CMatrix3x4f *local_14;
  
  local_2c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar3 = 0;
  if (0 < local_2c->bone_count) {
    local_24 = (this_ptr->bone_transform).bone_world_matrices;
    local_18 = 0;
    local_30 = this_ptr->transformed_vertices;
    local_1c = (this_ptr->bone_transform).bone_rotations;
    pCVar2 = this_ptr;
    pCVar4 = this_ptr;
    local_20 = local_2c;
    local_14 = local_24;
    do {
      local_28 = iVar3 * 0x30;
      core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)local_24,local_1c);
      if ((pCVar2->bone_transform).current_pose_data[0] != 1.0) {
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[0].w + local_28) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[0].w + local_28);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[0].x + local_28) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[0].x + local_28);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[0].y + local_28) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[0].y + local_28);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[1].w + local_28) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[1].w + local_28);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[1].x + local_28) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[1].x + local_28);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[1].y + local_28) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[1].y + local_28);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[2].w + local_28) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[2].w + local_28);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[2].x + local_28) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[2].x + local_28);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[2].y + local_28) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[2].y + local_28);
      }
      iVar1 = local_20->bone_list[0].parent_index;
      if (iVar1 < 0) {
        (pCVar4->bone_transform).bone_world_matrices[0].m[0].z =
             *(float *)((int)&this_ptr->transformed_vertices[0].x + local_18) +
             (this_ptr->bone_transform).root_position.x;
        (pCVar4->bone_transform).bone_world_matrices[0].m[1].z =
             *(float *)((int)&this_ptr->transformed_vertices[0].y + local_18) +
             (this_ptr->bone_transform).root_position.y;
        (pCVar4->bone_transform).bone_world_matrices[0].m[2].z =
             *(float *)((int)&this_ptr->transformed_vertices[0].z + local_18) +
             (this_ptr->bone_transform).root_position.z;
      }
      else {
        core_xform_cpp_transformVector3x4_FUN_005f4dc0
                  (&CStack_3c,(CVector3f *)((int)&local_30->x + local_18),local_14 + iVar1);
        (pCVar4->bone_transform).bone_world_matrices[0].m[0].z = CStack_3c.x;
        (pCVar4->bone_transform).bone_world_matrices[0].m[1].z = CStack_3c.y;
        (pCVar4->bone_transform).bone_world_matrices[0].m[2].z = CStack_3c.z;
      }
      pCVar2 = (CDeformableModelInstance *)&(pCVar2->motion_controller).current_motion_index;
      pCVar4 = (CDeformableModelInstance *)(pCVar4->motion_controller).current_motion_name;
      iVar3 = iVar3 + 1;
      local_24 = local_24 + 1;
      local_1c = local_1c + 1;
      local_18 = local_18 + 0xc;
      local_20 = (CSkeleton *)((local_20->motion_list).state_names[1] + 2);
    } while (iVar3 < local_2c->bone_count);
  }
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
