// Name: core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0054c1b0
// Address: 0054c1b0
// Address Range: [[0054c1b0, 0054cc8c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0054c1b0(CDeformableModelInstance *this_ptr,int motion_index,float frame_number,int bone_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0054c1b0(CDeformableModelInstance *this_ptr,int motion_index,float frame_number,int bone_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  CDeformableModelInstance *pCVar6;
  CSkeleton *this_ptr_00;
  int iVar7;
  int iVar8;
  CSkeleton *pCVar9;
  CQuaternion4f *pCVar10;
  uint *puVar11;
  float *pfVar12;
  uint *puVar13;
  float *pfVar14;
  uint *puVar15;
  float *pfVar16;
  uint *puVar17;
  byte bVar18;
  float afStackY_1a88 [120];
  float local_1890;
  float local_188c [382];
  float afStack_1294 [18];
  float local_124c [800];
  int aiStack_5cc [100];
  int aiStack_43c [100];
  float local_2ac;
  float afStack_2a8 [3];
  CQuaternion4f local_29c;
  float local_28c;
  float afStack_288 [7];
  float local_26c [4];
  CQuaternion4f local_25c;
  uint local_24c;
  float afStack_248 [7];
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
  CQuaternion4f local_18c;
  float local_17c [4];
  CQuaternion4f local_16c;
  uint local_15c;
  float afStack_158 [7];
  CQuaternion4f local_13c;
  uint local_12c;
  float afStack_128 [7];
  uint local_10c;
  uint local_fc;
  float local_ec [4];
  CQuaternion4f local_dc;
  float local_cc;
  float local_c8 [4];
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
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_004fcb50
            (&this_ptr->base,motion_index,frame_number,&local_84,&local_80,&stack0xffffe770);
  if (bone_index < 0) {
    local_30 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_54 = this_ptr;
      local_40 = this_ptr;
      do {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00548140
                  (this_ptr_00,local_30,local_84,local_80,local_1890,&local_13c);
        pCVar6 = local_40;
        local_40 = (CDeformableModelInstance *)&(local_40->base).current_motion_index;
        puVar17 = (uint *)((int)local_54 + (uint)bVar18 * -8 + 0x6b4);
        (local_54->bone_transform).pose_data.bone_rotations[0].w = local_13c.w;
        puVar13 = puVar17 + (uint)bVar18 * -2 + 1;
        puVar11 = (uint *)((int)&local_13c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
        *puVar17 = *(uint *)((int)&local_13c + (uint)bVar18 * -8 + 4);
        *puVar13 = *puVar11;
        puVar13[(uint)bVar18 * -2 + 1] = puVar11[(uint)bVar18 * -2 + 1];
        local_54 = (CDeformableModelInstance *)&(local_54->base).tween_speed;
        (pCVar6->bone_transform).bone_scales[0] = pCVar6->rest_bone_scales[0];
        local_30 = local_30 + 1;
      } while (local_30 < this_ptr_00->bone_count);
    }
    pCVar5 = this_ptr_00->frame_positions_1;
    local_90 = pCVar5[local_80].x * local_1890;
    fVar1 = 1.0 - local_1890;
    local_8c = pCVar5[local_80].y * local_1890;
    local_88 = pCVar5[local_80].z * local_1890;
    local_b4 = local_90;
    local_c8[(uint)bVar18 * -2 + 6] = local_c8[(uint)bVar18 * -2 + 0xf];
    local_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 7] =
         local_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x10];
    local_78 = fVar1;
    local_cc = pCVar5[local_84].x * fVar1;
    local_c8[0] = pCVar5[local_84].y * fVar1;
    local_c8[1] = pCVar5[local_84].z * fVar1;
    local_a8 = local_cc;
    local_c8[(uint)bVar18 * -2 + 9] = local_c8[(uint)bVar18 * -2];
    local_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 10] =
         local_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
    local_9c = local_a8 + local_b4;
    local_98 = local_a4 + local_b0;
    local_94 = local_a0 + local_ac;
    local_c8[2] = local_a8 + local_b4;
    local_c8[(uint)bVar18 * -2 + 3] = local_c8[(uint)bVar18 * -2 + 0xc];
    local_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 4] =
         local_c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
    if (&this_ptr->bone_transform != (SPose *)(local_c8 + 2)) {
      (this_ptr->bone_transform).pose_data.root_position.x = local_c8[2];
      (this_ptr->bone_transform).pose_data.root_position.y = local_c8[3];
      (this_ptr->bone_transform).pose_data.root_position.z = local_b8;
    }
    fVar1 = (this_ptr->root_offset_scale).x;
    fVar2 = (this_ptr->bone_transform).pose_data.root_position.x;
    fVar3 = (this_ptr->root_offset_scale).z;
    fVar4 = (this_ptr->bone_transform).pose_data.root_position.z;
    (this_ptr->bone_transform).pose_data.root_position.y =
         (this_ptr->root_offset_scale).y * (this_ptr->bone_transform).pose_data.root_position.y;
    (this_ptr->bone_transform).pose_data.root_position.z = fVar3 * fVar4;
    (this_ptr->bone_transform).pose_data.root_position.x = fVar1 * fVar2;
    return;
  }
  if (this_ptr->bone_update_mode == BONE_UPDATE_HIERARCHICAL_ACCUM) {
    local_18 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_60 = 0;
      local_44 = 0;
      do {
        iVar8 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_005481d0
                          (this_ptr_00,local_18,bone_index);
        *(int *)((int)aiStack_43c + local_44) = iVar8;
        if (-1 < iVar8) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00548140
                    (this_ptr_00,local_18,local_84,local_80,local_1890,&local_18c);
          pfVar12 = (float *)((int)local_124c + (uint)bVar18 * -8 + local_60 + 4);
          *(float *)((int)local_124c + local_60) = local_18c.w;
          pfVar14 = pfVar12 + (uint)bVar18 * -2 + 1;
          *pfVar12 = local_17c[(uint)bVar18 * -2 + -3];
          *pfVar14 = local_17c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + -2];
          pfVar14[(uint)bVar18 * -2 + 1] =
               (local_17c + (uint)bVar18 * -2 + (uint)bVar18 * -2 + -2)[(uint)bVar18 * -2 + 1];
        }
        local_18 = local_18 + 1;
        local_44 = local_44 + 4;
        local_60 = local_60 + 0x10;
      } while (local_18 < this_ptr_00->bone_count);
    }
    iVar8 = this_ptr_00->bone_list[bone_index].parent_index;
    if (-1 < iVar8) {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00548140
                (this_ptr_00,iVar8,local_84,local_80,local_1890,&local_16c);
      pfVar14 = local_124c + iVar8 * 4 + (uint)bVar18 * -2 + 1;
      local_124c[iVar8 * 4] = local_16c.w;
      pfVar12 = (float *)((int)&local_16c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      *pfVar14 = *(float *)((int)&local_16c + (uint)bVar18 * -8 + 4);
      pfVar14[(uint)bVar18 * -2 + 1] = *pfVar12;
      (pfVar14 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] = pfVar12[(uint)bVar18 * -2 + 1];
    }
    local_28 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_50 = 0;
      local_70 = (this_ptr->bone_transform).pose_data.bone_rotations;
      local_58 = this_ptr_00;
      local_34 = this_ptr;
      do {
        if (-1 < *(int *)((int)aiStack_43c + local_50)) {
          iVar8 = local_58->bone_list[0].parent_index;
          local_64 = local_28 * 0x10;
          if (iVar8 < 0) {
            pfVar12 = local_124c + local_28 * 4;
          }
          else {
            local_7c = iVar8 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_00585930(local_124c + iVar8 * 4);
            pfVar12 = afStack_1c8 + 3;
            iVar8 = (int)local_124c + local_64;
            afStack_1c8[3] = afStack_128[3];
            afStack_1c8[(uint)bVar18 * -2 + 4] = afStack_128[(uint)bVar18 * -2 + 4];
            afStack_1c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] =
                 afStack_128[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5];
            (afStack_1c8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1] =
                 (afStack_128 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_00585990(iVar8,pfVar12);
            iVar8 = (int)&local_70->w + local_7c;
            afStack_158[3] = (float)local_20c;
            afStack_158[(uint)bVar18 * -2 + 4] = afStack_248[(uint)bVar18 * -2 + 0x10];
            afStack_158[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] =
                 afStack_248[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x11];
            (afStack_158 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1] =
                 (afStack_248 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x11)[(uint)bVar18 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_158 + 3,iVar8);
            pfVar12 = afStack_248 + 0x1b;
          }
          pfVar16 = (float *)((int)local_34 + (uint)bVar18 * -8 + 0x6b4);
          pfVar14 = pfVar12 + (uint)bVar18 * -2 + 1;
          (local_34->bone_transform).pose_data.bone_rotations[0].w = *pfVar12;
          pfVar12 = pfVar16 + (uint)bVar18 * -2 + 1;
          *pfVar16 = *pfVar14;
          *pfVar12 = pfVar14[(uint)bVar18 * -2 + 1];
          pfVar12[(uint)bVar18 * -2 + 1] = (pfVar14 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
        }
        local_28 = local_28 + 1;
        local_50 = local_50 + 4;
        local_34 = (CDeformableModelInstance *)&(local_34->base).tween_speed;
        local_58 = (CSkeleton *)((local_58->motion_list).state_names[1] + 2);
      } while (local_28 < this_ptr_00->bone_count);
    }
  }
  else if (this_ptr->bone_update_mode == BONE_UPDATE_HIERARCHICAL_RESTPOSE) {
    pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
    local_14 = 0;
    local_6c = (pCVar9->motion_list).motions[motion_index].frame_start;
    if (0 < this_ptr_00->bone_count) {
      local_3c = 0;
      local_38 = 0;
      do {
        iVar8 = local_14;
        iVar7 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_005481d0
                          (this_ptr_00,local_14,bone_index);
        *(int *)((int)aiStack_5cc + local_38) = iVar7;
        if (-1 < iVar7) {
          pCVar10 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120
                              (this_ptr_00,iVar8,local_6c);
          puVar13 = (uint *)((int)local_124c + (uint)bVar18 * -8 + local_3c + 0x644);
          puVar11 = (uint *)((int)pCVar10 + (uint)bVar18 * -8 + 4);
          *(float *)((int)local_124c + local_3c + 0x640) = pCVar10->w;
          puVar15 = puVar13 + (uint)bVar18 * -2 + 1;
          puVar17 = puVar11 + (uint)bVar18 * -2 + 1;
          *puVar13 = *puVar11;
          *puVar15 = *puVar17;
          puVar15[(uint)bVar18 * -2 + 1] = puVar17[(uint)bVar18 * -2 + 1];
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00548140
                    (this_ptr_00,local_14,local_84,local_80,local_1890,&local_dc);
          puVar17 = (uint *)((int)local_188c + (uint)bVar18 * -8 + local_3c + 4);
          *(float *)((int)local_188c + local_3c) = local_dc.w;
          puVar13 = puVar17 + (uint)bVar18 * -2 + 1;
          puVar11 = (uint *)((int)&local_dc + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
          *puVar17 = *(uint *)((int)&local_dc + (uint)bVar18 * -8 + 4);
          *puVar13 = *puVar11;
          puVar13[(uint)bVar18 * -2 + 1] = puVar11[(uint)bVar18 * -2 + 1];
        }
        local_14 = local_14 + 1;
        local_38 = local_38 + 4;
        local_3c = local_3c + 0x10;
      } while (local_14 < this_ptr_00->bone_count);
    }
    iVar8 = this_ptr_00->bone_list[bone_index].parent_index;
    local_74 = iVar8;
    if (-1 < iVar8) {
      pCVar10 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120
                          (this_ptr_00,iVar8,local_6c);
      pfVar16 = local_124c + iVar8 * 4 + (uint)bVar18 * -2 + 0x191;
      pfVar12 = (float *)((int)pCVar10 + (uint)bVar18 * -8 + 4);
      local_124c[iVar8 * 4 + 400] = pCVar10->w;
      pfVar14 = pfVar12 + (uint)bVar18 * -2 + 1;
      *pfVar16 = *pfVar12;
      pfVar16[(uint)bVar18 * -2 + 1] = *pfVar14;
      (pfVar16 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] = pfVar14[(uint)bVar18 * -2 + 1];
      local_7c = iVar8 * 0x10;
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00548140
                (this_ptr_00,local_74,local_84,local_80,local_1890,&local_29c);
      puVar17 = (uint *)((int)local_188c + (uint)bVar18 * -8 + local_7c + 4);
      *(float *)((int)local_188c + local_7c) = local_29c.w;
      puVar13 = puVar17 + (uint)bVar18 * -2 + 1;
      puVar11 = (uint *)((int)&local_29c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
      *puVar17 = *(uint *)((int)&local_29c + (uint)bVar18 * -8 + 4);
      *puVar13 = *puVar11;
      puVar13[(uint)bVar18 * -2 + 1] = puVar11[(uint)bVar18 * -2 + 1];
    }
    local_2c = 0;
    if (0 < this_ptr_00->bone_count) {
      local_4c = 0;
      local_68 = (this_ptr->bone_transform).pose_data.bone_rotations;
      local_5c = this_ptr_00;
      local_1c = this_ptr;
      do {
        iVar8 = local_2c;
        if (-1 < *(int *)((int)aiStack_5cc + local_4c)) {
          local_24 = local_5c->bone_list[0].parent_index;
          pfVar12 = local_124c + local_2c * 4 + (uint)bVar18 * -2 + 0x191;
          local_2ac = local_124c[local_2c * 4 + 400];
          afStack_2a8[(uint)bVar18 * -2] = *pfVar12;
          afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] = pfVar12[(uint)bVar18 * -2 + 1];
          (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
               (pfVar12 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          pfVar12 = local_188c + iVar8 * 4 + (uint)bVar18 * -2 + 1;
          afStack_288[3] = local_188c[iVar8 * 4];
          afStack_288[(uint)bVar18 * -2 + 4] = *pfVar12;
          iVar8 = local_24;
          afStack_288[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] = pfVar12[(uint)bVar18 * -2 + 1];
          (afStack_288 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1] =
               (pfVar12 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          pfVar12 = (float *)((int)local_1c + (uint)bVar18 * -8 + 0x6b4);
          local_28c = (local_1c->bone_transform).pose_data.bone_rotations[0].w;
          pfVar14 = pfVar12 + (uint)bVar18 * -2 + 1;
          afStack_288[(uint)bVar18 * -2] = *pfVar12;
          afStack_288[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] = *pfVar14;
          (afStack_288 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
               pfVar14[(uint)bVar18 * -2 + 1];
          if (-1 < iVar8) {
            local_7c = iVar8 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_00585930(local_124c + iVar8 * 4 + 400);
            pfVar12 = afStack_248 + 3;
            afStack_248[3] = (float)local_24c;
            afStack_248[(uint)bVar18 * -2 + 4] = afStack_248[(uint)bVar18 * -2];
            afStack_248[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] =
                 afStack_248[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
            (afStack_248 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1] =
                 (afStack_248 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_2ac,pfVar12);
            local_2ac = local_1ac;
            afStack_2a8[(uint)bVar18 * -2] = afStack_1c8[(uint)bVar18 * -2 + 8];
            afStack_2a8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                 afStack_1c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 9];
            (afStack_2a8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
                 (afStack_1c8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 9)[(uint)bVar18 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_00585930((int)local_188c + local_7c);
            pfVar12 = afStack_248 + 7;
            local_22c[0] = (float)local_21c;
            afStack_248[(uint)bVar18 * -2 + 8] = afStack_248[(uint)bVar18 * -2 + 0xc];
            afStack_248[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 9] =
                 afStack_248[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
            (afStack_248 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 9)[(uint)bVar18 * -2 + 1] =
                 (afStack_248 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd)[(uint)bVar18 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_288 + 3,pfVar12);
            iVar8 = (int)&local_68->w + local_7c;
            afStack_288[3] = local_1fc;
            afStack_288[(uint)bVar18 * -2 + 4] = afStack_248[(uint)bVar18 * -2 + 0x14];
            afStack_288[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] =
                 afStack_248[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x15];
            (afStack_288 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 5)[(uint)bVar18 * -2 + 1] =
                 (afStack_248 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x15)[(uint)bVar18 * -2 + 1]
            ;
            core_xform_cpp_negateFirstComponent_FUN_00585930(iVar8);
            pfVar12 = afStack_288 + 7;
            local_26c[0] = (float)local_1ec;
            afStack_288[(uint)bVar18 * -2 + 8] = afStack_248[(uint)bVar18 * -2 + 0x18];
            afStack_288[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 9] =
                 afStack_248[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19];
            (afStack_288 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 9)[(uint)bVar18 * -2 + 1] =
                 (afStack_248 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x19)[(uint)bVar18 * -2 + 1]
            ;
            core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_28c,pfVar12);
            local_28c = local_1cc;
            afStack_288[(uint)bVar18 * -2] = afStack_1c8[(uint)bVar18 * -2];
            afStack_288[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
                 afStack_1c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1];
            (afStack_288 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
                 (afStack_1c8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
          }
          core_xform_cpp_negateFirstComponent_FUN_00585930(&local_2ac);
          puVar11 = &local_12c;
          local_12c = local_fc;
          afStack_128[(uint)bVar18 * -2] = afStack_128[(uint)bVar18 * -2 + 0xc];
          afStack_128[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
               afStack_128[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd];
          (afStack_128 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
               (afStack_128 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd)[(uint)bVar18 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_288 + 3,puVar11);
          puVar11 = &local_15c;
          local_15c = local_10c;
          afStack_158[(uint)bVar18 * -2] = afStack_128[(uint)bVar18 * -2 + 8];
          afStack_158[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 1] =
               afStack_128[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 9];
          (afStack_158 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
               (afStack_128 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 9)[(uint)bVar18 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00585990(&local_28c,puVar11);
          iVar8 = local_24;
          local_19c[0] = local_ec[0];
          afStack_1c8[(uint)bVar18 * -2 + 0xc] = afStack_128[(uint)bVar18 * -2 + 0x10];
          afStack_1c8[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd] =
               afStack_128[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x11];
          (afStack_1c8 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xd)[(uint)bVar18 * -2 + 1] =
               (afStack_128 + (uint)bVar18 * -2 + (uint)bVar18 * -2 + 0x11)[(uint)bVar18 * -2 + 1];
          if (iVar8 < 0) {
            pfVar12 = afStack_128 + 0xf;
          }
          else {
            core_xform_cpp_multiplyQuaternion_FUN_00585990(afStack_1c8 + 0xb,local_68 + iVar8);
            pfVar12 = local_17c;
          }
          pfVar16 = (float *)((int)local_1c + (uint)bVar18 * -8 + 0x6b4);
          pfVar14 = pfVar12 + (uint)bVar18 * -2 + 1;
          (local_1c->bone_transform).pose_data.bone_rotations[0].w = *pfVar12;
          pfVar12 = pfVar16 + (uint)bVar18 * -2 + 1;
          *pfVar16 = *pfVar14;
          *pfVar12 = pfVar14[(uint)bVar18 * -2 + 1];
          pfVar12[(uint)bVar18 * -2 + 1] = (pfVar14 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1];
        }
        local_2c = local_2c + 1;
        local_4c = local_4c + 4;
        local_5c = (CSkeleton *)((local_5c->motion_list).state_names[1] + 2);
        local_1c = (CDeformableModelInstance *)&(local_1c->base).tween_speed;
      } while (local_2c < this_ptr_00->bone_count);
    }
  }
  else {
    local_20 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_48 = this_ptr;
      do {
        iVar8 = local_20;
        iVar7 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_005481d0
                          (this_ptr_00,local_20,bone_index);
        if (-1 < iVar7) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00548140
                    (this_ptr_00,iVar8,local_84,local_80,local_1890,&local_25c);
          puVar17 = (uint *)((int)local_48 + (uint)bVar18 * -8 + 0x6b4);
          (local_48->bone_transform).pose_data.bone_rotations[0].w = local_25c.w;
          puVar13 = puVar17 + (uint)bVar18 * -2 + 1;
          puVar11 = (uint *)((int)&local_25c + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
          *puVar17 = *(uint *)((int)&local_25c + (uint)bVar18 * -8 + 4);
          *puVar13 = *puVar11;
          puVar13[(uint)bVar18 * -2 + 1] = puVar11[(uint)bVar18 * -2 + 1];
        }
        local_48 = (CDeformableModelInstance *)&(local_48->base).tween_speed;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr_00->bone_count);
    }
  }
  return;
}
