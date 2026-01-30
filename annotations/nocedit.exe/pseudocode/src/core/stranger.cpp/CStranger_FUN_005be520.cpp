// Name: core_stranger.cpp_CStranger_FUN_005be520
// Address: 005be520
// Address Range: [[005be520, 005bf711]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005be520(void)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005be520(void)

{
  SMotion *pSVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  CVector3f *pCVar4;
  CSkeleton *this_ptr;
  int iVar5;
  CQuaternion4f *pCVar6;
  uint *puVar8;
  CQuaternion4f *pCVar9;
  uint *puVar11;
  byte bVar12;
  float10 fVar13;
  double dVar14;
  CDemonActor *in_stack_00000004;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *pCVar15;
  float fVar16;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  code *blend_callback_00;
  float local_1f0c;
  CDeformableModelInstance *local_1f08;
  float local_1ef8;
  CDeformableModelInstance *local_1ef4;
  CDeformableModelInstance *local_1ee0;
  CDeformableModelInstance *local_1edc;
  char local_1ecc;
  float local_1ec4;
  float afStack_1bcc [27];
  CMotionList *apCStack_1b60 [12];
  float afStack_1b30 [56];
  CMotionList *apCStack_1a50 [13];
  float afStack_1a1c [11];
  CMotionList *apCStack_19f0 [13];
  float afStack_19bc [404];
  CMotionList *apCStack_136c [12];
  float afStack_133c [56];
  CMotionList *apCStack_125c [13];
  float afStack_1228 [11];
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
  CMotionList *local_380 [3];
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
  CMotionList *pCStack_274;
  CMotionList *apCStack_270 [4];
  byte local_260 [32];
  CQuaternion4f local_240;
  CQuaternion4f local_230;
  byte local_220 [16];
  CMotionList *local_210 [3];
  CQuaternion4f local_204;
  CQuaternion4f local_1f0;
  CMotionList *local_1e0;
  float afStack_1dc [2];
  CQuaternion4f CStack_1d4;
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
  float local_88;
  float local_84;
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
  CDeformableModelInstance *local_18;
  uint *puVar7;
  uint *puVar10;
  
  bVar12 = 0;
  local_18 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       ((CMotionController *)(in_stack_00000004 + 1),0);
  local_1f08 = local_18;
  if (in_stack_00000004[0x17a].health < 0x3e19999a) {
    local_1f08 = (CDeformableModelInstance *)
                 (((float)in_stack_00000004[0x17a].health / 0.15f) * (float)local_18);
  }
  if (0.85 < (float)in_stack_00000004[0x17a].health) {
    local_1f08 = (CDeformableModelInstance *)
                 (((1.0 - (float)in_stack_00000004[0x17a].health) / 0.15) * (float)local_1f08);
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            ((CDeformableModelInstance *)(in_stack_00000004 + 1));
  if ((0.0 < (float)local_1f08) && (-1 < *(int *)(in_stack_00000004[0x17a].create_event + 0x1c))) {
    core_stranger_cpp_CStranger_FUN_005bf720();
    _local_1ecc = 0.0;
    local_1ec4 = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),(SPoseData *)&local_1ecc,
               (float)local_1f08,-1,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  }
  core_stranger_cpp_CStranger_FUN_005bfb60();
  pCVar15 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
  pCVar4 = (CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30);
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)pCVar15);
  iVar5 = pSVar1->state_index;
  if (iVar5 == 0x15) {
    local_160 = pCVar4->x;
    local_15c = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
    local_158 = *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar15,&local_184,INT_03f6badc);
    local_190.x = local_160 - local_184.x;
    local_190.y = local_15c - local_184.y;
    local_190.z = local_158 - local_184.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_190);
    fVar16 = *(float *)(in_stack_00000004[1].actor_name + 8);
    if ((float)13 <= fVar16) {
      local_1ee0 = (CDeformableModelInstance *)
                   (1.0 - (fVar16 + (float)-13) * (float)0.0769230769230769);
      if ((float)local_1ee0 < 0.0) {
        local_1ee0 = (CDeformableModelInstance *)0x0;
      }
    }
    else {
      local_1ee0 = (CDeformableModelInstance *)(fVar16 * (float)0.0769230769230769);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(local_7c.x,&local_320);
    local_360._0_4_ = local_320.w;
    puVar7 = (uint *)((int)&local_320 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)(local_360 + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&local_320 + (uint)bVar12 * -8 + 4);
    *(uint *)(local_360 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) = *puVar7;
    *(uint *)
     ((int)(local_360 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) + ((uint)bVar12 * -2 + 1) * 4) =
         puVar7[(uint)bVar12 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
    this_ptr_00 = (CDeformableModelInstance *)0x5be74f;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (local_18,(CQuaternion4f *)local_360,(float)local_1ee0,INT_03f6bb10,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_7c.y,(CQuaternion4f *)local_300);
    local_1f08 = (CDeformableModelInstance *)local_390;
    pCVar9 = (CQuaternion4f *)local_390;
    pCVar6 = (CQuaternion4f *)local_300;
    pCVar15 = local_18;
    local_1f0c = (float)local_1ee0;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)INT_03f6badc;
LAB_005be795:
    puVar10 = (uint *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
    puVar7 = (uint *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
    pCVar9->w = pCVar6->w;
    puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
    puVar8 = puVar7 + (uint)bVar12 * -2 + 1;
    *puVar10 = *puVar7;
    *puVar11 = *puVar8;
    puVar11[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
    local_1edc = local_1f08;
  }
  else if (iVar5 == 0x13) {
    local_e8 = pCVar4->x;
    local_e4 = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
    local_e0.x = *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar15,&local_b8,INT_03f6badc);
    local_70._0_4_ = local_e8 - local_b8.x;
    local_70._4_4_ = local_e4 - local_b8.y;
    local_70._8_4_ = local_e0.x - local_b8.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
              (&local_4c,(CVector3f *)local_70);
    fVar16 = *(float *)(in_stack_00000004[1].actor_name + 8);
    if ((float)24 <= fVar16) {
      local_1ef4 = (CDeformableModelInstance *)
                   (1.0 - (fVar16 + (float)-24) * (float)0.10000000000000001);
      if ((float)local_1ef4 < 0.0) {
        local_1ef4 = (CDeformableModelInstance *)0x0;
      }
    }
    else {
      local_1ef4 = (CDeformableModelInstance *)(fVar16 * (float)0.041666666666666699);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(-local_4c.x,(CQuaternion4f *)local_2c0);
    local_230.w = (float)local_2c0._0_4_;
    *(uint *)(local_220 + (uint)bVar12 * -8 + -0xc) =
         *(uint *)(local_2c0 + (uint)bVar12 * -8 + 4);
    *(uint *)(local_220 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -8) =
         *(uint *)(local_2c0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)
     ((int)(local_220 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + -8) + ((uint)bVar12 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_2c0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) +
          ((uint)bVar12 * -2 + 1) * 4);
    this_ptr_00 = (CDeformableModelInstance *)0x5becba;
    local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_230,(float)local_1ef4,
               INT_03f6badc,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_4c.y,&local_240);
    local_1e0 = (CMotionList *)local_240.w;
    pfVar3 = (float *)((int)&local_240 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    afStack_1dc[(uint)bVar12 * -2] = *(float *)((int)&local_240 + (uint)bVar12 * -8 + 4);
    afStack_1dc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = *pfVar3;
    (afStack_1dc + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
         pfVar3[(uint)bVar12 * -2 + 1];
    local_1edc = (CDeformableModelInstance *)&local_1e0;
    pCVar15 = local_18;
    local_1f0c = (float)local_1ef4;
    blend_callback = (CDeformableModel_MotionBlendWeightFunc *)INT_03f6badc;
  }
  else {
    if (iVar5 != 0x16) {
      if (iVar5 == 0x1f) {
        if (in_stack_00000004[0x179].scale.z == 0) {
          pCVar2 = core_lever_cpp_FUN_00504dd0();
          pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (in_stack_00000004,&local_154,pCVar2);
          if (pCVar4 != pCVar2) {
            pCVar4->x = pCVar2->x;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar2->y;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar2->z;
          }
        }
        else {
          pCVar2 = core_lever_cpp_FUN_00504dd0();
          pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (in_stack_00000004,&local_a0,pCVar2);
          if (pCVar4 != pCVar2) {
            pCVar4->x = pCVar2->x;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar2->y;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar2->z;
          }
          DAT_03f6baa8 = in_stack_00000004[0x179].scale.z;
        }
        local_100 = *(float *)(in_stack_00000004[0x17a].create_event + 0x30);
        local_fc = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
        local_f8.x = *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  ((CDeformableModelInstance *)(in_stack_00000004 + 1),(CVector3f *)local_94,
                   INT_03f6badc);
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
          dVar14 = acos((double)(local_24 / 2.7f));
          local_20 = (float)dVar14;
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_20,&CStack_2d4);
          CStack_2a4.w = CStack_2d4.w;
          puVar8 = (uint *)((int)&CStack_2a4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          puVar7 = (uint *)((int)&CStack_2d4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          *(uint *)((int)&CStack_2a4 + (uint)bVar12 * -8 + 4) =
               *(uint *)((int)&CStack_2d4 + (uint)bVar12 * -8 + 4);
          *puVar8 = *puVar7;
          puVar8[(uint)bVar12 * -2 + 1] = puVar7[(uint)bVar12 * -2 + 1];
          local_1c = (CDeformableModelInstance *)(in_stack_00000004 + 1);
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                    ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_2a4,
                     (float)local_1f08,INT_03f6badc,
                     core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                    (-local_20,(CQuaternion4f *)(local_2c0 + 0xc));
          CStack_1c4.w = (float)local_2c0._12_4_;
          pfVar3 = (float *)((int)&CStack_1c4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          *(float *)((int)&CStack_1c4 + (uint)bVar12 * -8 + 4) = local_2b0[(uint)bVar12 * -2];
          *pfVar3 = local_2b0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          pfVar3[(uint)bVar12 * -2 + 1] =
               (local_2b0 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                    (local_1c,&CStack_1c4,(float)local_1f08,INT_03f6bae4,
                     core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        }
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(local_154.z,&CStack_1d4);
        CStack_3b4.w = CStack_1d4.w;
        puVar8 = (uint *)((int)&CStack_3b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        puVar7 = (uint *)((int)&CStack_1d4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *(uint *)((int)&CStack_3b4 + (uint)bVar12 * -8 + 4) =
             *(uint *)((int)&CStack_1d4 + (uint)bVar12 * -8 + 4);
        *puVar8 = *puVar7;
        puVar8[(uint)bVar12 * -2 + 1] = puVar7[(uint)bVar12 * -2 + 1];
        local_1c = (CDeformableModelInstance *)(in_stack_00000004 + 1);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_1c,&CStack_3b4,(float)local_1f08,INT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((float)local_148._0_4_,&CStack_3a4);
        pCVar9 = (CQuaternion4f *)(local_260 + 0xc);
        pCVar6 = &CStack_3a4;
        this_ptr_00 = local_1c;
        pCVar15 = (CDeformableModelInstance *)(local_260 + 0xc);
        local_1f0c = (float)INT_03f6badc;
        blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
      }
      else if (iVar5 == 0x17) {
        local_1ef8 = *(float *)(in_stack_00000004[1].actor_name + 8) * (float)0.066666666666666693;
        if (1.0 < local_1ef8) {
          local_1ef8 = 1.0;
        }
        fVar13 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x48) /
                                 (float10)2.7f,(float10)1);
        local_38 = (float)fVar13;
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_38,(CQuaternion4f *)local_3f0);
        local_330.w = (float)local_3f0._0_4_;
        puVar7 = (uint *)((int)&local_330 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *(uint *)((int)&local_330 + (uint)bVar12 * -8 + 4) =
             *(uint *)(local_3f0 + (uint)bVar12 * -8 + 4);
        *puVar7 = *(uint *)(local_3f0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        puVar7[(uint)bVar12 * -2 + 1] =
             *(uint *)
              ((int)(local_3f0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) +
              ((uint)bVar12 * -2 + 1) * 4);
        local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
        this_ptr_00 = (CDeformableModelInstance *)0x5bf125;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_18,&local_330,local_1ef8,INT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_38,&local_310);
        local_1f08 = (CDeformableModelInstance *)&local_330;
        pCVar9 = &local_330;
        pCVar6 = &local_310;
        pCVar15 = local_18;
        local_1f0c = local_1ef8;
        blend_callback = (CDeformableModel_MotionBlendWeightFunc *)INT_03f6bad8;
      }
      else {
        if (iVar5 != 0x18) {
          if (iVar5 == 0x19) {
            local_1f0c = 1.0 - (*(float *)(in_stack_00000004[1].actor_name + 8) +
                               (float)-15) * (float)0.066666666666666693;
            if (local_1f0c < 0.0) {
              local_1f0c = 0.0;
            }
            if (1.0 < local_1f0c) {
              local_1f0c = 1.0;
            }
            fVar13 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event +
                                                        0x48) / (float10)2.7f,(float10)1);
            local_34 = (float)fVar13;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_34,(CQuaternion4f *)local_260);
            local_1f0.w = (float)local_260._0_4_;
            puVar7 = (uint *)((int)&local_1f0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            *(uint *)((int)&local_1f0 + (uint)bVar12 * -8 + 4) =
                 *(uint *)(local_260 + (uint)bVar12 * -8 + 4);
            *puVar7 = *(uint *)(local_260 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            puVar7[(uint)bVar12 * -2 + 1] =
                 *(uint *)
                  ((int)(local_260 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) +
                  ((uint)bVar12 * -2 + 1) * 4);
            this_ptr_00 = (CDeformableModelInstance *)0x5bf466;
            local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_1f0,local_1f0c,
                       INT_03f6badc,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_34,(CQuaternion4f *)local_220);
            local_1f0.w = (float)local_220._0_4_;
            puVar7 = (uint *)((int)&local_1f0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            *(uint *)((int)&local_1f0 + (uint)bVar12 * -8 + 4) =
                 *(uint *)(local_220 + (uint)bVar12 * -8 + 4);
            *puVar7 = *(uint *)(local_220 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            puVar7[(uint)bVar12 * -2 + 1] =
                 *(uint *)
                  ((int)(local_220 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) +
                  ((uint)bVar12 * -2 + 1) * 4);
            pCVar15 = local_18;
            local_1edc = (CDeformableModelInstance *)&local_1f0;
            blend_callback = (CDeformableModel_MotionBlendWeightFunc *)INT_03f6bad8;
          }
          else {
            if (iVar5 != 0x1a) goto LAB_005be7a1;
            local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                      (local_18,&local_16c,INT_03f6badc);
            fVar13 = atan2
                               ((float10)local_16c.y -
                                (float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x34),
                                (float10)2.7f);
            core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((float)fVar13,&local_344);
            pCVar15 = local_1c;
            local_3f0._12_4_ = local_344.w;
            pfVar3 = (float *)((int)&local_344 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            local_3e0[(uint)bVar12 * -2] = *(float *)((int)&local_344 + (uint)bVar12 * -8 + 4);
            local_3e0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = *pfVar3;
            (local_3e0 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
                 pfVar3[(uint)bVar12 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar15,(CQuaternion4f *)(local_3f0 + 0xc),(float)local_1ef4,INT_03f6badc,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (local_1c,(CQuaternion4f *)(local_3f0 + 0xc),(float)local_1ef4,INT_03f6bad8,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            fVar13 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event +
                                                        0x48) / (float10)2.7f,(float10)1);
            local_30 = (float)fVar13;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_30,&local_204);
            pCVar15 = local_1c;
            local_220._12_4_ = local_204.w;
            puVar7 = (uint *)((int)&local_204 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            local_210[(uint)bVar12 * -2] =
                 *(CMotionList **)((int)&local_204 + (uint)bVar12 * -8 + 4);
            local_210[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = (CMotionList *)*puVar7;
            (local_210 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
                 (CMotionList *)puVar7[(uint)bVar12 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar15,(CQuaternion4f *)(local_220 + 0xc),(float)local_1ef4,INT_03f6badc,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                      (-local_30,(CQuaternion4f *)(local_360 + 0xc));
            local_220._12_4_ = local_360._12_4_;
            local_210[(uint)bVar12 * -2] = (CMotionList *)local_350[(uint)bVar12 * -2];
            local_210[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 (CMotionList *)local_350[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            (local_210 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
                 (CMotionList *)
                 (local_350 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
            this_ptr_00 = local_1c;
            pCVar15 = (CDeformableModelInstance *)(local_220 + 0xc);
            local_1edc = local_1ef4;
            local_1f0c = (float)INT_03f6bad8;
            blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
          }
          goto LAB_005be799;
        }
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_c4,INT_03f6badc);
        local_20 = (*(float *)(in_stack_00000004[0x17a].create_event + 0x34) +
                   *(float *)(in_stack_00000004[0x17a].create_event + 0x4c)) -
                   *(float *)(in_stack_00000004[0x17a].create_event + 0x40);
        if (in_stack_00000004[0x179].scale.x != 0) {
          INT_03f6bb64 = (int)core_stranger_cpp_FUN_005bb010();
          local_18 = (CDeformableModelInstance *)INT_03f6bb64;
        }
        local_20 = local_20 - (float)INT_03f6bb64;
        fVar13 = atan2
                           ((float10)local_c4.y - (float10)local_20,(float10)2.7f);
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
                  ((float)fVar13,(CQuaternion4f *)(local_390 + 0xc));
        local_294.w = (float)local_390._12_4_;
        puVar7 = (uint *)((int)&local_294 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *(CMotionList **)((int)&local_294 + (uint)bVar12 * -8 + 4) = local_380[(uint)bVar12 * -2];
        *puVar7 = local_380[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        puVar7[(uint)bVar12 * -2 + 1] =
             (local_380 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        local_1c = (CDeformableModelInstance *)(in_stack_00000004 + 1);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_294,(float)local_1ee0,
                   INT_03f6badc,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_1c,&local_294,(float)local_1ee0,INT_03f6bad8,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        fVar13 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x48) /
                                 (float10)2.7f,(float10)1);
        local_34 = (float)fVar13;
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                  (local_34,(CQuaternion4f *)(local_300 + 0xc));
        local_1a4.w = (float)local_300._12_4_;
        pfVar3 = (float *)((int)&local_1a4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *(float *)((int)&local_1a4 + (uint)bVar12 * -8 + 4) = local_2f0[(uint)bVar12 * -2];
        *pfVar3 = local_2f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        pfVar3[(uint)bVar12 * -2 + 1] =
             (local_2f0 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_1c,&local_1a4,(float)local_1ee0,INT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(-local_34,&local_3c4);
        pCVar15 = (CDeformableModelInstance *)&local_1a4;
        pCVar9 = &local_1a4;
        pCVar6 = &local_3c4;
        this_ptr_00 = local_1c;
        local_1f08 = local_1ee0;
        local_1f0c = (float)INT_03f6bad8;
        blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
      }
      goto LAB_005be795;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)(auStack_434 + 4),
               (CVector3f *)&in_stack_00000004[0x179].previous_transform_state.position.y);
    if ((DAT_03f6baac & 1) == 0) {
      DAT_03f6baac = DAT_03f6baac | 1;
    }
    if (in_stack_00000004[0x179].unk10 != 0) {
      pfVar3 = (float *)(**(code **)(*(int *)(in_stack_00000004[0x179].unk10 + 0x154) + 0x14))();
      fStack_d4 = *pfVar3 + pfVar3[3];
      fStack_d0 = pfVar3[1] + pfVar3[4];
      local_184.z = fStack_d4 * 0.5f;
      fStack_cc = pfVar3[2] + pfVar3[5];
      fStack_178 = fStack_d0 * 0.5f;
      fStack_174 = fStack_cc * 0.5f;
      if (&stack0x00000000 != (byte *)0x3f6bc18) {
        FLOAT_03f6ba9c = local_184.z;
        FLOAT_03f6baa0 = fStack_178;
        FLOAT_03f6baa4 = fStack_174;
      }
    }
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)auStack_434,(CVector3f *)(local_70 + 8),
                        (CVector3f *)&FLOAT_03f6ba9c);
    local_148._8_4_ = (float)in_stack_00000004[0x179].unk11 + pCVar4->x;
    fStack_13c = (float)in_stack_00000004[0x179].unk12 + pCVar4->y;
    fStack_138 = in_stack_00000004[0x179].previous_transform_state.position.x + pCVar4->z;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (in_stack_00000004,&local_128,(CVector3f *)(local_148 + 8));
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_e0,INT_03f6badc);
    local_f8.x = local_128.x - local_e0.x;
    local_f8.y = local_128.y - local_e0.y;
    local_f8.z = local_128.z - local_e0.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(aCStack_11c,&local_f8);
    fVar16 = *(float *)(in_stack_00000004[1].actor_name + 8);
    if ((float)21 <= fVar16) {
      local_1edc = (CDeformableModelInstance *)
                   (1.0 - (fVar16 + (float)-21) * (float)0.071428571428571397);
      if ((float)local_1edc < 0.0) {
        local_1edc = (CDeformableModelInstance *)0x0;
      }
    }
    else {
      local_1edc = (CDeformableModelInstance *)(fVar16 * (float)0.047619047619047603);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(aCStack_11c[0].x,&CStack_1b4);
    CStack_284.w = CStack_1b4.w;
    puVar8 = (uint *)((int)&CStack_284 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_1b4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)((int)&CStack_284 + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&CStack_1b4 + (uint)bVar12 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar12 * -2 + 1] = puVar7[(uint)bVar12 * -2 + 1];
    local_1c = (CDeformableModelInstance *)(in_stack_00000004 + 1);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_284,(float)local_1edc,
               INT_03f6bb10,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(aCStack_11c[0].y,&CStack_374);
    pCStack_274 = (CMotionList *)CStack_374.w;
    puVar7 = (uint *)((int)&CStack_374 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    apCStack_270[(uint)bVar12 * -2] = *(CMotionList **)((int)&CStack_374 + (uint)bVar12 * -8 + 4);
    apCStack_270[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = (CMotionList *)*puVar7;
    (apCStack_270 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
         (CMotionList *)puVar7[(uint)bVar12 * -2 + 1];
    this_ptr_00 = local_1c;
    pCVar15 = (CDeformableModelInstance *)&pCStack_274;
    local_1f0c = (float)INT_03f6badc;
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
  }
LAB_005be799:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr_00,(CQuaternion4f *)pCVar15,(float)local_1edc,(int)local_1f0c,blend_callback);
LAB_005be7a1:
  if (g_CGamePtr->block_auto_save != 0) {
    local_88 = 0.0;
    local_84 = 0.0;
    local_94._8_4_ = 0.0;
    if ((in_stack_00000004[0x179].previous_transform_state.orientation.z != 0.0) &&
       (in_stack_00000004[0x17a].orient_matrix.m[0].x != 0.0)) {
      local_94._8_4_ = *(uint *)in_stack_00000004[0x17a].actor_name;
    }
    blend_callback_00 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar16 = 1.0;
    iVar5 = INT_03f6bacc;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(local_94 + 8),&CStack_3d4);
    CStack_2e4.w = CStack_3d4.w;
    puVar8 = (uint *)((int)&CStack_2e4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    puVar7 = (uint *)((int)&CStack_3d4 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)((int)&CStack_2e4 + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&CStack_3d4 + (uint)bVar12 * -8 + 4);
    *puVar8 = *puVar7;
    puVar8[(uint)bVar12 * -2 + 1] = puVar7[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_2e4,fVar16,iVar5,
               blend_callback_00);
  }
  if (in_stack_00000004[0x17a].orient_matrix.m[2].x <= 0.0) {
    return;
  }
  pCVar15 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar15);
  iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&this_ptr->motion_list);
  local_2c = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       ((CMotionController *)pCVar15,iVar5,1.0);
  local_1c = (CDeformableModelInstance *)local_2c;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (pCVar15,iVar5,local_2c,in_stack_00000004[0x17a].orient_matrix.m[2].x,INT_03f6bb0c,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  return;
}
