// Name: core_stranger.cpp_CStranger_FUN_005be520
// Address: 005be520
// Address Range: [[005be520, 005bf711]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005be520(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_stranger_cpp_CStranger_FUN_005be520(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CLever *this_ptr_00;
  CStranger *this_ptr_01;
  SMotion *pSVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  CSkeleton *this_ptr_02;
  int iVar6;
  CQuaternion4f *pCVar7;
  uint *puVar9;
  CQuaternion4f *pCVar10;
  uint *puVar12;
  byte bVar13;
  float10 fVar14;
  double dVar15;
  CDeformableModelInstance *this_ptr_03;
  CQuaternion4f *rotation_quat;
  float fVar16;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  code *blend_callback_00;
  float local_1f0c;
  CQuaternion4f *local_1f08;
  float local_1ef8;
  CQuaternion4f *local_1ef4;
  CQuaternion4f *local_1ee0;
  CQuaternion4f *local_1edc;
  char local_1ecc;
  float local_1ec4;
  float afStack_1bcc [119];
  CMotionList *apCStack_19f0 [13];
  float afStack_19bc [496];
  CMotionList *apCStack_11fc [13];
  float afStack_11c8 [869];
  byte auStack_434 [68];
  byte local_3f0 [16];
  float local_3e0 [3];
  CQuaternion4f CStack_3d4;
  CQuaternion4f local_3c4;
  CQuaternion4f CStack_3b4;
  CQuaternion4f CStack_3a4;
  byte local_390 [16];
  float local_380 [3];
  CQuaternion4f CStack_374;
  byte local_360 [16];
  float local_350 [3];
  CQuaternion4f local_344;
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
  CQuaternion4f local_294;
  CQuaternion4f CStack_284;
  CQuaternion4f CStack_274;
  byte local_260 [32];
  CQuaternion4f local_240;
  CQuaternion4f local_230;
  byte local_220 [16];
  CMotionList *local_210 [3];
  CQuaternion4f local_204;
  CQuaternion4f local_1f0;
  byte local_1e0 [16];
  float local_1d0 [3];
  CQuaternion4f CStack_1c4;
  CQuaternion4f CStack_1b4;
  CQuaternion4f local_1a4;
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
  CVector3f aCStack_11c [2];
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
  byte local_70 [36];
  CVector3f local_4c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  CDeformableModelInstance *local_1c;
  CQuaternion4f *local_18;
  uint *puVar8;
  uint *puVar11;
  
  bVar13 = 0;
  local_18 = (CQuaternion4f *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0);
  local_1f08 = local_18;
  if (*(int *)(this_ptr->unk9 + 0x10) < 0x3e19999a) {
    local_1f08 = (CQuaternion4f *)
                 ((*(float *)(this_ptr->unk9 + 0x10) / 0.15f) * (float)local_18);
  }
  if (0.85 < *(float *)(this_ptr->unk9 + 0x10)) {
    local_1f08 = (CQuaternion4f *)
                 (((1.0 - *(float *)(this_ptr->unk9 + 0x10)) / 0.15) * (float)local_1f08);
  }
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  if ((0.0 < (float)local_1f08) && (-1 < *(int *)(this_ptr->unk9 + 0x40))) {
    core_stranger_cpp_CStranger_FUN_005bf720(this_ptr);
    _local_1ecc = 0.0;
    local_1ec4 = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230
              (pCVar1,(SPoseData *)&local_1ecc,(float)local_1f08,-1,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  }
  core_stranger_cpp_CStranger_FUN_005bfb60(this_ptr);
  pCVar1 = &(this_ptr->base).base.model;
  pCVar5 = (CVector3f *)(this_ptr->unk9 + 0x54);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  iVar6 = pSVar2->state_index;
  if (iVar6 == 0x15) {
    local_160 = pCVar5->x;
    local_15c = *(float *)(this_ptr->unk9 + 0x58);
    local_158 = *(float *)(this_ptr->unk9 + 0x5c);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar1,&local_184,INT_03f6badc);
    local_190.x = local_160 - local_184.x;
    local_190.y = local_15c - local_184.y;
    local_190.z = local_158 - local_184.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_190);
    fVar16 = (float)(this_ptr->base).base.model.motion_controller.current_frame_number;
    if ((float)13 <= fVar16) {
      local_1ee0 = (CQuaternion4f *)
                   (1.0 - (fVar16 + (float)-13) * (float)0.0769230769230769);
      if ((float)local_1ee0 < 0.0) {
        local_1ee0 = (CQuaternion4f *)0x0;
      }
    }
    else {
      local_1ee0 = (CQuaternion4f *)(fVar16 * (float)0.0769230769230769);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(local_7c.x,&local_320);
    local_360._0_4_ = local_320.w;
    puVar8 = (uint *)((int)&local_320 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(uint *)(local_360 + (uint)bVar13 * -8 + 4) =
         *(uint *)((int)&local_320 + (uint)bVar13 * -8 + 4);
    *(uint *)(local_360 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) = *puVar8;
    *(uint *)
     ((int)(local_360 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) + ((uint)bVar13 * -2 + 1) * 4) =
         puVar8[(uint)bVar13 * -2 + 1];
    local_18 = (CQuaternion4f *)&(this_ptr->base).base.model;
    this_ptr_03 = (CDeformableModelInstance *)0x5be74f;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              ((CDeformableModelInstance *)local_18,(CQuaternion4f *)local_360,(float)local_1ee0,
               INT_03f6bb10,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_7c.y,(CQuaternion4f *)local_300);
    local_1f08 = (CQuaternion4f *)local_390;
    pCVar10 = (CQuaternion4f *)local_390;
    pCVar7 = (CQuaternion4f *)local_300;
    rotation_quat = local_18;
    local_1f0c = (float)local_1ee0;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)INT_03f6badc;
LAB_005be795:
    puVar11 = (uint *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
    puVar8 = (uint *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
    pCVar10->w = pCVar7->w;
    puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
    puVar9 = puVar8 + (uint)bVar13 * -2 + 1;
    *puVar11 = *puVar8;
    *puVar12 = *puVar9;
    puVar12[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
    local_1edc = local_1f08;
  }
  else if (iVar6 == 0x13) {
    local_e8 = pCVar5->x;
    local_e4 = *(float *)(this_ptr->unk9 + 0x58);
    local_e0.x = *(float *)(this_ptr->unk9 + 0x5c);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar1,&local_b8,INT_03f6badc);
    local_70._0_4_ = local_e8 - local_b8.x;
    local_70._4_4_ = local_e4 - local_b8.y;
    local_70._8_4_ = local_e0.x - local_b8.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
              (&local_4c,(CVector3f *)local_70);
    fVar16 = (float)(this_ptr->base).base.model.motion_controller.current_frame_number;
    if ((float)24 <= fVar16) {
      local_1ef4 = (CQuaternion4f *)
                   (1.0 - (fVar16 + (float)-24) * (float)0.10000000000000001);
      if ((float)local_1ef4 < 0.0) {
        local_1ef4 = (CQuaternion4f *)0x0;
      }
    }
    else {
      local_1ef4 = (CQuaternion4f *)(fVar16 * (float)0.041666666666666699);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(-local_4c.x,(CQuaternion4f *)local_2c0);
    pCVar1 = &(this_ptr->base).base.model;
    local_230.w = (float)local_2c0._0_4_;
    *(uint *)(local_220 + (uint)bVar13 * -8 + -0xc) =
         *(uint *)(local_2c0 + (uint)bVar13 * -8 + 4);
    *(uint *)(local_220 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + -8) =
         *(uint *)(local_2c0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(uint *)
     ((int)(local_220 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + -8) + ((uint)bVar13 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_2c0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) +
          ((uint)bVar13 * -2 + 1) * 4);
    this_ptr_03 = (CDeformableModelInstance *)0x5becba;
    local_18 = (CQuaternion4f *)pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar1,&local_230,(float)local_1ef4,INT_03f6badc,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_4c.y,&local_240);
    local_1e0._0_4_ = local_240.w;
    pfVar4 = (float *)((int)&local_240 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(uint *)(local_1e0 + (uint)bVar13 * -8 + 4) =
         *(uint *)((int)&local_240 + (uint)bVar13 * -8 + 4);
    local_1d0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xfffffffe] = *pfVar4;
    (local_1d0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xfffffffe)[(uint)bVar13 * -2 + 1] =
         pfVar4[(uint)bVar13 * -2 + 1];
    local_1edc = (CQuaternion4f *)local_1e0;
    rotation_quat = local_18;
    local_1f0c = (float)local_1ef4;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)INT_03f6badc;
  }
  else {
    if (iVar6 != 0x16) {
      if (iVar6 == 0x1f) {
        this_ptr_00 = (CLever *)(this_ptr->base).lever_to_pull;
        if (this_ptr_00 == (CLever *)0x0) {
          pCVar3 = core_lever_cpp_CLever_FUN_00504dd0(DAT_03f6baa8);
          pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr,&local_154,pCVar3);
          if (pCVar5 != pCVar3) {
            pCVar5->x = pCVar3->x;
            *(float *)(this_ptr->unk9 + 0x58) = pCVar3->y;
            *(float *)(this_ptr->unk9 + 0x5c) = pCVar3->z;
          }
        }
        else {
          pCVar3 = core_lever_cpp_CLever_FUN_00504dd0(this_ptr_00);
          pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr,&local_a0,pCVar3);
          if (pCVar5 != pCVar3) {
            pCVar5->x = pCVar3->x;
            *(float *)(this_ptr->unk9 + 0x58) = pCVar3->y;
            *(float *)(this_ptr->unk9 + 0x5c) = pCVar3->z;
          }
          DAT_03f6baa8 = (CLever *)(this_ptr->base).lever_to_pull;
        }
        local_100 = *(float *)(this_ptr->unk9 + 0x54);
        local_fc = *(float *)(this_ptr->unk9 + 0x58);
        local_f8.x = *(float *)(this_ptr->unk9 + 0x5c);
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (&(this_ptr->base).base.model,(CVector3f *)local_94,INT_03f6badc);
        local_130 = local_100 - (float)local_94._0_4_;
        local_12c = local_fc - (float)local_94._4_4_;
        local_128.x = local_f8.x - (float)local_94._8_4_;
        local_ac.x = local_130;
        local_ac.y = local_12c;
        local_ac.z = local_128.x;
        core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                  ((CVector3f *)local_148,&local_ac);
        local_24 = SQRT(local_128.x * local_128.x + local_130 * local_130 + local_12c * local_12c);
        if (local_24 < 2.7f) {
          dVar15 = acos((double)(local_24 / 2.7f));
          local_20 = (float)dVar15;
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_20,&CStack_2d4);
          pCVar1 = &(this_ptr->base).base.model;
          CStack_2a4.w = CStack_2d4.w;
          puVar9 = (uint *)((int)&CStack_2a4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          puVar8 = (uint *)((int)&CStack_2d4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          *(uint *)((int)&CStack_2a4 + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)&CStack_2d4 + (uint)bVar13 * -8 + 4);
          *puVar9 = *puVar8;
          puVar9[(uint)bVar13 * -2 + 1] = puVar8[(uint)bVar13 * -2 + 1];
          local_1c = pCVar1;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                    (pCVar1,&CStack_2a4,(float)local_1f08,INT_03f6badc,
                     core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                    (-local_20,(CQuaternion4f *)(local_2c0 + 0xc));
          CStack_1c4.w = (float)local_2c0._12_4_;
          pfVar4 = (float *)((int)&CStack_1c4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          *(float *)((int)&CStack_1c4 + (uint)bVar13 * -8 + 4) = local_2b0[(uint)bVar13 * -2];
          *pfVar4 = local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          pfVar4[(uint)bVar13 * -2 + 1] =
               (local_2b0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                    (local_1c,&CStack_1c4,(float)local_1f08,INT_03f6bae4,
                     core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        }
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
                  (local_154.z,(CQuaternion4f *)(local_1e0 + 0xc));
        CStack_3b4.w = (float)local_1e0._12_4_;
        pfVar4 = (float *)((int)&CStack_3b4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        *(float *)((int)&CStack_3b4 + (uint)bVar13 * -8 + 4) = local_1d0[(uint)bVar13 * -2];
        *pfVar4 = local_1d0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        pfVar4[(uint)bVar13 * -2 + 1] =
             (local_1d0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
        local_1c = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_1c,&CStack_3b4,(float)local_1f08,INT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((float)local_148._0_4_,&CStack_3a4);
        pCVar10 = (CQuaternion4f *)(local_260 + 0xc);
        pCVar7 = &CStack_3a4;
        this_ptr_03 = local_1c;
        rotation_quat = (CQuaternion4f *)(local_260 + 0xc);
        local_1f0c = (float)INT_03f6badc;
        blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
      }
      else if (iVar6 == 0x17) {
        local_1ef8 = (float)(this_ptr->base).base.model.motion_controller.current_frame_number *
                     (float)0.066666666666666693;
        if (1.0 < local_1ef8) {
          local_1ef8 = 1.0;
        }
        fVar14 = (float10)fpatan((float10)*(float *)(this_ptr->unk9 + 0x6c) /
                                 (float10)2.7f,(float10)1);
        local_38 = (float)fVar14;
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_38,(CQuaternion4f *)local_3f0);
        local_330.w = (float)local_3f0._0_4_;
        puVar8 = (uint *)((int)&local_330 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        *(uint *)((int)&local_330 + (uint)bVar13 * -8 + 4) =
             *(uint *)(local_3f0 + (uint)bVar13 * -8 + 4);
        *puVar8 = *(uint *)(local_3f0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        puVar8[(uint)bVar13 * -2 + 1] =
             *(uint *)
              ((int)(local_3f0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) +
              ((uint)bVar13 * -2 + 1) * 4);
        local_18 = (CQuaternion4f *)&(this_ptr->base).base.model;
        this_ptr_03 = (CDeformableModelInstance *)0x5bf125;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  ((CDeformableModelInstance *)local_18,&local_330,local_1ef8,INT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_38,&local_310);
        local_1f08 = &local_330;
        pCVar10 = &local_330;
        pCVar7 = &local_310;
        rotation_quat = local_18;
        local_1f0c = local_1ef8;
        blend_callback = (CDeformableModel_MotionBlendWeightFunc *)INT_03f6bad8;
      }
      else {
        if (iVar6 != 0x18) {
          if (iVar6 == 0x19) {
            local_1f0c = 1.0 - ((float)(this_ptr->base).base.model.motion_controller.
                                       current_frame_number + (float)-15) *
                               (float)0.066666666666666693;
            if (local_1f0c < 0.0) {
              local_1f0c = 0.0;
            }
            if (1.0 < local_1f0c) {
              local_1f0c = 1.0;
            }
            fVar14 = (float10)fpatan((float10)*(float *)(this_ptr->unk9 + 0x6c) /
                                     (float10)2.7f,(float10)1);
            local_34 = (float)fVar14;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_34,(CQuaternion4f *)local_260);
            pCVar1 = &(this_ptr->base).base.model;
            local_1f0.w = (float)local_260._0_4_;
            puVar8 = (uint *)((int)&local_1f0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            *(uint *)((int)&local_1f0 + (uint)bVar13 * -8 + 4) =
                 *(uint *)(local_260 + (uint)bVar13 * -8 + 4);
            *puVar8 = *(uint *)(local_260 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            puVar8[(uint)bVar13 * -2 + 1] =
                 *(uint *)
                  ((int)(local_260 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) +
                  ((uint)bVar13 * -2 + 1) * 4);
            this_ptr_03 = (CDeformableModelInstance *)0x5bf466;
            local_18 = (CQuaternion4f *)pCVar1;
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar1,&local_1f0,local_1f0c,INT_03f6badc,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_34,(CQuaternion4f *)local_220);
            local_1f0.w = (float)local_220._0_4_;
            puVar8 = (uint *)((int)&local_1f0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            *(uint *)((int)&local_1f0 + (uint)bVar13 * -8 + 4) =
                 *(uint *)(local_220 + (uint)bVar13 * -8 + 4);
            *puVar8 = *(uint *)(local_220 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            puVar8[(uint)bVar13 * -2 + 1] =
                 *(uint *)
                  ((int)(local_220 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) +
                  ((uint)bVar13 * -2 + 1) * 4);
            rotation_quat = local_18;
            local_1edc = &local_1f0;
            blend_callback = (CDeformableModel_MotionBlendWeightFunc *)INT_03f6bad8;
          }
          else {
            if (iVar6 != 0x1a) goto LAB_005be7a1;
            local_18 = (CQuaternion4f *)&(this_ptr->base).base.model;
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                      ((CDeformableModelInstance *)local_18,&local_16c,INT_03f6badc);
            fVar14 = atan2
                               ((float10)local_16c.y - (float10)*(float *)(this_ptr->unk9 + 0x58),
                                (float10)2.7f);
            core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((float)fVar14,&local_344);
            pCVar1 = local_1c;
            local_3f0._12_4_ = local_344.w;
            pfVar4 = (float *)((int)&local_344 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            local_3e0[(uint)bVar13 * -2] = *(float *)((int)&local_344 + (uint)bVar13 * -8 + 4);
            local_3e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] = *pfVar4;
            (local_3e0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1] =
                 pfVar4[(uint)bVar13 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar1,(CQuaternion4f *)(local_3f0 + 0xc),(float)local_1ef4,INT_03f6badc,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (local_1c,(CQuaternion4f *)(local_3f0 + 0xc),(float)local_1ef4,INT_03f6bad8,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            fVar14 = (float10)fpatan((float10)*(float *)(this_ptr->unk9 + 0x6c) /
                                     (float10)2.7f,(float10)1);
            local_30 = (float)fVar14;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_30,&local_204);
            pCVar1 = local_1c;
            local_220._12_4_ = local_204.w;
            puVar8 = (uint *)((int)&local_204 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            local_210[(uint)bVar13 * -2] =
                 *(CMotionList **)((int)&local_204 + (uint)bVar13 * -8 + 4);
            local_210[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] = (CMotionList *)*puVar8;
            (local_210 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1] =
                 (CMotionList *)puVar8[(uint)bVar13 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar1,(CQuaternion4f *)(local_220 + 0xc),(float)local_1ef4,INT_03f6badc,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                      (-local_30,(CQuaternion4f *)(local_360 + 0xc));
            local_220._12_4_ = local_360._12_4_;
            local_210[(uint)bVar13 * -2] = (CMotionList *)local_350[(uint)bVar13 * -2];
            local_210[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 (CMotionList *)local_350[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            (local_210 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1] =
                 (CMotionList *)
                 (local_350 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
            this_ptr_03 = local_1c;
            rotation_quat = (CQuaternion4f *)(local_220 + 0xc);
            local_1edc = local_1ef4;
            local_1f0c = (float)INT_03f6bad8;
            blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
          }
          goto LAB_005be799;
        }
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  (&(this_ptr->base).base.model,&local_c4,INT_03f6badc);
        local_20 = (*(float *)(this_ptr->unk9 + 0x58) + *(float *)(this_ptr->unk9 + 0x70)) -
                   *(float *)(this_ptr->unk9 + 100);
        this_ptr_01 = (CStranger *)(this_ptr->base).object_to_pick_up;
        if (this_ptr_01 != (CStranger *)0x0) {
          INT_03f6bb64 = (int)core_stranger_cpp_CStranger_FUN_005bb010(this_ptr_01);
          local_18 = (CQuaternion4f *)INT_03f6bb64;
        }
        local_20 = local_20 - (float)INT_03f6bb64;
        fVar14 = atan2
                           ((float10)local_c4.y - (float10)local_20,(float10)2.7f);
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
                  ((float)fVar14,(CQuaternion4f *)(local_390 + 0xc));
        pCVar1 = &(this_ptr->base).base.model;
        local_294.w = (float)local_390._12_4_;
        pfVar4 = (float *)((int)&local_294 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        *(float *)((int)&local_294 + (uint)bVar13 * -8 + 4) = local_380[(uint)bVar13 * -2];
        *pfVar4 = local_380[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        pfVar4[(uint)bVar13 * -2 + 1] =
             (local_380 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
        local_1c = pCVar1;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (pCVar1,&local_294,(float)local_1ee0,INT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_1c,&local_294,(float)local_1ee0,INT_03f6bad8,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        fVar14 = (float10)fpatan((float10)*(float *)(this_ptr->unk9 + 0x6c) /
                                 (float10)2.7f,(float10)1);
        local_34 = (float)fVar14;
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                  (local_34,(CQuaternion4f *)(local_300 + 0xc));
        local_1a4.w = (float)local_300._12_4_;
        pfVar4 = (float *)((int)&local_1a4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        *(float *)((int)&local_1a4 + (uint)bVar13 * -8 + 4) = local_2f0[(uint)bVar13 * -2];
        *pfVar4 = local_2f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        pfVar4[(uint)bVar13 * -2 + 1] =
             (local_2f0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_1c,&local_1a4,(float)local_1ee0,INT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_34,&local_3c4);
        rotation_quat = &local_1a4;
        pCVar10 = &local_1a4;
        pCVar7 = &local_3c4;
        this_ptr_03 = local_1c;
        local_1f08 = local_1ee0;
        local_1f0c = (float)INT_03f6bad8;
        blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
      }
      goto LAB_005be795;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)(auStack_434 + 4),(CVector3f *)((this_ptr->base).unk3 + 0x14));
    if ((DAT_03f6baac & 1) == 0) {
      DAT_03f6baac = DAT_03f6baac | 1;
    }
    iVar6 = *(int *)((this_ptr->base).unk3 + 4);
    if (iVar6 != 0) {
      pfVar4 = (float *)(**(code **)(*(int *)(iVar6 + 0x154) + 0x14))();
      fStack_d4 = *pfVar4 + pfVar4[3];
      fStack_d0 = pfVar4[1] + pfVar4[4];
      local_184.z = fStack_d4 * 0.5f;
      fStack_cc = pfVar4[2] + pfVar4[5];
      fStack_178 = fStack_d0 * 0.5f;
      fStack_174 = fStack_cc * 0.5f;
      if (&stack0x00000000 != (byte *)0x3f6bc18) {
        FLOAT_03f6ba9c = local_184.z;
        FLOAT_03f6baa0 = fStack_178;
        FLOAT_03f6baa4 = fStack_174;
      }
    }
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)auStack_434,(CVector3f *)(local_70 + 8),
                        (CVector3f *)&FLOAT_03f6ba9c);
    local_148._8_4_ = *(float *)((this_ptr->base).unk3 + 8) + pCVar5->x;
    fStack_13c = *(float *)((this_ptr->base).unk3 + 0xc) + pCVar5->y;
    fStack_138 = *(float *)((this_ptr->base).unk3 + 0x10) + pCVar5->z;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              ((CDemonActor *)this_ptr,&local_128,(CVector3f *)(local_148 + 8));
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (&(this_ptr->base).base.model,&local_e0,INT_03f6badc);
    local_f8.x = local_128.x - local_e0.x;
    local_f8.y = local_128.y - local_e0.y;
    local_f8.z = local_128.z - local_e0.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(aCStack_11c,&local_f8);
    fVar16 = (float)(this_ptr->base).base.model.motion_controller.current_frame_number;
    if ((float)21 <= fVar16) {
      local_1edc = (CQuaternion4f *)
                   (1.0 - (fVar16 + (float)-21) * (float)0.071428571428571397);
      if ((float)local_1edc < 0.0) {
        local_1edc = (CQuaternion4f *)0x0;
      }
    }
    else {
      local_1edc = (CQuaternion4f *)(fVar16 * (float)0.047619047619047603);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(aCStack_11c[0].x,&CStack_1b4);
    pCVar1 = &(this_ptr->base).base.model;
    CStack_284.w = CStack_1b4.w;
    puVar9 = (uint *)((int)&CStack_284 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    puVar8 = (uint *)((int)&CStack_1b4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(uint *)((int)&CStack_284 + (uint)bVar13 * -8 + 4) =
         *(uint *)((int)&CStack_1b4 + (uint)bVar13 * -8 + 4);
    *puVar9 = *puVar8;
    puVar9[(uint)bVar13 * -2 + 1] = puVar8[(uint)bVar13 * -2 + 1];
    local_1c = pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCVar1,&CStack_284,(float)local_1edc,INT_03f6bb10,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(aCStack_11c[0].y,&CStack_374);
    CStack_274.w = CStack_374.w;
    puVar9 = (uint *)((int)&CStack_274 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 1) * 4 + 4);
    puVar8 = (uint *)((int)&CStack_374 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(uint *)((int)&CStack_274 + (uint)bVar13 * -8 + 4) =
         *(uint *)((int)&CStack_374 + (uint)bVar13 * -8 + 4);
    *puVar9 = *puVar8;
    puVar9[(uint)bVar13 * -2 + 1] = puVar8[(uint)bVar13 * -2 + 1];
    this_ptr_03 = local_1c;
    rotation_quat = &CStack_274;
    local_1f0c = (float)INT_03f6badc;
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  }
LAB_005be799:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr_03,rotation_quat,(float)local_1edc,(int)local_1f0c,blend_callback);
LAB_005be7a1:
  if (g_CGamePtr->block_auto_save != 0) {
    local_88 = 0;
    local_84 = 0;
    local_94._8_4_ = 0.0;
    if ((this_ptr->guns_drawn != 0) && (this_ptr->weapon != (CDemonActor *)0x0)) {
      local_94._8_4_ = *(uint *)(this_ptr->unk1 + 0x18);
    }
    blend_callback_00 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar16 = 1.0;
    iVar6 = INT_03f6bacc;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(local_94 + 8),&CStack_3d4);
    CStack_2e4.w = CStack_3d4.w;
    puVar9 = (uint *)((int)&CStack_2e4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    puVar8 = (uint *)((int)&CStack_3d4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(uint *)((int)&CStack_2e4 + (uint)bVar13 * -8 + 4) =
         *(uint *)((int)&CStack_3d4 + (uint)bVar13 * -8 + 4);
    *puVar9 = *puVar8;
    puVar9[(uint)bVar13 * -2 + 1] = puVar8[(uint)bVar13 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (&(this_ptr->base).base.model,&CStack_2e4,fVar16,iVar6,blend_callback_00);
  }
  if (*(float *)this_ptr->unk9 <= 0.0) {
    return;
  }
  pCVar1 = &(this_ptr->base).base.model;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
  iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&this_ptr_02->motion_list);
  local_2c = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       (&pCVar1->motion_controller,iVar6,1.0);
  local_1c = (CDeformableModelInstance *)local_2c;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (pCVar1,iVar6,local_2c,*(float *)this_ptr->unk9,INT_03f6bb0c,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  return;
}
