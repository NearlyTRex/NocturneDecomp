// Name: core_shadow.cpp_FUN_005438d0
// Address: 005438d0
// Address Range: [[005438d0, 00544fc1]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_005438d0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_005438d0(CEnemy *param_1,float param_2)

{
  uint uVar1;
  CGame *pCVar2;
  SMotion *pSVar3;
  int iVar4;
  CEnemy *pCVar5;
  CSkeleton *pCVar6;
  CPathMap *path_map;
  int iVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  byte *puVar11;
  float *pfVar12;
  byte bVar13;
  float10 fVar14;
  float10 fVar15;
  float afStackY_1238 [973];
  uint *puVar16;
  CVector3f *direction;
  float fVar17;
  float fVar18;
  SDamageInfo aSStack_2ec [4];
  uint uStack_2e8;
  uint uStack_2bc;
  CEnemy *pCStack_2b8;
  CEnemy *pCStack_2b4;
  float afStack_2b0 [6];
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float afStack_280 [6];
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float afStack_24c [4];
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float afStack_21c [4];
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  float afStack_1cc [3];
  uint uStack_1c0;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float afStack_174 [4];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  uint uStack_154;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  byte auStack_13c [8];
  float fStack_134;
  float fStack_130;
  float afStack_12c [5];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [4];
  float fStack_f8;
  uint uStack_f4;
  uint auStack_e8 [3];
  uint auStack_dc [3];
  uint uStack_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint auStack_b8 [3];
  uint uStack_ac;
  float fStack_a8;
  uint auStack_a0 [3];
  uint auStack_94 [3];
  float afStack_88 [3];
  byte auStack_7c [12];
  uint uStack_70;
  float afStack_6c [5];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMotionController *pCStack_28;
  float fStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar13 = 0;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  fStack_38 = *(float *)&param_1->field_0x160;
  iVar9 = *(int *)(pSVar3 + 0x24);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  fStack_2c = (float)*(int *)(pSVar3 + 100);
  core_charactr_cpp_FUN_00433c60(param_1,param_2);
  iVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[1].field_0x30);
    return;
  }
  if ((*(int *)(param_1 + 1) == 2) && (0.0 <= *(float *)&param_1[1].field_0x4c)) {
    *(float *)&param_1[1].field_0x4c = *(float *)&param_1[1].field_0x4c - param_2;
  }
  fStack_44 = param_2 * *(float *)&param_1->field_0xcdcc * *(float *)&param_1[1].field_0x90;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  while (0.0 < fStack_44) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,afStack_6c + 10);
    core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,iVar4);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  if (*(int *)(param_1 + 1) == 2) {
    *(float *)&param_1->field_0x2528 = *(float *)&param_1->field_0x2528 * (float)_DAT_005d129e;
  }
  iVar4 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  pCVar2 = g_CGamePtr;
  if (iVar4 != 0) {
    uVar1 = *(uint *)&param_1->field_0x273c;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar4 = 5;
        iVar9 = 1;
      }
      else {
LAB_00543fd8:
        iVar9 = 1;
        iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
      }
