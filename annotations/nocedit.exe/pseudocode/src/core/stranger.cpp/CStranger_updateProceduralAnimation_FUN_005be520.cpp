// Name: core_stranger.cpp_CStranger_updateProceduralAnimation_FUN_005be520
// Address: 005be520
// Address Range: [[005be520, 005bf711]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_005be520(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */

void __cdecl core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_005be520(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  float *pfVar2;
  CLever *this_ptr_00;
  CDemonActor *pCVar3;
  SMotion *pSVar4;
  CVector3f *pCVar5;
  CBoundingBox3D *pCVar6;
  CVector3f *pCVar7;
  CSkeleton *this_ptr_01;
  CQuaternion4f *pCVar8;
  uint *puVar10;
  CQuaternion4f *pCVar11;
  uint *puVar13;
  float *pfVar14;
  byte bVar15;
  float10 fVar16;
  double dVar17;
  CQuaternion4f *rotation_quat;
  float blend_weight;
  char *motion_name;
  code *blend_callback;
  int iVar18;
  float local_1f0c;
  CDeformableModelInstance *local_1f08;
  float local_1f04;
  float local_1ef8;
  float local_1ef4;
  float local_1ef0;
  float local_1ee0;
  float local_1edc;
  float fStack_1ed8;
  char local_1ecc;
  float local_1ec4;
  float afStack_1bcc [1511];
  CMatrix3x3f local_430;
  CBoundingBox3D local_408;
  CQuaternion4f local_3f0;
  CQuaternion4f local_3e0;
  CQuaternion4f local_3d0;
  CQuaternion4f local_3c0;
  CQuaternion4f local_3b0;
  CQuaternion4f local_3a0;
  CQuaternion4f local_390;
  CQuaternion4f local_380;
  CQuaternion4f CStack_370;
  CQuaternion4f local_360;
  CQuaternion4f local_350;
  CQuaternion4f local_340;
  CQuaternion4f local_330;
  CQuaternion4f local_320;
  CQuaternion4f local_310;
  CQuaternion4f local_300;
  CQuaternion4f local_2f0;
  byte local_2e0 [16];
  float local_2d0 [4];
  byte local_2c0 [16];
  float local_2b0 [3];
  CQuaternion4f CStack_2a4;
  CQuaternion4f local_290;
  CQuaternion4f CStack_280;
  CQuaternion4f CStack_270;
  CQuaternion4f local_260;
  CQuaternion4f local_250;
  CQuaternion4f local_240;
  CQuaternion4f local_230;
  CQuaternion4f local_220;
  CQuaternion4f local_210;
  CQuaternion4f local_200;
  CQuaternion4f local_1f0;
  CQuaternion4f local_1e0;
  byte local_1d0 [16];
  float local_1c0 [4];
  CQuaternion4f CStack_1b0;
  CQuaternion4f local_1a0;
  CVector3f local_190;
  CVector3f local_184;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  CVector3f local_16c;
  float local_160;
  float local_15c;
  float local_158;
  CVector3f local_154;
  CVector3f local_148;
  CVector3f CStack_13c;
  float local_130;
  float local_12c;
  float local_128;
  CVector3f CStack_124;
  CVector3f CStack_118;
  CVector3f local_10c;
  float local_100;
  float local_fc;
  float local_f8;
  CVector3f CStack_f4;
  float local_e8;
  float local_e4;
  float local_e0;
  CVector3f CStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  uint *puVar9;
  uint *puVar12;
  
  bVar15 = 0;
  local_18 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0);
  local_1f08 = local_18;
  if ((int)this_ptr->turn_blend_weight < 0x3e19999a) {
    local_1f08 = (CDeformableModelInstance *)
                 ((this_ptr->turn_blend_weight / 0.15f) * (float)local_18);
  }
  if (0.85 < this_ptr->turn_blend_weight) {
    local_1f08 = (CDeformableModelInstance *)
                 (((1.0 - this_ptr->turn_blend_weight) / 0.15) * (float)local_1f08);
  }
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  if ((0.0 < (float)local_1f08) && (-1 < this_ptr->turn_motion_index)) {
    core_stranger_cpp_CStranger_extractTurnPoseData_FUN_005bf720(this_ptr,(SPoseData *)&local_1ecc);
    _local_1ecc = 0.0;
    local_1ec4 = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230
              (pCVar1,(SPoseData *)&local_1ecc,(float)local_1f08,-1,
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  }
  core_stranger_cpp_CStranger_makeDrawDecision_FUN_005bfb60(this_ptr);
  pCVar1 = &(this_ptr->base).base.model;
  pCVar7 = &this_ptr->carry_object_world_center;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  pfVar14 = &(this_ptr->carry_object_world_center).z;
  pfVar2 = &(this_ptr->carry_object_world_center).y;
  iVar18 = pSVar4->state_index;
  if (iVar18 == 0x15) {
    local_160 = pCVar7->x;
    local_15c = *pfVar2;
    local_158 = *pfVar14;
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar1,&local_184,INT_03f6badc);
    local_190.x = local_160 - local_184.x;
    local_190.y = local_15c - local_184.y;
    local_190.z = local_158 - local_184.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_190);
    local_1ee0 = (this_ptr->base).base.model.motion_controller.current_frame_number;
    if ((float)13 <= local_1ee0) {
      local_1ee0 = 1.0 - (local_1ee0 + (float)-13) * (float)0.0769230769230769;
      if (local_1ee0 < 0.0) {
        local_1ee0 = 0.0;
      }
    }
    else {
      local_1ee0 = local_1ee0 * (float)0.0769230769230769;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(local_7c.x,&local_320);
    local_360.w = local_320.w;
    puVar10 = (uint *)((int)&local_360 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    puVar9 = (uint *)((int)&local_320 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    *(uint *)((int)&local_360 + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&local_320 + (uint)bVar15 * -8 + 4);
    *puVar10 = *puVar9;
    puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
    local_18 = &(this_ptr->base).base.model;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (local_18,&local_360,local_1ee0,INT_03f6bb10,
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_7c.y,&local_300);
    rotation_quat = &local_390;
    pCVar11 = &local_390;
    pCVar8 = &local_300;
    local_1f0c = local_1ee0;
    iVar18 = INT_03f6badc;
LAB_005be795:
    puVar12 = (uint *)((int)pCVar11 + ((uint)bVar15 * -2 + 1) * 4);
    puVar9 = (uint *)((int)pCVar8 + ((uint)bVar15 * -2 + 1) * 4);
    pCVar11->w = pCVar8->w;
    puVar13 = puVar12 + (uint)bVar15 * -2 + 1;
    puVar10 = puVar9 + (uint)bVar15 * -2 + 1;
    *puVar12 = *puVar9;
    *puVar13 = *puVar10;
    puVar13[(uint)bVar15 * -2 + 1] = puVar10[(uint)bVar15 * -2 + 1];
  }
  else if (iVar18 == 0x13) {
    local_e8 = pCVar7->x;
    local_e4 = *pfVar2;
    local_e0 = *pfVar14;
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar1,&local_b8,INT_03f6badc);
    local_70.x = local_e8 - local_b8.x;
    local_70.y = local_e4 - local_b8.y;
    local_70.z = local_e0 - local_b8.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_4c,&local_70);
    local_1ef4 = (this_ptr->base).base.model.motion_controller.current_frame_number;
    if ((float)24 <= local_1ef4) {
      local_1ef4 = 1.0 - (local_1ef4 + (float)-24) * (float)0.10000000000000001;
      if (local_1ef4 < 0.0) {
        local_1ef4 = 0.0;
      }
    }
    else {
      local_1ef4 = local_1ef4 * (float)0.041666666666666699;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(-local_4c.x,(CQuaternion4f *)local_2c0);
    pCVar1 = &(this_ptr->base).base.model;
    local_230.w = (float)local_2c0._0_4_;
    puVar9 = (uint *)((int)&local_230 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    *(uint *)((int)&local_230 + (uint)bVar15 * -8 + 4) =
         *(uint *)(local_2c0 + (uint)bVar15 * -8 + 4);
    *puVar9 = *(uint *)(local_2c0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    puVar9[(uint)bVar15 * -2 + 1] =
         *(uint *)
          ((int)(local_2c0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) +
          ((uint)bVar15 * -2 + 1) * 4);
    local_18 = pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar1,&local_230,local_1ef4,INT_03f6badc,
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_4c.y,&local_240);
    local_1e0.w = local_240.w;
    puVar9 = (uint *)((int)&local_240 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    *(uint *)(local_1d0 + (uint)bVar15 * -8 + -0xc) =
         *(uint *)((int)&local_240 + (uint)bVar15 * -8 + 4);
    *(uint *)(local_1d0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + -8) = *puVar9;
    *(uint *)
     ((int)(local_1d0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + -8) + ((uint)bVar15 * -2 + 1) * 4) =
         puVar9[(uint)bVar15 * -2 + 1];
    rotation_quat = &local_1e0;
    local_1f0c = local_1ef4;
    iVar18 = INT_03f6badc;
  }
  else {
    if (iVar18 != 0x16) {
      if (iVar18 == 0x1f) {
        this_ptr_00 = (this_ptr->base).lever_to_pull;
        if (this_ptr_00 == (CLever *)0x0) {
          pCVar5 = core_lever_cpp_CLever_getHandlePosition_FUN_00504dd0(PTR_03f6baa8,&local_10c);
          pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr,&local_154,pCVar5);
          if (pCVar7 != pCVar5) {
            pCVar7->x = pCVar5->x;
            (this_ptr->carry_object_world_center).y = pCVar5->y;
            (this_ptr->carry_object_world_center).z = pCVar5->z;
          }
        }
        else {
          pCVar5 = core_lever_cpp_CLever_getHandlePosition_FUN_00504dd0(this_ptr_00,&local_58);
          pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr,&local_a0,pCVar5);
          if (pCVar7 != pCVar5) {
            pCVar7->x = pCVar5->x;
            (this_ptr->carry_object_world_center).y = pCVar5->y;
            (this_ptr->carry_object_world_center).z = pCVar5->z;
          }
          PTR_03f6baa8 = (this_ptr->base).lever_to_pull;
        }
        local_100 = (this_ptr->carry_object_world_center).x;
        local_fc = (this_ptr->carry_object_world_center).y;
        local_f8 = (this_ptr->carry_object_world_center).z;
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (&(this_ptr->base).base.model,&local_94,INT_03f6badc);
        local_130 = local_100 - local_94.x;
        local_12c = local_fc - local_94.y;
        local_128 = local_f8 - local_94.z;
        local_ac.x = local_130;
        local_ac.y = local_12c;
        local_ac.z = local_128;
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_148,&local_ac);
        local_1f04 = (this_ptr->base).base.model.motion_controller.current_frame_number;
        if ((float)10 <= local_1f04) {
          if (15 <= (double)local_1f04) {
            local_1f04 = 1.0 - (local_1f04 + (float)-15) * (float)0.066666666666666693;
            if (local_1f04 < 0.0) {
              local_1f04 = 0.0;
            }
          }
          else {
            local_1f04 = 1.0;
          }
        }
        else {
          local_1f04 = local_1f04 * (float)0.10000000000000001;
        }
        local_24 = SQRT(local_128 * local_128 + local_130 * local_130 + local_12c * local_12c);
        if (local_24 < 2.7f) {
          dVar17 = acos((double)(local_24 / 2.7f));
          local_20 = (float)dVar17;
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                    (local_20,(CQuaternion4f *)(local_2e0 + 0xc));
          pCVar1 = &(this_ptr->base).base.model;
          CStack_2a4.w = (float)local_2e0._12_4_;
          pfVar14 = (float *)((int)&CStack_2a4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
          *(float *)((int)&CStack_2a4 + (uint)bVar15 * -8 + 4) = local_2d0[(uint)bVar15 * -2];
          *pfVar14 = local_2d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          pfVar14[(uint)bVar15 * -2 + 1] =
               (local_2d0 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
          local_1c = pCVar1;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                    (pCVar1,&CStack_2a4,(float)local_1f08,INT_03f6badc,
                     core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                    (-local_20,(CQuaternion4f *)(local_2c0 + 0xc));
          local_1d0._12_4_ = local_2c0._12_4_;
          local_1c0[(uint)bVar15 * -2] = local_2b0[(uint)bVar15 * -2];
          local_1c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               local_2b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          (local_1c0 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
               (local_2b0 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                    (local_1c,(CQuaternion4f *)(local_1d0 + 0xc),(float)local_1f08,INT_03f6bae4,
                     core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        }
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(local_148.x,(CQuaternion4f *)local_1d0);
        local_3b0.w = (float)local_1d0._0_4_;
        puVar9 = (uint *)((int)&local_3b0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        *(uint *)((int)&local_3b0 + (uint)bVar15 * -8 + 4) =
             *(uint *)(local_1d0 + (uint)bVar15 * -8 + 4);
        *puVar9 = *(uint *)(local_1d0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        puVar9[(uint)bVar15 * -2 + 1] =
             *(uint *)
              ((int)(local_1d0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) +
              ((uint)bVar15 * -2 + 1) * 4);
        local_18 = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_18,&local_3b0,local_1f04,INT_03f6badc,
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_148.y,&local_3a0);
        rotation_quat = &local_250;
        pCVar11 = &local_250;
        pCVar8 = &local_3a0;
        local_1f0c = local_1f04;
        iVar18 = INT_03f6badc;
      }
      else if (iVar18 == 0x17) {
        local_1ef8 = (this_ptr->base).base.model.motion_controller.current_frame_number *
                     (float)0.066666666666666693;
        if (1.0 < local_1ef8) {
          local_1ef8 = 1.0;
        }
        fVar16 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                 (float10)2.7f,(float10)1);
        local_38 = (float)fVar16;
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_38,&local_3f0);
        local_330.w = local_3f0.w;
        puVar10 = (uint *)((int)&local_330 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        puVar9 = (uint *)((int)&local_3f0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        *(uint *)((int)&local_330 + (uint)bVar15 * -8 + 4) =
             *(uint *)((int)&local_3f0 + (uint)bVar15 * -8 + 4);
        *puVar10 = *puVar9;
        puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
        local_18 = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_18,&local_330,local_1ef8,INT_03f6badc,
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_38,&local_310);
        rotation_quat = &local_330;
        pCVar11 = &local_330;
        pCVar8 = &local_310;
        local_1f0c = local_1ef8;
        iVar18 = INT_03f6bad8;
      }
      else {
        if (iVar18 != 0x18) {
          if (iVar18 == 0x19) {
            local_1f0c = 1.0 - ((this_ptr->base).base.model.motion_controller.current_frame_number +
                               (float)-15) * (float)0.066666666666666693;
            if (local_1f0c < 0.0) {
              local_1f0c = 0.0;
            }
            if (1.0 < local_1f0c) {
              local_1f0c = 1.0;
            }
            fVar16 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                     (float10)2.7f,(float10)1);
            local_34 = (float)fVar16;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_34,&local_260);
            pCVar1 = &(this_ptr->base).base.model;
            local_1f0.w = local_260.w;
            puVar10 = (uint *)((int)&local_1f0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            puVar9 = (uint *)((int)&local_260 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            *(uint *)((int)&local_1f0 + (uint)bVar15 * -8 + 4) =
                 *(uint *)((int)&local_260 + (uint)bVar15 * -8 + 4);
            *puVar10 = *puVar9;
            puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
            local_18 = pCVar1;
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar1,&local_1f0,local_1f0c,INT_03f6badc,
                       core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_34,&local_220);
            local_1f0.w = local_220.w;
            puVar10 = (uint *)((int)&local_1f0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            puVar9 = (uint *)((int)&local_220 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            *(uint *)((int)&local_1f0 + (uint)bVar15 * -8 + 4) =
                 *(uint *)((int)&local_220 + (uint)bVar15 * -8 + 4);
            *puVar10 = *puVar9;
            puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
            rotation_quat = &local_1f0;
            iVar18 = INT_03f6bad8;
          }
          else {
            if (iVar18 != 0x1a) goto LAB_005be7a1;
            local_1ef0 = (this_ptr->base).base.model.motion_controller.current_frame_number;
            if (local_1ef0 < (float)15) {
              local_1ef0 = local_1ef0 * (float)0.066666666666666693;
            }
            else {
              local_1ef0 = 1.0 - (local_1ef0 + (float)-15) * (float)0.066666666666666693;
            }
            if (1.0 < local_1ef0) {
              local_1ef0 = 1.0;
            }
            if (local_1ef0 < 0.0) {
              local_1ef0 = 0.0;
            }
            local_18 = &(this_ptr->base).base.model;
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                      (local_18,&local_16c,INT_03f6badc);
            fVar16 = (float10)fpatan((float10)local_16c.y -
                                     (float10)(this_ptr->carry_object_world_center).y,
                                     (float10)2.7f);
            core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((float)fVar16,&local_340);
            pCVar1 = local_18;
            local_3e0.w = local_340.w;
            puVar10 = (uint *)((int)&local_3e0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            puVar9 = (uint *)((int)&local_340 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            *(uint *)((int)&local_3e0 + (uint)bVar15 * -8 + 4) =
                 *(uint *)((int)&local_340 + (uint)bVar15 * -8 + 4);
            *puVar10 = *puVar9;
            puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar1,&local_3e0,local_1ef0,INT_03f6badc,
                       core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (local_18,&local_3e0,local_1ef0,INT_03f6bad8,
                       core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
            fVar16 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                     (float10)2.7f,(float10)1);
            local_2c = (float)fVar16;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_2c,&local_200);
            pCVar1 = local_18;
            local_210.w = local_200.w;
            puVar10 = (uint *)((int)&local_210 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            puVar9 = (uint *)((int)&local_200 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            *(uint *)((int)&local_210 + (uint)bVar15 * -8 + 4) =
                 *(uint *)((int)&local_200 + (uint)bVar15 * -8 + 4);
            *puVar10 = *puVar9;
            puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar1,&local_210,local_1ef0,INT_03f6badc,
                       core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_2c,&local_350);
            rotation_quat = &local_210;
            local_210.w = local_350.w;
            puVar10 = (uint *)((int)&local_210 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            puVar9 = (uint *)((int)&local_350 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            *(uint *)((int)&local_210 + (uint)bVar15 * -8 + 4) =
                 *(uint *)((int)&local_350 + (uint)bVar15 * -8 + 4);
            *puVar10 = *puVar9;
            puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
            local_1f0c = local_1ef0;
            iVar18 = INT_03f6bad8;
          }
          goto LAB_005be799;
        }
        local_1edc = (this_ptr->base).base.model.motion_controller.current_frame_number;
        if ((float)15 <= local_1edc) {
          local_1edc = 1.0 - (local_1edc + (float)-15) * (float)0.066666666666666693;
        }
        else {
          local_1edc = local_1edc * (float)0.066666666666666693;
        }
        if (1.0 < local_1edc) {
          local_1edc = 1.0;
        }
        if (local_1edc < 0.0) {
          local_1edc = 0.0;
        }
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (&(this_ptr->base).base.model,&local_c4,INT_03f6badc);
        local_20 = ((this_ptr->carry_object_world_center).y + (this_ptr->carry_object_bbox).max.y) -
                   (this_ptr->carry_object_bbox).min.y;
        pCVar3 = (this_ptr->base).object_to_pick_up;
        if (pCVar3 != (CDemonActor *)0x0) {
          INT_03f6bb64 = (int)core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_005bb010(pCVar3);
          local_18 = (CDeformableModelInstance *)INT_03f6bb64;
        }
        local_20 = local_20 - (float)INT_03f6bb64;
        fVar16 = (float10)fpatan((float10)local_c4.y - (float10)local_20,(float10)2.7f);
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((float)fVar16,&local_380);
        pCVar1 = &(this_ptr->base).base.model;
        local_290.w = local_380.w;
        puVar10 = (uint *)((int)&local_290 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        puVar9 = (uint *)((int)&local_380 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        *(uint *)((int)&local_290 + (uint)bVar15 * -8 + 4) =
             *(uint *)((int)&local_380 + (uint)bVar15 * -8 + 4);
        *puVar10 = *puVar9;
        puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
        local_18 = pCVar1;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (pCVar1,&local_290,local_1edc,INT_03f6badc,
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_18,&local_290,local_1edc,INT_03f6bad8,
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        fVar16 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                 (float10)2.7f,(float10)1);
        local_30 = (float)fVar16;
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_30,&local_2f0);
        local_1a0.w = local_2f0.w;
        puVar9 = (uint *)((int)&local_1a0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        *(uint *)((int)&local_1a0 + (uint)bVar15 * -8 + 4) =
             *(uint *)(local_2e0 + (uint)bVar15 * -8 + -0xc);
        *puVar9 = *(uint *)(local_2e0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + -8);
        puVar9[(uint)bVar15 * -2 + 1] =
             *(uint *)
              ((int)(local_2e0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + -8) +
              ((uint)bVar15 * -2 + 1) * 4);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_18,&local_1a0,local_1edc,INT_03f6badc,
                   core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_30,&local_3c0);
        rotation_quat = &local_1a0;
        pCVar11 = &local_1a0;
        pCVar8 = &local_3c0;
        local_1f0c = local_1edc;
        iVar18 = INT_03f6bad8;
      }
      goto LAB_005be795;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&local_430,&(this_ptr->base).target_orientation.vec);
    if ((BYTE_03f6baac & 1) == 0) {
      BYTE_03f6baac = BYTE_03f6baac | 1;
    }
    pCVar3 = (this_ptr->base).target_actor;
    if (pCVar3 != (CDemonActor *)0x0) {
      pCVar6 = (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,&local_408);
      fStack_d0 = (pCVar6->min).x + (pCVar6->max).x;
      fStack_cc = (pCVar6->min).y + (pCVar6->max).y;
      fStack_178 = fStack_d0 * 0.5f;
      fStack_c8 = (pCVar6->min).z + (pCVar6->max).z;
      fStack_174 = fStack_cc * 0.5f;
      fStack_170 = fStack_c8 * 0.5f;
      if (&stack0x00000000 != g_TriListTextureNames[0] + 0x24) {
        FLOAT_03f6ba9c = fStack_178;
        FLOAT_03f6baa0 = fStack_174;
        FLOAT_03f6baa4 = fStack_170;
      }
    }
    pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&local_430,&local_64,(CVector3f *)&FLOAT_03f6ba9c);
    CStack_13c.x = (this_ptr->base).target_position.x + pCVar7->x;
    CStack_13c.y = (this_ptr->base).target_position.y + pCVar7->y;
    CStack_13c.z = (this_ptr->base).target_position.z + pCVar7->z;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              ((CDemonActor *)this_ptr,&CStack_124,&CStack_13c);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (&(this_ptr->base).base.model,&CStack_dc,INT_03f6badc);
    CStack_f4.x = CStack_124.x - CStack_dc.x;
    CStack_f4.y = CStack_124.y - CStack_dc.y;
    CStack_f4.z = CStack_124.z - CStack_dc.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_118,&CStack_f4);
    fStack_1ed8 = (this_ptr->base).base.model.motion_controller.current_frame_number;
    if ((float)21 <= fStack_1ed8) {
      fStack_1ed8 = 1.0 - (fStack_1ed8 + (float)-21) * (float)0.071428571428571397;
      if (fStack_1ed8 < 0.0) {
        fStack_1ed8 = 0.0;
      }
    }
    else {
      fStack_1ed8 = fStack_1ed8 * (float)0.047619047619047603;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(CStack_118.x,&CStack_1b0);
    pCVar1 = &(this_ptr->base).base.model;
    CStack_280.w = CStack_1b0.w;
    puVar10 = (uint *)((int)&CStack_280 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    puVar9 = (uint *)((int)&CStack_1b0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    *(uint *)((int)&CStack_280 + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&CStack_1b0 + (uint)bVar15 * -8 + 4);
    *puVar10 = *puVar9;
    puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
    local_18 = pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar1,&CStack_280,fStack_1ed8,INT_03f6bb10,
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(CStack_118.y,&CStack_370);
    CStack_270.w = CStack_370.w;
    puVar10 = (uint *)((int)&CStack_270 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    puVar9 = (uint *)((int)&CStack_370 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    *(uint *)((int)&CStack_270 + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&CStack_370 + (uint)bVar15 * -8 + 4);
    *puVar10 = *puVar9;
    puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
    rotation_quat = &CStack_270;
    local_1f0c = fStack_1ed8;
    iVar18 = INT_03f6badc;
  }
LAB_005be799:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (local_18,rotation_quat,local_1f0c,iVar18,
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
LAB_005be7a1:
  if (g_CGamePtr->block_auto_save != 0) {
    local_88.y = 0.0;
    local_88.z = 0.0;
    local_88.x = 0.0;
    if ((this_ptr->guns_drawn != 0) && (this_ptr->weapon != (CWeapon *)0x0)) {
      local_88.x = (this_ptr->right_arm_aim).target_pitch;
    }
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
    blend_weight = 1.0;
    iVar18 = INT_03f6bacc;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&local_88,&local_3d0);
    local_2e0._0_4_ = local_3d0.w;
    puVar9 = (uint *)((int)&local_3d0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    *(uint *)(local_2e0 + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&local_3d0 + (uint)bVar15 * -8 + 4);
    *(uint *)(local_2e0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) = *puVar9;
    *(uint *)
     ((int)(local_2e0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) + ((uint)bVar15 * -2 + 1) * 4) =
         puVar9[(uint)bVar15 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (&(this_ptr->base).base.model,(CQuaternion4f *)local_2e0,blend_weight,iVar18,
               blend_callback);
  }
  if (this_ptr->interact_blend <= 0.0) {
    return;
  }
  iVar18 = 1;
  motion_name = "draw_holsters2aimPistols";
  pCVar1 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
  iVar18 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                     (&this_ptr_01->motion_list,motion_name,iVar18);
  local_28 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       (&pCVar1->motion_controller,iVar18,1.0);
  local_18 = (CDeformableModelInstance *)local_28;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (pCVar1,iVar18,local_28,this_ptr->interact_blend,INT_03f6bb0c,
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  return;
}
