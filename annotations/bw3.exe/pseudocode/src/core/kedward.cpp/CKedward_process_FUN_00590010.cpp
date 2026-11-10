// Name: core_kedward.cpp_CKedward_process_FUN_00590010
// Address: 00590010
// Address Range: [[00590010, 0059166d]]
// Convention: __cdecl
// Signature: void __cdecl core_kedward_cpp_CKedward_process_FUN_00590010(CKedward *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_kedward_cpp_CKedward_process_FUN_00590010(CKedward *this_ptr,float delta_time)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  SMotion *pSVar4;
  int iVar5;
  uint uVar6;
  CPathMap *path_map;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_12bc [965];
  CKedward *pCVar10;
  CVector3f *direction;
  uint *puVar11;
  float *pfVar12;
  float fVar13;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_388 [4];
  uint uStack_384;
  CKedward *pCStack_354;
  CKedward *pCStack_350;
  SDamageInfo aSStack_34c [4];
  uint uStack_348;
  CKedward *pCStack_318;
  CKedward *pCStack_314;
  SDamageInfo aSStack_310 [4];
  uint uStack_30c;
  CKedward *pCStack_2dc;
  CKedward *pCStack_2d8;
  float fStack_2d4;
  float afStack_2d0 [4];
  float fStack_2c0;
  float afStack_2bc [3];
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float afStack_298 [3];
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  CVector3f CStack_280;
  uint uStack_274;
  float afStack_270 [4];
  float fStack_260;
  CVector3f CStack_25c;
  uint uStack_250;
  float afStack_24c [4];
  float fStack_23c;
  float fStack_238;
  float afStack_234 [5];
  float afStack_220 [3];
  CVector3f CStack_214;
  float fStack_208;
  float afStack_204 [5];
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  uint uStack_1e4;
  float afStack_1e0 [5];
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  uint uStack_1c0;
  float afStack_1bc [4];
  float fStack_1ac;
  float fStack_1a8;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  uint uStack_184;
  float afStack_178 [3];
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  uint uStack_160;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float afStack_144 [5];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  CVector3f CStack_124;
  float fStack_118;
  float afStack_114 [2];
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float afStack_b8 [3];
  float afStack_ac [5];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_5c;
  float fStack_58;
  float *pfStack_54;
  byte *puStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float *pfStack_40;
  float *pfStack_3c;
  float *pfStack_38;
  CDeformableModelInstance *pCStack_34;
  float fStack_30;
  CVector3f *pCStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr,delta_time);
  if (iVar3 != 0) {
    if (0.0 < *(float *)&this_ptr->field_0xd054) {
      *(float *)&this_ptr->field_0xd054 = *(float *)&this_ptr->field_0xd054 - delta_time;
    }
    fVar2 = *(float *)&this_ptr->field_0xd064 + delta_time;
    *(float *)&this_ptr->field_0xd064 = fVar2;
    if (*(float *)&this_ptr->field_0xd06c <= fVar2) {
      *(uint *)&this_ptr->field_0xd064 = *(uint *)&this_ptr->field_0xd06c;
    }
    if (*(int *)&this_ptr->field_0xd094 == 0) {
      if ((*(int *)&this_ptr->field_0xd08c == 0) && (*(int *)&this_ptr->field_0xd088 == 0)) {
        *(uint *)&this_ptr->field_0xd088 = 1;
        fVar2 = *(float *)&this_ptr->field_0xcdcc + _DAT_005d8e54;
        *(uint *)&this_ptr->field_0xd084 = 1;
        *(float *)&this_ptr->field_0xcdcc = fVar2;
      }
      if ((0.0 < *(float *)&this_ptr->field_0xd07c) &&
         (*(float *)&this_ptr->field_0xd07c - delta_time <= 0.0)) {
        iVar3 = *(int *)&this_ptr->field_0xcde4;
        afStack_fc[2] = *(float *)&this_ptr->field_0x20 - *(float *)(iVar3 + 0x20);
        afStack_fc[3] = *(float *)&this_ptr->field_0x24 - *(float *)(iVar3 + 0x24);
        fStack_ec = *(float *)&this_ptr->field_0x28 - *(float *)(iVar3 + 0x28);
        fStack_2a4 = afStack_fc[2];
        afStack_2d0[(uint)bVar7 * -2 + 0xc] = afStack_fc[(uint)bVar7 * -2 + 3];
        afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
             afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        fStack_84 = fStack_29c * fStack_29c + fStack_2a4 * fStack_2a4 + fStack_2a0 * fStack_2a0;
        fStack_94 = (float)(((int)fStack_84 >> 1) + _DAT_01d1a0a4);
        if (fStack_94 < (float)_DAT_005d8e5c) {
          *(uint *)&this_ptr->field_0xd07c = 0x3f000000;
        }
        else {
          *(uint *)&this_ptr->field_0xd07c = 0;
          iVar3 = _DAT_01d5ba14;
          *(float *)&this_ptr->field_0xcdcc = *(float *)&this_ptr->field_0xcdcc + _DAT_005d8e64;
          iVar3 = *(int *)(iVar3 * 4 + 0x1d5ba04);
          fStack_118 = *(float *)(iVar3 + 0x20) - *(float *)&this_ptr->field_0x20;
          afStack_114[0] = *(float *)(iVar3 + 0x24) - *(float *)&this_ptr->field_0x24;
          afStack_114[1] = *(float *)(iVar3 + 0x28) - *(float *)&this_ptr->field_0x28;
          fStack_2d4 = fStack_118;
          afStack_2d0[(uint)bVar7 * -2] = afStack_114[(uint)bVar7 * -2];
          afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_114[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&fStack_2d4);
          fStack_c4 = afStack_234[2];
          afStack_fc[(uint)bVar7 * -2 + 0xf] = afStack_234[(uint)bVar7 * -2 + 3];
          afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
               afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          fStack_8c = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                       (fStack_c0 - *(float *)&this_ptr->field_0x34);
          fStack_14 = fStack_8c;
          fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                       (fStack_c4 - *(float *)&this_ptr->field_0x30);
          *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_8c;
          *(float *)&this_ptr->field_0x30 = *(float *)&this_ptr->field_0x30 + fStack_14;
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&this_ptr->field_0x158,0xd,1);
        }
      }
      fVar2 = *(float *)&this_ptr->field_0xd080 - delta_time;
      *(float *)&this_ptr->field_0xd080 = fVar2;
      if (fVar2 < 0.0) {
        *(uint *)&this_ptr->field_0xd080 = 0;
      }
      fVar2 = *(float *)&this_ptr->field_0xd07c - delta_time;
      *(float *)&this_ptr->field_0xd07c = fVar2;
      if (fVar2 < 0.0) {
        *(uint *)&this_ptr->field_0xd078 = 0;
        *(uint *)&this_ptr->field_0xd084 = 0;
        if (*(float *)&this_ptr->field_0xd07c < (float)_DAT_005d8e6c) {
          *(uint *)&this_ptr->field_0xd07c = 0;
          *(uint *)&this_ptr->field_0xd088 = 0;
        }
      }
    }
    pfStack_54 = (float *)&this_ptr->field_0x2518;
    fStack_90 = delta_time * *(float *)&this_ptr->field_0xcdcc;
    pfStack_40 = (float *)&this_ptr->field_0x250c;
    pfStack_38 = (float *)&this_ptr->field_0x249c;
    pCStack_34 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    pCStack_2c = (CVector3f *)&this_ptr->field_0xd098;
    puStack_50 = &this_ptr->field_0xfd8;
    pfStack_3c = (float *)&this_ptr->field_0x20;
    while (0.0 < fStack_90) {
      iVar3 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCStack_34->base,&fStack_90);
      switch(iVar3) {
      case 0x514:
        iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"keddem_stand.wav");
          *(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4) = uVar6;
        }
        break;
      case 0x515:
        iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"keddem_chasewalk.wav");
          *(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4) = uVar6;
        }
        break;
      case 0x516:
        iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"keddem_chasefast.wav");
          *(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4) = uVar6;
        }
        break;
      case 0x517:
        iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"keddem_attack1.wav");
          *(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4) = uVar6;
        }
        break;
      case 0x518:
        iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"keddem_attack2.wav");
          *(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4) = uVar6;
        }
        break;
      case 0x519:
        iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"keddem_attack3.wav");
          *(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4) = uVar6;
        }
        break;
      case 0x51a:
        iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"keddem_pain.wav");
          *(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4) = uVar6;
        }
        break;
      case 0x51b:
        iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"keddem_die.wav");
          *(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4) = uVar6;
        }
        break;
      case 0x51c:
        iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"keddem_warning.wav");
          *(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4) = uVar6;
        }
        break;
      case 0x51d:
        iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"keddem_appear.wav");
          *(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4) = uVar6;
        }
        break;
      case 0x51e:
        iVar5 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4));
        if (iVar5 == 0) {
          uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"keddem_disappear.wav");
          *(uint *)(&this_ptr->field_0xbc54 + iVar3 * 4) = uVar6;
        }
      }
      *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
      core_charactr_cpp_FUN_00434850(this_ptr,delta_time * *(float *)&this_ptr->field_0xcdcc);
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_34->base);
      uVar6 = *(uint *)(pSVar4 + 0x24);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"State: %d\n",uVar6);
      iVar3 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                        ((CCharacter *)this_ptr,delta_time);
      if (iVar3 == 0) {
        switch(uVar6) {
        case 0:
          if ((*(int *)&this_ptr->field_0xd094 == 0) &&
             (iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
             iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar3 == 0)) {
            iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
            if (iVar3 != 0) {
              core_kedward_cpp_FUN_005919a0(this_ptr);
            }
            (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
            if (*(int *)&this_ptr->field_0xcde4 == 0) {
              iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
              if (iVar3 == 0) break;
              *(uint *)&g_CGamePtr->field_0x244 = 1;
              *(uint *)&this_ptr->field_0xcde4 =
                   *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            }
            if (*(int *)&this_ptr->field_0xcde4 != 0) {
              core_kedward_cpp_FUN_005919a0(this_ptr);
            }
          }
          break;
        case 1:
        case 2:
          if ((*(int *)&this_ptr->field_0xd068 == 0) && (*(int *)&this_ptr->field_0xd094 != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_34->base,0,1);
          }
          else {
            iVar3 = *(int *)&this_ptr->field_0xcde4;
            (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
            if ((*(int *)&this_ptr->field_0xcde4 == 0) &&
               (iVar5 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
               iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), iVar5 != 0)) {
              *(uint *)&g_CGamePtr->field_0x244 = 1;
              *(uint *)&this_ptr->field_0xcde4 =
                   *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            }
            if (*(int *)&this_ptr->field_0xcde4 == 0) {
              iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time)
              ;
              if (iVar3 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_34->base,0,1);
              }
            }
            else if (iVar3 == 0) {
              core_kedward_cpp_FUN_005919a0(this_ptr);
            }
            else {
              pfStack_38[2] = 0.0;
              pfStack_38[1] = pfStack_38[2];
              *pfStack_38 = pfStack_38[1];
              fVar2 = *(float *)&this_ptr->field_0xd078;
              if (fVar2 == 0.0) {
                max_distance = 0.34906584;
                fVar13 = 1.1;
                CStack_280.z = 0x40733333;
                direction = &CStack_280;
                CStack_280.x = fVar2;
                CStack_280.y = fVar2;
                path_map = (CPathMap *)
                           (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xc4))
                                     (*(int *)&this_ptr->field_0xcde4);
                iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                  ((CCharacter *)this_ptr,
                                   (CVector3f *)(*(int *)&this_ptr->field_0xcde4 + 0x20),path_map,
                                   direction,fVar13,max_distance);
                if (iVar3 < 0) {
                  engine_console_cpp_FUN_00441ff0
                            (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (&pCStack_34->base,0,1);
                }
                else if (0 < iVar3) {
                  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
                  if (iVar3 < 0x4b) {
                    iVar3 = 3;
                  }
                  else {
                    iVar3 = 4;
                  }
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (&pCStack_34->base,iVar3,1);
                  *(uint *)&this_ptr->field_0xcde0 = 0x3f4ccccd;
                }
              }
              else {
                if (*(float *)&this_ptr->field_0xd080 <= 0.0) {
                  fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
                  CStack_214.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
                  fStack_18 = fStack_1c;
                  CStack_214.y = 0.0;
                  CStack_214.z = fStack_1c;
                  if (&CStack_214 != pCStack_2c) {
                    pCStack_2c->x = CStack_214.x;
                    pCStack_2c->y = 0.0;
                    pCStack_2c->z = fStack_1c;
                  }
                  fStack_5c = SQRT(pCStack_2c->z * pCStack_2c->z +
                                   pCStack_2c->x * pCStack_2c->x + pCStack_2c->y * pCStack_2c->y);
                  if (fStack_5c <= 0.0) {
                    pCStack_2c->z = 0.0;
                    pCStack_2c->y = pCStack_2c->z;
                    pCStack_2c->x = pCStack_2c->y;
                  }
                  else {
                    fVar2 = 1.0 / fStack_5c;
                    pCStack_2c->x = pCStack_2c->x * fVar2;
                    pCStack_2c->y = pCStack_2c->y * fVar2;
                    pCStack_2c->z = pCStack_2c->z * fVar2;
                  }
                  fVar2 = pCStack_2c->y * _DAT_005d8e74;
                  fVar13 = pCStack_2c->z * _DAT_005d8e74;
                  pCStack_2c->x = pCStack_2c->x * _DAT_005d8e74;
                  pCStack_2c->y = fVar2;
                  pCStack_2c->z = fVar13;
                  iVar3 = *(int *)&this_ptr->field_0xcde4;
                  pCStack_2c->x = *(float *)(iVar3 + 0x20) + pCStack_2c->x;
                  pCStack_2c->y = *(float *)(iVar3 + 0x24) + pCStack_2c->y;
                  pCStack_2c->z = *(float *)(iVar3 + 0x28) + pCStack_2c->z;
                  *(uint *)&this_ptr->field_0xd080 = 0x3f800000;
                  fStack_58 = CStack_214.x;
                  fStack_14 = CStack_214.x;
                }
                CStack_25c.x = 0.0;
                CStack_25c.y = 0.0;
                CStack_25c.z = 0.0;
                core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,pCStack_2c,(CPathMap *)0x0,&CStack_25c,1.0,0.0);
              }
            }
          }
          break;
        case 3:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
          iVar3 = *(int *)&this_ptr->field_0xcde4;
          if (iVar3 == 0) {
            core_kedward_cpp_FUN_005919a0(this_ptr);
          }
          else {
            fStack_28c = *pfStack_3c - *(float *)(iVar3 + 0x20);
            fStack_288 = pfStack_3c[1] - *(float *)(iVar3 + 0x24);
            fStack_284 = pfStack_3c[2] - *(float *)(iVar3 + 0x28);
            fStack_d0 = fStack_28c;
            afStack_fc[(uint)bVar7 * -2 + 0xc] = afStack_2d0[(uint)bVar7 * -2 + 0x12];
            afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
                 afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
            if (afStack_1e0 + 5 != afStack_fc + 0xb) {
              fStack_1cc = fStack_d0;
              fStack_1c8 = fStack_cc;
              fStack_1c4 = fStack_c8;
            }
            fStack_48 = core_motion_cpp_FUN_004fc930(&pCStack_34->base);
            fStack_70 = fStack_1c4 * fStack_1c4 + fStack_1cc * fStack_1cc + fStack_1c8 * fStack_1c8;
            fStack_6c = (float)(((int)fStack_70 >> 1) + _DAT_01d1a0a4);
            fStack_14 = fStack_48;
            if ((fStack_6c <= 0x40733333) || (fStack_48 <= (float)_DAT_005d8eac)) {
              if ((0x3f7fffff < (int)fStack_48) && ((int)fStack_48 < 0x40000001)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_34c);
                uStack_348 = 0x41200000;
                pCStack_318 = this_ptr;
                pCStack_314 = this_ptr;
                core_xform_cpp_FUN_00583260
                          (&DAT_02cfd900,puStack_50 + *(int *)&this_ptr->field_0xd074 * 0x30,
                           0x40000000,aSStack_34c);
                pfVar12 = afStack_2d0 + 0xe;
                afStack_298[0] = (float)uStack_274;
                afStack_2d0[(uint)bVar7 * -2 + 0xf] = afStack_270[(uint)bVar7 * -2];
                afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
                     afStack_270[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
                core_actor_cpp_FUN_00408b80(this_ptr,pfVar12);
                pfVar12 = afStack_1bc + 0x11;
                afStack_178[0] = (float)uStack_250;
                afStack_1bc[(uint)bVar7 * -2 + 0x12] = afStack_24c[(uint)bVar7 * -2];
                pCVar10 = this_ptr;
                afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
                     afStack_24c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
                core_enemy_cpp_FUN_004893f0(pCVar10,pfVar12);
              }
            }
            else {
              core_kedward_cpp_FUN_005919a0(this_ptr);
            }
          }
          break;
        case 4:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
          iVar3 = *(int *)&this_ptr->field_0xcde4;
          if (iVar3 == 0) {
            core_kedward_cpp_FUN_005919a0(this_ptr);
          }
          else {
            afStack_1bc[2] = *pfStack_3c - *(float *)(iVar3 + 0x20);
            afStack_1bc[3] = pfStack_3c[1] - *(float *)(iVar3 + 0x24);
            fStack_1ac = pfStack_3c[2] - *(float *)(iVar3 + 0x28);
            fStack_148 = afStack_1bc[2];
            afStack_144[(uint)bVar7 * -2] = afStack_1bc[(uint)bVar7 * -2 + 3];
            afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            if (afStack_1bc + 0x1a != &fStack_148) {
              fStack_154 = fStack_148;
              fStack_150 = afStack_144[0];
              fStack_14c = afStack_144[1];
            }
            fStack_4c = core_motion_cpp_FUN_004fc930(&pCStack_34->base);
            fStack_78 = fStack_14c * fStack_14c + fStack_154 * fStack_154 + fStack_150 * fStack_150;
            fStack_74 = (float)(((int)fStack_78 >> 1) + _DAT_01d1a0a4);
            fStack_14 = fStack_4c;
            if ((fStack_74 <= 0x40733333 + 1.0) || (fStack_4c <= (float)_DAT_005d8ea4)) {
              if ((0x3f7fffff < (int)fStack_4c) && ((int)fStack_4c < 0x40000001)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_310);
                uStack_30c = 0x41a00000;
                pCStack_2dc = this_ptr;
                pCStack_2d8 = this_ptr;
                core_xform_cpp_FUN_00583260
                          (&DAT_02cfd900,puStack_50 + *(int *)&this_ptr->field_0xd074 * 0x30,
                           0x40000000,aSStack_310);
                pfVar12 = afStack_234 + 5;
                afStack_220[0] = (float)uStack_1e4;
                afStack_234[(uint)bVar7 * -2 + 6] = afStack_1e0[(uint)bVar7 * -2];
                afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                     afStack_1e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
                core_actor_cpp_FUN_00408b80(this_ptr,pfVar12);
                pfVar12 = afStack_fc + 0x14;
                afStack_ac[0] = afStack_1e0[2];
                afStack_fc[(uint)bVar7 * -2 + 0x15] = afStack_1e0[(uint)bVar7 * -2 + 3];
                pCVar10 = this_ptr;
                afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
                     afStack_1e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
                core_enemy_cpp_FUN_004893f0(pCVar10,pfVar12);
              }
            }
            else {
              core_kedward_cpp_FUN_005919a0(this_ptr);
            }
          }
          break;
        case 5:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
          iVar3 = *(int *)&this_ptr->field_0xcde4;
          if (iVar3 == 0) {
            core_kedward_cpp_FUN_005919a0(this_ptr);
          }
          else {
            fStack_208 = *pfStack_3c - *(float *)(iVar3 + 0x20);
            afStack_204[0] = pfStack_3c[1] - *(float *)(iVar3 + 0x24);
            afStack_204[1] = pfStack_3c[2] - *(float *)(iVar3 + 0x28);
            afStack_2d0[2] = fStack_208;
            afStack_2d0[(uint)bVar7 * -2 + 3] = afStack_204[(uint)bVar7 * -2];
            afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_204[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            if (afStack_204 + 5 != afStack_2d0 + 2) {
              fStack_1f0 = afStack_2d0[2];
              fStack_1ec = afStack_2d0[3];
              fStack_1e8 = fStack_2c0;
            }
            fStack_44 = core_motion_cpp_FUN_004fc930(&pCStack_34->base);
            fStack_80 = fStack_1e8 * fStack_1e8 + fStack_1f0 * fStack_1f0 + fStack_1ec * fStack_1ec;
            fStack_68 = (float)(((int)fStack_80 >> 1) + _DAT_01d1a0a4);
            fStack_14 = fStack_44;
            if ((fStack_68 <= 0x40733333) || (fStack_44 <= (float)_DAT_005d8ea4)) {
              if ((0x3f7fffff < (int)fStack_44) && ((int)fStack_44 < 0x40000001)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_388);
                uStack_384 = 0x41f00000;
                pCStack_354 = this_ptr;
                pCStack_350 = this_ptr;
                core_xform_cpp_FUN_00583260
                          (&DAT_02cfd900,puStack_50 + *(int *)&this_ptr->field_0xd074 * 0x30,
                           0x40000000,aSStack_388);
                puVar11 = &uStack_1c0;
                uStack_1c0 = afStack_144[2];
                afStack_1bc[(uint)bVar7 * -2] = afStack_144[(uint)bVar7 * -2 + 3];
                afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                     afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
                core_actor_cpp_FUN_00408b80(this_ptr,puVar11);
                pfVar12 = afStack_2d0 + 5;
                afStack_2bc[0] = (float)uStack_184;
                afStack_2d0[(uint)bVar7 * -2 + 6] = afStack_1bc[(uint)bVar7 * -2 + 0xf];
                pCVar10 = this_ptr;
                afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                     afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
                core_enemy_cpp_FUN_004893f0(pCVar10,pfVar12);
              }
            }
            else {
              core_kedward_cpp_FUN_005919a0(this_ptr);
            }
          }
          break;
        case 8:
          if ((*(int *)&this_ptr->field_0xcdd0 == 0) && (*(int *)&this_ptr->field_0xdc == 0)) {
            core_skeleton_cpp_FUN_0054dbd0(pCStack_34,0);
            pfVar12 = afStack_fc + 0x11;
            afStack_b8[0] = (float)uStack_160;
            afStack_fc[(uint)bVar7 * -2 + 0x12] = afStack_1bc[(uint)bVar7 * -2 + 0x18];
            afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
                 afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
            core_actor_cpp_FUN_00408b80(this_ptr,pfVar12);
            blood_type = BLOOD_TYPE_RED;
            CStack_10c.x = fStack_dc;
            *(float *)((int)&CStack_10c + (uint)bVar7 * -8 + 4) = afStack_fc[(uint)bVar7 * -2 + 9];
            *(float *)((int)&CStack_10c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                 afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
            core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_10c,blood_type);
            *(uint *)&this_ptr->field_0xcdd0 = 1;
          }
          break;
        case 10:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
          iVar3 = *(int *)&this_ptr->field_0xcde4;
          if (iVar3 != 0) {
            fStack_e8 = *pfStack_3c - *(float *)(iVar3 + 0x20);
            fStack_e4 = pfStack_3c[1] - *(float *)(iVar3 + 0x24);
            fStack_e0 = pfStack_3c[2] - *(float *)(iVar3 + 0x28);
            fStack_19c = fStack_e8;
            afStack_1bc[(uint)bVar7 * -2 + 9] = afStack_fc[(uint)bVar7 * -2 + 6];
            afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                 afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            if (afStack_24c + 2 != afStack_1bc + 8) {
              afStack_24c[2] = fStack_19c;
              afStack_24c[3] = fStack_198;
              fStack_23c = fStack_194;
            }
            fStack_28 = fStack_23c * fStack_23c +
                        afStack_24c[2] * afStack_24c[2] + afStack_24c[3] * afStack_24c[3];
            fStack_24 = (float)(((int)fStack_28 >> 1) + _DAT_01d1a0a4);
            if (fStack_24 <= (float)_DAT_005d8e94) {
              fStack_30 = *(float *)&this_ptr->field_0x3280;
              if (fStack_30 < *(float *)&this_ptr->field_0x327c) {
                fStack_30 = *(float *)&this_ptr->field_0x2490;
              }
              if (fStack_30 < *(float *)&this_ptr->field_0x327c) {
                fStack_30 = *(float *)&this_ptr->field_0x327c + (float)_DAT_005d8e9c;
              }
              iVar3 = 0;
              do {
                fStack_20 = (float)iVar3 * _DAT_005d8e78 * _DAT_005d8e7c;
                fStack_14 = (float)iVar3;
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                          (g_CDemonSetPtr,(CDemonActor *)this_ptr);
                fVar8 = (float10)fcos((float10)fStack_20);
                fVar9 = (float10)fsin((float10)fStack_20);
                fStack_98 = (float)core_setcolid_cpp_FUN_0053de10
                                             (g_CDemonSetPtr,*(uint *)&this_ptr->field_0x20,
                                              *(uint *)&this_ptr->field_0x28,
                                              (float)(fVar9 * (float10)_DAT_005d8e84),
                                              (float)(fVar8 * (float10)_DAT_005d8e84),
                                              *(uint *)&this_ptr->field_0x3270,
                                              *(float *)&this_ptr->field_0x24 +
                                              *(float *)&this_ptr->field_0x327c,
                                              *(float *)&this_ptr->field_0x24 + fStack_30);
                fStack_14 = fStack_98;
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                if (fStack_98 < 1.0) break;
                iVar3 = iVar3 + 1;
              } while (iVar3 < 4);
              if (iVar3 < 4) {
                *(uint *)&this_ptr->field_0xcde4 = 0;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_34->base,0,1);
              }
            }
          }
          break;
        case 0xc:
          iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
          if (iVar3 == 0) {
            iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_2b0 = *(float *)(iVar3 + 0x20) - *pfStack_3c;
            fStack_2ac = *(float *)(iVar3 + 0x24) - pfStack_3c[1];
            fStack_2a8 = *(float *)(iVar3 + 0x28) - pfStack_3c[2];
            afStack_204[2] = fStack_2b0;
            afStack_204[(uint)bVar7 * -2 + 3] = afStack_2d0[(uint)bVar7 * -2 + 9];
            afStack_204[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_2d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_204 + 2);
            fStack_100 = fStack_1a8;
            afStack_fc[(uint)bVar7 * -2] = afStack_1bc[(uint)bVar7 * -2 + 6];
            afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
            fStack_64 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                         (afStack_fc[0] - *(float *)&this_ptr->field_0x34);
            fStack_14 = fStack_64;
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                         (fStack_100 - *(float *)&this_ptr->field_0x30);
            *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_64;
            *(float *)&this_ptr->field_0x30 = *(float *)&this_ptr->field_0x30 + fStack_14;
            core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr)
            ;
          }
          iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
          if ((iVar3 != 0) &&
             (fStack_14 = core_motion_cpp_FUN_004fc930(&pCStack_34->base),
             (float)_DAT_005d8e8c < fStack_14)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_34->base,0,1);
          }
          break;
        case 0xd:
        case 0xf:
        case 0x10:
          if (*(int *)&this_ptr->field_0xd068 == 0) {
            *(uint *)&this_ptr->field_0xd068 = 1;
            *(uint *)&this_ptr->field_0xd064 = 0;
          }
          break;
        case 0xe:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
          if (*(int *)&this_ptr->field_0xd068 == 1) {
            *(uint *)&this_ptr->field_0xd068 = 0;
            *(uint *)&this_ptr->field_0xd064 = 0;
            if (*(int *)&this_ptr->field_0xd094 == 0) {
              *(uint *)&this_ptr->field_0xd07c = 0x40800000;
              *(uint *)&this_ptr->field_0xd078 = 1;
            }
          }
        }
      }
      else {
        uVar1 = *(uint *)&this_ptr->field_0x273c;
        if (uVar1 < 2) {
          if (uVar1 == 1) {
LAB_005901a2:
            iVar3 = 1;
          }
          else {
LAB_00590865:
            iVar3 = 0;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_34->base,iVar3,1);
        }
        else {
          if (uVar1 < 3) goto LAB_005901a2;
          if (uVar1 != 3) goto LAB_00590865;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_34->base,0,1);
          engine_console_cpp_FUN_00441ff0
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
        }
        switch(uVar6) {
        case 0xd:
        case 0xf:
        case 0x10:
          if (*(int *)&this_ptr->field_0xd068 == 0) {
            *(uint *)&this_ptr->field_0xd068 = 1;
            *(uint *)&this_ptr->field_0xd064 = 0;
          }
          break;
        case 0xe:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
          if (*(int *)&this_ptr->field_0xd068 == 1) {
            *(uint *)&this_ptr->field_0xd068 = 0;
            *(uint *)&this_ptr->field_0xd064 = 0;
            if (*(int *)&this_ptr->field_0xd094 == 0) {
              *(uint *)&this_ptr->field_0xd07c = 0x40800000;
              *(uint *)&this_ptr->field_0xd078 = 1;
            }
          }
        }
        pfStack_38[2] = 0.0;
        pfStack_38[1] = pfStack_38[2];
        *pfStack_38 = pfStack_38[1];
      }
      if (0.0 < *(float *)&this_ptr->field_0xcde0) {
        *(float *)&this_ptr->field_0xcde0 = *(float *)&this_ptr->field_0xcde0 - delta_time;
      }
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
      if (iVar3 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_34->base,0xc,1);
      }
      core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
      afStack_270[2] = *pfStack_54 * delta_time;
      afStack_270[3] = pfStack_54[1] * delta_time;
      fStack_260 = pfStack_54[2] * delta_time;
      fStack_16c = *pfStack_54 * delta_time;
      afStack_1bc[(uint)bVar7 * -2 + 0x15] = afStack_270[(uint)bVar7 * -2 + 3];
      afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
           afStack_270[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      fStack_190 = fStack_16c + *pfStack_40;
      fStack_18c = fStack_168 + pfStack_40[1];
      fStack_188 = fStack_164 + pfStack_40[2];
      fStack_130 = fStack_16c + *pfStack_40;
      afStack_144[(uint)bVar7 * -2 + 6] = afStack_1bc[(uint)bVar7 * -2 + 0xc];
      pfVar12 = pfStack_40;
      afStack_144[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
           afStack_1bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
      fStack_238 = fStack_130 + *pfStack_38;
      afStack_234[0] = fStack_12c + pfStack_38[1];
      afStack_234[1] = fStack_128 + pfStack_38[2];
      CStack_124.x = fStack_130 + *pfStack_38;
      *(float *)((int)&CStack_124 + (uint)bVar7 * -8 + 4) = afStack_234[(uint)bVar7 * -2];
      *(float *)((int)&CStack_124 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_234[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      pfVar12[2] = 0.0;
      pfVar12[1] = pfVar12[2];
      *pfVar12 = pfVar12[1];
      pfStack_38[2] = 0.0;
      pfStack_38[1] = pfStack_38[2];
      *pfStack_38 = pfStack_38[1];
      core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_124);
    }
    core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCStack_34);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  }
  return;
}