LAB_00543ab8:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,iVar4,iVar9);
    }
    else if (uVar1 < 3) {
      fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
      if ((float)_DAT_005d12de < fStack_14) {
        iVar9 = 1;
        iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
        iVar4 = iVar4 + 0xb;
        goto LAB_00543ab8;
      }
    }
    else {
      if (uVar1 != 3) goto LAB_00543fd8;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,0,1);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    goto LAB_00543af0;
  }
  switch(iVar9) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_00544f80_caseD_0;
  case 5:
  case 0xb:
  case 0xc:
    if (*(int *)&param_1[1].field_0x68 != 0) {
      fVar17 = *(float *)&param_1[1].field_0x70 - param_2;
      *(float *)&param_1[1].field_0x70 = fVar17;
      if (0.0 < fVar17) {
        core_charactr_cpp_FUN_004310e0
                  (param_1,*(uint *)&param_1[1].field_0x68,0x3f800000,0x3f800000,
                   &param_1[1].field_0x6c);
        uVar1 = *(uint *)&param_1[1].field_0x6c;
        if (uVar1 == 0) {
LAB_00544b88:
          iVar7 = 1;
          iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,iVar4,iVar7);
          *(uint *)&param_1[1].field_0x68 = 0;
        }
        else {
          if (uVar1 < 2) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,5,1);
          }
          else {
            if (uVar1 != 2) goto LAB_00544b88;
            fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
            if ((float)_DAT_005d12d6 < fStack_14) {
              *(int *)&param_1[1].field_0x78 = *(int *)&param_1[1].field_0x78 + 1;
            }
            if (2 < *(int *)&param_1[1].field_0x78) {
              fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
              if ((float)_DAT_005d12de < fStack_14) {
                iVar7 = 1;
                iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,iVar4 + 0xb,iVar7);
                *(uint *)&param_1[1].field_0x78 = 0;
              }
            }
          }
          if (*(int *)&param_1[1].field_0x68 != 0) break;
        }
      }
      else {
        *(uint *)&param_1[1].field_0x68 = 0;
        *(uint *)&param_1[1].field_0x70 = 0;
      }
    }
    (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
    iVar4 = *(int *)&param_1->field_0xcde4;
    pCStack_28 = (CMotionController *)&param_1->field_0x158;
    if (iVar4 == 0) {
      iVar4 = 1;
      iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,iVar9,iVar4);
    }
    else {
      fStack_1b4 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
      fStack_1b0 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
      fStack_1ac = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
      fStack_130 = fStack_1b4;
      afStack_12c[(uint)bVar13 * -2] = afStack_21c[(uint)bVar13 * -2 + 0x1b];
      afStack_12c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
      fStack_20 = SQRT(afStack_12c[1] * afStack_12c[1] +
                       fStack_130 * fStack_130 + afStack_12c[0] * afStack_12c[0]);
      if (*(float *)&param_1->field_0xcddc < fStack_20) {
        iVar4 = 1;
        *(uint *)&param_1->field_0xcde4 = 0;
        iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,iVar9,iVar4);
      }
      else if (((fStack_20 <= _DAT_005e3d4c + _DAT_005d12e6) || (_DAT_005e3d4c + 1.0 <= fStack_20))
              || (iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3), iVar4 == 1)) {
        auStack_7c._8_4_ = 0x40400000;
        fStack_40 = 0x40400000;
        iVar4 = *(int *)&param_1->field_0xcde4;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        auStack_7c._0_4_ = 0;
        auStack_7c._4_4_ = 0;
        fVar18 = 0.17453292;
        direction = (CVector3f *)auStack_7c;
        fVar17 = 0.5;
        path_map = (CPathMap *)(**(code **)(*(int *)(iVar4 + 0x154) + 0xc4))(iVar4);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)param_1,(CVector3f *)(iVar4 + 0x20),path_map,direction,
                           fVar17,fVar18);
        if (iVar7 < 0) {
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1)
          ;
          iVar4 = 1;
          iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,iVar9,iVar4);
        }
        else if (iVar7 < 1) {
          iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(uint *)&param_1[1].field_0x34,g_CTrapClassInfo.name_hash);
          if (iVar7 == 0) {
            fStack_220 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
            afStack_21c[0] = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
            afStack_21c[1] = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
            afStack_108[2] = fStack_220;
            afStack_108[(uint)bVar13 * -2 + 3] = afStack_21c[(uint)bVar13 * -2];
            afStack_108[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                 afStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            if (afStack_24c + 8 != afStack_108 + 2) {
              fStack_22c = afStack_108[2];
              fStack_228 = afStack_108[3];
              fStack_224 = fStack_f8;
            }
            fStack_34 = SQRT(fStack_224 * fStack_224 +
                             fStack_22c * fStack_22c + fStack_228 * fStack_228);
            fStack_24 = 20.0;
            if (*(int *)(param_1 + 1) == 1) {
              fStack_24 = 10.0;
            }
            if (*(int *)(param_1 + 1) == 2) {
              fStack_24 = 10.0;
            }
            puVar11 = &param_1->field_0x158;
            pCStack_1c = (CMotionController *)puVar11;
            if (fStack_24 < fStack_34) {
              core_vecdir_cpp_FUN_00576250(afStack_24c + 8);
              uStack_ac = uStack_1c0;
              afStack_108[(uint)bVar13 * -2 + 0x18] = afStack_21c[(uint)bVar13 * -2 + 0x18];
              afStack_108[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
                   afStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
              fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                           (fStack_a8 - *(float *)&param_1->field_0x34);
              if (ABS(fStack_14) < (float)_DAT_005d12ee) {
                fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_1c);
                if ((float)_DAT_005d12de < fStack_14) {
                  iVar4 = 1;
                  iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (pCStack_1c,iVar9 + 0xb,iVar4);
                }
                iVar9 = core_actor_cpp_FUN_0040cf40(0.15);
                if (iVar9 != 0) {
                  core_shadow_cpp_FUN_00545040(param_1);
                }
                iVar9 = 0;
                iVar4 = 0;
                while (iVar4 < *(int *)&g_CDemonSetPtr->field_0x150fec) {
                  pCVar5 = (CEnemy *)
                           core_actor_cpp_castToClassHash_FUN_0040c840
                                     (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar9),
                                      g_CShadowClassInfo.name_hash);
                  if ((pCVar5 == (CEnemy *)0x0) || (pCVar5 == param_1)) {
                    iVar4 = iVar4 + 1;
                    iVar9 = iVar9 + 4;
                  }
                  else {
                    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                       ((CMotionController *)&pCVar5->field_0x158);
                    if ((*(int *)(pSVar3 + 0x24) == 0xb) ||
                       (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                           ((CMotionController *)&pCVar5->field_0x158),
                       *(int *)(pSVar3 + 0x24) == 0xc)) {
                      iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
                      if (iVar9 == 1) {
                        *(float *)&param_1->field_0x34 =
                             *(float *)&param_1->field_0x34 + _DAT_005d12fe;
                      }
                      if (iVar9 == 2) {
                        *(float *)&param_1->field_0x34 =
                             *(float *)&param_1->field_0x34 + _DAT_005d1302;
                      }
                      break;
                    }
                    iVar4 = iVar4 + 1;
                    iVar9 = iVar9 + 4;
                  }
                }
              }
            }
            else if (fStack_34 < 0x40400000 * _DAT_005d12c2) {
              if ((iVar9 == 5) &&
                 (fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar11),
                 (float)_DAT_005d12de < fStack_14)) {
                iVar7 = 1;
                iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)puVar11,iVar4,iVar7);
              }
              if ((iVar9 == 0xb) || (iVar9 == 0xc)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,5,1);
              }
            }
          }
        }
        else if (*(float *)&param_1->field_0xcde0 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,6,1);
          iVar9 = core_charactr_cpp_FUN_004348b0(param_1,&DAT_005d1293);
          *(int *)&param_1[1].field_0x68 = iVar9;
          if (iVar9 != 0) {
            fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x40800000,0x41400000);
            *(float *)&param_1[1].field_0x70 = fStack_14;
          }
          iVar9 = core_actor_cpp_FUN_0040cf40(0.8);
          if (iVar9 != 0) {
            core_shadow_cpp_FUN_00545040(param_1);
          }
        }
        fVar17 = *(float *)&param_1[1].field_0x28 - param_2;
        *(float *)&param_1[1].field_0x28 = fVar17;
        if (fVar17 < 0.0) {
          core_shadow_cpp_FUN_00545040(param_1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_28,7,1);
        iVar9 = core_charactr_cpp_FUN_004348b0(param_1,&DAT_005d1270);
        *(int *)&param_1[1].field_0x68 = iVar9;
        if (iVar9 != 0) {
          fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x40800000,0x41400000);
          *(float *)&param_1[1].field_0x70 = fStack_14;
        }
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_2ec);
    uStack_2e8 = *(uint *)&param_1->field_0xce5c;
    uStack_2bc = 0x6d;
    pCStack_2b8 = param_1;
    pCStack_2b4 = param_1;
    core_xform_cpp_FUN_00583260
              (&DAT_02cfd900,&param_1->field_0xfd8 + *(int *)&param_1[1].field_0xc * 0x30,0x3f800000
               ,aSStack_2ec);
    auStack_dc[0] = uStack_154;
    afStack_108[(uint)bVar13 * -2 + 0xc] = afStack_174[(uint)bVar13 * -2 + 9];
    afStack_108[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
         afStack_174[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    core_actor_cpp_FUN_00408b80(param_1,auStack_dc);
    afStack_1cc[0] = (float)uStack_d0;
    afStack_21c[(uint)bVar13 * -2 + 0x15] = afStack_108[(uint)bVar13 * -2 + 0xf];
    afStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
         afStack_108[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
    core_enemy_cpp_FUN_004893f0(param_1,afStack_21c + 0x14);
    uStack_2e8 = *(uint *)&param_1->field_0xce5c;
    pCStack_2b8 = param_1;
    pCStack_2b4 = param_1;
    core_xform_cpp_FUN_00583260
              (&DAT_02cfd900,&param_1->field_0xfd8 + *(int *)&param_1[1].field_0x8 * 0x30,0x3f800000
               ,aSStack_2ec);
    puVar16 = auStack_b8;
    auStack_b8[0] = uStack_70;
    afStack_108[(uint)bVar13 * -2 + 0x15] = afStack_6c[(uint)bVar13 * -2];
    afStack_108[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
         afStack_6c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    core_actor_cpp_FUN_00408b80(param_1,puVar16);
    puVar16 = auStack_e8;
    auStack_e8[0] = afStack_6c[2];
    afStack_108[(uint)bVar13 * -2 + 9] = afStack_6c[(uint)bVar13 * -2 + 3];
    pCVar5 = param_1;
    afStack_108[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
         afStack_6c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    core_enemy_cpp_FUN_004893f0(pCVar5,puVar16);
    uStack_2e8 = *(uint *)&param_1->field_0xce5c;
    pCStack_2b8 = param_1;
    pCStack_2b4 = param_1;
    core_xform_cpp_FUN_00583260
              (&DAT_02cfd900,&param_1->field_0xfd8 + *(int *)&param_1[1].field_0x10 * 0x30,
               0x3f800000,aSStack_2ec);
    puVar16 = auStack_a0;
    auStack_a0[0] = uStack_f4;
    afStack_108[(uint)bVar13 * -2 + 0x1b] = afStack_108[(uint)bVar13 * -2 + 6];
    afStack_108[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
         afStack_108[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
    core_actor_cpp_FUN_00408b80(param_1,puVar16);
    puVar16 = auStack_94;
    auStack_94[0] = uStack_1d8;
    afStack_108[(uint)bVar13 * -2 + 0x1e] = afStack_21c[(uint)bVar13 * -2 + 0x12];
    pCVar5 = param_1;
    afStack_108[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
         afStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
    core_enemy_cpp_FUN_004893f0(pCVar5,puVar16);
    iVar9 = *(int *)&param_1->field_0xcde4;
    if ((iVar9 != 0) && (iVar9 = (**(code **)(*(int *)(iVar9 + 0x154) + 0x10c))(iVar9), iVar9 != 0))
    {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,10,1);
    }
    core_shadow_cpp_FUN_00545080(param_1);
    break;
  default:
    *(uint *)&param_1[1].field_0x7c = 1;
    *(uint *)&param_1[1].field_0x84 = 65000;
switchD_00544f80_caseD_0:
    *(uint *)&param_1[1].field_0x7c = 1;
    *(uint *)&param_1[1].field_0x84 = 65000;
    iVar9 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
    if (iVar9 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,5,1);
      break;
    }
    if (*(int *)&param_1[1].field_0x68 != 0) {
      fVar17 = *(float *)&param_1[1].field_0x70 - param_2;
      *(float *)&param_1[1].field_0x70 = fVar17;
      if (0.0 < fVar17) {
        core_charactr_cpp_FUN_004310e0
                  (param_1,*(uint *)&param_1[1].field_0x68,0x3f800000,0x3f800000,
                   &param_1[1].field_0x6c);
        uVar1 = *(uint *)&param_1[1].field_0x6c;
        if (uVar1 == 0) {
LAB_00544758:
          *(uint *)&param_1[1].field_0x68 = 0;
        }
        else {
          if (uVar1 < 2) {
            iVar4 = 1;
            iVar9 = 5;
          }
          else {
            if (uVar1 != 2) goto LAB_00544758;
            iVar4 = 1;
            iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
            iVar9 = iVar9 + 0xb;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,iVar9,iVar4);
          if (*(int *)&param_1[1].field_0x68 != 0) break;
        }
      }
      else {
        *(uint *)&param_1[1].field_0x68 = 0;
        *(uint *)&param_1[1].field_0x70 = 0;
      }
    }
    (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
    iVar9 = *(int *)&param_1->field_0xcde4;
    if (iVar9 != 0) {
      if (*(int *)&param_1[1].field_0x34 != 0) {
        fStack_19c = *(float *)(iVar9 + 0x20) - *(float *)&param_1->field_0x20;
        fStack_198 = *(float *)(iVar9 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_194 = *(float *)(iVar9 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_178 = fStack_19c;
        afStack_174[(uint)bVar13 * -2] = afStack_21c[(uint)bVar13 * -2 + 0x21];
        afStack_174[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             afStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
        fStack_30 = SQRT(afStack_174[1] * afStack_174[1] +
                         fStack_178 * fStack_178 + afStack_174[0] * afStack_174[0]);
        if ((*(float *)&param_1->field_0xcddc < fStack_30) || ((float)_DAT_005d12f6 < fStack_30)) {
          *(uint *)&param_1->field_0xcde4 = 0;
          break;
        }
      }
      if (*(int *)&param_1->field_0xcde4 == 0) {
        fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
        if ((float)_DAT_005d12de < fStack_14) {
          iVar4 = 1;
          iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,iVar9,iVar4);
        }
      }
      else {
        iVar9 = core_actor_cpp_FUN_0040cf40(0.4);
        if (iVar9 != 0) {
          core_shadow_cpp_FUN_00545040(param_1);
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,5,1);
      }
    }
    break;
  case 0xd:
  case 0xe:
    fVar14 = (((float10)fStack_2c - (float10)fStack_38) * (float10)_DAT_005d12a6) /
             (float10)fStack_2c;
    *(uint *)&param_1[1].field_0x7c = 0;
    iVar9 = round();
    *(int *)(iVar9 + 0xd0d8) = (int)ROUND(fVar14);
    fVar14 = (float10)*(float *)&pCVar2->field_0x314 * (float10)_DAT_005d12ae +
             (float10)*(float *)(iVar9 + 0xd098);
    *(float *)(iVar9 + 0xd098) = (float)fVar14;
    fVar15 = (float10)fsin(fVar14);
    fVar14 = (float10)fcos(fVar14);
    fStack_18 = (float)fVar15;
    fStack_3c = (float)fVar14;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
    pfVar10 = afStack_280;
    pfVar12 = &fStack_298;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar12 = *pfVar10;
      pfVar10 = pfVar10 + (uint)bVar13 * -2 + 1;
      pfVar12 = pfVar12 + (uint)bVar13 * -2 + 1;
    }
    fVar17 = (fStack_284 - fStack_290) * fStack_3c;
    fVar18 = (fStack_28c - fStack_298) * fStack_18 * (float)_DAT_005d12b6;
    afStack_174[2] = fStack_298 + fStack_28c;
    afStack_174[3] = fStack_294 + fStack_288;
    fStack_164 = fStack_290 + fStack_284;
    fStack_208 = fStack_298 + fStack_28c;
    afStack_21c[(uint)bVar13 * -2 + 6] = afStack_174[(uint)bVar13 * -2 + 3];
    afStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         afStack_174[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    auStack_13c._0_4_ = fVar18;
    fStack_134 = fVar17 * (float)_DAT_005d12b6;
    fStack_1e4 = fStack_208 * _DAT_005d12be;
    fStack_1e0 = fStack_204 * _DAT_005d12be;
    fStack_1dc = fStack_200 * _DAT_005d12be;
    afStack_12c[2] = fStack_208 * _DAT_005d12be;
    afStack_12c[(uint)bVar13 * -2 + 3] = afStack_21c[(uint)bVar13 * -2 + 0xf];
    afStack_12c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
    auStack_13c._4_4_ = afStack_12c[3];
    fStack_1f0 = fVar18 + *(float *)&param_1->field_0x20;
    fStack_1ec = afStack_12c[3] + *(float *)&param_1->field_0x24;
    fStack_1e8 = fStack_134 + *(float *)&param_1->field_0x28;
    fStack_118 = fStack_1f0;
    afStack_12c[(uint)bVar13 * -2 + 6] = afStack_21c[(uint)bVar13 * -2 + 0xc];
    afStack_12c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         afStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
    if ((float *)auStack_13c != afStack_12c + 5) {
      auStack_13c._0_4_ = fStack_118;
      auStack_13c._4_4_ = fStack_114;
      fStack_134 = fStack_110;
    }
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0
              ((CDemonGlobe *)0x270f7d8,(CVector3f *)auStack_13c);
    _DAT_0270f814 = 60000;
    DAT_0270f7f4 = 0x3a;
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30((CDemonGlobe *)0x270f7d8,6.0);
    _DAT_0270f7f8 = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(g_CDemonSetPtr,(CDemonGlobe *)0x270f7d8);
    puVar11 = &param_1->field_0x158;
    *(uint *)&param_1[1].field_0x88 = 1;
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)puVar11);
    fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)puVar11);
    fVar14 = (float10)_DAT_005d12c6;
    pow();
    fVar15 = (float10)_DAT_005d12ce;
    pow();
    *(float *)&param_1[1].field_0x80 = (float)((float10)1 + fVar14 / fVar15);
    iVar9 = 0;
    if (0 < *(int *)&pCVar6->field_0x1de78) {
      do {
        iVar9 = iVar9 + 1;
        *(uint *)(puVar11 + 0x514) = *(uint *)&param_1[1].field_0x80;
        puVar11 = puVar11 + 4;
      } while (iVar9 < *(int *)&pCVar6->field_0x1de78);
    }
    break;
  case 0xf:
    *(uint *)&param_1[1].field_0x84 = 0;
    *(uint *)&param_1[1].field_0x80 = 0x3f800000;
    *(uint *)&param_1->field_0x70 = 2;
    return;
  case 0x14:
    fVar14 = ((float10)fStack_38 * (float10)_DAT_005d12a6) / (float10)fStack_2c;
    *(uint *)&param_1[1].field_0x7c = 0;
    iVar9 = round();
    *(int *)(iVar9 + 0xd0d8) = (int)ROUND(fVar14);
  }
LAB_00543af0:
  *(uint *)&param_1->field_0x3270 = 0x40000000;
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  iVar9 = *(int *)(pSVar3 + 0x24);
  if ((((((iVar9 != 0xf) && (iVar9 != 0)) && (iVar9 != 1)) && ((iVar9 != 2 && (iVar9 != 3)))) &&
      (iVar9 != 4)) || (*(int *)&param_1->field_0xdc != 0)) {
    iVar9 = *(int *)&param_1->field_0xcde4;
    if ((iVar9 != 0) &&
       (pCVar5 = (CEnemy *)(**(code **)(*(int *)(iVar9 + 0x154) + 0xf4))(iVar9), pCVar5 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
    }
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    afStack_21c[2] = *(float *)&param_1->field_0x2518 * param_2;
    afStack_21c[3] = *(float *)&param_1->field_0x251c * param_2;
    fStack_20c = *(float *)&param_1->field_0x2520 * param_2;
    fStack_c4 = afStack_21c[2];
    afStack_108[(uint)bVar13 * -2 + 0x12] = afStack_21c[(uint)bVar13 * -2 + 3];
    afStack_108[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
         afStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    fStack_1a8 = fStack_c4 + *(float *)&param_1->field_0x249c;
    fStack_1a4 = fStack_c0 + *(float *)&param_1->field_0x24a0;
    fStack_1a0 = fStack_bc + *(float *)&param_1->field_0x24a4;
    fStack_238 = fStack_1a8;
    afStack_24c[(uint)bVar13 * -2 + 6] = afStack_21c[(uint)bVar13 * -2 + 0x1e];
    afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         afStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
    fStack_1fc = fStack_238 + *(float *)&param_1->field_0x250c;
    fStack_1f8 = fStack_234 + *(float *)&param_1->field_0x2510;
    fStack_1f4 = fStack_230 + *(float *)&param_1->field_0x2514;
    fStack_10c = fStack_1fc;
    afStack_108[(uint)bVar13 * -2] = afStack_21c[(uint)bVar13 * -2 + 9];
    afStack_108[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_21c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_10c);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  core_shadow_cpp_FUN_00545c80(param_1);
  if ((0.0 <= *(float *)&param_1[1].field_0x74) &&
     (param_2 = *(float *)&param_1[1].field_0x74 - param_2,
     *(float *)&param_1[1].field_0x74 = param_2, param_2 <= 0.0)) {
    fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x3f800000,0x40000000);
    *(float *)&param_1[1].field_0x74 = fStack_14;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
    pfVar10 = afStack_2b0;
    pfVar12 = &fStack_268;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar12 = *pfVar10;
      pfVar10 = pfVar10 + (uint)bVar13 * -2 + 1;
      pfVar12 = pfVar12 + (uint)bVar13 * -2 + 1;
    }
    fStack_148 = fStack_268 + fStack_25c;
    fStack_144 = fStack_264 + fStack_258;
    fStack_140 = fStack_260 + fStack_254;
    fStack_160 = fStack_268 + fStack_25c;
    afStack_174[(uint)bVar13 * -2 + 6] = afStack_174[(uint)bVar13 * -2 + 0xc];
    afStack_174[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         afStack_174[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
    pfVar10 = afStack_88;
    afStack_24c[2] = fStack_160 * _DAT_005d12be;
    afStack_24c[3] = fStack_15c * _DAT_005d12be;
    fStack_23c = fStack_158 * _DAT_005d12be;
    afStack_88[0] = fStack_160 * _DAT_005d12be;
    afStack_108[(uint)bVar13 * -2 + 0x21] = afStack_24c[(uint)bVar13 * -2 + 3];
    pCVar5 = param_1;
    afStack_108[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22] =
         afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    core_actor_cpp_FUN_00408b80(pCVar5,pfVar10);
    fStack_58 = fStack_250;
    afStack_6c[(uint)bVar13 * -2 + 6] = afStack_24c[(uint)bVar13 * -2];
    afStack_6c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         afStack_24c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    if (&fStack_184 != afStack_6c + 5) {
      fStack_184 = fStack_58;
      fStack_180 = fStack_54;
      fStack_17c = fStack_50;
    }
    iStack_190 = (int)ROUND(fStack_184 * _DAT_005e3d30);
    iStack_18c = (int)ROUND(fStack_180 * _DAT_005e3d30);
    iStack_188 = (int)ROUND(fStack_17c * _DAT_005e3d30);
    fStack_14 = (float)core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20
                                 (g_CDemonSetPtr,(CVector3i *)&iStack_190,(CVector3i *)0x0);
    if ((*(int *)&param_1[1].field_0x8c != 0) &&
       (_DAT_005e3d60 * (float)_DAT_005d1306 <= (float)(int)fStack_14)) {
      iVar4 = 1;
      iVar9 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,4);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,iVar9,iVar4);
      iVar9 = core_charactr_cpp_FUN_004348b0(param_1,&DAT_005d1295);
      *(int *)&param_1[1].field_0x68 = iVar9;
      if (iVar9 != 0) {
        uVar8 = core_actor_cpp_FUN_0040ce40(0x40400000,0x40c00000);
        *(uint *)&param_1[1].field_0x70 = uVar8;
      }
      *(float *)&param_1[1].field_0x74 = *(float *)&param_1[1].field_0x74 + _DAT_005d130e;
      return;
    }
  }
  return;
}
