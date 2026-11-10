// Name: core_baal.cpp_CBaal_process_FUN_005968a0
// Address: 005968a0
// Address Range: [[005968a0, 005976f0]]
// Convention: __cdecl
// Signature: void __cdecl core_baal_cpp_CBaal_process_FUN_005968a0(CBaal *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_baal_cpp_CBaal_process_FUN_005968a0(CBaal *this_ptr,float delta_time)

{
  float fVar1;
  CDeformableModelInstance *this_ptr_00;
  int iVar2;
  uint uVar3;
  SMotion *pSVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  CPathMap *path_map;
  byte bVar8;
  float afStackY_1144 [997];
  CBaal *pCVar9;
  CGore *this_ptr_01;
  CVector3f *pCVar10;
  float *pfVar11;
  float min_distance;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_198 [4];
  uint uStack_194;
  CBaal *pCStack_164;
  CBaal *pCStack_160;
  float fStack_15c;
  float afStack_158 [4];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint uStack_138;
  float afStack_134 [5];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  uint uStack_114;
  float fStack_108;
  float fStack_104;
  float afStack_fc [3];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
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
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
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
  
  bVar8 = 0;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
  if (*(int *)&this_ptr->field_0xcde4 == 0) {
    iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&this_ptr->field_0x158,0,1);
      return;
    }
    *(uint *)&g_CGamePtr->field_0x244 = 1;
    *(uint *)&this_ptr->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  iVar2 = *(int *)&this_ptr->field_0xcde4;
  if (iVar2 != 0) {
    afStack_158[2] = *(float *)&this_ptr->field_0x20 - *(float *)(iVar2 + 0x20);
    afStack_158[3] = *(float *)&this_ptr->field_0x24 - *(float *)(iVar2 + 0x24);
    fStack_148 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar2 + 0x28);
    fStack_120 = afStack_158[2];
    afStack_134[(uint)bVar8 * -2 + 6] = afStack_158[(uint)bVar8 * -2 + 3];
    afStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         afStack_158[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    if (afStack_158 + 5 != afStack_134 + 5) {
      fStack_144 = fStack_120;
      fStack_140 = fStack_11c;
      fStack_13c = fStack_118;
    }
    fStack_28 = fStack_13c * fStack_13c + fStack_144 * fStack_144 + fStack_140 * fStack_140;
    fStack_24 = (float)(((int)fStack_28 >> 1) + _DAT_01d1a0a4);
    iVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr,delta_time);
    if (iVar2 != 0) {
      if (0.0 < *(float *)&this_ptr->field_0xd054) {
        *(float *)&this_ptr->field_0xd054 = *(float *)&this_ptr->field_0xd054 - delta_time;
      }
      if (0.0 < *(float *)&this_ptr->field_0xd080) {
        *(float *)&this_ptr->field_0xd080 = *(float *)&this_ptr->field_0xd080 - delta_time;
      }
      fVar1 = *(float *)&this_ptr->field_0xd064 + delta_time;
      *(float *)&this_ptr->field_0xd064 = fVar1;
      if (*(float *)&this_ptr->field_0xd06c <= fVar1) {
        *(uint *)&this_ptr->field_0xd064 = *(uint *)&this_ptr->field_0xd06c;
      }
      pCStack_1c = (CDeformableModelInstance *)&this_ptr->field_0x158;
      fStack_48 = delta_time * *(float *)&this_ptr->field_0xcdcc;
      pfStack_2c = (float *)&this_ptr->field_0x2518;
      pfStack_20 = (float *)&this_ptr->field_0x250c;
      pfStack_18 = (float *)&this_ptr->field_0x249c;
      pfStack_30 = (float *)&this_ptr->field_0x20;
      puStack_34 = &this_ptr->field_0xfd8;
      do {
        if (fStack_48 <= 0.0) {
          core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
          core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCStack_1c);
          core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350
                    ((CCharacter *)this_ptr,delta_time);
          return;
        }
        uVar3 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                          (&pCStack_1c->base,afStack_5c + 5);
        if (uVar3 < 0x4b4) {
          if (uVar3 < 0x4b1) {
            if (0x44c < uVar3) {
              if (uVar3 < 0x44e) {
                core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440
                          (g_CDemonSetPtr,100.0,0.0,0.0,1.0);
                if (*(CBoneGuy **)&this_ptr->field_0xd0b8 != (CBoneGuy *)0x0) {
                  core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_00419790
                            (*(CBoneGuy **)&this_ptr->field_0xd0b8);
                }
              }
              else if ((uVar3 == 0x4b0) &&
                      (iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd084),
                      iVar2 == 0)) {
                uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                                  (this_ptr,"baal_stand.wav");
                *(uint *)&this_ptr->field_0xd084 = uVar6;
              }
            }
          }
          else if (uVar3 < 0x4b2) {
            iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4));
            if (iVar2 == 0) {
              uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                                (this_ptr,"baal_chasewalk.wav");
              *(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4) = uVar6;
            }
          }
          else if (uVar3 < 0x4b3) {
            iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4));
            if (iVar2 == 0) {
              uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                                (this_ptr,"baal_chasefast.wav");
              *(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4) = uVar6;
            }
          }
          else {
            iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4));
            if (iVar2 == 0) {
              uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                                (this_ptr,"baal_attack.wav");
              *(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4) = uVar6;
            }
          }
        }
        else if (uVar3 < 0x4b5) {
          iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4));
          if (iVar2 == 0) {
            uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"baal_attack1.wav");
            *(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4) = uVar6;
          }
        }
        else if (uVar3 < 0x4b7) {
          if (uVar3 < 0x4b6) {
            iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4));
            if (iVar2 == 0) {
              uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                                (this_ptr,"baal_attack2.wav");
              *(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4) = uVar6;
            }
          }
          else {
            iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4));
            if (iVar2 == 0) {
              uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                                (this_ptr,"baal_attack3.wav");
              *(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4) = uVar6;
            }
          }
        }
        else if (uVar3 < 0x4b8) {
          iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4));
          if (iVar2 == 0) {
            uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"baal_pain.wav");
            *(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4) = uVar6;
          }
        }
        else if (uVar3 < 0x4b9) {
          iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4));
          if (iVar2 == 0) {
            uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"baal_die.wav");
            *(uint *)(&this_ptr->field_0xbdc4 + uVar3 * 4) = uVar6;
          }
        }
        else if ((uVar3 == 0x4b9) &&
                (iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbdc4 + 0x12e4))
                , iVar2 == 0)) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"baal_warning.wav");
          *(uint *)(&this_ptr->field_0xbdc4 + 0x12e4) = uVar6;
        }
        fVar1 = (float)_DAT_005d9659;
        *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
        core_charactr_cpp_FUN_00434850
                  (this_ptr,delta_time * *(float *)&this_ptr->field_0xcdcc * fVar1);
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_1c->base);
        iVar2 = *(int *)(pSVar4 + 0x24);
        iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                          ((CCharacter *)this_ptr,delta_time);
        if (iVar5 != 0) {
          uVar3 = *(uint *)&this_ptr->field_0x273c;
          if (uVar3 < 2) {
            if (uVar3 == 1) {
LAB_00596aff:
              if (iVar2 != 2) {
                core_baal_cpp_FUN_00597be0(this_ptr,0);
              }
            }
            else {
LAB_00596f96:
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_1c->base,0,1);
            }
          }
          else {
            if (uVar3 < 3) goto LAB_00596aff;
            if (uVar3 != 3) goto LAB_00596f96;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_1c->base,0,1);
            engine_console_cpp_FUN_00441ff0
                      (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          }
          pfStack_18[2] = 0.0;
          pfStack_18[1] = pfStack_18[2];
          *pfStack_18 = pfStack_18[1];
          goto switchD_005976af_caseD_6;
        }
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_1c->base);
        switch(*(uint *)(pSVar4 + 0x24)) {
        case 0:
          iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_d8 = *(float *)(iVar2 + 0x20) - *pfStack_30;
          afStack_d4[0] = *(float *)(iVar2 + 0x24) - pfStack_30[1];
          afStack_d4[1] = *(float *)(iVar2 + 0x28) - pfStack_30[2];
          afStack_fc[0] = fStack_d8;
          afStack_134[(uint)bVar8 * -2 + 0xf] = afStack_d4[(uint)bVar8 * -2];
          afStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
               afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_134 + 0xe);
          fStack_108 = fStack_a8;
          afStack_134[(uint)bVar8 * -2 + 0xc] = afStack_a4[(uint)bVar8 * -2];
          afStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
               afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          fStack_44 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                       (fStack_104 - *(float *)&this_ptr->field_0x34);
          fStack_14 = fStack_44;
          fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                       (fStack_108 - *(float *)&this_ptr->field_0x30);
          *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_44;
          *(float *)&this_ptr->field_0x30 = *(float *)&this_ptr->field_0x30 + fStack_14;
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
          if (*(float *)&this_ptr->field_0xcde0 <= 0.0) {
            if ((float)_DAT_005d9679 < fStack_24) {
              core_baal_cpp_FUN_00597be0(this_ptr,0);
            }
            iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
            if (iVar2 == 0) {
              fStack_3c = fStack_13c * fStack_13c +
                          fStack_144 * fStack_144 + fStack_140 * fStack_140;
              fStack_38 = (float)(((int)fStack_3c >> 1) + _DAT_01d1a0a4);
              if (0x40A00000 + (float)_DAT_005d9681 < fStack_38) {
                if ((((float)_DAT_005d9659 < fStack_24) || (*(int *)&this_ptr->field_0xd07c != 0))
                   && ((iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), 0x50 < iVar2 ||
                       (*(int *)&this_ptr->field_0xd07c != 0)))) {
                  iVar2 = 0;
                  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->actor_count; iVar5 = iVar5 + 1) {
                    iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                                      (*(uint *)((int)g_CDemonSetPtr->actors + iVar2),
                                       DAT_007e1774);
                    *(int *)&this_ptr->field_0xd0b8 = iVar7;
                    if (((iVar7 != 0) &&
                        (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x10c))(iVar7), iVar7 < 1))
                       && (*(int *)(*(int *)&this_ptr->field_0xd0b8 + 0xd0e4) == 1)) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                                (&pCStack_1c->base,1,1);
                      *(uint *)&this_ptr->field_0xd07c = 1;
                      break;
                    }
                    iVar2 = iVar2 + 4;
                  }
                }
              }
              else {
                core_baal_cpp_FUN_00597700(this_ptr);
              }
            }
          }
          break;
        case 1:
        case 2:
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Walking...\n");
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
          if ((*(int *)&this_ptr->field_0xcde4 == 0) &&
             (iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
             iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2), iVar2 != 0)) {
            *(uint *)&g_CGamePtr->field_0x244 = 1;
            *(uint *)&this_ptr->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          }
          if (*(int *)&this_ptr->field_0xcde4 == 0) {
            iVar2 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
            if (iVar2 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_1c->base,0,1);
            }
          }
          else {
            if ((((float)_DAT_005d9659 < fStack_24) || (*(int *)&this_ptr->field_0xd07c != 0)) &&
               ((iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), 0x62 < iVar2 ||
                (*(int *)&this_ptr->field_0xd07c != 0)))) {
              iVar2 = 0;
              for (iVar5 = 0; iVar5 < g_CDemonSetPtr->actor_count; iVar5 = iVar5 + 1) {
                iVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (*(uint *)((int)g_CDemonSetPtr->actors + iVar2),DAT_007e1774
                                  );
                *(int *)&this_ptr->field_0xd0b8 = iVar7;
                if (((iVar7 != 0) &&
                    (iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x10c))(iVar7), iVar7 < 1)) &&
                   (*(int *)(*(int *)&this_ptr->field_0xd0b8 + 0xd0e4) == 1)) {
                  *(uint *)&this_ptr->field_0xd07c = 1;
                  pfStack_18[2] = 0.0;
                  pfStack_18[1] = pfStack_18[2];
                  *pfStack_18 = pfStack_18[1];
                  CStack_c0.x = 0.0;
                  CStack_c0.y = 0.0;
                  CStack_c0.z = 2.0;
                  iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                    ((CCharacter *)this_ptr,
                                     (CVector3f *)(*(int *)&this_ptr->field_0xd0b8 + 0xd068),
                                     (CPathMap *)0x0,&CStack_c0,2.0,0.17453292);
                  if (0 < iVar2) {
                    *(uint *)&this_ptr->field_0xd07c = 0;
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                              (&pCStack_1c->base,10,1);
                  }
                  break;
                }
                iVar2 = iVar2 + 4;
              }
            }
            fVar1 = *(float *)&this_ptr->field_0xd07c;
            if (fVar1 == 0.0) {
              max_distance = 0.34906584;
              pfStack_18[2] = 0.0;
              min_distance = 0.2;
              pfStack_18[1] = pfStack_18[2];
              *pfStack_18 = pfStack_18[1];
              CStack_e4.z = 0x40A00000;
              pCVar10 = &CStack_e4;
              CStack_e4.x = fVar1;
              CStack_e4.y = fVar1;
              path_map = (CPathMap *)
                         (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xc4))
                                   (*(int *)&this_ptr->field_0xcde4);
              iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)this_ptr,
                                 (CVector3f *)(*(int *)&this_ptr->field_0xcde4 + 0x20),path_map,
                                 pCVar10,min_distance,max_distance);
              if (iVar2 < 0) {
                engine_console_cpp_FUN_00441ff0
                          (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_1c->base,0,1);
              }
              else if (0 < iVar2) {
                core_baal_cpp_FUN_00597700(this_ptr);
              }
            }
          }
          break;
        case 3:
