// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
// Address: 0059fb40
// Address Range: [[0059fb40, 0059fd5d]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
          (CDeformableModelInstance *this_ptr)

{
  CMatrix3x4f *pCVar1;
  CDeformableModelInstance *pCVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDeformableModelInstance *pCVar4;
  int unaff_EDI;
  CVector3f local_34;
  CSkeleton *local_28;
  int local_24;
  CMatrix3x4f *local_20;
  CSkeleton *local_1c;
  CQuaternion4f *local_18;
  int local_14;
  
  local_28 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  iVar3 = 0;
  if (0 < local_28->bone_count) {
    pCVar1 = (this_ptr->bone_transform).bone_world_matrices;
    local_14 = 0;
    local_34.z = (float)this_ptr->transformed_vertices;
    local_18 = (this_ptr->bone_transform).bone_rotations;
    pCVar2 = this_ptr;
    pCVar4 = this_ptr;
    local_20 = pCVar1;
    local_1c = local_28;
    do {
      local_24 = iVar3 * 0x30;
      core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280((CMatrix3x3f *)local_20,local_18);
      if ((pCVar2->bone_transform).current_pose_data[0] != 1.0) {
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[0].w +
                  (int)&local_20->m[0].w) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[0].w +
                       (int)&local_20->m[0].w);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[0].x + (int)local_20) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[0].x +
                       (int)local_20);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[0].y + (int)local_20) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[0].y +
                       (int)local_20);
        *(float *)((int)&local_20->m[0].w +
                  (int)&(this_ptr->bone_transform).bone_world_matrices[0].m[1].w) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&local_20->m[0].w +
                       (int)&(this_ptr->bone_transform).bone_world_matrices[0].m[1].w);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[1].x + (int)local_20) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[1].x +
                       (int)local_20);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[1].y + (int)local_20) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[1].y +
                       (int)local_20);
        *(float *)((int)&local_20->m[0].w +
                  (int)&(this_ptr->bone_transform).bone_world_matrices[0].m[2].w) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&local_20->m[0].w +
                       (int)&(this_ptr->bone_transform).bone_world_matrices[0].m[2].w);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[2].x + (int)local_20) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[2].x +
                       (int)local_20);
        *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[2].y + (int)local_20) =
             (pCVar2->bone_transform).current_pose_data[0] *
             *(float *)((int)&(this_ptr->bone_transform).bone_world_matrices[0].m[2].y +
                       (int)local_20);
      }
      if ((int)local_18[0x2857].z < 0) {
        (pCVar4->bone_transform).bone_world_matrices[0].m[0].z =
             *(float *)((int)&pCVar1->m[0].w + (int)(this_ptr->transformed_vertices + 0xa7) + -0x7d4
                       ) + (this_ptr->bone_transform).root_position.x;
        (pCVar4->bone_transform).bone_world_matrices[0].m[1].z =
             *(float *)((int)&this_ptr->transformed_vertices[0].y + (int)pCVar1) +
             (this_ptr->bone_transform).root_position.y;
        (pCVar4->bone_transform).bone_world_matrices[0].m[2].z =
             *(float *)((int)&this_ptr->transformed_vertices[0].z + (int)pCVar1) +
             (this_ptr->bone_transform).root_position.z;
      }
      else {
        core_xform_cpp_transformVector3x4_FUN_005f4dc0
                  (&local_34,
                   (CVector3f *)
                   ((local_28->motion_list).state_names[0] + (int)(pCVar1->m + -1) + 0xc),
                   (CMatrix3x4f *)((int)local_18[0x2857].z * 0x30 + unaff_EDI));
        (pCVar4->bone_transform).bone_world_matrices[0].m[0].z = local_34.y;
        (pCVar4->bone_transform).bone_world_matrices[0].m[1].z = local_34.z;
        (pCVar4->bone_transform).bone_world_matrices[0].m[2].z = (float)local_28;
      }
      pCVar2 = (CDeformableModelInstance *)&(pCVar2->motion_controller).current_motion_index;
      pCVar4 = (CDeformableModelInstance *)(pCVar4->motion_controller).current_motion_name;
      iVar3 = iVar3 + 1;
      local_20 = local_20 + 1;
      local_18 = local_18 + 1;
      local_14 = local_14 + 0xc;
      local_1c = (CSkeleton *)((local_1c->motion_list).state_names[1] + 2);
    } while (iVar3 < local_28->bone_count);
  }
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
