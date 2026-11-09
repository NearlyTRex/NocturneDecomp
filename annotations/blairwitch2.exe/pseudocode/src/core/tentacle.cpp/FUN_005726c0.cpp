// Name: core_tentacle.cpp_FUN_005726c0
// Address: 005726c0
// Address Range: [[005726c0, 00572f46]]
// Convention: unknown
// Signature: void core_tentacle_cpp_FUN_005726c0(CTentacle *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tentacle_cpp_FUN_005726c0(CTentacle *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CTentacle *pCVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_10dc [903];
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  CMatrix3x4f aCStack_244 [48];
  uint auStack_214 [12];
  uint auStack_1e4 [12];
  uint auStack_1b4 [12];
  byte auStack_184 [48];
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
  
  bVar8 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar3 != 0) {
    pCStack_24 = (CVector3f *)&param_1->field_0x30;
    fStack_2a8 = param_2 * *(float *)&param_1->field_0x10a60;
    puStack_20 = &param_1->field_0x10b38;
    pCStack_1c = (CVector3f *)&param_1->field_0x20;
    pCStack_18 = (CDeformableModelInstance *)&param_1->field_0x2b4;
    while (0.0 < fStack_2a8) {
      uVar5 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                        ((CMotionController *)pCStack_18,&stack0xfffffd58);
      if (99 < uVar5) {
        if (uVar5 < 0x65) {
          iVar3 = *(int *)&param_1->field_0x10a78;
          if ((iVar3 != 0) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xfc))(iVar3), iVar3 == 0)) {
            core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
                      (pCStack_18);
            core_tentacle_cpp_FUN_005732e0(param_1);
            puVar6 = (uint *)&stack0xfffffd5c;
            puVar7 = auStack_124;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
            }
            core_xform_cpp_FUN_00592720(auStack_124);
            puVar6 = &uStack_f4;
            uStack_f4 = uStack_c4;
            afStack_f0[(uint)bVar8 * -2] = afStack_f0[(uint)bVar8 * -2 + 0xc];
            afStack_f0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_f0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
            core_actor_cpp_FUN_00408d70(param_1,puVar6);
            fStack_4c = fStack_70;
            afStack_48[(uint)bVar8 * -2] = afStack_9c[(uint)bVar8 * -2 + 0xc];
            afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
            iVar3 = *(int *)&param_1->field_0x10a78;
            fStack_58 = fStack_4c - *(float *)(iVar3 + 0x20);
            fStack_54 = afStack_48[0] - *(float *)(iVar3 + 0x24);
            fStack_50 = afStack_48[1] - *(float *)(iVar3 + 0x28);
            fStack_d0 = fStack_58;
            afStack_f0[(uint)bVar8 * -2 + 9] = afStack_9c[(uint)bVar8 * -2 + 0x12];
            afStack_f0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
                 afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
            if (((ABS(fStack_cc) <= (float)_DAT_005ec4ea) &&
                (fStack_d0 * fStack_d0 + fStack_c8 * fStack_c8 <= (float)_DAT_005ec4f2)) &&
               (iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0xf4))(iVar3,param_1,1), iVar3 != 0))
            {
              *(uint *)&param_1->field_0x10b04 = 0;
              core_xform_cpp_FUN_00591c10
                        (auStack_184,*(int *)&param_1->field_0x10a78 + 0x20,
                         *(int *)&param_1->field_0x10a78 + 0x30);
              core_xform_cpp_FUN_00591ad0(aCStack_244,pCStack_1c,pCStack_24);
              core_xform_cpp_FUN_00592830(auStack_124);
              puVar6 = auStack_1b4;
              puVar7 = auStack_154;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_184,aCStack_244,auStack_154);
              puVar6 = auStack_214;
              puVar7 = auStack_1e4;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_1e4);
              puVar6 = (uint *)&stack0xfffffd8c;
              puVar7 = (uint *)&param_1->field_0x10b08;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              puVar6 = (uint *)&param_1->field_0x10b08;
              puVar7 = (uint *)&param_1->field_0x10b38;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              core_xform_cpp_clearTranslation_FUN_00591ab0(puStack_20);
              iVar3 = 0;
              do {
                auStack_ac._0_4_ = core_actor_cpp_FUN_0040cf60(0xc0e00000,0x40e00000);
                fStack_14 = (float)auStack_ac._0_4_;
                auStack_ac._8_4_ = core_actor_cpp_FUN_0040cf60(0xc0e00000,0x40e00000);
                fStack_14 = (float)auStack_ac._8_4_;
                auStack_ac._4_4_ = core_actor_cpp_FUN_0040cf60(0xbf800000,0x41700000);
                iVar3 = iVar3 + 1;
                fStack_14 = (float)auStack_ac._4_4_;
                core_gore_cpp_FUN_004c9730
                          (g_CGorePtr,(CVector3f *)&fStack_4c,(CVector3f *)auStack_ac,
                           *(EBloodType *)(*(int *)&param_1->field_0x10a78 + 0x280c));
              } while (iVar3 < 0x46);
            }
          }
        }
        else if (((uVar5 == 0x65) && (iVar3 = *(int *)&param_1->field_0x10a78, iVar3 != 0)) &&
                (pCVar4 = (CTentacle *)(**(code **)(*(int *)(iVar3 + 0x2b0) + 0xfc))(iVar3),
                pCVar4 == param_1)) {
          *(uint *)(*(int *)&param_1->field_0x10a78 + 0x70) = 2;
        }
      }
    }
    iVar3 = core_motion_cpp_FUN_005035c0(pCStack_18);
    uVar5 = *(uint *)(iVar3 + 0x24);
    if (uVar5 < 2) {
      if (uVar5 == 0) {
        *(uint *)&param_1->field_0x10afc = 0;
        if (0.0 < *(float *)&param_1->field_0x10af8) {
          *(float *)&param_1->field_0x10af8 = *(float *)&param_1->field_0x10af8 - param_2;
        }
        if (*(float *)&param_1->field_0x10af8 <= 0.0) {
          if (*(int *)&param_1->field_0x10b00 == 0) {
            iVar3 = core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_00573010
                              (param_1,"CEnemy CHero CNPC");
            if (iVar3 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,2,1);
              *(uint *)&param_1->field_0x10af8 = 0;
            }
          }
          else {
            iVar3 = core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_00573010
                              (param_1,"CHero CNPC");
            if (iVar3 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,2,1);
              *(uint *)&param_1->field_0x10af8 = 0;
              core_grave_cpp_FUN_004ca3e0(*(CGrave **)&param_1->field_0x10b00);
              *(uint *)&param_1->field_0x10b00 = 0;
            }
          }
        }
      }
    }
    else if (uVar5 < 3) {
      fVar1 = *(float *)&param_1->field_0x10afc + param_2;
      *(float *)&param_1->field_0x10afc = fVar1;
      if (fVar1 < (float)_DAT_005ec4b2) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
        iVar3 = *(int *)&param_1->field_0x10a78;
        if (iVar3 != 0) {
          fStack_b8 = *(float *)(iVar3 + 0x20) - *(float *)pCStack_1c;
          fStack_b4 = *(float *)(iVar3 + 0x24) - *(float *)&pCStack_1c->field_0x4;
          fStack_b0 = *(float *)(iVar3 + 0x28) - *(float *)&pCStack_1c->field_0x8;
          afStack_7c[0] = fStack_b8;
          afStack_9c[(uint)bVar8 * -2 + 9] = afStack_f0[(uint)bVar8 * -2 + 0xf];
          afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
               afStack_f0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
          core_vecdir_cpp_FUN_005838f0(afStack_9c + 8);
          uStack_64 = uStack_dc;
          afStack_9c[(uint)bVar8 * -2 + 0xf] = afStack_f0[(uint)bVar8 * -2 + 6];
          afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
               afStack_f0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
          afStack_48[3] =
               (float)core_actor_cpp_FUN_0040d0c0(fStack_60 - *(float *)&param_1->field_0x34);
          fStack_2c = param_2 * _DAT_005ec4ba;
          *(float *)&param_1->field_0x2578 = afStack_48[3];
          fStack_34 = -fStack_2c;
          if (*(float *)&param_1->field_0x2578 < fStack_34) {
            *(float *)&param_1->field_0x2578 = fStack_34;
          }
          if (fStack_2c < *(float *)&param_1->field_0x2578) {
            *(float *)&param_1->field_0x2578 = fStack_2c;
          }
          fStack_14 = afStack_48[3];
          if ((float)_DAT_005ec4c2 < *(float *)&param_1->field_0x10afc) {
            iVar3 = *(int *)&param_1->field_0x10a78;
            fVar1 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
            fVar2 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
            fStack_2b0 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
            fStack_2ac = fStack_2b0;
            if (((afStack_48[3] < _DAT_005ec4ca) &&
                (ABS(*(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24)) <
                 (float)_DAT_005ec4d2)) &&
               ((float)_DAT_005ec4da < fStack_2b0 && fStack_2b0 < (float)_DAT_005ec4e2)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,6,1);
              *(uint *)&param_1->field_0x10af8 = 0x41c80000;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)pCStack_18,0,1);
        *(uint *)&param_1->field_0x10af8 = 0x41c80000;
      }
    }
    else if ((((uVar5 == 6) && (iVar3 = *(int *)&param_1->field_0x10a78, iVar3 != 0)) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3), iVar3 < 1)) &&
            (iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))
                               (*(int *)&param_1->field_0x10a78), iVar3 == 0)) {
      iVar3 = *(int *)&param_1->field_0x10a78;
      fStack_a0 = *(float *)(iVar3 + 0x20) - *(float *)pCStack_1c;
      afStack_9c[0] = *(float *)(iVar3 + 0x24) - *(float *)&pCStack_1c->field_0x4;
      afStack_9c[1] = *(float *)(iVar3 + 0x28) - *(float *)&pCStack_1c->field_0x8;
      afStack_88[0] = fStack_a0;
      afStack_9c[(uint)bVar8 * -2 + 6] = afStack_9c[(uint)bVar8 * -2];
      afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
           afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      core_vecdir_cpp_FUN_005838f0(afStack_9c + 5);
      afStack_9c[2] = afStack_f0[2];
      afStack_9c[(uint)bVar8 * -2 + 3] = afStack_f0[(uint)bVar8 * -2 + 3];
      afStack_9c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           afStack_f0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      fStack_14 = (float)core_actor_cpp_FUN_0040d0c0(afStack_9c[3] - *(float *)&param_1->field_0x34)
      ;
      fStack_28 = param_2 * _DAT_005ec4aa;
      *(float *)&param_1->field_0x2578 = fStack_14;
      fStack_30 = -fStack_28;
      if (fStack_14 < fStack_30) {
        *(float *)&param_1->field_0x2578 = fStack_30;
      }
      if (fStack_28 < *(float *)&param_1->field_0x2578) {
        *(float *)&param_1->field_0x2578 = fStack_28;
      }
    }
    fVar1 = param_2 / _DAT_005fcc78 + *(float *)&param_1->field_0x10b04;
    *(float *)&param_1->field_0x10b04 = fVar1;
    if (1.0 < fVar1) {
      *(uint *)&param_1->field_0x10b04 = 0x3f800000;
    }
    core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
              ((CDeformableModelInstance *)&param_1->field_0x2b4);
    core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  }
  return;
}
