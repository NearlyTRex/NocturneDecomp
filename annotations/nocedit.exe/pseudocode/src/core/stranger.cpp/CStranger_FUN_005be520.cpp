// Name: core_stranger.cpp_CStranger_FUN_005be520
// Address: 005be520
// Address Range: [[005be520, 005bf711]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005be520()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005be520(uint param_1) */

void core_stranger_cpp_CStranger_FUN_005be520(void)

{
  float fVar1;
  SMotion *pSVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  CSkeleton *this_ptr;
  int iVar5;
  float *pfVar6;
  CQuaternion4f *pCVar7;
  uint *puVar9;
  byte bVar10;
  float10 fVar11;
  double dVar12;
  CDemonActor *in_stack_00000004;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *pCVar13;
  float fVar14;
  code *pcVar15;
  CVector3f *pCVar16;
  CDeformableModel_MotionBlendWeightFunc *local_1f0c;
  CDeformableModelInstance *local_1f08;
  CDeformableModel_MotionBlendWeightFunc *local_1ef8;
  CDeformableModelInstance *local_1ef4;
  CDeformableModelInstance *local_1ee0;
  CDeformableModelInstance *local_1edc;
  char local_1ecc;
  float local_1ec4;
  float afStack_1bcc [27];
  CMotionList *apCStack_1b60 [9];
  float afStack_1b3c [40];
  CMotionController_vtable *apCStack_1a9c [7];
  float afStack_1a80 [12];
  CMotionList *apCStack_1a50 [13];
  float afStack_1a1c [8];
  CMotionList *apCStack_19fc [3];
  float afStack_19f0 [4];
  CMotionList *apCStack_19e0 [9];
  float afStack_19bc [11];
  CMotionList *apCStack_1990 [4];
  float afStack_1980 [389];
  CMotionList *apCStack_136c [9];
  float afStack_1348 [40];
  CMotionController_vtable *apCStack_12a8 [7];
  float afStack_128c [12];
  CMotionList *apCStack_125c [13];
  float afStack_1228 [8];
  CMotionList *apCStack_1208 [3];
  float afStack_11fc [4];
  CMotionList *apCStack_11ec [9];
  float afStack_11c8 [11];
  CMotionList *apCStack_119c [4];
  float afStack_118c [854];
  byte auStack_434 [44];
  CVector3f local_408 [2];
  CMotionList *local_3f0;
  float afStack_3ec [2];
  CQuaternion4f local_3e4;
  float fStack_3d4;
  float local_3d0 [7];
  CQuaternion4f CStack_3b4;
  float afStack_3a4 [5];
  CQuaternion4f local_390;
  CMotionList *local_380 [8];
  CQuaternion4f local_360;
  float local_350 [8];
  CQuaternion4f local_330;
  float local_320;
  float afStack_31c [7];
  float local_300 [3];
  CMotionList *local_2f4;
  float local_2f0 [3];
  CQuaternion4f CStack_2e4;
  float fStack_2d4;
  float local_2d0 [4];
  float local_2c0;
  CMotionController_vtable *apCStack_2bc [6];
  CQuaternion4f CStack_2a4;
  CQuaternion4f local_294;
  CQuaternion4f CStack_284;
  CMotionList *pCStack_274;
  CMotionList *apCStack_270 [4];
  CMotionList *local_260;
  uint auStack_25c [2];
  CQuaternion4f CStack_254;
  CMotionList *local_240;
  float afStack_23c [3];
  CQuaternion4f local_230;
  CMotionList *local_220;
  CMotionList *apCStack_21c [2];
  CQuaternion4f local_214;
  CMotionList *local_204;
  CMotionList *local_200 [4];
  CQuaternion4f local_1f0;
  CMotionList *local_1e0;
  float afStack_1dc [6];
  CQuaternion4f CStack_1c4;
  float fStack_1b4;
  CMotionList *apCStack_1b0 [3];
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
  CQuaternion4f *local_38;
  CQuaternion4f *local_34;
  CQuaternion4f *local_30;
  float local_2c;
  float local_24;
  CQuaternion4f *local_20;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  float *pfVar8;
  
  bVar10 = 0;
  local_18 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       ((CMotionController *)(in_stack_00000004 + 1),0);
  local_1f08 = local_18;
  if (in_stack_00000004[0x17a].health < 0x3e19999a) {
    local_1f08 = (CDeformableModelInstance *)
                 (((float)in_stack_00000004[0x17a].health / 0.15f) * (float)local_18);
  }
  fVar14 = 2.0;
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
  pCVar13 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
  pCVar16 = (CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)pCVar13);
  iVar5 = pSVar2->state_index;
  if (iVar5 == 0x15) {
    local_160 = pCVar16->x;
    local_15c = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
    local_158 = *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar13,&local_184,(int)DAT_03f6badc);
    local_190.x = local_160 - local_184.x;
    local_190.y = local_15c - local_184.y;
    local_190.z = local_158 - local_184.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_190);
    fVar1 = *(float *)(in_stack_00000004[1].actor_name + 8);
    if ((float)13 <= fVar1) {
      local_1ee0 = (CDeformableModelInstance *)
                   (1.0 - (fVar1 + (float)-13) * (float)0.0769230769230769);
      if ((float)local_1ee0 < 0.0) {
        local_1ee0 = (CDeformableModelInstance *)0x0;
      }
    }
    else {
      local_1ee0 = (CDeformableModelInstance *)(fVar1 * (float)0.0769230769230769);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)local_7c.x,fVar14);
    local_360.w = local_320;
    local_350[(uint)bVar10 * -2 + -3] = afStack_31c[(uint)bVar10 * -2];
    local_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -2] =
         afStack_31c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (local_350 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -2)[(uint)bVar10 * -2 + 1] =
         (afStack_31c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
    this_ptr_00 = (CDeformableModelInstance *)0x5be74f;
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (local_18,&local_360,(float)local_1ee0,DAT_03f6bb10,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)local_7c.y,fVar14);
    local_1f08 = (CDeformableModelInstance *)&local_390;
    pCVar7 = &local_390;
    pfVar4 = local_300;
    pCVar13 = local_18;
    local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)local_1ee0;
    pcVar15 = DAT_03f6badc;
