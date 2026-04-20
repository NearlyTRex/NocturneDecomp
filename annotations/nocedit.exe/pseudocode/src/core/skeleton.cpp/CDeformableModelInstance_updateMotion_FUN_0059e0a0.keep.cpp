// Name: core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
// Address: 0059e0a0
// MANUAL RECONSTRUCTION
// Address Range: [[0059e0a0, 0059eb43] [006089ae, 00608a47] [0060e12b, 0060e288] [0060f63b, 0060f777] [03fc5b3a, 03fc5b87]]
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
  uint *puVar13;
  uint *puVar14;
  float *pfVar15;
  uint *puVar16;
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
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  float fVar7;
  CVector3f *pCVar6;
  CDeformableModelInstance *pCVar8;
  
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
                  (this_ptr_00,local_34,local_84,local_88,local_1870,&local_24c);
        (local_5c->bone_transform).pose_data.bone_rotations[0].w = local_24c.w;
        (local_5c->bone_transform).pose_data.bone_rotations[0].x = local_24c.x;
        (local_5c->bone_transform).pose_data.bone_rotations[0].y = local_24c.y;
        (local_5c->bone_transform).pose_data.bone_rotations[0].z = local_24c.z;
        (local_3c->bone_transform).bone_scales[0] = local_3c->rest_pose_data[0];
        local_34 = local_34 + 1;
        local_5c = (CDeformableModelInstance *)((int)local_5c + 0x10);
        local_3c = (CDeformableModelInstance *)&(local_3c->motion_controller).current_motion_index;
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
                    (this_ptr_00,local_1c,local_84,local_88,local_1870,&local_cc);
          iVar10 = local_54;
          *(float *)((int)&local_bec[0].w + local_54) = local_cc.w;
          *(float *)((int)&local_bec[0].x + iVar10) = local_cc.x;
          *(float *)((int)&local_bec[0].y + iVar10) = local_cc.y;
          *(float *)((int)&local_bec[0].z + iVar10) = local_cc.z;
        }
        local_1c = local_1c + 1;
        local_38 = local_38 + 4;
        local_54 = local_54 + 0x10;
      } while (local_1c < this_ptr_00->bone_count);
    }
    iVar10 = this_ptr_00->bone_list[bone_index].parent_index;
    if (-1 < iVar10) {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (this_ptr_00,iVar10,local_84,local_88,local_1870,&local_1bc);
      local_bec[iVar10].w = local_1bc.w;
      local_bec[iVar10].x = local_1bc.x;
      local_bec[iVar10].y = local_1bc.y;
      local_bec[iVar10].z = local_1bc.z;
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
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      ((CQuaternion4f *)((int)&local_bec[0].w + local_68),&local_20c,&local_14c);
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (local_bc,(CQuaternion4f *)((int)&local_74->w + local_80),&local_23c);
            pCVar11 = &local_23c;
          }
          (local_48->bone_transform).pose_data.bone_rotations[0].w = pCVar11->w;
          (local_48->bone_transform).pose_data.bone_rotations[0].x = pCVar11->x;
          (local_48->bone_transform).pose_data.bone_rotations[0].y = pCVar11->y;
          (local_48->bone_transform).pose_data.bone_rotations[0].z = pCVar11->z;
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
          *(float *)((int)&local_122c.w + local_44) = pCVar12->w;
          *(float *)((int)&local_122c.x + local_44) = pCVar12->x;
          *(float *)((int)&local_122c.y + local_44) = pCVar12->y;
          *(float *)((int)&local_122c.z + local_44) = pCVar12->z;
          core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                    (this_ptr_00,local_18,local_84,local_88,local_1870,&local_16c);
          *(float *)((int)&local_186c[0].w + local_44) = local_16c.w;
          *(float *)((int)&local_186c[0].x + local_44) = local_16c.x;
          *(float *)((int)&local_186c[0].y + local_44) = local_16c.y;
          *(float *)((int)&local_186c[0].z + local_44) = local_16c.z;
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
      (&local_122c)[iVar10].w = pCVar11->w;
      (&local_122c)[iVar10].x = pCVar11->x;
      (&local_122c)[iVar10].y = pCVar11->y;
      (&local_122c)[iVar10].z = pCVar11->z;
      local_80 = iVar10 * 0x10;
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (this_ptr_00,local_78,local_84,local_88,local_1870,&local_22c);
      *(float *)((int)&local_186c[0].w + local_80) = local_22c.w;
      *(float *)((int)&local_186c[0].x + local_80) = local_22c.x;
      *(float *)((int)&local_186c[0].y + local_80) = local_22c.y;
      *(float *)((int)&local_186c[0].z + local_80) = local_22c.z;
    }
    local_30 = 0;
    if (0 < this_ptr_00->bone_count) {
      local_64 = 0;
      local_6c = (this_ptr->bone_transform).pose_data.bone_rotations;
      local_50 = this_ptr_00;
      local_20 = this_ptr;
      do {
        if (-1 < *(int *)((int)aiStack_41c + local_64)) {
          local_28 = local_50->bone_list[0].parent_index;
          local_1cc.w = (&local_122c)[local_30].w;
          local_1cc.x = (&local_122c)[local_30].x;
          local_1cc.y = (&local_122c)[local_30].y;
          local_1cc.z = (&local_122c)[local_30].z;
          local_dc.w = local_186c[local_30].w;
          local_dc.x = local_186c[local_30].x;
          local_dc.y = local_186c[local_30].y;
          local_dc.z = local_186c[local_30].z;
          local_ec.w = (local_20->bone_transform).pose_data.bone_rotations[0].w;
          local_ec.x = (local_20->bone_transform).pose_data.bone_rotations[0].x;
          local_ec.y = (local_20->bone_transform).pose_data.bone_rotations[0].y;
          local_ec.z = (local_20->bone_transform).pose_data.bone_rotations[0].z;
          if (-1 < (int)local_ec.z) {
            local_80 = (int)local_ec.z * 0x10;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      (&local_122c + (int)local_ec.z,&local_fc);
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_1cc,&local_1ac,&local_25c);
            local_1cc.w = local_25c.w;
            local_1cc.x = local_25c.x;
            local_1cc.y = local_25c.y;
            local_1cc.z = local_25c.z;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      ((CQuaternion4f *)((int)&local_186c[0].w + local_80),&local_1fc);
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_dc,&local_28c,&local_19c);
            local_dc.w = local_19c.w;
            local_dc.x = local_19c.x;
            local_dc.y = local_19c.y;
            local_dc.z = local_19c.z;
            core_xform_cpp_negateFirstComponent_FUN_005f75e0
                      ((CQuaternion4f *)((int)&local_6c->w + local_80),&local_10c);
            core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_ec,&local_18c,&local_13c);
            local_ec.w = local_13c.w;
            local_ec.x = local_13c.x;
            local_ec.y = local_13c.y;
            local_ec.z = local_13c.z;
          }
          core_xform_cpp_negateFirstComponent_FUN_005f75e0(&local_1cc,&local_12c);
          core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_dc,&local_1dc,&local_27c);
          core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_ec,&local_1ec,&local_26c);
          local_17c.w = local_26c.w;
          local_17c.x = local_26c.x;
          local_17c.y = local_26c.y;
          local_17c.z = local_26c.z;
          if ((int)local_26c.z < 0) {
            pCVar11 = &local_26c;
          }
          else {
            core_xform_cpp_multiplyQuaternion_FUN_005f7640
                      (&local_17c,local_6c + (int)local_26c.z,&local_11c);
            pCVar11 = &local_11c;
          }
          (local_20->bone_transform).pose_data.bone_rotations[0].w = pCVar11->w;
          (local_20->bone_transform).pose_data.bone_rotations[0].x = pCVar11->x;
          (local_20->bone_transform).pose_data.bone_rotations[0].y = pCVar11->y;
          (local_20->bone_transform).pose_data.bone_rotations[0].z = pCVar11->z;
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
                    (this_ptr_00,iVar10,local_84,local_88,local_1870,&local_21c);
          (local_60->bone_transform).pose_data.bone_rotations[0].w = local_21c.w;
          (local_60->bone_transform).pose_data.bone_rotations[0].x = local_21c.x;
          (local_60->bone_transform).pose_data.bone_rotations[0].y = local_21c.y;
          (local_60->bone_transform).pose_data.bone_rotations[0].z = local_21c.z;
        }
        local_60 = (CDeformableModelInstance *)&(local_60->motion_controller).tween_speed;
        local_24 = local_24 + 1;
      } while (local_24 < this_ptr_00->bone_count);
    }
  }
  return;
}
