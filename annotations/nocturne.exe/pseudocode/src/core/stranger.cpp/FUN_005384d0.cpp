// Name: core_stranger.cpp_FUN_005384d0
// Address: 005384d0
// Address Range: [[005384d0, 005396c1]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_005384d0(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_005384d0(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CLever *this_ptr_00;
  CDemonActor *pCVar2;
  SMotion *pSVar3;
  CVector3f *pCVar4;
  CBoundingBox3D *pCVar5;
  CVector3f *pCVar6;
  CSkeleton *this_ptr_01;
  float *pfVar7;
  uint *puVar9;
  CQuaternion4f *pCVar10;
  uint *puVar12;
  byte bVar13;
  float10 fVar14;
  double dVar15;
  CDeformableModelInstance *this_ptr_02;
  CQuaternion4f *rotation_quat;
  float fVar16;
  char *motion_name;
  code *pcVar17;
  int iVar18;
  uint uVar19;
  CDeformableModel_MotionBlendWeightFunc *local_1f0c;
  CQuaternion4f *local_1f08;
  CDeformableModel_MotionBlendWeightFunc *local_1ef8;
  CQuaternion4f *local_1ef4;
  CQuaternion4f *local_1ee0;
  CQuaternion4f *local_1edc;
  byte local_1ecc [6812];
  CMatrix3x3f local_430;
  CBoundingBox3D local_408;
  float local_3f0;
  float afStack_3ec [2];
  CQuaternion4f CStack_3e4;
  float fStack_3d4;
  float local_3d0 [7];
  CQuaternion4f CStack_3b4;
  float afStack_3a4 [5];
  byte local_390 [16];
  float local_380 [8];
  CQuaternion4f local_360;
  float local_350 [3];
  CQuaternion4f CStack_344;
  CQuaternion4f local_330;
  CQuaternion4f local_320;
  float local_310 [4];
  float local_300 [3];
  float fStack_2f4;
  float local_2f0 [3];
  CQuaternion4f CStack_2e4;
  float fStack_2d4;
  float local_2d0 [4];
  CQuaternion4f local_2c0;
  float local_2b0 [3];
  CQuaternion4f CStack_2a4;
  CQuaternion4f CStack_294;
  CQuaternion4f CStack_284;
  CQuaternion4f CStack_274;
  float local_260;
  uint auStack_25c [2];
  CQuaternion4f CStack_254;
  float local_240;
  float afStack_23c [3];
  CQuaternion4f local_230;
  float local_220;
  CMotionList *apCStack_21c [2];
  CQuaternion4f CStack_214;
  float fStack_204;
  CMotionList *local_200 [4];
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
  CVector3f local_94;
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
  float *pfVar8;
  float *pfVar11;
  
  bVar13 = 0;
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
    core_stranger_cpp_FUN_005396d0(this_ptr,(SPose *)local_1ecc);
    local_1ecc._0_4_ = 0.0;
    local_1ecc._8_4_ = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0
              (pCVar1,(SPoseData *)local_1ecc,(float)local_1f08,-1,core_skeleton_cpp_FUN_0051b650);
  }
  core_stranger_cpp_CStranger_makeDrawDecision_FUN_00539b10(this_ptr);
  pCVar1 = &(this_ptr->base).base.model;
  pCVar6 = &this_ptr->carry_object_world_center;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar1->motion_controller);
  pfVar7 = &(this_ptr->carry_object_world_center).z;
  pfVar8 = &(this_ptr->carry_object_world_center).y;
  iVar18 = pSVar3->state_index;
  if (iVar18 == 0x15) {
    local_160 = pCVar6->x;
    local_15c = *pfVar8;
    local_158 = *pfVar7;
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
              (pCVar1,&local_184,(int)_DAT_02dc9f60);
    local_190.x = local_160 - local_184.x;
    local_190.y = local_15c - local_184.y;
    local_190.z = local_158 - local_184.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_7c,&local_190);
    fVar16 = (this_ptr->base).base.model.motion_controller.current_frame_number;
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
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(local_7c.x,&local_320);
    local_360.w = local_320.w;
    local_350[(uint)bVar13 * -2 + -3] = local_310[(uint)bVar13 * -2 + -3];
    local_350[(uint)bVar13 * -2 + (uint)bVar13 * -2 + -2] =
         local_310[(uint)bVar13 * -2 + (uint)bVar13 * -2 + -2];
    (local_350 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + -2)[(uint)bVar13 * -2 + 1] =
         (local_310 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + -2)[(uint)bVar13 * -2 + 1];
    local_18 = (CQuaternion4f *)&(this_ptr->base).base.model;
    this_ptr_02 = (CDeformableModelInstance *)0x5386ff;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              ((CDeformableModelInstance *)local_18,&local_360,(float)local_1ee0,_DAT_02dc9f94,
               core_skeleton_cpp_FUN_0051b650);
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_7c.y);
    local_1f08 = (CQuaternion4f *)local_390;
    pCVar10 = (CQuaternion4f *)local_390;
    pfVar7 = local_300;
    rotation_quat = local_18;
    local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)local_1ee0;
    pcVar17 = _DAT_02dc9f60;
