// Name: core_stranger.cpp_CStranger_FUN_005be520
// Address: 005be520
// Address Range: [[005be520, 005bf711]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005be520()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb4b0 (005bb4b0) at 005bb757 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc34f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_draw_holsters2aimPistols_006537f0
//   float FLOAT_0065380c = 0.1500000
//   double DOUBLE_00653814 = 15
//   double DOUBLE_0065381c = -15
//   double DOUBLE_00653824 = 0.0666666666666667
//   double DOUBLE_0065382c = 10
//   double DOUBLE_00653834 = 0.100000000000000
//   float FLOAT_0065383c = 0.5
//   double DOUBLE_00653844 = 21
//   double DOUBLE_0065384c = -21
//   double DOUBLE_00653854 = 0.0714285714285714
//   double DOUBLE_0065385c = 0.0476190476190476
//   double DOUBLE_00653864 = 24
//   double DOUBLE_0065386c = -24
//   double DOUBLE_00653874 = 0.0416666666666667
//   double DOUBLE_0065387c = 13
//   double DOUBLE_00653884 = -13
//   double DOUBLE_0065388c = 0.0769230769230769
//   undefined4 DAT_00663778
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.block_auto_save
//   undefined4 DAT_03f6ba9c
//   undefined4 DAT_03f6baa0
//   undefined4 DAT_03f6baa4
//   undefined4 DAT_03f6baa8
//   undefined1 DAT_03f6baac
//   undefined4 DAT_03f6bacc
//   undefined4 DAT_03f6bad8
//   undefined4 DAT_03f6badc
//   undefined4 DAT_03f6bae4
//   undefined4 DAT_03f6bb0c
//   undefined4 DAT_03f6bb10
//   undefined4 DAT_03f6bb64
// Function calls:
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_lever.cpp_FUN_00504dd0
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_FUN_0052e3a0
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_stranger.cpp_CStranger_FUN_005bf720
//   core_stranger.cpp_CStranger_FUN_005bfb60
//   core_stranger.cpp_FUN_005bb010
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   crt_math.c_acos_FUN_00600162
//   crt_math.c_atan2_FUN_006013b1

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005be520(undefined4 param_1) */

void core_stranger_cpp_CStranger_FUN_005be520(void)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  CSkeleton *this_ptr_00;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  CDemonActor *in_stack_00000004;
  float fVar10;
  code *blend_callback;
  CVector3f *pCVar11;
  CDeformableModelInstance *local_1f08;
  char local_1ecc;
  float local_1ec4;
  float afStack_1bcc [1510];
  undefined1 auStack_434 [44];
  CVector3f local_408 [2];
  undefined4 local_3f0;
  float afStack_3ec [6];
  float fStack_3d4;
  float local_3c4 [4];
  undefined4 uStack_3b4;
  float local_3b0 [8];
  float local_390 [3];
  undefined4 local_384;
  float local_380 [8];
  undefined4 local_360;
  float afStack_35c [6];
  undefined4 local_344;
  float local_330;
  float afStack_32c [7];
  float local_310 [4];
  float local_300 [3];
  undefined4 local_2f4;
  float local_2f0 [3];
  CQuaternion4f CStack_2e4;
  undefined4 uStack_2d4;
  float local_2d0 [4];
  undefined4 local_2c0;
  float afStack_2bc [6];
  undefined4 uStack_2a4;
  undefined4 local_294;
  undefined4 uStack_284;
  undefined4 uStack_274;
  undefined4 local_260;
  float afStack_25c [7];
  undefined4 local_240;
  float afStack_23c [7];
  undefined4 local_220;
  undefined4 local_214;
  undefined4 local_204;
  undefined4 local_1f0;
  float afStack_1ec [6];
  undefined4 uStack_1d4;
  undefined4 uStack_1c4;
  undefined4 uStack_1b4;
  float local_1a4 [5];
  CVector3f local_190;
  CVector3f local_184;
  float fStack_178;
  float fStack_174;
  CVector3f local_16c;
  float local_160;
  float local_15c;
  float local_158;
  CVector3f local_154;
  undefined1 local_148 [12];
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
  undefined1 local_94 [12];
  undefined4 local_88;
  undefined4 local_84;
  CVector3f local_7c;
  undefined1 local_70 [36];
  CVector3f local_4c;
  CQuaternion4f *local_38;
  CQuaternion4f *local_34;
  CQuaternion4f *local_30;
  float local_2c;
  float local_24;
  CQuaternion4f *local_20;
  CDemonActor *local_1c;
  CDeformableModelInstance *local_18;
  float *pfVar5;
  
  bVar7 = 0;
  local_18 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_FUN_0052dd20
                       ((CMotionController *)(in_stack_00000004 + 1));
  local_1f08 = local_18;
  if (in_stack_00000004[0x17a].health < 0x3e19999a) {
    local_1f08 = (CDeformableModelInstance *)
                 (((float)in_stack_00000004[0x17a].health / FLOAT_0065380c) * (float)local_18);
  }
  fVar10 = 2.0;
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
  this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 1);
  pCVar11 = (CVector3f *)(in_stack_00000004[0x17a].create_event + 0x30);
  iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0((CMotionController *)this_ptr);
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0x15) {
    local_160 = pCVar11->x;
    local_15c = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
    local_158 = *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (this_ptr,&local_184,DAT_03f6badc);
    local_190.x = local_160 - local_184.x;
    local_190.y = local_15c - local_184.y;
    local_190.z = local_158 - local_184.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_7c,&local_190);
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)local_7c.x,fVar10);
    local_360 = afStack_32c[3];
    afStack_35c[(uint)bVar7 * -2] = afStack_32c[(uint)bVar7 * -2 + 4];
    afStack_35c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_32c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (afStack_35c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (afStack_32c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)local_7c.y,fVar10);
    pfVar3 = local_390;
    pfVar4 = local_300;
LAB_005be795:
    pfVar6 = pfVar3 + (uint)bVar7 * -2 + 1;
    pfVar5 = pfVar4 + (uint)bVar7 * -2 + 1;
    *pfVar3 = *pfVar4;
    *pfVar6 = *pfVar5;
    pfVar6[(uint)bVar7 * -2 + 1] = pfVar5[(uint)bVar7 * -2 + 1];
    (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (pfVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  }
  else if (iVar1 == 0x13) {
    local_e8 = pCVar11->x;
    local_e4 = *(float *)(in_stack_00000004[0x17a].create_event + 0x34);
    local_e0.x = *(float *)(in_stack_00000004[0x17a].create_event + 0x38);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              (this_ptr,&local_b8,DAT_03f6badc);
    local_70._0_4_ = local_e8 - local_b8.x;
    local_70._4_4_ = local_e4 - local_b8.y;
    local_70._8_4_ = local_e0.x - local_b8.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
              (&local_4c,(CVector3f *)local_70);
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)-local_4c.x,fVar10);
    afStack_23c[3] = (float)local_2c0;
    afStack_23c[(uint)bVar7 * -2 + 4] = afStack_2bc[(uint)bVar7 * -2];
    afStack_23c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5] =
         afStack_2bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    (afStack_23c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1] =
         (afStack_2bc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)local_4c.y,fVar10);
    afStack_1ec[3] = (float)local_240;
    afStack_1ec[(uint)bVar7 * -2 + 4] = afStack_23c[(uint)bVar7 * -2];
    afStack_1ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5] =
         afStack_23c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    (afStack_1ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1] =
         (afStack_23c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  }
  else {
    if (iVar1 != 0x16) {
      if (iVar1 == 0x1f) {
        if (in_stack_00000004[0x179].scale.z == 0) {
          pCVar2 = (CVector3f *)core_lever_cpp_FUN_00504dd0();
          pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (in_stack_00000004,&local_154,pCVar2);
          if (pCVar11 != pCVar2) {
            pCVar11->x = pCVar2->x;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x34) = pCVar2->y;
            *(float *)(in_stack_00000004[0x17a].create_event + 0x38) = pCVar2->z;
          }
        }
        else {
          pCVar2 = (CVector3f *)core_lever_cpp_FUN_00504dd0();
          pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             (in_stack_00000004,&local_a0,pCVar2);
          if (pCVar11 != pCVar2) {
            pCVar11->x = pCVar2->x;
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
                   DAT_03f6badc);
        local_130 = local_100 - (float)local_94._0_4_;
        local_12c = local_fc - (float)local_94._4_4_;
        local_128.x = local_f8.x - (float)local_94._8_4_;
        pCVar11 = &local_ac;
        local_ac.x = local_130;
        local_ac.y = local_12c;
        local_ac.z = local_128.x;
        core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                  ((CVector3f *)local_148,pCVar11);
        local_24 = SQRT(local_128.x * local_128.x + local_130 * local_130 + local_12c * local_12c);
        if (local_24 < _DAT_00663778) {
          pCVar11 = (CVector3f *)0x5bea4d;
          dVar9 = crt_math_c_acos_FUN_00600162((double)(local_24 / _DAT_00663778));
          local_20 = (CQuaternion4f *)(float)dVar9;
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_20,(float)pCVar11);
          uStack_2a4 = uStack_2d4;
          afStack_2bc[(uint)bVar7 * -2 + 7] = local_2d0[(uint)bVar7 * -2];
          afStack_2bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8] =
               local_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          (afStack_2bc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 8)[(uint)bVar7 * -2 + 1] =
               (local_2d0 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          local_1c = in_stack_00000004 + 1;
          core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
          core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                    ((CQuaternion4f *)-(float)local_20,(float)pCVar11);
          uStack_1c4 = afStack_2bc[2];
          afStack_1ec[(uint)bVar7 * -2 + 0xb] = afStack_2bc[(uint)bVar7 * -2 + 3];
          afStack_1ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xc] =
               afStack_2bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          (afStack_1ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xc)[(uint)bVar7 * -2 + 1] =
               (afStack_2bc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 4)[(uint)bVar7 * -2 + 1];
          core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
        }
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
                  ((CQuaternion4f *)local_154.z,(float)pCVar11);
        uStack_3b4 = uStack_1d4;
        local_3b0[(uint)bVar7 * -2] = afStack_1ec[(uint)bVar7 * -2 + 7];
        local_3b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_1ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8];
        (local_3b0 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
             (afStack_1ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 8)[(uint)bVar7 * -2 + 1];
        local_1c = in_stack_00000004 + 1;
        core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                  ((CQuaternion4f *)local_148._0_4_,(float)pCVar11);
        pfVar3 = afStack_25c + 2;
        pfVar4 = local_3b0 + 3;
      }
      else if (iVar1 == 0x17) {
        fVar8 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x48) /
                                (float10)_DAT_00663778,(float10)1);
        local_38 = (CQuaternion4f *)(float)fVar8;
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_38,fVar10);
        local_330 = (float)local_3f0;
        afStack_32c[(uint)bVar7 * -2] = afStack_3ec[(uint)bVar7 * -2];
        afStack_32c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_3ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        (afStack_32c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
             (afStack_3ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
        local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
        core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)-(float)local_38,fVar10);
        pfVar3 = afStack_35c + 0xb;
        pfVar4 = afStack_32c + 7;
      }
      else {
        if (iVar1 != 0x18) {
          if (iVar1 == 0x19) {
            fVar8 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x48
                                                       ) / (float10)_DAT_00663778,(float10)1);
            local_34 = (CQuaternion4f *)(float)fVar8;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_34,fVar10);
            local_1f0 = local_260;
            afStack_1ec[(uint)bVar7 * -2] = afStack_25c[(uint)bVar7 * -2];
            afStack_1ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_25c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            (afStack_1ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
                 (afStack_25c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
            local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
            core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                      ((CQuaternion4f *)-(float)local_34,fVar10);
            local_1f0 = local_220;
            afStack_1ec[(uint)bVar7 * -2] = afStack_23c[(uint)bVar7 * -2 + 8];
            afStack_1ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_23c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
            (afStack_1ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
                 (afStack_23c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 9)[(uint)bVar7 * -2 + 1];
          }
          else {
            if (iVar1 != 0x1a) goto LAB_005be7a1;
            local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                      (local_18,&local_16c,DAT_03f6badc);
            fVar10 = 8.445058e-39;
            fVar8 = crt_math_c_atan2_FUN_006013b1
                              ((float10)local_16c.y -
                               (float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x34),
                               (float10)_DAT_00663778);
            core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)(float)fVar8,fVar10);
            afStack_3ec[2] = (float)local_344;
            afStack_3ec[(uint)bVar7 * -2 + 3] = afStack_32c[(uint)bVar7 * -2 + -5];
            afStack_3ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_32c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -4];
            (afStack_3ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 4)[(uint)bVar7 * -2 + 1] =
                 (afStack_32c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + -4)[(uint)bVar7 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
            core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
            fVar8 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x48
                                                       ) / (float10)_DAT_00663778,(float10)1);
            local_30 = (CQuaternion4f *)(float)fVar8;
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_30,fVar10);
            local_214 = local_204;
            afStack_1ec[(uint)bVar7 * -2 + -9] = afStack_1ec[(uint)bVar7 * -2 + -5];
            afStack_1ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -8] =
                 afStack_1ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -4];
            (afStack_1ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + -8)[(uint)bVar7 * -2 + 1] =
                 (afStack_1ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + -4)[(uint)bVar7 * -2 + 1];
            core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
            core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
                      ((CQuaternion4f *)-(float)local_30,fVar10);
            local_214 = afStack_35c[2];
            afStack_1ec[(uint)bVar7 * -2 + -9] = afStack_35c[(uint)bVar7 * -2 + 3];
            afStack_1ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -8] =
                 afStack_35c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            (afStack_1ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + -8)[(uint)bVar7 * -2 + 1] =
                 (afStack_35c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 4)[(uint)bVar7 * -2 + 1];
          }
          goto LAB_005be799;
        }
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                  ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_c4,DAT_03f6badc);
        local_20 = (CQuaternion4f *)
                   ((*(float *)(in_stack_00000004[0x17a].create_event + 0x34) +
                    *(float *)(in_stack_00000004[0x17a].create_event + 0x4c)) -
                   *(float *)(in_stack_00000004[0x17a].create_event + 0x40));
        if (in_stack_00000004[0x179].scale.x != 0) {
          _DAT_03f6bb64 = (CDeformableModelInstance *)core_stranger_cpp_FUN_005bb010();
          local_18 = _DAT_03f6bb64;
        }
        local_20 = (CQuaternion4f *)((float)local_20 - (float)_DAT_03f6bb64);
        fVar10 = 8.443984e-39;
        fVar8 = crt_math_c_atan2_FUN_006013b1
                          ((float10)local_c4.y - (float10)(float)local_20,(float10)_DAT_00663778);
        core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)(float)fVar8,fVar10);
        local_294 = local_384;
        afStack_2bc[(uint)bVar7 * -2 + 0xb] = local_380[(uint)bVar7 * -2];
        afStack_2bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xc] =
             local_380[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        (afStack_2bc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xc)[(uint)bVar7 * -2 + 1] =
             (local_380 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
        local_1c = in_stack_00000004 + 1;
        core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
        core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
        fVar8 = (float10)fpatan((float10)*(float *)(in_stack_00000004[0x17a].create_event + 0x48) /
                                (float10)_DAT_00663778,(float10)1);
        local_34 = (CQuaternion4f *)(float)fVar8;
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0(local_34,fVar10);
        local_1a4[0] = (float)local_2f4;
        afStack_1ec[(uint)bVar7 * -2 + 0x13] = local_2f0[(uint)bVar7 * -2];
        afStack_1ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x14] =
             local_2f0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        (afStack_1ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x14)[(uint)bVar7 * -2 + 1] =
             (local_2f0 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
        core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
        core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)-(float)local_34,fVar10);
        pfVar3 = afStack_1ec + 0x12;
        pfVar4 = afStack_3ec + 10;
      }
      goto LAB_005be795;
    }
    pCVar11 = (CVector3f *)&in_stack_00000004[0x179].previous_transform_state.position.y;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)(auStack_434 + 4),pCVar11);
    if ((DAT_03f6baac & 1) == 0) {
      DAT_03f6baac = DAT_03f6baac | 1;
    }
    if (in_stack_00000004[0x179].field21_0x11c != 0) {
      pCVar11 = local_408;
      pfVar3 = (float *)(**(code **)(*(int *)(in_stack_00000004[0x179].field21_0x11c + 0x154) + 0x14
                                    ))();
      fStack_d4 = *pfVar3 + pfVar3[3];
      fStack_d0 = pfVar3[1] + pfVar3[4];
      local_184.z = fStack_d4 * FLOAT_0065383c;
      fStack_cc = pfVar3[2] + pfVar3[5];
      fStack_178 = fStack_d0 * FLOAT_0065383c;
      fStack_174 = fStack_cc * FLOAT_0065383c;
      if (&stack0x00000000 != (undefined1 *)0x3f6bc18) {
        _DAT_03f6ba9c = local_184.z;
        _DAT_03f6baa0 = fStack_178;
        _DAT_03f6baa4 = fStack_174;
      }
    }
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)auStack_434,(CVector3f *)(local_70 + 8),
                        (CVector3f *)&DAT_03f6ba9c);
    local_148._8_4_ = (float)in_stack_00000004[0x179].field22_0x120 + pCVar2->x;
    fStack_13c = (float)in_stack_00000004[0x179].field23_0x124 + pCVar2->y;
    fStack_138 = in_stack_00000004[0x179].previous_transform_state.position.x + pCVar2->z;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (in_stack_00000004,&local_128,(CVector3f *)(local_148 + 8));
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_e0,DAT_03f6badc);
    local_f8.x = local_128.x - local_e0.x;
    local_f8.y = local_128.y - local_e0.y;
    local_f8.z = local_128.z - local_e0.z;
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(aCStack_11c,&local_f8);
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              ((CQuaternion4f *)aCStack_11c[0].x,(float)pCVar11);
    uStack_284 = uStack_1b4;
    afStack_25c[(uint)bVar7 * -2 + -9] = afStack_1ec[(uint)bVar7 * -2 + 0xf];
    afStack_25c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -8] =
         afStack_1ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
    (afStack_25c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + -8)[(uint)bVar7 * -2 + 1] =
         (afStack_1ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10)[(uint)bVar7 * -2 + 1];
    local_1c = in_stack_00000004 + 1;
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              ((CQuaternion4f *)aCStack_11c[0].y,(float)pCVar11);
    uStack_274 = local_380[3];
    afStack_25c[(uint)bVar7 * -2 + -5] = local_380[(uint)bVar7 * -2 + 4];
    afStack_25c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -4] =
         afStack_35c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + -4];
    (afStack_25c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + -4)[(uint)bVar7 * -2 + 1] =
         (afStack_35c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + -4)[(uint)bVar7 * -2 + 1];
  }
