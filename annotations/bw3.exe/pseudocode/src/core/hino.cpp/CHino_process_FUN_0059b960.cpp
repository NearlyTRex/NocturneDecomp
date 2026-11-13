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
  CLocation *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int *piVar5;
  int iVar6;
  SMotion *pSVar7;
  int iVar8;
  char *pcVar9;
  CPathMap *path_map;
  CDemonActor *pCVar10;
  float *pfVar11;
  byte bVar12;
  float afStackY_129c [979];
  uint uVar13;
  uint uVar14;
  CVector3f *pCVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  EBloodType blood_type;
  float max_distance;
  uint uVar19;
  SDamageInfo SStack_32c;
  SDamageInfo SStack_2f0;
  float fStack_2b4;
  float afStack_2b0 [5];
  float fStack_29c;
  float fStack_298;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  uint uStack_264;
  float fStack_260;
  float afStack_25c [5];
  float fStack_248;
  float afStack_244 [4];
  float fStack_234;
  float afStack_230 [3];
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  CVector3f CStack_20c;
  float fStack_200;
  float afStack_1fc [4];
  float fStack_1ec;
  float afStack_1e8 [3];
  uint uStack_1dc;
  float afStack_1d8 [4];
  float fStack_1c8;
  uint uStack_1c4;
  float afStack_1c0 [5];
  CVector3f CStack_1ac;
  uint uStack_1a0;
  float afStack_19c [5];
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float afStack_178 [5];
  float fStack_164;
  float fStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  uint uStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint uStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float afStack_128 [3];
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  CVector3f CStack_110;
  float fStack_104;
  float afStack_100 [5];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float afStack_a4 [3];
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
  CMotionController *pCStack_5c;
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
  
  bVar12 = 0;
  iVar6 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar6 == 0) {
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
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_58,&fStack_7c);
    switch(iVar6) {
    case 0x5dc:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11]);
      if (iVar8 == 0) {
        fVar17 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_stand_fly.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11] = fVar17;
      }
      break;
    case 0x5dd:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11]);
      if (iVar8 == 0) {
        fVar17 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_walk_fly.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11] = fVar17;
      }
      break;
    case 0x5de:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11]);
      if (iVar8 == 0) {
        fVar17 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_run_fly.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11] = fVar17;
      }
      break;
    case 0x5df:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11]);
      if (iVar8 == 0) {
        fVar17 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_reverse.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11] = fVar17;
      }
      break;
    case 0x5e0:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11]);
      if (iVar8 == 0) {
        fVar17 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_attack_fly.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11] = fVar17;
      }
      break;
    case 0x5e1:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11]);
      if (iVar8 == 0) {
        fVar17 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_attack_fly2.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11] = fVar17;
      }
      break;
    case 0x5e2:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11]);
      if (iVar8 == 0) {
        fVar17 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_damage_fly.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11] = fVar17;
      }
      break;
    case 0x5e3:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11]);
      if (iVar8 == 0) {
        fVar17 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_die_fly.WAV");
        (this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11] = fVar17;
      }
      break;
    case 0x5e4:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11]);
      if (iVar8 == 0) {
        fVar17 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_warning.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11] = fVar17;
      }
      break;
    case 0x5e5:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11]);
      if (iVar8 == 0) {
        fVar17 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_big_attack.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11] = fVar17;
      }
      break;
    case 0x5e6:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11]);
      if (iVar8 == 0) {
        fVar17 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_appear.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11] = fVar17;
      }
      break;
    case 0x5e7:
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700
                        ((uint)(this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11]);
      if (iVar8 == 0) {
        fVar17 = (float)(*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"hino_disappear.wav");
        (this_ptr->base).base.motion_transition_costs[5][iVar6 + 0x11] = fVar17;
      }
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar6);
    }
  }
  fVar17 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * fVar17);
  pCStack_5c = &(this_ptr->base).base.model.base;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_5c);
  iVar6 = pSVar7->state_index;
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"State: %d\n");
  iStack_6c = iVar6;
  iVar8 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    switch(iVar6) {
    case 0:
      if (this_ptr->vanish_timer <= 0.0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 == (CCharacter *)0x0) {
          iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
          if (iVar6 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_5c,1,1);
          }
        }
        else {
          fStack_bc = (pCVar4->base).location.position.x -
                      (this_ptr->base).base.base.location.position.x;
          fStack_b8 = (pCVar4->base).location.position.y -
                      (this_ptr->base).base.base.location.position.y;
          fStack_b4 = (pCVar4->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
          fStack_260 = fStack_bc;
          afStack_25c[(uint)bVar12 * -2] = afStack_100[(uint)bVar12 * -2 + 0x12];
          afStack_25c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13];
          fStack_84 = SQRT(afStack_25c[1] * afStack_25c[1] +
                           fStack_260 * fStack_260 + afStack_25c[0] * afStack_25c[0]);
          fStack_78 = fStack_84;
          if (fStack_84 < 0x40600000) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&fStack_260);
            uStack_1c4 = afStack_1c0[2];
            afStack_1c0[(uint)bVar12 * -2] = afStack_1c0[(uint)bVar12 * -2 + 3];
            afStack_1c0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 afStack_1c0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (afStack_1c0[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005d9e44) {
              iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
              if (iVar6 < 0x32) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_5c,4,1);
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_5c,5,1);
              }
              break;
            }
          }
          if (fStack_78 < (this_ptr->base).guard_distance) {
            if ((0.0 < this_ptr->attack_cooldown) ||
               (iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), iVar6 < 0x4c)) {
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
      fVar17 = 0x40600000;
      pCStack_64 = &(this_ptr->base).base.model.base;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_64,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_64,1,1);
        }
      }
      else {
        fStack_70 = 0x40600000;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        CStack_110.z = fVar17 + (float)_DAT_005d9e34;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_110.x = 0.0;
        CStack_110.y = 0.0;
        max_distance = 0.17453292;
        pCVar15 = &CStack_110;
        fVar17 = 0.5;
        pCVar4 = (this_ptr->base).victim;
        fStack_14 = CStack_110.z;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar15,
                           fVar17,max_distance);
        if (-1 < iVar6) {
          pCVar4 = (this_ptr->base).victim;
          fStack_218 = (this_ptr->base).base.base.location.position.x -
                       (pCVar4->base).location.position.x;
          fStack_214 = (this_ptr->base).base.base.location.position.y -
                       (pCVar4->base).location.position.y;
          fStack_210 = (this_ptr->base).base.base.location.position.z -
                       (pCVar4->base).location.position.z;
          fStack_14c = fStack_218;
          afStack_178[(uint)bVar12 * -2 + 0xc] = afStack_244[(uint)bVar12 * -2 + 0xc];
          afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
               afStack_244[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd];
          fStack_60 = SQRT(fStack_144 * fStack_144 + fStack_14c * fStack_14c);
          uStack_148 = 0;
          fStack_68 = fStack_60;
          if (((_DAT_005e81b8 < fStack_60) && (fStack_60 < (float)_DAT_005d9e3c)) &&
             (iStack_6c != 2)) {
            (this_ptr->base).attack_cooldown = 0.0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_64,2,1);
          }
          if ((fStack_68 <= fStack_70) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar4 = (this_ptr->base).victim;
            fStack_c8 = (pCVar4->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            fStack_c4 = (pCVar4->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_c0 = (pCVar4->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            afStack_128[0] = fStack_c8;
            afStack_178[(uint)bVar12 * -2 + 0x15] = afStack_100[(uint)bVar12 * -2 + 0xf];
            afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16] =
                 afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_178 + 0x14);
            uStack_1dc = uStack_1a0;
            afStack_1d8[(uint)bVar12 * -2] = afStack_19c[(uint)bVar12 * -2];
            afStack_1d8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 afStack_19c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                  (afStack_1d8[0] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005d9e44) {
              iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
              if (iVar6 == 0) {
                iVar6 = 5;
              }
              else {
                iVar6 = 4;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (&(this_ptr->base).base.model.base,iVar6,1);
              (this_ptr->base).attack_cooldown = 2.0;
            }
          }
          if (fStack_68 < (float)_DAT_005d9e3c) {
            if ((0.0 < this_ptr->attack_cooldown) ||
               (iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100), iVar6 < 0x4c)) {
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
      pCVar10 = (this_ptr->base).base.carry_hands[0].carry_actor;
      (*((pCVar10->vtable)._ub)->processMeleeHit)(pCVar10,2);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_5c,0);
        pfVar11 = afStack_100 + 0x17;
        afStack_a4[0] = afStack_19c[2];
        afStack_100[(uint)bVar12 * -2 + 0x18] = afStack_19c[(uint)bVar12 * -2 + 3];
        afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
             afStack_19c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
        core_actor_cpp_FUN_00408b80(this_ptr,pfVar11);
        blood_type = BLOOD_TYPE_RED;
        CStack_1ac.x = fStack_200;
        *(float *)((int)&CStack_1ac + (uint)bVar12 * -8 + 4) = afStack_1fc[(uint)bVar12 * -2];
        *(float *)((int)&CStack_1ac + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             afStack_1fc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(g_CGorePtr,&CStack_1ac,blood_type);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      if (this_ptr->platform_check_done == 0) {
        iVar6 = core_hino_cpp_FUN_0059d000(this_ptr);
        this_ptr->near_platform = iVar6;
        if (*0x02D0C1A0 == 0) {
          iVar6 = g_CDemonSetPtr->selected_camera_index;
          pCVar15 = &g_CDemonSetPtr->cameras[iVar6].position;
          if ((CVector3f *)&fStack_278 != pCVar15) {
            fStack_278 = pCVar15->x;
            fStack_274 = g_CDemonSetPtr->cameras[iVar6].position.y;
            fStack_270 = g_CDemonSetPtr->cameras[iVar6].position.z;
          }
          pCVar15 = &g_CDemonSetPtr->cameras[iVar6].orientation;
          if ((CVector3f *)(afStack_2b0 + 0xb) != pCVar15) {
            fStack_284 = pCVar15->x;
            fStack_280 = g_CDemonSetPtr->cameras[iVar6].orientation.y;
            fStack_27c = g_CDemonSetPtr->cameras[iVar6].orientation.z;
          }
          core_weather_cpp_FUN_0057d050(0x02D0C1A0,5);
          core_weather_cpp_FUN_0057d1a0(0x02D0C1A0,&fStack_278,afStack_2b0 + 0xb);
        }
        else {
          core_weather_cpp_FUN_0057d050(0x02D0C1A0,5);
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
        pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_38),
                             g_CWayPointClassInfo.name_hash);
        if (pCVar10 != (CDemonActor *)0x0) {
          iVar6 = _strcmp(pCVar10->actor_name,"CenterPoint");
          if (iVar6 == 0) {
            pCStack_2c = (CCharacter *)
                         core_actor_cpp_castToClassHash_FUN_0040c840
                                   ((this_ptr->base).base.carry_hands[0].carry_actor,
                                    g_CWeaponClassInfo.name_hash);
            pCStack_20 = pCStack_2c;
            if (pCVar10 != (CDemonActor *)0x0) {
              (*(((pCStack_2c->base).vtable._uc)->_uc).isInvulnerable)(pCStack_2c);
              pCVar4 = pCStack_20;
              pfVar11 = afStack_178 + 2;
              afStack_178[2] = afStack_100[2];
              afStack_178[(uint)bVar12 * -2 + 3] = afStack_100[(uint)bVar12 * -2 + 3];
              afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                   afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
              core_actor_cpp_FUN_00408b80(pCVar4,pfVar11);
              fStack_140 = fStack_b0;
              afStack_178[(uint)bVar12 * -2 + 0xf] = afStack_100[(uint)bVar12 * -2 + 0x15];
              afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10] =
                   afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
              if (&fStack_26c != afStack_178 + 0xe) {
                fStack_26c = fStack_140;
                fStack_268 = fStack_13c;
                uStack_264 = uStack_138;
              }
              (*(((pCStack_2c->base).vtable._uc)->_uc).isInvulnerable)(pCStack_2c);
              afStack_230[0] = afStack_2b0[2];
              afStack_244[(uint)bVar12 * -2 + 6] = afStack_2b0[(uint)bVar12 * -2 + 3];
              afStack_244[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
                   afStack_2b0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
              core_actor_cpp_FUN_00408b80(pCStack_2c,afStack_244 + 5);
              fStack_11c = fStack_2b4;
              afStack_178[(uint)bVar12 * -2 + 0x18] = afStack_2b0[(uint)bVar12 * -2];
              afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19] =
                   afStack_2b0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
              if (afStack_1d8 + 2 != afStack_178 + 0x17) {
                afStack_1d8[2] = fStack_11c;
                afStack_1d8[3] = fStack_118;
                fStack_1c8 = fStack_114;
              }
              fStack_268 = fStack_268 + _DAT_005d9e28;
            }
          }
          else {
            pcVar9 = strstr(pCVar10->actor_name,"Platform");
            if ((pcVar9 == (char *)0x0) || (this_ptr->near_platform == 0)) {
              pcVar9 = strstr(pCVar10->actor_name,"Bridge");
              if ((pcVar9 != (char *)0x0) && (this_ptr->near_platform == 0)) {
                fStack_48 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
                fStack_14 = fStack_48;
                afStack_25c[4] = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
                afStack_25c[2] = fStack_48;
                afStack_25c[3] = 0.0;
                if (afStack_2b0 + 8 != afStack_25c + 2) {
                  fStack_290 = fStack_48;
                  fStack_28c = 0.0;
                  fStack_288 = afStack_25c[4];
                }
                fStack_50 = SQRT(fStack_288 * fStack_288 +
                                 fStack_290 * fStack_290 + fStack_28c * fStack_28c);
                if (fStack_50 <= 0.0) {
                  fStack_28c = 0.0;
                  fStack_290 = 0.0;
                  fStack_288 = 0.0;
                }
                else {
                  fVar17 = 1.0 / fStack_50;
                  fStack_290 = fStack_290 * fVar17;
                  fStack_28c = fStack_28c * fVar17;
                  fStack_288 = fStack_288 * fVar17;
                }
                fStack_54 = afStack_25c[4];
                fStack_14 = afStack_25c[4];
                fStack_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,5.0);
                fStack_290 = fStack_290 * fStack_28 + (pCVar10->location).position.x;
                fStack_28c = fStack_28c * fStack_28 + (pCVar10->location).position.y;
                fStack_288 = fStack_288 * fStack_28 + (pCVar10->location).position.z;
                if (afStack_1d8 + 2 != afStack_2b0 + 8) {
                  afStack_1d8[2] = fStack_290;
                  afStack_1d8[3] = fStack_28c;
                  fStack_1c8 = fStack_288;
                }
                fStack_14 = fStack_28;
                core_fire_cpp_FUN_004a3bd0(0x01C73654,afStack_1d8 + 2,0x41f00000,1,0);
                iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                fStack_248 = *(float *)(iVar6 + 0x20) - (pCVar10->location).position.x;
                afStack_244[0] = *(float *)(iVar6 + 0x24) - (pCVar10->location).position.y;
                afStack_244[1] = *(float *)(iVar6 + 0x28) - (pCVar10->location).position.z;
                fStack_158 = fStack_248;
                afStack_178[(uint)bVar12 * -2 + 9] = afStack_244[(uint)bVar12 * -2];
                afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
                     afStack_244[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
                fStack_8c = fStack_150 * fStack_150 +
                            fStack_158 * fStack_158 + fStack_154 * fStack_154;
                fStack_88 = (float)(((int)fStack_8c >> 1) + _DAT_01d1a0a4);
                if (fStack_88 <= (float)_DAT_005d9e54) {
                  core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_32c);
                  SStack_32c.damage_amount = 25.0;
                  SStack_32c.damage_type = DAMAGE_TYPE_ATTACK_ELECTROCUTE;
                  iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                  (**(code **)(*(int *)(iVar6 + 0x154) + 0x108))(iVar6,&SStack_32c);
                }
              }
            }
            else {
              fStack_4c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
              fStack_14 = fStack_4c;
              afStack_1e8[2] = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
              afStack_1e8[0] = fStack_4c;
              afStack_1e8[1] = 0.0;
              if (afStack_19c + 5 != afStack_1fc + 5) {
                fStack_188 = fStack_4c;
                fStack_184 = 0.0;
                fStack_180 = afStack_1e8[2];
              }
              fStack_40 = SQRT(fStack_180 * fStack_180 +
                               fStack_188 * fStack_188 + fStack_184 * fStack_184);
              if (fStack_40 <= 0.0) {
                fStack_184 = 0.0;
                fStack_188 = 0.0;
                fStack_180 = 0.0;
              }
              else {
                fVar17 = 1.0 / fStack_40;
                fStack_188 = fStack_188 * fVar17;
                fStack_184 = fStack_184 * fVar17;
                fStack_180 = fStack_180 * fVar17;
              }
              fStack_44 = afStack_1e8[2];
              fStack_14 = afStack_1e8[2];
              fStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,6.0);
              fStack_188 = fStack_188 * fStack_24 + (pCVar10->location).position.x;
              fStack_184 = fStack_184 * fStack_24 + (pCVar10->location).position.y;
              fStack_180 = fStack_180 * fStack_24 + (pCVar10->location).position.z;
              if (afStack_1d8 + 2 != afStack_19c + 5) {
                afStack_1d8[2] = fStack_188;
                afStack_1d8[3] = fStack_184;
                fStack_1c8 = fStack_180;
              }
              fStack_14 = fStack_24;
              core_fire_cpp_FUN_004a3bd0(0x01C73654,afStack_1d8 + 2,0x41f00000,1,0);
              iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              afStack_244[2] = *(float *)(iVar6 + 0x20) - (pCVar10->location).position.x;
              afStack_244[3] = *(float *)(iVar6 + 0x24) - (pCVar10->location).position.y;
              fStack_234 = *(float *)(iVar6 + 0x28) - (pCVar10->location).position.z;
              afStack_1fc[2] = afStack_244[2];
              afStack_1fc[(uint)bVar12 * -2 + 3] = afStack_244[(uint)bVar12 * -2 + 3];
              afStack_1fc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                   afStack_244[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
              fStack_1c = fStack_1ec * fStack_1ec +
                          afStack_1fc[2] * afStack_1fc[2] + afStack_1fc[3] * afStack_1fc[3];
              fStack_18 = (float)(((int)fStack_1c >> 1) + _DAT_01d1a0a4);
              if (fStack_18 <= (float)_DAT_005d9e5c) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_2f0);
                SStack_2f0.damage_amount = 25.0;
                SStack_2f0.damage_type = DAMAGE_TYPE_ATTACK_ELECTROCUTE;
                iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                (**(code **)(*(int *)(iVar6 + 0x154) + 0x108))(iVar6,&SStack_2f0);
              }
            }
          }
        }
        iStack_38 = iStack_38 + 4;
      }
      fStack_14 = core_motion_cpp_FUN_004fc930(&(this_ptr->base).base.model.base);
      piVar5 = 0x02D0C1A0;
      if ((float)_DAT_005d9e4c < fStack_14) {
        this_ptr->platform_check_done = 0;
        core_weather_cpp_FUN_0057d050(piVar5,0);
      }
      break;
    case 0xb:
      fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_5c);
      if (fStack_14 < (float)_DAT_005d9e2c) {
        uVar19 = 0xffff;
        uVar18 = 0x3e800000;
        pfVar11 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x24);
        fStack_29c = (this_ptr->base).base.base.location.position.x;
        afStack_2b0[(uint)bVar12 * -2 + 6] = *pfVar11;
        afStack_2b0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] = pfVar11[(uint)bVar12 * -2 + 1];
        uVar16 = 3;
        uVar14 = 0x40700000;
        uVar13 = 0x3f400000;
        pfVar11 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x24);
        fStack_17c = (this_ptr->base).base.base.location.position.x;
        afStack_178[(uint)bVar12 * -2] = *pfVar11;
        afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = pfVar11[(uint)bVar12 * -2 + 1];
        afStack_178[0] = afStack_178[0] + _DAT_005d9e24;
        fStack_298 = fStack_298 + _DAT_005d9e28;
        core_fire_cpp_FUN_004a3c50
                  (0x01C73654,afStack_19c + 8,afStack_2b0 + 5,0,uVar13,uVar14,uVar16,uVar18,uVar19
                  );
      }
      this_ptr->vanishing = 1;
      this_ptr->vanish_timer = 0.25;
      break;
    case 0xc:
      fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_5c);
      if (fStack_14 < (float)_DAT_005d9e1c) {
        uVar19 = 0xffff;
        uVar18 = 0x3e800000;
        pfVar11 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x24);
        fStack_164 = (this_ptr->base).base.base.location.position.x;
        afStack_178[(uint)bVar12 * -2 + 6] = *pfVar11;
        afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] = pfVar11[(uint)bVar12 * -2 + 1];
        uVar16 = 3;
        uVar14 = 0x40700000;
        uVar13 = 0x3f400000;
        pfVar11 = (float *)((int)this_ptr + (uint)bVar12 * -8 + 0x24);
        fStack_d4 = (this_ptr->base).base.base.location.position.x;
        afStack_100[(uint)bVar12 * -2 + 0xc] = *pfVar11;
        afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] = pfVar11[(uint)bVar12 * -2 + 1];
        fStack_160 = fStack_160 + _DAT_005d9e28;
        fStack_d0 = fStack_d0 + _DAT_005d9e24;
        core_fire_cpp_FUN_004a3c50
                  (0x01C73654,afStack_100 + 0xb,afStack_178 + 5,0,uVar13,uVar14,uVar16,uVar18,
                   uVar19);
      }
      this_ptr->vanishing = 0;
      this_ptr->vanish_timer = 0.25;
    }
    goto switchD_0059ceee_caseD_3;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_0059ba56:
      iVar6 = 1;
    }
    else {
LAB_0059bf31:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              (&(this_ptr->base).base.model.base,iVar6,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_0059ba56;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_0059bf31;
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
      pCVar1 = &(this_ptr->base).base.base.location;
      iStack_3c = 0;
      this_ptr->vanish_timer = fStack_74;
      for (iStack_30 = 0; iStack_30 < g_CDemonSetPtr->actor_count; iStack_30 = iStack_30 + 1) {
        pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c840
                            (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iStack_3c),
                             g_CWayPointClassInfo.name_hash);
        if ((pCVar10 != (CDemonActor *)0x0) &&
           (iVar6 = _strcmp(pCVar10->actor_name,"CenterPoint"),
           iVar6 == 0)) {
          core_fire_cpp_FUN_004a3c50
                    (0x01C73654,pCVar1,&pCVar10->location,0,0x3f400000,0x3f400000,3,0x3e800000,
                     0xffff);
          (pCVar1->position).x = (pCVar10->location).position.x;
          (this_ptr->base).base.base.location.position.y = (pCVar10->location).position.y;
          (this_ptr->base).base.base.location.position.z = (pCVar10->location).position.z;
          (this_ptr->base).base.base.location.area_id = (pCVar10->location).area_id;
        }
        iStack_3c = iStack_3c + 4;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,0xb,1);
    }
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    if ((iStack_6c == 8) || (iStack_6c == 7)) {
      core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
    }
    fStack_e0 = (this_ptr->base).base.velocity.x * delta_time;
    fStack_dc = (this_ptr->base).base.velocity.y * delta_time;
    fStack_d8 = (this_ptr->base).base.velocity.z * delta_time;
    fStack_224 = fStack_e0;
    afStack_244[(uint)bVar12 * -2 + 9] = afStack_100[(uint)bVar12 * -2 + 9];
    afStack_244[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
         afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
    pCVar15 = &(this_ptr->base).base.position_delta;
    fStack_ec = fStack_224 + pCVar15->x;
    fStack_e8 = fStack_220 + (this_ptr->base).base.position_delta.y;
    fStack_e4 = fStack_21c + (this_ptr->base).base.position_delta.z;
    fStack_104 = fStack_ec;
    afStack_100[(uint)bVar12 * -2] = afStack_100[(uint)bVar12 * -2 + 6];
    afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_100[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_134 = fStack_104 + pCVar2->x;
    fStack_130 = afStack_100[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_12c = afStack_100[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_20c.x = fStack_134;
    *(float *)((int)&CStack_20c + (uint)bVar12 * -8 + 4) = afStack_178[(uint)bVar12 * -2 + 0x12];
    *(float *)((int)&CStack_20c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         afStack_178[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar15->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_20c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
