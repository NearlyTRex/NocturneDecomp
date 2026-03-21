// Name: core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
// Address: 0059e0a0
// Address Range: [[0059e0a0, 0059eb43]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0(CDeformableModelInstance *this_ptr,int motion_index,float frame_number,int bone_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0(CDeformableModelInstance *this_ptr,int motion_index,float frame_number,int bone_index)

{
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  CSkeleton *this_ptr_00;
  int iVar9;
  int iVar10;
  CQuaternion4f *quat1_in;
  CSkeleton *pCVar10;
  int iVar11;
  CQuaternion4f *pCVar12;
  CQuaternion4f *pCVar11;
  int iVar12;
  uint *puVar15;
  uint *puVar13;
  uint *puVar18;
  uint *puVar14;
  float *pfVar19;
  float *pfVar15;
  float *pfVar20;
  uint *puVar21;
  uint *puVar16;
  uint *puVar22;
  uint *puVar17;
  float *pfVar18;
  byte bVar19;
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
  float local_24c;
  uint auStack_248 [3];
  CQuaternion4f local_23c;
  byte local_22c [4];
  float afStack_228 [7];
  CQuaternion4f local_20c;
  CQuaternion4f local_1fc;
  CQuaternion4f local_1ec;
  CQuaternion4f local_1dc;
  CQuaternion4f local_1cc;
  float local_1bc;
  float afStack_1b8 [3];
  CQuaternion4f local_1ac;
  CQuaternion4f local_19c;
  CQuaternion4f local_18c;
  CQuaternion4f local_17c;
  byte local_16c [4];
  float afStack_168 [3];
  CQuaternion4f local_15c;
  CQuaternion4f local_14c;
  CQuaternion4f local_13c;
  CQuaternion4f local_12c;
  CQuaternion4f local_11c;
  CQuaternion4f local_10c;
  CQuaternion4f local_fc;
  CQuaternion4f local_ec;
  CQuaternion4f local_dc;
  byte local_cc [4];
  float afStack_c8 [3];
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
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  float fVar7;
  CVector3f *pCVar6;
  CDeformableModelInstance *pCVar8;
  
  bVar19 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  core_motion_cpp_CMotionController_getFramesForInterpolation_FUN_0052e4c0
            (&this_ptr->motion_controller,motion_index,frame_number,&local_84,&local_88,&local_1870)
  ;
  if (bone_index < 0) {
    local_34 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_5c = this_ptr;
      local_3c = this_ptr;
      do {
        core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                  (this_ptr_00,local_34,local_84,local_88,local_1870,(CQuaternion4f *)&local_24c);
        pCVar8 = local_3c;
        local_3c = (CDeformableModelInstance *)&(local_3c->motion_controller).current_motion_index;
        puVar18 = (uint *)((int)local_5c + (uint)bVar19 * -8 + 0x6b4);
        (local_5c->bone_transform).pose_data.bone_rotations[0].w = local_24c;
        puVar14 = puVar18 + (uint)bVar19 * -2 + 1;
        *puVar18 = auStack_248[(uint)bVar19 * -2];
        *puVar14 = auStack_248[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
        puVar14[(uint)bVar19 * -2 + 1] =
             (auStack_248 + (uint)bVar19 * -2 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
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
    fVar5 = (this_ptr->scaled_model_dimensions).x;
    fVar6 = (this_ptr->bone_transform).pose_data.root_position.x;
    fVar8 = (this_ptr->scaled_model_dimensions).z;
    fVar9 = (this_ptr->bone_transform).pose_data.root_position.z;
    (this_ptr->bone_transform).pose_data.root_position.y =
         (this_ptr->scaled_model_dimensions).y *
         (this_ptr->bone_transform).pose_data.root_position.y;
    (this_ptr->bone_transform).pose_data.root_position.z = fVar8 * fVar9;
    (this_ptr->bone_transform).pose_data.root_position.x = fVar5 * fVar6;
    return;
  }
  if (this_ptr->bone_update_mode == 1) {
    local_1c = 0;
    if (0 < this_ptr_00->bone_count) {
      local_54 = 0;
      local_38 = 0;
      do {
        iVar10 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                           (this_ptr_00,local_1c,bone_index);
        *(int *)((int)aiStack_5ac + local_38) = iVar10;
        if (-1 < iVar10) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,local_1c,local_84,local_88,local_1870,(CQuaternion4f *)local_cc);
          pfVar19 = (float *)((int)local_bec + (uint)bVar19 * -8 + local_54 + 4);
          *(byte (*) [4])((int)&local_bec[0].w + local_54) = local_cc;
          pfVar15 = pfVar19 + (uint)bVar19 * -2 + 1;
          *pfVar19 = afStack_c8[(uint)bVar19 * -2];
          *pfVar15 = afStack_c8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
          pfVar15[(uint)bVar19 * -2 + 1] =
               (afStack_c8 + (uint)bVar19 * -2 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
        }
        local_1c = local_1c + 1;
        local_38 = local_38 + 4;
        local_54 = local_54 + 0x10;
      } while (local_1c < this_ptr_00->bone_count);
    }
    iVar10 = this_ptr_00->bone_list[bone_index].parent_index;
    if (-1 < iVar10) {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (this_ptr_00,iVar10,local_84,local_88,local_1870,(CQuaternion4f *)&local_1bc);
      pfVar19 = (float *)((int)local_bec + (uint)bVar19 * -8 + iVar10 * 0x10 + 4);
      local_bec[iVar10].w = local_1bc;
      pfVar20 = pfVar19 + (uint)bVar19 * -2 + 1;
      *pfVar19 = afStack_1b8[(uint)bVar19 * -2];
      *pfVar20 = afStack_1b8[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      pfVar20[(uint)bVar19 * -2 + 1] =
           (afStack_1b8 + (uint)bVar19 * -2 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
    }
    local_2c = 0;
    if (0 < this_ptr_00->bone_count) {
      local_58 = 0;
      local_74 = (this_ptr->bone_transform).pose_data.bone_rotations;
      local_4c = this_ptr_00;
      local_48 = this_ptr;
      do {
        if (-1 < *(int *)((int)aiStack_5ac + local_58)) {
          iVar10 = local_4c->bone_list[0].parent_index;
          local_68 = local_2c * 0x10;
          if (iVar10 < 0) {
            pCVar11 = local_bec + local_2c;
          }
          else {
            local_80 = iVar10 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0(local_bec + iVar10,&local_15c);
            pCVar11 = &local_20c;
            quat1_in = (CQuaternion4f *)((int)&local_bec[0].w + local_68);
            local_20c.w = local_15c.w;
            puVar15 = (uint *)((int)&local_20c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            puVar18 = (uint *)((int)&local_15c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            *(uint *)((int)&local_20c + (uint)bVar19 * -8 + 4) =
                 *(uint *)((int)&local_15c + (uint)bVar19 * -8 + 4);
            *puVar15 = *puVar18;
            puVar15[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(quat1_in,pCVar11,&local_14c);
            pCVar11 = (CQuaternion4f *)((int)&local_74->w + local_80);
            local_bc[0].w = local_14c.w;
            puVar15 = (uint *)((int)local_bc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            puVar18 = (uint *)((int)&local_14c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            *(uint *)((int)local_bc + (uint)bVar19 * -8 + 4) =
                 *(uint *)((int)&local_14c + (uint)bVar19 * -8 + 4);
            *puVar15 = *puVar18;
            puVar15[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(local_bc,pCVar11,&local_23c);
            pCVar11 = &local_23c;
          }
          puVar21 = (uint *)((int)local_48 + (uint)bVar19 * -8 + 0x6b4);
          puVar18 = (uint *)((int)pCVar11 + (uint)bVar19 * -8 + 4);
          (local_48->bone_transform).pose_data.bone_rotations[0].w = pCVar11->w;
          puVar16 = puVar21 + (uint)bVar19 * -2 + 1;
          puVar15 = puVar18 + (uint)bVar19 * -2 + 1;
          *puVar21 = *puVar18;
          *puVar16 = *puVar15;
          puVar16[(uint)bVar19 * -2 + 1] = puVar15[(uint)bVar19 * -2 + 1];
        }
        local_2c = local_2c + 1;
        local_58 = local_58 + 4;
        local_48 = (CDeformableModelInstance *)&(local_48->motion_controller).tween_speed;
        local_4c = (CSkeleton *)((local_4c->motion_list).state_names[1] + 2);
      } while (local_2c < this_ptr_00->bone_count);
    }
  }
  else if (this_ptr->bone_update_mode == 2) {
    pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
    local_18 = 0;
    local_70 = (pCVar10->motion_list).motions[motion_index].frame_start;
    if (0 < this_ptr_00->bone_count) {
      local_44 = 0;
      local_40 = 0;
      do {
        iVar11 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                           (this_ptr_00,local_18,bone_index);
        *(int *)((int)aiStack_41c + local_40) = iVar11;
        if (-1 < iVar11) {
          pCVar12 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                              (this_ptr_00,local_18,local_70);
          puVar18 = (uint *)((int)&local_122c + (uint)bVar19 * -8 + local_44 + 4);
          puVar13 = (uint *)((int)pCVar12 + (uint)bVar19 * -8 + 4);
          *(float *)((int)&local_122c.w + local_44) = pCVar12->w;
          puVar15 = puVar18 + (uint)bVar19 * -2 + 1;
          *puVar18 = *puVar13;
          *puVar15 = puVar13[(uint)bVar19 * -2 + 1];
          puVar15[(uint)bVar19 * -2 + 1] = (puVar13 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,local_18,local_84,local_88,local_1870,(CQuaternion4f *)local_16c);
          pfVar19 = (float *)((int)local_186c + (uint)bVar19 * -8 + local_44 + 4);
          *(byte (*) [4])((int)&local_186c[0].w + local_44) = local_16c;
          pfVar20 = pfVar19 + (uint)bVar19 * -2 + 1;
          *pfVar19 = afStack_168[(uint)bVar19 * -2];
          *pfVar20 = afStack_168[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
          pfVar20[(uint)bVar19 * -2 + 1] =
               (afStack_168 + (uint)bVar19 * -2 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
        }
        local_18 = local_18 + 1;
        local_40 = local_40 + 4;
        local_44 = local_44 + 0x10;
      } while (local_18 < this_ptr_00->bone_count);
    }
    iVar10 = this_ptr_00->bone_list[bone_index].parent_index;
    local_78 = iVar10;
    if (-1 < iVar10) {
      pCVar11 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                          (this_ptr_00,iVar10,local_70);
      puVar21 = (uint *)((int)&local_122c + (uint)bVar19 * -8 + iVar10 * 0x10 + 4);
      puVar18 = (uint *)((int)pCVar11 + (uint)bVar19 * -8 + 4);
      (&local_122c)[iVar10].w = pCVar11->w;
      puVar22 = puVar21 + (uint)bVar19 * -2 + 1;
      puVar15 = puVar18 + (uint)bVar19 * -2 + 1;
      *puVar21 = *puVar18;
      *puVar22 = *puVar15;
      puVar22[(uint)bVar19 * -2 + 1] = puVar15[(uint)bVar19 * -2 + 1];
      local_80 = iVar10 * 0x10;
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (this_ptr_00,local_78,local_84,local_88,local_1870,(CQuaternion4f *)local_22c);
      pfVar19 = (float *)((int)local_186c + (uint)bVar19 * -8 + local_80 + 4);
      *(byte (*) [4])((int)&local_186c[0].w + local_80) = local_22c;
      pfVar20 = pfVar19 + (uint)bVar19 * -2 + 1;
      *pfVar19 = afStack_228[(uint)bVar19 * -2];
      *pfVar20 = afStack_228[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
      pfVar20[(uint)bVar19 * -2 + 1] =
           (afStack_228 + (uint)bVar19 * -2 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
    }
    local_30 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_64 = 0;
      local_6c = (this_ptr->bone_transform).pose_data.bone_rotations;
      local_50 = this_ptr_00;
      local_20 = this_ptr;
      do {
        iVar10 = local_30;
        if (-1 < *(int *)((int)aiStack_41c + local_64)) {
          local_28 = local_50->bone_list[0].parent_index;
          iVar12 = local_30 * 0x10;
          puVar18 = (uint *)((int)&local_122c + (uint)bVar19 * -8 + iVar12 + 4);
          local_1cc.w = (&local_122c)[local_30].w;
          puVar21 = (uint *)((int)&local_1cc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          puVar15 = puVar18 + (uint)bVar19 * -2 + 1;
          *(uint *)((int)&local_1cc + (uint)bVar19 * -8 + 4) = *puVar18;
          *puVar21 = *puVar15;
          puVar21[(uint)bVar19 * -2 + 1] = puVar15[(uint)bVar19 * -2 + 1];
          puVar18 = (uint *)((int)local_186c + (uint)bVar19 * -8 + iVar12 + 4);
          local_dc.w = local_186c[iVar10].w;
          puVar21 = (uint *)((int)&local_dc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          puVar15 = puVar18 + (uint)bVar19 * -2 + 1;
          *(uint *)((int)&local_dc + (uint)bVar19 * -8 + 4) = *puVar18;
          iVar10 = local_28;
          *puVar21 = *puVar15;
          puVar21[(uint)bVar19 * -2 + 1] = puVar15[(uint)bVar19 * -2 + 1];
          puVar18 = (uint *)((int)local_20 + (uint)bVar19 * -8 + 0x6b4);
          local_ec.w = (local_20->bone_transform).pose_data.bone_rotations[0].w;
          puVar21 = (uint *)((int)&local_ec + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          puVar15 = puVar18 + (uint)bVar19 * -2 + 1;
          *(uint *)((int)&local_ec + (uint)bVar19 * -8 + 4) = *puVar18;
          *puVar21 = *puVar15;
          puVar21[(uint)bVar19 * -2 + 1] = puVar15[(uint)bVar19 * -2 + 1];
          if (-1 < iVar10) {
            local_80 = iVar10 * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0(&local_122c + iVar10,&local_fc);
            pCVar11 = &local_1ac;
            local_1ac.w = local_fc.w;
            puVar15 = (uint *)((int)&local_1ac + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            puVar18 = (uint *)((int)&local_fc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            *(uint *)((int)&local_1ac + (uint)bVar19 * -8 + 4) =
                 *(uint *)((int)&local_fc + (uint)bVar19 * -8 + 4);
            *puVar15 = *puVar18;
            puVar15[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_1cc,pCVar11,&local_25c);
            local_1cc.w = local_25c.w;
            puVar15 = (uint *)((int)&local_1cc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            puVar18 = (uint *)((int)&local_25c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            *(uint *)((int)&local_1cc + (uint)bVar19 * -8 + 4) =
                 *(uint *)((int)&local_25c + (uint)bVar19 * -8 + 4);
            *puVar15 = *puVar18;
            puVar15[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      ((CQuaternion4f *)((int)&local_186c[0].w + local_80),&local_1fc);
            pCVar11 = &local_28c;
            local_28c.w = local_1fc.w;
            puVar15 = (uint *)((int)&local_28c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            puVar18 = (uint *)((int)&local_1fc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            *(uint *)((int)&local_28c + (uint)bVar19 * -8 + 4) =
                 *(uint *)((int)&local_1fc + (uint)bVar19 * -8 + 4);
            *puVar15 = *puVar18;
            puVar15[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_dc,pCVar11,&local_19c);
            pCVar11 = (CQuaternion4f *)((int)&local_6c->w + local_80);
            local_dc.w = local_19c.w;
            puVar15 = (uint *)((int)&local_dc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            puVar18 = (uint *)((int)&local_19c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            *(uint *)((int)&local_dc + (uint)bVar19 * -8 + 4) =
                 *(uint *)((int)&local_19c + (uint)bVar19 * -8 + 4);
            *puVar15 = *puVar18;
            puVar15[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
            core_xform_cpp_negateFirstComponent_FUN_005f75e0(pCVar11,&local_10c);
            pCVar11 = &local_18c;
            local_18c.w = local_10c.w;
            puVar15 = (uint *)((int)&local_18c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            puVar18 = (uint *)((int)&local_10c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            *(uint *)((int)&local_18c + (uint)bVar19 * -8 + 4) =
                 *(uint *)((int)&local_10c + (uint)bVar19 * -8 + 4);
            *puVar15 = *puVar18;
            puVar15[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_ec,pCVar11,&local_13c);
            local_ec.w = local_13c.w;
            puVar15 = (uint *)((int)&local_ec + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            puVar18 = (uint *)((int)&local_13c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
            *(uint *)((int)&local_ec + (uint)bVar19 * -8 + 4) =
                 *(uint *)((int)&local_13c + (uint)bVar19 * -8 + 4);
            *puVar15 = *puVar18;
            puVar15[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
          }
          core_xform_cpp_negateFirstComponent_FUN_005f75e0(&local_1cc,&local_12c);
          pCVar11 = &local_1dc;
          local_1dc.w = local_12c.w;
          puVar15 = (uint *)((int)&local_1dc + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          puVar18 = (uint *)((int)&local_12c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          *(uint *)((int)&local_1dc + (uint)bVar19 * -8 + 4) =
               *(uint *)((int)&local_12c + (uint)bVar19 * -8 + 4);
          *puVar15 = *puVar18;
          puVar15[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_dc,pCVar11,&local_27c);
          pCVar11 = &local_1ec;
          local_1ec.w = local_27c.w;
          puVar15 = (uint *)((int)&local_1ec + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          puVar18 = (uint *)((int)&local_27c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          *(uint *)((int)&local_1ec + (uint)bVar19 * -8 + 4) =
               *(uint *)((int)&local_27c + (uint)bVar19 * -8 + 4);
          *puVar15 = *puVar18;
          puVar15[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_ec,pCVar11,&local_26c);
          iVar10 = local_28;
          local_17c.w = local_26c.w;
          puVar15 = (uint *)((int)&local_17c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          puVar18 = (uint *)((int)&local_26c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
          *(uint *)((int)&local_17c + (uint)bVar19 * -8 + 4) =
               *(uint *)((int)&local_26c + (uint)bVar19 * -8 + 4);
          *puVar15 = *puVar18;
          puVar15[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
          if (iVar10 < 0) {
            pCVar11 = &local_26c;
          }
          else {
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_17c,local_6c + iVar10,&local_11c);
            pCVar11 = &local_11c;
          }
          puVar17 = (uint *)((int)local_20 + (uint)bVar19 * -8 + 0x6b4);
          puVar18 = (uint *)((int)pCVar11 + (uint)bVar19 * -8 + 4);
          (local_20->bone_transform).pose_data.bone_rotations[0].w = pCVar11->w;
          puVar15 = puVar18 + (uint)bVar19 * -2 + 1;
          *puVar17 = *puVar18;
          puVar17[(uint)bVar19 * -2 + 1] = *puVar15;
          (puVar17 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1] = puVar15[(uint)bVar19 * -2 + 1];
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
        iVar10 = local_24;
        iVar9 = core_skeleton_cpp_CSkeleton_getHierarchyDistance_FUN_0059a100
                          (this_ptr_00,local_24,bone_index);
        if (-1 < iVar9) {
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,iVar10,local_84,local_88,local_1870,
                     (CQuaternion4f *)(afStack_228 + 3));
          pfVar18 = (float *)((int)local_60 + (uint)bVar19 * -8 + 0x6b4);
          (local_60->bone_transform).pose_data.bone_rotations[0].w = afStack_228[3];
          *pfVar18 = afStack_228[(uint)bVar19 * -2 + 4];
          pfVar18[(uint)bVar19 * -2 + 1] = afStack_228[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 5];
          (pfVar18 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1] =
               (afStack_228 + (uint)bVar19 * -2 + (uint)bVar19 * -2 + 5)[(uint)bVar19 * -2 + 1];
        }
        local_60 = (CDeformableModelInstance *)&(local_60->motion_controller).tween_speed;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr_00->bone_count);
    }
  }
  return;
}