LAB_005be799:
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059ff20();
LAB_005be7a1:
  if (g_CGamePtr->block_auto_save != 0) {
    local_88 = 0;
    local_84 = 0;
    local_94._8_4_ = 0.0;
    if ((in_stack_00000004[0x179].previous_transform_state.orientation.z != 0.0) &&
       (in_stack_00000004[0x17a].orient_matrix.m[0].x != 0.0)) {
      local_94._8_4_ = *(undefined4 *)in_stack_00000004[0x17a].actor_name;
    }
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar10 = 1.0;
    iVar1 = DAT_03f6bacc;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(local_94 + 8),(CVector3f *)0x3f800000);
    CStack_2e4.w = fStack_3d4;
    pfVar3 = (float *)((int)&CStack_2e4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    *(float *)((int)&CStack_2e4 + (uint)bVar7 * -8 + 4) = afStack_3ec[(uint)bVar7 * -2 + 7];
    *pfVar3 = afStack_3ec[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 8];
    pfVar3[(uint)bVar7 * -2 + 1] =
         (afStack_3ec + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 8)[(uint)bVar7 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_2e4,fVar10,iVar1,
               blend_callback);
  }
  if (in_stack_00000004[0x17a].orient_matrix.m[2].x <= 0.0) {
    return;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          ((CDeformableModelInstance *)(in_stack_00000004 + 1));
  iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&this_ptr_00->motion_list);
  local_2c = (float)core_motion_cpp_CMotionController_FUN_0052e3a0();
  local_1c = (CDemonActor *)local_2c;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            ((CDeformableModelInstance *)(in_stack_00000004 + 1),iVar1,local_2c,
             in_stack_00000004[0x17a].orient_matrix.m[2].x,DAT_03f6bb0c,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  return;
}


