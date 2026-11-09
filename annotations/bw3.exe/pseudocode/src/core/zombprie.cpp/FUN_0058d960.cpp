// Name: core_zombprie.cpp_FUN_0058d960
// Address: 0058d960
// Address Range: [[0058d960, 0058e8c5]]
// Convention: unknown
// Signature: void core_zombprie_cpp_FUN_0058d960(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombprie_cpp_FUN_0058d960(CEnemy *param_1,float param_2)

{
  byte *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  SMotion *pSVar5;
  CEnemy *pCVar6;
  int iVar7;
  CPathMap *pCVar8;
  byte bVar9;
  float afStackY_11cc [979];
  float *pfVar10;
  uint *puVar11;
  CGore *this_ptr;
  CVector3f *pCVar12;
  float fVar13;
  uint uVar14;
  EBloodType blood_type;
  float fVar15;
  SDamageInfo aSStack_268 [4];
  float fStack_264;
  CEnemy *pCStack_234;
  CEnemy *pCStack_230;
  SDamageInfo aSStack_22c [4];
  uint uStack_228;
  CEnemy *pCStack_1f8;
  CEnemy *pCStack_1f4;
  byte auStack_1f0 [12];
  uint uStack_1e4;
  float afStack_1e0 [4];
  float fStack_1d0;
  uint uStack_1cc;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float afStack_1a8 [3];
  float afStack_19c [3];
  float afStack_190 [3];
  uint uStack_184;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  uint uStack_160;
  float fStack_15c;
  uint uStack_154;
  uint uStack_148;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float afStack_124 [3];
  uint uStack_118;
  float fStack_114;
  uint uStack_10c;
  float fStack_108;
  uint uStack_100;
  float afStack_f4 [3];
  byte auStack_e8 [12];
  float fStack_dc;
  float afStack_d8 [2];
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  float afStack_ac [3];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [5];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  float fStack_58;
  float afStack_54 [5];
  float fStack_40;
  uint uStack_3c;
  float fStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  CMotionController *pCStack_28;
  CMotionController *pCStack_24;
  float fStack_20;
  float fStack_1c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xb4 * 4) == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_22c);
    pCStack_1f8 = param_1;
    pCStack_1f4 = param_1;
    uStack_228 = 0x4479f99a;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1,aSStack_22c);
  }
  if (*(int *)&param_1->field_0xbc68 != 0) {
    *(uint *)&param_1->field_0xbc6c = 0;
  }
  if (0 < *(int *)&param_1->field_0x33a0) {
    (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,0);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,0,0);
    iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
    if (((iVar3 == 0) &&
        (iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x88), iVar3 == 0)) &&
       (iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x80), iVar3 == 0)) {
      uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"mob-scream?.wav")
      ;
      *(uint *)&param_1[1].field_0x88 = uVar4;
    }
  }
  fVar13 = *(float *)&param_1[1].field_0xbc - param_2;
  *(float *)&param_1[1].field_0xbc = fVar13;
  if (fVar13 < 0.0) {
    *(uint *)&param_1[1].field_0xbc = 0;
  }
  if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x98 * 4) == 0) {
    (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,0);
  }
  if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x90 * 4) == 0) {
    (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,0,0);
  }
  if ((*(int *)&param_1[1].field_0x18 == 0) &&
     (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,&param_1[1].field_0x1c), iVar3 != 0)) {
    *(uint *)&param_1[1].field_0x18 = 1;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_40 = param_2 * *(float *)&param_1->field_0xcdcc;
  pCStack_18 = (CMotionController *)&param_1->field_0x158;
  while (0.0 < fStack_40) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,afStack_54 + 5);
    if (iVar3 == 100) {
      iVar3 = *(int *)&param_1[1].field_0xc;
      if (iVar3 != 0) {
        *(uint *)&param_1[1].field_0xc = 0;
        core_charactr_cpp_FUN_004319d0(param_1,1,iVar3,0x3e4ccccd,0);
      }
    }
    else {
      core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,iVar3);
    }
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_18);
  uVar4 = *(uint *)(pSVar5 + 0x24);
  iVar3 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    switch(uVar4) {
    case 0:
      if (*(int *)&param_1[1].field_0x18 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        if (*(int *)&param_1->field_0xcde4 == 0) {
          iVar3 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
          if (iVar3 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_18,1,1);
          }
        }
        else {
          iVar3 = *(int *)&param_1[1].field_0x14;
          if (iVar3 != 0) {
            if (*(int *)&param_1[1].field_0x10 == 0) {
              fStack_c4 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
              afStack_c0[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
              afStack_c0[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
              fStack_13c = fStack_c4;
              afStack_1e0[(uint)bVar9 * -2 + 0x2a] = afStack_c0[(uint)bVar9 * -2];
              afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2b] =
                   afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              if ((float)_DAT_005d8bb0 <
                  SQRT(fStack_134 * fStack_134 + fStack_13c * fStack_13c + fStack_138 * fStack_138))
              {
                *(uint *)&param_1[1].field_0x10 = 1;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_18,8,1);
                break;
              }
            }
            else {
              *(uint *)&param_1[1].field_0x10 = 0;
            }
          }
          iVar3 = *(int *)&param_1->field_0xcde4;
          afStack_c0[2] = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_c0[3] = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_b0 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_1c0 = afStack_c0[2];
          afStack_1e0[(uint)bVar9 * -2 + 9] = afStack_c0[(uint)bVar9 * -2 + 3];
          afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
               afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          fStack_1c = SQRT(fStack_1b8 * fStack_1b8 +
                           fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc);
          pCStack_24 = (CMotionController *)&param_1->field_0x158;
          if (fStack_1c < 0x40400000 + 1.0) {
            core_vecdir_cpp_FUN_00576250(afStack_1e0 + 8);
            uStack_160 = uStack_154;
            afStack_1e0[(uint)bVar9 * -2 + 0x21] = afStack_1e0[(uint)bVar9 * -2 + 0x24];
            afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x22] =
                 afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x25];
            fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                         (fStack_15c - *(float *)&param_1->field_0x34);
            if ((ABS(fStack_14) < (float)_DAT_005d8ba8) && (*(float *)&param_1->field_0xcde0 <= 0.0)
               ) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,9,1);
              *(uint *)&param_1->field_0xcde0 = 0x40000000;
            }
          }
          else if (fStack_1c < *(float *)&param_1->field_0xcddc) {
            if (_DAT_005e7058 <= fStack_1c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,8,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_24,1,1);
            }
          }
        }
      }
      else {
        fVar13 = *(float *)&param_1[1].field_0xb8;
        *(uint *)&param_1->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        if ((float)_DAT_005d8ba0 < fVar13) {
          unkafter_zombiepr_cpp_FUN_0058f4a0((CMobster *)param_1);
        }
      }
      break;
    case 1:
    case 8:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      puVar1 = &param_1->field_0x158;
      if (*(int *)&param_1->field_0xcde4 == 0) {
        iVar3 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)puVar1,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)puVar1,1,1);
        }
      }
      else if (*(int *)&param_1[1].field_0x10 == 0) {
        iVar3 = unkafter_zombiepr_cpp_FUN_0058efb0(param_1,param_2);
        if (iVar3 == 0) {
          fStack_30 = 0x40400000 + 1.0;
          if ((*(int *)&param_1->field_0x2628 != 0) || (*(int *)&param_1->field_0x25b0 != 0)) {
            fStack_30 = 0x41F00000;
          }
          fVar15 = 0.17453292;
          fVar13 = 0.5;
          *(uint *)&param_1->field_0x24a4 = 0;
          *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
          *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
          auStack_e8._0_4_ = 0;
          fStack_2c = 0x40400000;
          auStack_e8._8_4_ = 0x40400000;
          pCVar12 = (CVector3f *)auStack_e8;
          auStack_e8._4_4_ = 0;
          pCVar8 = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xcde4);
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),pCVar8,pCVar12,
                             fVar13,fVar15);
          if (-1 < iVar3) {
            puVar1 = &param_1->field_0x20;
            iVar3 = *(int *)&param_1->field_0xcde4;
            fStack_88 = *(float *)puVar1 - *(float *)(iVar3 + 0x20);
            afStack_84[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
            afStack_84[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
            afStack_54[2] = fStack_88;
            afStack_54[(uint)bVar9 * -2 + 3] = afStack_84[(uint)bVar9 * -2];
            afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                 afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            fStack_20 = SQRT(afStack_54[4] * afStack_54[4] + afStack_54[2] * afStack_54[2]);
            afStack_54[3] = 0.0;
            fStack_38 = fStack_20;
            if ((fStack_20 <= fStack_30) && (*(float *)&param_1->field_0xcde0 <= 0.0)) {
              pCStack_28 = (CMotionController *)&param_1->field_0x158;
              if (*(int *)&param_1->field_0x25b0 == 0) {
                fStack_130 = *(float *)(iVar3 + 0x20) - *(float *)puVar1;
                fStack_12c = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
                fStack_128 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
                afStack_124[0] = fStack_130;
                afStack_1e0[(uint)bVar9 * -2 + 0x30] = afStack_1e0[(uint)bVar9 * -2 + 0x2d];
                afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x31] =
                     afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2e];
                core_vecdir_cpp_FUN_00576250(afStack_1e0 + 0x2f);
                uStack_118 = uStack_100;
                afStack_1e0[(uint)bVar9 * -2 + 0x33] = afStack_1e0[(uint)bVar9 * -2 + 0x39];
                afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x34] =
                     afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3a];
                fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                             (fStack_114 - *(float *)&param_1->field_0x34);
                if (ABS(fStack_14) < (float)_DAT_005d8ba8) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,9,1);
                }
              }
              else if (fStack_2c + 1.0 <= fStack_20) {
                if (((float)_DAT_005d8ba0 < *(float *)&param_1[1].field_0xb8) &&
                   (*(float *)&param_1[1].field_0xbc <= 0.0)) {
                  unkafter_zombiepr_cpp_FUN_0058f4a0((CMobster *)param_1);
                }
              }
              else {
                fStack_178 = *(float *)(iVar3 + 0x20) - *(float *)puVar1;
                fStack_174 = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
                fStack_170 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
                afStack_1a8[0] = fStack_178;
                afStack_1e0[(uint)bVar9 * -2 + 0xf] = afStack_1e0[(uint)bVar9 * -2 + 0x1b];
                afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
                     afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c];
                core_vecdir_cpp_FUN_00576250(afStack_1e0 + 0xe);
                uStack_10c = uStack_64;
                afStack_1e0[(uint)bVar9 * -2 + 0x36] = afStack_84[(uint)bVar9 * -2 + 9];
                afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x37] =
                     afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
                fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                             (fStack_108 - *(float *)&param_1->field_0x34);
                if ((ABS(fStack_14) < (float)_DAT_005d8ba8) &&
                   (*(float *)&param_1->field_0xcde0 <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,9,1);
                  *(uint *)&param_1->field_0xcde0 = 0x40000000;
                }
              }
              *(uint *)&param_1->field_0xcde0 = 0x3f800000;
            }
            if (*(float *)&param_1->field_0xcddc < fStack_38) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,0,1);
            }
          }
        }
      }
      else {
        fVar15 = 0.17453292;
        fVar13 = 0.5;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        auStack_1f0._0_4_ = 0;
        auStack_1f0._8_4_ = 0x40400000;
        pCVar12 = (CVector3f *)auStack_1f0;
        auStack_1f0._4_4_ = 0;
        pCVar8 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1[1].field_0x14 + 0x154) + 0xc4))
                           (*(int *)&param_1[1].field_0x14);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1[1].field_0x14 + 0x20),pCVar8,pCVar12,
                           fVar13,fVar15);
        if (iVar3 < 1) {
          if (iVar3 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)puVar1,0,1);
            *(uint *)&param_1[1].field_0x14 = 0;
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)puVar1,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      if (*(int *)&param_1->field_0xcde4 != 0) {
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash);
        if (iVar3 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
          uStack_34 = *(uint *)(iVar3 + 0x568);
          *(CEnemy **)(iVar3 + 0x304) = param_1;
          *(uint *)(iVar3 + 0x568) = 100;
          iVar7 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe8))(iVar3);
          if (iVar7 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3);
          }
          *(uint *)(iVar3 + 0x568) = uStack_34;
        }
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&param_1->field_0x25b0,g_CWeaponClassInfo.name_hash);
        if (iVar3 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
          uStack_3c = *(uint *)(iVar3 + 0x568);
          *(CEnemy **)(iVar3 + 0x304) = param_1;
          *(uint *)(iVar3 + 0x568) = 100;
          iVar7 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe8))(iVar3);
          if (iVar7 == 0) {
            *(uint *)(iVar3 + 0x568) = uStack_3c;
          }
          else {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3);
            *(uint *)(iVar3 + 0x568) = uStack_3c;
          }
        }
      }
      if ((*(float *)&param_1[1].field_0xb8 < (float)_DAT_005d8ba0) ||
         (*(float *)&param_1[1].field_0xbc <= 0.0)) {
        if (*(int *)&param_1[1].field_0x18 == 0) {
          uVar14 = 0x40800000;
          uVar4 = 0x40000000;
        }
        else {
          uVar14 = 0x40a00000;
          uVar4 = 0x40800000;
        }
        fStack_14 = (float)core_actor_cpp_FUN_0040ce40(uVar4,uVar14);
        *(float *)&param_1[1].field_0xbc = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
      break;
    case 5:
      if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_18,0);
        pfVar10 = afStack_c0 + 5;
        afStack_ac[0] = (float)uStack_184;
        afStack_c0[(uint)bVar9 * -2 + 6] = afStack_1e0[(uint)bVar9 * -2 + 0x18];
        afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19];
        core_actor_cpp_FUN_00408b80(param_1,pfVar10);
        blood_type = BLOOD_TYPE_RED;
        pCVar12 = &CStack_d0;
        CStack_d0._0_4_ = CStack_94._0_4_;
        *(uint *)((int)&CStack_d0 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_94 + (uint)bVar9 * -8 + 4);
        this_ptr = g_CGorePtr;
        *(uint *)((int)&CStack_d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_94 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        core_gore_cpp_FUN_004cec40(this_ptr,pCVar12,blood_type);
        *(uint *)&param_1->field_0xcdd0 = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_268);
      fStack_264 = (float)core_actor_cpp_FUN_0040ce40(0x40e00000,0x41700000);
      pCStack_234 = param_1;
      pCStack_230 = param_1;
      fStack_14 = fStack_264;
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x90 * 4) != 0) {
        core_xform_cpp_FUN_00583260
                  (&DAT_02cfd900,&param_1->field_0xfd8 + _DAT_02d24974 * 0x30,0x3ecccccd,aSStack_268
                  );
        pfVar10 = afStack_1e0 + 0x3b;
        afStack_f4[0] = (float)uStack_148;
        afStack_1e0[(uint)bVar9 * -2 + 0x3c] = afStack_1e0[(uint)bVar9 * -2 + 0x27];
        afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x3d] =
             afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x28];
        core_actor_cpp_FUN_00408b80(param_1,pfVar10);
        puVar11 = &uStack_1e4;
        uStack_1e4 = uStack_1cc;
        afStack_1e0[(uint)bVar9 * -2] = afStack_1e0[(uint)bVar9 * -2 + 6];
        pCVar6 = param_1;
        afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        core_enemy_cpp_FUN_004893f0(pCVar6,puVar11);
      }
      fStack_264 = (float)core_actor_cpp_FUN_0040ce40(0x40e00000,0x41700000);
      fStack_14 = fStack_264;
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x98 * 4) != 0) {
        core_xform_cpp_FUN_00583260
                  (&DAT_02cfd900,&param_1->field_0xfd8 + _DAT_02d24978 * 0x30,0x3ecccccd,aSStack_268
                  );
        pfVar10 = afStack_1e0 + 0x11;
        afStack_19c[0] = (float)uStack_16c;
        afStack_1e0[(uint)bVar9 * -2 + 0x12] = afStack_1e0[(uint)bVar9 * -2 + 0x1e];
        afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
             afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1f];
        core_actor_cpp_FUN_00408b80(param_1,pfVar10);
        pfVar10 = afStack_1e0 + 0x14;
        afStack_190[0] = afStack_84[2];
        afStack_1e0[(uint)bVar9 * -2 + 0x15] = afStack_84[(uint)bVar9 * -2 + 3];
        pCVar6 = param_1;
        afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16] =
             afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_enemy_cpp_FUN_004893f0(pCVar6,pfVar10);
      }
    }
    goto switchD_0058e8bf_caseD_3;
  }
  uVar2 = *(uint *)&param_1->field_0x273c;
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_0058dc3d:
      iVar3 = 1;
    }
    else {
LAB_0058de9d:
      iVar3 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar3,1);
  }
  else {
    if (uVar2 < 3) goto LAB_0058dc3d;
    if (uVar2 != 3) goto LAB_0058de9d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_18,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_0058e8bf_caseD_3:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  iVar3 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)&param_1->field_0xcde4;
    if ((iVar3 != 0) &&
       (pCVar6 = (CEnemy *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), pCVar6 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
    }
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    fStack_70 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_6c = *(float *)&param_1->field_0x251c * param_2;
    fStack_68 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_a0 = fStack_70;
    afStack_c0[(uint)bVar9 * -2 + 9] = afStack_84[(uint)bVar9 * -2 + 6];
    afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         afStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    fStack_dc = fStack_a0 + *(float *)&param_1->field_0x250c;
    afStack_d8[0] = fStack_9c + *(float *)&param_1->field_0x2510;
    afStack_d8[1] = fStack_98 + *(float *)&param_1->field_0x2514;
    fStack_1b4 = fStack_dc;
    afStack_1e0[(uint)bVar9 * -2 + 0xc] = afStack_d8[(uint)bVar9 * -2];
    afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
         afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    afStack_1e0[2] = fStack_1b4 + *(float *)&param_1->field_0x249c;
    afStack_1e0[3] = fStack_1b0 + *(float *)&param_1->field_0x24a0;
    fStack_1d0 = fStack_1ac + *(float *)&param_1->field_0x24a4;
    fStack_58 = afStack_1e0[2];
    afStack_54[(uint)bVar9 * -2] = afStack_1e0[(uint)bVar9 * -2 + 3];
    afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_1e0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_58);
  }
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0xc))(iVar3,param_2);
  }
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&param_1->field_0x25b0,g_CWeaponClassInfo.name_hash);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0xc))(iVar3,param_2);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1);
  if (iVar3 == 0) {
    core_zombprie_cpp_FUN_0058e8d0(param_1,param_2);
  }
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  return;
}
