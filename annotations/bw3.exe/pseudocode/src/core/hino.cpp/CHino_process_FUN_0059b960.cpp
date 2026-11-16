// Name: core_hino.cpp_CHino_process_FUN_0059b960
// Address: 0059b960
// Address Range: [[0059b960, 0059cff3]]
// Convention: __cdecl
// Signature: void __cdecl core_hino_cpp_CHino_process_FUN_0059b960(CHino *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hino_cpp_CHino_process_FUN_0059b960(CHino *this_ptr,float delta_time)

{
  CLocation *start_position;
  CVector3f *pCVar1;
  EWalkState EVar2;
  CCharacter *pCVar3;
  CWeather *this_ptr_00;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  char *pcVar7;
  CPathMap *path_map;
  CDemonActor *pCVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_129c [979];
  float fVar11;
  float fVar12;
  CVector3f *pCVar13;
  float fVar14;
  EBloodType blood_type;
  SDamageInfo SStack_32c;
  SDamageInfo SStack_2f0;
  CVector3f CStack_2b4;
  float fStack_2a8;
  float afStack_2a4 [2];
  CVector3f CStack_29c;
  CVector3f CStack_290;
  CVector3f CStack_284;
  CVector3f CStack_278;
  float fStack_26c;
  float fStack_268;
  uint uStack_264;
  CVector3f CStack_260;
  CVector3f CStack_254;
  float fStack_248;
  float afStack_244 [4];
  float fStack_234;
  CVector3f CStack_230;
  float fStack_224;
  float afStack_220 [4];
  float fStack_210;
  CVector3f CStack_20c;
  CVector3f CStack_200;
  float fStack_1f4;
  float afStack_1f0 [2];
  CVector3f CStack_1e8;
  float fStack_1dc;
  float afStack_1d8 [2];
  CVector3f CStack_1d0;
  float fStack_1c4;
  float afStack_1c0 [2];
  CVector3f CStack_1b8;
  CVector3f CStack_1ac;
  CVector3f CStack_1a0;
  CVector3f CStack_194;
  CVector3f CStack_188;
  CVector3f CStack_17c;
  CVector3f CStack_170;
  CVector3f CStack_164;
  float fStack_158;
  float afStack_154 [5];
  float fStack_140;
  float fStack_13c;
  uint uStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  CVector3f CStack_128;
  CVector3f CStack_11c;
  CVector3f CStack_110;
  float fStack_104;
  float afStack_100 [5];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  CVector3f CStack_d4;
  float fStack_c8;
  float afStack_c4 [4];
  float fStack_b4;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  double dStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int iStack_6c;
  float fStack_68;
  CMotionController *pCStack_64;
  float fStack_60;
  CDeformableModelInstance *pCStack_5c;
  CMotionController *pCStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  CCharacter *pCStack_2c;
  float fStack_28;
  float fStack_24;
  CCharacter *pCStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar10 = 0;
  iVar4 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar4 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_7c = delta_time * (this_ptr->base).speed;
  pCStack_58 = &(this_ptr->base).base.model.base;
  while (0.0 < fStack_7c) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_58,&fStack_7c);
    switch(iVar4) {
    case 0x5dc:
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11]);
      if (iVar6 == 0) {
        fVar11 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_stand_fly.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11] = fVar11;
      }
      break;
    case 0x5dd:
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11]);
      if (iVar6 == 0) {
        fVar11 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_walk_fly.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11] = fVar11;
      }
      break;
    case 0x5de:
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11]);
      if (iVar6 == 0) {
        fVar11 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_run_fly.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11] = fVar11;
      }
      break;
    case 0x5df:
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11]);
      if (iVar6 == 0) {
        fVar11 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_reverse.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11] = fVar11;
      }
      break;
    case 0x5e0:
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11]);
      if (iVar6 == 0) {
        fVar11 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_attack_fly.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11] = fVar11;
      }
      break;
    case 0x5e1:
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11]);
      if (iVar6 == 0) {
        fVar11 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_attack_fly2.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11] = fVar11;
      }
      break;
    case 0x5e2:
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11]);
      if (iVar6 == 0) {
        fVar11 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_damage_fly.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11] = fVar11;
      }
      break;
    case 0x5e3:
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11]);
      if (iVar6 == 0) {
        fVar11 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_die_fly.WAV");
        (this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11] = fVar11;
      }
      break;
    case 0x5e4:
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11]);
      if (iVar6 == 0) {
        fVar11 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_warning.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11] = fVar11;
      }
      break;
    case 0x5e5:
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11]);
      if (iVar6 == 0) {
        fVar11 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_big_attack.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11] = fVar11;
      }
      break;
    case 0x5e6:
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11]);
      if (iVar6 == 0) {
        fVar11 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_appear.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11] = fVar11;
      }
      break;
    case 0x5e7:
      iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11]);
      if (iVar6 == 0) {
        fVar11 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_disappear.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar4 + 0x11] = fVar11;
      }
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar4);
    }
  }
  fVar11 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_00434850
            ((CCharacter *)this_ptr,delta_time * fVar11);
  pCStack_5c = &(this_ptr->base).base.model;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_5c->base);
  iVar4 = pSVar5->state_index;
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"State: %d\n");
  iStack_6c = iVar4;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar4) {
    case 0:
      if (this_ptr->vanish_timer <= 0.0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar3 = (this_ptr->base).victim;
        if (pCVar3 == (CCharacter *)0x0) {
          iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
          if (iVar4 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_5c->base,1,1);
          }
        }
        else {
          afStack_c4[2] =
               (pCVar3->base).location.position.x - (this_ptr->base).base.base.location.position.x;
          afStack_c4[3] =
               (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y;
          fStack_b4 = (pCVar3->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          CStack_260.x = afStack_c4[2];
          *(float *)((int)&CStack_254 + ((uint)bVar10 * -2 + -2) * 4) =
               afStack_c4[(uint)bVar10 * -2 + 3];
          *(float *)((int)&CStack_254 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + -1) * 4) =
               afStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          fStack_84 = SQRT(CStack_260.z * CStack_260.z +
                           CStack_260.x * CStack_260.x + CStack_260.y * CStack_260.y);
          fStack_78 = fStack_84;
          if (fStack_84 < 0x40600000) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                      (&CStack_260,&CStack_1b8);
            fStack_1c4 = CStack_1b8.x;
            afStack_1c0[(uint)bVar10 * -2] = *(float *)((int)&CStack_1b8 + (uint)bVar10 * -8 + 4);
            afStack_1c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 *(float *)((int)&CStack_1b8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (afStack_1c0[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005d9e44) {
              iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
              if (iVar4 < 0x32) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_5c->base,4,1);
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_5c->base,5,1);
              }
              break;
            }
          }
          if (fStack_78 < (this_ptr->base).guard_distance) {
            if ((0.0 < this_ptr->attack_cooldown) ||
               (iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), iVar4 < 0x4c)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,2,1);
              (this_ptr->base).attack_cooldown = 0.0;
            }
            else {
              this_ptr->action_timer = 2.0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,0xc,1);
              this_ptr->attack_cooldown = 13.0;
              (this_ptr->base).attack_cooldown = 0.0;
            }
          }
        }
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar11 = 0x40600000;
      pCStack_64 = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_64,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_64,1,1);
        }
      }
      else {
        fStack_70 = 0x40600000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        CStack_110.z = fVar11 + (float)_DAT_005d9e34;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_110.x = 0.0;
        CStack_110.y = 0.0;
        fVar12 = 0.17453292;
        pCVar13 = &CStack_110;
        fVar11 = 0.5;
        pCVar3 = (this_ptr->base).victim;
        fStack_14 = CStack_110.z;
        path_map = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar13,
                           fVar11,fVar12);
        if (-1 < iVar4) {
          pCVar3 = (this_ptr->base).victim;
          afStack_220[2] =
               (this_ptr->base).base.base.location.position.x - (pCVar3->base).location.position.x;
          afStack_220[3] =
               (this_ptr->base).base.base.location.position.y - (pCVar3->base).location.position.y;
          fStack_210 = (this_ptr->base).base.base.location.position.z -
                       (pCVar3->base).location.position.z;
          afStack_154[2] = afStack_220[2];
          afStack_154[(uint)bVar10 * -2 + 3] = afStack_220[(uint)bVar10 * -2 + 3];
          afStack_154[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
               afStack_220[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          fStack_60 = SQRT(afStack_154[4] * afStack_154[4] + afStack_154[2] * afStack_154[2]);
          afStack_154[3] = 0.0;
          fStack_68 = fStack_60;
          if (((_DAT_005e81b8 < fStack_60) && (fStack_60 < (float)_DAT_005d9e3c)) &&
             (iStack_6c != 2)) {
            (this_ptr->base).attack_cooldown = 0.0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_64,2,1);
          }
          if ((fStack_68 <= fStack_70) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar3 = (this_ptr->base).victim;
            fStack_c8 = (pCVar3->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            afStack_c4[0] =
                 (pCVar3->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            afStack_c4[1] =
                 (pCVar3->base).location.position.z - (this_ptr->base).base.base.location.position.z
            ;
            CStack_128.x = fStack_c8;
            *(float *)((int)&CStack_128 + (uint)bVar10 * -8 + 4) = afStack_c4[(uint)bVar10 * -2];
            *(float *)((int)&CStack_128 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 afStack_c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250
                      (&CStack_128,&CStack_1a0);
            fStack_1dc = CStack_1a0.x;
            afStack_1d8[(uint)bVar10 * -2] = *(float *)((int)&CStack_1a0 + (uint)bVar10 * -8 + 4);
            afStack_1d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 *(float *)((int)&CStack_1a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (afStack_1d8[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005d9e44) {
              iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
              if (iVar4 == 0) {
                iVar4 = 5;
              }
              else {
                iVar4 = 4;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,iVar4,1);
              (this_ptr->base).attack_cooldown = 2.0;
            }
          }
          if (fStack_68 < (float)_DAT_005d9e3c) {
            if ((0.0 < this_ptr->attack_cooldown) ||
               (iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), iVar4 < 0x4c)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,2,1);
              (this_ptr->base).attack_cooldown = 0.0;
            }
            else {
              this_ptr->action_timer = 2.0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,0xc,1);
              this_ptr->attack_cooldown = 13.0;
            }
          }
          if ((float)_DAT_005d9e3c < fStack_68) {
            this_ptr->action_timer = 2.0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(this_ptr->base).base.model.base,0xc,1);
            this_ptr->attack_cooldown = 13.0;
          }
        }
      }
      break;
    case 4:
    case 5:
      pCVar8 = (this_ptr->base).base.carry_hands[0].carry_actor;
      (*((pCVar8->vtable)._ub)->processMeleeHit)(pCVar8,2);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
                  (pCStack_5c,0,&CStack_194);
        pCVar13 = &CStack_a4;
        CStack_a4.x = CStack_194.x;
        *(uint *)((int)&CStack_a4 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_194 + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&CStack_a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_194 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  ((CDemonActor *)this_ptr,pCVar13,&CStack_200);
        blood_type = BLOOD_TYPE_RED;
        CStack_1ac.x = CStack_200.x;
        *(uint *)((int)&CStack_1ac + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_200 + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&CStack_1ac + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_200 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_1ac,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      if (this_ptr->platform_check_done == 0) {
        iVar4 = core_hino_cpp_CHino_isHeroAtPlatform_FUN_0059d000(this_ptr);
        this_ptr->near_platform = iVar4;
        if (0x02D0C1A0->weather_type == WEATHER_TYPE_NONE) {
          iVar4 = g_CDemonSetPtr->selected_camera_index;
          pCVar13 = &g_CDemonSetPtr->cameras[iVar4].position;
          if (&CStack_278 != pCVar13) {
            CStack_278.x = pCVar13->x;
            CStack_278.y = g_CDemonSetPtr->cameras[iVar4].position.y;
            CStack_278.z = g_CDemonSetPtr->cameras[iVar4].position.z;
          }
          pCVar13 = &g_CDemonSetPtr->cameras[iVar4].orientation;
          if (&CStack_284 != pCVar13) {
            CStack_284.x = pCVar13->x;
            CStack_284.y = g_CDemonSetPtr->cameras[iVar4].orientation.y;
            CStack_284.z = g_CDemonSetPtr->cameras[iVar4].orientation.z;
          }
          core_weather_cpp_CWeather_setWeatherType_FUN_0057d050(0x02D0C1A0,5);
          core_weather_cpp_CWeather_setOriginAndRotation_FUN_0057d1a0
                    (0x02D0C1A0,&CStack_278,&CStack_284);
        }
        else {
          core_weather_cpp_CWeather_setWeatherType_FUN_0057d050(0x02D0C1A0,5);
        }
        this_ptr->platform_check_done = 1;
      }
      core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(g_CDemonSetPtr,100.0,0.0,0.0,1.0);
      if (this_ptr->action_timer <= 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(this_ptr->base).base.model.base,10,1);
        this_ptr->action_timer = 2.0;
      }
      else {
        this_ptr->action_timer = this_ptr->action_timer - delta_time;
      }
      break;
    case 10:
      iStack_38 = 0;
      for (iStack_34 = 0; iStack_34 < g_CDemonSetPtr->actor_count; iStack_34 = iStack_34 + 1) {
        pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_38),
                            g_CWayPointClassInfo.name_hash);
        if (pCVar8 != (CDemonActor *)0x0) {
          iVar4 = _strcmp(pCVar8->actor_name,"CenterPoint");
          if (iVar4 == 0) {
            pCStack_2c = (CCharacter *)
                         core_actor_cpp_castToClassHash_FUN_0040c840
                                   ((this_ptr->base).base.carry_hands[0].carry_actor,
                                    g_CWeaponClassInfo.name_hash);
            pCStack_20 = pCStack_2c;
            if (pCVar8 != (CDemonActor *)0x0) {
              (*(((pCStack_2c->base).vtable._uc)->_uc).isInvulnerable)(pCStack_2c);
              pCVar3 = pCStack_20;
              pCVar13 = &CStack_170;
              CStack_170.x = afStack_100[2];
              *(float *)((int)&CStack_170 + (uint)bVar10 * -8 + 4) =
                   afStack_100[(uint)bVar10 * -2 + 3];
              *(float *)((int)&CStack_170 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   afStack_100[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                        (&pCVar3->base,pCVar13,&CStack_b0);
              fStack_140 = CStack_b0.x;
              afStack_154[(uint)bVar10 * -2 + 6] =
                   *(float *)((int)&CStack_b0 + (uint)bVar10 * -8 + 4);
              afStack_154[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
                   *(float *)((int)&CStack_b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              if (&fStack_26c != afStack_154 + 5) {
                fStack_26c = fStack_140;
                fStack_268 = fStack_13c;
                uStack_264 = uStack_138;
              }
              (*(((pCStack_2c->base).vtable._uc)->_uc).isInvulnerable)(pCStack_2c);
              CStack_230.x = fStack_2a8;
              *(float *)((int)&CStack_230 + (uint)bVar10 * -8 + 4) = afStack_2a4[(uint)bVar10 * -2];
              *(float *)((int)&CStack_230 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   afStack_2a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                        (&pCStack_2c->base,&CStack_230,&CStack_2b4);
              CStack_11c.x = CStack_2b4.x;
              *(uint *)((int)&CStack_11c + (uint)bVar10 * -8 + 4) =
                   *(uint *)((int)&CStack_2b4 + (uint)bVar10 * -8 + 4);
              *(uint *)((int)&CStack_11c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   *(uint *)((int)&CStack_2b4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              if (&CStack_1d0 != &CStack_11c) {
                CStack_1d0.x = CStack_11c.x;
                CStack_1d0.y = CStack_11c.y;
                CStack_1d0.z = CStack_11c.z;
              }
              fStack_268 = fStack_268 + _DAT_005d9e28;
            }
          }
          else {
            pcVar7 = strstr(pCVar8->actor_name,"Platform");
            if ((pcVar7 == (char *)0x0) || (this_ptr->near_platform == 0)) {
              pcVar7 = strstr(pCVar8->actor_name,"Bridge");
              if ((pcVar7 != (char *)0x0) && (this_ptr->near_platform == 0)) {
                fStack_48 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
                fStack_14 = fStack_48;
                CStack_254.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
                CStack_254.x = fStack_48;
                CStack_254.y = 0.0;
                if (&CStack_290 != &CStack_254) {
                  CStack_290.x = fStack_48;
                  CStack_290.y = 0.0;
                  CStack_290.z = CStack_254.z;
                }
                fStack_50 = SQRT(CStack_290.z * CStack_290.z +
                                 CStack_290.x * CStack_290.x + CStack_290.y * CStack_290.y);
                if (fStack_50 <= 0.0) {
                  CStack_290.y = 0.0;
                  CStack_290.x = 0.0;
                  CStack_290.z = 0.0;
                }
                else {
                  fVar11 = 1.0 / fStack_50;
                  CStack_290.x = CStack_290.x * fVar11;
                  CStack_290.y = CStack_290.y * fVar11;
                  CStack_290.z = CStack_290.z * fVar11;
                }
                fStack_54 = CStack_254.z;
                fStack_14 = CStack_254.z;
                fStack_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,5.0);
                CStack_290.x = CStack_290.x * fStack_28 + (pCVar8->location).position.x;
                CStack_290.y = CStack_290.y * fStack_28 + (pCVar8->location).position.y;
                CStack_290.z = CStack_290.z * fStack_28 + (pCVar8->location).position.z;
                if (&CStack_1d0 != &CStack_290) {
                  CStack_1d0.x = CStack_290.x;
                  CStack_1d0.y = CStack_290.y;
                  CStack_1d0.z = CStack_290.z;
                }
                fStack_14 = fStack_28;
                core_fire_cpp_CFireEffect_createLightningBolt_FUN_004a3bd0
                          (0x01C73654,&CStack_1d0,30.0,1,0.0);
                iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                fStack_248 = *(float *)(iVar4 + 0x20) - (pCVar8->location).position.x;
                afStack_244[0] = *(float *)(iVar4 + 0x24) - (pCVar8->location).position.y;
                afStack_244[1] = *(float *)(iVar4 + 0x28) - (pCVar8->location).position.z;
                fStack_158 = fStack_248;
                afStack_154[(uint)bVar10 * -2] = afStack_244[(uint)bVar10 * -2];
                afStack_154[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                     afStack_244[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
                fStack_8c = afStack_154[1] * afStack_154[1] +
                            fStack_158 * fStack_158 + afStack_154[0] * afStack_154[0];
                fStack_88 = (float)(((int)fStack_8c >> 1) + _DAT_01d1a0a4);
                if (fStack_88 <= (float)_DAT_005d9e54) {
                  core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_32c);
                  SStack_32c.damage_amount = 25.0;
                  SStack_32c.damage_type = DAMAGE_TYPE_ATTACK_ELECTROCUTE;
                  iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                  (**(code **)(*(int *)(iVar4 + 0x154) + 0x108))(iVar4,&SStack_32c);
                }
              }
            }
            else {
              fStack_4c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
              fStack_14 = fStack_4c;
              CStack_1e8.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
              CStack_1e8.x = fStack_4c;
              CStack_1e8.y = 0.0;
              if (&CStack_188 != (CVector3f *)(afStack_1f0 + 2)) {
                CStack_188.x = fStack_4c;
                CStack_188.y = 0.0;
                CStack_188.z = CStack_1e8.z;
              }
              fStack_40 = SQRT(CStack_188.z * CStack_188.z +
                               CStack_188.x * CStack_188.x + CStack_188.y * CStack_188.y);
              if (fStack_40 <= 0.0) {
                CStack_188.y = 0.0;
                CStack_188.x = 0.0;
                CStack_188.z = 0.0;
              }
              else {
                fVar11 = 1.0 / fStack_40;
                CStack_188.x = CStack_188.x * fVar11;
                CStack_188.y = CStack_188.y * fVar11;
                CStack_188.z = CStack_188.z * fVar11;
              }
              fStack_44 = CStack_1e8.z;
              fStack_14 = CStack_1e8.z;
              fStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,6.0);
              CStack_188.x = CStack_188.x * fStack_24 + (pCVar8->location).position.x;
              CStack_188.y = CStack_188.y * fStack_24 + (pCVar8->location).position.y;
              CStack_188.z = CStack_188.z * fStack_24 + (pCVar8->location).position.z;
              if (&CStack_1d0 != &CStack_188) {
                CStack_1d0.x = CStack_188.x;
                CStack_1d0.y = CStack_188.y;
                CStack_1d0.z = CStack_188.z;
              }
              fStack_14 = fStack_24;
              core_fire_cpp_CFireEffect_createLightningBolt_FUN_004a3bd0
                        (0x01C73654,&CStack_1d0,30.0,1,0.0);
              iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              afStack_244[2] = *(float *)(iVar4 + 0x20) - (pCVar8->location).position.x;
              afStack_244[3] = *(float *)(iVar4 + 0x24) - (pCVar8->location).position.y;
              fStack_234 = *(float *)(iVar4 + 0x28) - (pCVar8->location).position.z;
              fStack_1f4 = afStack_244[2];
              afStack_1f0[(uint)bVar10 * -2] = afStack_244[(uint)bVar10 * -2 + 3];
              afStack_1f0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                   afStack_244[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
              fStack_1c = afStack_1f0[1] * afStack_1f0[1] +
                          fStack_1f4 * fStack_1f4 + afStack_1f0[0] * afStack_1f0[0];
              fStack_18 = (float)(((int)fStack_1c >> 1) + _DAT_01d1a0a4);
              if (fStack_18 <= (float)_DAT_005d9e5c) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_2f0);
                SStack_2f0.damage_amount = 25.0;
                SStack_2f0.damage_type = DAMAGE_TYPE_ATTACK_ELECTROCUTE;
                iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                (**(code **)(*(int *)(iVar4 + 0x154) + 0x108))(iVar4,&SStack_2f0);
              }
            }
          }
        }
        iStack_38 = iStack_38 + 4;
      }
      fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                            (&(this_ptr->base).base.model.base);
      this_ptr_00 = 0x02D0C1A0;
      if ((float)_DAT_005d9e4c < fStack_14) {
        this_ptr->platform_check_done = 0;
        core_weather_cpp_CWeather_setWeatherType_FUN_0057d050(this_ptr_00,WEATHER_TYPE_NONE);
      }
      break;
    case 0xb:
      fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                            (&pCStack_5c->base);
      if (fStack_14 < (float)_DAT_005d9e2c) {
        iVar6 = 0xffff;
        fVar14 = 0.25;
        puVar9 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x24);
        CStack_29c.x = (this_ptr->base).base.base.location.position.x;
        *(uint *)((int)&CStack_29c + (uint)bVar10 * -8 + 4) = *puVar9;
        *(uint *)((int)&CStack_29c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             puVar9[(uint)bVar10 * -2 + 1];
        iVar4 = 3;
        fVar12 = 3.75;
        fVar11 = 0.75;
        puVar9 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x24);
        CStack_17c.x = (this_ptr->base).base.base.location.position.x;
        *(uint *)((int)&CStack_17c + (uint)bVar10 * -8 + 4) = *puVar9;
        *(uint *)((int)&CStack_17c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             puVar9[(uint)bVar10 * -2 + 1];
        CStack_17c.y = CStack_17c.y + _DAT_005d9e24;
        CStack_29c.y = CStack_29c.y + _DAT_005d9e28;
        core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                  (0x01C73654,&CStack_17c,&CStack_29c,0,fVar11,fVar12,iVar4,fVar14,iVar6);
      }
      this_ptr->vanishing = 1;
      this_ptr->vanish_timer = 0.25;
      break;
    case 0xc:
      fStack_14 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004fc930
                            (&pCStack_5c->base);
      if (fStack_14 < (float)_DAT_005d9e1c) {
        iVar6 = 0xffff;
        fVar14 = 0.25;
        puVar9 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x24);
        CStack_164.x = (this_ptr->base).base.base.location.position.x;
        *(uint *)((int)&CStack_164 + (uint)bVar10 * -8 + 4) = *puVar9;
        *(uint *)((int)&CStack_164 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             puVar9[(uint)bVar10 * -2 + 1];
        iVar4 = 3;
        fVar12 = 3.75;
        fVar11 = 0.75;
        puVar9 = (uint *)((int)this_ptr + (uint)bVar10 * -8 + 0x24);
        CStack_d4.x = (this_ptr->base).base.base.location.position.x;
        *(uint *)((int)&CStack_d4 + (uint)bVar10 * -8 + 4) = *puVar9;
        *(uint *)((int)&CStack_d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             puVar9[(uint)bVar10 * -2 + 1];
        CStack_164.y = CStack_164.y + _DAT_005d9e28;
        CStack_d4.y = CStack_d4.y + _DAT_005d9e24;
        core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                  (0x01C73654,&CStack_d4,&CStack_164,0,fVar11,fVar12,iVar4,fVar14,iVar6);
      }
      this_ptr->vanishing = 0;
      this_ptr->vanish_timer = 0.25;
    }
    goto switchD_0059ceee_caseD_3;
  }
  EVar2 = (this_ptr->base).base.walk_state;
  if (EVar2 < 2) {
    if (EVar2 == WALK_STATE_WALKING) {
LAB_0059ba56:
      iVar4 = 1;
    }
    else {
LAB_0059bf31:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar4,1);
  }
  else {
    if (EVar2 < WALK_STATE_NO_PATH) goto LAB_0059ba56;
    if (EVar2 != WALK_STATE_NO_PATH) goto LAB_0059bf31;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_0059ceee_caseD_3:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if (0.0 < this_ptr->attack_cooldown) {
    this_ptr->attack_cooldown = this_ptr->attack_cooldown - delta_time;
  }
  dStack_98 = (double)this_ptr->vanish_timer;
  if (0.0 < dStack_98) {
    if (((this_ptr->vanishing != 0) || (dStack_98 <= 0.0)) ||
       (fStack_74 = this_ptr->vanish_timer - delta_time, 0.0 < fStack_74)) {
      this_ptr->vanish_timer = this_ptr->vanish_timer - delta_time;
    }
    else {
      start_position = &(this_ptr->base).base.base.location;
      iStack_3c = 0;
      this_ptr->vanish_timer = fStack_74;
      for (iStack_30 = 0; iStack_30 < g_CDemonSetPtr->actor_count; iStack_30 = iStack_30 + 1) {
        pCVar8 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_3c),
                            g_CWayPointClassInfo.name_hash);
        if ((pCVar8 != (CDemonActor *)0x0) &&
           (iVar4 = _strcmp(pCVar8->actor_name,"CenterPoint"),
           iVar4 == 0)) {
          core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                    (0x01C73654,&start_position->position,&(pCVar8->location).position,0,0.75,0.75
                     ,3,0.25,0xffff);
          (start_position->position).x = (pCVar8->location).position.x;
          (this_ptr->base).base.base.location.position.y = (pCVar8->location).position.y;
          (this_ptr->base).base.base.location.position.z = (pCVar8->location).position.z;
          (this_ptr->base).base.base.location.area_id = (pCVar8->location).area_id;
        }
        iStack_3c = iStack_3c + 4;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,0xb,1);
    }
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    if ((iStack_6c == 8) || (iStack_6c == 7)) {
      core_charactr_cpp_CCharacter_applyGravity_FUN_0042c1e0((CCharacter *)this_ptr,delta_time);
    }
    fStack_e0 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_dc = (this_ptr->base).base.velocity.y * delta_time;
    fStack_d8 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_224 = fStack_e0;
    afStack_220[(uint)bVar10 * -2] = afStack_100[(uint)bVar10 * -2 + 9];
    afStack_220[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_100[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    pCVar13 = &(this_ptr->base).base.position_delta;
    fStack_ec = fStack_224 + pCVar13->x;
    fStack_e8 = afStack_220[0] + (this_ptr->base).base.position_delta.y;
    fStack_e4 = afStack_220[1] + (this_ptr->base).base.position_delta.z;
    fStack_104 = fStack_ec;
    afStack_100[(uint)bVar10 * -2] = afStack_100[(uint)bVar10 * -2 + 6];
    afStack_100[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_100[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    pCVar1 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_134 = fStack_104 + pCVar1->x;
    fStack_130 = afStack_100[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_12c = afStack_100[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_20c.x = fStack_134;
    *(float *)((int)&CStack_20c + (uint)bVar10 * -8 + 4) = afStack_154[(uint)bVar10 * -2 + 9];
    *(float *)((int)&CStack_20c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_154[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar13->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar1->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&CStack_20c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
