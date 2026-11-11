// Name: core_skeleton.cpp_FUN_00544f80
// Address: 00544f80
// Address Range: [[00544f80, 00545a5e]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00544f80(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_skeleton_cpp_FUN_00544f80(CDeformableModelInstance *param_1,int param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  CDeformableModelInstance *pCVar6;
  CSkeleton *this_ptr;
  int iVar7;
  int iVar8;
  CSkeleton *pCVar9;
  CQuaternion4f *pCVar10;
  uint *puVar11;
  uint *puVar12;
  float *pfVar13;
  uint *puVar14;
  uint *puVar15;
  float *pfVar16;
  float *pfVar17;
  byte bVar18;
  float afStackY_1a88 [120];
  float local_1890;
  float local_188c [382];
  float afStack_1294 [18];
  float local_124c [800];
  int aiStack_5cc [100];
  int aiStack_43c [100];
  float local_2ac;
  float afStack_2a8 [7];
  float local_28c [4];
  float local_27c [4];
  float local_26c [4];
  float local_25c;
  uint local_24c;
  float local_23c [4];
  float local_22c [4];
  uint local_21c;
  uint local_20c;
  float local_1fc;
  uint local_1ec;
  float local_1dc [4];
  float local_1cc;
  float afStack_1c8 [7];
  float local_1ac;
  float local_19c [4];
  uint local_18c;
  float local_17c [4];
  float local_16c;
  float afStack_168 [7];
  float local_14c [4];
  float local_13c;
  float local_12c [4];
  uint local_11c;
  uint local_10c;
  uint local_fc;
  float local_ec [4];
  uint local_dc;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_84;
  int local_80;
  int local_7c;
  float local_78;
  int local_74;
  CQuaternion4f *local_70;
  int local_6c;
  CQuaternion4f *local_68;
  int local_64;
  int local_60;
  CSkeleton *local_5c;
  CSkeleton *local_58;
  CDeformableModelInstance *local_54;
  int local_50;
  int local_4c;
  CDeformableModelInstance *local_48;
  int local_44;
  CDeformableModelInstance *local_40;
  int local_3c;
  int local_38;
  CDeformableModelInstance *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDeformableModelInstance *local_1c;
  int local_18;
  int local_14;
  
  bVar18 = 0;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(param_1);
  core_motion_cpp_FUN_00504080(&param_1->base,param_2,param_3,&local_84,&local_80,&stack0xffffe770);
  if (param_4 < 0) {
    local_30 = 0;
    if (0 < this_ptr->bone_count) {
      local_54 = param_1;
      local_40 = param_1;
      do {
        core_skeleton_cpp_FUN_00540f30(this_ptr,local_30,local_84,local_80,local_1890);
        pCVar6 = local_40;
        local_40 = (CDeformableModelInstance *)&(local_40->base).current_motion_index;
        pfVar17 = (float *)((int)local_54 + (uint)bVar18 * -8 + 0x6b4);
        (local_54->bone_transform).pose_data.bone_rotations[0].w = local_13c;
        pfVar13 = pfVar17 + (uint)bVar18 * -2 + 1;
        *pfVar17 = afStack_168[(uint)bVar18 * -2 + 0xc];
        *pfVar13 = afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
        pfVar13[(uint)bVar18 * -2 + 1] =
             (afStack_168 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd)[(uint)bVar18 * -2 + 1];
        local_54 = (CDeformableModelInstance *)&(local_54->base).tween_speed;
        (pCVar6->bone_transform).bone_scales[0] = pCVar6->rest_bone_scales[0];
        local_30 = local_30 + 1;
      } while (local_30 < this_ptr->bone_count);
    }
    pCVar5 = this_ptr->frame_positions_1;
    local_90 = pCVar5[local_80].x * local_1890;
    fVar1 = 1.0 - local_1890;
    local_8c = pCVar5[local_80].y * local_1890;
    local_88 = pCVar5[local_80].z * local_1890;
    local_b4 = local_90;
    afStack_168[(uint)bVar18 * -2 + 0x2e] = afStack_168[(uint)bVar18 * -2 + 0x37];
    afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x2f] =
         afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x38];
    local_78 = fVar1;
    local_cc = pCVar5[local_84].x * fVar1;
    local_c8 = pCVar5[local_84].y * fVar1;
    local_c4 = pCVar5[local_84].z * fVar1;
    local_a8 = local_cc;
    afStack_168[(uint)bVar18 * -2 + 0x31] = afStack_168[(uint)bVar18 * -2 + 0x28];
    afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x32] =
         afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x29];
    local_9c = local_a8 + local_b4;
    local_98 = local_a4 + local_b0;
    local_94 = local_a0 + local_ac;
    local_c0 = local_a8 + local_b4;
    afStack_168[(uint)bVar18 * -2 + 0x2b] = afStack_168[(uint)bVar18 * -2 + 0x34];
    afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x2c] =
         afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x35];
    if (&param_1->bone_transform != (SPose *)(afStack_168 + 0x2a)) {
      (param_1->bone_transform).pose_data.root_position.x = local_c0;
      (param_1->bone_transform).pose_data.root_position.y = local_bc;
      (param_1->bone_transform).pose_data.root_position.z = local_b8;
    }
    fVar1 = (param_1->root_offset_scale).x;
    fVar2 = (param_1->bone_transform).pose_data.root_position.x;
    fVar3 = (param_1->root_offset_scale).z;
    fVar4 = (param_1->bone_transform).pose_data.root_position.z;
    (param_1->bone_transform).pose_data.root_position.y =
         (param_1->root_offset_scale).y * (param_1->bone_transform).pose_data.root_position.y;
    (param_1->bone_transform).pose_data.root_position.z = fVar3 * fVar4;
    (param_1->bone_transform).pose_data.root_position.x = fVar1 * fVar2;
    return;
  }
  if (param_1->bone_update_mode == 1) {
    local_18 = 0;
    if (0 < this_ptr->bone_count) {
      local_60 = 0;
      local_44 = 0;
      do {
        iVar8 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                          (this_ptr,local_18,param_4);
        *(int *)((int)aiStack_43c + local_44) = iVar8;
        if (-1 < iVar8) {
          core_skeleton_cpp_FUN_00540f30(this_ptr,local_18,local_84,local_80,local_1890);
          pfVar17 = (float *)((int)local_124c + (uint)bVar18 * -8 + local_60 + 4);
          *(uint *)((int)local_124c + local_60) = local_18c;
          pfVar13 = pfVar17 + (uint)bVar18 * -2 + 1;
          *pfVar17 = afStack_1c8[(uint)bVar18 * -2 + 0x10];
          *pfVar13 = afStack_1c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x11];
          pfVar13[(uint)bVar18 * -2 + 1] =
               (afStack_1c8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x11)[(uint)bVar18 * -2 + 1];
        }
        local_18 = local_18 + 1;
        local_44 = local_44 + 4;
        local_60 = local_60 + 0x10;
      } while (local_18 < this_ptr->bone_count);
    }
    iVar8 = this_ptr->bone_list[param_4].parent_index;
    if (-1 < iVar8) {
      core_skeleton_cpp_FUN_00540f30(this_ptr,iVar8,local_84,local_80,local_1890);
      pfVar17 = local_124c + iVar8 * 4 + (uint)bVar18 * -2 + 1;
      local_124c[iVar8 * 4] = local_16c;
      *pfVar17 = afStack_168[(uint)bVar18 * -2];
      pfVar17[(uint)bVar18 * -2 + 1] = afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
      (pfVar17 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
           (afStack_168 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
    }
    local_28 = 0;
    if (0 < this_ptr->bone_count) {
      local_50 = 0;
      local_70 = (param_1->bone_transform).pose_data.bone_rotations;
      local_58 = this_ptr;
      local_34 = param_1;
      do {
        if (-1 < *(int *)((int)aiStack_43c + local_50)) {
          iVar8 = local_58->bone_list[0].parent_index;
          local_64 = local_28 * 0x10;
          if (iVar8 < 0) {
            pfVar17 = local_124c + local_28 * 4;
          }
          else {
            local_7c = iVar8 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_00593c00(local_124c + iVar8 * 4);
            pfVar17 = afStack_1c8 + 3;
            iVar8 = (int)local_124c + local_64;
            afStack_1c8[3] = (float)local_11c;
            afStack_1c8[(uint)bVar18 * -2 + 4] = afStack_168[(uint)bVar18 * -2 + 0x14];
            afStack_1c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] =
                 afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x15];
            (afStack_1c8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1] =
                 (afStack_168 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x15)[(uint)bVar18 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(iVar8,pfVar17);
            iVar8 = (int)&local_70->w + local_7c;
            local_14c[0] = (float)local_20c;
            afStack_168[(uint)bVar18 * -2 + 8] = afStack_2a8[(uint)bVar18 * -2 + 0x28];
            afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 9] =
                 afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x29];
            (afStack_168 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 9)[(uint)bVar18 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x29)[(uint)bVar18 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_168 + 7,iVar8);
            pfVar17 = afStack_2a8 + 0x33;
          }
          pfVar16 = (float *)((int)local_34 + (uint)bVar18 * -8 + 0x6b4);
          pfVar13 = pfVar17 + (uint)bVar18 * -2 + 1;
          (local_34->bone_transform).pose_data.bone_rotations[0].w = *pfVar17;
          pfVar17 = pfVar16 + (uint)bVar18 * -2 + 1;
          *pfVar16 = *pfVar13;
          *pfVar17 = pfVar13[(uint)bVar18 * -2 + 1];
          pfVar17[(uint)bVar18 * -2 + 1] = (pfVar13 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
        }
        local_28 = local_28 + 1;
        local_50 = local_50 + 4;
        local_34 = (CDeformableModelInstance *)&(local_34->base).tween_speed;
        local_58 = (CSkeleton *)((local_58->motion_list).state_names[1] + 2);
      } while (local_28 < this_ptr->bone_count);
    }
  }
  else if (param_1->bone_update_mode == 2) {
    pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(param_1);
    local_14 = 0;
    local_6c = (pCVar9->motion_list).motions[param_2].frame_start;
    if (0 < this_ptr->bone_count) {
      local_3c = 0;
      local_38 = 0;
      do {
        iVar8 = local_14;
        iVar7 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                          (this_ptr,local_14,param_4);
        *(int *)((int)aiStack_5cc + local_38) = iVar7;
        if (-1 < iVar7) {
          pCVar10 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10
                              (this_ptr,iVar8,local_6c);
          puVar14 = (uint *)((int)local_124c + (uint)bVar18 * -8 + local_3c + 0x644);
          puVar11 = (uint *)((int)pCVar10 + (uint)bVar18 * -8 + 4);
          *(float *)((int)local_124c + local_3c + 0x640) = pCVar10->w;
          puVar15 = puVar14 + (uint)bVar18 * -2 + 1;
          puVar12 = puVar11 + (uint)bVar18 * -2 + 1;
          *puVar14 = *puVar11;
          *puVar15 = *puVar12;
          puVar15[(uint)bVar18 * -2 + 1] = puVar12[(uint)bVar18 * -2 + 1];
          core_skeleton_cpp_FUN_00540f30(this_ptr,local_14,local_84,local_80,local_1890);
          pfVar17 = (float *)((int)local_188c + (uint)bVar18 * -8 + local_3c + 4);
          *(uint *)((int)local_188c + local_3c) = local_dc;
          pfVar13 = pfVar17 + (uint)bVar18 * -2 + 1;
          *pfVar17 = afStack_168[(uint)bVar18 * -2 + 0x24];
          *pfVar13 = afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x25];
          pfVar13[(uint)bVar18 * -2 + 1] =
               (afStack_168 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x25)[(uint)bVar18 * -2 + 1];
        }
        local_14 = local_14 + 1;
        local_38 = local_38 + 4;
        local_3c = local_3c + 0x10;
      } while (local_14 < this_ptr->bone_count);
    }
    iVar8 = this_ptr->bone_list[param_4].parent_index;
    local_74 = iVar8;
    if (-1 < iVar8) {
      pCVar10 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10
                          (this_ptr,iVar8,local_6c);
      pfVar16 = local_124c + iVar8 * 4 + (uint)bVar18 * -2 + 0x191;
      pfVar17 = (float *)((int)pCVar10 + (uint)bVar18 * -8 + 4);
      local_124c[iVar8 * 4 + 400] = pCVar10->w;
      pfVar13 = pfVar17 + (uint)bVar18 * -2 + 1;
      *pfVar16 = *pfVar17;
      pfVar16[(uint)bVar18 * -2 + 1] = *pfVar13;
      (pfVar16 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] = pfVar13[(uint)bVar18 * -2 + 1];
      local_7c = iVar8 * 0x10;
      core_skeleton_cpp_FUN_00540f30(this_ptr,local_74,local_84,local_80,local_1890);
      pfVar17 = (float *)((int)local_188c + (uint)bVar18 * -8 + local_7c + 4);
      *(float *)((int)local_188c + local_7c) = afStack_2a8[3];
      pfVar13 = pfVar17 + (uint)bVar18 * -2 + 1;
      *pfVar17 = afStack_2a8[(uint)bVar18 * -2 + 4];
      *pfVar13 = afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5];
      pfVar13[(uint)bVar18 * -2 + 1] =
           (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1];
    }
    local_2c = 0;
    if (0 < this_ptr->bone_count) {
      local_4c = 0;
      local_68 = (param_1->bone_transform).pose_data.bone_rotations;
      local_5c = this_ptr;
      local_1c = param_1;
      do {
        iVar8 = local_2c;
        if (-1 < *(int *)((int)aiStack_5cc + local_4c)) {
          local_24 = local_5c->bone_list[0].parent_index;
          pfVar17 = local_124c + local_2c * 4 + (uint)bVar18 * -2 + 0x191;
          local_2ac = local_124c[local_2c * 4 + 400];
          afStack_2a8[(uint)bVar18 * -2] = *pfVar17;
          afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] = pfVar17[(uint)bVar18 * -2 + 1];
          (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
               (pfVar17 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          pfVar17 = local_188c + iVar8 * 4 + (uint)bVar18 * -2 + 1;
          local_27c[0] = local_188c[iVar8 * 4];
          afStack_2a8[(uint)bVar18 * -2 + 0xc] = *pfVar17;
          iVar8 = local_24;
          afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] = pfVar17[(uint)bVar18 * -2 + 1];
          (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd)[(uint)bVar18 * -2 + 1] =
               (pfVar17 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          pfVar17 = (float *)((int)local_1c + (uint)bVar18 * -8 + 0x6b4);
          local_28c[0] = (local_1c->bone_transform).pose_data.bone_rotations[0].w;
          pfVar13 = pfVar17 + (uint)bVar18 * -2 + 1;
          afStack_2a8[(uint)bVar18 * -2 + 8] = *pfVar17;
          afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 9] = *pfVar13;
          (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 9)[(uint)bVar18 * -2 + 1] =
               pfVar13[(uint)bVar18 * -2 + 1];
          if (-1 < iVar8) {
            local_7c = iVar8 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_00593c00(local_124c + iVar8 * 4 + 400);
            pfVar17 = afStack_2a8 + 0x1b;
            local_23c[0] = (float)local_24c;
            afStack_2a8[(uint)bVar18 * -2 + 0x1c] = afStack_2a8[(uint)bVar18 * -2 + 0x18];
            afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1d] =
                 afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19];
            (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1d)[(uint)bVar18 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19)[(uint)bVar18 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(&local_2ac,pfVar17);
            local_2ac = local_1ac;
            afStack_2a8[(uint)bVar18 * -2] = afStack_1c8[(uint)bVar18 * -2 + 8];
            afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                 afStack_1c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 9];
            (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
                 (afStack_1c8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 9)[(uint)bVar18 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_00593c00((int)local_188c + local_7c);
            pfVar17 = afStack_2a8 + 0x1f;
            local_22c[0] = (float)local_21c;
            afStack_2a8[(uint)bVar18 * -2 + 0x20] = afStack_2a8[(uint)bVar18 * -2 + 0x24];
            afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x21] =
                 afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x25];
            (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x21)[(uint)bVar18 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x25)[(uint)bVar18 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_2a8 + 0xb,pfVar17);
            iVar8 = (int)&local_68->w + local_7c;
            local_27c[0] = local_1fc;
            afStack_2a8[(uint)bVar18 * -2 + 0xc] = afStack_2a8[(uint)bVar18 * -2 + 0x2c];
            afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
                 afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x2d];
            (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd)[(uint)bVar18 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x2d)[(uint)bVar18 * -2 + 1]
            ;
            core_xform_cpp_negateFirstComponent_FUN_00593c00(iVar8);
            pfVar17 = afStack_2a8 + 0xf;
            local_26c[0] = (float)local_1ec;
            afStack_2a8[(uint)bVar18 * -2 + 0x10] = afStack_2a8[(uint)bVar18 * -2 + 0x30];
            afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x11] =
                 afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x31];
            (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x11)[(uint)bVar18 * -2 + 1] =
                 (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x31)[(uint)bVar18 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_2a8 + 7,pfVar17);
            local_28c[0] = local_1cc;
            afStack_2a8[(uint)bVar18 * -2 + 8] = afStack_1c8[(uint)bVar18 * -2];
            afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 9] =
                 afStack_1c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
            (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 9)[(uint)bVar18 * -2 + 1] =
                 (afStack_1c8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          }
          core_xform_cpp_negateFirstComponent_FUN_00593c00(&local_2ac);
          pfVar17 = afStack_168 + 0xf;
          local_12c[0] = (float)local_fc;
          afStack_168[(uint)bVar18 * -2 + 0x10] = afStack_168[(uint)bVar18 * -2 + 0x1c];
          afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x11] =
               afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1d];
          (afStack_168 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x11)[(uint)bVar18 * -2 + 1] =
               (afStack_168 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x1d)[(uint)bVar18 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_2a8 + 0xb,pfVar17);
          pfVar17 = afStack_168 + 3;
          afStack_168[3] = (float)local_10c;
          afStack_168[(uint)bVar18 * -2 + 4] = afStack_168[(uint)bVar18 * -2 + 0x18];
          afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] =
               afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19];
          (afStack_168 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1] =
               (afStack_168 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19)[(uint)bVar18 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_2a8 + 7,pfVar17);
          iVar8 = local_24;
          local_19c[0] = local_ec[0];
          afStack_1c8[(uint)bVar18 * -2 + 0xc] = afStack_168[(uint)bVar18 * -2 + 0x20];
          afStack_1c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
               afStack_168[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x21];
          (afStack_1c8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd)[(uint)bVar18 * -2 + 1] =
               (afStack_168 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x21)[(uint)bVar18 * -2 + 1];
          if (iVar8 < 0) {
            pfVar17 = afStack_168 + 0x1f;
          }
          else {
            core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_1c8 + 0xb,local_68 + iVar8);
            pfVar17 = afStack_1c8 + 0x13;
          }
          pfVar16 = (float *)((int)local_1c + (uint)bVar18 * -8 + 0x6b4);
          pfVar13 = pfVar17 + (uint)bVar18 * -2 + 1;
          (local_1c->bone_transform).pose_data.bone_rotations[0].w = *pfVar17;
          pfVar17 = pfVar16 + (uint)bVar18 * -2 + 1;
          *pfVar16 = *pfVar13;
          *pfVar17 = pfVar13[(uint)bVar18 * -2 + 1];
          pfVar17[(uint)bVar18 * -2 + 1] = (pfVar13 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
        }
        local_2c = local_2c + 1;
        local_4c = local_4c + 4;
        local_5c = (CSkeleton *)((local_5c->motion_list).state_names[1] + 2);
        local_1c = (CDeformableModelInstance *)&(local_1c->base).tween_speed;
      } while (local_2c < this_ptr->bone_count);
    }
  }
  else {
    local_20 = 0;
    if (0 < this_ptr->bone_count) {
      local_48 = param_1;
      do {
        iVar8 = local_20;
        iVar7 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00540fc0
                          (this_ptr,local_20,param_4);
        if (-1 < iVar7) {
          core_skeleton_cpp_FUN_00540f30(this_ptr,iVar8,local_84,local_80,local_1890);
          pfVar17 = (float *)((int)local_48 + (uint)bVar18 * -8 + 0x6b4);
          (local_48->bone_transform).pose_data.bone_rotations[0].w = local_25c;
          pfVar13 = pfVar17 + (uint)bVar18 * -2 + 1;
          *pfVar17 = afStack_2a8[(uint)bVar18 * -2 + 0x14];
          *pfVar13 = afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x15];
          pfVar13[(uint)bVar18 * -2 + 1] =
               (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x15)[(uint)bVar18 * -2 + 1];
        }
        local_48 = (CDeformableModelInstance *)&(local_48->base).tween_speed;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->bone_count);
    }
  }
  return;
}