switchD_005976af_caseD_3:
          if ((*(uint *)&this_ptr->field_0xce5c & 0x7fffffff) == 0) {
            *(uint *)&this_ptr->field_0xce5c = 0x41200000;
          }
          goto LAB_005974b3;
        case 4:
switchD_005976af_caseD_4:
          if ((*(uint *)&this_ptr->field_0xce5c & 0x7fffffff) != 0) goto switchD_005976af_caseD_3;
          *(uint *)&this_ptr->field_0xce5c = 0x41700000;
          goto LAB_005974b3;
        case 5:
          if ((*(uint *)&this_ptr->field_0xce5c & 0x7fffffff) != 0) goto switchD_005976af_caseD_4;
          *(uint *)&this_ptr->field_0xce5c = 0x41a00000;
LAB_005974b3:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
          if (*(int *)&this_ptr->field_0xcde4 == 0) {
            core_baal_cpp_FUN_00597be0(this_ptr,1);
          }
          else if ((fStack_24 <= 0x40A00000 + (float)_DAT_005d9669) ||
                  (fStack_14 = core_motion_cpp_FUN_004fc930(&pCStack_1c->base),
                  fStack_14 <= (float)_DAT_005d9671)) {
            this_ptr_00 = pCStack_1c;
            fStack_14 = core_motion_cpp_FUN_004fc930(&pCStack_1c->base);
            if ((1.0 < fStack_14) &&
               (fStack_14 = core_motion_cpp_FUN_004fc930(&this_ptr_00->base),
               fStack_14 < _DAT_005d9661)) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_198);
              uStack_194 = *(uint *)&this_ptr->field_0xce5c;
              pCStack_164 = this_ptr;
              pCStack_160 = this_ptr;
              if (iVar2 == 5) {
                iVar2 = *(int *)&this_ptr->field_0x25b0;
                if (iVar2 != 0) {
                  (**(code **)(*(int *)(iVar2 + 0x154) + 0x78))(iVar2,2);
                }
              }
              else {
                core_xform_cpp_FUN_00583260
                          (&DAT_02cfd900,puStack_34 + *(int *)&this_ptr->field_0xd078 * 0x30,
                           0x40200000,aSStack_198);
                pfVar11 = afStack_a4 + 2;
                afStack_a4[2] = (float)uStack_114;
                afStack_a4[(uint)bVar8 * -2 + 3] = afStack_134[(uint)bVar8 * -2 + 9];
                afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                     afStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
                core_actor_cpp_FUN_00408b80(this_ptr,pfVar11);
                pfVar11 = afStack_a4 + 5;
                afStack_90[0] = (float)uStack_84;
                afStack_a4[(uint)bVar8 * -2 + 6] = afStack_a4[(uint)bVar8 * -2 + 9];
                pCVar9 = this_ptr;
                afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
                     afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
                core_enemy_cpp_FUN_004893f0(pCVar9,pfVar11);
              }
              iVar2 = _DAT_01d5ba14;
              *(uint *)&this_ptr->field_0xce5c = 0;
              iVar2 = *(int *)(iVar2 * 4 + 0x1d5ba04);
              iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
              if (iVar2 != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_1c->base,0,1);
              }
              *(uint *)&this_ptr->field_0xcde0 = 0x40000000;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_1c->base,0,1);
            }
          }
          else {
            core_baal_cpp_FUN_00597be0(this_ptr,1);
          }
          break;
        case 9:
          if ((*(int *)&this_ptr->field_0xcdd0 == 0) && (*(int *)&this_ptr->field_0xdc == 0)) {
            core_skeleton_cpp_FUN_0054dbd0(pCStack_1c,0);
            pfVar11 = afStack_a4 + 0xb;
            afStack_78[0] = (float)uStack_138;
            afStack_a4[(uint)bVar8 * -2 + 0xc] = afStack_134[(uint)bVar8 * -2];
            afStack_a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
                 afStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            core_actor_cpp_FUN_00408b80(this_ptr,pfVar11);
            blood_type = BLOOD_TYPE_RED;
            pCVar10 = &CStack_b4;
            CStack_b4.x = afStack_134[2];
            *(float *)((int)&CStack_b4 + (uint)bVar8 * -8 + 4) = afStack_134[(uint)bVar8 * -2 + 3];
            this_ptr_01 = g_CGorePtr;
            *(float *)((int)&CStack_b4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 afStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_01,pCVar10,blood_type);
            *(uint *)&this_ptr->field_0xcdd0 = 1;
          }
        }