LAB_00538745:
    pfVar11 = (float *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
    pfVar8 = pfVar7 + (uint)bVar13 * -2 + 1;
    pCVar10->w = *pfVar7;
    pfVar7 = pfVar11 + (uint)bVar13 * -2 + 1;
    *pfVar11 = *pfVar8;
    *pfVar7 = pfVar8[(uint)bVar13 * -2 + 1];
    pfVar7[(uint)bVar13 * -2 + 1] = (pfVar8 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
    local_1edc = local_1f08;
  }
  else if (iVar18 == 0x13) {
    local_e8 = pCVar6->x;
    local_e4 = *pfVar8;
    local_e0.x = *pfVar7;
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
              (pCVar1,&local_b8,(int)_DAT_02dc9f60);
    local_70._0_4_ = local_e8 - local_b8.x;
    local_70._4_4_ = local_e4 - local_b8.y;
    local_70._8_4_ = local_e0.x - local_b8.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
              (&local_4c,(CVector3f *)local_70);
    fVar16 = (this_ptr->base).base.model.motion_controller.current_frame_number;
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
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(-local_4c.x,&local_2c0);
    pCVar1 = &(this_ptr->base).base.model;
    local_230.w = local_2c0.w;
    pfVar7 = (float *)((int)&local_230 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(float *)((int)&local_230 + (uint)bVar13 * -8 + 4) = local_2b0[(uint)bVar13 * -2 + -3];
    *pfVar7 = local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + -2];
    pfVar7[(uint)bVar13 * -2 + 1] =
         (local_2b0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + -2)[(uint)bVar13 * -2 + 1];
    this_ptr_02 = (CDeformableModelInstance *)0x538c6a;
    local_18 = (CQuaternion4f *)pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (pCVar1,&local_230,(float)local_1ef4,(int)_DAT_02dc9f60,core_skeleton_cpp_FUN_0051b650
              );
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_4c.y);
    local_1e0._0_4_ = local_240;
    *(float *)(local_1e0 + (uint)bVar13 * -8 + 4) = afStack_23c[(uint)bVar13 * -2];
    local_1d0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xfffffffe] =
         afStack_23c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    (local_1d0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xfffffffe)[(uint)bVar13 * -2 + 1] =
         (afStack_23c + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
    local_1edc = (CQuaternion4f *)local_1e0;
    rotation_quat = local_18;
    local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)local_1ef4;
    pcVar17 = _DAT_02dc9f60;
  }
  else {
    if (iVar18 != 0x16) {
      if (iVar18 == 0x1f) {
        this_ptr_00 = (this_ptr->base).lever_to_pull;
        if (this_ptr_00 == (CLever *)0x0) {
          pCVar4 = core_lever_cpp_CLever_getHandlePosition_FUN_004c6640(_DAT_02dc9f2c,&local_10c);
          pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             ((CDemonActor *)this_ptr,&local_154,pCVar4);
          if (pCVar6 != pCVar4) {
            pCVar6->x = pCVar4->x;
            (this_ptr->carry_object_world_center).y = pCVar4->y;
            (this_ptr->carry_object_world_center).z = pCVar4->z;
          }
        }
        else {
          pCVar4 = core_lever_cpp_CLever_getHandlePosition_FUN_004c6640(this_ptr_00,&local_58);
          pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             ((CDemonActor *)this_ptr,&local_a0,pCVar4);
          if (pCVar6 != pCVar4) {
            pCVar6->x = pCVar4->x;
            (this_ptr->carry_object_world_center).y = pCVar4->y;
            (this_ptr->carry_object_world_center).z = pCVar4->z;
          }
          _DAT_02dc9f2c = (this_ptr->base).lever_to_pull;
        }
        local_100 = (this_ptr->carry_object_world_center).x;
        local_fc = (this_ptr->carry_object_world_center).y;
        local_f8.x = (this_ptr->carry_object_world_center).z;
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (&(this_ptr->base).base.model,&local_94,(int)_DAT_02dc9f60);
        local_130 = local_100 - local_94.x;
        local_12c = local_fc - local_94.y;
        local_128.x = local_f8.x - local_94.z;
        local_ac.x = local_130;
        local_ac.y = local_12c;
        local_ac.z = local_128.x;
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                  ((CVector3f *)local_148,&local_ac);
        local_24 = SQRT(local_128.x * local_128.x + local_130 * local_130 + local_12c * local_12c);
        if (local_24 < 2.7f) {
          uVar19 = 0x5389fd;
          dVar15 = acos((double)(local_24 / 2.7f));
          local_20 = (float)dVar15;
          core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_20,uVar19);
          pCVar1 = &(this_ptr->base).base.model;
          CStack_2a4.w = fStack_2d4;
          pfVar7 = (float *)((int)&CStack_2a4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          *(float *)((int)&CStack_2a4 + (uint)bVar13 * -8 + 4) = local_2d0[(uint)bVar13 * -2];
          *pfVar7 = local_2d0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          pfVar7[(uint)bVar13 * -2 + 1] =
               (local_2d0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
          local_1c = pCVar1;
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                    (pCVar1,&CStack_2a4,(float)local_1f08,(int)_DAT_02dc9f60,
                     core_skeleton_cpp_FUN_0051b650);
          core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(-local_20);
          CStack_1c4.w = local_2c0.z;
          pfVar7 = (float *)((int)&CStack_1c4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          *(float *)((int)&CStack_1c4 + (uint)bVar13 * -8 + 4) = local_2b0[(uint)bVar13 * -2];
          *pfVar7 = local_2b0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          pfVar7[(uint)bVar13 * -2 + 1] =
               (local_2b0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                    (local_1c,&CStack_1c4,(float)local_1f08,_DAT_02dc9f68,
                     core_skeleton_cpp_FUN_0051b650);
        }
        core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0
                  (local_154.z,(CQuaternion4f *)(local_1e0 + 0xc));
        CStack_3b4.w = (float)local_1e0._12_4_;
        afStack_3a4[(uint)bVar13 * -2 + -3] = local_1d0[(uint)bVar13 * -2];
        afStack_3a4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + -2] =
             local_1d0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        (afStack_3a4 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + -2)[(uint)bVar13 * -2 + 1] =
             (local_1d0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
        local_1c = &(this_ptr->base).base.model;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (local_1c,&CStack_3b4,(float)local_1f08,(int)_DAT_02dc9f60,
                   core_skeleton_cpp_FUN_0051b650);
        core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_148._0_4_);
        pcVar17 = core_skeleton_cpp_FUN_0051b650;
        pCVar10 = (CQuaternion4f *)(auStack_25c + 2);
        pfVar7 = afStack_3a4;
        this_ptr_02 = local_1c;
        rotation_quat = (CQuaternion4f *)(auStack_25c + 2);
        local_1f0c = _DAT_02dc9f60;
      }
      else if (iVar18 == 0x17) {
        local_1ef8 = (CDeformableModel_MotionBlendWeightFunc *)
                     ((this_ptr->base).base.model.motion_controller.current_frame_number *
                     (float)0.066666666666666693);
        if (1.0 < (float)local_1ef8) {
          local_1ef8 = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
        }
        fVar14 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                 (float10)2.7f,(float10)1);
        local_38 = (float)fVar14;
        core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_38);
        local_330.w = local_3f0;
        pfVar7 = (float *)((int)&local_330 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        *(float *)((int)&local_330 + (uint)bVar13 * -8 + 4) = afStack_3ec[(uint)bVar13 * -2];
        *pfVar7 = afStack_3ec[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        pfVar7[(uint)bVar13 * -2 + 1] =
             (afStack_3ec + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
        local_18 = (CQuaternion4f *)&(this_ptr->base).base.model;
        this_ptr_02 = (CDeformableModelInstance *)0x5390d5;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  ((CDeformableModelInstance *)local_18,&local_330,(float)local_1ef8,
                   (int)_DAT_02dc9f60,core_skeleton_cpp_FUN_0051b650);
        core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(-local_38);
        local_1f08 = &local_330;
        pCVar10 = &local_330;
        pfVar7 = local_310;
        rotation_quat = local_18;
        local_1f0c = local_1ef8;
        pcVar17 = _DAT_02dc9f5c;
      }
      else {
        if (iVar18 != 0x18) {
          if (iVar18 == 0x19) {
            local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)
                         (1.0 - ((this_ptr->base).base.model.motion_controller.current_frame_number
                                + (float)-15) * (float)0.066666666666666693);
            if ((float)local_1f0c < 0.0) {
              local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)0x0;
            }
            if (1.0 < (float)local_1f0c) {
              local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
            }
            fVar14 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                     (float10)2.7f,(float10)1);
            local_34 = (float)fVar14;
            core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_34);
            pCVar1 = &(this_ptr->base).base.model;
            local_1f0.w = local_260;
            puVar9 = (uint *)((int)&local_1f0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            *(uint *)((int)&local_1f0 + (uint)bVar13 * -8 + 4) =
                 auStack_25c[(uint)bVar13 * -2];
            *puVar9 = auStack_25c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            puVar9[(uint)bVar13 * -2 + 1] =
                 (auStack_25c + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
            this_ptr_02 = (CDeformableModelInstance *)0x539416;
            local_18 = (CQuaternion4f *)pCVar1;
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (pCVar1,&local_1f0,(float)local_1f0c,(int)_DAT_02dc9f60,
                       core_skeleton_cpp_FUN_0051b650);
            core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(-local_34);
            local_1f0.w = local_220;
            puVar9 = (uint *)((int)&local_1f0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            *(CMotionList **)((int)&local_1f0 + (uint)bVar13 * -8 + 4) =
                 apCStack_21c[(uint)bVar13 * -2];
            *puVar9 = apCStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            puVar9[(uint)bVar13 * -2 + 1] =
                 (apCStack_21c + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
            rotation_quat = local_18;
            local_1edc = &local_1f0;
            pcVar17 = _DAT_02dc9f5c;
          }
          else {
            if (iVar18 != 0x1a) goto LAB_00538751;
            local_18 = (CQuaternion4f *)&(this_ptr->base).base.model;
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                      ((CDeformableModelInstance *)local_18,&local_16c,(int)_DAT_02dc9f60);
            fVar14 = atan2
                               ((float10)local_16c.y -
                                (float10)(this_ptr->carry_object_world_center).y,
                                (float10)2.7f);
            core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0((float)fVar14,&CStack_344);
            pCVar1 = local_1c;
            CStack_3e4.w = CStack_344.w;
            puVar12 = (uint *)((int)&CStack_3e4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            puVar9 = (uint *)((int)&CStack_344 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            *(uint *)((int)&CStack_3e4 + (uint)bVar13 * -8 + 4) =
                 *(uint *)((int)&CStack_344 + (uint)bVar13 * -8 + 4);
            *puVar12 = *puVar9;
            puVar12[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (pCVar1,&CStack_3e4,(float)local_1ef4,(int)_DAT_02dc9f60,
                       core_skeleton_cpp_FUN_0051b650);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (local_1c,&CStack_3e4,(float)local_1ef4,(int)_DAT_02dc9f5c,
                       core_skeleton_cpp_FUN_0051b650);
            fVar14 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                     (float10)2.7f,(float10)1);
            local_30 = (float)fVar14;
            core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_30);
            pCVar1 = local_1c;
            CStack_214.w = fStack_204;
            puVar9 = (uint *)((int)&CStack_214 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            *(CMotionList **)((int)&CStack_214 + (uint)bVar13 * -8 + 4) =
                 local_200[(uint)bVar13 * -2];
            *puVar9 = local_200[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            puVar9[(uint)bVar13 * -2 + 1] =
                 (local_200 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                      (pCVar1,&CStack_214,(float)local_1ef4,(int)_DAT_02dc9f60,
                       core_skeleton_cpp_FUN_0051b650);
            core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(-local_30);
            pcVar17 = core_skeleton_cpp_FUN_0051b650;
            CStack_214.w = local_360.z;
            pfVar7 = (float *)((int)&CStack_214 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            *(float *)((int)&CStack_214 + (uint)bVar13 * -8 + 4) = local_350[(uint)bVar13 * -2];
            *pfVar7 = local_350[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            pfVar7[(uint)bVar13 * -2 + 1] =
                 (local_350 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
            this_ptr_02 = local_1c;
            rotation_quat = &CStack_214;
            local_1edc = local_1ef4;
            local_1f0c = _DAT_02dc9f5c;
          }
          goto LAB_00538749;
        }
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (&(this_ptr->base).base.model,&local_c4,(int)_DAT_02dc9f60);
        local_20 = ((this_ptr->carry_object_world_center).y + (this_ptr->carry_object_bbox).max.y) -
                   (this_ptr->carry_object_bbox).min.y;
        pCVar2 = (this_ptr->base).object_to_pick_up;
        if (pCVar2 != (CDemonActor *)0x0) {
          _DAT_02dc9fe8 =
               (CQuaternion4f *)
               core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00534fc0(pCVar2);
          local_18 = _DAT_02dc9fe8;
        }
        local_20 = local_20 - (float)_DAT_02dc9fe8;
        fVar14 = atan2
                           ((float10)local_c4.y - (float10)local_20,(float10)2.7f);
        core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0
                  ((float)fVar14,(CQuaternion4f *)(local_390 + 0xc));
        pCVar1 = &(this_ptr->base).base.model;
        CStack_294.w = (float)local_390._12_4_;
        pfVar7 = (float *)((int)&CStack_294 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        *(float *)((int)&CStack_294 + (uint)bVar13 * -8 + 4) = local_380[(uint)bVar13 * -2];
        *pfVar7 = local_380[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        pfVar7[(uint)bVar13 * -2 + 1] =
             (local_380 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
        local_1c = pCVar1;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (pCVar1,&CStack_294,(float)local_1ee0,(int)_DAT_02dc9f60,
                   core_skeleton_cpp_FUN_0051b650);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (local_1c,&CStack_294,(float)local_1ee0,(int)_DAT_02dc9f5c,
                   core_skeleton_cpp_FUN_0051b650);
        fVar14 = (float10)fpatan((float10)(this_ptr->carry_object_bbox).max.x /
                                 (float10)2.7f,(float10)1);
        local_34 = (float)fVar14;
        core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(local_34);
        CStack_1a4.w = fStack_2f4;
        pfVar7 = (float *)((int)&CStack_1a4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        *(float *)((int)&CStack_1a4 + (uint)bVar13 * -8 + 4) = local_2f0[(uint)bVar13 * -2];
        *pfVar7 = local_2f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        pfVar7[(uint)bVar13 * -2 + 1] =
             (local_2f0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
                  (local_1c,&CStack_1a4,(float)local_1ee0,(int)_DAT_02dc9f60,
                   core_skeleton_cpp_FUN_0051b650);
        core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(-local_34);
        pcVar17 = core_skeleton_cpp_FUN_0051b650;
        rotation_quat = &CStack_1a4;
        pCVar10 = &CStack_1a4;
        pfVar7 = local_3d0 + 3;
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
    pCVar2 = (this_ptr->base).target_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      pCVar5 = (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&local_408);
      fStack_d4 = (pCVar5->min).x + (pCVar5->max).x;
      fStack_d0 = (pCVar5->min).y + (pCVar5->max).y;
      local_184.z = fStack_d4 * 0.5f;
      fStack_cc = (pCVar5->min).z + (pCVar5->max).z;
      fStack_178 = fStack_d0 * 0.5f;
      fStack_174 = fStack_cc * 0.5f;
      if (&stack0x00000000 != &DAT_02dca09c) {
        _DAT_02dc9f20 = local_184.z;
        _DAT_02dc9f24 = fStack_178;
        _DAT_02dc9f28 = fStack_174;
      }
    }
    pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                       ((CMatrix3x3f *)(local_1ecc + 0x1a98),(CVector3f *)(local_70 + 8),
                        (CVector3f *)&DAT_02dc9f20);
    local_148._8_4_ = (this_ptr->base).target_position.x + pCVar6->x;
    fStack_13c = (this_ptr->base).target_position.y + pCVar6->y;
    fStack_138 = (this_ptr->base).target_position.z + pCVar6->z;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
              ((CDemonActor *)this_ptr,&local_128,(CVector3f *)(local_148 + 8));
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
              (&(this_ptr->base).base.model,&local_e0,(int)_DAT_02dc9f60);
    local_f8.x = local_128.x - local_e0.x;
    local_f8.y = local_128.y - local_e0.y;
    local_f8.z = local_128.z - local_e0.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&CStack_11c,&local_f8);
    fVar16 = (this_ptr->base).base.model.motion_controller.current_frame_number;
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
    core_xform_cpp_quaternionFromAngleX_FUN_0055d4a0(CStack_11c.x,&CStack_1b4);
    pCVar1 = &(this_ptr->base).base.model;
    CStack_284.w = CStack_1b4.w;
    puVar12 = (uint *)((int)&CStack_284 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    puVar9 = (uint *)((int)&CStack_1b4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(uint *)((int)&CStack_284 + (uint)bVar13 * -8 + 4) =
         *(uint *)((int)&CStack_1b4 + (uint)bVar13 * -8 + 4);
    *puVar12 = *puVar9;
    puVar12[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
    local_1c = pCVar1;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
              (pCVar1,&CStack_284,(float)local_1edc,_DAT_02dc9f94,core_skeleton_cpp_FUN_0051b650);
    core_xform_cpp_quaternionFromAngleY_FUN_0055d4e0(CStack_11c.y);
    CStack_274.w = local_380[3];
    pfVar7 = (float *)((int)&CStack_274 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 1) * 4 + 4);
    *(float *)((int)&CStack_274 + (uint)bVar13 * -8 + 4) = local_380[(uint)bVar13 * -2 + 4];
    *pfVar7 = local_380[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 5];
    pfVar7[(uint)bVar13 * -2 + 1] =
         (local_380 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 5)[(uint)bVar13 * -2 + 1];
    pcVar17 = core_skeleton_cpp_FUN_0051b650;
    this_ptr_02 = local_1c;
    rotation_quat = &CStack_274;
    local_1f0c = _DAT_02dc9f60;
  }
LAB_00538749:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0051d7a0
            (this_ptr_02,rotation_quat,(float)local_1edc,(int)local_1f0c,pcVar17);
LAB_00538751:
  if (*(int *)(0x01C775EC + 0x240) != 0) {
    local_88 = 0;
    local_84 = 0;
    local_94.z = 0.0;
    if ((this_ptr->guns_drawn != 0) && (this_ptr->weapon != (CWeapon *)0x0)) {
      local_94.z = (this_ptr->right_arm_aim).target_pitch;
    }
    pcVar17 = core_skeleton_cpp_FUN_0051b650;
    fVar16 = 1.0;
    iVar18 = _DAT_02dc9f50;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610(&local_94.z);
    CStack_2e4.w = fStack_3d4;
    pfVar7 = (float *)((int)&CStack_2e4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(float *)((int)&CStack_2e4 + (uint)bVar13 * -8 + 4) = local_3d0[(uint)bVar13 * -2];
    *pfVar7 = local_3d0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    pfVar7[(uint)bVar13 * -2 + 1] =
         (local_3d0 + (uint)bVar13 * -2 + (uint)bVar13 * -2 + 1)[(uint)bVar13 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (&(this_ptr->base).base.model,&CStack_2e4,fVar16,iVar18,pcVar17);
  }
  if (this_ptr->interact_blend <= 0.0) {
    return;
  }
  iVar18 = 1;
  motion_name = "draw_holsters2aimPistols";
  pCVar1 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar1);
  iVar18 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010
                     (&this_ptr_01->motion_list,motion_name,iVar18);
  local_2c = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                       (&pCVar1->motion_controller,iVar18,1.0);
  local_1c = (CDeformableModelInstance *)local_2c;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (pCVar1,iVar18,local_2c,this_ptr->interact_blend,_DAT_02dc9f90,
             core_skeleton_cpp_FUN_0051b650);
  return;
}