LAB_005be795:
    pfVar8 = (float *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
    pfVar6 = pfVar4 + (uint)bVar10 * -2 + 1;
    pCVar7->w = *pfVar4;
    pfVar4 = pfVar8 + (uint)bVar10 * -2 + 1;
    *pfVar8 = *pfVar6;
    *pfVar4 = pfVar6[(uint)bVar10 * -2 + 1];
    pfVar4[(uint)bVar10 * -2 + 1] = (pfVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    local_1edc = local_1f08;
  }
  else if (iVar5 == 0x13) {
    local_e8 = pCVar16->x;
    local_e4 = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
    local_e0.x = *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar13,&local_b8,(int)DAT_03f6badc);
    local_70._0_4_ = local_e8 - local_b8.x;
    local_70._4_4_ = local_e4 - local_b8.y;
    local_70._8_4_ = local_e0.x - local_b8.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
              (&local_4c,(CVector3f *)local_70);
    fVar1 = *(float *)(in_stack_00000004[1].actor_name + 8);
    if ((float)24 <= fVar1) {
      local_1ef4 = (CDeformableModelInstance *)
                   (1.0 - (fVar1 + (float)-24) * (float)0.10000000000000001);
      if ((float)local_1ef4 < 0.0) {
        local_1ef4 = (CDeformableModelInstance *)0x0;
      }
    }
    else {
      local_1ef4 = (CDeformableModelInstance *)(fVar1 * (float)0.041666666666666699);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)-local_4c.x,fVar14);
    local_230.w = local_2c0;
    puVar9 = (uint *)((int)&local_230 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(CMotionController_vtable **)((int)&local_230 + (uint)bVar10 * -8 + 4) =
         apCStack_2bc[(uint)bVar10 * -2];
    *puVar9 = apCStack_2bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    puVar9[(uint)bVar10 * -2 + 1] =
         (apCStack_2bc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    this_ptr_00 = (CDeformableModelInstance *)0x5becba;
    local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_230,(float)local_1ef4,
               (int)DAT_03f6badc,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)local_4c.y,fVar14);
    local_1e0 = local_240;
    afStack_1dc[(uint)bVar10 * -2] = afStack_23c[(uint)bVar10 * -2];
    afStack_1dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_23c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    (afStack_1dc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (afStack_23c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    local_1edc = (CDeformableModelInstance *)&local_1e0;
    pCVar13 = local_18;
    local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)local_1ef4;
    pcVar15 = DAT_03f6badc;
  }
  else {
    if (iVar5 != 0x16) {
      if (iVar5 == 0x1f) {
        if (in_stack_00000004[0x179].scale.z == 0) {
          pCVar3 = (CVector3f *)core_lever_cpp_FUN_00504dd0();
          pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (in_stack_00000004,&local_154,pCVar3);
          if (pCVar16 != pCVar3) {
            pCVar16->x = pCVar3->x;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar3->y;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar3->z;
          }
        }
        else {
          pCVar3 = (CVector3f *)core_lever_cpp_FUN_00504dd0();
          pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (in_stack_00000004,&local_a0,pCVar3);
          if (pCVar16 != pCVar3) {
            pCVar16->x = pCVar3->x;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar3->y;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar3->z;
          }
          DAT_03f6baa8 = in_stack_00000004[0x179].scale.z;
        }
        local_100 = *(float *)(in_stack_00000004[0x17a].create_event + 0x30);
        local_fc = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
        local_f8.x = *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  ((CDeformableModelInstance *)(in_stack_00000004 + 1),(CVector3f *)local_94,
                   (int)DAT_03f6badc);
        local_130 = local_100 - (float)local_94._0_4_;
        local_12c = local_fc - (float)local_94._4_4_;
        local_128.x = local_f8.x - (float)local_94._8_4_;
        pCVar16 = &local_ac;
        local_ac.x = local_130;
        local_ac.y = local_12c;
        local_ac.z = local_128.x;
        core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                  ((CVector3f *)local_148,pCVar16);
        local_24 = SQRT(local_128.x * local_128.x + local_130 * local_130 + local_12c * local_12c);
        if (local_24 < _DAT_00663778) {
          pCVar16 = (CVector3f *)0x5bea4d;
          dVar12 = crt_math_c_acos_FUN_00600162((double)(local_24 / _DAT_00663778));
          local_20 = (CQuaternion4f *)(float)dVar12;
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_20,(float)pCVar16);
          CStack_2a4.w = fStack_2d4;
          pfVar4 = (float *)((int)&CStack_2a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          *(float *)((int)&CStack_2a4 + (uint)bVar10 * -8 + 4) = local_2d0[(uint)bVar10 * -2];
          *pfVar4 = local_2d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          pfVar4[(uint)bVar10 * -2 + 1] =
               (local_2d0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
          local_1c = (CDeformableModelInstance *)(in_stack_00000004 + 1);
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                    ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_2a4,
                     (float)local_1f08,(int)DAT_03f6badc,
                     core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                    ((CQuaternion4f *)-(float)local_20,(float)pCVar16);
          CStack_1c4.w = (float)apCStack_2bc[2];
          puVar9 = (uint *)((int)&CStack_1c4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          *(CMotionController_vtable **)((int)&CStack_1c4 + (uint)bVar10 * -8 + 4) =
               apCStack_2bc[(uint)bVar10 * -2 + 3];
          *puVar9 = apCStack_2bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          puVar9[(uint)bVar10 * -2 + 1] =
               (apCStack_2bc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 4)[(uint)bVar10 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                    (local_1c,&CStack_1c4,(float)local_1f08,DAT_03f6bae4,
                     core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        }
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
                  ((CQuaternion4f *)local_154.z,(float)pCVar16);
        CStack_3b4.w = afStack_1dc[2];
        afStack_3a4[(uint)bVar10 * -2 + -3] = afStack_1dc[(uint)bVar10 * -2 + 3];
        afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -2] =
             afStack_1dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        (afStack_3a4 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + -2)[(uint)bVar10 * -2 + 1] =
             (afStack_1dc + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 4)[(uint)bVar10 * -2 + 1];
        local_1c = (CDeformableModelInstance *)(in_stack_00000004 + 1);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_1c,&CStack_3b4,(float)local_1f08,(int)DAT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                  ((CQuaternion4f *)local_148._0_4_,(float)pCVar16);
        pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
        pCVar7 = (CQuaternion4f *)(auStack_25c + 2);
        pfVar4 = afStack_3a4;
        this_ptr_00 = local_1c;
        pCVar13 = (CDeformableModelInstance *)(auStack_25c + 2);
        local_1f0c = DAT_03f6badc;
      }
      else if (iVar5 == 0x17) {
        local_1ef8 = (CDeformableModel_MotionBlendWeightFunc *)
                     (*(float *)(in_stack_00000004[1].actor_name + 8) * (float)0.066666666666666693);
        if (1.0 < (float)local_1ef8) {
          local_1ef8 = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
        }
        fVar11 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x48) /
                                 (float10)_DAT_00663778,(float10)1);
        local_38 = (CQuaternion4f *)(float)fVar11;
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_38,fVar14);
        local_330.w = (float)local_3f0;
        pfVar4 = (float *)((int)&local_330 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *(float *)((int)&local_330 + (uint)bVar10 * -8 + 4) = afStack_3ec[(uint)bVar10 * -2];
        *pfVar4 = afStack_3ec[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        pfVar4[(uint)bVar10 * -2 + 1] =
             (afStack_3ec + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
        this_ptr_00 = (CDeformableModelInstance *)0x5bf125;
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_18,&local_330,(float)local_1ef8,(int)DAT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)-(float)local_38,fVar14);
        local_1f08 = (CDeformableModelInstance *)&local_330;
        pCVar7 = &local_330;
        pfVar4 = afStack_31c + 3;
        pCVar13 = local_18;
        local_1f0c = local_1ef8;
        pcVar15 = DAT_03f6bad8;
      }
      else {
        if (iVar5 != 0x18) {
          if (iVar5 == 0x19) {
            local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)
                         (1.0 - (*(float *)(in_stack_00000004[1].actor_name + 8) +
                                (float)-15) * (float)0.066666666666666693);
            if ((float)local_1f0c < 0.0) {
              local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)0x0;
            }
            if (1.0 < (float)local_1f0c) {
              local_1f0c = (CDeformableModel_MotionBlendWeightFunc *)0x3f800000;
            }
            fVar11 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event +
                                                        0x48) / (float10)_DAT_00663778,(float10)1);
            local_34 = (CQuaternion4f *)(float)fVar11;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_34,fVar14);
            local_1f0.w = (float)local_260;
            puVar9 = (uint *)((int)&local_1f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            *(uint *)((int)&local_1f0 + (uint)bVar10 * -8 + 4) =
                 auStack_25c[(uint)bVar10 * -2];
            *puVar9 = auStack_25c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            puVar9[(uint)bVar10 * -2 + 1] =
                 (auStack_25c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
            this_ptr_00 = (CDeformableModelInstance *)0x5bf466;
            local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_1f0,
                       (float)local_1f0c,(int)DAT_03f6badc,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                      ((CQuaternion4f *)-(float)local_34,fVar14);
            local_1f0.w = (float)local_220;
            puVar9 = (uint *)((int)&local_1f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            *(CMotionList **)((int)&local_1f0 + (uint)bVar10 * -8 + 4) =
                 apCStack_21c[(uint)bVar10 * -2];
            *puVar9 = apCStack_21c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            puVar9[(uint)bVar10 * -2 + 1] =
                 (apCStack_21c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
            pCVar13 = local_18;
            local_1edc = (CDeformableModelInstance *)&local_1f0;
            pcVar15 = DAT_03f6bad8;
          }
          else {
            if (iVar5 != 0x1a) goto LAB_005be7a1;
            local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                      (local_18,&local_16c,(int)DAT_03f6badc);
            fVar14 = 8.445058e-39;
            fVar11 = crt_math_c_atan2_FUN_006013b1
                               ((float10)local_16c.y -
                                (float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x34),
                                (float10)_DAT_00663778);
            core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)(float)fVar11,fVar14);
            pCVar13 = local_1c;
            local_3e4.w = local_350[3];
            pfVar4 = (float *)((int)&local_3e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            *(float *)((int)&local_3e4 + (uint)bVar10 * -8 + 4) = local_350[(uint)bVar10 * -2 + 4];
            *pfVar4 = local_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
            pfVar4[(uint)bVar10 * -2 + 1] =
                 (local_350 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar13,&local_3e4,(float)local_1ef4,(int)DAT_03f6badc,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (local_1c,&local_3e4,(float)local_1ef4,(int)DAT_03f6bad8,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            fVar11 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event +
                                                        0x48) / (float10)_DAT_00663778,(float10)1);
            local_30 = (CQuaternion4f *)(float)fVar11;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_30,fVar14);
            pCVar13 = local_1c;
            local_214.w = (float)local_204;
            puVar9 = (uint *)((int)&local_214 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            *(CMotionList **)((int)&local_214 + (uint)bVar10 * -8 + 4) =
                 local_200[(uint)bVar10 * -2];
            *puVar9 = local_200[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            puVar9[(uint)bVar10 * -2 + 1] =
                 (local_200 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar13,&local_214,(float)local_1ef4,(int)DAT_03f6badc,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                      ((CQuaternion4f *)-(float)local_30,fVar14);
            pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
            local_214.w = local_360.z;
            pfVar4 = (float *)((int)&local_214 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            *(float *)((int)&local_214 + (uint)bVar10 * -8 + 4) = local_350[(uint)bVar10 * -2];
            *pfVar4 = local_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            pfVar4[(uint)bVar10 * -2 + 1] =
                 (local_350 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
            this_ptr_00 = local_1c;
            pCVar13 = (CDeformableModelInstance *)&local_214;
            local_1edc = local_1ef4;
            local_1f0c = DAT_03f6bad8;
          }
          goto LAB_005be799;
        }
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_c4,(int)DAT_03f6badc);
        local_20 = (CQuaternion4f *)
                   ((*(float *)(in_stack_00000004[0x17a].create_event + 0x34) +
                    *(float *)(in_stack_00000004[0x17a].create_event + 0x4c)) -
                   *(float *)(in_stack_00000004[0x17a].create_event + 0x40));
        if (in_stack_00000004[0x179].scale.x != 0) {
          _DAT_03f6bb64 = (CDeformableModelInstance *)core_stranger_cpp_FUN_005bb010();
          local_18 = _DAT_03f6bb64;
        }
        local_20 = (CQuaternion4f *)((float)local_20 - (float)_DAT_03f6bb64);
        fVar14 = 8.443984e-39;
        fVar11 = crt_math_c_atan2_FUN_006013b1
                           ((float10)local_c4.y - (float10)(float)local_20,(float10)_DAT_00663778);
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)(float)fVar11,fVar14);
        local_294.w = local_390.z;
        puVar9 = (uint *)((int)&local_294 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *(CMotionList **)((int)&local_294 + (uint)bVar10 * -8 + 4) = local_380[(uint)bVar10 * -2];
        *puVar9 = local_380[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        puVar9[(uint)bVar10 * -2 + 1] =
             (local_380 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        local_1c = (CDeformableModelInstance *)(in_stack_00000004 + 1);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_294,(float)local_1ee0,
                   (int)DAT_03f6badc,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_1c,&local_294,(float)local_1ee0,(int)DAT_03f6bad8,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        fVar11 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x48) /
                                 (float10)_DAT_00663778,(float10)1);
        local_34 = (CQuaternion4f *)(float)fVar11;
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_34,fVar14);
        local_1a4.w = (float)local_2f4;
        pfVar4 = (float *)((int)&local_1a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        *(float *)((int)&local_1a4 + (uint)bVar10 * -8 + 4) = local_2f0[(uint)bVar10 * -2];
        *pfVar4 = local_2f0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        pfVar4[(uint)bVar10 * -2 + 1] =
             (local_2f0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (local_1c,&local_1a4,(float)local_1ee0,(int)DAT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)-(float)local_34,fVar14);
        pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
        pCVar13 = (CDeformableModelInstance *)&local_1a4;
        pCVar7 = &local_1a4;
        pfVar4 = local_3d0 + 3;
        this_ptr_00 = local_1c;
        local_1f08 = local_1ee0;
        local_1f0c = DAT_03f6bad8;
      }
      goto LAB_005be795;
    }
    pCVar16 = (CVector3f *)&in_stack_00000004[0x179].previous_transform_state.position.y;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)(auStack_434 + 4),pCVar16);
    if ((DAT_03f6baac & 1) == 0) {
      DAT_03f6baac = DAT_03f6baac | 1;
    }
    if (in_stack_00000004[0x179].field21_0x11c != 0) {
      pCVar16 = local_408;
      pfVar4 = (float *)(**(code **)(*(int *)(in_stack_00000004[0x179].field21_0x11c + 0x154) + 0x14
                                    ))();
      fStack_d4 = *pfVar4 + pfVar4[3];
      fStack_d0 = pfVar4[1] + pfVar4[4];
      local_184.z = fStack_d4 * 0.5f;
      fStack_cc = pfVar4[2] + pfVar4[5];
      fStack_178 = fStack_d0 * 0.5f;
      fStack_174 = fStack_cc * 0.5f;
      if (&stack0x00000000 != (byte *)0x3f6bc18) {
        _DAT_03f6ba9c = local_184.z;
        _DAT_03f6baa0 = fStack_178;
        _DAT_03f6baa4 = fStack_174;
      }
    }
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)auStack_434,(CVector3f *)(local_70 + 8),
                        (CVector3f *)&DAT_03f6ba9c);
    local_148._8_4_ = (float)in_stack_00000004[0x179].field22_0x120 + pCVar3->x;
    fStack_13c = (float)in_stack_00000004[0x179].field23_0x124 + pCVar3->y;
    fStack_138 = in_stack_00000004[0x179].previous_transform_state.position.x + pCVar3->z;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (in_stack_00000004,&local_128,(CVector3f *)(local_148 + 8));
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_e0,(int)DAT_03f6badc);
    local_f8.x = local_128.x - local_e0.x;
    local_f8.y = local_128.y - local_e0.y;
    local_f8.z = local_128.z - local_e0.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(aCStack_11c,&local_f8);
    fVar14 = *(float *)(in_stack_00000004[1].actor_name + 8);
    if ((float)21 <= fVar14) {
      local_1edc = (CDeformableModelInstance *)
                   (1.0 - (fVar14 + (float)-21) * (float)0.071428571428571397);
      if ((float)local_1edc < 0.0) {
        local_1edc = (CDeformableModelInstance *)0x0;
      }
    }
    else {
      local_1edc = (CDeformableModelInstance *)(fVar14 * (float)0.047619047619047603);
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              ((CQuaternion4f *)aCStack_11c[0].x,(float)pCVar16);
    CStack_284.w = fStack_1b4;
    puVar9 = (uint *)((int)&CStack_284 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(CMotionList **)((int)&CStack_284 + (uint)bVar10 * -8 + 4) = apCStack_1b0[(uint)bVar10 * -2];
    *puVar9 = apCStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    puVar9[(uint)bVar10 * -2 + 1] =
         (apCStack_1b0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    local_1c = (CDeformableModelInstance *)(in_stack_00000004 + 1);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_284,(float)local_1edc,
               DAT_03f6bb10,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              ((CQuaternion4f *)aCStack_11c[0].y,(float)pCVar16);
    pCStack_274 = local_380[3];
    apCStack_270[(uint)bVar10 * -2] = local_380[(uint)bVar10 * -2 + 4];
    apCStack_270[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         local_380[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5];
    (apCStack_270 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (local_380 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1];
    pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    this_ptr_00 = local_1c;
    pCVar13 = (CDeformableModelInstance *)&pCStack_274;
    local_1f0c = DAT_03f6badc;
  }
LAB_005be799:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (this_ptr_00,(CQuaternion4f *)pCVar13,(float)local_1edc,(int)local_1f0c,pcVar15);
LAB_005be7a1:
  if (g_CGamePtr->block_auto_save != 0) {
    local_88 = 0.0;
    local_84 = 0.0;
    local_94._8_4_ = 0.0;
    if ((in_stack_00000004[0x179].previous_transform_state.orientation.z != 0.0) &&
       (in_stack_00000004[0x17a].orient_matrix.m[0].x != 0.0)) {
      local_94._8_4_ = *(uint *)in_stack_00000004[0x17a].actor_name;
    }
    pcVar15 = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar14 = 1.0;
    iVar5 = DAT_03f6bacc;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(local_94 + 8),(CVector3f *)0x3f800000);
    CStack_2e4.w = fStack_3d4;
    pfVar4 = (float *)((int)&CStack_2e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    *(float *)((int)&CStack_2e4 + (uint)bVar10 * -8 + 4) = local_3d0[(uint)bVar10 * -2];
    *pfVar4 = local_3d0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar4[(uint)bVar10 * -2 + 1] =
         (local_3d0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_2e4,fVar14,iVar5,pcVar15)
    ;
  }
  if (in_stack_00000004[0x17a].orient_matrix.m[2].x <= 0.0) {
    return;
  }
  pCVar13 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar13);
  iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&this_ptr->motion_list);
  local_2c = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       ((CMotionController *)pCVar13,iVar5,1.0);
  local_1c = (CDeformableModelInstance *)local_2c;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (pCVar13,iVar5,local_2c,in_stack_00000004[0x17a].orient_matrix.m[2].x,DAT_03f6bb0c,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  return;
}