switchD_005976af_caseD_6:
        if (0.0 < *(float *)&this_ptr->field_0xcde0) {
          *(float *)&this_ptr->field_0xcde0 = *(float *)&this_ptr->field_0xcde0 - delta_time;
        }
        if (*(float *)&this_ptr->field_0xcde0 < 0.0) {
          *(uint *)&this_ptr->field_0xcde0 = 0xbf800000;
        }
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_1c->base);
        core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
        fStack_f0 = *pfStack_2c * delta_time;
        fStack_ec = pfStack_2c[1] * delta_time;
        fStack_e8 = pfStack_2c[2] * delta_time;
        afStack_5c[2] = *pfStack_2c * delta_time;
        afStack_5c[(uint)bVar8 * -2 + 3] = afStack_134[(uint)bVar8 * -2 + 0x12];
        afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_134[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
        afStack_d4[2] = afStack_5c[2] + *pfStack_20;
        afStack_d4[3] = afStack_5c[3] + pfStack_20[1];
        fStack_c4 = fStack_4c + pfStack_20[2];
        fStack_15c = afStack_5c[2] + *pfStack_20;
        afStack_158[(uint)bVar8 * -2] = afStack_d4[(uint)bVar8 * -2 + 3];
        pfVar11 = pfStack_20;
        afStack_158[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        fStack_60 = fStack_15c + *pfStack_18;
        afStack_5c[0] = afStack_158[0] + pfStack_18[1];
        afStack_5c[1] = afStack_158[1] + pfStack_18[2];
        CStack_6c.x = fStack_15c + *pfStack_18;
        *(float *)((int)&CStack_6c + (uint)bVar8 * -8 + 4) = afStack_5c[(uint)bVar8 * -2];
        *(float *)((int)&CStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        pfVar11[2] = 0.0;
        pfVar11[1] = pfVar11[2];
        *pfVar11 = pfVar11[1];
        pfStack_18[2] = 0.0;
        pfStack_18[1] = pfStack_18[2];
        *pfStack_18 = pfStack_18[1];
        core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_6c);
      } while( true );
    }
  }
  return;
}
