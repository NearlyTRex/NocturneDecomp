// Name: core_mattnntt.cpp_FUN_00591f30
// Address: 00591f30
// Address Range: [[00591f30, 005936f4]]
// Convention: unknown
// Signature: void core_mattnntt_cpp_FUN_00591f30(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mattnntt_cpp_FUN_00591f30(CEnemy *param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  SMotion *pSVar3;
  uint uVar4;
  CPathMap *path_map;
  int iVar5;
  byte *puVar6;
  byte bVar7;
  float afStackY_130c [1011];
  CGore *this_ptr;
  CVector3f *pCVar8;
  float fVar9;
  uint *puVar10;
  float *pfVar11;
  EBloodType blood_type;
  float fVar12;
  float fStack_324;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  float fStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  uint uStack_2c4;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  byte auStack_2ac [8];
  float afStack_2a4 [4];
  uint uStack_294;
  uint uStack_288;
  uint uStack_27c;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  CVector3f CStack_258;
  uint uStack_24c;
  float afStack_248 [4];
  float fStack_238;
  float fStack_234;
  uint uStack_230;
  uint uStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  float afStack_20c [5];
  float fStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  float afStack_1ec [3];
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  float afStack_1d4 [3];
  uint uStack_1c8;
  float fStack_1c4;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  float afStack_1ac [5];
  float fStack_198;
  uint uStack_194;
  uint uStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  uint uStack_180;
  float afStack_174 [3];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  uint uStack_14c;
  uint uStack_148;
  float fStack_144;
  float afStack_140 [5];
  float afStack_12c [3];
  float fStack_120;
  uint uStack_11c;
  uint uStack_118;
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [5];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  byte *puStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  byte auStack_c0 [12];
  uint uStack_b4;
  float afStack_b0 [5];
  float afStack_9c [3];
  CVector3f CStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_60;
  uint uStack_5c;
  CMotionController *pCStack_54;
  float fStack_50;
  float *pfStack_4c;
  uint uStack_48;
  float fStack_44;
  byte *puStack_40;
  byte *puStack_3c;
  byte *puStack_38;
  byte *puStack_34;
  float *pfStack_30;
  float *pfStack_2c;
  float *pfStack_28;
  float *pfStack_24;
  CDeformableModelInstance *pCStack_20;
  CVector3f *pCStack_1c;
  float fStack_18;
  byte *puStack_14;
  
  bVar7 = 0;
  iVar1 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar1 != 0) {
    if (0.0 < *(float *)(param_1 + 1)) {
      *(float *)(param_1 + 1) = *(float *)(param_1 + 1) - param_2;
    }
    fVar9 = *(float *)&param_1[1].field_0x10 + param_2;
    *(float *)&param_1[1].field_0x10 = fVar9;
    if (*(float *)&param_1[1].field_0x18 <= fVar9) {
      *(uint *)&param_1[1].field_0x10 = *(uint *)&param_1[1].field_0x18;
    }
    puStack_14 = &param_1->field_0x158;
    core_skeleton_cpp_FUN_0054dcc0(puStack_14,*(uint *)&param_1[1].field_0x28);
    puVar10 = &uStack_210;
    uStack_210 = uStack_b4;
    afStack_20c[(uint)bVar7 * -2] = afStack_b0[(uint)bVar7 * -2];
    afStack_20c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_actor_cpp_FUN_00408b80(param_1,puVar10);
    uStack_1e0 = uStack_2c4;
    afStack_20c[(uint)bVar7 * -2 + 0xc] = *(float *)(&stack0xfffffd40 + (uint)bVar7 * -8);
    afStack_20c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
         *(float *)(&stack0xfffffd44 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    *(uint *)&param_1[1].field_0x84 = uStack_1e0;
    *(uint *)&param_1[1].field_0x88 = uStack_1dc;
    *(uint *)&param_1[1].field_0x8c = uStack_1d8;
    core_skeleton_cpp_FUN_0054dcc0(puStack_14,*(uint *)&param_1[1].field_0x2c);
    pfVar11 = afStack_20c + 2;
    afStack_20c[2] = (float)uStack_180;
    afStack_20c[(uint)bVar7 * -2 + 3] = afStack_1ac[(uint)bVar7 * -2 + 0xc];
    afStack_20c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_1ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    core_actor_cpp_FUN_00408b80(param_1,pfVar11);
    uStack_24c = afStack_2a4[1];
    afStack_248[(uint)bVar7 * -2] = afStack_2a4[(uint)bVar7 * -2 + 2];
    afStack_248[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_2a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3];
    *(uint *)&param_1[1].field_0x328 = uStack_24c;
    *(float *)&param_1[1].field_0x32c = afStack_248[0];
    *(float *)&param_1[1].field_0x330 = afStack_248[1];
    core_skeleton_cpp_FUN_0054dcc0(puStack_14,*(uint *)&param_1[1].field_0x34);
    pfVar11 = afStack_1ac + 0xe;
    afStack_174[0] = (float)uStack_288;
    afStack_1ac[(uint)bVar7 * -2 + 0xf] = afStack_2a4[(uint)bVar7 * -2 + 8];
    afStack_1ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
         afStack_2a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
    core_actor_cpp_FUN_00408b80(param_1,pfVar11);
    uStack_1b0 = uStack_27c;
    afStack_1ac[(uint)bVar7 * -2] = afStack_2a4[(uint)bVar7 * -2 + 0xb];
    afStack_1ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_2a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xc];
    *(uint *)&param_1[1].field_0x5cc = uStack_1b0;
    *(float *)&param_1[1].field_0x5d0 = afStack_1ac[0];
    *(float *)&param_1[1].field_0x5d4 = afStack_1ac[1];
    core_skeleton_cpp_FUN_0054dcc0(puStack_14,*(uint *)&param_1[1].field_0x30);
    pfVar11 = afStack_20c + 8;
    afStack_1ec[0] = (float)uStack_15c;
    afStack_20c[(uint)bVar7 * -2 + 9] = afStack_1ac[(uint)bVar7 * -2 + 0x15];
    afStack_20c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_1ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
    core_actor_cpp_FUN_00408b80(param_1,pfVar11);
    uStack_2e8 = afStack_140[2];
    *(float *)((int)&stack0xfffffd1c + (uint)bVar7 * -8) = afStack_140[(uint)bVar7 * -2 + 3];
    *(float *)((int)&stack0xfffffd20 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         afStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    puVar6 = &param_1[1].field_0x64;
    *(uint *)&param_1[1].field_0x870 = uStack_2e8;
    *(uint *)&param_1[1].field_0x874 = uStack_2e4;
    *(uint *)&param_1[1].field_0x878 = uStack_2e0;
    do {
      (**(code **)(*(int *)(puVar6 + 0x154) + 0xc))(puVar6,param_2);
      puVar6 = puVar6 + 0x2a4;
    } while (puVar6 != &param_1[1].field_0x2014);
    if ((*(int *)&param_1[1].field_0x4c == 0) && (*(int *)&param_1[1].field_0x48 == 0)) {
      fVar9 = *(float *)&param_1->field_0xcdcc;
      *(uint *)&param_1[1].field_0x48 = 1;
      fVar9 = fVar9 + _DAT_005d91ab;
      *(uint *)&param_1[1].field_0x44 = 1;
      *(float *)&param_1->field_0xcdcc = fVar9;
    }
    if ((0.0 < *(float *)&param_1[1].field_0x3c) &&
       (*(float *)&param_1[1].field_0x3c - param_2 <= 0.0)) {
      puVar6 = &param_1->field_0x20;
      iVar5 = _DAT_01d5ba14 * 4;
      iVar1 = *(int *)(iVar5 + 0x1d5ba04);
      fStack_f0 = *(float *)puVar6 - *(float *)(iVar1 + 0x20);
      fStack_ec = *(float *)&param_1->field_0x24 - *(float *)(iVar1 + 0x24);
      fStack_e8 = *(float *)&param_1->field_0x28 - *(float *)(iVar1 + 0x28);
      fStack_108 = fStack_f0;
      afStack_104[(uint)bVar7 * -2] = afStack_104[(uint)bVar7 * -2 + 6];
      afStack_104[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_104[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
      fStack_68 = afStack_104[1] * afStack_104[1] +
                  fStack_108 * fStack_108 + afStack_104[0] * afStack_104[0];
      fStack_84 = (float)(((int)fStack_68 >> 1) + _DAT_01d1a0a4);
      pfStack_4c = (float *)puVar6;
      if (fStack_84 < (float)_DAT_005d91b3) {
        *(uint *)&param_1[1].field_0x3c = 0x3f000000;
      }
      else {
        fVar9 = *(float *)&param_1->field_0xcdcc + _DAT_005d91bb;
        *(uint *)&param_1[1].field_0x3c = 0;
        *(float *)&param_1->field_0xcdcc = fVar9;
        iVar1 = *(int *)(iVar5 + 0x1d5ba04);
        iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
        pCStack_54 = (CMotionController *)&param_1->field_0x158;
        if (iVar1 == 0) {
          iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_144 = *(float *)(iVar1 + 0x20) - *pfStack_4c;
          afStack_140[0] = *(float *)(iVar1 + 0x24) - pfStack_4c[1];
          afStack_140[1] = *(float *)(iVar1 + 0x28) - pfStack_4c[2];
          afStack_9c[0] = fStack_144;
          afStack_b0[(uint)bVar7 * -2 + 6] = afStack_140[(uint)bVar7 * -2];
          afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
               afStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          core_vecdir_cpp_FUN_00576250(afStack_b0 + 5);
          afStack_104[2] = fStack_324;
          afStack_104[(uint)bVar7 * -2 + 3] = *(float *)(&stack0xfffffce0 + (uint)bVar7 * -8);
          afStack_104[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               *(float *)(&stack0xfffffce4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          fStack_18 = (float)core_actor_cpp_FUN_0040cfa0
                                       (afStack_104[3] - *(float *)&param_1->field_0x34);
          puStack_14 = (byte *)fStack_18;
          puStack_14 = (byte *)
                       core_actor_cpp_FUN_0040cfa0(afStack_104[2] - *(float *)&param_1->field_0x30);
          *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_18;
          *(float *)&param_1->field_0x30 = *(float *)&param_1->field_0x30 + (float)puStack_14;
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)param_1);
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_54,0xd,1);
      }
    }
    fVar9 = *(float *)&param_1[1].field_0x40 - param_2;
    *(float *)&param_1[1].field_0x40 = fVar9;
    if (fVar9 < 0.0) {
      *(uint *)&param_1[1].field_0x40 = 0;
    }
    fVar9 = *(float *)&param_1[1].field_0x3c - param_2;
    *(float *)&param_1[1].field_0x3c = fVar9;
    if (fVar9 < 0.0) {
      *(uint *)&param_1[1].field_0x38 = 0;
      *(uint *)&param_1[1].field_0x44 = 0;
      if (*(float *)&param_1[1].field_0x3c < (float)_DAT_005d91c3) {
        *(uint *)&param_1[1].field_0x3c = 0;
        *(uint *)&param_1[1].field_0x48 = 0;
      }
    }
    pfStack_30 = (float *)&param_1->field_0x2518;
    fStack_50 = param_2 * *(float *)&param_1->field_0xcdcc;
    pfStack_2c = (float *)&param_1->field_0x250c;
    pfStack_28 = (float *)&param_1->field_0x249c;
    pCStack_20 = (CDeformableModelInstance *)&param_1->field_0x158;
    pfStack_24 = (float *)&param_1->field_0x20;
    pCStack_1c = (CVector3f *)&param_1[1].field_0x58;
    while (0.0 < fStack_50) {
      uVar2 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                        ((CMotionController *)pCStack_20,&fStack_50);
      if (uVar2 < 0x451) {
        if (uVar2 < 0x44d) {
          if (1000 < uVar2) {
            if (uVar2 < 0x3ea) {
              iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (*(uint *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash)
              ;
              if (iVar1 != 0) {
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                uStack_48 = *(uint *)(iVar1 + 0x568);
                *(CEnemy **)(iVar1 + 0x304) = param_1;
                *(uint *)(iVar1 + 0x568) = 100;
                iVar5 = (**(code **)(*(int *)(iVar1 + 0x154) + 0xe8))(iVar1);
                if (iVar5 != 0) {
                  (**(code **)(*(int *)(iVar1 + 0x154) + 0xe4))(iVar1);
                  iVar5 = sound_sndmain_cpp_FUN_00556700
                                    (*(uint *)(&param_1[1].field_0xee4 + uVar2 * 4));
                  if (iVar5 == 0) {
                    uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                      (param_1,"mann_firestaff.wav");
                    *(uint *)(&param_1[1].field_0xee4 + uVar2 * 4) = uVar4;
                    *(uint *)(iVar1 + 0x568) = uStack_48;
                    goto LAB_00592354;
                  }
                }
                *(uint *)(iVar1 + 0x568) = uStack_48;
              }
            }
            else if ((uVar2 == 0x44c) &&
                    (iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x2014),
                    iVar1 == 0)) {
              uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"mann_stand.wav");
              *(uint *)&param_1[1].field_0x2014 = uVar4;
            }
          }
        }
        else if (uVar2 < 0x44e) {
          iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1[1].field_0xee4 + uVar2 * 4));
          if (iVar1 == 0) {
            uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"mann_chasewalk.wav");
            *(uint *)(&param_1[1].field_0xee4 + uVar2 * 4) = uVar4;
          }
        }
        else if (uVar2 < 0x44f) {
          iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1[1].field_0xee4 + uVar2 * 4));
          if (iVar1 == 0) {
            uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"mann_chasefast.wav");
            *(uint *)(&param_1[1].field_0xee4 + uVar2 * 4) = uVar4;
          }
        }
        else if (uVar2 < 0x450) {
          iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1[1].field_0xee4 + uVar2 * 4));
          if (iVar1 == 0) {
            uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"mann_attack.wav");
            *(uint *)(&param_1[1].field_0xee4 + uVar2 * 4) = uVar4;
          }
        }
        else {
          iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1[1].field_0xee4 + uVar2 * 4));
          if (iVar1 == 0) {
            uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"mann_attack1.wav");
            *(uint *)(&param_1[1].field_0xee4 + uVar2 * 4) = uVar4;
          }
        }
      }
      else if (uVar2 < 0x452) {
        iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1[1].field_0xee4 + uVar2 * 4));
        if (iVar1 == 0) {
          uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"mann_attack2.wav");
          *(uint *)(&param_1[1].field_0xee4 + uVar2 * 4) = uVar4;
        }
      }
      else if (uVar2 < 0x454) {
        if (uVar2 < 0x453) {
          iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1[1].field_0xee4 + uVar2 * 4));
          if (iVar1 == 0) {
            uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"mann_attack3.wav");
            *(uint *)(&param_1[1].field_0xee4 + uVar2 * 4) = uVar4;
          }
        }
        else {
          iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1[1].field_0xee4 + uVar2 * 4));
          if (iVar1 == 0) {
            uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"mann_pain.wav");
            *(uint *)(&param_1[1].field_0xee4 + uVar2 * 4) = uVar4;
          }
        }
      }
      else if (uVar2 < 0x455) {
        iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1[1].field_0xee4 + uVar2 * 4));
        if (iVar1 == 0) {
          uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"mann_die.wav");
          *(uint *)(&param_1[1].field_0xee4 + uVar2 * 4) = uVar4;
        }
      }
      else if (uVar2 < 0x456) {
        iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1[1].field_0xee4 + uVar2 * 4));
        if (iVar1 == 0) {
          uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"mann_warning.wav");
          *(uint *)(&param_1[1].field_0xee4 + uVar2 * 4) = uVar4;
        }
      }
      else if (uVar2 < 0x457) {
        iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1[1].field_0xee4 + uVar2 * 4));
        if (iVar1 == 0) {
          uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"mann_appear.wav");
          *(uint *)(&param_1[1].field_0xee4 + uVar2 * 4) = uVar4;
        }
      }
      else if ((uVar2 == 0x457) &&
              (iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1[1].field_0xee4 + 0x115c)),
              iVar1 == 0)) {
        uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"mann_disappear.wav");
        *(uint *)(&param_1[1].field_0xee4 + 0x115c) = uVar4;
      }
