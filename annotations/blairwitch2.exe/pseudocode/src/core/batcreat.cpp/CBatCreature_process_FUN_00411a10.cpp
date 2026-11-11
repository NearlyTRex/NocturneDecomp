// Name: core_batcreat.cpp_CBatCreature_process_FUN_00411a10
// Address: 00411a10
// Address Range: [[00411a10, 00412497]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00411a10(CBatCreature *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00411a10(CBatCreature *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  CPathMap *path_map;
  uint uVar6;
  byte bVar7;
  float afStackY_11ac [997];
  CBatCreature *this_ptr_00;
  CGore *this_ptr_01;
  float *pfVar8;
  CVector3f *pCVar9;
  float fVar10;
  float min_distance;
  uint *puVar11;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo SStack_200;
  float fStack_1c4;
  float afStack_1c0 [4];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  uint uStack_1a0;
  float fStack_19c;
  float afStack_194 [3];
  CVector3f CStack_188;
  float fStack_17c;
  float afStack_178 [5];
  float afStack_164 [3];
  uint uStack_158;
  float fStack_154;
  uint uStack_14c;
  float fStack_148;
  uint uStack_140;
  uint uStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  CVector3f CStack_110;
  uint uStack_104;
  float afStack_100 [5];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint uStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float afStack_bc [3];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  CVector3f CStack_a4;
  uint uStack_98;
  float afStack_94 [5];
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  CMotionController *pCStack_24;
  CMotionController *pCStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  fStack_38 = delta_time * (this_ptr->base).speed;
  while (0.0 < fStack_38) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      (&(this_ptr->base).base.model.base,afStack_64 + 0xb);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar5);
  }
  fVar10 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar10);
  pCStack_20 = &(this_ptr->base).base.model.base;
  iVar5 = core_motion_cpp_FUN_005035c0(pCStack_20);
  iStack_28 = *(int *)(iVar5 + 0x24);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_004287f0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    switch(iStack_28) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
        }
      }
      else {
        fStack_1ac = (pCVar4->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        fStack_1a8 = (pCVar4->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
        fStack_1a4 = (pCVar4->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        afStack_64[2] = fStack_1ac;
        afStack_64[(uint)bVar7 * -2 + 3] = afStack_1c0[(uint)bVar7 * -2 + 6];
        afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_1c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        fStack_34 = SQRT(fStack_54 * fStack_54 +
                         afStack_64[2] * afStack_64[2] + afStack_64[3] * afStack_64[3]);
        fStack_2c = fStack_34;
        if (fStack_34 < 0x40600000) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_64 + 2);
          uStack_158 = uStack_140;
          afStack_178[(uint)bVar7 * -2 + 9] = afStack_178[(uint)bVar7 * -2 + 0xf];
          afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
          fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                       (fStack_154 - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(fStack_14) < (float)_DAT_005cb8f6) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,3,1);
            iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]);
            if ((iVar5 == 0) &&
               (iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[2]), iVar5 == 0)) {
              uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"batman-attack?.wav");
              this_ptr->sfx_handles[2] = uVar6;
            }
          }
        }
        if (fStack_34 < (this_ptr->base).guard_distance) {
          pCStack_24 = &(this_ptr->base).base.model.base;
          if (fStack_34 < _DAT_005f2ee8) {
            iVar5 = 1;
            (this_ptr->base).attack_cooldown = 0.0;
          }
          else {
            (this_ptr->base).attack_cooldown = 0.0;
            iVar5 = core_actor_cpp_randomChance_FUN_0040d060(0.1);
            if (iVar5 == 0) {
              iVar5 = 1;
            }
            else {
              pCVar4 = (this_ptr->base).victim;
              fStack_ec = (pCVar4->base).location.position.x -
                          (this_ptr->base).base.base.location.position.x;
              fStack_e8 = (pCVar4->base).location.position.y -
                          (this_ptr->base).base.base.location.position.y;
              fStack_e4 = (pCVar4->base).location.position.z -
                          (this_ptr->base).base.base.location.position.z;
              afStack_bc[0] = fStack_ec;
              afStack_100[(uint)bVar7 * -2 + 0x12] = afStack_100[(uint)bVar7 * -2 + 6];
              afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
                   afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_100 + 0x11);
              uStack_1a0 = afStack_178[2];
              afStack_1c0[(uint)bVar7 * -2 + 9] = afStack_178[(uint)bVar7 * -2 + 3];
              afStack_1c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
                   afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
              fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                           (fStack_19c - (this_ptr->base).base.base.orient.vec.y);
              if ((float)_DAT_005cb8f6 <= ABS(fStack_14)) {
                iVar5 = 1;
              }
              else if ((float)_DAT_005cb8fe <=
                       ABS((((this_ptr->base).victim)->base).location.position.y -
                           (this_ptr->base).base.base.location.position.y)) {
                iVar5 = 1;
              }
              else {
                iVar5 = 2;
              }
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_24,iVar5,1);
          if ((((this_ptr->alert_played == 0) &&
               (iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[1]), iVar5 == 0)) &&
              (iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[2]), iVar5 == 0)) &&
             (iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[0]), iVar5 == 0)) {
            uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"batman-alert.wav");
            this_ptr->alert_played = 1;
            this_ptr->sfx_handles[0] = uVar6;
          }
        }
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar10 = 0x40600000;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_18 = 0x40600000;
        min_distance = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        CStack_188.x = 0.0;
        CStack_188.z = fVar10;
        pCVar9 = &CStack_188;
        CStack_188.y = 0.0;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar9,
                           min_distance,max_distance);
        if (-1 < iVar5) {
          pCVar1 = &(this_ptr->base).base.base.location;
          pCVar4 = (this_ptr->base).victim;
          fStack_50 = (pCVar1->position).x - (pCVar4->base).location.position.x;
          fStack_4c = (this_ptr->base).base.base.location.position.y -
                      (pCVar4->base).location.position.y;
          fStack_48 = (this_ptr->base).base.base.location.position.z -
                      (pCVar4->base).location.position.z;
          fStack_80 = fStack_50;
          afStack_94[(uint)bVar7 * -2 + 6] = afStack_64[(uint)bVar7 * -2 + 6];
          afStack_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
               afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          uStack_7c = 0;
          fStack_1c = SQRT(fStack_78 * fStack_78 + fStack_80 * fStack_80);
          fStack_30 = fStack_1c;
          if ((_DAT_005f2ee8 < fStack_1c) &&
             ((this_ptr->base).attack_cooldown = 0.0, iStack_28 == 1)) {
            pCVar4 = (this_ptr->base).victim;
            fStack_44 = (pCVar4->base).location.position.x - (pCVar1->position).x;
            fStack_40 = (pCVar4->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_3c = (pCVar4->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            afStack_94[2] = fStack_44;
            afStack_94[(uint)bVar7 * -2 + 3] = afStack_64[(uint)bVar7 * -2 + 9];
            afStack_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_94 + 2);
            uStack_98 = uStack_134;
            afStack_94[(uint)bVar7 * -2] = afStack_178[(uint)bVar7 * -2 + 0x12];
            afStack_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                         (afStack_94[0] - (this_ptr->base).base.base.orient.vec.y);
            if ((ABS(fStack_14) < (float)_DAT_005cb8f6) &&
               (ABS((((this_ptr->base).victim)->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y) < (float)_DAT_005cb8fe)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_20,2,1);
              uVar6 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 0.0;
              iVar5 = sound_sndmain_cpp_FUN_00550b70(uVar6);
              if ((iVar5 == 0) &&
                 (iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[2]), iVar5 == 0)) {
                uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar6;
              }
            }
          }
          if ((fStack_30 <= fStack_18) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar4 = (this_ptr->base).victim;
            fStack_d4 = (pCVar4->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            fStack_d0 = (pCVar4->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
            fStack_cc = (pCVar4->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            afStack_164[0] = fStack_d4;
            afStack_178[(uint)bVar7 * -2 + 6] = afStack_100[(uint)bVar7 * -2 + 0xc];
            afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_178 + 5);
            uStack_14c = uStack_11c;
            afStack_178[(uint)bVar7 * -2 + 0xc] = afStack_178[(uint)bVar7 * -2 + 0x18];
            afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
                 afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x19];
            fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                         (fStack_148 - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)_DAT_005cb8f6) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,3,1);
              uVar6 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 1.0;
              iVar5 = sound_sndmain_cpp_FUN_00550b70(uVar6);
              if ((iVar5 == 0) &&
                 (iVar5 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handles[2]), iVar5 == 0)) {
                uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar6;
              }
            }
          }
          if ((this_ptr->base).guard_distance < fStack_30) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&(this_ptr->base).base.model.base,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_200);
      SStack_200.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(7.0,15.0);
      damage_info = &SStack_200;
      SStack_200.attacker = (CDemonActor *)this_ptr;
      SStack_200.wielder = (CDemonActor *)this_ptr;
      fVar10 = 0.4;
      fStack_14 = SStack_200.damage_amount;
      core_xform_cpp_FUN_00591530
                (&DAT_0265370c,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices + DAT_007bc754);
      pfVar8 = afStack_1c0 + 0xb;
      afStack_194[0] = (float)uStack_e0;
      afStack_1c0[(uint)bVar7 * -2 + 0xc] = afStack_100[(uint)bVar7 * -2 + 9];
      afStack_1c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
           afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar8);
      pCVar9 = &CStack_a4;
      CStack_a4.x = fStack_c8;
      *(float *)((int)&CStack_a4 + (uint)bVar7 * -8 + 4) = afStack_100[(uint)bVar7 * -2 + 0xf];
      this_ptr_00 = this_ptr;
      *(float *)((int)&CStack_a4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                (&this_ptr_00->base,pCVar9,fVar10,damage_info);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_FUN_005469a0(pCStack_20,0);
        puVar11 = &uStack_104;
        uStack_104 = afStack_100[2];
        afStack_100[(uint)bVar7 * -2] = afStack_100[(uint)bVar7 * -2 + 3];
        afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,puVar11);
        blood_type = BLOOD_TYPE_RED;
        pCVar9 = &CStack_110;
        CStack_110.x = fStack_1c4;
        *(float *)((int)&CStack_110 + (uint)bVar7 * -8 + 4) = afStack_1c0[(uint)bVar7 * -2];
        this_ptr_01 = g_CGorePtr;
        *(float *)((int)&CStack_110 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
             afStack_1c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_01,pCVar9,blood_type);
        (this_ptr->base).pool_me = 1;
      }
    }
    goto switchD_00412491_caseD_2;
  }
  EVar3 = (this_ptr->base).base.walk_state;
  if (EVar3 < 2) {
    if (EVar3 == WALK_STATE_WALKING) {
LAB_00411ae7:
      iVar5 = 1;
    }
    else {
LAB_00411cc3:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
  else {
    if (EVar3 < WALK_STATE_NO_PATH) goto LAB_00411ae7;
    if (EVar3 != WALK_STATE_NO_PATH) goto LAB_00411cc3;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              (&(this_ptr->base).base.model.base,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00412491_caseD_2:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430((CCharacter *)this_ptr);
  if (iVar5 != 0) {
    core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
    fStack_17c = (this_ptr->base).base.velocity.x * delta_time;
    afStack_178[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_178[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_128 = fStack_17c;
    afStack_178[(uint)bVar7 * -2 + 0x15] = afStack_178[(uint)bVar7 * -2];
    afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16] =
         afStack_178[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pCVar9 = &(this_ptr->base).base.position_delta;
    afStack_1c0[2] = fStack_128 + pCVar9->x;
    afStack_1c0[3] = fStack_124 + (this_ptr->base).base.position_delta.y;
    fStack_1b0 = fStack_120 + (this_ptr->base).base.position_delta.z;
    fStack_68 = afStack_1c0[2];
    afStack_64[(uint)bVar7 * -2] = afStack_1c0[(uint)bVar7 * -2 + 3];
    afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_1c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_b0 = fStack_68 + pCVar2->x;
    fStack_ac = afStack_64[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    fStack_a8 = afStack_64[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_74.x = fStack_b0;
    *(float *)((int)&CStack_74 + (uint)bVar7 * -8 + 4) = afStack_100[(uint)bVar7 * -2 + 0x15];
    *(float *)((int)&CStack_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         afStack_100[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar9->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,&CStack_74);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
