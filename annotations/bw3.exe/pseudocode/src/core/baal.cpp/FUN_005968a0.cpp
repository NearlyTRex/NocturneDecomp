// Name: core_baal.cpp_FUN_005968a0
// Address: 005968a0
// Address Range: [[005968a0, 005976f0]]
// Convention: unknown
// Signature: void core_baal_cpp_FUN_005968a0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_baal_cpp_FUN_005968a0(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  uint uVar2;
  SMotion *pSVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  CPathMap *path_map;
  byte bVar7;
  float afStackY_1144 [997];
  CEnemy *pCVar8;
  CGore *this_ptr_00;
  CVector3f *pCVar9;
  float *pfVar10;
  float fVar11;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_198 [4];
  uint uStack_194;
  CEnemy *pCStack_164;
  CEnemy *pCStack_160;
  float fStack_15c;
  float afStack_158 [4];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint uStack_138;
  float afStack_134 [2];
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [5];
  float fStack_108;
  float fStack_104;
  float afStack_fc [3];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  byte auStack_e4 [12];
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [5];
  float afStack_90 [3];
  uint uStack_84;
  float afStack_78 [3];
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  byte *puStack_34;
  float *pfStack_30;
  float *pfStack_2c;
  float fStack_28;
  float fStack_24;
  float *pfStack_20;
  CDeformableModelInstance *pCStack_1c;
  float *pfStack_18;
  float fStack_14;
  
  bVar7 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
  if (*(int *)&param_1->field_0xcde4 == 0) {
    iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
    if (iVar1 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,0,1);
      return;
    }
    *(uint *)&g_CGamePtr->field_0x244 = 1;
    *(uint *)&param_1->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  iVar1 = *(int *)&param_1->field_0xcde4;
  if (iVar1 != 0) {
    afStack_158[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar1 + 0x20);
    afStack_158[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar1 + 0x24);
    fStack_148 = *(float *)&param_1->field_0x28 - *(float *)(iVar1 + 0x28);
    fStack_120 = afStack_158[2];
    afStack_11c[(uint)bVar7 * -2] = afStack_158[(uint)bVar7 * -2 + 3];
    afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    if (afStack_158 + 5 != &fStack_120) {
      fStack_144 = fStack_120;
      fStack_140 = afStack_11c[0];
      fStack_13c = afStack_11c[1];
    }
    fStack_28 = fStack_13c * fStack_13c + fStack_144 * fStack_144 + fStack_140 * fStack_140;
    fStack_24 = (float)(((int)fStack_28 >> 1) + _DAT_01d1a0a4);
    iVar1 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
    if (iVar1 != 0) {
      if (0.0 < *(float *)(param_1 + 1)) {
        *(float *)(param_1 + 1) = *(float *)(param_1 + 1) - param_2;
      }
      if (0.0 < *(float *)&param_1[1].field_0x2c) {
        *(float *)&param_1[1].field_0x2c = *(float *)&param_1[1].field_0x2c - param_2;
      }
      fVar11 = *(float *)&param_1[1].field_0x10 + param_2;
      *(float *)&param_1[1].field_0x10 = fVar11;
      if (*(float *)&param_1[1].field_0x18 <= fVar11) {
        *(uint *)&param_1[1].field_0x10 = *(uint *)&param_1[1].field_0x18;
      }
      pCStack_1c = (CDeformableModelInstance *)&param_1->field_0x158;
      fStack_48 = param_2 * *(float *)&param_1->field_0xcdcc;
      pfStack_2c = (float *)&param_1->field_0x2518;
      pfStack_20 = (float *)&param_1->field_0x250c;
      pfStack_18 = (float *)&param_1->field_0x249c;
      pfStack_30 = (float *)&param_1->field_0x20;
      puStack_34 = &param_1->field_0xfd8;
      do {
        if (fStack_48 <= 0.0) {
          core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
          core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCStack_1c);
          core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
          return;
        }
        uVar2 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                          ((CMotionController *)pCStack_1c,&fStack_48);
        if (uVar2 < 0x4b4) {
          if (uVar2 < 0x4b1) {
            if (0x44c < uVar2) {
              if (uVar2 < 0x44e) {
                core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440
                          (g_CDemonSetPtr,100.0,0.0,0.0,1.0);
                if (*(CBoneGuy **)&param_1[1].field_0x64 != (CBoneGuy *)0x0) {
                  core_boneguy_cpp_FUN_00419790(*(CBoneGuy **)&param_1[1].field_0x64);
                }
              }
              else if ((uVar2 == 0x4b0) &&
                      (iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x30),
                      iVar1 == 0)) {
                uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                  (param_1,"baal_stand.wav");
                *(uint *)&param_1[1].field_0x30 = uVar5;
              }
            }
          }
          else if (uVar2 < 0x4b2) {
            iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbdc4 + uVar2 * 4));
            if (iVar1 == 0) {
              uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"baal_chasewalk.wav");
              *(uint *)(&param_1->field_0xbdc4 + uVar2 * 4) = uVar5;
            }
          }
          else if (uVar2 < 0x4b3) {
            iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbdc4 + uVar2 * 4));
            if (iVar1 == 0) {
              uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"baal_chasefast.wav");
              *(uint *)(&param_1->field_0xbdc4 + uVar2 * 4) = uVar5;
            }
          }
          else {
            iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbdc4 + uVar2 * 4));
            if (iVar1 == 0) {
              uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"baal_attack.wav");
              *(uint *)(&param_1->field_0xbdc4 + uVar2 * 4) = uVar5;
            }
          }
        }
        else if (uVar2 < 0x4b5) {
          iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbdc4 + uVar2 * 4));
          if (iVar1 == 0) {
            uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"baal_attack1.wav");
            *(uint *)(&param_1->field_0xbdc4 + uVar2 * 4) = uVar5;
          }
        }
        else if (uVar2 < 0x4b7) {
          if (uVar2 < 0x4b6) {
            iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbdc4 + uVar2 * 4));
            if (iVar1 == 0) {
              uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"baal_attack2.wav");
              *(uint *)(&param_1->field_0xbdc4 + uVar2 * 4) = uVar5;
            }
          }
          else {
            iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbdc4 + uVar2 * 4));
            if (iVar1 == 0) {
              uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"baal_attack3.wav");
              *(uint *)(&param_1->field_0xbdc4 + uVar2 * 4) = uVar5;
            }
          }
        }
        else if (uVar2 < 0x4b8) {
          iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbdc4 + uVar2 * 4));
          if (iVar1 == 0) {
            uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"baal_pain.wav");
            *(uint *)(&param_1->field_0xbdc4 + uVar2 * 4) = uVar5;
          }
        }
        else if (uVar2 < 0x4b9) {
          iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&param_1->field_0xbdc4 + uVar2 * 4));
          if (iVar1 == 0) {
            uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"baal_die.wav");
            *(uint *)(&param_1->field_0xbdc4 + uVar2 * 4) = uVar5;
          }
        }
        else if ((uVar2 == 0x4b9) &&
                (iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x54), iVar1 == 0
                )) {
          uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"baal_warning.wav");
          *(uint *)&param_1[1].field_0x54 = uVar5;
        }
        fVar11 = (float)_DAT_005d9659;
        *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
        core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc * fVar11);
        pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                           ((CMotionController *)pCStack_1c);
        iVar1 = *(int *)(pSVar3 + 0x24);
        iVar4 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
        if (iVar4 != 0) {
          uVar2 = *(uint *)&param_1->field_0x273c;
          if (uVar2 < 2) {
            if (uVar2 == 1) {
LAB_00596aff:
              if (iVar1 != 2) {
                core_baal_cpp_FUN_00597be0(param_1,0);
              }
            }
            else {
LAB_00596f96:
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)pCStack_1c,0,1);
            }
          }
          else {
            if (uVar2 < 3) goto LAB_00596aff;
            if (uVar2 != 3) goto LAB_00596f96;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)pCStack_1c,0,1);
            engine_console_cpp_FUN_00441ff0
                      (g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
          }
          pfStack_18[2] = 0.0;
          pfStack_18[1] = pfStack_18[2];
          *pfStack_18 = pfStack_18[1];
          goto switchD_005976af_caseD_6;
        }
        pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                           ((CMotionController *)pCStack_1c);
        switch(*(uint *)(pSVar3 + 0x24)) {
        case 0:
          iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_d8 = *(float *)(iVar1 + 0x20) - *pfStack_30;
          afStack_d4[0] = *(float *)(iVar1 + 0x24) - pfStack_30[1];
          afStack_d4[1] = *(float *)(iVar1 + 0x28) - pfStack_30[2];
          afStack_fc[0] = fStack_d8;
          afStack_11c[(uint)bVar7 * -2 + 9] = afStack_d4[(uint)bVar7 * -2];
          afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               afStack_d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          core_vecdir_cpp_FUN_00576250(afStack_11c + 8);
          fStack_108 = fStack_a8;
          afStack_11c[(uint)bVar7 * -2 + 6] = afStack_a4[(uint)bVar7 * -2];
          afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
               afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          fStack_44 = (float)core_actor_cpp_FUN_0040cfa0
                                       (fStack_104 - *(float *)&param_1->field_0x34);
          fStack_14 = fStack_44;
          fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                       (fStack_108 - *(float *)&param_1->field_0x30);
          *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_44;
          *(float *)&param_1->field_0x30 = *(float *)&param_1->field_0x30 + fStack_14;
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)param_1);
          if (*(float *)&param_1->field_0xcde0 <= 0.0) {
            if ((float)_DAT_005d9679 < fStack_24) {
              core_baal_cpp_FUN_00597be0(param_1,0);
            }
            iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
            if (iVar1 == 0) {
              fStack_3c = fStack_13c * fStack_13c +
                          fStack_144 * fStack_144 + fStack_140 * fStack_140;
              fStack_38 = (float)(((int)fStack_3c >> 1) + _DAT_01d1a0a4);
              if (0x40A00000 + (float)_DAT_005d9681 < fStack_38) {
                if ((((float)_DAT_005d9659 < fStack_24) || (*(int *)&param_1[1].field_0x28 != 0)) &&
                   ((iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), 0x50 < iVar1 ||
                    (*(int *)&param_1[1].field_0x28 != 0)))) {
                  iVar1 = 0;
                  for (iVar4 = 0; iVar4 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar4 = iVar4 + 1
                      ) {
                    iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                                      (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar1),
                                       DAT_007e1774);
                    *(int *)&param_1[1].field_0x64 = iVar6;
                    if (((iVar6 != 0) &&
                        (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6), iVar6 < 1))
                       && (*(int *)(*(int *)&param_1[1].field_0x64 + 0xd0e4) == 1)) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                                ((CMotionController *)pCStack_1c,1,1);
                      *(uint *)&param_1[1].field_0x28 = 1;
                      break;
                    }
                    iVar1 = iVar1 + 4;
                  }
                }
              }
              else {
                core_baal_cpp_FUN_00597700(param_1);
              }
            }
          }
          break;
        case 1:
        case 2:
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Walking...\n");
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          if ((*(int *)&param_1->field_0xcde4 == 0) &&
             (iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
             iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1), iVar1 != 0)) {
            *(uint *)&g_CGamePtr->field_0x244 = 1;
            *(uint *)&param_1->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          }
          if (*(int *)&param_1->field_0xcde4 == 0) {
            iVar1 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
            if (iVar1 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)pCStack_1c,0,1);
            }
          }
          else {
            if ((((float)_DAT_005d9659 < fStack_24) || (*(int *)&param_1[1].field_0x28 != 0)) &&
               ((iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), 0x62 < iVar1 ||
                (*(int *)&param_1[1].field_0x28 != 0)))) {
              iVar1 = 0;
              for (iVar4 = 0; iVar4 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar4 = iVar4 + 1) {
                iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar1),
                                   DAT_007e1774);
                *(int *)&param_1[1].field_0x64 = iVar6;
                if (((iVar6 != 0) &&
                    (iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6), iVar6 < 1)) &&
                   (*(int *)(*(int *)&param_1[1].field_0x64 + 0xd0e4) == 1)) {
                  *(uint *)&param_1[1].field_0x28 = 1;
                  pfStack_18[2] = 0.0;
                  pfStack_18[1] = pfStack_18[2];
                  *pfStack_18 = pfStack_18[1];
                  CStack_c0._0_4_ = 0;
                  CStack_c0._4_4_ = 0;
                  CStack_c0._8_4_ = 0x40000000;
                  iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                    ((CCharacter *)param_1,
                                     (CVector3f *)(*(int *)&param_1[1].field_0x64 + 0xd068),
                                     (CPathMap *)0x0,&CStack_c0,2.0,0.17453292);
                  if (0 < iVar1) {
                    *(uint *)&param_1[1].field_0x28 = 0;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                              ((CMotionController *)pCStack_1c,10,1);
                  }
                  break;
                }
                iVar1 = iVar1 + 4;
              }
            }
            iVar1 = *(int *)&param_1[1].field_0x28;
            if (iVar1 == 0) {
              max_distance = 0.34906584;
              pfStack_18[2] = 0.0;
              fVar11 = 0.2;
              pfStack_18[1] = pfStack_18[2];
              *pfStack_18 = pfStack_18[1];
              auStack_e4._8_4_ = 0x40A00000;
              pCVar9 = (CVector3f *)auStack_e4;
              auStack_e4._0_4_ = iVar1;
              auStack_e4._4_4_ = iVar1;
              path_map = (CPathMap *)
                         (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                                   (*(int *)&param_1->field_0xcde4);
              iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)param_1,
                                 (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),path_map,
                                 pCVar9,fVar11,max_distance);
              if (iVar1 < 0) {
                engine_console_cpp_FUN_00441ff0
                          (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)pCStack_1c,0,1);
              }
              else if (0 < iVar1) {
                core_baal_cpp_FUN_00597700(param_1);
              }
            }
          }
          break;
        case 3:
switchD_005976af_caseD_3:
          if ((*(uint *)&param_1->field_0xce5c & 0x7fffffff) == 0) {
            *(uint *)&param_1->field_0xce5c = 0x41200000;
          }
          goto LAB_005974b3;
        case 4:
switchD_005976af_caseD_4:
          if ((*(uint *)&param_1->field_0xce5c & 0x7fffffff) != 0) goto switchD_005976af_caseD_3;
          *(uint *)&param_1->field_0xce5c = 0x41700000;
          goto LAB_005974b3;
        case 5:
          if ((*(uint *)&param_1->field_0xce5c & 0x7fffffff) != 0) goto switchD_005976af_caseD_4;
          *(uint *)&param_1->field_0xce5c = 0x41a00000;
LAB_005974b3:
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
          if (*(int *)&param_1->field_0xcde4 == 0) {
            core_baal_cpp_FUN_00597be0(param_1,1);
          }
          else if ((fStack_24 <= 0x40A00000 + (float)_DAT_005d9669) ||
                  (fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)pCStack_1c),
                  fStack_14 <= (float)_DAT_005d9671)) {
            this_ptr = pCStack_1c;
            fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)pCStack_1c);
            if ((1.0 < fStack_14) &&
               (fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)this_ptr),
               fStack_14 < _DAT_005d9661)) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_198);
              uStack_194 = *(uint *)&param_1->field_0xce5c;
              pCStack_164 = param_1;
              pCStack_160 = param_1;
              if (iVar1 == 5) {
                iVar1 = *(int *)&param_1->field_0x25b0;
                if (iVar1 != 0) {
                  (**(code **)(*(int *)(iVar1 + 0x154) + 0x78))(iVar1,2);
                }
              }
              else {
                core_xform_cpp_FUN_00583260
                          (&DAT_02cfd900,puStack_34 + *(int *)&param_1[1].field_0x24 * 0x30,
                           0x40200000,aSStack_198);
                pfVar10 = afStack_a4 + 2;
                afStack_a4[2] = afStack_11c[2];
                afStack_a4[(uint)bVar7 * -2 + 3] = afStack_11c[(uint)bVar7 * -2 + 3];
                afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                     afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
                core_actor_cpp_FUN_00408b80(param_1,pfVar10);
                pfVar10 = afStack_a4 + 5;
                afStack_90[0] = (float)uStack_84;
                afStack_a4[(uint)bVar7 * -2 + 6] = afStack_a4[(uint)bVar7 * -2 + 9];
                pCVar8 = param_1;
                afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                     afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
                core_enemy_cpp_FUN_004893f0(pCVar8,pfVar10);
              }
              iVar1 = _DAT_01d5ba14;
              *(uint *)&param_1->field_0xce5c = 0;
              iVar1 = *(int *)(iVar1 * 4 + 0x1d5ba04);
              iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1);
              if (iVar1 != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)pCStack_1c,0,1);
              }
              *(uint *)&param_1->field_0xcde0 = 0x40000000;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)pCStack_1c,0,1);
            }
          }
          else {
            core_baal_cpp_FUN_00597be0(param_1,1);
          }
          break;
        case 9:
          if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
            core_skeleton_cpp_FUN_0054dbd0(pCStack_1c,0);
            pfVar10 = afStack_a4 + 0xb;
            afStack_78[0] = (float)uStack_138;
            afStack_a4[(uint)bVar7 * -2 + 0xc] = afStack_134[(uint)bVar7 * -2];
            afStack_a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
                 afStack_134[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            core_actor_cpp_FUN_00408b80(param_1,pfVar10);
            blood_type = BLOOD_TYPE_RED;
            pCVar9 = &CStack_b4;
            CStack_b4._0_4_ = CStack_12c._0_4_;
            *(uint *)((int)&CStack_b4 + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)&CStack_12c + (uint)bVar7 * -8 + 4);
            this_ptr_00 = g_CGorePtr;
            *(uint *)((int)&CStack_b4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                 *(uint *)((int)&CStack_12c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
            core_gore_cpp_FUN_004cec40(this_ptr_00,pCVar9,blood_type);
            *(uint *)&param_1->field_0xcdd0 = 1;
          }
        }