LAB_00592354:
      fVar9 = (float)_DAT_005d91cb;
      *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
      core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc * fVar9);
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                         ((CMotionController *)pCStack_20);
      iVar1 = *(int *)(pSVar3 + 0x24);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"State: %d\n",iVar1);
      iVar5 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
      if (iVar5 == 0) {
        switch(iVar1) {
        case 0:
          iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_270 = *(float *)(iVar1 + 0x20) - *pfStack_24;
          fStack_26c = *(float *)(iVar1 + 0x24) - pfStack_24[1];
          fStack_268 = *(float *)(iVar1 + 0x28) - pfStack_24[2];
          fStack_318 = fStack_270;
          *(float *)((int)&stack0xfffffcec + (uint)bVar7 * -8) = afStack_2a4[(uint)bVar7 * -2 + 0xe]
          ;
          *(float *)((int)&stack0xfffffcf0 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               afStack_2a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xf];
          if (&fStack_21c != &stack0xfffffce8) {
            fStack_21c = fStack_318;
            fStack_218 = fStack_314;
            fStack_214 = fStack_310;
          }
          if (0.0 < *(float *)&param_1->field_0xcde0) {
            fStack_80 = fStack_214 * fStack_214 + fStack_21c * fStack_21c + fStack_218 * fStack_218;
            fStack_7c = (float)(((int)fStack_80 >> 1) + _DAT_01d1a0a4);
            if (fStack_7c < 0x40A00000 + 1.0) break;
          }
          iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
          if (iVar1 == 0) {
            iVar1 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
            if (iVar1 != 0) {
              core_mattnntt_cpp_FUN_00593a90(param_1);
            }
            (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
            if (*(int *)&param_1->field_0xcde4 == 0) {
              iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
              if (iVar1 == 0) break;
              *(uint *)&g_CGamePtr->field_0x244 = 1;
              *(uint *)&param_1->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)
              ;
            }
            if (*(int *)&param_1->field_0xcde4 != 0) {
              *(uint *)&param_1[1].field_0x54 = 0;
              core_vecdir_cpp_FUN_00576250(&fStack_21c);
              uStack_2dc = uStack_294;
              *(float *)((int)&stack0xfffffd28 + (uint)bVar7 * -8) =
                   afStack_2a4[(uint)bVar7 * -2 + 5];
              *(float *)(&stack0xfffffd2c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                   afStack_2a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 6];
              puStack_14 = (byte *)
                           core_actor_cpp_FUN_0040cfa0(fStack_2d8 - *(float *)&param_1->field_0x34);
              if ((ABS((float)puStack_14) < (float)_DAT_005d91e3) &&
                 (*(float *)&param_1->field_0xcde0 <= 0.0)) {
                fStack_78 = fStack_214 * fStack_214 +
                            fStack_21c * fStack_21c + fStack_218 * fStack_218;
                fStack_74 = (float)(((int)fStack_78 >> 1) + _DAT_01d1a0a4);
                if (fStack_74 < 0x40A00000 + 1.0) {
                  *(uint *)&param_1[1].field_0x54 = 1;
                  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
                  if (iVar1 < 0x4b) {
                    iVar1 = 3;
                  }
                  else if ((iVar1 < 0x4b) || (0x5a < iVar1)) {
                    iVar1 = 5;
                  }
                  else {
                    iVar1 = 4;
                  }
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            ((CMotionController *)pCStack_20,iVar1,1);
                  *(uint *)&param_1->field_0xcde0 = 0x40400000;
                  break;
                }
              }
              core_mattnntt_cpp_FUN_00593a90(param_1);
            }
          }
          break;
        case 1:
        case 2:
          iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_264 = *(float *)(iVar1 + 0x20) - *pfStack_24;
          fStack_260 = *(float *)(iVar1 + 0x24) - pfStack_24[1];
          fStack_25c = *(float *)(iVar1 + 0x28) - pfStack_24[2];
          afStack_d4[2] = fStack_264;
          afStack_d4[(uint)bVar7 * -2 + 3] = afStack_2a4[(uint)bVar7 * -2 + 0x11];
          afStack_d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_2a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x12];
          if (&fStack_228 != afStack_d4 + 2) {
            fStack_228 = afStack_d4[2];
            fStack_224 = afStack_d4[3];
            fStack_220 = fStack_c4;
          }
          if (0.0 < *(float *)&param_1->field_0xcde0) {
            fStack_70 = fStack_220 * fStack_220 + fStack_228 * fStack_228 + fStack_224 * fStack_224;
            fStack_6c = (float)(((int)fStack_70 >> 1) + _DAT_01d1a0a4);
            if ((fStack_6c < 0x40A00000 + 1.0) && (*(int *)&param_1[1].field_0x54 == 0)) {
              engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Going to Stand\n");
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)pCStack_20,0,1);
              break;
            }
          }
          iVar1 = *(int *)&param_1->field_0xcde4;
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          if ((*(int *)&param_1->field_0xcde4 == 0) &&
             (iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
             iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), iVar5 != 0)) {
            *(uint *)&g_CGamePtr->field_0x244 = 1;
            *(uint *)&param_1->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          }
          if (*(int *)&param_1->field_0xcde4 == 0) {
            iVar1 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
            if (iVar1 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)pCStack_20,0,1);
            }
          }
          else if (iVar1 == 0) {
            core_mattnntt_cpp_FUN_00593a90(param_1);
          }
          else {
            pfStack_28[2] = 0.0;
            pfStack_28[1] = pfStack_28[2];
            *pfStack_28 = pfStack_28[1];
            iVar1 = *(int *)&param_1[1].field_0x38;
            if (iVar1 == 0) {
              fVar12 = 0.34906584;
              fVar9 = 0.2;
              auStack_c0._8_4_ = 0x40A00000;
              pCVar8 = (CVector3f *)auStack_c0;
              iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              auStack_c0._0_4_ = iVar1;
              auStack_c0._4_4_ = iVar1;
              path_map = (CPathMap *)(**(code **)(*(int *)(iVar5 + 0x154) + 0xc4))(iVar5);
              iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)param_1,
                                 (CVector3f *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20),
                                 path_map,pCVar8,fVar9,fVar12);
              if (iVar1 < 0) {
                engine_console_cpp_FUN_00441ff0
                          (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)pCStack_20,0,1);
              }
              else if (0 < iVar1) {
                iVar1 = *(int *)&param_1->field_0xcde4;
                fStack_18c = *(float *)(iVar1 + 0x20) - *pfStack_24;
                fStack_188 = *(float *)(iVar1 + 0x24) - pfStack_24[1];
                fStack_184 = *(float *)(iVar1 + 0x28) - pfStack_24[2];
                afStack_1d4[0] = fStack_18c;
                afStack_20c[(uint)bVar7 * -2 + 0xf] = afStack_1ac[(uint)bVar7 * -2 + 9];
                afStack_20c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                     afStack_1ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
                core_vecdir_cpp_FUN_00576250(afStack_20c + 0xe);
                uStack_1c8 = afStack_1ac[2];
                afStack_20c[(uint)bVar7 * -2 + 0x12] = afStack_1ac[(uint)bVar7 * -2 + 3];
                afStack_20c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
                     afStack_1ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
                puStack_14 = (byte *)
                             core_actor_cpp_FUN_0040cfa0
                                       (fStack_1c4 - *(float *)&param_1->field_0x34);
                if ((ABS((float)puStack_14) < (float)_DAT_005d91e3) &&
                   (*(float *)&param_1->field_0xcde0 <= 0.0)) {
                  *(uint *)&param_1[1].field_0x54 = 1;
                  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
                  if (iVar1 < 0x4b) {
                    iVar1 = 3;
                  }
                  else if ((iVar1 < 0x4b) || (0x5a < iVar1)) {
                    iVar1 = 5;
                  }
                  else {
                    iVar1 = 4;
                  }
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            ((CMotionController *)pCStack_20,iVar1,1);
                  *(uint *)&param_1->field_0xcde0 = 0x40400000;
                }
              }
            }
            else {
              if (*(float *)&param_1[1].field_0x40 <= 0.0) {
                uStack_60 = core_actor_cpp_FUN_0040ce40(0xc0a00000,0x40a00000);
                puStack_e4 = (byte *)core_actor_cpp_FUN_0040ce40(0xc0a00000,0x40a00000);
                uStack_5c = uStack_60;
                uStack_dc = uStack_60;
                uStack_e0 = 0;
                if ((CVector3f *)&puStack_e4 != pCStack_1c) {
                  *(byte **)pCStack_1c = puStack_e4;
                  *(uint *)&pCStack_1c->field_0x4 = 0;
                  *(uint *)&pCStack_1c->field_0x8 = uStack_60;
                }
                fStack_44 = SQRT(*(float *)&pCStack_1c->field_0x8 * *(float *)&pCStack_1c->field_0x8
                                 + (float)*(byte **)pCStack_1c *
                                   (float)*(byte **)pCStack_1c +
                                   *(float *)&pCStack_1c->field_0x4 *
                                   *(float *)&pCStack_1c->field_0x4);
                if (fStack_44 <= 0.0) {
                  *(uint *)&pCStack_1c->field_0x8 = 0;
                  *(uint *)&pCStack_1c->field_0x4 = *(uint *)&pCStack_1c->field_0x8;
                  *(byte **)pCStack_1c = *(byte **)&pCStack_1c->field_0x4;
                }
                else {
                  fVar9 = 1.0 / fStack_44;
                  *(byte **)pCStack_1c =
                       (byte *)((float)*(byte **)pCStack_1c * fVar9);
                  *(float *)&pCStack_1c->field_0x4 = *(float *)&pCStack_1c->field_0x4 * fVar9;
                  *(float *)&pCStack_1c->field_0x8 = *(float *)&pCStack_1c->field_0x8 * fVar9;
                }
                fVar9 = *(float *)&pCStack_1c->field_0x4 * _DAT_005d91d7;
                fVar12 = *(float *)&pCStack_1c->field_0x8 * _DAT_005d91d7;
                *(byte **)pCStack_1c =
                     (byte *)((float)*(byte **)pCStack_1c * _DAT_005d91d7);
                *(float *)&pCStack_1c->field_0x4 = fVar9;
                *(float *)&pCStack_1c->field_0x8 = fVar12;
                iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                *(byte **)pCStack_1c =
                     (byte *)(*(float *)(iVar1 + 0x20) + (float)*(byte **)pCStack_1c);
                *(float *)&pCStack_1c->field_0x4 =
                     *(float *)(iVar1 + 0x24) + *(float *)&pCStack_1c->field_0x4;
                *(float *)&pCStack_1c->field_0x8 =
                     *(float *)(iVar1 + 0x28) + *(float *)&pCStack_1c->field_0x8;
                *(uint *)&param_1[1].field_0x40 = 0x3f800000;
                puStack_40 = puStack_e4;
                puStack_14 = puStack_e4;
              }
              CStack_258._0_4_ = 0;
              CStack_258._4_4_ = 0;
              CStack_258._8_4_ = 0;
              core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)param_1,pCStack_1c,(CPathMap *)0x0,&CStack_258,0.2,0.0);
            }
          }
          break;
        case 3:
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          if (*(int *)&param_1->field_0xcde4 == 0) {
            core_mattnntt_cpp_FUN_00593a90(param_1);
          }
          else {
            iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_2f4 = *pfStack_24 - *(float *)(iVar1 + 0x20);
            fStack_2f0 = pfStack_24[1] - *(float *)(iVar1 + 0x24);
            fStack_2ec = pfStack_24[2] - *(float *)(iVar1 + 0x28);
            fStack_198 = fStack_2f4;
            afStack_1ac[(uint)bVar7 * -2 + 6] = *(float *)((int)&stack0xfffffd10 + (uint)bVar7 * -8)
            ;
            afStack_1ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 *(float *)((int)&stack0xfffffd14 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            if (afStack_20c + 0x14 != afStack_1ac + 5) {
              fStack_1bc = fStack_198;
              uStack_1b8 = uStack_194;
              uStack_1b4 = uStack_190;
            }
            puStack_34 = (byte *)core_motion_cpp_FUN_004fc930((CMotionController *)pCStack_20)
            ;
            puStack_14 = puStack_34;
            if ((0x3f7fffff < (int)puStack_34) && ((float)puStack_34 <= _DAT_005d91d3)) {
              (**(code **)(*(int *)(*(int *)&param_1->field_0x2628 + 0x154) + 0x78))
                        (*(int *)&param_1->field_0x2628,2);
            }
          }
          break;
        case 4:
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          if (*(int *)&param_1->field_0xcde4 == 0) {
            core_mattnntt_cpp_FUN_00593a90(param_1);
          }
          else {
            iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            afStack_248[2] = *pfStack_24 - *(float *)(iVar1 + 0x20);
            afStack_248[3] = pfStack_24[1] - *(float *)(iVar1 + 0x24);
            fStack_238 = pfStack_24[2] - *(float *)(iVar1 + 0x28);
            fStack_1f8 = afStack_248[2];
            afStack_20c[(uint)bVar7 * -2 + 6] = afStack_248[(uint)bVar7 * -2 + 3];
            afStack_20c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 afStack_248[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            if (afStack_248 + 5 != afStack_20c + 5) {
              fStack_234 = fStack_1f8;
              uStack_230 = uStack_1f4;
              uStack_22c = uStack_1f0;
            }
            puStack_3c = (byte *)core_motion_cpp_FUN_004fc930((CMotionController *)pCStack_20)
            ;
            puStack_14 = puStack_3c;
            if ((0x403fffff < (int)puStack_3c) && ((int)puStack_3c < 0x40800001)) {
              (**(code **)(*(int *)(*(int *)&param_1->field_0x2628 + 0x154) + 0x78))
                        (*(int *)&param_1->field_0x2628,2);
            }
          }
          break;
        case 5:
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          if (*(int *)&param_1->field_0xcde4 == 0) {
            core_mattnntt_cpp_FUN_00593a90(param_1);
          }
          else {
            iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_30c = *pfStack_24 - *(float *)(iVar1 + 0x20);
            fStack_308 = pfStack_24[1] - *(float *)(iVar1 + 0x24);
            fStack_304 = pfStack_24[2] - *(float *)(iVar1 + 0x28);
            fStack_120 = fStack_30c;
            afStack_140[(uint)bVar7 * -2 + 9] = *(float *)((int)&stack0xfffffcf8 + (uint)bVar7 * -8)
            ;
            afStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                 *(float *)((int)&stack0xfffffcfc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            if (afStack_1ac + 0x17 != afStack_140 + 8) {
              fStack_150 = fStack_120;
              uStack_14c = uStack_11c;
              uStack_148 = uStack_118;
            }
            puStack_38 = (byte *)core_motion_cpp_FUN_004fc930((CMotionController *)pCStack_20)
            ;
            puStack_14 = puStack_38;
            if ((0x403fffff < (int)puStack_38) && ((int)puStack_38 < 0x40800001)) {
              (**(code **)(*(int *)(*(int *)&param_1->field_0x2628 + 0x154) + 0x78))
                        (*(int *)&param_1->field_0x2628,2);
            }
          }
          break;
        case 6:
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          if (*(int *)&param_1->field_0xcde4 == 0) {
            core_mattnntt_cpp_FUN_00593a90(param_1);
          }
          break;
        case 9:
          if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
            core_skeleton_cpp_FUN_0054dbd0(pCStack_20,0);
            pfVar11 = afStack_140 + 5;
            afStack_12c[0] = afStack_b0[2];
            afStack_140[(uint)bVar7 * -2 + 6] = afStack_b0[(uint)bVar7 * -2 + 3];
            afStack_140[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 afStack_b0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            core_actor_cpp_FUN_00408b80(param_1,pfVar11);
            blood_type = BLOOD_TYPE_RED;
            pCVar8 = &CStack_90;
            CStack_90._0_4_ = CStack_114._0_4_;
            *(uint *)((int)&CStack_90 + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&CStack_114 + (uint)bVar7 * -8 + 4);
            this_ptr = g_CGorePtr;
            *(uint *)((int)&CStack_90 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                 *(uint *)((int)&CStack_114 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            core_gore_cpp_FUN_004cec40(this_ptr,pCVar8,blood_type);
            *(uint *)&param_1->field_0xcdd0 = 1;
          }
          break;
        case 0xd:
          iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
          if (iVar1 == 0) goto switchD_00593661_caseD_e;
          puStack_14 = (byte *)core_motion_cpp_FUN_004fc930((CMotionController *)pCStack_20);
          if ((float)_DAT_005d91db < (float)puStack_14) {
            core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0
                      ((CMotionController *)pCStack_20,"stand",0.0);
          }
          break;
        case 0xe:
switchD_00593661_caseD_e:
          if (*(int *)&param_1[1].field_0x14 == 0) {
            *(uint *)&param_1[1].field_0x14 = 1;
            *(uint *)&param_1[1].field_0x10 = 0;
            core_charactr_cpp_FUN_0042fbd0(param_1,pfStack_24,0,0,0x42480000,0,0x40000000);
          }
          break;
        case 0xf:
          if (*(int *)&param_1[1].field_0x14 == 1) {
            *(uint *)&param_1[1].field_0x10 = 0;
            *(uint *)&param_1[1].field_0x14 = 0;
            core_charactr_cpp_FUN_0042fbd0(param_1,pfStack_24,0,0,0x42480000,0,0x40000000);
            *(uint *)&param_1[1].field_0x3c = 0x40800000;
            *(uint *)&param_1[1].field_0x38 = 1;
          }
        }
      }
      else {
        uVar2 = *(uint *)&param_1->field_0x273c;
        if (uVar2 < 2) {
          if (uVar2 == 1) {
LAB_005923d6:
            if (iVar1 != 2) {
              core_mattnntt_cpp_FUN_00593a90(param_1);
            }
          }
          else {
LAB_00592a8c:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)pCStack_20,0,1);
          }
        }
        else {
          if (uVar2 < 3) goto LAB_005923d6;
          if (uVar2 != 3) goto LAB_00592a8c;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)pCStack_20,0,1);
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1)
          ;
        }
        pfStack_28[2] = 0.0;
        pfStack_28[1] = pfStack_28[2];
        *pfStack_28 = pfStack_28[1];
      }
      if (0.0 < *(float *)&param_1->field_0xcde0) {
        *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
      }
      iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
      if ((iVar1 != 0) && (*(int *)&param_1[1].field_0x50 == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)pCStack_20,0xd,1);
        *(uint *)&param_1[1].field_0x50 = 1;
      }
      core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
      fStack_300 = *pfStack_30 * param_2;
      fStack_2fc = pfStack_30[1] * param_2;
      fStack_2f8 = pfStack_30[2] * param_2;
      fStack_2b8 = *pfStack_30 * param_2;
      *(uint *)((int)&stack0xfffffd4c + (uint)bVar7 * -8) =
           *(uint *)((int)&stack0xfffffd04 + (uint)bVar7 * -8);
      *(uint *)((int)&stack0xfffffd50 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)((int)&stack0xfffffd08 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      fStack_2d0 = fStack_2b8 + *pfStack_2c;
      fStack_2cc = fStack_2b4 + pfStack_2c[1];
      fStack_2c8 = fStack_2b0 + pfStack_2c[2];
      fStack_168 = fStack_2b8 + *pfStack_2c;
      afStack_1ac[(uint)bVar7 * -2 + 0x12] = *(float *)((int)&stack0xfffffd34 + (uint)bVar7 * -8);
      pfVar11 = pfStack_2c;
      afStack_1ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
           *(float *)((int)&stack0xfffffd38 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      fStack_d8 = fStack_168 + *pfStack_28;
      afStack_d4[0] = fStack_164 + pfStack_28[1];
      afStack_d4[1] = fStack_160 + pfStack_28[2];
      auStack_2ac._0_4_ = fStack_168 + *pfStack_28;
      *(float *)(auStack_2ac + (uint)bVar7 * -8 + 4) = afStack_d4[(uint)bVar7 * -2];
      *(float *)(auStack_2ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      pfVar11[2] = 0.0;
      pfVar11[1] = pfVar11[2];
      *pfVar11 = pfVar11[1];
      pfStack_28[2] = 0.0;
      pfStack_28[1] = pfStack_28[2];
      *pfStack_28 = pfStack_28[1];
      core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)auStack_2ac);
    }
    core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCStack_20);
    core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)&param_1->field_0x2628,g_CWeaponClassInfo.name_hash);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x154) + 0xc))(iVar1,param_2);
      return;
    }
  }
  return;
}
