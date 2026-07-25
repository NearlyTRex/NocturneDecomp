// Name: FUN_00543c50
// Address: 00543c50
// Address Range: [[00543c50, 0054443c]]
// Convention: unknown
// Signature: void FUN_00543c50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543c50(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float local_258;
  float fStack_254;
  uint auStack_250 [12];
  uint auStack_220 [12];
  uint auStack_1f0 [12];
  uint auStack_1c0 [12];
  byte auStack_190 [48];
  byte auStack_160 [48];
  uint auStack_130 [12];
  uint auStack_100 [12];
  uint auStack_d0 [12];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  byte auStack_94 [12];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  uint uStack_74;
  byte auStack_70 [12];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  byte auStack_58 [12];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int local_28;
  int local_24;
  float *local_20;
  int local_1c;
  float fStack_18;
  
  bVar8 = 0;
  iVar3 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar3 != 0) {
    local_24 = param_1 + 0x30;
    local_258 = param_2 * *(float *)(param_1 + 0xbc8c);
    local_28 = param_1 + 0xbd64;
    local_20 = (float *)(param_1 + 0x20);
    local_1c = param_1 + 0x150;
    while (0.0 < local_258) {
      uVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(local_1c,&local_258);
      if (99 < uVar5) {
        if (uVar5 < 0x65) {
          iVar3 = *(int *)(param_1 + 0xbca4);
          if ((iVar3 != 0) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0xec))(iVar3), iVar3 == 0)) {
            core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(local_1c);
            core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_00544760(param_1);
            puVar6 = auStack_1c0;
            puVar7 = auStack_1f0;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
            }
            uVar4 = core_xform_cpp_getTranslation_FUN_0055bc00(auStack_1f0,auStack_94);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&fStack_a0,uVar4);
            iVar3 = *(int *)(param_1 + 0xbca4);
            fStack_4c = fStack_a0 - *(float *)(iVar3 + 0x20);
            fStack_48 = fStack_9c - *(float *)(iVar3 + 0x24);
            fStack_44 = fStack_98 - *(float *)(iVar3 + 0x28);
            if (((ABS(fStack_48) <= (float)6) &&
                (fStack_4c * fStack_4c + fStack_44 * fStack_44 <= (float)16)) &&
               (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe4))
                                  (*(int *)(param_1 + 0xbca4),param_1,1), iVar3 != 0)) {
              *(uint *)(param_1 + 0xbd30) = 0;
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                        (auStack_160,*(int *)(param_1 + 0xbca4) + 0x20,
                         *(int *)(param_1 + 0xbca4) + 0x30);
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
                        (auStack_190,local_20,local_24);
              core_xform_cpp_inverse_FUN_0055bd00(auStack_1f0);
              puVar6 = auStack_220;
              puVar7 = auStack_250;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_160,auStack_190,auStack_250);
              puVar6 = auStack_d0;
              puVar7 = auStack_130;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_130);
              puVar6 = auStack_100;
              puVar7 = (uint *)(param_1 + 0xbd34);
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              puVar6 = (uint *)(param_1 + 0xbd34);
              puVar7 = (uint *)(param_1 + 0xbd64);
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              core_xform_cpp_clearTranslation_FUN_0055ae60(local_28);
              iVar3 = 0;
              do {
                uStack_7c = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0xc0e00000,0x40e00000);
                fStack_18 = (float)uStack_7c;
                uStack_74 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0xc0e00000,0x40e00000);
                fStack_18 = (float)uStack_74;
                fStack_78 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                             (0xbf800000,0x41700000);
                iVar3 = iVar3 + 1;
                fStack_18 = fStack_78;
                core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
                          (INT_005b96c4,&fStack_a0,&uStack_7c,
                           *(uint *)(*(int *)(param_1 + 0xbca4) + 0x2608));
              } while (iVar3 < 0x46);
            }
          }
        }
        else if (((uVar5 == 0x65) && (iVar3 = *(int *)(param_1 + 0xbca4), iVar3 != 0)) &&
                (iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0xec))(iVar3), iVar3 == param_1)) {
          *(uint *)(*(int *)(param_1 + 0xbca4) + 0x70) = 2;
        }
      }
    }
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(local_1c);
    uVar5 = *(uint *)(iVar3 + 0x24);
    if (uVar5 < 2) {
      if (uVar5 == 0) {
        *(uint *)(param_1 + 0xbd28) = 0;
        if (0.0 < *(float *)(param_1 + 0xbd24)) {
          *(float *)(param_1 + 0xbd24) = *(float *)(param_1 + 0xbd24) - param_2;
        }
        if (*(float *)(param_1 + 0xbd24) <= 0.0) {
          if (*(int *)(param_1 + 0xbd2c) == 0) {
            iVar3 = core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_005444f0
                              (param_1,"CEnemy CHero CNPC");
            if (iVar3 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,2,1);
              *(uint *)(param_1 + 0xbd24) = 0;
            }
          }
          else {
            iVar3 = core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_005444f0
                              (param_1,"CHero CNPC");
            if (iVar3 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,2,1);
              *(uint *)(param_1 + 0xbd24) = 0;
              core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0(*(uint *)(param_1 + 0xbd2c));
              *(uint *)(param_1 + 0xbd2c) = 0;
            }
          }
        }
      }
    }
    else if (uVar5 < 3) {
      fVar1 = *(float *)(param_1 + 0xbd28) + param_2;
      *(float *)(param_1 + 0xbd28) = fVar1;
      if (fVar1 < (float)25) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        iVar3 = *(int *)(param_1 + 0xbca4);
        if (iVar3 != 0) {
          fStack_88 = *(float *)(iVar3 + 0x20) - *local_20;
          fStack_84 = *(float *)(iVar3 + 0x24) - local_20[1];
          fStack_80 = *(float *)(iVar3 + 0x28) - local_20[2];
          iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                            (auStack_70,&fStack_88);
          fStack_254 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                        (*(float *)(iVar3 + 4) - *(float *)(param_1 + 0x34));
          fStack_2c = param_2 * (float)0.78539816337500001;
          *(float *)(param_1 + 0x2410) = fStack_254;
          fStack_38 = -fStack_2c;
          if (*(float *)(param_1 + 0x2410) < fStack_38) {
            *(float *)(param_1 + 0x2410) = fStack_38;
          }
          if (fStack_2c < *(float *)(param_1 + 0x2410)) {
            *(float *)(param_1 + 0x2410) = fStack_2c;
          }
          fStack_18 = fStack_254;
          if ((float)5 < *(float *)(param_1 + 0xbd28)) {
            iVar3 = *(int *)(param_1 + 0xbca4);
            fVar1 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
            fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
            fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
            if (((fStack_254 < (float)0.17453292519444399) &&
                (ABS(*(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24)) < (float)4
                )) && ((float)7 < fVar1 && fVar1 < (float)12)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,6,1);
              *(uint *)(param_1 + 0xbd24) = 0x41c80000;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_1c,0,1);
        *(uint *)(param_1 + 0xbd24) = 0x41c80000;
      }
    }
    else if ((((uVar5 == 6) && (iVar3 = *(int *)(param_1 + 0xbca4), iVar3 != 0)) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3), iVar3 < 1)) &&
            (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))
                               (*(int *)(param_1 + 0xbca4)), iVar3 == 0)) {
      iVar3 = *(int *)(param_1 + 0xbca4);
      fStack_64 = *(float *)(iVar3 + 0x20) - *local_20;
      fStack_60 = *(float *)(iVar3 + 0x24) - local_20[1];
      fStack_5c = *(float *)(iVar3 + 0x28) - local_20[2];
      iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                        (auStack_58,&fStack_64);
      fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                   (*(float *)(iVar3 + 4) - *(float *)(param_1 + 0x34));
      fStack_30 = param_2 * (float)1.04719755116667;
      *(float *)(param_1 + 0x2410) = fStack_18;
      fStack_34 = -fStack_30;
      if (fStack_18 < fStack_34) {
        *(float *)(param_1 + 0x2410) = fStack_34;
      }
      if (fStack_30 < *(float *)(param_1 + 0x2410)) {
        *(float *)(param_1 + 0x2410) = fStack_30;
      }
    }
    fVar1 = param_2 / _DAT_005a30f8 + *(float *)(param_1 + 0xbd30);
    *(float *)(param_1 + 0xbd30) = fVar1;
    if (1.0 < fVar1) {
      *(uint *)(param_1 + 0xbd30) = 0x3f800000;
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
    core_charactr_cpp_FUN_0042a150(param_1,param_2);
  }
  return;
}
