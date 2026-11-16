// Name: core_kedward.cpp_CKedward_process_FUN_00590010
// Address: 00590010
// Address Range: [[00590010, 0059166d]]
// Convention: __cdecl
// Signature: void __cdecl core_kedward_cpp_CKedward_process_FUN_00590010(CKedward *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_kedward_cpp_CKedward_process_FUN_00590010(CKedward *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  EWalkState EVar2;
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  uint uVar7;
  CPathMap *path_map;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float afStackY_12bc [965];
  CKedward *pCVar11;
  CVector3f *pCVar12;
  float fVar13;
  float fVar14;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo *pSVar15;
  SDamageInfo SStack_388;
  SDamageInfo SStack_34c;
  SDamageInfo SStack_310;
  CVector3f CStack_2d4;
  float fStack_2c8;
  float afStack_2c4 [2];
  CVector3f CStack_2bc;
  float fStack_2b0;
  float afStack_2ac [4];
  float fStack_29c;
  CVector3f CStack_298;
  float fStack_28c;
  float afStack_288 [2];
  CVector3f CStack_280;
  CVector3f CStack_274;
  float fStack_268;
  float afStack_264 [2];
  CVector3f CStack_25c;
  CVector3f CStack_250;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float afStack_234 [2];
  CVector3f CStack_22c;
  CVector3f CStack_220;
  CVector3f CStack_214;
  float fStack_208;
  float afStack_204 [2];
  CVector3f CStack_1fc;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  CVector3f CStack_1e4;
  CVector3f CStack_1d8;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  CVector3f CStack_1c0;
  float fStack_1b4;
  float afStack_1b0 [2];
  CVector3f CStack_1a8;
  float fStack_19c;
  float afStack_198 [4];
  float fStack_188;
  CVector3f CStack_184;
  CVector3f CStack_178;
  float fStack_16c;
  float afStack_168 [2];
  CVector3f CStack_160;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float afStack_144 [2];
  CVector3f CStack_13c;
  float fStack_130;
  float afStack_12c [2];
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
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [5];
  CVector3f CStack_b8;
  CVector3f CStack_ac;
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
  CVector3f *pCStack_54;
  CMatrix3x4f *pCStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3f *pCStack_40;
  CLocation *pCStack_3c;
  CVector3f *pCStack_38;
  CDeformableModelInstance *pCStack_34;
  float fStack_30;
  CVector3f *pCStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  iVar4 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar4 != 0) {
    if (0.0 < this_ptr->countdown_timer) {
      this_ptr->countdown_timer = this_ptr->countdown_timer - delta_time;
    }
    fVar14 = this_ptr->fade_timer + delta_time;
    this_ptr->fade_timer = fVar14;
    if (this_ptr->max_fade_time <= fVar14) {
      this_ptr->fade_timer = this_ptr->max_fade_time;
    }
    if (this_ptr->cini_flag == 0) {
      if ((this_ptr->fade_state == 0) && (this_ptr->speed_boost_latched == 0)) {
        fVar14 = (this_ptr->base).speed;
        this_ptr->speed_boost_latched = 1;
        fVar14 = fVar14 + _DAT_005d8e54;
        this_ptr->speed_boosted = 1;
        (this_ptr->base).speed = fVar14;
      }
      if ((0.0 < this_ptr->vanish_timer) && (this_ptr->vanish_timer - delta_time <= 0.0)) {
        pCVar1 = &(this_ptr->base).base.base.location;
        pCVar3 = (this_ptr->base).victim;
        afStack_fc[2] = (pCVar1->position).x - (pCVar3->base).location.position.x;
        afStack_fc[3] =
             (this_ptr->base).base.base.location.position.y - (pCVar3->base).location.position.y;
        fStack_ec = (this_ptr->base).base.base.location.position.z -
                    (pCVar3->base).location.position.z;
        afStack_2ac[2] = afStack_fc[2];
        afStack_2ac[(uint)bVar8 * -2 + 3] = afStack_fc[(uint)bVar8 * -2 + 3];
        afStack_2ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        fStack_84 = fStack_29c * fStack_29c +
                    afStack_2ac[2] * afStack_2ac[2] + afStack_2ac[3] * afStack_2ac[3];
        fStack_94 = (float)(((int)fStack_84 >> 1) + _DAT_01d1a0a4);
        if (fStack_94 < (float)_DAT_005d8e5c) {
          this_ptr->vanish_timer = 0.5;
        }
        else {
          fVar14 = (this_ptr->base).speed;
          this_ptr->vanish_timer = 0.0;
          iVar4 = _DAT_01d5ba14;
          (this_ptr->base).speed = fVar14 + _DAT_005d8e64;
          iVar4 = *(int *)(iVar4 * 4 + 0x1d5ba04);
          fStack_118 = *(float *)(iVar4 + 0x20) - (pCVar1->position).x;
          afStack_114[0] = *(float *)(iVar4 + 0x24) - (this_ptr->base).base.base.location.position.y
          ;
          afStack_114[1] = *(float *)(iVar4 + 0x28) - (this_ptr->base).base.base.location.position.z
          ;
          CStack_2d4.x = fStack_118;
          *(float *)((int)&CStack_2d4 + (uint)bVar8 * -8 + 4) = afStack_114[(uint)bVar8 * -2];
          *(float *)((int)&CStack_2d4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&CStack_2d4,&CStack_22c);
          afStack_cc[2] = CStack_22c.x;
          afStack_cc[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_22c + (uint)bVar8 * -8 + 4);
          afStack_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               *(float *)((int)&CStack_22c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          fStack_8c = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                (afStack_cc[3] - (this_ptr->base).base.base.orient.vec.y);
          fStack_14 = fStack_8c;
          fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                (afStack_cc[2] - (this_ptr->base).base.base.orient.vec.x);
          fVar14 = (this_ptr->base).base.base.orient.vec.x;
          (this_ptr->base).base.base.orient.vec.y =
               (this_ptr->base).base.base.orient.vec.y + fStack_8c;
          (this_ptr->base).base.base.orient.vec.x = fVar14 + fStack_14;
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(this_ptr->base).base.model.base,0xd,1);
        }
      }
      fVar14 = this_ptr->attack_cooldown - delta_time;
      this_ptr->attack_cooldown = fVar14;
      if (fVar14 < 0.0) {
        this_ptr->attack_cooldown = 0.0;
      }
      fVar14 = this_ptr->vanish_timer - delta_time;
      this_ptr->vanish_timer = fVar14;
      if (fVar14 < 0.0) {
        this_ptr->vanished = 0;
        this_ptr->speed_boosted = 0;
        if (this_ptr->vanish_timer < (float)_DAT_005d8e6c) {
          this_ptr->vanish_timer = 0.0;
          this_ptr->speed_boost_latched = 0;
        }
      }
    }
    pCStack_54 = &(this_ptr->base).base.velocity;
    fStack_90 = delta_time * (this_ptr->base).speed;
    pCStack_40 = &(this_ptr->base).base.position_delta;
    pCStack_38 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCStack_34 = &(this_ptr->base).base.model;
    pCStack_2c = &this_ptr->walk_target;
    pCStack_50 = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
    pCStack_3c = &(this_ptr->base).base.base.location;
    while (0.0 < fStack_90) {
      iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCStack_34->base,&fStack_90);
      switch(iVar4) {
      case 0x514:
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78
                                    ));
        if (iVar6 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"keddem_stand.wav");
          *(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78) = uVar7;
        }
        break;
      case 0x515:
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78
                                    ));
        if (iVar6 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"keddem_chasewalk.wav");
          *(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78) = uVar7;
        }
        break;
      case 0x516:
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78
                                    ));
        if (iVar6 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"keddem_chasefast.wav");
          *(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78) = uVar7;
        }
        break;
      case 0x517:
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78
                                    ));
        if (iVar6 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"keddem_attack1.wav");
          *(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78) = uVar7;
        }
        break;
      case 0x518:
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78
                                    ));
        if (iVar6 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"keddem_attack2.wav");
          *(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78) = uVar7;
        }
        break;
      case 0x519:
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78
                                    ));
        if (iVar6 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"keddem_attack3.wav");
          *(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78) = uVar7;
        }
        break;
      case 0x51a:
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78
                                    ));
        if (iVar6 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"keddem_pain.wav");
          *(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78) = uVar7;
        }
        break;
      case 0x51b:
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78
                                    ));
        if (iVar6 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"keddem_die.wav");
          *(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78) = uVar7;
        }
        break;
      case 0x51c:
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78
                                    ));
        if (iVar6 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"keddem_warning.wav");
          *(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78) = uVar7;
        }
        break;
      case 0x51d:
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78
                                    ));
        if (iVar6 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"keddem_appear.wav");
          *(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78) = uVar7;
        }
        break;
      case 0x51e:
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                          (*(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78
                                    ));
        if (iVar6 == 0) {
          uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"keddem_disappear.wav");
          *(uint *)((this_ptr->base).base.flames[0x31].off_event + iVar4 * 4 + 0x78) = uVar7;
        }
      }
      fVar14 = (this_ptr->base).speed;
      (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
      core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar14);
      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_34->base);
      iVar4 = pSVar5->state_index;
      engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"State: %d\n");
      iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                        ((CCharacter *)this_ptr,delta_time);
      if (iVar6 == 0) {
        switch(iVar4) {
        case 0:
          if ((this_ptr->cini_flag == 0) &&
             (iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
             iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 == 0)) {
            iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
            if (iVar4 != 0) {
              core_kedward_cpp_FUN_005919a0(this_ptr);
            }
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            if ((this_ptr->base).victim == (CCharacter *)0x0) {
              iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
              if (iVar4 == 0) break;
              g_CGamePtr->player_hit_flag = 1;
              (this_ptr->base).victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            }
            if ((this_ptr->base).victim != (CCharacter *)0x0) {
              core_kedward_cpp_FUN_005919a0(this_ptr);
            }
          }
          break;
        case 1:
        case 2:
          if ((this_ptr->fading_in == 0) && (this_ptr->cini_flag != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_34->base,0,1);
          }
          else {
            pCVar3 = (this_ptr->base).victim;
            (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                      (&this_ptr->base,delta_time);
            if (((this_ptr->base).victim == (CCharacter *)0x0) &&
               (iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
               iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), iVar4 != 0)) {
              g_CGamePtr->player_hit_flag = 1;
              (this_ptr->base).victim = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            }
            if ((this_ptr->base).victim == (CCharacter *)0x0) {
              iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
              if (iVar4 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_34->base,0,1);
              }
            }
            else if (pCVar3 == (CCharacter *)0x0) {
              core_kedward_cpp_FUN_005919a0(this_ptr);
            }
            else {
              pCStack_38->z = 0.0;
              pCStack_38->y = pCStack_38->z;
              pCStack_38->x = pCStack_38->y;
              fVar14 = (float)this_ptr->vanished;
              if (fVar14 == 0.0) {
                max_distance = 0.34906584;
                fVar13 = 1.1;
                CStack_280.z = 0x40733333;
                pCVar12 = &CStack_280;
                pCVar3 = (this_ptr->base).victim;
                CStack_280.x = fVar14;
                CStack_280.y = fVar14;
                path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
                iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                  ((CCharacter *)this_ptr,
                                   &(((this_ptr->base).victim)->base).location.position,path_map,
                                   pCVar12,fVar13,max_distance);
                if (iVar4 < 0) {
                  engine_console_cpp_CConsole_printf_FUN_00441ff0
                            (g_CConsolePtr,"%s gave up chase - I'm confused\n");
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (&pCStack_34->base,0,1);
                }
                else if (0 < iVar4) {
                  iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
                  if (iVar4 < 0x4b) {
                    iVar4 = 3;
                  }
                  else {
                    iVar4 = 4;
                  }
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (&pCStack_34->base,iVar4,1);
                  (this_ptr->base).attack_cooldown = 0.8;
                }
              }
              else {
                if (this_ptr->attack_cooldown <= 0.0) {
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
                    fVar14 = 1.0 / fStack_5c;
                    pCStack_2c->x = pCStack_2c->x * fVar14;
                    pCStack_2c->y = pCStack_2c->y * fVar14;
                    pCStack_2c->z = pCStack_2c->z * fVar14;
                  }
                  fVar14 = pCStack_2c->y * _DAT_005d8e74;
                  fVar13 = pCStack_2c->z * _DAT_005d8e74;
                  pCStack_2c->x = pCStack_2c->x * _DAT_005d8e74;
                  pCStack_2c->y = fVar14;
                  pCStack_2c->z = fVar13;
                  pCVar3 = (this_ptr->base).victim;
                  pCStack_2c->x = (pCVar3->base).location.position.x + pCStack_2c->x;
                  pCStack_2c->y = (pCVar3->base).location.position.y + pCStack_2c->y;
                  pCStack_2c->z = (pCVar3->base).location.position.z + pCStack_2c->z;
                  this_ptr->attack_cooldown = 1.0;
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
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar3 = (this_ptr->base).victim;
          if (pCVar3 == (CCharacter *)0x0) {
            core_kedward_cpp_FUN_005919a0(this_ptr);
          }
          else {
            fStack_28c = (pCStack_3c->position).x - (pCVar3->base).location.position.x;
            afStack_288[0] = (pCStack_3c->position).y - (pCVar3->base).location.position.y;
            afStack_288[1] = (pCStack_3c->position).z - (pCVar3->base).location.position.z;
            fStack_d0 = fStack_28c;
            afStack_cc[(uint)bVar8 * -2] = afStack_288[(uint)bVar8 * -2];
            afStack_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_288[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            if (&fStack_1cc != &fStack_d0) {
              fStack_1cc = fStack_d0;
              fStack_1c8 = afStack_cc[0];
              fStack_1c4 = afStack_cc[1];
            }
            fStack_48 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                  (&pCStack_34->base);
            fStack_70 = fStack_1c4 * fStack_1c4 + fStack_1cc * fStack_1cc + fStack_1c8 * fStack_1c8;
            fStack_6c = (float)(((int)fStack_70 >> 1) + _DAT_01d1a0a4);
            fStack_14 = fStack_48;
            if ((fStack_6c <= 0x40733333) || (fStack_48 <= (float)_DAT_005d8eac)) {
              if ((0x3f7fffff < (int)fStack_48) && ((int)fStack_48 < 0x40000001)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_34c);
                SStack_34c.damage_amount = 10.0;
                SStack_34c.attacker = (CDemonActor *)this_ptr;
                SStack_34c.wielder = (CDemonActor *)this_ptr;
                pSVar15 = &SStack_34c;
                fVar14 = 2.0;
                core_xform_cpp_transformVector3x4_FUN_00583260
                          ((CVector3f *)&DAT_02cfd900,pCStack_50 + this_ptr->bone_hand,&CStack_274);
                pCVar12 = &CStack_298;
                CStack_298.x = CStack_274.x;
                *(uint *)((int)&CStack_298 + (uint)bVar8 * -8 + 4) =
                     *(uint *)((int)&CStack_274 + (uint)bVar8 * -8 + 4);
                *(uint *)((int)&CStack_298 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     *(uint *)((int)&CStack_274 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                          ((CDemonActor *)this_ptr,pCVar12,&CStack_250);
                pCVar12 = &CStack_178;
                CStack_178.x = CStack_250.x;
                *(uint *)((int)&CStack_178 + (uint)bVar8 * -8 + 4) =
                     *(uint *)((int)&CStack_250 + (uint)bVar8 * -8 + 4);
                pCVar11 = this_ptr;
                *(uint *)((int)&CStack_178 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     *(uint *)((int)&CStack_250 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0
                          (&pCVar11->base,pCVar12,fVar14,pSVar15);
              }
            }
            else {
              core_kedward_cpp_FUN_005919a0(this_ptr);
            }
          }
          break;
        case 4:
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar3 = (this_ptr->base).victim;
          if (pCVar3 == (CCharacter *)0x0) {
            core_kedward_cpp_FUN_005919a0(this_ptr);
          }
          else {
            fStack_1b4 = (pCStack_3c->position).x - (pCVar3->base).location.position.x;
            afStack_1b0[0] = (pCStack_3c->position).y - (pCVar3->base).location.position.y;
            afStack_1b0[1] = (pCStack_3c->position).z - (pCVar3->base).location.position.z;
            fStack_148 = fStack_1b4;
            afStack_144[(uint)bVar8 * -2] = afStack_1b0[(uint)bVar8 * -2];
            afStack_144[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_1b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            if (&fStack_154 != &fStack_148) {
              fStack_154 = fStack_148;
              fStack_150 = afStack_144[0];
              fStack_14c = afStack_144[1];
            }
            fStack_4c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                  (&pCStack_34->base);
            fStack_78 = fStack_14c * fStack_14c + fStack_154 * fStack_154 + fStack_150 * fStack_150;
            fStack_74 = (float)(((int)fStack_78 >> 1) + _DAT_01d1a0a4);
            fStack_14 = fStack_4c;
            if ((fStack_74 <= 0x40733333 + 1.0) || (fStack_4c <= (float)_DAT_005d8ea4)) {
              if ((0x3f7fffff < (int)fStack_4c) && ((int)fStack_4c < 0x40000001)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_310);
                SStack_310.damage_amount = 20.0;
                SStack_310.attacker = (CDemonActor *)this_ptr;
                SStack_310.wielder = (CDemonActor *)this_ptr;
                pSVar15 = &SStack_310;
                fVar14 = 2.0;
                core_xform_cpp_transformVector3x4_FUN_00583260
                          ((CVector3f *)&DAT_02cfd900,pCStack_50 + this_ptr->bone_hand,&CStack_1e4);
                pCVar12 = &CStack_220;
                CStack_220.x = CStack_1e4.x;
                *(uint *)((int)&CStack_220 + (uint)bVar8 * -8 + 4) =
                     *(uint *)((int)&CStack_1e4 + (uint)bVar8 * -8 + 4);
                *(uint *)((int)&CStack_220 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     *(uint *)((int)&CStack_1e4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                          ((CDemonActor *)this_ptr,pCVar12,&CStack_1d8);
                pCVar12 = &CStack_ac;
                CStack_ac.x = CStack_1d8.x;
                *(uint *)((int)&CStack_ac + (uint)bVar8 * -8 + 4) =
                     *(uint *)((int)&CStack_1d8 + (uint)bVar8 * -8 + 4);
                pCVar11 = this_ptr;
                *(uint *)((int)&CStack_ac + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     *(uint *)((int)&CStack_1d8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0
                          (&pCVar11->base,pCVar12,fVar14,pSVar15);
              }
            }
            else {
              core_kedward_cpp_FUN_005919a0(this_ptr);
            }
          }
          break;
        case 5:
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar3 = (this_ptr->base).victim;
          if (pCVar3 == (CCharacter *)0x0) {
            core_kedward_cpp_FUN_005919a0(this_ptr);
          }
          else {
            fStack_208 = (pCStack_3c->position).x - (pCVar3->base).location.position.x;
            afStack_204[0] = (pCStack_3c->position).y - (pCVar3->base).location.position.y;
            afStack_204[1] = (pCStack_3c->position).z - (pCVar3->base).location.position.z;
            fStack_2c8 = fStack_208;
            afStack_2c4[(uint)bVar8 * -2] = afStack_204[(uint)bVar8 * -2];
            afStack_2c4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_204[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            if (&fStack_1f0 != &fStack_2c8) {
              fStack_1f0 = fStack_2c8;
              fStack_1ec = afStack_2c4[0];
              fStack_1e8 = afStack_2c4[1];
            }
            fStack_44 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                  (&pCStack_34->base);
            fStack_80 = fStack_1e8 * fStack_1e8 + fStack_1f0 * fStack_1f0 + fStack_1ec * fStack_1ec;
            fStack_68 = (float)(((int)fStack_80 >> 1) + _DAT_01d1a0a4);
            fStack_14 = fStack_44;
            if ((fStack_68 <= 0x40733333) || (fStack_44 <= (float)_DAT_005d8ea4)) {
              if ((0x3f7fffff < (int)fStack_44) && ((int)fStack_44 < 0x40000001)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_388);
                SStack_388.damage_amount = 30.0;
                SStack_388.attacker = (CDemonActor *)this_ptr;
                SStack_388.wielder = (CDemonActor *)this_ptr;
                pSVar15 = &SStack_388;
                fVar14 = 2.0;
                core_xform_cpp_transformVector3x4_FUN_00583260
                          ((CVector3f *)&DAT_02cfd900,pCStack_50 + this_ptr->bone_hand,&CStack_13c);
                pCVar12 = &CStack_1c0;
                CStack_1c0.x = CStack_13c.x;
                *(uint *)((int)&CStack_1c0 + (uint)bVar8 * -8 + 4) =
                     *(uint *)((int)&CStack_13c + (uint)bVar8 * -8 + 4);
                *(uint *)((int)&CStack_1c0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     *(uint *)((int)&CStack_13c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                          ((CDemonActor *)this_ptr,pCVar12,&CStack_184);
                pCVar12 = &CStack_2bc;
                CStack_2bc.x = CStack_184.x;
                *(uint *)((int)&CStack_2bc + (uint)bVar8 * -8 + 4) =
                     *(uint *)((int)&CStack_184 + (uint)bVar8 * -8 + 4);
                pCVar11 = this_ptr;
                *(uint *)((int)&CStack_2bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                     *(uint *)((int)&CStack_184 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0
                          (&pCVar11->base,pCVar12,fVar14,pSVar15);
              }
            }
            else {
              core_kedward_cpp_FUN_005919a0(this_ptr);
            }
          }
          break;
        case 8:
          if (((this_ptr->base).pool_me == 0) &&
             ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
            core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                      (pCStack_34,0,&CStack_160);
            pCVar12 = &CStack_b8;
            CStack_b8.x = CStack_160.x;
            *(uint *)((int)&CStack_b8 + (uint)bVar8 * -8 + 4) =
                 *(uint *)((int)&CStack_160 + (uint)bVar8 * -8 + 4);
            *(uint *)((int)&CStack_b8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 *(uint *)((int)&CStack_160 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                      ((CDemonActor *)this_ptr,pCVar12,&CStack_dc);
            blood_type = BLOOD_TYPE_RED;
            CStack_10c.x = CStack_dc.x;
            *(uint *)((int)&CStack_10c + (uint)bVar8 * -8 + 4) =
                 *(uint *)((int)&CStack_dc + (uint)bVar8 * -8 + 4);
            *(uint *)((int)&CStack_10c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 *(uint *)((int)&CStack_dc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_10c,blood_type);
            (this_ptr->base).pool_me = 1;
          }
          break;
        case 10:
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time)
          ;
          pCVar3 = (this_ptr->base).victim;
          if (pCVar3 != (CCharacter *)0x0) {
            fStack_e8 = (pCStack_3c->position).x - (pCVar3->base).location.position.x;
            fStack_e4 = (pCStack_3c->position).y - (pCVar3->base).location.position.y;
            fStack_e0 = (pCStack_3c->position).z - (pCVar3->base).location.position.z;
            fStack_19c = fStack_e8;
            afStack_198[(uint)bVar8 * -2] = afStack_fc[(uint)bVar8 * -2 + 6];
            afStack_198[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
            if (&fStack_244 != &fStack_19c) {
              fStack_244 = fStack_19c;
              fStack_240 = afStack_198[0];
              fStack_23c = afStack_198[1];
            }
            fStack_28 = fStack_23c * fStack_23c + fStack_244 * fStack_244 + fStack_240 * fStack_240;
            fStack_24 = (float)(((int)fStack_28 >> 1) + _DAT_01d1a0a4);
            if (fStack_24 <= (float)_DAT_005d8e94) {
              fStack_30 = (this_ptr->base).base.collision_cylinder_top;
              if (fStack_30 < (this_ptr->base).base.collision_cylinder_bottom) {
                fStack_30 = (this_ptr->base).base.model.bounding_box.max.y;
              }
              if (fStack_30 < (this_ptr->base).base.collision_cylinder_bottom) {
                fStack_30 = (this_ptr->base).base.collision_cylinder_bottom + (float)_DAT_005d8e9c;
              }
              iVar4 = 0;
              do {
                fStack_20 = (float)iVar4 * _DAT_005d8e78 * _DAT_005d8e7c;
                fStack_14 = (float)iVar4;
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                          (g_CDemonSetPtr,(CDemonActor *)this_ptr);
                fVar9 = (float10)fcos((float10)fStack_20);
                fVar10 = (float10)fsin((float10)fStack_20);
                fStack_98 = core_setcolid_cpp_CDemonSet_testCylinderCollision_FUN_0053de10
                                      (g_CDemonSetPtr,(this_ptr->base).base.base.location.position.x
                                       ,(this_ptr->base).base.base.location.position.z,
                                       (float)(fVar10 * (float10)_DAT_005d8e84),
                                       (float)(fVar9 * (float10)_DAT_005d8e84),
                                       (this_ptr->base).base.collision_cylinder_radius,
                                       (this_ptr->base).base.base.location.position.y +
                                       (this_ptr->base).base.collision_cylinder_bottom,
                                       (this_ptr->base).base.base.location.position.y + fStack_30);
                fStack_14 = fStack_98;
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                if (fStack_98 < 1.0) break;
                iVar4 = iVar4 + 1;
              } while (iVar4 < 4);
              if (iVar4 < 4) {
                (this_ptr->base).victim = (CCharacter *)0x0;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_34->base,0,1);
              }
            }
          }
          break;
        case 0xc:
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
          if (iVar4 == 0) {
            iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_2b0 = *(float *)(iVar4 + 0x20) - (pCStack_3c->position).x;
            afStack_2ac[0] = *(float *)(iVar4 + 0x24) - (pCStack_3c->position).y;
            afStack_2ac[1] = *(float *)(iVar4 + 0x28) - (pCStack_3c->position).z;
            CStack_1fc.x = fStack_2b0;
            *(float *)((int)&CStack_1fc + (uint)bVar8 * -8 + 4) = afStack_2ac[(uint)bVar8 * -2];
            *(float *)((int)&CStack_1fc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 afStack_2ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                      (&CStack_1fc,&CStack_1a8);
            fStack_100 = CStack_1a8.x;
            afStack_fc[(uint)bVar8 * -2] = *(float *)((int)&CStack_1a8 + (uint)bVar8 * -8 + 4);
            afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 *(float *)((int)&CStack_1a8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            fStack_64 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (afStack_fc[0] - (this_ptr->base).base.base.orient.vec.y);
            fStack_14 = fStack_64;
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (fStack_100 - (this_ptr->base).base.base.orient.vec.x);
            fVar14 = (this_ptr->base).base.base.orient.vec.x;
            (this_ptr->base).base.base.orient.vec.y =
                 (this_ptr->base).base.base.orient.vec.y + fStack_64;
            (this_ptr->base).base.base.orient.vec.x = fVar14 + fStack_14;
            core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr)
            ;
          }
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
          if ((iVar4 != 0) &&
             (fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                                    (&pCStack_34->base), (float)_DAT_005d8e8c < fStack_14)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_34->base,0,1);
          }
          break;
        case 0xd:
        case 0xf:
        case 0x10:
          if (this_ptr->fading_in == 0) {
            this_ptr->fading_in = 1;
            this_ptr->fade_timer = 0.0;
          }
          break;
        case 0xe:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
          if (this_ptr->fading_in == 1) {
            this_ptr->fading_in = 0;
            this_ptr->fade_timer = 0.0;
            if (this_ptr->cini_flag == 0) {
              this_ptr->vanish_timer = 4.0;
              this_ptr->vanished = 1;
            }
          }
        }
      }
      else {
        EVar2 = (this_ptr->base).base.walk_state;
        if (EVar2 < 2) {
          if (EVar2 == WALK_STATE_WALKING) {
LAB_005901a2:
            iVar6 = 1;
          }
          else {
LAB_00590865:
            iVar6 = 0;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_34->base,iVar6,1);
        }
        else {
          if (EVar2 < WALK_STATE_NO_PATH) goto LAB_005901a2;
          if (EVar2 != WALK_STATE_NO_PATH) goto LAB_00590865;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_34->base,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441ff0
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
        }
        switch(iVar4) {
        case 0xd:
        case 0xf:
        case 0x10:
          if (this_ptr->fading_in == 0) {
            this_ptr->fading_in = 1;
            this_ptr->fade_timer = 0.0;
          }
          break;
        case 0xe:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
          if (this_ptr->fading_in == 1) {
            this_ptr->fading_in = 0;
            this_ptr->fade_timer = 0.0;
            if (this_ptr->cini_flag == 0) {
              this_ptr->vanish_timer = 4.0;
              this_ptr->vanished = 1;
            }
          }
        }
        pCStack_38->z = 0.0;
        pCStack_38->y = pCStack_38->z;
        pCStack_38->x = pCStack_38->y;
      }
      if (0.0 < (this_ptr->base).attack_cooldown) {
        (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
      }
      iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
      if (iVar4 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_34->base,0xc,1);
      }
      core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
      fStack_268 = pCStack_54->x * delta_time;
      afStack_264[0] = pCStack_54->y * delta_time;
      afStack_264[1] = pCStack_54->z * delta_time;
      fStack_16c = fStack_268;
      afStack_168[(uint)bVar8 * -2] = afStack_264[(uint)bVar8 * -2];
      afStack_168[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_264[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      afStack_198[2] = fStack_16c + pCStack_40->x;
      afStack_198[3] = afStack_168[0] + pCStack_40->y;
      fStack_188 = afStack_168[1] + pCStack_40->z;
      fStack_130 = afStack_198[2];
      afStack_12c[(uint)bVar8 * -2] = afStack_198[(uint)bVar8 * -2 + 3];
      pCVar12 = pCStack_40;
      afStack_12c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           afStack_198[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
      fStack_238 = fStack_130 + pCStack_38->x;
      afStack_234[0] = afStack_12c[0] + pCStack_38->y;
      afStack_234[1] = afStack_12c[1] + pCStack_38->z;
      CStack_124.x = fStack_238;
      *(float *)((int)&CStack_124 + (uint)bVar8 * -8 + 4) = afStack_234[(uint)bVar8 * -2];
      *(float *)((int)&CStack_124 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_234[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      pCVar12->z = 0.0;
      pCVar12->y = pCVar12->z;
      pCVar12->x = pCVar12->y;
      pCStack_38->z = 0.0;
      pCStack_38->y = pCStack_38->z;
      pCStack_38->x = pCStack_38->y;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_124);
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCStack_34);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  }
  return;
}
