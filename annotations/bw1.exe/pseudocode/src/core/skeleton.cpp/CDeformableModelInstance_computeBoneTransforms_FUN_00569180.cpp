// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
// Address: 00569180
// Address Range: [[00569180, 005693c8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance *this_ptr)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CDeformableModelInstance *pCVar3;
  byte bVar4;
  float afStackY_1030 [1016];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  CSkeleton *local_30;
  CMatrix3x4f *local_2c;
  CSkeleton *local_28;
  CMatrix3x4f *local_24;
  int local_20;
  int local_1c;
  CVector3f *local_18;
  CQuaternion4f *local_14;
  
  bVar4 = 0;
  local_30 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
  local_20 = 0;
  if (0 < local_30->bone_count) {
    local_1c = 0;
    local_2c = (this_ptr->bone_transform).bone_model_matrices;
    local_14 = (this_ptr->bone_transform).pose_data.bone_rotations;
    local_18 = this_ptr->bone_origins;
    pCVar2 = this_ptr;
    pCVar3 = this_ptr;
    local_28 = local_30;
    local_24 = local_2c;
    do {
      iVar1 = local_20;
      core_xform_cpp_FUN_005b7410(local_24,local_14);
      if ((pCVar2->bone_transform).bone_scales[0] != 1.0) {
        (this_ptr->bone_transform).bone_model_matrices[iVar1].m[0].w =
             (pCVar2->bone_transform).bone_scales[0] *
             (this_ptr->bone_transform).bone_model_matrices[iVar1].m[0].w;
        (this_ptr->bone_transform).bone_model_matrices[iVar1].m[0].x =
             (pCVar2->bone_transform).bone_scales[0] *
             (this_ptr->bone_transform).bone_model_matrices[iVar1].m[0].x;
        (this_ptr->bone_transform).bone_model_matrices[iVar1].m[0].y =
             (pCVar2->bone_transform).bone_scales[0] *
             (this_ptr->bone_transform).bone_model_matrices[iVar1].m[0].y;
        (this_ptr->bone_transform).bone_model_matrices[iVar1].m[1].w =
             (pCVar2->bone_transform).bone_scales[0] *
             (this_ptr->bone_transform).bone_model_matrices[iVar1].m[1].w;
        (this_ptr->bone_transform).bone_model_matrices[iVar1].m[1].x =
             (pCVar2->bone_transform).bone_scales[0] *
             (this_ptr->bone_transform).bone_model_matrices[iVar1].m[1].x;
        (this_ptr->bone_transform).bone_model_matrices[iVar1].m[1].y =
             (pCVar2->bone_transform).bone_scales[0] *
             (this_ptr->bone_transform).bone_model_matrices[iVar1].m[1].y;
        (this_ptr->bone_transform).bone_model_matrices[iVar1].m[2].w =
             (pCVar2->bone_transform).bone_scales[0] *
             (this_ptr->bone_transform).bone_model_matrices[iVar1].m[2].w;
        (this_ptr->bone_transform).bone_model_matrices[iVar1].m[2].x =
             (pCVar2->bone_transform).bone_scales[0] *
             (this_ptr->bone_transform).bone_model_matrices[iVar1].m[2].x;
        (this_ptr->bone_transform).bone_model_matrices[iVar1].m[2].y =
             (pCVar2->bone_transform).bone_scales[0] *
             (this_ptr->bone_transform).bone_model_matrices[iVar1].m[2].y;
      }
      iVar1 = local_28->bone_list[0].parent_index;
      if (iVar1 < 0) {
        (pCVar3->bone_transform).bone_model_matrices[0].m[0].z =
             *(float *)((int)&this_ptr->bone_origins[0].x + local_1c) +
             (this_ptr->bone_transform).pose_data.root_position.x;
        (pCVar3->bone_transform).bone_model_matrices[0].m[1].z =
             *(float *)((int)&this_ptr->bone_origins[0].y + local_1c) +
             (this_ptr->bone_transform).pose_data.root_position.y;
        (pCVar3->bone_transform).bone_model_matrices[0].m[2].z =
             *(float *)((int)&this_ptr->bone_origins[0].z + local_1c) +
             (this_ptr->bone_transform).pose_data.root_position.z;
      }
      else {
        core_xform_cpp_FUN_005b5080((int)&local_18->x + local_1c,local_2c + iVar1);
        local_48 = local_3c;
        *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8);
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        (pCVar3->bone_transform).bone_model_matrices[0].m[0].z = local_48;
        (pCVar3->bone_transform).bone_model_matrices[0].m[1].z = local_44;
        (pCVar3->bone_transform).bone_model_matrices[0].m[2].z = local_40;
      }
      pCVar2 = (CDeformableModelInstance *)&(pCVar2->base).current_motion_index;
      pCVar3 = (CDeformableModelInstance *)(pCVar3->base).current_motion_name;
      local_24 = local_24 + 1;
      local_14 = local_14 + 1;
      local_1c = local_1c + 0xc;
      local_28 = (CSkeleton *)((local_28->motion_list).state_names[1] + 2);
      local_20 = local_20 + 1;
    } while (local_20 < local_30->bone_count);
  }
  this_ptr->cached_skinned_lod_index = -1;
  return;
}
