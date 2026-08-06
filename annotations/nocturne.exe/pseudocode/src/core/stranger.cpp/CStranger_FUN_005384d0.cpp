// Name: core_stranger.cpp_CStranger_FUN_005384d0
// Address: 005384d0
// Address Range: [[005384d0, 005396c1]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005384d0(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_FUN_005384d0(CStranger *this_ptr)

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
  CDeformableModelInstance *this_ptr_02;
  CQuaternion4f *rotation_quat;
  float fVar18;
  char *motion_name;
  code *pcVar19;
  int iVar20;
  CDeformableModel_MotionBlendWeightFunc *local_1f0c;
  CQuaternion4f *local_1f08;
  CDeformableModel_MotionBlendWeightFunc *local_1ef8;
  CQuaternion4f *local_1ef4;
  CQuaternion4f *local_1ee0;
  CQuaternion4f *local_1edc;
  byte local_1ecc [6812];
  CMatrix3x3f local_430;
  CBoundingBox3D local_408;
  byte local_3f0 [16];
  float local_3e0 [3];
  CQuaternion4f CStack_3d4;
  CQuaternion4f CStack_3c4;
  CQuaternion4f CStack_3b4;
  CQuaternion4f CStack_3a4;
  byte local_390 [16];
  float local_380 [3];
  CQuaternion4f CStack_374;
  byte local_360 [16];
  float local_350 [3];
  CQuaternion4f CStack_344;
  CQuaternion4f local_330;
  CQuaternion4f local_320;
  CQuaternion4f local_310;
  byte local_300 [16];
  float local_2f0 [3];
  CQuaternion4f CStack_2e4;
  CQuaternion4f CStack_2d4;
  byte local_2c0 [16];
  float local_2b0 [3];
  CQuaternion4f CStack_2a4;
  CQuaternion4f CStack_294;
  CQuaternion4f CStack_284;
  CQuaternion4f CStack_274;
  byte local_260 [32];
  CQuaternion4f local_240;
  CQuaternion4f local_230;
  byte local_220 [16];
  CMotionList *local_210 [3];
  CQuaternion4f CStack_204;
  CQuaternion4f local_1f0;
  byte local_1e0 [16];
  float local_1d0 [3];
  CQuaternion4f CStack_1c4;
  CQuaternion4f CStack_1b4;
  CQuaternion4f CStack_1a4;
  CVector3f local_190;
  CVector3f local_184;
  float fStack_178;
  float fStack_174;
  CVector3f local_16c;
  float local_160;
  float local_15c;
  float local_158;
  CVector3f local_154;
  byte local_148 [12];
  float fStack_13c;
  float fStack_138;
  float local_130;
  float local_12c;
  CVector3f local_128;
  CVector3f CStack_11c;
  CVector3f local_10c;
  float local_100;
  float local_fc;
  CVector3f local_f8;
  float local_e8;
  float local_e4;
  CVector3f local_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  CVector3f local_a0;
  byte local_94 [12];
  uint local_88;
  uint local_84;
  CVector3f local_7c;
  byte local_70 [24];
  CVector3f local_58;
  CVector3f local_4c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  CDeformableModelInstance *local_1c;
  CQuaternion4f *local_18;
  uint *puVar9;
  uint *puVar12;
  
  bVar15 = 0;
  local_18 = (CQuaternion4f *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       (&(this_ptr->base).base.model.motion_controller,0);
  local_1f08 = local_18;
  if ((int)this_ptr->turn_blend_weight < 0x3e19999a) {
    local_1f08 = (CQuaternion4f *)((this_ptr->turn_blend_weight / 0.15f) * (float)local_18)
    ;
  }
  if (0.85 < this_ptr->turn_blend_weight) {
    local_1f08 = (CQuaternion4f *)(((1.0 - this_ptr->turn_blend_weight) / 0.15) * (float)local_1f08)
    ;
  }
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCVar1);
  if ((0.0 < (float)local_1f08) && (-1 < this_ptr->turn_motion_index)) {
    core_stranger_cpp_CStranger_FUN_005396d0(this_ptr,(SPose *)local_1ecc);
    local_1ecc._0_4_ = 0.0;
    local_1ecc._8_4_ = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0
              (pCVar1,(SPoseData *)local_1ecc,(float)local_1f08,-1,
               core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
  }
  core_stranger_cpp_CStranger_makeDrawDecision_FUN_00539b10(this_ptr);
  pCVar1 = &(this_ptr->base).base.model;
  pCVar7 = &this_ptr->carry_object_world_center;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar1->motion_controller);
  pfVar14 = &(this_ptr->carry_object_world_center).z;
  pfVar2 = &(this_ptr->carry_object_world_center).y;
  iVar20 = pSVar4->state_index;
  if (iVar20 == 0x15) {
    local_160 = pCVar7->x;
    local_15c = *pfVar2;
    local_158 = *pfVar14;
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
              (pCVar1,&local_184,(int)_DAT_02dc9f60);
    local_190.x = local_160 - local_184.x;
    local_190.y = local_15c - local_184.y;
    local_190.z = local_158 - local_184.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_7c,&local_190);
    fVar18 = (this_ptr->base).base.model.motion_controller.current_frame_number;
    if ((float)13 <= fVar18) {
      local_1ee0 = (CQuaternion4f *)
                   (1.0 - (fVar18 + (float)-13) * (float)0.0769230769230769);
      if ((float)local_1ee0 < 0.0) {
        local_1ee0 = (CQuaternion4f *)0x0;
      }
    }
    else {
      local_1ee0 = (CQuaternion4f *)(fVar18 * (float)0.0769230769230769);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(local_7c.x,&local_320);
    local_360._0_4_ = local_320.w;
    puVar9 = (uint *)((int)&local_320 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    *(uint *)(local_360 + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&local_320 + (uint)bVar15 * -8 + 4);
    *(uint *)(local_360 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) = *puVar9;
    *(uint *)
     ((int)(local_360 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) + ((uint)bVar15 * -2 + 1) * 4) =
         puVar9[(uint)bVar15 * -2 + 1];
    local_18 = (CQuaternion4f *)&(this_ptr->base).base.model;
    this_ptr_02 = (CDeformableModelInstance *)0x5386ff;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              ((CDeformableModelInstance *)local_18,(CQuaternion4f *)local_360,(float)local_1ee0,
               _DAT_02dc9f94,core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_7c.y,(CQuaternion4f *)local_300);
    local_1f08 = (CQuaternion4f *)local_390;
    pCVar11 = (CQuaternion4f *)local_390;
    pCVar8 = (CQuaternion4f *)local_300;
    rotation_quat = local_18;
    local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)local_1ee0;
    pcVar19 = _DAT_02dc9f60;
LAB_00538745:
    puVar12 = (uint *)((int)pCVar11 + ((uint)bVar15 * -2 + 1) * 4);
    puVar9 = (uint *)((int)pCVar8 + ((uint)bVar15 * -2 + 1) * 4);
    pCVar11->w = pCVar8->w;
    puVar13 = puVar12 + (uint)bVar15 * -2 + 1;
    puVar10 = puVar9 + (uint)bVar15 * -2 + 1;
    *puVar12 = *puVar9;
    *puVar13 = *puVar10;
    puVar13[(uint)bVar15 * -2 + 1] = puVar10[(uint)bVar15 * -2 + 1];
    local_1edc = local_1f08;
  }
  else if (iVar20 == 0x13) {
    local_e8 = pCVar7->x;
    local_e4 = *pfVar2;
    local_e0.x = *pfVar14;
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
              (pCVar1,&local_b8,(int)_DAT_02dc9f60);
    local_70._0_4_ = local_e8 - local_b8.x;
    local_70._4_4_ = local_e4 - local_b8.y;
    local_70._8_4_ = local_e0.x - local_b8.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
              (&local_4c,(CVector3f *)local_70);
    fVar18 = (this_ptr->base).base.model.motion_controller.current_frame_number;
    if ((float)24 <= fVar18) {
      local_1ef4 = (CQuaternion4f *)
                   (1.0 - (fVar18 + (float)-24) * (float)0.10000000000000001);
      if ((float)local_1ef4 < 0.0) {
        local_1ef4 = (CQuaternion4f *)0x0;
      }
    }
    else {
      local_1ef4 = (CQuaternion4f *)(fVar18 * (float)0.041666666666666699);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(-local_4c.x,(CQuaternion4f *)local_2c0);
    pCVar1 = &(this_ptr->base).base.model;
    local_230.w = (float)local_2c0._0_4_;
    *(uint *)(local_220 + (uint)bVar15 * -8 + -0xc) =
         *(uint *)(local_2c0 + (uint)bVar15 * -8 + 4);
    *(uint *)(local_220 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + -8) =
         *(uint *)(local_2c0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    *(uint *)
     ((int)(local_220 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + -8) + ((uint)bVar15 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_2c0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) +
          ((uint)bVar15 * -2 + 1) * 4);
    this_ptr_02 = (CDeformableModelInstance *)0x538c6a;
    local_18 = (CQuaternion4f *)pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (pCVar1,&local_230,(float)local_1ef4,(int)_DAT_02dc9f60,
               core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_4c.y,&local_240);
    local_1e0._0_4_ = local_240.w;
    pfVar14 = (float *)((int)&local_240 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    *(uint *)(local_1e0 + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&local_240 + (uint)bVar15 * -8 + 4);
    local_1d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xfffffffe] = *pfVar14;
    (local_1d0 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xfffffffe)[(uint)bVar15 * -2 + 1] =
         pfVar14[(uint)bVar15 * -2 + 1];
    local_1edc = (CQuaternion4f *)local_1e0;
    rotation_quat = local_18;
    local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)local_1ef4;
    pcVar19 = _DAT_02dc9f60;
  }
  else {
    if (iVar20 != 0x16) {
      if (iVar20 == 0x1f) {
        this_ptr_00 = (this_ptr->base).lever_to_pull;
        if (this_ptr_00 == (CLever *)0x0) {
          pCVar5 = core_lever_cpp_CLever_getHandlePosition_FUN_004c6640(_DAT_02dc9f2c,&local_10c);
          pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             ((CDemonActor *)this_ptr,&local_154,pCVar5);
          if (pCVar7 != pCVar5) {
            pCVar7->x = pCVar5->x;
            (this_ptr->carry_object_world_center).y = pCVar5->y;
            (this_ptr->carry_object_world_center).z = pCVar5->z;
          }
        }
        else {
          pCVar5 = core_lever_cpp_CLever_getHandlePosition_FUN_004c6640(this_ptr_00,&local_58);
          pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             ((CDemonActor *)this_ptr,&local_a0,pCVar5);
          if (pCVar7 != pCVar5) {
            pCVar7->x = pCVar5->x;
            (this_ptr->carry_object_world_center).y = pCVar5->y;
            (this_ptr->carry_object_world_center).z = pCVar5->z;
          }
          _DAT_02dc9f2c = (this_ptr->base).lever_to_pull;
        }
        local_100 = (this_ptr->carry_object_world_center).x;
        local_fc = (this_ptr->carry_object_world_center).y;
        local_f8.x = (this_ptr->carry_object_world_center).z;
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (&(this_ptr->base).base.model,(CVector3f *)local_94,(int)_DAT_02dc9f60);
        local_130 = local_100 - (float)local_94._0_4_;
        local_12c = local_fc - (float)local_94._4_4_;
        local_128.x = local_f8.x - (float)local_94._8_4_;
        local_ac.x = local_130;
        local_ac.y = local_12c;
        local_ac.z = local_128.x;
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                  ((CVector3f *)local_148,&local_ac);
        local_24 = SQRT(local_128.x * local_128.x + local_130 * local_130 + local_12c * local_12c);
        if (local_24 < 2.7f) {
          dVar17 = acos((double)(local_24 / 2.7f));
          local_20 = (float)dVar17;
          core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_20,&CStack_2d4);
          pCVar1 = &(this_ptr->base).base.model;
          CStack_2a4.w = CStack_2d4.w;
          puVar10 = (uint *)((int)&CStack_2a4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
          puVar9 = (uint *)((int)&CStack_2d4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
          *(uint *)((int)&CStack_2a4 + (uint)bVar15 * -8 + 4) =
               *(uint *)((int)&CStack_2d4 + (uint)bVar15 * -8 + 4);
          *puVar10 = *puVar9;
          puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
          local_1c = pCVar1;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                    (pCVar1,&CStack_2a4,(float)local_1f08,(int)_DAT_02dc9f60,
                     core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
          core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0
                    (-local_20,(CQuaternion4f *)(local_2c0 + 0xc));
          CStack_1c4.w = (float)local_2c0._12_4_;
          pfVar14 = (float *)((int)&CStack_1c4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
          *(float *)((int)&CStack_1c4 + (uint)bVar15 * -8 + 4) = local_2b0[(uint)bVar15 * -2];
          *pfVar14 = local_2b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          pfVar14[(uint)bVar15 * -2 + 1] =
               (local_2b0 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                    (local_1c,&CStack_1c4,(float)local_1f08,_DAT_02dc9f68,
                     core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
        }
        core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0
                  (local_154.z,(CQuaternion4f *)(local_1e0 + 0xc));
        CStack_3b4.w = (float)local_1e0._12_4_;
        pfVar14 = (float *)((int)&CStack_3b4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        *(float *)((int)&CStack_3b4 + (uint)bVar15 * -8 + 4) = local_1d0[(uint)bVar15 * -2];
        *pfVar14 = local_1d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        pfVar14[(uint)bVar15 * -2 + 1] =
             (local_1d0 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
        local_1c = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (local_1c,&CStack_3b4,(float)local_1f08,(int)_DAT_02dc9f60,
                   core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
        core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0((float)local_148._0_4_,&CStack_3a4);
        pcVar19 = core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650;
        pCVar11 = (CQuaternion4f *)(local_260 + 0xc);
        pCVar8 = &CStack_3a4;
        this_ptr_02 = local_1c;
        rotation_quat = (CQuaternion4f *)(local_260 + 0xc);
        local_1f0c = _DAT_02dc9f60;
      }
      else if (iVar20 == 0x17) {
        local_1ef8 = (CDeformableModel_MotionBlendWeightFunc *)
                     ((this_ptr->base).base.model.motion_controller.current_frame_number *
                     (float)0.066666666666666693);
        if (1.0 < (float)local_1ef8) {
          local_1ef8 = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
        }
        fVar16 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                 (float10)2.7f,(float10)1);
        local_38 = (float)fVar16;
        core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_38,(CQuaternion4f *)local_3f0);
        local_330.w = (float)local_3f0._0_4_;
        puVar9 = (uint *)((int)&local_330 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        *(uint *)((int)&local_330 + (uint)bVar15 * -8 + 4) =
             *(uint *)(local_3f0 + (uint)bVar15 * -8 + 4);
        *puVar9 = *(uint *)(local_3f0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        puVar9[(uint)bVar15 * -2 + 1] =
             *(uint *)
              ((int)(local_3f0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) +
              ((uint)bVar15 * -2 + 1) * 4);
        local_18 = (CQuaternion4f *)&(this_ptr->base).base.model;
        this_ptr_02 = (CDeformableModelInstance *)0x5390d5;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  ((CDeformableModelInstance *)local_18,&local_330,(float)local_1ef8,
                   (int)_DAT_02dc9f60,core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
        core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(-local_38,&local_310);
        local_1f08 = &local_330;
        pCVar11 = &local_330;
        pCVar8 = &local_310;
        rotation_quat = local_18;
        local_1f0c = local_1ef8;
        pcVar19 = _DAT_02dc9f5c;
      }
      else {
        if (iVar20 != 0x18) {
          if (iVar20 == 0x19) {
            local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)
                         (1.0 - ((this_ptr->base).base.model.motion_controller.current_frame_number
                                + (float)-15) * (float)0.066666666666666693);
            if ((float)local_1f0c < 0.0) {
              local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)0x0;
            }
            if (1.0 < (float)local_1f0c) {
              local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
            }
            fVar16 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                     (float10)2.7f,(float10)1);
            local_34 = (float)fVar16;
            core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_34,(CQuaternion4f *)local_260);
            pCVar1 = &(this_ptr->base).base.model;
            local_1f0.w = (float)local_260._0_4_;
            puVar9 = (uint *)((int)&local_1f0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            *(uint *)((int)&local_1f0 + (uint)bVar15 * -8 + 4) =
                 *(uint *)(local_260 + (uint)bVar15 * -8 + 4);
            *puVar9 = *(uint *)(local_260 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            puVar9[(uint)bVar15 * -2 + 1] =
                 *(uint *)
                  ((int)(local_260 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) +
                  ((uint)bVar15 * -2 + 1) * 4);
            this_ptr_02 = (CDeformableModelInstance *)0x539416;
            local_18 = (CQuaternion4f *)pCVar1;
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (pCVar1,&local_1f0,(float)local_1f0c,(int)_DAT_02dc9f60,
                       core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
            core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(-local_34,(CQuaternion4f *)local_220);
            local_1f0.w = (float)local_220._0_4_;
            puVar9 = (uint *)((int)&local_1f0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            *(uint *)((int)&local_1f0 + (uint)bVar15 * -8 + 4) =
                 *(uint *)(local_220 + (uint)bVar15 * -8 + 4);
            *puVar9 = *(uint *)(local_220 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            puVar9[(uint)bVar15 * -2 + 1] =
                 *(uint *)
                  ((int)(local_220 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) +
                  ((uint)bVar15 * -2 + 1) * 4);
            rotation_quat = local_18;
            local_1edc = &local_1f0;
            pcVar19 = _DAT_02dc9f5c;
          }
          else {
            if (iVar20 != 0x1a) goto LAB_00538751;
            local_18 = (CQuaternion4f *)&(this_ptr->base).base.model;
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                      ((CDeformableModelInstance *)local_18,&local_16c,(int)_DAT_02dc9f60);
            fVar16 = atan2
                               ((float10)local_16c.y -
                                (float10)(this_ptr->carry_object_world_center).y,
                                (float10)2.7f);
            core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0((float)fVar16,&CStack_344);
            pCVar1 = local_1c;
            local_3f0._12_4_ = CStack_344.w;
            pfVar14 = (float *)((int)&CStack_344 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            local_3e0[(uint)bVar15 * -2] = *(float *)((int)&CStack_344 + (uint)bVar15 * -8 + 4);
            local_3e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] = *pfVar14;
            (local_3e0 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
                 pfVar14[(uint)bVar15 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (pCVar1,(CQuaternion4f *)(local_3f0 + 0xc),(float)local_1ef4,
                       (int)_DAT_02dc9f60,core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (local_1c,(CQuaternion4f *)(local_3f0 + 0xc),(float)local_1ef4,
                       (int)_DAT_02dc9f5c,core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
            fVar16 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                     (float10)2.7f,(float10)1);
            local_30 = (float)fVar16;
            core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_30,&CStack_204);
            pCVar1 = local_1c;
            local_220._12_4_ = CStack_204.w;
            puVar9 = (uint *)((int)&CStack_204 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            local_210[(uint)bVar15 * -2] =
                 *(CMotionList **)((int)&CStack_204 + (uint)bVar15 * -8 + 4);
            local_210[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] = (CMotionList *)*puVar9;
            (local_210 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
                 (CMotionList *)puVar9[(uint)bVar15 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (pCVar1,(CQuaternion4f *)(local_220 + 0xc),(float)local_1ef4,
                       (int)_DAT_02dc9f60,core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
            core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0
                      (-local_30,(CQuaternion4f *)(local_360 + 0xc));
            pcVar19 = core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650;
            local_220._12_4_ = local_360._12_4_;
            local_210[(uint)bVar15 * -2] = (CMotionList *)local_350[(uint)bVar15 * -2];
            local_210[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 (CMotionList *)local_350[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            (local_210 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
                 (CMotionList *)
                 (local_350 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
            this_ptr_02 = local_1c;
            rotation_quat = (CQuaternion4f *)(local_220 + 0xc);
            local_1edc = local_1ef4;
            local_1f0c = _DAT_02dc9f5c;
          }
          goto LAB_00538749;
        }
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (&(this_ptr->base).base.model,&local_c4,(int)_DAT_02dc9f60);
        local_20 = ((this_ptr->carry_object_world_center).y + (this_ptr->carry_object_bbox).max.y) -
                   (this_ptr->carry_object_bbox).min.y;
        pCVar3 = (this_ptr->base).object_to_pick_up;
        if (pCVar3 != (CDemonActor *)0x0) {
          _DAT_02dc9fe8 =
               (CQuaternion4f *)
               core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0(pCVar3);
          local_18 = _DAT_02dc9fe8;
        }
        local_20 = local_20 - (float)_DAT_02dc9fe8;
        fVar16 = atan2
                           ((float10)local_c4.y - (float10)local_20,(float10)2.7f);
        core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0
                  ((float)fVar16,(CQuaternion4f *)(local_390 + 0xc));
        pCVar1 = &(this_ptr->base).base.model;
        CStack_294.w = (float)local_390._12_4_;
        pfVar14 = (float *)((int)&CStack_294 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        *(float *)((int)&CStack_294 + (uint)bVar15 * -8 + 4) = local_380[(uint)bVar15 * -2];
        *pfVar14 = local_380[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        pfVar14[(uint)bVar15 * -2 + 1] =
             (local_380 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
        local_1c = pCVar1;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (pCVar1,&CStack_294,(float)local_1ee0,(int)_DAT_02dc9f60,
                   core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (local_1c,&CStack_294,(float)local_1ee0,(int)_DAT_02dc9f5c,
                   core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
        fVar16 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                 (float10)2.7f,(float10)1);
        local_34 = (float)fVar16;
        core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0
                  (local_34,(CQuaternion4f *)(local_300 + 0xc));
        CStack_1a4.w = (float)local_300._12_4_;
        pfVar14 = (float *)((int)&CStack_1a4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        *(float *)((int)&CStack_1a4 + (uint)bVar15 * -8 + 4) = local_2f0[(uint)bVar15 * -2];
        *pfVar14 = local_2f0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        pfVar14[(uint)bVar15 * -2 + 1] =
             (local_2f0 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (local_1c,&CStack_1a4,(float)local_1ee0,(int)_DAT_02dc9f60,
                   core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
        core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(-local_34,&CStack_3c4);
        pcVar19 = core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650;
        rotation_quat = &CStack_1a4;
        pCVar11 = &CStack_1a4;
        pCVar8 = &CStack_3c4;
        this_ptr_02 = local_1c;
        local_1f08 = local_1ee0;
        local_1f0c = _DAT_02dc9f5c;
      }
      goto LAB_00538745;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
              (&local_430,&(this_ptr->base).target_orientation.vec);
    if ((DAT_02dc9f30 & 1) == 0) {
      DAT_02dc9f30 = DAT_02dc9f30 | 1;
    }
    pCVar3 = (this_ptr->base).target_actor;
    if (pCVar3 != (CDemonActor *)0x0) {
      pCVar6 = (*((pCVar3->vtable)._ub)->getBoundingBox)(pCVar3,&local_408);
      fStack_d4 = (pCVar6->min).x + (pCVar6->max).x;
      fStack_d0 = (pCVar6->min).y + (pCVar6->max).y;
      local_184.z = fStack_d4 * 0.5f;
      fStack_cc = (pCVar6->min).z + (pCVar6->max).z;
      fStack_178 = fStack_d0 * 0.5f;
      fStack_174 = fStack_cc * 0.5f;
      if (&stack0x00000000 != &DAT_02dca09c) {
        _DAT_02dc9f20 = local_184.z;
        _DAT_02dc9f24 = fStack_178;
        _DAT_02dc9f28 = fStack_174;
      }
    }
    pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                       ((CMatrix3x3f *)(local_1ecc + 0x1a98),(CVector3f *)(local_70 + 8),
                        (CVector3f *)&DAT_02dc9f20);
    local_148._8_4_ = (this_ptr->base).target_position.x + pCVar7->x;
    fStack_13c = (this_ptr->base).target_position.y + pCVar7->y;
    fStack_138 = (this_ptr->base).target_position.z + pCVar7->z;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
              ((CDemonActor *)this_ptr,&local_128,(CVector3f *)(local_148 + 8));
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
              (&(this_ptr->base).base.model,&local_e0,(int)_DAT_02dc9f60);
    local_f8.x = local_128.x - local_e0.x;
    local_f8.y = local_128.y - local_e0.y;
    local_f8.z = local_128.z - local_e0.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&CStack_11c,&local_f8);
    fVar18 = (this_ptr->base).base.model.motion_controller.current_frame_number;
    if ((float)21 <= fVar18) {
      local_1edc = (CQuaternion4f *)
                   (1.0 - (fVar18 + (float)-21) * (float)0.071428571428571397);
      if ((float)local_1edc < 0.0) {
        local_1edc = (CQuaternion4f *)0x0;
      }
    }
    else {
      local_1edc = (CQuaternion4f *)(fVar18 * (float)0.047619047619047603);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(CStack_11c.x,&CStack_1b4);
    pCVar1 = &(this_ptr->base).base.model;
    CStack_284.w = CStack_1b4.w;
    puVar10 = (uint *)((int)&CStack_284 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    puVar9 = (uint *)((int)&CStack_1b4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    *(uint *)((int)&CStack_284 + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&CStack_1b4 + (uint)bVar15 * -8 + 4);
    *puVar10 = *puVar9;
    puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
    local_1c = pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (pCVar1,&CStack_284,(float)local_1edc,_DAT_02dc9f94,
               core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(CStack_11c.y,&CStack_374);
    CStack_274.w = CStack_374.w;
    puVar10 = (uint *)((int)&CStack_274 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 1) * 4 + 4)
    ;
    puVar9 = (uint *)((int)&CStack_374 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    *(uint *)((int)&CStack_274 + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&CStack_374 + (uint)bVar15 * -8 + 4);
    *puVar10 = *puVar9;
    puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
    pcVar19 = core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650;
    this_ptr_02 = local_1c;
    rotation_quat = &CStack_274;
    local_1f0c = _DAT_02dc9f60;
  }
LAB_00538749:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
            (this_ptr_02,rotation_quat,(float)local_1edc,(int)local_1f0c,pcVar19);
LAB_00538751:
  if (g_CGame_PTR_005b9354->goggles_active != 0) {
    local_88 = 0;
    local_84 = 0;
    local_94._8_4_ = 0.0;
    if ((this_ptr->guns_drawn != 0) && (this_ptr->weapon != (CWeapon *)0x0)) {
      local_94._8_4_ = (this_ptr->right_arm_aim).target_pitch;
    }
    pcVar19 = core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650;
    fVar18 = 1.0;
    iVar20 = _DAT_02dc9f50;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610((CVector3f *)(local_94 + 8),&CStack_3d4);
    CStack_2e4.w = CStack_3d4.w;
    puVar10 = (uint *)((int)&CStack_2e4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    puVar9 = (uint *)((int)&CStack_3d4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
    *(uint *)((int)&CStack_2e4 + (uint)bVar15 * -8 + 4) =
         *(uint *)((int)&CStack_3d4 + (uint)bVar15 * -8 + 4);
    *puVar10 = *puVar9;
    puVar10[(uint)bVar15 * -2 + 1] = puVar9[(uint)bVar15 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (&(this_ptr->base).base.model,&CStack_2e4,fVar18,iVar20,pcVar19);
  }
  if (this_ptr->interact_blend <= 0.0) {
    return;
  }
  iVar20 = 1;
  motion_name = "draw_holsters2aimPistols";
  pCVar1 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar1);
  iVar20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010
                     (&this_ptr_01->motion_list,motion_name,iVar20);
  local_2c = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                       (&pCVar1->motion_controller,iVar20,1.0);
  local_1c = (CDeformableModelInstance *)local_2c;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (pCVar1,iVar20,local_2c,this_ptr->interact_blend,_DAT_02dc9f90,
             core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
  return;
}
