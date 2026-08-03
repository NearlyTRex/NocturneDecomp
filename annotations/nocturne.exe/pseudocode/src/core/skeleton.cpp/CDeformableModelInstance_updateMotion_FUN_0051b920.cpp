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
  CQuaternion4f *quat1_in;
  CSkeleton *pCVar10;
  int iVar11;
  CQuaternion4f *pCVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  byte bVar17;
  float afStackY_1a68 [120];
  float local_1870;
  CQuaternion4f local_186c [95];
  float afStack_1274 [18];
  CQuaternion4f local_122c;
  float afStack_1214 [394];
  CQuaternion4f local_bec [100];
  int aiStack_5ac [100];
  int aiStack_41c [100];
  CQuaternion4f local_28c;
  CQuaternion4f local_27c;
  CQuaternion4f local_26c;
  CQuaternion4f local_25c;
  CQuaternion4f local_24c;
  CQuaternion4f local_23c;
  CQuaternion4f local_22c;
  CQuaternion4f local_21c;
  CQuaternion4f local_20c;
  CQuaternion4f local_1fc;
  CQuaternion4f local_1ec;
  CQuaternion4f local_1dc;
  CQuaternion4f local_1cc;
  CQuaternion4f local_1bc;
  CQuaternion4f local_1ac;
  CQuaternion4f local_19c;
  CQuaternion4f local_18c;
  CQuaternion4f local_17c;
  CQuaternion4f local_16c;
  CQuaternion4f local_15c;
  CQuaternion4f local_14c;
  CQuaternion4f local_13c;
  CQuaternion4f local_12c;
  CQuaternion4f local_11c;
  CQuaternion4f local_10c;
  CQuaternion4f local_fc;
  CQuaternion4f local_ec;
  CQuaternion4f local_dc;
  CQuaternion4f local_cc;
  CQuaternion4f local_bc [2];
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
  
  bVar17 = 0;
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
        puVar16 = (uint *)((int)local_5c + (uint)bVar17 * -8 + 0x6b4);
        (local_5c->bone_transform).pose_data.bone_rotations[0].w = local_24c.w;
        puVar15 = puVar16 + (uint)bVar17 * -2 + 1;
        puVar13 = (uint *)((int)&local_24c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
        *puVar16 = *(uint *)((int)&local_24c + (uint)bVar17 * -8 + 4);
        *puVar15 = *puVar13;
        puVar15[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
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
          puVar16 = (uint *)((int)local_bec + (uint)bVar17 * -8 + local_54 + 4);
          *(float *)((int)&local_bec[0].w + local_54) = local_cc.w;
          puVar15 = puVar16 + (uint)bVar17 * -2 + 1;
          puVar13 = (uint *)((int)local_bc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + -8);
          *puVar16 = *(uint *)((int)local_bc + (uint)bVar17 * -8 + -0xc);
          *puVar15 = *puVar13;
          puVar15[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
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
      puVar16 = (uint *)((int)local_bec + (uint)bVar17 * -8 + iVar11 * 0x10 + 4);
      local_bec[iVar11].w = local_1bc.w;
      puVar15 = puVar16 + (uint)bVar17 * -2 + 1;
      puVar13 = (uint *)((int)&local_1bc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      *puVar16 = *(uint *)((int)&local_1bc + (uint)bVar17 * -8 + 4);
      *puVar15 = *puVar13;
      puVar15[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
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
            pCVar12 = &local_20c;
            quat1_in = (CQuaternion4f *)((int)&local_bec[0].w + local_68);
            local_20c.w = local_15c.w;
            puVar16 = (uint *)((int)&local_20c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            puVar13 = (uint *)((int)&local_15c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            *(uint *)((int)&local_20c + (uint)bVar17 * -8 + 4) =
                 *(uint *)((int)&local_15c + (uint)bVar17 * -8 + 4);
            *puVar16 = *puVar13;
            puVar16[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(quat1_in,pCVar12,&local_14c);
            pCVar12 = (CQuaternion4f *)((int)&local_74->w + local_80);
            local_bc[0].w = local_14c.w;
            puVar16 = (uint *)((int)local_bc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            puVar13 = (uint *)((int)&local_14c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            *(uint *)((int)local_bc + (uint)bVar17 * -8 + 4) =
                 *(uint *)((int)&local_14c + (uint)bVar17 * -8 + 4);
            *puVar16 = *puVar13;
            puVar16[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(local_bc,pCVar12,&local_23c);
            pCVar12 = &local_23c;
          }
          puVar15 = (uint *)((int)local_48 + (uint)bVar17 * -8 + 0x6b4);
          puVar13 = (uint *)((int)pCVar12 + ((uint)bVar17 * -2 + 1) * 4);
          (local_48->bone_transform).pose_data.bone_rotations[0].w = pCVar12->w;
          puVar14 = puVar15 + (uint)bVar17 * -2 + 1;
          puVar16 = puVar13 + (uint)bVar17 * -2 + 1;
          *puVar15 = *puVar13;
          *puVar14 = *puVar16;
          puVar14[(uint)bVar17 * -2 + 1] = puVar16[(uint)bVar17 * -2 + 1];
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
          puVar15 = (uint *)((int)&local_122c + (uint)bVar17 * -8 + local_44 + 4);
          puVar13 = (uint *)((int)pCVar12 + (uint)bVar17 * -8 + 4);
          *(float *)((int)&local_122c.w + local_44) = pCVar12->w;
          puVar14 = puVar15 + (uint)bVar17 * -2 + 1;
          puVar16 = puVar13 + (uint)bVar17 * -2 + 1;
          *puVar15 = *puVar13;
          *puVar14 = *puVar16;
          puVar14[(uint)bVar17 * -2 + 1] = puVar16[(uint)bVar17 * -2 + 1];
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                    (this_ptr_00,local_18,local_84,local_88,local_1870,&local_16c);
          puVar16 = (uint *)((int)local_186c + (uint)bVar17 * -8 + local_44 + 4);
          *(float *)((int)&local_186c[0].w + local_44) = local_16c.w;
          puVar15 = puVar16 + (uint)bVar17 * -2 + 1;
          puVar13 = (uint *)((int)&local_16c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          *puVar16 = *(uint *)((int)&local_16c + (uint)bVar17 * -8 + 4);
          *puVar15 = *puVar13;
          puVar15[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
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
      puVar15 = (uint *)((int)&local_122c + (uint)bVar17 * -8 + iVar11 * 0x10 + 4);
      puVar13 = (uint *)((int)pCVar12 + (uint)bVar17 * -8 + 4);
      (&local_122c)[iVar11].w = pCVar12->w;
      puVar14 = puVar15 + (uint)bVar17 * -2 + 1;
      puVar16 = puVar13 + (uint)bVar17 * -2 + 1;
      *puVar15 = *puVar13;
      *puVar14 = *puVar16;
      puVar14[(uint)bVar17 * -2 + 1] = puVar16[(uint)bVar17 * -2 + 1];
      local_80 = iVar11 * 0x10;
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
                (this_ptr_00,local_78,local_84,local_88,local_1870,&local_22c);
      puVar16 = (uint *)((int)local_186c + (uint)bVar17 * -8 + local_80 + 4);
      *(float *)((int)&local_186c[0].w + local_80) = local_22c.w;
      puVar15 = puVar16 + (uint)bVar17 * -2 + 1;
      puVar13 = (uint *)((int)&local_22c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
      *puVar16 = *(uint *)((int)&local_22c + (uint)bVar17 * -8 + 4);
      *puVar15 = *puVar13;
      puVar15[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
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
          puVar13 = (uint *)((int)&local_122c + (uint)bVar17 * -8 + iVar9 + 4);
          local_1cc.w = (&local_122c)[local_30].w;
          puVar15 = (uint *)((int)&local_1cc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          puVar16 = puVar13 + (uint)bVar17 * -2 + 1;
          *(uint *)((int)&local_1cc + (uint)bVar17 * -8 + 4) = *puVar13;
          *puVar15 = *puVar16;
          puVar15[(uint)bVar17 * -2 + 1] = puVar16[(uint)bVar17 * -2 + 1];
          puVar13 = (uint *)((int)local_186c + (uint)bVar17 * -8 + iVar9 + 4);
          local_dc.w = local_186c[iVar11].w;
          puVar15 = (uint *)((int)&local_dc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          puVar16 = puVar13 + (uint)bVar17 * -2 + 1;
          *(uint *)((int)&local_dc + (uint)bVar17 * -8 + 4) = *puVar13;
          iVar11 = local_28;
          *puVar15 = *puVar16;
          puVar15[(uint)bVar17 * -2 + 1] = puVar16[(uint)bVar17 * -2 + 1];
          puVar13 = (uint *)((int)local_20 + (uint)bVar17 * -8 + 0x6b4);
          local_ec.w = (local_20->bone_transform).pose_data.bone_rotations[0].w;
          puVar15 = (uint *)((int)&local_ec + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          puVar16 = puVar13 + (uint)bVar17 * -2 + 1;
          *(uint *)((int)&local_ec + (uint)bVar17 * -8 + 4) = *puVar13;
          *puVar15 = *puVar16;
          puVar15[(uint)bVar17 * -2 + 1] = puVar16[(uint)bVar17 * -2 + 1];
          if (-1 < iVar11) {
            local_80 = iVar11 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_0055d0d0(&local_122c + iVar11,&local_fc);
            pCVar12 = &local_1ac;
            local_1ac.w = local_fc.w;
            puVar16 = (uint *)((int)&local_1ac + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            puVar13 = (uint *)((int)&local_fc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            *(uint *)((int)&local_1ac + (uint)bVar17 * -8 + 4) =
                 *(uint *)((int)&local_fc + (uint)bVar17 * -8 + 4);
            *puVar16 = *puVar13;
            puVar16[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_1cc,pCVar12,&local_25c);
            local_1cc.w = local_25c.w;
            puVar16 = (uint *)((int)&local_1cc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            puVar13 = (uint *)((int)&local_25c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            *(uint *)((int)&local_1cc + (uint)bVar17 * -8 + 4) =
                 *(uint *)((int)&local_25c + (uint)bVar17 * -8 + 4);
            *puVar16 = *puVar13;
            puVar16[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_0055d0d0
                      ((CQuaternion4f *)((int)&local_186c[0].w + local_80),&local_1fc);
            pCVar12 = &local_28c;
            local_28c.w = local_1fc.w;
            puVar16 = (uint *)((int)&local_28c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            puVar13 = (uint *)((int)&local_1fc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            *(uint *)((int)&local_28c + (uint)bVar17 * -8 + 4) =
                 *(uint *)((int)&local_1fc + (uint)bVar17 * -8 + 4);
            *puVar16 = *puVar13;
            puVar16[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_dc,pCVar12,&local_19c);
            pCVar12 = (CQuaternion4f *)((int)&local_6c->w + local_80);
            local_dc.w = local_19c.w;
            puVar16 = (uint *)((int)&local_dc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            puVar13 = (uint *)((int)&local_19c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            *(uint *)((int)&local_dc + (uint)bVar17 * -8 + 4) =
                 *(uint *)((int)&local_19c + (uint)bVar17 * -8 + 4);
            *puVar16 = *puVar13;
            puVar16[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_0055d0d0(pCVar12,&local_10c);
            pCVar12 = &local_18c;
            local_18c.w = local_10c.w;
            puVar16 = (uint *)((int)&local_18c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            puVar13 = (uint *)((int)&local_10c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            *(uint *)((int)&local_18c + (uint)bVar17 * -8 + 4) =
                 *(uint *)((int)&local_10c + (uint)bVar17 * -8 + 4);
            *puVar16 = *puVar13;
            puVar16[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_ec,pCVar12,&local_13c);
            local_ec.w = local_13c.w;
            puVar16 = (uint *)((int)&local_ec + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            puVar13 = (uint *)((int)&local_13c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
            *(uint *)((int)&local_ec + (uint)bVar17 * -8 + 4) =
                 *(uint *)((int)&local_13c + (uint)bVar17 * -8 + 4);
            *puVar16 = *puVar13;
            puVar16[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
          }
          core_xform_cpp_negateFirstComponent_FUN_0055d0d0(&local_1cc,&local_12c);
          pCVar12 = &local_1dc;
          local_1dc.w = local_12c.w;
          puVar16 = (uint *)((int)&local_1dc + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          puVar13 = (uint *)((int)&local_12c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          *(uint *)((int)&local_1dc + (uint)bVar17 * -8 + 4) =
               *(uint *)((int)&local_12c + (uint)bVar17 * -8 + 4);
          *puVar16 = *puVar13;
          puVar16[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_dc,pCVar12,&local_27c);
          pCVar12 = &local_1ec;
          local_1ec.w = local_27c.w;
          puVar16 = (uint *)((int)&local_1ec + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          puVar13 = (uint *)((int)&local_27c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          *(uint *)((int)&local_1ec + (uint)bVar17 * -8 + 4) =
               *(uint *)((int)&local_27c + (uint)bVar17 * -8 + 4);
          *puVar16 = *puVar13;
          puVar16[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_ec,pCVar12,&local_26c);
          iVar11 = local_28;
          local_17c.w = local_26c.w;
          puVar16 = (uint *)((int)&local_17c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          puVar13 = (uint *)((int)&local_26c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          *(uint *)((int)&local_17c + (uint)bVar17 * -8 + 4) =
               *(uint *)((int)&local_26c + (uint)bVar17 * -8 + 4);
          *puVar16 = *puVar13;
          puVar16[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
          if (iVar11 < 0) {
            pCVar12 = &local_26c;
          }
          else {
            core_xform_cpp_multiplyQuaternion_FUN_0055d130(&local_17c,local_6c + iVar11,&local_11c);
            pCVar12 = &local_11c;
          }
          puVar15 = (uint *)((int)local_20 + (uint)bVar17 * -8 + 0x6b4);
          puVar13 = (uint *)((int)pCVar12 + ((uint)bVar17 * -2 + 1) * 4);
          (local_20->bone_transform).pose_data.bone_rotations[0].w = pCVar12->w;
          puVar14 = puVar15 + (uint)bVar17 * -2 + 1;
          puVar16 = puVar13 + (uint)bVar17 * -2 + 1;
          *puVar15 = *puVar13;
          *puVar14 = *puVar16;
          puVar14[(uint)bVar17 * -2 + 1] = puVar16[(uint)bVar17 * -2 + 1];
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
          puVar16 = (uint *)((int)local_60 + (uint)bVar17 * -8 + 0x6b4);
          (local_60->bone_transform).pose_data.bone_rotations[0].w = local_21c.w;
          puVar15 = puVar16 + (uint)bVar17 * -2 + 1;
          puVar13 = (uint *)((int)&local_21c + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
          *puVar16 = *(uint *)((int)&local_21c + (uint)bVar17 * -8 + 4);
          *puVar15 = *puVar13;
          puVar15[(uint)bVar17 * -2 + 1] = puVar13[(uint)bVar17 * -2 + 1];
        }
        local_60 = (CDeformableModelInstance *)&(local_60->motion_controller).tween_speed;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr_00->bone_count);
    }
  }
  return;
}
