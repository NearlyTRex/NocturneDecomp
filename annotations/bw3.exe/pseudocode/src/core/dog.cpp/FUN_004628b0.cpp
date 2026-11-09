// Name: core_dog.cpp_FUN_004628b0
// Address: 004628b0
// Address Range: [[004628b0, 00463459]]
// Convention: unknown
// Signature: void core_dog_cpp_FUN_004628b0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dog_cpp_FUN_004628b0(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  CEnemy *pCVar4;
  uint uVar5;
  CPathMap *path_map;
  byte bVar6;
  float afStackY_11a8 [997];
  float *pfVar7;
  CVector3f *direction;
  float fVar8;
  uint *puVar9;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_1fc [4];
  uint uStack_1f8;
  CEnemy *pCStack_1c8;
  CEnemy *pCStack_1c4;
  uint uStack_1c0;
  float afStack_1bc [4];
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  byte auStack_190 [12];
  uint uStack_184;
  float afStack_180 [5];
  float fStack_16c;
  float afStack_168 [4];
  float fStack_158;
  uint uStack_154;
  CVector3f CStack_148;
  uint uStack_13c;
  float afStack_138 [4];
  float fStack_128;
  uint uStack_124;
  CVector3f CStack_118;
  float fStack_10c;
  float afStack_108 [4];
  float fStack_f8;
  uint uStack_f4;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [3];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float afStack_c4 [3];
  float afStack_b8 [3];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(param_1,param_2);
  core_charactr_cpp_FUN_00432330(param_1,param_2,0);
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_44 = param_2 * *(float *)&param_1->field_0xcdcc;
  while (0.0 < fStack_44) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,afStack_108 + 0x31);
    core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,iVar2);
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  iVar2 = *(int *)(pSVar3 + 0x24);
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  iStack_28 = iVar2;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  if (iVar2 == 8) {
    *(float *)&param_1->field_0x2528 = *(float *)&param_1->field_0x2528 * (float)_DAT_005bbc44;
  }
  iVar2 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    switch(iStack_28) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_19c = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
      fStack_198 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
      fStack_194 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
      afStack_108[2] = fStack_19c;
      afStack_108[(uint)bVar6 * -2 + 3] = afStack_1bc[(uint)bVar6 * -2 + 9];
      afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
      core_vecdir_cpp_FUN_00576250(afStack_108 + 2);
      fVar8 = fStack_f8 * fStack_f8 +
              afStack_108[2] * afStack_108[2] + afStack_108[3] * afStack_108[3];
      uStack_1c0 = afStack_180[2];
      afStack_1bc[(uint)bVar6 * -2] = afStack_180[(uint)bVar6 * -2 + 3];
      afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      fStack_34 = (float)(((int)fVar8 >> 1) + _DAT_01d1a0a4);
      fStack_40 = fVar8;
      fStack_2c = fStack_34;
      fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                   (afStack_1bc[0] - *(float *)&param_1->field_0x34);
      if (ABS(fStack_14) < (float)_DAT_005bbc54) {
        if ((0.0 < *(float *)&param_1->field_0xcde0) &&
           (fStack_2c < _DAT_005de5b8 + (float)_DAT_005bbc5c)) break;
        if ((*(float *)&param_1->field_0xcde0 <= 0.0) && (fStack_34 <= _DAT_005de5b8)) {
          iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
          if (iVar2 < 0x32) {
            iVar2 = 0xb;
          }
          else {
            iVar2 = 0xc;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,iVar2,1);
          *(uint *)&param_1->field_0xcde0 = 0x40200000;
          break;
        }
      }
      iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
      pCStack_1c = (CMotionController *)&param_1->field_0x158;
      if (iVar2 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        iVar2 = *(int *)&param_1->field_0xcde4;
        if (iVar2 != 0) {
          fStack_70 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_6c = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_68 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_1a8 = fStack_70;
          afStack_1bc[(uint)bVar6 * -2 + 6] = afStack_108[(uint)bVar6 * -2 + 0x27];
          afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
               afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28];
          fStack_3c = fStack_1a0 * fStack_1a0 + fStack_1a8 * fStack_1a8 + fStack_1a4 * fStack_1a4;
          fStack_24 = (float)(((int)fStack_3c >> 1) + _DAT_01d1a0a4);
          if (fStack_24 < _DAT_005de5c4) {
            iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
            if (iVar2 < 0x21) {
              iVar2 = 5;
            }
            else if (iVar2 < 0x42) {
              iVar2 = 6;
            }
            else {
              iVar2 = 7;
            }
          }
          else {
            iVar2 = 8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,iVar2,1);
          iVar2 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)&param_1[1].field_0x8);
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"dog5.wav")
            ;
            *(uint *)&param_1[1].field_0x8 = uVar5;
          }
        }
      }
      else {
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
        if (iVar2 < 0x21) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,5,1);
        }
        else if (iVar2 < 0x42) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,6,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,7,1);
        }
      }
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0xcde4;
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
        this_ptr = &param_1->field_0x158;
        if (iVar2 == 0) {
          iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
          if (iVar2 < 0x14) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)this_ptr,0,1);
          }
          else if (iVar2 < 0x28) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)this_ptr,1,1);
          }
          else if (iVar2 < 0x3c) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)this_ptr,2,1);
          }
          else if (iVar2 < 0x50) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)this_ptr,3,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)this_ptr,4,1);
          }
        }
        else {
          iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
          if (iVar2 < 0x21) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)this_ptr,5,1);
          }
          else if (iVar2 < 0x42) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)this_ptr,6,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)this_ptr,7,1);
          }
        }
      }
      else {
        fStack_a0 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
        fStack_9c = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
        fStack_98 = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
        fStack_64 = fStack_a0;
        afStack_108[(uint)bVar6 * -2 + 0x2a] = afStack_108[(uint)bVar6 * -2 + 0x1b];
        afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b] =
             afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
        if ((_DAT_005de5c4 <
             SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60)) &&
           (((iStack_28 == 5 || (iStack_28 == 6)) || (iStack_28 == 7)))) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,8,1);
        }
        max_distance = 0.17453292;
        fVar8 = 1.5;
        auStack_190._8_4_ = _DAT_005de5b8 + (float)_DAT_005bbc4c;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        auStack_190._0_4_ = 0;
        direction = (CVector3f *)auStack_190;
        auStack_190._4_4_ = 0;
        fStack_30 = (float)auStack_190._8_4_;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xcde4);
        iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),path_map,direction,
                           fVar8,max_distance);
        pCStack_20 = (CMotionController *)&param_1->field_0x158;
        if (iVar2 < 0) {
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1)
          ;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0,1);
        }
        else if (iVar2 < 1) {
          iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_e8 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_e4 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_e0 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_1bc[2] = fStack_e8;
          afStack_1bc[(uint)bVar6 * -2 + 3] = afStack_108[(uint)bVar6 * -2 + 9];
          afStack_1bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
          core_vecdir_cpp_FUN_00576250(afStack_1bc + 2);
          fVar8 = afStack_1bc[2] * afStack_1bc[2];
          uStack_184 = uStack_154;
          afStack_180[(uint)bVar6 * -2] = afStack_168[(uint)bVar6 * -2 + 6];
          afStack_180[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
               afStack_168[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
          fStack_38 = fStack_1ac * fStack_1ac + fVar8 + afStack_1bc[3] * afStack_1bc[3];
          fStack_18 = (float)(((int)fStack_38 >> 1) + _DAT_01d1a0a4);
          fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                       (afStack_180[0] - *(float *)&param_1->field_0x34);
          if (((ABS(fStack_14) < (float)_DAT_005bbc54) && (*(float *)&param_1->field_0xcde0 <= 0.0))
             && (fStack_18 <= _DAT_005de5b8)) {
            iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
            if (iVar2 < 0x32) {
              iVar2 = 0xb;
            }
            else {
              iVar2 = 0xc;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,iVar2,1);
            *(uint *)&param_1->field_0xcde0 = 0x40200000;
          }
        }
        else {
          iVar2 = *(int *)&param_1->field_0xcde4;
          fStack_88 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_84 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_80 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_dc[0] = fStack_88;
          afStack_108[(uint)bVar6 * -2 + 0xc] = afStack_108[(uint)bVar6 * -2 + 0x21];
          afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
               afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
          core_vecdir_cpp_FUN_00576250(afStack_108 + 0xb);
          uStack_58 = uStack_7c;
          afStack_108[(uint)bVar6 * -2 + 0x2d] = afStack_108[(uint)bVar6 * -2 + 0x24];
          afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e] =
               afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
          fStack_14 = (float)core_actor_cpp_FUN_0040cfa0(fStack_54 - *(float *)&param_1->field_0x34)
          ;
          if (ABS(fStack_14) < (float)_DAT_005bbc54) {
            iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
            if (0.0 < *(float *)&param_1->field_0xcde0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,0,1);
            }
            else {
              if (_DAT_005de5b8 < fStack_30) {
                if (iVar2 < 0x32) {
                  iVar2 = 9;
                }
                else {
                  iVar2 = 10;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,iVar2,1);
              }
              *(uint *)&param_1->field_0xcde0 = 0x40200000;
            }
          }
        }
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_1fc);
      uStack_1f8 = *(uint *)&param_1->field_0xce5c;
      pCStack_1c8 = param_1;
      pCStack_1c4 = param_1;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,&param_1->field_0xfd8 + *(int *)&param_1[1].field_0x4 * 0x30,
                 0x3f333333,aSStack_1fc);
      pfVar7 = afStack_108 + 0x11;
      afStack_c4[0] = (float)uStack_94;
      afStack_108[(uint)bVar6 * -2 + 0x12] = afStack_108[(uint)bVar6 * -2 + 0x1e];
      afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
           afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
      core_actor_cpp_FUN_00408b80(param_1,pfVar7);
      pfVar7 = afStack_108 + 0x14;
      afStack_b8[0] = (float)uStack_f4;
      afStack_108[(uint)bVar6 * -2 + 0x15] = afStack_108[(uint)bVar6 * -2 + 6];
      pCVar4 = param_1;
      afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      core_enemy_cpp_FUN_004893f0(pCVar4,pfVar7);
      iVar2 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)&param_1[1].field_0x8);
      if (iVar2 == 0) {
        uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"dog5.wav");
        *(uint *)&param_1[1].field_0x8 = uVar5;
      }
      break;
    case 0x13:
    case 0x14:
    case 0x15:
      if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,0);
        puVar9 = &uStack_13c;
        uStack_13c = uStack_124;
        afStack_138[(uint)bVar6 * -2] = afStack_138[(uint)bVar6 * -2 + 6];
        afStack_138[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_138[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        core_actor_cpp_FUN_00408b80(param_1,puVar9);
        blood_type = BLOOD_TYPE_RED;
        CStack_148._0_4_ = CStack_118._0_4_;
        *(uint *)((int)&CStack_148 + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&CStack_118 + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&CStack_148 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&CStack_118 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_gore_cpp_FUN_004cec40(g_CGorePtr,&CStack_148,blood_type);
        *(uint *)&param_1->field_0xcdd0 = 1;
      }
    }
    goto switchD_00463453_caseD_d;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004629d9:
      iVar2 = 5;
    }
    else {
LAB_00462bcc:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004629d9;
    if (uVar1 != 3) goto LAB_00462bcc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_00463453_caseD_d:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if (iVar2 != 0) {
    iVar2 = *(int *)&param_1->field_0xcde4;
    if ((iVar2 != 0) &&
       (pCVar4 = (CEnemy *)(**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), pCVar4 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
    }
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    fStack_10c = *(float *)&param_1->field_0x2518 * param_2;
    afStack_108[0] = *(float *)&param_1->field_0x251c * param_2;
    afStack_108[1] = *(float *)&param_1->field_0x2520 * param_2;
    fStack_ac = fStack_10c;
    afStack_108[(uint)bVar6 * -2 + 0x18] = afStack_108[(uint)bVar6 * -2];
    afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
         afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    afStack_168[2] = fStack_ac + *(float *)&param_1->field_0x250c;
    afStack_168[3] = fStack_a8 + *(float *)&param_1->field_0x2510;
    fStack_158 = fStack_a4 + *(float *)&param_1->field_0x2514;
    afStack_138[2] = afStack_168[2];
    afStack_138[(uint)bVar6 * -2 + 3] = afStack_168[(uint)bVar6 * -2 + 3];
    afStack_138[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_168[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    fStack_d0 = afStack_138[2] + *(float *)&param_1->field_0x249c;
    fStack_cc = afStack_138[3] + *(float *)&param_1->field_0x24a0;
    fStack_c8 = fStack_128 + *(float *)&param_1->field_0x24a4;
    fStack_16c = fStack_d0;
    afStack_168[(uint)bVar6 * -2] = afStack_108[(uint)bVar6 * -2 + 0xf];
    afStack_168[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_108[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_16c);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  return;
}
