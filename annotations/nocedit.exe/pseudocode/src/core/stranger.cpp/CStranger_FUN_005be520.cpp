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
  CDeformableModelInstance *pCVar1;
  SMotion *pSVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  CSkeleton *this_ptr;
  int iVar6;
  float *pfVar7;
  uint *puVar8;
  CQuaternion4f *pCVar9;
  uint *puVar11;
  byte bVar12;
  float10 fVar13;
  double dVar14;
  CDemonActor *in_stack_00000004;
  CQuaternion4f *rotation_quat;
  float fVar15;
  ulonglong uVar16;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffe0bc;
  float local_1f08;
  CDeformableModelInstance *local_1f04;
  float local_1f00;
  float local_1ef4;
  float local_1ef0;
  float local_1eec;
  float local_1edc;
  float fStack_1ed8;
  float local_1ed4;
  char local_1ecc;
  SPoseData SStack_1ec8;
  float afStack_13d4 [1002];
  CMatrix3x3f CStack_42c;
  float fStack_3ec;
  float afStack_3e8 [3];
  CQuaternion4f CStack_3dc;
  float local_3c0;
  float afStack_3bc [4];
  CQuaternion4f CStack_3ac;
  float afStack_39c [4];
  CQuaternion4f CStack_38c;
  float fStack_37c;
  float afStack_378 [7];
  CQuaternion4f CStack_35c;
  float fStack_34c;
  float afStack_348 [7];
  CQuaternion4f CStack_32c;
  float fStack_31c;
  float afStack_318 [7];
  float afStack_2fc [4];
  float fStack_2ec;
  uint auStack_2e8 [6];
  CQuaternion4f local_2d0;
  float fStack_2bc;
  float afStack_2b8 [7];
  CQuaternion4f CStack_29c;
  CQuaternion4f CStack_28c;
  CQuaternion4f CStack_27c;
  CQuaternion4f CStack_26c;
  float fStack_25c;
  uint auStack_258 [3];
  CQuaternion4f CStack_24c;
  float fStack_23c;
  float afStack_238 [3];
  CQuaternion4f CStack_22c;
  float fStack_21c;
  float afStack_218 [3];
  CQuaternion4f CStack_20c;
  float fStack_1fc;
  float afStack_1f8 [3];
  CQuaternion4f CStack_1ec;
  CQuaternion4f CStack_1dc;
  float fStack_1cc;
  float afStack_1c8 [3];
  CQuaternion4f CStack_1bc;
  float fStack_1ac;
  float afStack_1a8 [3];
  CQuaternion4f CStack_19c;
  CVector3f local_18c;
  CVector3f local_180;
  float fStack_174;
  float fStack_170;
  float local_16c;
  CVector3f local_168;
  float local_15c;
  float local_158;
  float local_154;
  CVector3f CStack_150;
  CVector3f local_144;
  CVector3f CStack_138;
  float local_12c;
  float local_128;
  float fStack_124;
  CVector3f CStack_120;
  CVector3f aCStack_114 [2];
  float local_fc;
  float local_f8;
  float fStack_f4;
  CVector3f CStack_f0;
  float local_e4;
  float local_e0;
  float fStack_dc;
  CVector3f CStack_d8;
  float fStack_cc;
  float fStack_c8;
  float local_c4;
  CVector3f local_c0;
  CVector3f local_b4;
  CVector3f local_a8;
  CVector3f CStack_9c;
  CVector3f local_90;
  byte local_84 [16];
  CQuaternion4f *pCStack_74;
  CVector3f local_6c;
  CVector3f aCStack_60 [2];
  CVector3f local_48;
  CQuaternion4f *local_34;
  CQuaternion4f *local_30;
  CQuaternion4f *local_2c;
  CQuaternion4f *local_28;
  float local_24;
  float local_20;
  CQuaternion4f *local_1c;
  float local_18;
  CDeformableModelInstance *pCStack_14;
  float *pfVar10;
  
  bVar12 = 0;
  pCStack_14 = (CDeformableModelInstance *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         ((CMotionController *)(in_stack_00000004 + 1),0);
  local_1f04 = pCStack_14;
  if (in_stack_00000004[0x17a].health < 0x3e19999a) {
    local_1f04 = (CDeformableModelInstance *)
                 (((float)in_stack_00000004[0x17a].health / 0.15f) * (float)pCStack_14);
  }
  uVar16 = 0x3fc3333340000000;
  if (0.85 < (float)in_stack_00000004[0x17a].health) {
    local_1f04 = (CDeformableModelInstance *)
                 (((1.0 - (float)in_stack_00000004[0x17a].health) / 0.15) * (float)local_1f04);
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            ((CDeformableModelInstance *)(in_stack_00000004 + 1));
  if ((0.0 < (float)local_1f04) && (-1 < *(int *)(in_stack_00000004[0x17a].create_event + 0x1c))) {
    core_stranger_cpp_CStranger_FUN_005bf720();
    SStack_1ec8.root_position.x = 0.0;
    SStack_1ec8.root_position.z = 0.0;
    core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&SStack_1ec8,(float)local_1f04,-1
               ,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  }
  core_stranger_cpp_CStranger_FUN_005bfb60();
  pCVar1 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
  pCVar5 = (CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     ((CMotionController *)pCVar1);
  iVar6 = pSVar2->state_index;
  if (iVar6 == 0x15) {
    local_15c = pCVar5->x;
    local_158 = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
    local_154 = *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar1,&local_180,DAT_03f6badc);
    local_18c.x = local_15c - local_180.x;
    local_18c.y = local_158 - local_180.y;
    local_18c.z = local_154 - local_180.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
              ((CVector3f *)(local_84 + 0xc),&local_18c);
    local_1edc = *(float *)(in_stack_00000004[1].actor_name + 8);
    if ((float)13 <= local_1edc) {
      local_1edc = 1.0 - (local_1edc + (float)-13) * (float)0.0769230769230769;
      if (local_1edc < 0.0) {
        local_1edc = 0.0;
      }
    }
    else {
      local_1edc = local_1edc * (float)0.0769230769230769;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)local_84._12_4_,(float)uVar16)
    ;
    CStack_35c.w = fStack_31c;
    pfVar4 = (float *)((int)&CStack_35c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(float *)((int)&CStack_35c + (uint)bVar12 * -8 + 4) = afStack_318[(uint)bVar12 * -2];
    *pfVar4 = afStack_318[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    pfVar4[(uint)bVar12 * -2 + 1] =
         (afStack_318 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
    pCStack_14 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              (pCStack_14,&CStack_35c,local_1edc,DAT_03f6bb10,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(pCStack_74,(float)uVar16);
    rotation_quat = &CStack_38c;
    pCVar9 = &CStack_38c;
    pfVar4 = afStack_2fc;
    local_1f08 = local_1edc;
    iVar6 = DAT_03f6badc;
LAB_005be795:
    pfVar10 = (float *)((int)pCVar9 + ((uint)bVar12 * -2 + 1) * 4);
    pfVar7 = pfVar4 + (uint)bVar12 * -2 + 1;
    pCVar9->w = *pfVar4;
    pfVar4 = pfVar10 + (uint)bVar12 * -2 + 1;
    *pfVar10 = *pfVar7;
    *pfVar4 = pfVar7[(uint)bVar12 * -2 + 1];
    pfVar4[(uint)bVar12 * -2 + 1] = (pfVar7 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
  }
  else if (iVar6 == 0x13) {
    local_e4 = pCVar5->x;
    local_e0 = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
    fStack_dc = *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (pCVar1,&local_b4,DAT_03f6badc);
    local_6c.x = local_e4 - local_b4.x;
    local_6c.y = local_e0 - local_b4.y;
    local_6c.z = fStack_dc - local_b4.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_48,&local_6c);
    local_1ef0 = *(float *)(in_stack_00000004[1].actor_name + 8);
    if ((float)24 <= local_1ef0) {
      local_1ef0 = 1.0 - (local_1ef0 + (float)-24) * (float)0.10000000000000001;
      if (local_1ef0 < 0.0) {
        local_1ef0 = 0.0;
      }
    }
    else {
      local_1ef0 = local_1ef0 * (float)0.041666666666666699;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)-local_48.x,(float)uVar16);
    CStack_22c.w = fStack_2bc;
    pfVar4 = (float *)((int)&CStack_22c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(float *)((int)&CStack_22c + (uint)bVar12 * -8 + 4) = afStack_2b8[(uint)bVar12 * -2];
    *pfVar4 = afStack_2b8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    pfVar4[(uint)bVar12 * -2 + 1] =
         (afStack_2b8 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
    pCStack_14 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_22c,local_1ef0,
               DAT_03f6badc,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)local_48.y,(float)uVar16);
    CStack_1dc.w = fStack_23c;
    pfVar4 = (float *)((int)&CStack_1dc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(float *)((int)&CStack_1dc + (uint)bVar12 * -8 + 4) = afStack_238[(uint)bVar12 * -2];
    *pfVar4 = afStack_238[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    pfVar4[(uint)bVar12 * -2 + 1] =
         (afStack_238 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
    rotation_quat = &CStack_1dc;
    local_1f08 = local_1ef0;
    iVar6 = DAT_03f6badc;
  }
  else {
    if (iVar6 != 0x16) {
      if (iVar6 == 0x1f) {
        if (in_stack_00000004[0x179].scale.z == 0) {
          pCVar3 = (CVector3f *)core_lever_cpp_FUN_00504dd0();
          pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (in_stack_00000004,&CStack_150,pCVar3);
          if (pCVar5 != pCVar3) {
            pCVar5->x = pCVar3->x;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar3->y;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar3->z;
          }
        }
        else {
          pCVar3 = (CVector3f *)core_lever_cpp_FUN_00504dd0();
          pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (in_stack_00000004,&CStack_9c,pCVar3);
          if (pCVar5 != pCVar3) {
            pCVar5->x = pCVar3->x;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar3->y;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar3->z;
          }
          DAT_03f6baa8 = in_stack_00000004[0x179].scale.z;
        }
        local_fc = *(float *)(in_stack_00000004[0x17a].create_event + 0x30);
        local_f8 = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
        fStack_f4 = *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_90,DAT_03f6badc);
        local_12c = local_fc - local_90.x;
        local_128 = local_f8 - local_90.y;
        fStack_124 = fStack_f4 - local_90.z;
        local_a8.x = local_12c;
        local_a8.y = local_128;
        local_a8.z = fStack_124;
        core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_144,&local_a8);
        local_1f00 = *(float *)(in_stack_00000004[1].actor_name + 8);
        if ((float)10 <= local_1f00) {
          if (15 <= (double)local_1f00) {
            local_1f00 = 1.0 - (local_1f00 + (float)-15) * (float)0.066666666666666693;
            if (local_1f00 < 0.0) {
              local_1f00 = 0.0;
            }
          }
          else {
            local_1f00 = 1.0;
          }
        }
        else {
          local_1f00 = local_1f00 * (float)0.10000000000000001;
        }
        local_20 = SQRT(fStack_124 * fStack_124 + local_12c * local_12c + local_128 * local_128);
        if (local_20 < _DAT_00663778) {
          fVar15 = 8.441081e-39;
          dVar14 = crt_math_c_acos_FUN_00600162((double)(local_20 / _DAT_00663778));
          local_1c = (CQuaternion4f *)(float)dVar14;
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_1c,fVar15);
          CStack_29c.w = local_2d0.x;
          puVar11 = (uint *)((int)&CStack_29c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          puVar8 = (uint *)((int)&local_2d0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 0xc);
          *(uint *)((int)&CStack_29c + (uint)bVar12 * -8 + 4) =
               *(uint *)((int)&local_2d0 + (uint)bVar12 * -8 + 8);
          *puVar11 = *puVar8;
          puVar11[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
          pCStack_14 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                    ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_29c,local_1f00,
                     DAT_03f6badc,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)-local_18,(float)uVar16)
          ;
          CStack_1bc.w = afStack_2b8[3];
          pfVar4 = (float *)((int)&CStack_1bc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          *(float *)((int)&CStack_1bc + (uint)bVar12 * -8 + 4) = afStack_2b8[(uint)bVar12 * -2 + 4];
          *pfVar4 = afStack_2b8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 5];
          pfVar4[(uint)bVar12 * -2 + 1] =
               (afStack_2b8 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 5)[(uint)bVar12 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                    (pCStack_14,&CStack_1bc,local_1f00,DAT_03f6bae4,
                     core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        }
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)local_144.x,(float)uVar16)
        ;
        CStack_3ac.w = fStack_1cc;
        afStack_39c[(uint)bVar12 * -2 + -3] = afStack_1c8[(uint)bVar12 * -2];
        afStack_39c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + -2] =
             afStack_1c8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        (afStack_39c + (uint)bVar12 * -2 + (uint)bVar12 * -2 + -2)[(uint)bVar12 * -2 + 1] =
             (afStack_1c8 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        pCStack_14 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (pCStack_14,&CStack_3ac,local_1f00,DAT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)local_144.y,(float)uVar16)
        ;
        rotation_quat = &CStack_24c;
        pCVar9 = &CStack_24c;
        pfVar4 = afStack_39c;
        local_1f08 = local_1f00;
        iVar6 = DAT_03f6badc;
      }
      else if (iVar6 == 0x17) {
        local_1ef4 = *(float *)(in_stack_00000004[1].actor_name + 8) * (float)0.066666666666666693;
        if (1.0 < local_1ef4) {
          local_1ef4 = 1.0;
        }
        fVar13 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x48) /
                                 (float10)_DAT_00663778,(float10)1);
        local_34 = (CQuaternion4f *)(float)fVar13;
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_34,(float)uVar16);
        CStack_32c.w = fStack_3ec;
        pfVar4 = (float *)((int)&CStack_32c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *(float *)((int)&CStack_32c + (uint)bVar12 * -8 + 4) = afStack_3e8[(uint)bVar12 * -2];
        *pfVar4 = afStack_3e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        pfVar4[(uint)bVar12 * -2 + 1] =
             (afStack_3e8 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        pCStack_14 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (pCStack_14,&CStack_32c,local_1ef4,DAT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                  ((CQuaternion4f *)-(float)local_34,(float)uVar16);
        rotation_quat = &CStack_32c;
        pCVar9 = &CStack_32c;
        pfVar4 = afStack_318 + 3;
        local_1f08 = local_1ef4;
        iVar6 = DAT_03f6bad8;
      }
      else {
        if (iVar6 != 0x18) {
          if (iVar6 == 0x19) {
            local_1f08 = 1.0 - (*(float *)(in_stack_00000004[1].actor_name + 8) +
                               (float)-15) * (float)0.066666666666666693;
            if (local_1f08 < 0.0) {
              local_1f08 = 0.0;
            }
            if (1.0 < local_1f08) {
              local_1f08 = 1.0;
            }
            fVar13 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event +
                                                        0x48) / (float10)_DAT_00663778,(float10)1);
            local_30 = (CQuaternion4f *)(float)fVar13;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_30,(float)uVar16);
            CStack_1ec.w = fStack_25c;
            puVar8 = (uint *)((int)&CStack_1ec + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            *(uint *)((int)&CStack_1ec + (uint)bVar12 * -8 + 4) =
                 auStack_258[(uint)bVar12 * -2];
            *puVar8 = auStack_258[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            puVar8[(uint)bVar12 * -2 + 1] =
                 (auStack_258 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
            pCStack_14 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_1ec,local_1f08,
                       DAT_03f6badc,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                      ((CQuaternion4f *)-(float)local_30,(float)uVar16);
            CStack_1ec.w = fStack_21c;
            pfVar4 = (float *)((int)&CStack_1ec + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            *(float *)((int)&CStack_1ec + (uint)bVar12 * -8 + 4) = afStack_218[(uint)bVar12 * -2];
            *pfVar4 = afStack_218[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            pfVar4[(uint)bVar12 * -2 + 1] =
                 (afStack_218 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
            rotation_quat = &CStack_1ec;
            iVar6 = DAT_03f6bad8;
          }
          else {
            if (iVar6 != 0x1a) goto LAB_005be7a1;
            local_1eec = *(float *)(in_stack_00000004[1].actor_name + 8);
            if (local_1eec < (float)15) {
              local_1eec = local_1eec * (float)0.066666666666666693;
            }
            else {
              local_1eec = 1.0 - (local_1eec + (float)-15) * (float)0.066666666666666693;
            }
            if (1.0 < local_1eec) {
              local_1eec = 1.0;
            }
            if (local_1eec < 0.0) {
              local_1eec = 0.0;
            }
            pCStack_14 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                      (pCStack_14,&local_168,DAT_03f6badc);
            fVar15 = 8.445058e-39;
            fVar13 = crt_math_c_atan2_FUN_006013b1
                               ((float10)local_168.y -
                                (float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x34),
                                (float10)_DAT_00663778);
            core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)(float)fVar13,fVar15);
            pCVar1 = pCStack_14;
            CStack_3dc.w = afStack_348[3];
            pfVar4 = (float *)((int)&CStack_3dc + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            *(float *)((int)&CStack_3dc + (uint)bVar12 * -8 + 4) =
                 afStack_348[(uint)bVar12 * -2 + 4];
            *pfVar4 = afStack_348[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 5];
            pfVar4[(uint)bVar12 * -2 + 1] =
                 (afStack_348 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 5)[(uint)bVar12 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar1,&CStack_3dc,local_1eec,DAT_03f6badc,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCStack_14,&CStack_3dc,local_1eec,DAT_03f6bad8,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            fVar13 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event +
                                                        0x48) / (float10)_DAT_00663778,(float10)1);
            local_28 = (CQuaternion4f *)(float)fVar13;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_28,(float)uVar16);
            pCVar1 = pCStack_14;
            CStack_20c.w = fStack_1fc;
            pfVar4 = (float *)((int)&CStack_20c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            *(float *)((int)&CStack_20c + (uint)bVar12 * -8 + 4) = afStack_1f8[(uint)bVar12 * -2];
            *pfVar4 = afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            pfVar4[(uint)bVar12 * -2 + 1] =
                 (afStack_1f8 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                      (pCVar1,&CStack_20c,local_1eec,DAT_03f6badc,
                       core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                      ((CQuaternion4f *)-(float)local_28,(float)uVar16);
            rotation_quat = &CStack_20c;
            CStack_20c.w = fStack_34c;
            pfVar4 = (float *)((int)&CStack_20c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
            *(float *)((int)&CStack_20c + (uint)bVar12 * -8 + 4) = afStack_348[(uint)bVar12 * -2];
            *pfVar4 = afStack_348[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            pfVar4[(uint)bVar12 * -2 + 1] =
                 (afStack_348 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
            local_1f08 = local_1eec;
            iVar6 = DAT_03f6bad8;
          }
          goto LAB_005be799;
        }
        fStack_1ed8 = *(float *)(in_stack_00000004[1].actor_name + 8);
        in_stack_ffffe0bc = SUB84 /* extract 2-byte value */((double)fStack_1ed8,0);
        if ((float)15 <= fStack_1ed8) {
          fStack_1ed8 = 1.0 - (fStack_1ed8 + (float)-15) * (float)0.066666666666666693;
        }
        else {
          fStack_1ed8 = fStack_1ed8 * (float)0.066666666666666693;
        }
        if (1.0 < fStack_1ed8) {
          fStack_1ed8 = 1.0;
        }
        if (fStack_1ed8 < 0.0) {
          fStack_1ed8 = 0.0;
        }
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_c0,DAT_03f6badc);
        local_1c = (CQuaternion4f *)
                   ((*(float *)(in_stack_00000004[0x17a].create_event + 0x34) +
                    *(float *)(in_stack_00000004[0x17a].create_event + 0x4c)) -
                   *(float *)(in_stack_00000004[0x17a].create_event + 0x40));
        if (in_stack_00000004[0x179].scale.x != 0) {
          _DAT_03f6bb64 = (CDeformableModelInstance *)core_stranger_cpp_FUN_005bb010();
          pCStack_14 = _DAT_03f6bb64;
        }
        local_1c = (CQuaternion4f *)((float)local_1c - (float)_DAT_03f6bb64);
        fVar15 = 8.443984e-39;
        fVar13 = crt_math_c_atan2_FUN_006013b1
                           ((float10)local_c0.y - (float10)(float)local_1c,(float10)_DAT_00663778);
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)(float)fVar13,fVar15);
        CStack_28c.w = fStack_37c;
        pfVar4 = (float *)((int)&CStack_28c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *(float *)((int)&CStack_28c + (uint)bVar12 * -8 + 4) = afStack_378[(uint)bVar12 * -2];
        *pfVar4 = afStack_378[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        pfVar4[(uint)bVar12 * -2 + 1] =
             (afStack_378 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        pCStack_14 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_28c,fStack_1ed8,
                   DAT_03f6badc,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (pCStack_14,&CStack_28c,fStack_1ed8,DAT_03f6bad8,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        fVar13 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x48) /
                                 (float10)_DAT_00663778,(float10)1);
        local_2c = (CQuaternion4f *)(float)fVar13;
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_2c,(float)uVar16);
        CStack_19c.w = fStack_2ec;
        puVar8 = (uint *)((int)&CStack_19c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        *(uint *)((int)&CStack_19c + (uint)bVar12 * -8 + 4) = auStack_2e8[(uint)bVar12 * -2];
        *puVar8 = auStack_2e8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        puVar8[(uint)bVar12 * -2 + 1] =
             (auStack_2e8 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
                  (pCStack_14,&CStack_19c,fStack_1ed8,DAT_03f6badc,
                   core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                  ((CQuaternion4f *)-(float)local_2c,(float)uVar16);
        rotation_quat = &CStack_19c;
        pCVar9 = &CStack_19c;
        pfVar4 = afStack_3bc;
        local_1f08 = fStack_1ed8;
        iVar6 = DAT_03f6bad8;
      }
      goto LAB_005be795;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&CStack_42c,
               (CVector3f *)&in_stack_00000004[0x179].previous_transform_state.position.y);
    if ((DAT_03f6baac & 1) == 0) {
      DAT_03f6baac = DAT_03f6baac | 1;
    }
    if (in_stack_00000004[0x179].field21_0x11c != 0) {
      pfVar4 = (float *)(**(code **)(*(int *)(in_stack_00000004[0x179].field21_0x11c + 0x154) + 0x14
                                    ))();
      fStack_cc = *pfVar4 + pfVar4[3];
      fStack_c8 = pfVar4[1] + pfVar4[4];
      fStack_174 = fStack_cc * 0.5f;
      local_c4 = pfVar4[2] + pfVar4[5];
      fStack_170 = fStack_c8 * 0.5f;
      local_16c = local_c4 * 0.5f;
      if (&stack0x00000000 != (byte *)0x3f6bc10) {
        _DAT_03f6ba9c = fStack_174;
        _DAT_03f6baa0 = fStack_170;
        _DAT_03f6baa4 = local_16c;
      }
    }
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&CStack_42c,aCStack_60,(CVector3f *)&DAT_03f6ba9c);
    CStack_138.x = (float)in_stack_00000004[0x179].field22_0x120 + pCVar5->x;
    CStack_138.y = (float)in_stack_00000004[0x179].field23_0x124 + pCVar5->y;
    CStack_138.z = in_stack_00000004[0x179].previous_transform_state.position.x + pCVar5->z;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (in_stack_00000004,&CStack_120,&CStack_138);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_d8,DAT_03f6badc);
    CStack_f0.x = CStack_120.x - CStack_d8.x;
    CStack_f0.y = CStack_120.y - CStack_d8.y;
    CStack_f0.z = CStack_120.z - CStack_d8.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(aCStack_114,&CStack_f0);
    local_1ed4 = *(float *)(in_stack_00000004[1].actor_name + 8);
    if ((float)21 <= local_1ed4) {
      local_1ed4 = 1.0 - (local_1ed4 + (float)-21) * (float)0.071428571428571397;
      if (local_1ed4 < 0.0) {
        local_1ed4 = 0.0;
      }
    }
    else {
      local_1ed4 = local_1ed4 * (float)0.047619047619047603;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              ((CQuaternion4f *)aCStack_114[0].x,(float)uVar16);
    CStack_27c.w = fStack_1ac;
    pfVar4 = (float *)((int)&CStack_27c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(float *)((int)&CStack_27c + (uint)bVar12 * -8 + 4) = afStack_1a8[(uint)bVar12 * -2];
    *pfVar4 = afStack_1a8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    pfVar4[(uint)bVar12 * -2 + 1] =
         (afStack_1a8 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
    pCStack_14 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_27c,local_1ed4,
               DAT_03f6bb10,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              ((CQuaternion4f *)aCStack_114[0].y,(float)uVar16);
    CStack_26c.w = afStack_378[3];
    pfVar4 = (float *)((int)&CStack_26c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(float *)((int)&CStack_26c + (uint)bVar12 * -8 + 4) = afStack_378[(uint)bVar12 * -2 + 4];
    *pfVar4 = afStack_378[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 5];
    pfVar4[(uint)bVar12 * -2 + 1] =
         (afStack_378 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 5)[(uint)bVar12 * -2 + 1];
    rotation_quat = &CStack_26c;
    local_1f08 = local_1ed4;
    iVar6 = DAT_03f6badc;
  }
LAB_005be799:
  core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20
            (pCStack_14,rotation_quat,local_1f08,iVar6,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
LAB_005be7a1:
  if (g_CGamePtr->block_auto_save != 0) {
    local_84._4_4_ = 0.0;
    local_84._8_4_ = 0.0;
    local_84._0_4_ = 0.0;
    if ((in_stack_00000004[0x179].previous_transform_state.orientation.z != 0.0) &&
       (in_stack_00000004[0x17a].orient_matrix.m[0].x != 0.0)) {
      local_84._0_4_ = *(uint *)in_stack_00000004[0x17a].actor_name;
    }
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CQuaternion4f *)local_84,(CVector3f *)0x3f800000)
    ;
    local_2d0.w = local_3c0;
    pfVar4 = (float *)((int)&local_2d0 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(float *)((int)&local_2d0 + (uint)bVar12 * -8 + 4) = afStack_3bc[(uint)bVar12 * -2];
    *pfVar4 = afStack_3bc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    pfVar4[(uint)bVar12 * -2 + 1] =
         (afStack_3bc + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_2d0,(float)uVar16,
               (int)((ulonglong)uVar16 >> 0x20),in_stack_ffffe0bc);
  }
  if (in_stack_00000004[0x17a].orient_matrix.m[2].x <= 0.0) {
    return;
  }
  pCVar1 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar1);
  iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&this_ptr->motion_list);
  local_24 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                       ((CMotionController *)pCVar1,iVar6,1.0);
  pCStack_14 = (CDeformableModelInstance *)local_24;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (pCVar1,iVar6,local_24,in_stack_00000004[0x17a].orient_matrix.m[2].x,DAT_03f6bb0c,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  return;
}
