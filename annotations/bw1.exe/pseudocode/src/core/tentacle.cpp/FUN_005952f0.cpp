// Name: core_tentacle.cpp_FUN_005952f0
// Address: 005952f0
// Address Range: [[005952f0, 00595b76]]
// Convention: unknown
// Signature: void core_tentacle_cpp_FUN_005952f0(CTentacle *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tentacle_cpp_FUN_005952f0(CTentacle *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  SMotion *pSVar4;
  CTentacle *pCVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_10dc [903];
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  CMatrix3x4f aCStack_244 [48];
  uint auStack_214 [12];
  uint auStack_1e4 [12];
  uint auStack_1b4 [12];
  CMatrix3x4f aCStack_184 [48];
  uint auStack_154 [12];
  uint auStack_124 [12];
  uint uStack_f4;
  float afStack_f0 [5];
  uint uStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  uint uStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  byte auStack_ac [12];
  float fStack_a0;
  float afStack_9c [5];
  float afStack_88 [3];
  float afStack_7c [3];
  float fStack_70;
  uint uStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [5];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f *pCStack_24;
  byte *puStack_20;
  CVector3f *pCStack_1c;
  CDeformableModelInstance *pCStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar3 != 0) {
    pCStack_24 = (CVector3f *)&param_1->field_0x30;
    fStack_2a8 = param_2 * *(float *)&param_1->field_0xc1d0;
    puStack_20 = &param_1->field_0xc2a8;
    pCStack_1c = (CVector3f *)&param_1->field_0x20;
    pCStack_18 = (CDeformableModelInstance *)&param_1->field_0x158;
    while (0.0 < fStack_2a8) {
      uVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270
                        ((CMotionController *)pCStack_18,&stack0xfffffd58);
      if (99 < uVar6) {
        if (uVar6 < 0x65) {
          iVar3 = *(int *)&param_1->field_0xc1e8;
          if ((iVar3 != 0) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), iVar3 == 0)) {
            core_skeleton_cpp_FUN_00569180(pCStack_18);
            core_tentacle_cpp_FUN_00595f10(param_1);
            puVar7 = (uint *)&stack0xfffffd5c;
            puVar8 = auStack_124;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
              puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
            }
            core_xform_cpp_FUN_005b6270(auStack_124);
            puVar7 = &uStack_f4;
            uStack_f4 = uStack_c4;
            afStack_f0[(uint)bVar9 * -2] = afStack_f0[(uint)bVar9 * -2 + 0xc];
            afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
            core_actor_cpp_FUN_00408b40(param_1,puVar7);
            fStack_4c = fStack_70;
            afStack_48[(uint)bVar9 * -2] = afStack_9c[(uint)bVar9 * -2 + 0xc];
            afStack_48[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                 afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd];
            iVar3 = *(int *)&param_1->field_0xc1e8;
            fStack_58 = fStack_4c - *(float *)(iVar3 + 0x20);
            fStack_54 = afStack_48[0] - *(float *)(iVar3 + 0x24);
            fStack_50 = afStack_48[1] - *(float *)(iVar3 + 0x28);
            fStack_d0 = fStack_58;
            afStack_f0[(uint)bVar9 * -2 + 9] = afStack_9c[(uint)bVar9 * -2 + 0x12];
            afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
                 afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
            if (((ABS(fStack_cc) <= (float)_DAT_005f775e) &&
                (fStack_d0 * fStack_d0 + fStack_c8 * fStack_c8 <= (float)_DAT_005f7766)) &&
               (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xec))(iVar3,param_1,1), iVar3 != 0))
            {
              *(uint *)&param_1->field_0xc274 = 0;
              core_xform_cpp_FUN_005b5760
                        (aCStack_184,(CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),
                         (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x30));
              core_xform_cpp_FUN_005b5620(aCStack_244,pCStack_1c,pCStack_24);
              core_xform_cpp_FUN_005b6380(auStack_124);
              puVar7 = auStack_1b4;
              puVar8 = auStack_154;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(aCStack_184,aCStack_244,auStack_154);
              puVar7 = auStack_214;
              puVar8 = auStack_1e4;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(auStack_1e4);
              puVar7 = (uint *)&stack0xfffffd8c;
              puVar8 = (uint *)&param_1->field_0xc278;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              puVar7 = (uint *)&param_1->field_0xc278;
              puVar8 = (uint *)&param_1->field_0xc2a8;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
                puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
              }
              core_xform_cpp_clearTranslation_FUN_005b5600(puStack_20);
              iVar3 = 0;
              do {
                auStack_ac._0_4_ = core_actor_cpp_FUN_0040cc00(0xc0e00000,0x40e00000);
                fStack_14 = (float)auStack_ac._0_4_;
                auStack_ac._8_4_ = core_actor_cpp_FUN_0040cc00(0xc0e00000,0x40e00000);
                fStack_14 = (float)auStack_ac._8_4_;
                auStack_ac._4_4_ = core_actor_cpp_FUN_0040cc00(0xbf800000,0x41700000);
                iVar3 = iVar3 + 1;
                fStack_14 = (float)auStack_ac._4_4_;
                core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40
                          (g_CGorePtr,(CVector3f *)&fStack_4c,(CVector3f *)auStack_ac,
                           *(EBloodType *)(*(int *)&param_1->field_0xc1e8 + 0x27a0));
              } while (iVar3 < 0x46);
            }
          }
        }
        else if (((uVar6 == 0x65) && (iVar3 = *(int *)&param_1->field_0xc1e8, iVar3 != 0)) &&
                (pCVar5 = (CTentacle *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3),
                pCVar5 == param_1)) {
          *(uint *)(*(int *)&param_1->field_0xc1e8 + 0x70) = 2;
        }
      }
    }
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)pCStack_18);
    uVar6 = *(uint *)(pSVar4 + 0x24);
    if (uVar6 < 2) {
      if (uVar6 == 0) {
        *(uint *)&param_1->field_0xc26c = 0;
        if (0.0 < *(float *)&param_1->field_0xc268) {
          *(float *)&param_1->field_0xc268 = *(float *)&param_1->field_0xc268 - param_2;
        }
        if (*(float *)&param_1->field_0xc268 <= 0.0) {
          if (*(int *)&param_1->field_0xc270 == 0) {
            iVar3 = core_tentacle_cpp_FUN_00595c40(param_1,"CEnemy CHero CNPC");
            if (iVar3 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,2,1);
              *(uint *)&param_1->field_0xc268 = 0;
            }
          }
          else {
            iVar3 = core_tentacle_cpp_FUN_00595c40(param_1,"CHero CNPC");
            if (iVar3 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,2,1);
              *(uint *)&param_1->field_0xc268 = 0;
              core_grave_cpp_CGrave_startAnimation_FUN_004e6bf0(*(CGrave **)&param_1->field_0xc270);
              *(uint *)&param_1->field_0xc270 = 0;
            }
          }
        }
      }
    }
    else if (uVar6 < 3) {
      fVar1 = *(float *)&param_1->field_0xc26c + param_2;
      *(float *)&param_1->field_0xc26c = fVar1;
      if (fVar1 < (float)_DAT_005f7726) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        iVar3 = *(int *)&param_1->field_0xc1e8;
        if (iVar3 != 0) {
          fStack_b8 = *(float *)(iVar3 + 0x20) - *(float *)pCStack_1c;
          fStack_b4 = *(float *)(iVar3 + 0x24) - *(float *)&pCStack_1c->field_0x4;
          fStack_b0 = *(float *)(iVar3 + 0x28) - *(float *)&pCStack_1c->field_0x8;
          afStack_7c[0] = fStack_b8;
          afStack_9c[(uint)bVar9 * -2 + 9] = afStack_f0[(uint)bVar9 * -2 + 0xf];
          afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
               afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
          core_vecdir_cpp_FUN_005a7520(afStack_9c + 8);
          uStack_64 = uStack_dc;
          afStack_9c[(uint)bVar9 * -2 + 0xf] = afStack_f0[(uint)bVar9 * -2 + 6];
          afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
               afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
          afStack_48[3] =
               (float)core_actor_cpp_FUN_0040cd60(fStack_60 - *(float *)&param_1->field_0x34);
          fStack_2c = param_2 * _DAT_005f772e;
          *(float *)&param_1->field_0x2508 = afStack_48[3];
          fStack_34 = -fStack_2c;
          if (*(float *)&param_1->field_0x2508 < fStack_34) {
            *(float *)&param_1->field_0x2508 = fStack_34;
          }
          if (fStack_2c < *(float *)&param_1->field_0x2508) {
            *(float *)&param_1->field_0x2508 = fStack_2c;
          }
          fStack_14 = afStack_48[3];
          if ((float)_DAT_005f7736 < *(float *)&param_1->field_0xc26c) {
            iVar3 = *(int *)&param_1->field_0xc1e8;
            fVar1 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
            fVar2 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
            fStack_2b0 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
            fStack_2ac = fStack_2b0;
            if (((afStack_48[3] < _DAT_005f773e) &&
                (ABS(*(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24)) <
                 (float)_DAT_005f7746)) &&
               ((float)_DAT_005f774e < fStack_2b0 && fStack_2b0 < (float)_DAT_005f7756)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,6,1);
              *(uint *)&param_1->field_0xc268 = 0x41c80000;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)pCStack_18,0,1);
        *(uint *)&param_1->field_0xc268 = 0x41c80000;
      }
    }
    else if ((((uVar6 == 6) && (iVar3 = *(int *)&param_1->field_0xc1e8, iVar3 != 0)) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar3 < 1)) &&
            (iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                               (*(int *)&param_1->field_0xc1e8), iVar3 == 0)) {
      iVar3 = *(int *)&param_1->field_0xc1e8;
      fStack_a0 = *(float *)(iVar3 + 0x20) - *(float *)pCStack_1c;
      afStack_9c[0] = *(float *)(iVar3 + 0x24) - *(float *)&pCStack_1c->field_0x4;
      afStack_9c[1] = *(float *)(iVar3 + 0x28) - *(float *)&pCStack_1c->field_0x8;
      afStack_88[0] = fStack_a0;
      afStack_9c[(uint)bVar9 * -2 + 6] = afStack_9c[(uint)bVar9 * -2];
      afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
           afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      core_vecdir_cpp_FUN_005a7520(afStack_9c + 5);
      afStack_9c[2] = afStack_f0[2];
      afStack_9c[(uint)bVar9 * -2 + 3] = afStack_f0[(uint)bVar9 * -2 + 3];
      afStack_9c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           afStack_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
      fStack_14 = (float)core_actor_cpp_FUN_0040cd60(afStack_9c[3] - *(float *)&param_1->field_0x34)
      ;
      fStack_28 = param_2 * _DAT_005f771e;
      *(float *)&param_1->field_0x2508 = fStack_14;
      fStack_30 = -fStack_28;
      if (fStack_14 < fStack_30) {
        *(float *)&param_1->field_0x2508 = fStack_30;
      }
      if (fStack_28 < *(float *)&param_1->field_0x2508) {
        *(float *)&param_1->field_0x2508 = fStack_28;
      }
    }
    fVar1 = param_2 / _DAT_00606ad8 + *(float *)&param_1->field_0xc274;
    *(float *)&param_1->field_0xc274 = fVar1;
    if (1.0 < fVar1) {
      *(uint *)&param_1->field_0xc274 = 0x3f800000;
    }
    core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              ((CDeformableModelInstance *)&param_1->field_0x158);
    core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  }
  return;
}
