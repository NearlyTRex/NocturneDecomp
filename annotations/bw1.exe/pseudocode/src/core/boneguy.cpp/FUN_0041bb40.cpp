// Name: core_boneguy.cpp_FUN_0041bb40
// Address: 0041bb40
// Address Range: [[0041bb40, 0041c71b]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_0041bb40(CBoneGuy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boneguy_cpp_FUN_0041bb40(CBoneGuy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  float *pfVar3;
  SMotion *pSVar4;
  int iVar5;
  CBoneGuy *pCVar6;
  uint uVar7;
  CPathMap *path_map;
  float *pfVar8;
  byte bVar9;
  float afStackY_19a4 [1478];
  CVector3f *pCVar10;
  float fVar11;
  SDamageInfo *damage_info;
  float fVar12;
  SDamageInfo aSStack_270 [4];
  uint uStack_26c;
  CBoneGuy *pCStack_23c;
  CBoneGuy *pCStack_238;
  SDamageInfo aSStack_234 [4];
  uint uStack_230;
  uint uStack_200;
  CBoneGuy *pCStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float afStack_1e0 [6];
  uint uStack_1c8;
  float afStack_1c4 [7];
  float fStack_1a8;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  byte auStack_154 [12];
  uint uStack_148;
  float afStack_144 [4];
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float afStack_120 [2];
  CVector3f CStack_118;
  float fStack_10c;
  float afStack_108 [4];
  float fStack_f8;
  CVector3f CStack_f4;
  byte auStack_e8 [8];
  float fStack_e0;
  uint uStack_dc;
  float afStack_d8 [4];
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  byte auStack_88 [8];
  float fStack_80;
  float fStack_7c;
  float afStack_78 [4];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_44;
  float afStack_40 [2];
  float fStack_38;
  byte *puStack_34;
  float *pfStack_30;
  byte *puStack_2c;
  byte *puStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  float fStack_14;
  
  bVar9 = 0;
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,&param_1->field_0xc27c);
  if (iVar2 != 0) {
    *(uint *)&param_1->field_0x2538 = 0;
    *(uint *)&param_1->field_0xc1d4 = 1;
    *(uint *)&param_1->field_0xc88c = 0;
    if (*(int *)&param_1->field_0xc888 == 0) {
      core_boneguy_cpp_FUN_0041d540(param_1);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
              ((CMotionController *)&param_1->field_0x158,5,0.0);
  }
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) goto LAB_0041be0f;
  if ((*(int *)&param_1->field_0xc888 == 1) && (0.0 < *(float *)&param_1->field_0x2538)) {
    fVar11 = *(float *)&param_1->field_0xc88c + param_2;
    *(float *)&param_1->field_0xc88c = fVar11;
    if (fVar11 <= *(float *)&param_1->field_0xc2e0) {
      return;
    }
    core_boneguy_cpp_FUN_0041d760(param_1);
  }
  if (*(int *)&param_1->field_0xc888 == 2) {
    fVar11 = param_2 / _DAT_005fcc38 + *(float *)&param_1->field_0xc88c;
    *(float *)&param_1->field_0xc88c = fVar11;
    if (fVar11 < 1.0) {
      iStack_24 = 0;
      if (*(int *)&param_1->field_0xc2e4 < 1) {
        return;
      }
      puStack_34 = &param_1->field_0xc2e8;
      pfStack_30 = (float *)&param_1->field_0xc88c;
      puStack_28 = &param_1->field_0xc300;
      puStack_2c = &param_1->field_0xc310;
      pfStack_20 = (float *)&param_1->field_0xc320;
      do {
        pfVar8 = pfStack_20;
        pfVar3 = (float *)(puStack_34 + iStack_24 * 0x48);
        fStack_44 = pfVar3[0x11];
        fStack_184 = *pfVar3 - *pfStack_20;
        fStack_180 = pfVar3[1] - pfStack_20[1];
        fStack_17c = pfVar3[2] - pfStack_20[2];
        fStack_a0 = *pfVar3 - *pfStack_20;
        afStack_d8[(uint)bVar9 * -2 + 0xf] = afStack_1c4[(uint)bVar9 * -2 + 0x11];
        afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10] =
             afStack_1c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x12];
        afStack_78[2] = fStack_a0 * *pfStack_30;
        afStack_78[3] = fStack_9c * *pfStack_30;
        fStack_68 = fStack_98 * *pfStack_30;
        fStack_64 = fStack_a0 * *pfStack_30;
        afStack_78[(uint)bVar9 * -2 + 6] = afStack_78[(uint)bVar9 * -2 + 3];
        afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        fStack_58 = *pfVar8 + fStack_64;
        fStack_54 = pfVar8[1] + fStack_60;
        fStack_50 = pfVar8[2] + fStack_5c;
        afStack_d8[2] = *pfVar8 + fStack_64;
        afStack_d8[(uint)bVar9 * -2 + 3] = afStack_78[(uint)bVar9 * -2 + 9];
        afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
        core_xform_cpp_FUN_005b7940(puStack_28,puStack_2c,*(uint *)&param_1->field_0xc88c);
        uStack_1c8 = afStack_1c4[3];
        afStack_1c4[(uint)bVar9 * -2] = afStack_1c4[(uint)bVar9 * -2 + 4];
        afStack_1c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_1c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
        (afStack_1c4 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
             (afStack_1c4 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
        core_xform_cpp_FUN_005b7c00(&uStack_1c8);
        fStack_ac = fStack_b8;
        afStack_d8[(uint)bVar9 * -2 + 0xc] = afStack_d8[(uint)bVar9 * -2 + 9];
        afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
             afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
        fStack_ac = *(float *)&param_1->field_0xc88c * (float)_DAT_005d4761 + fStack_ac;
        *(float *)((int)fStack_44 + 0x20) = afStack_d8[2];
        *(float *)((int)fStack_44 + 0x24) = afStack_d8[3];
        *(uint *)((int)fStack_44 + 0x28) = uStack_c8;
        if ((float *)((int)fStack_44 + 0x30) != afStack_d8 + 0xb) {
          *(float *)((int)fStack_44 + 0x30) = fStack_ac;
          *(uint *)((int)fStack_44 + 0x34) = uStack_a8;
          *(uint *)((int)fStack_44 + 0x38) = uStack_a4;
        }
        if ((float *)((int)fStack_44 + 0xcd0) != afStack_d8 + 2) {
          *(float *)((int)fStack_44 + 0xcd0) = afStack_d8[2];
          *(float *)((int)fStack_44 + 0xcd4) = afStack_d8[3];
          *(uint *)((int)fStack_44 + 0xcd8) = uStack_c8;
        }
        if ((float *)((int)fStack_44 + 0xcdc) != afStack_d8 + 0xb) {
          *(float *)((int)fStack_44 + 0xcdc) = fStack_ac;
          *(uint *)((int)fStack_44 + 0xce0) = uStack_a8;
          *(uint *)((int)fStack_44 + 0xce4) = uStack_a4;
        }
        iStack_24 = iStack_24 + 1;
        puStack_28 = puStack_28 + 0x48;
        puStack_2c = puStack_2c + 0x48;
        pfStack_20 = pfStack_20 + 0x12;
      } while (iStack_24 < *(int *)&param_1->field_0xc2e4);
      return;
    }
    iVar2 = 0;
    core_skeleton_cpp_FUN_00569ae0(&param_1->field_0x158);
    pCVar6 = param_1;
    if (0 < *(int *)&param_1->field_0xc2e4) {
      do {
        core_mission_cpp_FUN_0051b740(0x01D2C900,*(uint *)&pCVar6->field_0xc32c,1);
        *(uint *)&pCVar6->field_0xc32c = 0;
        iVar2 = iVar2 + 1;
        pCVar6 = (CBoneGuy *)&pCVar6->field_0x48;
      } while (iVar2 < *(int *)&param_1->field_0xc2e4);
    }
    *(uint *)&param_1->field_0xc888 = 0;
    fVar11 = *(float *)&param_1->field_0xc2e0 * (float)_DAT_005d4749;
    *(uint *)&param_1->field_0x2538 = 0x42c80000;
    *(float *)&param_1->field_0xc2e0 = fVar11;
    if (fVar11 <= (float)_DAT_005d4751) {
      *(uint *)&param_1->field_0xc2e0 = 0x40200000;
    }
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  afStack_40[0] = param_2 * *(float *)&param_1->field_0xc1d0;
  this_ptr = &param_1->field_0x158;
  while (0.0 < afStack_40[0]) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)this_ptr,afStack_40);
    if (iVar2 == 100) {
      iVar2 = *(int *)&param_1->field_0xc274;
      if (iVar2 != 0) {
        *(uint *)&param_1->field_0xc274 = 0;
        core_charactr_cpp_FUN_004325b0(param_1,1,iVar2,0x3e4ccccd,0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar2);
    }
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320();
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)this_ptr);
  iVar2 = *(int *)(pSVar4 + 0x24);
  iStack_1c = iVar2;
  iVar5 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar2) {
    case 0:
      iVar2 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
      if (iVar2 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))();
        if (*(int *)&param_1->field_0xc1e8 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))();
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        iVar2 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr,0,1);
        }
      }
      else {
        iVar2 = core_boneguy_cpp_FUN_0041c9a0(param_1,param_2);
        if (iVar2 == 0) {
          fStack_38 = 0x40000000;
          if (*(int *)&param_1->field_0x2628 != 0) {
            fStack_38 = 0x40400000;
          }
          fVar12 = 0.17453292;
          auStack_154._0_4_ = 0;
          auStack_154._8_4_ = fStack_38;
          pCVar10 = (CVector3f *)auStack_154;
          auStack_154._4_4_ = 0;
          fVar11 = 0.5;
          path_map = (CPathMap *)
                     (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))();
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),path_map,pCVar10,
                             fVar11,fVar12);
          if (iVar2 < 0) {
            engine_console_cpp_FUN_00445430
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,0,1);
          }
          else {
            fVar11 = *(float *)&param_1->field_0x20 -
                     *(float *)(*(int *)&param_1->field_0xc1e8 + 0x20);
            fVar12 = *(float *)&param_1->field_0x28 -
                     *(float *)(*(int *)&param_1->field_0xc1e8 + 0x28);
            if ((SQRT(fVar12 * fVar12 + fVar11 * fVar11) <= fStack_38 + (float)_DAT_005d4749) &&
               (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
              if (*(int *)&param_1->field_0x2628 == 0) {
                iVar2 = 2;
              }
              else {
                iVar2 = 6;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,iVar2,1);
              sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc278);
              (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))();
              *(uint *)&param_1->field_0xc1e4 = 0x3f800000;
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_270);
      uStack_26c = core_actor_cpp_FUN_0040cc00();
      damage_info = aSStack_270;
      pCStack_23c = param_1;
      pCStack_238 = param_1;
      fVar11 = 0.4;
      fStack_14 = (float)uStack_26c;
      core_xform_cpp_FUN_005b5080();
      uStack_dc = uStack_148;
      afStack_d8[(uint)bVar9 * -2] = afStack_144[(uint)bVar9 * -2];
      afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           afStack_144[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      core_actor_cpp_FUN_00408b40();
      pCVar10 = &CStack_f4;
      CStack_f4._0_4_ = CStack_118._0_4_;
      *(uint *)(auStack_e8 + (uint)bVar9 * -8 + -8) =
           *(uint *)((int)&CStack_118 + (uint)bVar9 * -8 + 4);
      pCVar6 = param_1;
      *(uint *)(auStack_e8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -4) =
           *(uint *)((int)&CStack_118 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar6,pCVar10,fVar11,damage_info);
      break;
    case 5:
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        *(uint *)&param_1->field_0xc1d4 = 1;
      }
      break;
    case 6:
      iVar2 = *(int *)&param_1->field_0x2628;
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
        pfVar8 = afStack_1e0;
        pfVar3 = &fStack_1f8;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar3 = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar9 * -2 + 1;
          pfVar3 = pfVar3 + (uint)bVar9 * -2 + 1;
        }
        fStack_178 = fStack_1f8 + fStack_1ec;
        fStack_174 = fStack_1f4 + fStack_1e8;
        fStack_170 = fStack_1f0 + fStack_1e4;
        fStack_160 = fStack_1f8 + fStack_1ec;
        afStack_1c4[(uint)bVar9 * -2 + 0x1a] = afStack_1c4[(uint)bVar9 * -2 + 0x14];
        afStack_1c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1b] =
             afStack_1c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x15];
        fStack_94 = fStack_160 * _DAT_005d4759;
        fStack_90 = fStack_15c * _DAT_005d4759;
        fStack_8c = fStack_158 * _DAT_005d4759;
        fStack_7c = fStack_160 * _DAT_005d4759;
        afStack_78[(uint)bVar9 * -2] = afStack_d8[(uint)bVar9 * -2 + 0x12];
        afStack_78[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13];
        if ((float *)auStack_88 != &fStack_7c) {
          auStack_88._0_4_ = fStack_7c;
          auStack_88._4_4_ = afStack_78[0];
        }
        if (auStack_e8 != auStack_88) {
          auStack_e8._0_4_ = auStack_88._0_4_;
          auStack_e8._4_4_ = auStack_88._4_4_;
        }
        fStack_e0 = fStack_1f0;
        fStack_80 = fStack_1e4;
        core_actor_cpp_FUN_00408b40();
        afStack_144[2] = fStack_16c;
        afStack_144[(uint)bVar9 * -2 + 3] = afStack_1c4[(uint)bVar9 * -2 + 0x17];
        afStack_144[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             afStack_1c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x18];
        if ((float *)auStack_e8 != afStack_144 + 2) {
          auStack_e8._0_4_ = afStack_144[2];
          auStack_e8._4_4_ = afStack_144[3];
          fStack_e0 = fStack_134;
        }
        core_actor_cpp_FUN_00408b40();
        fStack_10c = fStack_1a8;
        afStack_108[(uint)bVar9 * -2] = afStack_1c4[(uint)bVar9 * -2 + 8];
        afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_1c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9];
        if ((float *)auStack_88 != &fStack_10c) {
          auStack_88._0_4_ = fStack_10c;
          auStack_88._4_4_ = afStack_108[0];
          fStack_80 = afStack_108[1];
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_234);
        uStack_230 = core_actor_cpp_FUN_0040cc00();
        uStack_200 = *(uint *)&param_1->field_0x2628;
        pCStack_1fc = param_1;
        fStack_14 = (float)uStack_230;
        core_enemy_cpp_FUN_004a0810
                  ((CEnemy *)param_1,(CVector3f *)auStack_e8,(CVector3f *)auStack_88,aSStack_234);
      }
    }
  }
  else {
    uVar1 = *(uint *)&param_1->field_0x273c;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_0041bfb6:
        iVar2 = 1;
      }
      else {
LAB_0041c243:
        iVar2 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,iVar2,1);
    }
    else {
      if (uVar1 < 3) goto LAB_0041bfb6;
      if (uVar1 != 3) goto LAB_0041c243;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)this_ptr,0,1);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  }
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)&param_1->field_0xc1e8;
    if ((iVar2 != 0) &&
       (pCVar6 = (CBoneGuy *)(**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), pCVar6 == param_1
       )) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
    }
    core_charactr_cpp_FUN_0042d700();
    fStack_190 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_18c = *(float *)&param_1->field_0x251c * param_2;
    fStack_188 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_19c = fStack_190;
    afStack_1c4[(uint)bVar9 * -2 + 0xb] = afStack_1c4[(uint)bVar9 * -2 + 0xe];
    afStack_1c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xc] =
         afStack_1c4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xf];
    afStack_108[2] = fStack_19c + *(float *)&param_1->field_0x250c;
    afStack_108[3] = fStack_198 + *(float *)&param_1->field_0x2510;
    fStack_f8 = fStack_194 + *(float *)&param_1->field_0x2514;
    fStack_c4 = afStack_108[2];
    afStack_d8[(uint)bVar9 * -2 + 6] = afStack_108[(uint)bVar9 * -2 + 3];
    afStack_d8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    fStack_130 = fStack_c4 + *(float *)&param_1->field_0x249c;
    fStack_12c = fStack_c0 + *(float *)&param_1->field_0x24a0;
    fStack_128 = fStack_bc + *(float *)&param_1->field_0x24a4;
    fStack_124 = fStack_130;
    afStack_120[(uint)bVar9 * -2] = afStack_144[(uint)bVar9 * -2 + 6];
    afStack_120[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_144[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_124);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  if ((iStack_1c == 1) &&
     (iVar2 = sound_sndmain_cpp_FUN_00574010
                        ((double)*(float *)&param_1->field_0x20,
                         (double)*(float *)&param_1->field_0x24,
                         (double)*(float *)&param_1->field_0x28,0x42c80000), iVar2 != 0)) {
    iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc278);
    if (iVar2 != 0) {
      return;
    }
    sound_sndmain_cpp_FUN_00572ac0();
    iVar2 = 2;
    fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0,0x3f800000);
    sound_sndmain_cpp_FUN_00572a50((double)fStack_14,iVar2);
    uVar7 = (**(code **)(*(int *)&param_1->field_0x154 + 0x30))();
    *(uint *)&param_1->field_0xc278 = uVar7;
    sound_sndmain_cpp_FUN_00572b40();
    return;
  }
LAB_0041be0f:
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc278);
  return;
}
