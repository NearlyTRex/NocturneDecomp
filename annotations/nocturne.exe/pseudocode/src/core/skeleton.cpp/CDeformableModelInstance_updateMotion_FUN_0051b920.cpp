// Name: core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
// Address: 0051b920
// Address Range: [[0051b920, 0051c3c3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920(CDeformableModelInstance *this_ptr,int motion_index,float frame_number,int bone_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920(CDeformableModelInstance *this_ptr,int motion_index,float frame_number,int bone_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  float fVar7;
  CDeformableModelInstance *pCVar8;
  CSkeleton *this_ptr_00;
  int iVar9;
  CSkeleton *pCVar10;
  int iVar11;
  CQuaternion4f *pCVar12;
  uint *puVar13;
  float *pfVar14;
  float *pfVar15;
  uint *puVar16;
  uint *puVar17;
  float *pfVar18;
  uint *puVar19;
  byte bVar20;
  float afStackY_1a68 [120];
  float local_1870;
  CQuaternion4f local_186c [95];
  float afStack_1274 [18];
  CQuaternion4f local_122c;
  float afStack_1214 [394];
  CQuaternion4f local_bec [100];
  int aiStack_5ac [100];
  int aiStack_41c [100];
  float local_28c;
  float afStack_288 [7];
  float local_26c [4];
  float local_25c;
  CQuaternion4f local_24c;
  CQuaternion4f local_23c;
  CQuaternion4f local_22c;
  CQuaternion4f local_21c;
  float local_20c;
  float afStack_208 [3];
  CQuaternion4f local_1fc;
  uint local_1ec;
  float afStack_1e8 [7];
  CQuaternion4f local_1cc;
  CQuaternion4f local_1bc;
  float local_1ac;
  float afStack_1a8 [7];
  float local_18c [4];
  float local_17c [4];
  CQuaternion4f local_16c;
  CQuaternion4f local_15c;
  uint local_14c;
  float afStack_148 [7];
  CQuaternion4f local_12c;
  float local_11c [4];
  CQuaternion4f local_10c;
  CQuaternion4f local_fc;
  float local_ec;
  float afStack_e8 [7];
  CQuaternion4f local_cc;
  uint local_bc;
  float afStack_b8 [9];
  float local_94 [3];
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  CQuaternion4f *local_74;
  int local_70;
  CQuaternion4f *local_6c;
  int local_68;
  int local_64;
  CDeformableModelInstance *local_60;
  CDeformableModelInstance *local_5c;
  int local_58;
  int local_54;
  CSkeleton *local_50;
  CSkeleton *local_4c;
  CDeformableModelInstance *local_48;
  int local_44;
  int local_40;
  CDeformableModelInstance *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CDeformableModelInstance *local_20;
  int local_1c;
  int local_18;
  
  bVar20 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_004e2070
            (&this_ptr->motion_controller,motion_index,frame_number,&local_84,&local_88,
             &stack0xffffe790);
  if (bone_index < 0) {
    local_34 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_5c = this_ptr;
      local_3c = this_ptr;
      do {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                  (this_ptr_00,local_34,local_84,local_88,local_1870,&local_24c);
        pCVar8 = local_3c;
        local_3c = (CDeformableModelInstance *)&(local_3c->motion_controller).current_motion_index;
        puVar19 = (uint *)((int)local_5c + (uint)bVar20 * -8 + 0x6b4);
        (local_5c->bone_transform).pose_data.bone_rotations[0].w = local_24c.w;
        puVar16 = puVar19 + (uint)bVar20 * -2 + 1;
        puVar13 = (uint *)((int)&local_23c + ((uint)bVar20 * -2 + (uint)bVar20 * -2 + -2) * 4)
        ;
        *puVar19 = *(uint *)((int)&local_23c + ((uint)bVar20 * -2 + -3) * 4);
        *puVar16 = *puVar13;
        puVar16[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
        (pCVar8->bone_transform).bone_scales[0] = pCVar8->rest_pose_data[0];
        local_34 = local_34 + 1;
        local_5c = (CDeformableModelInstance *)&(local_5c->motion_controller).tween_speed;
      } while (local_34 < this_ptr_00->bone_count);
    }
    pCVar5 = this_ptr_00->frame_positions_1;
    fVar1 = pCVar5[local_88].y;
    fVar2 = pCVar5[local_88].z;
    fVar7 = 1.0 - local_1870;
    pCVar6 = this_ptr_00->frame_positions_1;
    fVar3 = pCVar6[local_84].y;
    fVar4 = pCVar6[local_84].z;
    if (&this_ptr->bone_transform != (SPose *)local_94) {
      (this_ptr->bone_transform).pose_data.root_position.x =
           pCVar6[local_84].x * fVar7 + pCVar5[local_88].x * local_1870;
      (this_ptr->bone_transform).pose_data.root_position.y = fVar3 * fVar7 + fVar1 * local_1870;
      (this_ptr->bone_transform).pose_data.root_position.z = fVar4 * fVar7 + fVar2 * local_1870;
    }
    fVar1 = (this_ptr->scaled_model_dimensions).x;
    fVar2 = (this_ptr->bone_transform).pose_data.root_position.x;
    fVar3 = (this_ptr->scaled_model_dimensions).z;
    fVar4 = (this_ptr->bone_transform).pose_data.root_position.z;
    (this_ptr->bone_transform).pose_data.root_position.y =
         (this_ptr->scaled_model_dimensions).y *
         (this_ptr->bone_transform).pose_data.root_position.y;
    (this_ptr->bone_transform).pose_data.root_position.z = fVar3 * fVar4;
    (this_ptr->bone_transform).pose_data.root_position.x = fVar1 * fVar2;
    return;
  }
  if (this_ptr->bone_update_mode == 1) {
    local_1c = 0;
    if (0 < this_ptr_00->bone_count) {
      local_54 = 0;
      local_38 = 0;
      do {
        iVar11 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                           (this_ptr_00,local_1c,bone_index);
        *(int *)((int)aiStack_5ac + local_38) = iVar11;
        if (-1 < iVar11) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                    (this_ptr_00,local_1c,local_84,local_88,local_1870,&local_cc);
          puVar19 = (uint *)((int)local_bec + (uint)bVar20 * -8 + local_54 + 4);
          *(float *)((int)&local_bec[0].w + local_54) = local_cc.w;
          puVar16 = puVar19 + (uint)bVar20 * -2 + 1;
          puVar13 = (uint *)((int)&local_cc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          *puVar19 = *(uint *)((int)&local_cc + (uint)bVar20 * -8 + 4);
          *puVar16 = *puVar13;
          puVar16[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
        }
        local_1c = local_1c + 1;
        local_38 = local_38 + 4;
        local_54 = local_54 + 0x10;
      } while (local_1c < this_ptr_00->bone_count);
    }
    iVar11 = this_ptr_00->bone_list[bone_index].parent_index;
    if (-1 < iVar11) {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                (this_ptr_00,iVar11,local_84,local_88,local_1870,&local_1bc);
      puVar19 = (uint *)((int)local_bec + (uint)bVar20 * -8 + iVar11 * 0x10 + 4);
      local_bec[iVar11].w = local_1bc.w;
      puVar16 = puVar19 + (uint)bVar20 * -2 + 1;
      puVar13 = (uint *)((int)&local_1bc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      *puVar19 = *(uint *)((int)&local_1bc + (uint)bVar20 * -8 + 4);
      *puVar16 = *puVar13;
      puVar16[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
    }
    local_2c = 0;
    if (0 < this_ptr_00->bone_count) {
      local_58 = 0;
      local_74 = (this_ptr->bone_transform).pose_data.bone_rotations;
      local_4c = this_ptr_00;
      local_48 = this_ptr;
      do {
        if (-1 < *(int *)((int)aiStack_5ac + local_58)) {
          iVar11 = local_4c->bone_list[0].parent_index;
          local_68 = local_2c * 0x10;
          if (iVar11 < 0) {
            pCVar12 = local_bec + local_2c;
          }
          else {
            local_80 = iVar11 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_0055d0d0(local_bec + iVar11,&local_15c);
            pfVar15 = &local_20c;
            iVar11 = (int)&local_bec[0].w + local_68;
            local_20c = local_15c.w;
            pfVar14 = (float *)((int)&local_15c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            afStack_208[(uint)bVar20 * -2] = *(float *)((int)&local_15c + (uint)bVar20 * -8 + 4);
            afStack_208[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] = *pfVar14;
            (afStack_208 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
                 pfVar14[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(iVar11,pfVar15);
            iVar11 = (int)&local_74->w + local_80;
            local_bc = local_14c;
            afStack_b8[(uint)bVar20 * -2] = afStack_148[(uint)bVar20 * -2];
            afStack_b8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 afStack_148[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1];
            (afStack_b8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
                 (afStack_148 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_bc,iVar11);
            pCVar12 = &local_23c;
          }
          puVar16 = (uint *)((int)local_48 + (uint)bVar20 * -8 + 0x6b4);
          puVar13 = (uint *)((int)pCVar12 + ((uint)bVar20 * -2 + 1) * 4);
          (local_48->bone_transform).pose_data.bone_rotations[0].w = pCVar12->w;
          puVar17 = puVar16 + (uint)bVar20 * -2 + 1;
          puVar19 = puVar13 + (uint)bVar20 * -2 + 1;
          *puVar16 = *puVar13;
          *puVar17 = *puVar19;
          puVar17[(uint)bVar20 * -2 + 1] = puVar19[(uint)bVar20 * -2 + 1];
        }
        local_2c = local_2c + 1;
        local_58 = local_58 + 4;
        local_48 = (CDeformableModelInstance *)&(local_48->motion_controller).tween_speed;
        local_4c = (CSkeleton *)((local_4c->motion_list).state_names[1] + 2);
      } while (local_2c < this_ptr_00->bone_count);
    }
  }
  else if (this_ptr->bone_update_mode == 2) {
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
    local_18 = 0;
    local_70 = (pCVar10->motion_list).motions[motion_index].frame_start;
    if (0 < this_ptr_00->bone_count) {
      local_44 = 0;
      local_40 = 0;
      do {
        iVar11 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                           (this_ptr_00,local_18,bone_index);
        *(int *)((int)aiStack_41c + local_40) = iVar11;
        if (-1 < iVar11) {
          pCVar12 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60
                              (this_ptr_00,local_18,local_70);
          puVar16 = (uint *)((int)&local_122c + (uint)bVar20 * -8 + local_44 + 4);
          puVar13 = (uint *)((int)pCVar12 + (uint)bVar20 * -8 + 4);
          *(float *)((int)&local_122c.w + local_44) = pCVar12->w;
          puVar17 = puVar16 + (uint)bVar20 * -2 + 1;
          puVar19 = puVar13 + (uint)bVar20 * -2 + 1;
          *puVar16 = *puVar13;
          *puVar17 = *puVar19;
          puVar17[(uint)bVar20 * -2 + 1] = puVar19[(uint)bVar20 * -2 + 1];
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                    (this_ptr_00,local_18,local_84,local_88,local_1870,&local_16c);
          puVar19 = (uint *)((int)local_186c + (uint)bVar20 * -8 + local_44 + 4);
          *(float *)((int)&local_186c[0].w + local_44) = local_16c.w;
          puVar16 = puVar19 + (uint)bVar20 * -2 + 1;
          puVar13 = (uint *)((int)&local_16c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          *puVar19 = *(uint *)((int)&local_16c + (uint)bVar20 * -8 + 4);
          *puVar16 = *puVar13;
          puVar16[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
        }
        local_18 = local_18 + 1;
        local_40 = local_40 + 4;
        local_44 = local_44 + 0x10;
      } while (local_18 < this_ptr_00->bone_count);
    }
    iVar11 = this_ptr_00->bone_list[bone_index].parent_index;
    local_78 = iVar11;
    if (-1 < iVar11) {
      pCVar12 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60
                          (this_ptr_00,iVar11,local_70);
      puVar16 = (uint *)((int)&local_122c + (uint)bVar20 * -8 + iVar11 * 0x10 + 4);
      puVar13 = (uint *)((int)pCVar12 + (uint)bVar20 * -8 + 4);
      (&local_122c)[iVar11].w = pCVar12->w;
      puVar17 = puVar16 + (uint)bVar20 * -2 + 1;
      puVar19 = puVar13 + (uint)bVar20 * -2 + 1;
      *puVar16 = *puVar13;
      *puVar17 = *puVar19;
      puVar17[(uint)bVar20 * -2 + 1] = puVar19[(uint)bVar20 * -2 + 1];
      local_80 = iVar11 * 0x10;
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                (this_ptr_00,local_78,local_84,local_88,local_1870,&local_22c);
      puVar19 = (uint *)((int)local_186c + (uint)bVar20 * -8 + local_80 + 4);
      *(float *)((int)&local_186c[0].w + local_80) = local_22c.w;
      puVar16 = puVar19 + (uint)bVar20 * -2 + 1;
      puVar13 = (uint *)((int)&local_22c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
      *puVar19 = *(uint *)((int)&local_22c + (uint)bVar20 * -8 + 4);
      *puVar16 = *puVar13;
      puVar16[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
    }
    local_30 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_64 = 0;
      local_6c = (this_ptr->bone_transform).pose_data.bone_rotations;
      local_50 = this_ptr_00;
      local_20 = this_ptr;
      do {
        iVar11 = local_30;
        if (-1 < *(int *)((int)aiStack_41c + local_64)) {
          local_28 = local_50->bone_list[0].parent_index;
          iVar9 = local_30 * 0x10;
          puVar13 = (uint *)((int)&local_122c + (uint)bVar20 * -8 + iVar9 + 4);
          local_1cc.w = (&local_122c)[local_30].w;
          puVar16 = (uint *)((int)&local_1cc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          puVar19 = puVar13 + (uint)bVar20 * -2 + 1;
          *(uint *)((int)&local_1cc + (uint)bVar20 * -8 + 4) = *puVar13;
          *puVar16 = *puVar19;
          puVar16[(uint)bVar20 * -2 + 1] = puVar19[(uint)bVar20 * -2 + 1];
          pfVar15 = (float *)((int)local_186c + (uint)bVar20 * -8 + iVar9 + 4);
          afStack_e8[3] = local_186c[iVar11].w;
          pfVar14 = pfVar15 + (uint)bVar20 * -2 + 1;
          afStack_e8[(uint)bVar20 * -2 + 4] = *pfVar15;
          iVar11 = local_28;
          afStack_e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5] = *pfVar14;
          (afStack_e8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1] =
               pfVar14[(uint)bVar20 * -2 + 1];
          pfVar15 = (float *)((int)local_20 + (uint)bVar20 * -8 + 0x6b4);
          local_ec = (local_20->bone_transform).pose_data.bone_rotations[0].w;
          pfVar14 = pfVar15 + (uint)bVar20 * -2 + 1;
          afStack_e8[(uint)bVar20 * -2] = *pfVar15;
          afStack_e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] = *pfVar14;
          (afStack_e8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
               pfVar14[(uint)bVar20 * -2 + 1];
          if (-1 < iVar11) {
            local_80 = iVar11 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_0055d0d0(&local_122c + iVar11,&local_fc);
            pfVar15 = &local_1ac;
            local_1ac = local_fc.w;
            pfVar14 = (float *)((int)&local_fc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            afStack_1a8[(uint)bVar20 * -2] = *(float *)((int)&local_fc + (uint)bVar20 * -8 + 4);
            afStack_1a8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] = *pfVar14;
            (afStack_1a8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
                 pfVar14[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_1cc,pfVar15);
            local_1cc.w = local_25c;
            pfVar15 = (float *)((int)&local_1cc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            *(float *)((int)&local_1cc + (uint)bVar20 * -8 + 4) =
                 afStack_288[(uint)bVar20 * -2 + 0xc];
            *pfVar15 = afStack_288[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd];
            pfVar15[(uint)bVar20 * -2 + 1] =
                 (afStack_288 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_0055d0d0
                      ((CQuaternion4f *)((int)&local_186c[0].w + local_80),&local_1fc);
            pfVar15 = &local_28c;
            local_28c = local_1fc.w;
            pfVar14 = (float *)((int)&local_1fc + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            afStack_288[(uint)bVar20 * -2] = *(float *)((int)&local_1fc + (uint)bVar20 * -8 + 4);
            afStack_288[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] = *pfVar14;
            (afStack_288 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
                 pfVar14[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_e8 + 3,pfVar15);
            pCVar12 = (CQuaternion4f *)((int)&local_6c->w + local_80);
            afStack_e8[3] = afStack_1a8[3];
            afStack_e8[(uint)bVar20 * -2 + 4] = afStack_1a8[(uint)bVar20 * -2 + 4];
            afStack_e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5] =
                 afStack_1a8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5];
            (afStack_e8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1] =
                 (afStack_1a8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_0055d0d0(pCVar12,&local_10c);
            pfVar15 = afStack_1a8 + 7;
            local_18c[0] = local_10c.w;
            pfVar14 = (float *)((int)&local_10c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
            afStack_1a8[(uint)bVar20 * -2 + 8] = *(float *)((int)&local_10c + (uint)bVar20 * -8 + 4)
            ;
            afStack_1a8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 9] = *pfVar14;
            (afStack_1a8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 9)[(uint)bVar20 * -2 + 1] =
                 pfVar14[(uint)bVar20 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_ec,pfVar15);
            local_ec = afStack_148[3];
            afStack_e8[(uint)bVar20 * -2] = afStack_148[(uint)bVar20 * -2 + 4];
            afStack_e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
                 afStack_148[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5];
            (afStack_e8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
                 (afStack_148 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1];
          }
          core_xform_cpp_negateFirstComponent_FUN_0055d0d0(&local_1cc,&local_12c);
          pfVar15 = afStack_1e8 + 3;
          afStack_1e8[3] = local_12c.w;
          afStack_1e8[(uint)bVar20 * -2 + 4] = local_11c[(uint)bVar20 * -2 + -3];
          afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5] =
               local_11c[(uint)bVar20 * -2 + (uint)bVar20 * -2 + -2];
          (afStack_1e8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1] =
               (local_11c + (uint)bVar20 * -2 + (uint)bVar20 * -2 + -2)[(uint)bVar20 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_e8 + 3,pfVar15);
          puVar13 = &local_1ec;
          local_1ec = afStack_288[3];
          afStack_1e8[(uint)bVar20 * -2] = afStack_288[(uint)bVar20 * -2 + 4];
          afStack_1e8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
               afStack_288[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5];
          (afStack_1e8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
               (afStack_288 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_ec,puVar13);
          iVar11 = local_28;
          local_17c[0] = local_26c[0];
          afStack_1a8[(uint)bVar20 * -2 + 0xc] = afStack_288[(uint)bVar20 * -2 + 8];
          afStack_1a8[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd] =
               afStack_288[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 9];
          (afStack_1a8 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 0xd)[(uint)bVar20 * -2 + 1] =
               (afStack_288 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 9)[(uint)bVar20 * -2 + 1];
          if (iVar11 < 0) {
            pfVar15 = afStack_288 + 7;
          }
          else {
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(afStack_1a8 + 0xb,local_6c + iVar11);
            pfVar15 = local_11c;
          }
          pfVar18 = (float *)((int)local_20 + (uint)bVar20 * -8 + 0x6b4);
          pfVar14 = pfVar15 + (uint)bVar20 * -2 + 1;
          (local_20->bone_transform).pose_data.bone_rotations[0].w = *pfVar15;
          pfVar15 = pfVar18 + (uint)bVar20 * -2 + 1;
          *pfVar18 = *pfVar14;
          *pfVar15 = pfVar14[(uint)bVar20 * -2 + 1];
          pfVar15[(uint)bVar20 * -2 + 1] = (pfVar14 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1];
        }
        local_30 = local_30 + 1;
        local_64 = local_64 + 4;
        local_50 = (CSkeleton *)((local_50->motion_list).state_names[1] + 2);
        local_20 = (CDeformableModelInstance *)&(local_20->motion_controller).tween_speed;
      } while (local_30 < this_ptr_00->bone_count);
    }
  }
  else {
    local_24 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_60 = this_ptr;
      do {
        iVar11 = local_24;
        iVar9 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_00517b10
                          (this_ptr_00,local_24,bone_index);
        if (-1 < iVar9) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                    (this_ptr_00,iVar11,local_84,local_88,local_1870,&local_21c);
          puVar19 = (uint *)((int)local_60 + (uint)bVar20 * -8 + 0x6b4);
          (local_60->bone_transform).pose_data.bone_rotations[0].w = local_21c.w;
          puVar16 = puVar19 + (uint)bVar20 * -2 + 1;
          puVar13 = (uint *)((int)&local_21c + (uint)bVar20 * -8 + (uint)bVar20 * -8 + 8);
          *puVar19 = *(uint *)((int)&local_21c + (uint)bVar20 * -8 + 4);
          *puVar16 = *puVar13;
          puVar16[(uint)bVar20 * -2 + 1] = puVar13[(uint)bVar20 * -2 + 1];
        }
        local_60 = (CDeformableModelInstance *)&(local_60->motion_controller).tween_speed;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr_00->bone_count);
    }
  }
  return;
}