switchD_005976af_caseD_6:
        if (0.0 < *(float *)&param_1->field_0xcde0) {
          *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
        }
        if (*(float *)&param_1->field_0xcde0 < 0.0) {
          *(uint *)&param_1->field_0xcde0 = 0xbf800000;
        }
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                  ((CMotionController *)pCStack_1c);
        core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
        fStack_f0 = *pfStack_2c * param_2;
        fStack_ec = pfStack_2c[1] * param_2;
        fStack_e8 = pfStack_2c[2] * param_2;
        fStack_54 = *pfStack_2c * param_2;
        afStack_68[(uint)bVar7 * -2 + 6] = afStack_11c[(uint)bVar7 * -2 + 0xc];
        afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             afStack_11c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
        afStack_d4[2] = fStack_54 + *pfStack_20;
        afStack_d4[3] = fStack_50 + pfStack_20[1];
        fStack_c4 = fStack_4c + pfStack_20[2];
        fStack_15c = fStack_54 + *pfStack_20;
        afStack_158[(uint)bVar7 * -2] = afStack_d4[(uint)bVar7 * -2 + 3];
        pfVar10 = pfStack_20;
        afStack_158[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_d4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        afStack_68[2] = fStack_15c + *pfStack_18;
        afStack_68[3] = afStack_158[0] + pfStack_18[1];
        fStack_58 = afStack_158[1] + pfStack_18[2];
        fStack_6c = fStack_15c + *pfStack_18;
        afStack_68[(uint)bVar7 * -2] = afStack_68[(uint)bVar7 * -2 + 3];
        afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        pfVar10[2] = 0.0;
        pfVar10[1] = pfVar10[2];
        *pfVar10 = pfVar10[1];
        pfStack_18[2] = 0.0;
        pfStack_18[1] = pfStack_18[2];
        *pfStack_18 = pfStack_18[1];
        core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_6c);
      } while( true );
    }
  }
  return;
}