// Assembly code:
// 005be520: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005be520
// 005be521: PUSH ESI
// 005be522: PUSH EDI
// 005be523: PUSH EBP
// 005be524: MOV EBP,ESP
// 005be526: SUB ESP,0x1f3c
// 005be52c: AND ESP,0xfffffff8
// 005be52f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005be532: PUSH 0x0
// 005be534: LEA EAX,[EBX + 0x158]
// 005be53a: PUSH EAX
// 005be53b: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 005be540: MOV dword ptr [ESP + 0x1f40],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005be547: MOV EDX,0x3e19999a
// 005be54c: FLD float ptr [ESP + 0x1f40]
//   XREF to: Stack[-0x18] (READ)
// 005be553: ADD ESP,0x8
// 005be556: MOV ECX,dword ptr [EBX + 0x1fc54]
// 005be55c: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x1f08] (WRITE)
// 005be560: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: Stack[-0x1ed4] (WRITE)
// 005be564: CMP ECX,EDX
// 005be566: JL 0x005be854
//   XREF to: 005be854 (CONDITIONAL_JUMP)
// 005be56c: FLD float ptr [ESP + 0x7c]
//   Label: LAB_005be56c
//   XREF to: Stack[-0x1ed4] (READ)
// 005be570: FLD1
// 005be572: FLD float ptr [EBX + 0x1fc54]
// 005be578: FXCH ST2
// 005be57a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1f50] (DATA)
// 005be57d: FSUB double ptr [ESP]
//   XREF to: Stack[-0x1f50] (DATA)
// 005be580: FXCH
// 005be582: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x1f20] (WRITE)
// 005be586: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x1f20] (READ)
// 005be58a: FNSTSW AX
// 005be58c: SAHF
// 005be58d: JNC 0x005be5a0
//   XREF to: 005be5a0 (CONDITIONAL_JUMP)
// 005be58f: FLD1
// 005be591: FSUB double ptr [ESP + 0x30]
//   XREF to: Stack[-0x1f20] (READ)
// 005be595: FDIV double ptr [ESP]
//   XREF to: Stack[-0x1f50] (DATA)
// 005be598: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x1f08] (READ)
// 005be59c: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x1f08] (WRITE)
// 005be5a0: LEA ESI,[EBX + 0x158]
//   Label: LAB_005be5a0
// 005be5a6: PUSH ESI
// 005be5a7: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 005be5ac: ADD ESP,0x4
// 005be5af: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x1f08] (READ)
// 005be5b3: FLDZ
// 005be5b5: FCOMPP
// 005be5b7: FNSTSW AX
// 005be5b9: SAHF
// 005be5ba: JNC 0x005be602
//   XREF to: 005be602 (CONDITIONAL_JUMP)
// 005be5bc: CMP dword ptr [EBX + 0x1fc84],0x0
// 005be5c3: JL 0x005be602
//   XREF to: 005be602 (CONDITIONAL_JUMP)
// 005be5c5: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x1ecc] (DATA)
// 005be5cc: PUSH EAX
// 005be5cd: PUSH EBX
// 005be5ce: CALL core_stranger.cpp_CStranger_FUN_005bf720
//   XREF to: 005bf720 (UNCONDITIONAL_CALL)
// 005be5d3: ADD ESP,0x8
// 005be5d6: XOR EAX,EAX
// 005be5d8: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005be5dd: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x1ecc] (WRITE)
// 005be5e4: PUSH -0x1
// 005be5e6: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x1ec4] (WRITE)
// 005be5ed: LEA EAX,[ESP + 0x8c]
//   XREF to: Stack[-0x1ecc] (DATA)
// 005be5f4: PUSH dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1f08] (READ)
// 005be5f8: PUSH EAX
// 005be5f9: PUSH ESI
// 005be5fa: CALL core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230
//   XREF to: 0059f230 (UNCONDITIONAL_CALL)
// 005be5ff: ADD ESP,0x14
// 005be602: PUSH EBX
//   Label: LAB_005be602
// 005be603: CALL core_stranger.cpp_CStranger_FUN_005bfb60
//   XREF to: 005bfb60 (UNCONDITIONAL_CALL)
// 005be608: ADD ESP,0x4
// 005be60b: LEA EDI,[EBX + 0x158]
// 005be611: PUSH EDI
// 005be612: LEA ESI,[EBX + 0x1fc98]
// 005be618: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005be61d: LEA EDX,[EBX + 0x1fca0]
// 005be623: ADD ESP,0x4
// 005be626: LEA ECX,[EBX + 0x1fc9c]
// 005be62c: MOV EAX,dword ptr [EAX + 0x24]
// 005be62f: CMP EAX,0x15
// 005be632: JNZ 0x005be89d
//   XREF to: 005be89d (CONDITIONAL_JUMP)
// 005be638: MOV EAX,dword ptr [ESI]
// 005be63a: MOV dword ptr [ESP + 0x1df0],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 005be641: MOV EAX,dword ptr [ECX]
// 005be643: MOV dword ptr [ESP + 0x1df4],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 005be64a: MOV EAX,dword ptr [EDX]
// 005be64c: MOV EDX,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005be652: PUSH EDX
// 005be653: MOV dword ptr [ESP + 0x1dfc],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 005be65a: LEA EAX,[ESP + 0x1dd0]
//   XREF to: Stack[-0x184] (DATA)
// 005be661: PUSH EAX
// 005be662: PUSH EDI
// 005be663: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005be668: ADD ESP,0xc
// 005be66b: LEA EAX,[ESP + 0x1dc0]
//   XREF to: Stack[-0x190] (DATA)
// 005be672: FLD float ptr [ESP + 0x1df0]
//   XREF to: Stack[-0x160] (READ)
// 005be679: FLD float ptr [ESP + 0x1df4]
//   XREF to: Stack[-0x15c] (READ)
// 005be680: FLD float ptr [ESP + 0x1df8]
//   XREF to: Stack[-0x158] (READ)
// 005be687: PUSH EAX
// 005be688: LEA EAX,[ESP + 0x1ed8]
//   XREF to: Stack[-0x7c] (DATA)
// 005be68f: FXCH ST2
// 005be691: FSUB float ptr [ESP + 0x1dd0]
//   XREF to: Stack[-0x184] (READ)
// 005be698: FXCH
// 005be69a: FSUB float ptr [ESP + 0x1dd4]
//   XREF to: Stack[-0x180] (READ)
// 005be6a1: FXCH ST2
// 005be6a3: FSUB float ptr [ESP + 0x1dd8]
//   XREF to: Stack[-0x17c] (READ)
// 005be6aa: FXCH
// 005be6ac: FSTP float ptr [ESP + 0x1dc4]
//   XREF to: Stack[-0x190] (WRITE)
// 005be6b3: FXCH
// 005be6b5: FSTP float ptr [ESP + 0x1dc8]
//   XREF to: Stack[-0x18c] (WRITE)
// 005be6bc: PUSH EAX
// 005be6bd: FSTP float ptr [ESP + 0x1dd0]
//   XREF to: Stack[-0x188] (WRITE)
// 005be6c4: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005be6c9: ADD ESP,0x8
// 005be6cc: MOV EAX,dword ptr [EDI + 0x8]
// 005be6cf: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x1f00] (WRITE)
// 005be6d3: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x1ee4] (WRITE)
// 005be6d7: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x1f00] (READ)
// 005be6db: FST double ptr [ESP + 0x28]
//   XREF to: Stack[-0x1f28] (WRITE)
// 005be6df: FCOMP double ptr [0x0065387c]
//   XREF to: 0065387c (READ)
// 005be6e5: FNSTSW AX
// 005be6e7: SAHF
// 005be6e8: JNC 0x005be86d
//   XREF to: 005be86d (CONDITIONAL_JUMP)
// 005be6ee: FLD float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1ee4] (READ)
// 005be6f2: FMUL double ptr [0x0065388c]
//   XREF to: 0065388c (READ)
// 005be6f8: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x1ee0] (WRITE)
// 005be6fc: PUSH dword ptr [ESP + 0x1ed4]
//   Label: LAB_005be6fc
//   XREF to: Stack[-0x7c] (READ)
// 005be703: LEA ESI,[ESP + 0x1c34]
//   XREF to: Stack[-0x320] (DATA)
// 005be70a: LEA EDI,[ESP + 0x1bf4]
//   XREF to: Stack[-0x360] (DATA)
// 005be711: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 005be716: LEA ESI,[ESP + 0x1c34]
//   XREF to: Stack[-0x320] (DATA)
// 005be71d: ADD ESP,0x4
// 005be720: MOVSD ES:EDI,ESI
// 005be721: MOVSD ES:EDI,ESI
// 005be722: MOVSD ES:EDI,ESI
// 005be723: MOVSD ES:EDI,ESI
// 005be724: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005be729: MOV ESI,dword ptr [0x03f6bb10]
//   XREF to: 03f6bb10 (READ)
// 005be72f: PUSH ESI
// 005be730: LEA EAX,[ESP + 0x1bf8]
//   XREF to: Stack[-0x360] (DATA)
// 005be737: PUSH dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x1ee0] (READ)
// 005be73b: PUSH EAX
// 005be73c: LEA EAX,[EBX + 0x158]
// 005be742: PUSH EAX
// 005be743: MOV dword ptr [ESP + 0x1f4c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005be74a: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005be74f: ADD ESP,0x14
// 005be752: LEA ESI,[ESP + 0x1c50]
//   XREF to: Stack[-0x300] (DATA)
// 005be759: PUSH dword ptr [ESP + 0x1ed8]
//   XREF to: Stack[-0x78] (READ)
// 005be760: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005be765: ADD ESP,0x4
// 005be768: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005be76d: MOV EAX,[0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005be772: PUSH EAX
// 005be773: PUSH dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x1ee0] (READ)
// 005be777: LEA EAX,[ESP + 0x1bcc]
//   XREF to: Stack[-0x390] (DATA)
// 005be77e: LEA EDI,[ESP + 0x1bcc]
//   XREF to: Stack[-0x390] (DATA)
// 005be785: PUSH EAX
// 005be786: MOV EDX,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005be78d: LEA ESI,[ESP + 0x1c60]
//   XREF to: Stack[-0x300] (DATA)
// 005be794: PUSH EDX
// 005be795: MOVSD ES:EDI,ESI
//   Label: LAB_005be795
// 005be796: MOVSD ES:EDI,ESI
// 005be797: MOVSD ES:EDI,ESI
// 005be798: MOVSD ES:EDI,ESI
// 005be799: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   Label: LAB_005be799
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005be79e: ADD ESP,0x14
// 005be7a1: MOV EAX,[0x0067b654]
//   Label: LAB_005be7a1
//   XREF to: 0067b654 (READ)
// 005be7a6: CMP dword ptr [EAX + 0x240],0x0
//   XREF to: 02d81cdc (READ)
// 005be7ad: JZ 0x005be83a
//   XREF to: 005be83a (CONDITIONAL_JUMP)
// 005be7b3: XOR ESI,ESI
// 005be7b5: MOV dword ptr [ESP + 0x1ecc],ESI
//   XREF to: Stack[-0x84] (WRITE)
// 005be7bc: MOV dword ptr [ESP + 0x1ed0],ESI
//   XREF to: Stack[-0x80] (WRITE)
// 005be7c3: MOV dword ptr [ESP + 0x1ec8],ESI
//   XREF to: Stack[-0x88] (WRITE)
// 005be7ca: CMP dword ptr [EBX + 0x1fbd4],0x0
// 005be7d1: JZ 0x005be7e9
//   XREF to: 005be7e9 (CONDITIONAL_JUMP)
// 005be7d3: CMP dword ptr [EBX + 0x1fc2c],0x0
// 005be7da: JZ 0x005be7e9
//   XREF to: 005be7e9 (CONDITIONAL_JUMP)
// 005be7dc: MOV EAX,dword ptr [EBX + 0x1fbf0]
// 005be7e2: MOV dword ptr [ESP + 0x1ec8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005be7e9: PUSH 0x59ddb0
//   Label: LAB_005be7e9
//   XREF to: 0059ddb0 (DATA)
// 005be7ee: MOV ESI,dword ptr [0x03f6bacc]
//   XREF to: 03f6bacc (READ)
// 005be7f4: PUSH ESI
// 005be7f5: LEA EAX,[ESP + 0x1ed0]
//   XREF to: Stack[-0x88] (DATA)
// 005be7fc: PUSH 0x3f800000
// 005be801: PUSH EAX
// 005be802: LEA ESI,[ESP + 0x1b90]
//   XREF to: Stack[-0x3d0] (DATA)
// 005be809: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 005be80e: ADD ESP,0x4
// 005be811: LEA EAX,[ESP + 0x1c7c]
//   XREF to: Stack[-0x2e0] (DATA)
// 005be818: LEA EDI,[ESP + 0x1c7c]
//   XREF to: Stack[-0x2e0] (DATA)
// 005be81f: PUSH EAX
// 005be820: LEA EAX,[EBX + 0x158]
// 005be826: LEA ESI,[ESP + 0x1b90]
//   XREF to: Stack[-0x3d0] (DATA)
// 005be82d: PUSH EAX
// 005be82e: MOVSD ES:EDI,ESI
// 005be82f: MOVSD ES:EDI,ESI
// 005be830: MOVSD ES:EDI,ESI
// 005be831: MOVSD ES:EDI,ESI
// 005be832: CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 005be837: ADD ESP,0x14
// 005be83a: FLD float ptr [EBX + 0x1fc44]
//   Label: LAB_005be83a
// 005be840: FLDZ
// 005be842: FCOMPP
// 005be844: FNSTSW AX
// 005be846: SAHF
// 005be847: JC 0x005bf6a4
//   XREF to: 005bf6a4 (CONDITIONAL_JUMP)
// 005be84d: MOV ESP,EBP
// 005be84f: POP EBP
// 005be850: POP EDI
// 005be851: POP ESI
// 005be852: POP EBX
// 005be853: RET
// 005be854: FLD float ptr [EBX + 0x1fc54]
//   Label: LAB_005be854
// 005be85a: FDIV float ptr [0x0065380c]
//   XREF to: 0065380c (READ)
// 005be860: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x1f08] (READ)
// 005be864: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x1f08] (WRITE)
// 005be868: JMP 0x005be56c
//   XREF to: 005be56c (UNCONDITIONAL_JUMP)
// 005be86d: FLD double ptr [ESP + 0x28]
//   Label: LAB_005be86d
//   XREF to: Stack[-0x1f28] (READ)
// 005be871: FADD double ptr [0x00653884]
//   XREF to: 00653884 (READ)
// 005be877: FMUL double ptr [0x0065388c]
//   XREF to: 0065388c (READ)
// 005be87d: FLD1
// 005be87f: FSUBRP
// 005be881: FST float ptr [ESP + 0x70]
//   XREF to: Stack[-0x1ee0] (WRITE)
// 005be885: FLDZ
// 005be887: FCOMPP
// 005be889: FNSTSW AX
// 005be88b: SAHF
// 005be88c: JBE 0x005be6fc
//   XREF to: 005be6fc (CONDITIONAL_JUMP)
// 005be892: XOR ECX,ECX
// 005be894: MOV dword ptr [ESP + 0x70],ECX
//   XREF to: Stack[-0x1ee0] (WRITE)
// 005be898: JMP 0x005be6fc
//   XREF to: 005be6fc (UNCONDITIONAL_JUMP)
// 005be89d: CMP EAX,0x13
//   Label: LAB_005be89d
// 005be8a0: JZ 0x005beba0
//   XREF to: 005beba0 (CONDITIONAL_JUMP)
// 005be8a6: CMP EAX,0x16
// 005be8a9: JZ 0x005bed3a
//   XREF to: 005bed3a (CONDITIONAL_JUMP)
// 005be8af: CMP EAX,0x1f
// 005be8b2: JNZ 0x005bf094
//   XREF to: 005bf094 (CONDITIONAL_JUMP)
// 005be8b8: MOV EDI,dword ptr [EBX + 0x1fba8]
// 005be8be: TEST EDI,EDI
// 005be8c0: JZ 0x005bf003
//   XREF to: 005bf003 (CONDITIONAL_JUMP)
// 005be8c6: LEA EAX,[ESP + 0x1ef8]
//   XREF to: Stack[-0x58] (DATA)
// 005be8cd: PUSH EAX
// 005be8ce: PUSH EDI
// 005be8cf: CALL core_lever.cpp_FUN_00504dd0
//   XREF to: 00504dd0 (UNCONDITIONAL_CALL)
// 005be8d4: ADD ESP,0x8
// 005be8d7: PUSH EAX
// 005be8d8: LEA EAX,[ESP + 0x1eb4]
//   XREF to: Stack[-0xa0] (DATA)
// 005be8df: PUSH EAX
// 005be8e0: PUSH EBX
// 005be8e1: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005be8e6: ADD ESP,0xc
// 005be8e9: CMP ESI,EAX
// 005be8eb: JZ 0x005be8fd
//   XREF to: 005be8fd (CONDITIONAL_JUMP)
// 005be8ed: MOV EDX,dword ptr [EAX]
// 005be8ef: MOV dword ptr [ESI],EDX
// 005be8f1: MOV EDX,dword ptr [EAX + 0x4]
// 005be8f4: MOV dword ptr [ESI + 0x4],EDX
// 005be8f7: MOV EDX,dword ptr [EAX + 0x8]
// 005be8fa: MOV dword ptr [ESI + 0x8],EDX
// 005be8fd: MOV EAX,dword ptr [EBX + 0x1fba8]
//   Label: LAB_005be8fd
// 005be903: MOV [0x03f6baa8],EAX
//   XREF to: 03f6baa8 (WRITE)
// 005be908: LEA ESI,[EBX + 0x1fc98]
//   Label: LAB_005be908
// 005be90e: MOV EAX,dword ptr [ESI]
// 005be910: MOV dword ptr [ESP + 0x1e50],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 005be917: LEA EAX,[ESI + 0x4]
// 005be91a: MOV EAX,dword ptr [EAX]
// 005be91c: MOV dword ptr [ESP + 0x1e54],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 005be923: LEA EAX,[ESI + 0x8]
// 005be926: MOV ECX,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005be92c: MOV EAX,dword ptr [EAX]
// 005be92e: PUSH ECX
// 005be92f: MOV dword ptr [ESP + 0x1e5c],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005be936: LEA EAX,[ESP + 0x1ec0]
//   XREF to: Stack[-0x94] (DATA)
// 005be93d: PUSH EAX
// 005be93e: LEA ESI,[EBX + 0x158]
// 005be944: PUSH ESI
// 005be945: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005be94a: ADD ESP,0xc
// 005be94d: FLD float ptr [ESP + 0x1e50]
//   XREF to: Stack[-0x100] (READ)
// 005be954: FLD float ptr [ESP + 0x1e54]
//   XREF to: Stack[-0xfc] (READ)
// 005be95b: FLD float ptr [ESP + 0x1e58]
//   XREF to: Stack[-0xf8] (READ)
// 005be962: FXCH ST2
// 005be964: FSUB float ptr [ESP + 0x1ebc]
//   XREF to: Stack[-0x94] (READ)
// 005be96b: FXCH
// 005be96d: FSUB float ptr [ESP + 0x1ec0]
//   XREF to: Stack[-0x90] (READ)
// 005be974: FXCH ST2
// 005be976: FSUB float ptr [ESP + 0x1ec4]
//   XREF to: Stack[-0x8c] (READ)
// 005be97d: FXCH
// 005be97f: FSTP float ptr [ESP + 0x1e20]
//   XREF to: Stack[-0x130] (WRITE)
// 005be986: MOV EAX,dword ptr [ESP + 0x1e20]
//   XREF to: Stack[-0x130] (READ)
// 005be98d: FXCH
// 005be98f: FSTP float ptr [ESP + 0x1e24]
//   XREF to: Stack[-0x12c] (WRITE)
// 005be996: MOV dword ptr [ESP + 0x1ea4],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005be99d: MOV EAX,dword ptr [ESP + 0x1e24]
//   XREF to: Stack[-0x12c] (READ)
// 005be9a4: FSTP float ptr [ESP + 0x1e28]
//   XREF to: Stack[-0x128] (WRITE)
// 005be9ab: MOV dword ptr [ESP + 0x1ea8],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005be9b2: MOV EAX,dword ptr [ESP + 0x1e28]
//   XREF to: Stack[-0x128] (READ)
// 005be9b9: MOV dword ptr [ESP + 0x1eac],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005be9c0: LEA EAX,[ESP + 0x1ea4]
//   XREF to: Stack[-0xac] (DATA)
// 005be9c7: PUSH EAX
// 005be9c8: LEA EAX,[ESP + 0x1e0c]
//   XREF to: Stack[-0x148] (DATA)
// 005be9cf: PUSH EAX
// 005be9d0: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005be9d5: ADD ESP,0x8
// 005be9d8: MOV EAX,dword ptr [ESI + 0x8]
// 005be9db: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x1efc] (WRITE)
// 005be9df: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x1efc] (READ)
// 005be9e3: FST double ptr [ESP + 0x18]
//   XREF to: Stack[-0x1f38] (WRITE)
// 005be9e7: FCOMP double ptr [0x0065382c]
//   XREF to: 0065382c (READ)
// 005be9ed: FNSTSW AX
// 005be9ef: SAHF
// 005be9f0: JNC 0x005bf048
//   XREF to: 005bf048 (CONDITIONAL_JUMP)
// 005be9f6: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x1f38] (READ)
// 005be9fa: FMUL double ptr [0x00653834]
//   XREF to: 00653834 (READ)
// 005bea00: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1f04] (WRITE)
// 005bea04: FLD float ptr [ESP + 0x1e24]
//   Label: LAB_005bea04
//   XREF to: Stack[-0x12c] (READ)
// 005bea0b: FMUL ST0
// 005bea0d: FLD float ptr [ESP + 0x1e20]
//   XREF to: Stack[-0x130] (READ)
// 005bea14: FMUL ST0
// 005bea16: FADDP
// 005bea18: FLD float ptr [ESP + 0x1e28]
//   XREF to: Stack[-0x128] (READ)
// 005bea1f: FMUL ST0
// 005bea21: FADDP
// 005bea23: FSQRT
// 005bea25: FST float ptr [ESP + 0x1f2c]
//   XREF to: Stack[-0x24] (WRITE)
// 005bea2c: FCOMP float ptr [0x00663778]
//   XREF to: 00663778 (READ)
// 005bea32: FNSTSW AX
// 005bea34: SAHF
// 005bea35: JNC 0x005beb01
//   XREF to: 005beb01 (CONDITIONAL_JUMP)
// 005bea3b: FLD float ptr [ESP + 0x1f2c]
//   XREF to: Stack[-0x24] (READ)
// 005bea42: FDIV float ptr [0x00663778]
//   XREF to: 00663778 (READ)
// 005bea48: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005bea4d: LEA ESI,[ESP + 0x1c80]
//   XREF to: Stack[-0x2d0] (DATA)
// 005bea54: FSTP float ptr [ESP + 0x1f34]
//   XREF to: Stack[-0x1c] (WRITE)
// 005bea5b: PUSH dword ptr [ESP + 0x1f34]
//   XREF to: Stack[-0x1c] (READ)
// 005bea62: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005bea67: ADD ESP,0x4
// 005bea6a: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bea6f: MOV EAX,[0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005bea74: PUSH EAX
// 005bea75: PUSH dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1f04] (READ)
// 005bea79: LEA EAX,[ESP + 0x1cbc]
//   XREF to: Stack[-0x2a0] (DATA)
// 005bea80: LEA EDI,[ESP + 0x1cbc]
//   XREF to: Stack[-0x2a0] (DATA)
// 005bea87: PUSH EAX
// 005bea88: LEA EAX,[EBX + 0x158]
// 005bea8e: LEA ESI,[ESP + 0x1c90]
//   XREF to: Stack[-0x2d0] (DATA)
// 005bea95: PUSH EAX
// 005bea96: MOVSD ES:EDI,ESI
// 005bea97: MOVSD ES:EDI,ESI
// 005bea98: MOVSD ES:EDI,ESI
// 005bea99: MOVSD ES:EDI,ESI
// 005bea9a: MOV dword ptr [ESP + 0x1f4c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005beaa1: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005beaa6: ADD ESP,0x14
// 005beaa9: LEA ESI,[ESP + 0x1ca0]
//   XREF to: Stack[-0x2b0] (DATA)
// 005beab0: FLD float ptr [ESP + 0x1f34]
//   XREF to: Stack[-0x1c] (READ)
// 005beab7: SUB ESP,0x4
// 005beaba: FCHS
// 005beabc: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1f54] (DATA)
// 005beabf: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005beac4: ADD ESP,0x4
// 005beac7: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005beacc: MOV ECX,dword ptr [0x03f6bae4]
//   XREF to: 03f6bae4 (READ)
// 005bead2: LEA EDI,[ESP + 0x1d94]
//   XREF to: Stack[-0x1c0] (DATA)
// 005bead9: PUSH ECX
// 005beada: LEA ESI,[ESP + 0x1ca8]
//   XREF to: Stack[-0x2b0] (DATA)
// 005beae1: LEA EAX,[ESP + 0x1d98]
//   XREF to: Stack[-0x1c0] (DATA)
// 005beae8: PUSH dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1f04] (READ)
// 005beaec: MOVSD ES:EDI,ESI
// 005beaed: MOVSD ES:EDI,ESI
// 005beaee: MOVSD ES:EDI,ESI
// 005beaef: MOVSD ES:EDI,ESI
// 005beaf0: PUSH EAX
// 005beaf1: MOV ESI,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005beaf8: PUSH ESI
// 005beaf9: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005beafe: ADD ESP,0x14
// 005beb01: PUSH dword ptr [ESP + 0x1e08]
//   Label: LAB_005beb01
//   XREF to: Stack[-0x148] (READ)
// 005beb08: LEA ESI,[ESP + 0x1d84]
//   XREF to: Stack[-0x1d0] (DATA)
// 005beb0f: LEA EDI,[ESP + 0x1ba4]
//   XREF to: Stack[-0x3b0] (DATA)
// 005beb16: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 005beb1b: LEA ESI,[ESP + 0x1d84]
//   XREF to: Stack[-0x1d0] (DATA)
// 005beb22: ADD ESP,0x4
// 005beb25: MOVSD ES:EDI,ESI
// 005beb26: MOVSD ES:EDI,ESI
// 005beb27: MOVSD ES:EDI,ESI
// 005beb28: MOVSD ES:EDI,ESI
// 005beb29: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005beb2e: MOV EDI,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005beb34: PUSH EDI
// 005beb35: LEA EAX,[ESP + 0x1ba8]
//   XREF to: Stack[-0x3b0] (DATA)
// 005beb3c: PUSH dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1f04] (READ)
// 005beb40: PUSH EAX
// 005beb41: LEA EAX,[EBX + 0x158]
// 005beb47: PUSH EAX
// 005beb48: MOV dword ptr [ESP + 0x1f4c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005beb4f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005beb54: ADD ESP,0x14
// 005beb57: LEA ESI,[ESP + 0x1bb0]
//   XREF to: Stack[-0x3a0] (DATA)
// 005beb5e: PUSH dword ptr [ESP + 0x1e0c]
//   XREF to: Stack[-0x144] (READ)
// 005beb65: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005beb6a: ADD ESP,0x4
// 005beb6d: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005beb72: MOV EDX,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005beb78: PUSH EDX
// 005beb79: LEA EAX,[ESP + 0x1d08]
//   XREF to: Stack[-0x250] (DATA)
// 005beb80: PUSH dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1f04] (READ)
// 005beb84: LEA EDI,[ESP + 0x1d0c]
//   XREF to: Stack[-0x250] (DATA)
// 005beb8b: PUSH EAX
// 005beb8c: MOV ECX,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005beb93: LEA ESI,[ESP + 0x1bc0]
//   XREF to: Stack[-0x3a0] (DATA)
// 005beb9a: PUSH ECX
// 005beb9b: JMP 0x005be795
//   XREF to: 005be795 (UNCONDITIONAL_JUMP)
// 005beba0: MOV EAX,dword ptr [ESI]
//   Label: LAB_005beba0
// 005beba2: MOV dword ptr [ESP + 0x1e68],EAX
//   XREF to: Stack[-0xe8] (WRITE)
// 005beba9: MOV EAX,dword ptr [ECX]
// 005bebab: MOV dword ptr [ESP + 0x1e6c],EAX
//   XREF to: Stack[-0xe4] (WRITE)
// 005bebb2: MOV EAX,dword ptr [EDX]
// 005bebb4: MOV dword ptr [ESP + 0x1e70],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 005bebbb: MOV EAX,[0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005bebc0: PUSH EAX
// 005bebc1: LEA EAX,[ESP + 0x1e9c]
//   XREF to: Stack[-0xb8] (DATA)
// 005bebc8: PUSH EAX
// 005bebc9: PUSH EDI
// 005bebca: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005bebcf: ADD ESP,0xc
// 005bebd2: LEA EAX,[ESP + 0x1ee0]
//   XREF to: Stack[-0x70] (DATA)
// 005bebd9: FLD float ptr [ESP + 0x1e68]
//   XREF to: Stack[-0xe8] (READ)
// 005bebe0: FLD float ptr [ESP + 0x1e6c]
//   XREF to: Stack[-0xe4] (READ)
// 005bebe7: FLD float ptr [ESP + 0x1e70]
//   XREF to: Stack[-0xe0] (READ)
// 005bebee: PUSH EAX
// 005bebef: LEA EAX,[ESP + 0x1f08]
//   XREF to: Stack[-0x4c] (DATA)
// 005bebf6: FXCH ST2
// 005bebf8: FSUB float ptr [ESP + 0x1e9c]
//   XREF to: Stack[-0xb8] (READ)
// 005bebff: FXCH
// 005bec01: FSUB float ptr [ESP + 0x1ea0]
//   XREF to: Stack[-0xb4] (READ)
// 005bec08: FXCH ST2
// 005bec0a: FSUB float ptr [ESP + 0x1ea4]
//   XREF to: Stack[-0xb0] (READ)
// 005bec11: FXCH
// 005bec13: FSTP float ptr [ESP + 0x1ee4]
//   XREF to: Stack[-0x70] (WRITE)
// 005bec1a: FXCH
// 005bec1c: FSTP float ptr [ESP + 0x1ee8]
//   XREF to: Stack[-0x6c] (WRITE)
// 005bec23: PUSH EAX
// 005bec24: FSTP float ptr [ESP + 0x1ef0]
//   XREF to: Stack[-0x68] (WRITE)
// 005bec2b: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005bec30: ADD ESP,0x8
// 005bec33: MOV EAX,dword ptr [EDI + 0x8]
// 005bec36: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x1ee8] (WRITE)
// 005bec3a: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0x1ee8] (READ)
// 005bec3e: FST double ptr [ESP + 0x38]
//   XREF to: Stack[-0x1f18] (WRITE)
// 005bec42: FCOMP double ptr [0x00653864]
//   XREF to: 00653864 (READ)
// 005bec48: FNSTSW AX
// 005bec4a: SAHF
// 005bec4b: JNC 0x005bed0a
//   XREF to: 005bed0a (CONDITIONAL_JUMP)
// 005bec51: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x1f18] (READ)
// 005bec55: FMUL double ptr [0x00653874]
//   XREF to: 00653874 (READ)
// 005bec5b: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x1ef4] (WRITE)
// 005bec5f: FLD float ptr [ESP + 0x1f04]
//   Label: LAB_005bec5f
//   XREF to: Stack[-0x4c] (READ)
// 005bec66: LEA ESI,[ESP + 0x1c90]
//   XREF to: Stack[-0x2c0] (DATA)
// 005bec6d: SUB ESP,0x4
// 005bec70: FCHS
// 005bec72: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1f54] (DATA)
// 005bec75: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 005bec7a: ADD ESP,0x4
// 005bec7d: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bec82: MOV ECX,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005bec88: PUSH ECX
// 005bec89: LEA EAX,[ESP + 0x1d28]
//   XREF to: Stack[-0x230] (DATA)
// 005bec90: PUSH dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1ef4] (READ)
// 005bec94: LEA EDI,[ESP + 0x1d2c]
//   XREF to: Stack[-0x230] (DATA)
// 005bec9b: PUSH EAX
// 005bec9c: LEA EAX,[EBX + 0x158]
// 005beca2: LEA ESI,[ESP + 0x1ca0]
//   XREF to: Stack[-0x2c0] (DATA)
// 005beca9: PUSH EAX
// 005becaa: MOVSD ES:EDI,ESI
// 005becab: MOVSD ES:EDI,ESI
// 005becac: MOVSD ES:EDI,ESI
// 005becad: MOVSD ES:EDI,ESI
// 005becae: MOV dword ptr [ESP + 0x1f4c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005becb5: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005becba: ADD ESP,0x14
// 005becbd: LEA ESI,[ESP + 0x1d10]
//   XREF to: Stack[-0x240] (DATA)
// 005becc4: PUSH dword ptr [ESP + 0x1f08]
//   XREF to: Stack[-0x48] (READ)
// 005beccb: LEA EDI,[ESP + 0x1d74]
//   XREF to: Stack[-0x1e0] (DATA)
// 005becd2: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005becd7: LEA ESI,[ESP + 0x1d14]
//   XREF to: Stack[-0x240] (DATA)
// 005becde: ADD ESP,0x4
// 005bece1: MOVSD ES:EDI,ESI
// 005bece2: MOVSD ES:EDI,ESI
// 005bece3: MOVSD ES:EDI,ESI
// 005bece4: MOVSD ES:EDI,ESI
// 005bece5: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005becea: MOV EDI,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005becf0: PUSH EDI
// 005becf1: LEA EAX,[ESP + 0x1d78]
//   XREF to: Stack[-0x1e0] (DATA)
// 005becf8: PUSH dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1ef4] (READ)
// 005becfc: PUSH EAX
// 005becfd: MOV EAX,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005bed04: PUSH EAX
// 005bed05: JMP 0x005be799
//   XREF to: 005be799 (UNCONDITIONAL_JUMP)
// 005bed0a: FLD double ptr [ESP + 0x38]
//   Label: LAB_005bed0a
//   XREF to: Stack[-0x1f18] (READ)
// 005bed0e: FADD double ptr [0x0065386c]
//   XREF to: 0065386c (READ)
// 005bed14: FMUL double ptr [0x00653834]
//   XREF to: 00653834 (READ)
// 005bed1a: FLD1
// 005bed1c: FSUBRP
// 005bed1e: FST float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x1ef4] (WRITE)
// 005bed22: FLDZ
// 005bed24: FCOMPP
// 005bed26: FNSTSW AX
// 005bed28: SAHF
// 005bed29: JBE 0x005bec5f
//   XREF to: 005bec5f (CONDITIONAL_JUMP)
// 005bed2f: XOR EDX,EDX
// 005bed31: MOV dword ptr [ESP + 0x5c],EDX
//   XREF to: Stack[-0x1ef4] (WRITE)
// 005bed35: JMP 0x005bec5f
//   XREF to: 005bec5f (UNCONDITIONAL_JUMP)
// 005bed3a: LEA EAX,[EBX + 0x1fbc4]
//   Label: LAB_005bed3a
// 005bed40: PUSH EAX
// 005bed41: LEA EAX,[ESP + 0x1b24]
//   XREF to: Stack[-0x430] (DATA)
// 005bed48: PUSH EAX
// 005bed49: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 005bed4e: MOV AH,byte ptr [0x03f6baac]
//   XREF to: 03f6baac (READ)
// 005bed54: ADD ESP,0x8
// 005bed57: TEST AH,0x1
// 005bed5a: JZ 0x005befc3
//   XREF to: 005befc3 (CONDITIONAL_JUMP)
// 005bed60: MOV ESI,dword ptr [EBX + 0x1fbb4]
//   Label: LAB_005bed60
// 005bed66: TEST ESI,ESI
// 005bed68: JZ 0x005bee0e
//   XREF to: 005bee0e (CONDITIONAL_JUMP)
// 005bed6e: LEA EDX,[ESP + 0x1b48]
//   XREF to: Stack[-0x408] (DATA)
// 005bed75: PUSH EDX
// 005bed76: MOV EAX,ESI
// 005bed78: MOV ESI,dword ptr [ESI + 0x154]
// 005bed7e: PUSH EAX
// 005bed7f: CALL dword ptr [ESI + 0x14]
// 005bed82: LEA ESI,[EAX + 0xc]
// 005bed85: FLD float ptr [EAX]
// 005bed87: FADD float ptr [ESI]
// 005bed89: ADD ESP,0x8
// 005bed8c: FST float ptr [ESP + 0x1e80]
// 005bed93: FLD float ptr [EAX + 0x4]
// 005bed96: FADD float ptr [ESI + 0x4]
// 005bed99: FXCH
// 005bed9b: FLD float ptr [0x0065383c]
//   XREF to: 0065383c (READ)
// 005beda1: FXCH
// 005beda3: FMUL ST1
// 005beda5: FXCH ST2
// 005beda7: FST float ptr [ESP + 0x1e84]
// 005bedae: FLD float ptr [EAX + 0x8]
// 005bedb1: FADD float ptr [ESI + 0x8]
// 005bedb4: FXCH
// 005bedb6: FMUL ST2
// 005bedb8: FXCH
// 005bedba: FST float ptr [ESP + 0x1e88]
// 005bedc1: FMULP ST2
// 005bedc3: LEA EAX,[ESP + 0x1dd8]
// 005bedca: FXCH ST2
// 005bedcc: FSTP float ptr [ESP + 0x1dd8]
// 005bedd3: FXCH
// 005bedd5: FSTP float ptr [ESP + 0x1ddc]
// 005beddc: FSTP float ptr [ESP + 0x1de0]
// 005bede3: CMP EAX,0x3f6ba9c
//   XREF to: 03f6ba9c (DATA)
// 005bede8: JZ 0x005bee0e
//   XREF to: 005bee0e (CONDITIONAL_JUMP)
// 005bedea: MOV EAX,dword ptr [ESP + 0x1dd8]
// 005bedf1: MOV [0x03f6ba9c],EAX
//   XREF to: 03f6ba9c (WRITE)
// 005bedf6: MOV EAX,dword ptr [ESP + 0x1ddc]
// 005bedfd: MOV [0x03f6baa0],EAX
//   XREF to: 03f6baa0 (WRITE)
// 005bee02: MOV EAX,dword ptr [ESP + 0x1de0]
// 005bee09: MOV [0x03f6baa4],EAX
//   XREF to: 03f6baa4 (WRITE)
// 005bee0e: PUSH 0x3f6ba9c
//   Label: LAB_005bee0e
//   XREF to: 03f6ba9c (DATA)
// 005bee13: LEA EAX,[ESP + 0x1ef0]
//   XREF to: Stack[-0x64] (DATA)
// 005bee1a: PUSH EAX
// 005bee1b: LEA EAX,[ESP + 0x1b28]
//   XREF to: Stack[-0x430] (DATA)
// 005bee22: PUSH EAX
// 005bee23: LEA ESI,[EBX + 0x1fbb8]
// 005bee29: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 005bee2e: FLD float ptr [ESI]
// 005bee30: FADD float ptr [EAX]
// 005bee32: ADD ESP,0xc
// 005bee35: FSTP float ptr [ESP + 0x1e14]
// 005bee3c: FLD float ptr [ESI + 0x4]
// 005bee3f: FADD float ptr [EAX + 0x4]
// 005bee42: FSTP float ptr [ESP + 0x1e18]
// 005bee49: FLD float ptr [ESI + 0x8]
// 005bee4c: FADD float ptr [EAX + 0x8]
// 005bee4f: LEA EAX,[ESP + 0x1e14]
// 005bee56: PUSH EAX
// 005bee57: LEA EAX,[ESP + 0x1e30]
// 005bee5e: PUSH EAX
// 005bee5f: PUSH EBX
// 005bee60: FSTP float ptr [ESP + 0x1e28]
// 005bee67: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005bee6c: ADD ESP,0xc
// 005bee6f: MOV EDI,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005bee75: PUSH EDI
// 005bee76: LEA EAX,[ESP + 0x1e78]
// 005bee7d: PUSH EAX
// 005bee7e: LEA ESI,[EBX + 0x158]
// 005bee84: PUSH ESI
// 005bee85: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005bee8a: ADD ESP,0xc
// 005bee8d: LEA EAX,[ESP + 0x1e5c]
// 005bee94: FLD float ptr [ESP + 0x1e2c]
// 005bee9b: FLD float ptr [ESP + 0x1e30]
// 005beea2: FLD float ptr [ESP + 0x1e34]
// 005beea9: PUSH EAX
// 005beeaa: LEA EAX,[ESP + 0x1e3c]
// 005beeb1: FXCH ST2
// 005beeb3: FSUB float ptr [ESP + 0x1e78]
// 005beeba: FXCH
// 005beebc: FSUB float ptr [ESP + 0x1e7c]
// 005beec3: FXCH ST2
// 005beec5: FSUB float ptr [ESP + 0x1e80]
// 005beecc: FXCH
// 005beece: FSTP float ptr [ESP + 0x1e60]
// 005beed5: FXCH
// 005beed7: FSTP float ptr [ESP + 0x1e64]
// 005beede: PUSH EAX
// 005beedf: FSTP float ptr [ESP + 0x1e6c]
// 005beee6: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005beeeb: ADD ESP,0x8
// 005beeee: MOV EAX,dword ptr [ESI + 0x8]
// 005beef1: MOV dword ptr [ESP + 0x40],EAX
// 005beef5: FLD float ptr [ESP + 0x40]
// 005beef9: FST double ptr [ESP + 0x10]
// 005beefd: FCOMP double ptr [0x00653844]
//   XREF to: 00653844 (READ)
// 005bef03: FNSTSW AX
// 005bef05: SAHF
// 005bef06: JNC 0x005befd3
//   XREF to: 005befd3 (CONDITIONAL_JUMP)
// 005bef0c: FLD double ptr [ESP + 0x10]
// 005bef10: FMUL double ptr [0x0065385c]
//   XREF to: 0065385c (READ)
// 005bef16: FSTP float ptr [ESP + 0x78]
// 005bef1a: LEA ESI,[ESP + 0x1da0]
//   Label: LAB_005bef1a
// 005bef21: PUSH dword ptr [ESP + 0x1e38]
// 005bef28: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 005bef2d: ADD ESP,0x4
// 005bef30: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bef35: MOV EDX,dword ptr [0x03f6bb10]
//   XREF to: 03f6bb10 (READ)
// 005bef3b: PUSH EDX
// 005bef3c: LEA EAX,[ESP + 0x1cd8]
// 005bef43: PUSH dword ptr [ESP + 0x80]
// 005bef4a: LEA EDI,[ESP + 0x1cdc]
// 005bef51: PUSH EAX
// 005bef52: LEA EAX,[EBX + 0x158]
// 005bef58: LEA ESI,[ESP + 0x1db0]
// 005bef5f: PUSH EAX
// 005bef60: MOVSD ES:EDI,ESI
// 005bef61: MOVSD ES:EDI,ESI
// 005bef62: MOVSD ES:EDI,ESI
// 005bef63: MOVSD ES:EDI,ESI
// 005bef64: MOV dword ptr [ESP + 0x1f4c],EAX
// 005bef6b: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005bef70: ADD ESP,0x14
// 005bef73: LEA ESI,[ESP + 0x1be0]
// 005bef7a: PUSH dword ptr [ESP + 0x1e3c]
// 005bef81: LEA EDI,[ESP + 0x1ce4]
// 005bef88: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005bef8d: LEA ESI,[ESP + 0x1be4]
// 005bef94: ADD ESP,0x4
// 005bef97: MOVSD ES:EDI,ESI
// 005bef98: MOVSD ES:EDI,ESI
// 005bef99: MOVSD ES:EDI,ESI
// 005bef9a: MOVSD ES:EDI,ESI
// 005bef9b: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005befa0: MOV ESI,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005befa6: PUSH ESI
// 005befa7: LEA EAX,[ESP + 0x1ce8]
// 005befae: PUSH dword ptr [ESP + 0x80]
// 005befb5: PUSH EAX
// 005befb6: MOV EDI,dword ptr [ESP + 0x1f48]
// 005befbd: PUSH EDI
// 005befbe: JMP 0x005be799
//   XREF to: 005be799 (UNCONDITIONAL_JUMP)
// 005befc3: MOV DL,AH
//   Label: LAB_005befc3
// 005befc5: OR DL,0x1
// 005befc8: MOV byte ptr [0x03f6baac],DL
//   XREF to: 03f6baac (WRITE)
// 005befce: JMP 0x005bed60
//   XREF to: 005bed60 (UNCONDITIONAL_JUMP)
// 005befd3: FLD double ptr [ESP + 0x10]
//   Label: LAB_005befd3
// 005befd7: FADD double ptr [0x0065384c]
//   XREF to: 0065384c (READ)
// 005befdd: FMUL double ptr [0x00653854]
//   XREF to: 00653854 (READ)
// 005befe3: FLD1
// 005befe5: FSUBRP
// 005befe7: FST float ptr [ESP + 0x78]
// 005befeb: FLDZ
// 005befed: FCOMPP
// 005befef: FNSTSW AX
// 005beff1: SAHF
// 005beff2: JBE 0x005bef1a
//   XREF to: 005bef1a (CONDITIONAL_JUMP)
// 005beff8: XOR EAX,EAX
// 005beffa: MOV dword ptr [ESP + 0x78],EAX
// 005beffe: JMP 0x005bef1a
//   XREF to: 005bef1a (UNCONDITIONAL_JUMP)
// 005bf003: LEA EAX,[ESP + 0x1e44]
//   Label: LAB_005bf003
//   XREF to: Stack[-0x10c] (DATA)
// 005bf00a: PUSH EAX
// 005bf00b: MOV EAX,[0x03f6baa8]
//   XREF to: 03f6baa8 (READ)
// 005bf010: PUSH EAX
// 005bf011: CALL core_lever.cpp_FUN_00504dd0
//   XREF to: 00504dd0 (UNCONDITIONAL_CALL)
// 005bf016: ADD ESP,0x8
// 005bf019: PUSH EAX
// 005bf01a: LEA EAX,[ESP + 0x1e00]
//   XREF to: Stack[-0x154] (DATA)
// 005bf021: PUSH EAX
// 005bf022: PUSH EBX
// 005bf023: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005bf028: ADD ESP,0xc
// 005bf02b: CMP ESI,EAX
// 005bf02d: JZ 0x005be908
//   XREF to: 005be908 (CONDITIONAL_JUMP)
// 005bf033: MOV EDX,dword ptr [EAX]
// 005bf035: MOV dword ptr [ESI],EDX
// 005bf037: MOV EDX,dword ptr [EAX + 0x4]
// 005bf03a: MOV dword ptr [ESI + 0x4],EDX
// 005bf03d: MOV EDX,dword ptr [EAX + 0x8]
// 005bf040: MOV dword ptr [ESI + 0x8],EDX
// 005bf043: JMP 0x005be908
//   XREF to: 005be908 (UNCONDITIONAL_JUMP)
// 005bf048: FLD double ptr [ESP + 0x18]
//   Label: LAB_005bf048
//   XREF to: Stack[-0x1f38] (READ)
// 005bf04c: FCOMP double ptr [0x00653814]
//   XREF to: 00653814 (READ)
// 005bf052: FNSTSW AX
// 005bf054: SAHF
// 005bf055: JNC 0x005bf064
//   XREF to: 005bf064 (CONDITIONAL_JUMP)
// 005bf057: MOV dword ptr [ESP + 0x4c],0x3f800000
//   XREF to: Stack[-0x1f04] (WRITE)
// 005bf05f: JMP 0x005bea04
//   XREF to: 005bea04 (UNCONDITIONAL_JUMP)
// 005bf064: FLD double ptr [ESP + 0x18]
//   Label: LAB_005bf064
//   XREF to: Stack[-0x1f38] (READ)
// 005bf068: FADD double ptr [0x0065381c]
//   XREF to: 0065381c (READ)
// 005bf06e: FMUL double ptr [0x00653824]
//   XREF to: 00653824 (READ)
// 005bf074: FLD1
// 005bf076: FSUBRP
// 005bf078: FST float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1f04] (WRITE)
// 005bf07c: FLDZ
// 005bf07e: FCOMPP
// 005bf080: FNSTSW AX
// 005bf082: SAHF
// 005bf083: JBE 0x005bea04
//   XREF to: 005bea04 (CONDITIONAL_JUMP)
// 005bf089: XOR ESI,ESI
// 005bf08b: MOV dword ptr [ESP + 0x4c],ESI
//   XREF to: Stack[-0x1f04] (WRITE)
// 005bf08f: JMP 0x005bea04
//   XREF to: 005bea04 (UNCONDITIONAL_JUMP)
// 005bf094: CMP EAX,0x17
//   Label: LAB_005bf094
// 005bf097: JNZ 0x005bf179
//   XREF to: 005bf179 (CONDITIONAL_JUMP)
// 005bf09d: FLD float ptr [EDI + 0x8]
// 005bf0a0: FMUL double ptr [0x00653824]
//   XREF to: 00653824 (READ)
// 005bf0a6: FST float ptr [ESP + 0x58]
//   XREF to: Stack[-0x1ef8] (WRITE)
// 005bf0aa: FLD1
// 005bf0ac: FCOMPP
// 005bf0ae: FNSTSW AX
// 005bf0b0: SAHF
// 005bf0b1: JNC 0x005bf0bb
//   XREF to: 005bf0bb (CONDITIONAL_JUMP)
// 005bf0b3: MOV dword ptr [ESP + 0x58],0x3f800000
//   XREF to: Stack[-0x1ef8] (WRITE)
// 005bf0bb: FLD float ptr [EBX + 0x1fcb0]
//   Label: LAB_005bf0bb
// 005bf0c1: FDIV float ptr [0x00663778]
//   XREF to: 00663778 (READ)
// 005bf0c7: FLD1
// 005bf0c9: FPATAN
// 005bf0cb: LEA ESI,[ESP + 0x1b60]
//   XREF to: Stack[-0x3f0] (DATA)
// 005bf0d2: FSTP float ptr [ESP + 0x1f18]
//   XREF to: Stack[-0x38] (WRITE)
// 005bf0d9: PUSH dword ptr [ESP + 0x1f18]
//   XREF to: Stack[-0x38] (READ)
// 005bf0e0: LEA EDI,[ESP + 0x1c24]
//   XREF to: Stack[-0x330] (DATA)
// 005bf0e7: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005bf0ec: LEA ESI,[ESP + 0x1b64]
//   XREF to: Stack[-0x3f0] (DATA)
// 005bf0f3: ADD ESP,0x4
// 005bf0f6: MOVSD ES:EDI,ESI
// 005bf0f7: MOVSD ES:EDI,ESI
// 005bf0f8: MOVSD ES:EDI,ESI
// 005bf0f9: MOVSD ES:EDI,ESI
// 005bf0fa: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf0ff: MOV EDI,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005bf105: PUSH EDI
// 005bf106: LEA EAX,[ESP + 0x1c28]
//   XREF to: Stack[-0x330] (DATA)
// 005bf10d: PUSH dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x1ef8] (READ)
// 005bf111: PUSH EAX
// 005bf112: LEA EAX,[EBX + 0x158]
// 005bf118: PUSH EAX
// 005bf119: MOV dword ptr [ESP + 0x1f4c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005bf120: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005bf125: ADD ESP,0x14
// 005bf128: LEA ESI,[ESP + 0x1c40]
//   XREF to: Stack[-0x310] (DATA)
// 005bf12f: FLD float ptr [ESP + 0x1f18]
//   XREF to: Stack[-0x38] (READ)
// 005bf136: SUB ESP,0x4
// 005bf139: FCHS
// 005bf13b: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1f54] (DATA)
// 005bf13e: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005bf143: ADD ESP,0x4
// 005bf146: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf14b: MOV EDX,dword ptr [0x03f6bad8]
//   XREF to: 03f6bad8 (READ)
// 005bf151: PUSH EDX
// 005bf152: LEA EAX,[ESP + 0x1c28]
//   XREF to: Stack[-0x330] (DATA)
// 005bf159: PUSH dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x1ef8] (READ)
// 005bf15d: LEA EDI,[ESP + 0x1c2c]
//   XREF to: Stack[-0x330] (DATA)
// 005bf164: PUSH EAX
// 005bf165: MOV ECX,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005bf16c: LEA ESI,[ESP + 0x1c50]
//   XREF to: Stack[-0x310] (DATA)
// 005bf173: PUSH ECX
// 005bf174: JMP 0x005be795
//   XREF to: 005be795 (UNCONDITIONAL_JUMP)
// 005bf179: CMP EAX,0x18
//   Label: LAB_005bf179
// 005bf17c: JNZ 0x005bf3b1
//   XREF to: 005bf3b1 (CONDITIONAL_JUMP)
// 005bf182: MOV EAX,dword ptr [EDI + 0x8]
// 005bf185: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x1eec] (WRITE)
// 005bf189: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[-0x1eec] (READ)
// 005bf18d: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1f48] (WRITE)
// 005bf191: FCOMP double ptr [0x00653814]
//   XREF to: 00653814 (READ)
// 005bf197: FNSTSW AX
// 005bf199: SAHF
// 005bf19a: JNC 0x005bf398
//   XREF to: 005bf398 (CONDITIONAL_JUMP)
// 005bf1a0: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1f48] (READ)
// 005bf1a4: FMUL double ptr [0x00653824]
//   XREF to: 00653824 (READ)
// 005bf1aa: FSTP float ptr [ESP + 0x74]
//   Label: LAB_005bf1aa
//   XREF to: Stack[-0x1edc] (WRITE)
// 005bf1ae: FLD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x1edc] (READ)
// 005bf1b2: FLD1
// 005bf1b4: FCOMPP
// 005bf1b6: FNSTSW AX
// 005bf1b8: SAHF
// 005bf1b9: JNC 0x005bf1c3
//   XREF to: 005bf1c3 (CONDITIONAL_JUMP)
// 005bf1bb: MOV dword ptr [ESP + 0x74],0x3f800000
//   XREF to: Stack[-0x1edc] (WRITE)
// 005bf1c3: FLD float ptr [ESP + 0x74]
//   Label: LAB_005bf1c3
//   XREF to: Stack[-0x1edc] (READ)
// 005bf1c7: FLDZ
// 005bf1c9: FCOMPP
// 005bf1cb: FNSTSW AX
// 005bf1cd: SAHF
// 005bf1ce: JBE 0x005bf1d6
//   XREF to: 005bf1d6 (CONDITIONAL_JUMP)
// 005bf1d0: XOR EDX,EDX
// 005bf1d2: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x1edc] (WRITE)
// 005bf1d6: MOV ECX,dword ptr [0x03f6badc]
//   Label: LAB_005bf1d6
//   XREF to: 03f6badc (READ)
// 005bf1dc: PUSH ECX
// 005bf1dd: LEA EAX,[ESP + 0x1e90]
//   XREF to: Stack[-0xc4] (DATA)
// 005bf1e4: PUSH EAX
// 005bf1e5: LEA EAX,[EBX + 0x158]
// 005bf1eb: PUSH EAX
// 005bf1ec: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005bf1f1: FLD float ptr [EBX + 0x1fc9c]
// 005bf1f7: FADD float ptr [EBX + 0x1fcb4]
// 005bf1fd: ADD ESP,0xc
// 005bf200: FSUB float ptr [EBX + 0x1fca8]
// 005bf206: MOV ESI,dword ptr [EBX + 0x1fba0]
// 005bf20c: FSTP float ptr [ESP + 0x1f30]
//   XREF to: Stack[-0x20] (WRITE)
// 005bf213: TEST ESI,ESI
// 005bf215: JZ 0x005bf233
//   XREF to: 005bf233 (CONDITIONAL_JUMP)
// 005bf217: PUSH ESI
// 005bf218: CALL core_stranger.cpp_FUN_005bb010
//   XREF to: 005bb010 (UNCONDITIONAL_CALL)
// 005bf21d: MOV dword ptr [ESP + 0x1f3c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005bf224: MOV EAX,dword ptr [ESP + 0x1f3c]
//   XREF to: Stack[-0x18] (READ)
// 005bf22b: MOV [0x03f6bb64],EAX
//   XREF to: 03f6bb64 (WRITE)
// 005bf230: ADD ESP,0x4
// 005bf233: FLD float ptr [ESP + 0x1f30]
//   Label: LAB_005bf233
//   XREF to: Stack[-0x20] (READ)
// 005bf23a: FSUB float ptr [0x03f6bb64]
//   XREF to: 03f6bb64 (READ)
// 005bf240: FLD float ptr [ESP + 0x1e90]
//   XREF to: Stack[-0xc0] (READ)
// 005bf247: FXCH
// 005bf249: FSTP float ptr [ESP + 0x1f30]
//   XREF to: Stack[-0x20] (WRITE)
// 005bf250: FSUB float ptr [ESP + 0x1f30]
//   XREF to: Stack[-0x20] (READ)
// 005bf257: FLD float ptr [0x00663778]
//   XREF to: 00663778 (READ)
// 005bf25d: FXCH
// 005bf25f: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 005bf264: SUB ESP,0x4
// 005bf267: LEA ESI,[ESP + 0x1bd4]
//   XREF to: Stack[-0x380] (DATA)
// 005bf26e: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1f54] (DATA)
// 005bf271: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 005bf276: ADD ESP,0x4
// 005bf279: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf27e: MOV EAX,[0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005bf283: PUSH EAX
// 005bf284: PUSH dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1edc] (READ)
// 005bf288: LEA EAX,[ESP + 0x1ccc]
//   XREF to: Stack[-0x290] (DATA)
// 005bf28f: LEA EDI,[ESP + 0x1ccc]
//   XREF to: Stack[-0x290] (DATA)
// 005bf296: PUSH EAX
// 005bf297: LEA EAX,[EBX + 0x158]
// 005bf29d: LEA ESI,[ESP + 0x1be0]
//   XREF to: Stack[-0x380] (DATA)
// 005bf2a4: PUSH EAX
// 005bf2a5: MOVSD ES:EDI,ESI
// 005bf2a6: MOVSD ES:EDI,ESI
// 005bf2a7: MOVSD ES:EDI,ESI
// 005bf2a8: MOVSD ES:EDI,ESI
// 005bf2a9: MOV dword ptr [ESP + 0x1f4c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005bf2b0: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005bf2b5: ADD ESP,0x14
// 005bf2b8: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf2bd: MOV ECX,dword ptr [0x03f6bad8]
//   XREF to: 03f6bad8 (READ)
// 005bf2c3: PUSH ECX
// 005bf2c4: LEA EAX,[ESP + 0x1cc8]
//   XREF to: Stack[-0x290] (DATA)
// 005bf2cb: PUSH dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1edc] (READ)
// 005bf2cf: PUSH EAX
// 005bf2d0: MOV ESI,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005bf2d7: PUSH ESI
// 005bf2d8: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005bf2dd: FLD float ptr [EBX + 0x1fcb0]
// 005bf2e3: FDIV float ptr [0x00663778]
//   XREF to: 00663778 (READ)
// 005bf2e9: FLD1
// 005bf2eb: FPATAN
// 005bf2ed: ADD ESP,0x14
// 005bf2f0: LEA ESI,[ESP + 0x1c60]
//   XREF to: Stack[-0x2f0] (DATA)
// 005bf2f7: FSTP float ptr [ESP + 0x1f20]
//   XREF to: Stack[-0x30] (WRITE)
// 005bf2fe: PUSH dword ptr [ESP + 0x1f20]
//   XREF to: Stack[-0x30] (READ)
// 005bf305: LEA EDI,[ESP + 0x1db4]
//   XREF to: Stack[-0x1a0] (DATA)
// 005bf30c: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005bf311: LEA ESI,[ESP + 0x1c64]
//   XREF to: Stack[-0x2f0] (DATA)
// 005bf318: ADD ESP,0x4
// 005bf31b: MOVSD ES:EDI,ESI
// 005bf31c: MOVSD ES:EDI,ESI
// 005bf31d: MOVSD ES:EDI,ESI
// 005bf31e: MOVSD ES:EDI,ESI
// 005bf31f: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf324: MOV EDI,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005bf32a: PUSH EDI
// 005bf32b: LEA EAX,[ESP + 0x1db8]
//   XREF to: Stack[-0x1a0] (DATA)
// 005bf332: PUSH dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1edc] (READ)
// 005bf336: PUSH EAX
// 005bf337: MOV EAX,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005bf33e: PUSH EAX
// 005bf33f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005bf344: ADD ESP,0x14
// 005bf347: LEA ESI,[ESP + 0x1b90]
//   XREF to: Stack[-0x3c0] (DATA)
// 005bf34e: FLD float ptr [ESP + 0x1f20]
//   XREF to: Stack[-0x30] (READ)
// 005bf355: SUB ESP,0x4
// 005bf358: FCHS
// 005bf35a: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1f54] (DATA)
// 005bf35d: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005bf362: ADD ESP,0x4
// 005bf365: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf36a: MOV EDX,dword ptr [0x03f6bad8]
//   XREF to: 03f6bad8 (READ)
// 005bf370: PUSH EDX
// 005bf371: LEA EAX,[ESP + 0x1db8]
//   XREF to: Stack[-0x1a0] (DATA)
// 005bf378: PUSH dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1edc] (READ)
// 005bf37c: LEA EDI,[ESP + 0x1dbc]
//   XREF to: Stack[-0x1a0] (DATA)
// 005bf383: PUSH EAX
// 005bf384: MOV ECX,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005bf38b: LEA ESI,[ESP + 0x1ba0]
//   XREF to: Stack[-0x3c0] (DATA)
// 005bf392: PUSH ECX
// 005bf393: JMP 0x005be795
//   XREF to: 005be795 (UNCONDITIONAL_JUMP)
// 005bf398: FLD double ptr [ESP + 0x8]
//   Label: LAB_005bf398
//   XREF to: Stack[-0x1f48] (READ)
// 005bf39c: FADD double ptr [0x0065381c]
//   XREF to: 0065381c (READ)
// 005bf3a2: FMUL double ptr [0x00653824]
//   XREF to: 00653824 (READ)
// 005bf3a8: FLD1
// 005bf3aa: FSUBRP
// 005bf3ac: JMP 0x005bf1aa
//   XREF to: 005bf1aa (UNCONDITIONAL_JUMP)
// 005bf3b1: CMP EAX,0x19
//   Label: LAB_005bf3b1
// 005bf3b4: JNZ 0x005bf4b7
//   XREF to: 005bf4b7 (CONDITIONAL_JUMP)
// 005bf3ba: FLD float ptr [EDI + 0x8]
// 005bf3bd: FADD double ptr [0x0065381c]
//   XREF to: 0065381c (READ)
// 005bf3c3: FMUL double ptr [0x00653824]
//   XREF to: 00653824 (READ)
// 005bf3c9: FLD1
// 005bf3cb: FSUBRP
// 005bf3cd: FST float ptr [ESP + 0x44]
//   XREF to: Stack[-0x1f0c] (WRITE)
// 005bf3d1: FLDZ
// 005bf3d3: FCOMPP
// 005bf3d5: FNSTSW AX
// 005bf3d7: SAHF
// 005bf3d8: JBE 0x005bf3e0
//   XREF to: 005bf3e0 (CONDITIONAL_JUMP)
// 005bf3da: XOR EDI,EDI
// 005bf3dc: MOV dword ptr [ESP + 0x44],EDI
//   XREF to: Stack[-0x1f0c] (WRITE)
// 005bf3e0: FLD float ptr [ESP + 0x44]
//   Label: LAB_005bf3e0
//   XREF to: Stack[-0x1f0c] (READ)
// 005bf3e4: FLD1
// 005bf3e6: FCOMPP
// 005bf3e8: FNSTSW AX
// 005bf3ea: SAHF
// 005bf3eb: JNC 0x005bf3f5
//   XREF to: 005bf3f5 (CONDITIONAL_JUMP)
// 005bf3ed: MOV dword ptr [ESP + 0x44],0x3f800000
//   XREF to: Stack[-0x1f0c] (WRITE)
// 005bf3f5: FLD float ptr [EBX + 0x1fcb0]
//   Label: LAB_005bf3f5
// 005bf3fb: FDIV float ptr [0x00663778]
//   XREF to: 00663778 (READ)
// 005bf401: FLD1
// 005bf403: FPATAN
// 005bf405: LEA ESI,[ESP + 0x1cf0]
//   XREF to: Stack[-0x260] (DATA)
// 005bf40c: FSTP float ptr [ESP + 0x1f1c]
//   XREF to: Stack[-0x34] (WRITE)
// 005bf413: PUSH dword ptr [ESP + 0x1f1c]
//   XREF to: Stack[-0x34] (READ)
// 005bf41a: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005bf41f: ADD ESP,0x4
// 005bf422: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf427: MOV EDX,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005bf42d: PUSH EDX
// 005bf42e: LEA EDI,[ESP + 0x1d68]
//   XREF to: Stack[-0x1f0] (DATA)
// 005bf435: LEA EAX,[ESP + 0x1d68]
//   XREF to: Stack[-0x1f0] (DATA)
// 005bf43c: PUSH dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1f0c] (READ)
// 005bf440: LEA ESI,[ESP + 0x1cfc]
//   XREF to: Stack[-0x260] (DATA)
// 005bf447: PUSH EAX
// 005bf448: LEA EAX,[EBX + 0x158]
// 005bf44e: MOVSD ES:EDI,ESI
// 005bf44f: MOVSD ES:EDI,ESI
// 005bf450: MOVSD ES:EDI,ESI
// 005bf451: MOVSD ES:EDI,ESI
// 005bf452: PUSH EAX
// 005bf453: LEA ESI,[ESP + 0x1d44]
//   XREF to: Stack[-0x220] (DATA)
// 005bf45a: MOV dword ptr [ESP + 0x1f4c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005bf461: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005bf466: ADD ESP,0x14
// 005bf469: LEA EDI,[ESP + 0x1d60]
//   XREF to: Stack[-0x1f0] (DATA)
// 005bf470: FLD float ptr [ESP + 0x1f1c]
//   XREF to: Stack[-0x34] (READ)
// 005bf477: SUB ESP,0x4
// 005bf47a: FCHS
// 005bf47c: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1f54] (DATA)
// 005bf47f: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005bf484: LEA ESI,[ESP + 0x1d34]
//   XREF to: Stack[-0x220] (DATA)
// 005bf48b: ADD ESP,0x4
// 005bf48e: MOVSD ES:EDI,ESI
// 005bf48f: MOVSD ES:EDI,ESI
// 005bf490: MOVSD ES:EDI,ESI
// 005bf491: MOVSD ES:EDI,ESI
// 005bf492: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf497: MOV ESI,dword ptr [0x03f6bad8]
//   XREF to: 03f6bad8 (READ)
// 005bf49d: PUSH ESI
// 005bf49e: LEA EAX,[ESP + 0x1d68]
//   XREF to: Stack[-0x1f0] (DATA)
// 005bf4a5: PUSH dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1f0c] (READ)
// 005bf4a9: PUSH EAX
// 005bf4aa: MOV EDI,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005bf4b1: PUSH EDI
// 005bf4b2: JMP 0x005be799
//   XREF to: 005be799 (UNCONDITIONAL_JUMP)
// 005bf4b7: CMP EAX,0x1a
//   Label: LAB_005bf4b7
// 005bf4ba: JNZ 0x005be7a1
//   XREF to: 005be7a1 (CONDITIONAL_JUMP)
// 005bf4c0: MOV EAX,dword ptr [EDI + 0x8]
// 005bf4c3: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x1ed0] (WRITE)
// 005bf4ca: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x1ed0] (READ)
// 005bf4d1: FST double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1f30] (WRITE)
// 005bf4d5: FCOMP double ptr [0x00653814]
//   XREF to: 00653814 (READ)
// 005bf4db: FNSTSW AX
// 005bf4dd: SAHF
// 005bf4de: JC 0x005bf695
//   XREF to: 005bf695 (CONDITIONAL_JUMP)
// 005bf4e4: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1f30] (READ)
// 005bf4e8: FADD double ptr [0x0065381c]
//   XREF to: 0065381c (READ)
// 005bf4ee: FMUL double ptr [0x00653824]
//   XREF to: 00653824 (READ)
// 005bf4f4: FLD1
// 005bf4f6: FSUBRP
// 005bf4f8: FSTP float ptr [ESP + 0x60]
//   Label: LAB_005bf4f8
//   XREF to: Stack[-0x1ef0] (WRITE)
// 005bf4fc: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0x1ef0] (READ)
// 005bf500: FLD1
// 005bf502: FCOMPP
// 005bf504: FNSTSW AX
// 005bf506: SAHF
// 005bf507: JNC 0x005bf511
//   XREF to: 005bf511 (CONDITIONAL_JUMP)
// 005bf509: MOV dword ptr [ESP + 0x60],0x3f800000
//   XREF to: Stack[-0x1ef0] (WRITE)
// 005bf511: FLD float ptr [ESP + 0x60]
//   Label: LAB_005bf511
//   XREF to: Stack[-0x1ef0] (READ)
// 005bf515: FLDZ
// 005bf517: FCOMPP
// 005bf519: FNSTSW AX
// 005bf51b: SAHF
// 005bf51c: JBE 0x005bf524
//   XREF to: 005bf524 (CONDITIONAL_JUMP)
// 005bf51e: XOR ESI,ESI
// 005bf520: MOV dword ptr [ESP + 0x60],ESI
//   XREF to: Stack[-0x1ef0] (WRITE)
// 005bf524: MOV EDI,dword ptr [0x03f6badc]
//   Label: LAB_005bf524
//   XREF to: 03f6badc (READ)
// 005bf52a: PUSH EDI
// 005bf52b: LEA EAX,[ESP + 0x1de8]
//   XREF to: Stack[-0x16c] (DATA)
// 005bf532: PUSH EAX
// 005bf533: LEA EAX,[EBX + 0x158]
// 005bf539: PUSH EAX
// 005bf53a: MOV dword ptr [ESP + 0x1f44],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005bf541: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005bf546: ADD ESP,0xc
// 005bf549: FLD float ptr [EBX + 0x1fc9c]
// 005bf54f: FSUBR float ptr [ESP + 0x1de8]
//   XREF to: Stack[-0x168] (READ)
// 005bf556: FLD float ptr [0x00663778]
//   XREF to: 00663778 (READ)
// 005bf55c: FXCH
// 005bf55e: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 005bf563: SUB ESP,0x4
// 005bf566: LEA ESI,[ESP + 0x1c14]
//   XREF to: Stack[-0x340] (DATA)
// 005bf56d: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1f54] (DATA)
// 005bf570: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 005bf575: ADD ESP,0x4
// 005bf578: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf57d: MOV EDX,dword ptr [0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005bf583: PUSH EDX
// 005bf584: LEA EAX,[ESP + 0x1b78]
//   XREF to: Stack[-0x3e0] (DATA)
// 005bf58b: PUSH dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x1ef0] (READ)
// 005bf58f: LEA EDI,[ESP + 0x1b7c]
//   XREF to: Stack[-0x3e0] (DATA)
// 005bf596: PUSH EAX
// 005bf597: MOV ECX,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005bf59e: LEA ESI,[ESP + 0x1c20]
//   XREF to: Stack[-0x340] (DATA)
// 005bf5a5: PUSH ECX
// 005bf5a6: MOVSD ES:EDI,ESI
// 005bf5a7: MOVSD ES:EDI,ESI
// 005bf5a8: MOVSD ES:EDI,ESI
// 005bf5a9: MOVSD ES:EDI,ESI
// 005bf5aa: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005bf5af: ADD ESP,0x14
// 005bf5b2: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf5b7: MOV ESI,dword ptr [0x03f6bad8]
//   XREF to: 03f6bad8 (READ)
// 005bf5bd: PUSH ESI
// 005bf5be: LEA EAX,[ESP + 0x1b78]
//   XREF to: Stack[-0x3e0] (DATA)
// 005bf5c5: PUSH dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x1ef0] (READ)
// 005bf5c9: PUSH EAX
// 005bf5ca: MOV EDI,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005bf5d1: PUSH EDI
// 005bf5d2: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005bf5d7: FLD float ptr [EBX + 0x1fcb0]
// 005bf5dd: FDIV float ptr [0x00663778]
//   XREF to: 00663778 (READ)
// 005bf5e3: FLD1
// 005bf5e5: FPATAN
// 005bf5e7: ADD ESP,0x14
// 005bf5ea: LEA ESI,[ESP + 0x1d50]
//   XREF to: Stack[-0x200] (DATA)
// 005bf5f1: FSTP float ptr [ESP + 0x1f24]
//   XREF to: Stack[-0x2c] (WRITE)
// 005bf5f8: PUSH dword ptr [ESP + 0x1f24]
//   XREF to: Stack[-0x2c] (READ)
// 005bf5ff: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005bf604: ADD ESP,0x4
// 005bf607: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf60c: MOV EAX,[0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005bf611: PUSH EAX
// 005bf612: PUSH dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x1ef0] (READ)
// 005bf616: LEA EAX,[ESP + 0x1d4c]
//   XREF to: Stack[-0x210] (DATA)
// 005bf61d: LEA EDI,[ESP + 0x1d4c]
//   XREF to: Stack[-0x210] (DATA)
// 005bf624: PUSH EAX
// 005bf625: MOV EDX,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005bf62c: LEA ESI,[ESP + 0x1d60]
//   XREF to: Stack[-0x200] (DATA)
// 005bf633: PUSH EDX
// 005bf634: MOVSD ES:EDI,ESI
// 005bf635: MOVSD ES:EDI,ESI
// 005bf636: MOVSD ES:EDI,ESI
// 005bf637: MOVSD ES:EDI,ESI
// 005bf638: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20
//   XREF to: 0059ff20 (UNCONDITIONAL_CALL)
// 005bf63d: ADD ESP,0x14
// 005bf640: LEA ESI,[ESP + 0x1c00]
//   XREF to: Stack[-0x350] (DATA)
// 005bf647: FLD float ptr [ESP + 0x1f24]
//   XREF to: Stack[-0x2c] (READ)
// 005bf64e: SUB ESP,0x4
// 005bf651: FCHS
// 005bf653: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1f54] (DATA)
// 005bf656: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005bf65b: ADD ESP,0x4
// 005bf65e: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf663: MOV ECX,dword ptr [0x03f6bad8]
//   XREF to: 03f6bad8 (READ)
// 005bf669: LEA EDI,[ESP + 0x1d44]
//   XREF to: Stack[-0x210] (DATA)
// 005bf670: PUSH ECX
// 005bf671: LEA ESI,[ESP + 0x1c08]
//   XREF to: Stack[-0x350] (DATA)
// 005bf678: LEA EAX,[ESP + 0x1d48]
//   XREF to: Stack[-0x210] (DATA)
// 005bf67f: PUSH dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x1ef0] (READ)
// 005bf683: MOVSD ES:EDI,ESI
// 005bf684: MOVSD ES:EDI,ESI
// 005bf685: MOVSD ES:EDI,ESI
// 005bf686: MOVSD ES:EDI,ESI
// 005bf687: PUSH EAX
// 005bf688: MOV ESI,dword ptr [ESP + 0x1f48]
//   XREF to: Stack[-0x18] (READ)
// 005bf68f: PUSH ESI
// 005bf690: JMP 0x005be799
//   XREF to: 005be799 (UNCONDITIONAL_JUMP)
// 005bf695: FLD double ptr [ESP + 0x20]
//   Label: LAB_005bf695
//   XREF to: Stack[-0x1f30] (READ)
// 005bf699: FMUL double ptr [0x00653824]
//   XREF to: 00653824 (READ)
// 005bf69f: JMP 0x005bf4f8
//   XREF to: 005bf4f8 (UNCONDITIONAL_JUMP)
// 005bf6a4: PUSH 0x1
//   Label: LAB_005bf6a4
// 005bf6a6: PUSH 0x6537f0
//   XREF to: 006537f0 (DATA)
// 005bf6ab: LEA ESI,[EBX + 0x158]
// 005bf6b1: PUSH ESI
// 005bf6b2: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005bf6b7: ADD ESP,0x4
// 005bf6ba: PUSH EAX
// 005bf6bb: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 005bf6c0: ADD ESP,0xc
// 005bf6c3: PUSH 0x3f800000
// 005bf6c8: PUSH EAX
// 005bf6c9: PUSH ESI
// 005bf6ca: MOV EDI,EAX
// 005bf6cc: CALL core_motion.cpp_CMotionController_FUN_0052e3a0
//   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)
// 005bf6d1: MOV dword ptr [ESP + 0x1f44],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005bf6d8: FLD float ptr [ESP + 0x1f44]
//   XREF to: Stack[-0x18] (READ)
// 005bf6df: ADD ESP,0xc
// 005bf6e2: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005bf6e7: MOV EAX,[0x03f6bb0c]
//   XREF to: 03f6bb0c (READ)
// 005bf6ec: PUSH EAX
// 005bf6ed: PUSH dword ptr [EBX + 0x1fc44]
// 005bf6f3: FSTP float ptr [ESP + 0x1f34]
//   XREF to: Stack[-0x28] (WRITE)
// 005bf6fa: PUSH dword ptr [ESP + 0x1f34]
//   XREF to: Stack[-0x28] (READ)
// 005bf701: PUSH EDI
// 005bf702: PUSH ESI
// 005bf703: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 005bf708: ADD ESP,0x18
// 005bf70b: MOV ESP,EBP
// 005bf70d: POP EBP
// 005bf70e: POP EDI
// 005bf70f: POP ESI
// 005bf710: POP EBX
// 005bf711: RET
