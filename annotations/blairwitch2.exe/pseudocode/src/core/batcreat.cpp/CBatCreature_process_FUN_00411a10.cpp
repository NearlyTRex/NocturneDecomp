// Name: core_batcreat.cpp_CBatCreature_process_FUN_00411a10
// Address: 00411a10
// Address Range: [[00411a10, 00412497]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00411a10(CBatCreature *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_batcreat_cpp_CBatCreature_process_FUN_00411a10(CBatCreature *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CVector3f *pCVar2;
  EWalkState EVar3;
  CCharacter *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  CPathMap *path_map;
  uint uVar7;
  byte bVar8;
  float afStackY_11ac [997];
  CBatCreature *this_ptr_00;
  CGore *this_ptr_01;
  CVector3f *pCVar9;
  float fVar10;
  float min_distance;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo SStack_200;
  CVector3f CStack_1c4;
  float fStack_1b8;
  float afStack_1b4 [4];
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  CVector3f CStack_194;
  CVector3f CStack_188;
  float fStack_17c;
  float afStack_178 [2];
  CVector3f CStack_170;
  CVector3f CStack_164;
  float fStack_158;
  float afStack_154 [5];
  CVector3f CStack_140;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [2];
  CVector3f CStack_11c;
  CVector3f CStack_110;
  CVector3f CStack_104;
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [2];
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [2];
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [2];
  CVector3f CStack_8c;
  float fStack_80;
  float afStack_7c [2];
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [2];
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [4];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  CMotionController *pCStack_24;
  CDeformableModelInstance *pCStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
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
                      (&(this_ptr->base).base.model.base,afStack_4c + 5);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar5);
  }
  fVar10 = (this_ptr->base).speed;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_CCharacter_updateTurnSpeed_FUN_0042b2a0
            ((CCharacter *)this_ptr,delta_time * fVar10);
  pCStack_20 = &(this_ptr->base).base.model;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&pCStack_20->base);
  iStack_28 = pSVar6->state_index;
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
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCStack_20->base,1,1);
        }
      }
      else {
        afStack_1b4[2] =
             (pCVar4->base).location.position.x - (this_ptr->base).base.base.location.position.x;
        afStack_1b4[3] =
             (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y;
        fStack_1a4 = (pCVar4->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        CStack_5c.x = afStack_1b4[2];
        *(float *)((int)&CStack_5c + (uint)bVar8 * -8 + 4) = afStack_1b4[(uint)bVar8 * -2 + 3];
        *(float *)((int)&CStack_5c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_1b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        fStack_34 = SQRT(CStack_5c.z * CStack_5c.z +
                         CStack_5c.x * CStack_5c.x + CStack_5c.y * CStack_5c.y);
        fStack_2c = fStack_34;
        if (fStack_34 < 3.5f) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_5c,&CStack_140);
          fStack_158 = CStack_140.x;
          afStack_154[(uint)bVar8 * -2] = *(float *)((int)&CStack_140 + (uint)bVar8 * -8 + 4);
          afStack_154[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)((int)&CStack_140 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
          fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                (afStack_154[0] - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(fStack_14) < (float)0.52359877558333301) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCStack_20->base,3,1);
            iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]);
            if ((iVar5 == 0) &&
               (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[2]),
               iVar5 == 0)) {
              uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                ((CDemonActor *)this_ptr,"batman-attack?.wav");
              this_ptr->sfx_handles[2] = uVar7;
            }
          }
        }
        if (fStack_34 < (this_ptr->base).guard_distance) {
          pCStack_24 = &(this_ptr->base).base.model.base;
          if (fStack_34 < 10.0f) {
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
              afStack_e8[0] =
                   (pCVar4->base).location.position.y -
                   (this_ptr->base).base.base.location.position.y;
              afStack_e8[1] =
                   (pCVar4->base).location.position.z -
                   (this_ptr->base).base.base.location.position.z;
              CStack_bc.x = fStack_ec;
              *(float *)((int)&CStack_bc + (uint)bVar8 * -8 + 4) = afStack_e8[(uint)bVar8 * -2];
              *(float *)((int)&CStack_bc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                   afStack_e8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                        (&CStack_bc,&CStack_170);
              fStack_1a0 = CStack_170.x;
              afStack_1b4[(uint)bVar8 * -2 + 6] =
                   *(float *)((int)&CStack_170 + (uint)bVar8 * -8 + 4);
              afStack_1b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
                   *(float *)((int)&CStack_170 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
              fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                    (fStack_19c - (this_ptr->base).base.base.orient.vec.y);
              if ((float)0.52359877558333301 <= ABS(fStack_14)) {
                iVar5 = 1;
              }
              else if ((float)2 <=
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
               (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[1]),
               iVar5 == 0)) &&
              (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[2]),
              iVar5 == 0)) &&
             (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[0]),
             iVar5 == 0)) {
            uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"batman-alert.wav");
            this_ptr->alert_played = 1;
            this_ptr->sfx_handles[0] = uVar7;
          }
        }
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar10 = 3.5f;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00488970(&this_ptr->base,delta_time);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCStack_20->base,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCStack_20->base,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        fStack_18 = 3.5f;
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
          afStack_4c[0] =
               (this_ptr->base).base.base.location.position.y - (pCVar4->base).location.position.y;
          afStack_4c[1] =
               (this_ptr->base).base.base.location.position.z - (pCVar4->base).location.position.z;
          fStack_80 = fStack_50;
          afStack_7c[(uint)bVar8 * -2] = afStack_4c[(uint)bVar8 * -2];
          afStack_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_4c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          afStack_7c[0] = 0.0;
          fStack_1c = SQRT(afStack_7c[1] * afStack_7c[1] + fStack_80 * fStack_80);
          fStack_30 = fStack_1c;
          if ((10.0f < fStack_1c) &&
             ((this_ptr->base).attack_cooldown = 0.0, iStack_28 == 1)) {
            pCVar4 = (this_ptr->base).victim;
            afStack_4c[2] = (pCVar4->base).location.position.x - (pCVar1->position).x;
            afStack_4c[3] =
                 (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            fStack_3c = (pCVar4->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
            CStack_8c.x = afStack_4c[2];
            *(float *)((int)&CStack_8c + (uint)bVar8 * -8 + 4) = afStack_4c[(uint)bVar8 * -2 + 3];
            *(float *)((int)&CStack_8c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 afStack_4c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_8c,&CStack_134)
            ;
            fStack_98 = CStack_134.x;
            afStack_94[(uint)bVar8 * -2] = *(float *)((int)&CStack_134 + (uint)bVar8 * -8 + 4);
            afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
                 *(float *)((int)&CStack_134 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                  (afStack_94[0] - (this_ptr->base).base.base.orient.vec.y);
            if ((ABS(fStack_14) < (float)0.52359877558333301) &&
               (ABS((((this_ptr->base).victim)->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y) < (float)2)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&pCStack_20->base,2,1);
              uVar7 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 0.0;
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(uVar7);
              if ((iVar5 == 0) &&
                 (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[2]),
                 iVar5 == 0)) {
                uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar7;
              }
            }
          }
          if ((fStack_30 <= fStack_18) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar4 = (this_ptr->base).victim;
            fStack_d4 = (pCVar4->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
            afStack_d0[0] =
                 (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y
            ;
            afStack_d0[1] =
                 (pCVar4->base).location.position.z - (this_ptr->base).base.base.location.position.z
            ;
            CStack_164.x = fStack_d4;
            *(float *)((int)&CStack_164 + (uint)bVar8 * -8 + 4) = afStack_d0[(uint)bVar8 * -2];
            *(float *)((int)&CStack_164 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 afStack_d0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                      (&CStack_164,&CStack_11c);
            afStack_154[2] = CStack_11c.x;
            afStack_154[(uint)bVar8 * -2 + 3] = *(float *)((int)&CStack_11c + (uint)bVar8 * -8 + 4);
            afStack_154[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                 *(float *)((int)&CStack_11c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                                  (afStack_154[3] - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(fStack_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        (&(this_ptr->base).base.model.base,3,1);
              uVar7 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 1.0;
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(uVar7);
              if ((iVar5 == 0) &&
                 (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(this_ptr->sfx_handles[2]),
                 iVar5 == 0)) {
                uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar7;
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
      core_xform_cpp_transformVector3x4_FUN_00591530
                (&g_CVector3f_0265370c,
                 (this_ptr->base).base.model.bone_transform.bone_model_matrices +
                 g_INT_ARRAY_007bc74c[2],&CStack_e0);
      pCVar9 = &CStack_194;
      CStack_194.x = CStack_e0.x;
      *(uint *)((int)&CStack_194 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_e0 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_194 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_e0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,pCVar9,&CStack_c8);
      pCVar9 = &CStack_a4;
      CStack_a4.x = CStack_c8.x;
      *(uint *)((int)&CStack_a4 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_c8 + (uint)bVar8 * -8 + 4);
      this_ptr_00 = this_ptr;
      *(uint *)((int)&CStack_a4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_c8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                (&this_ptr_00->base,pCVar9,fVar10,damage_info);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (pCStack_20,0,&CStack_f8);
        pCVar9 = &CStack_104;
        CStack_104.x = CStack_f8.x;
        *(uint *)((int)&CStack_104 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_f8 + (uint)bVar8 * -8 + 4);
        *(uint *)((int)&CStack_104 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_f8 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                  ((CDemonActor *)this_ptr,pCVar9,&CStack_1c4);
        blood_type = BLOOD_TYPE_RED;
        pCVar9 = &CStack_110;
        CStack_110.x = CStack_1c4.x;
        *(uint *)((int)&CStack_110 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_1c4 + (uint)bVar8 * -8 + 4);
        this_ptr_01 = g_CGorePtr;
        *(uint *)((int)&CStack_110 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_1c4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
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
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
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
    core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10((CCharacter *)this_ptr,delta_time);
    fStack_17c = (this_ptr->base).base.velocity.x * delta_time;
    afStack_178[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_178[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_128 = fStack_17c;
    afStack_124[(uint)bVar8 * -2] = afStack_178[(uint)bVar8 * -2];
    afStack_124[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_178[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    pCVar9 = &(this_ptr->base).base.position_delta;
    fStack_1b8 = fStack_128 + pCVar9->x;
    afStack_1b4[0] = afStack_124[0] + (this_ptr->base).base.position_delta.y;
    afStack_1b4[1] = afStack_124[1] + (this_ptr->base).base.position_delta.z;
    fStack_68 = fStack_1b8;
    afStack_64[(uint)bVar8 * -2] = afStack_1b4[(uint)bVar8 * -2];
    afStack_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_1b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    fStack_b0 = fStack_68 + pCVar2->x;
    afStack_ac[0] = afStack_64[0] + (this_ptr->base).base.model.accumulated_root_motion.y;
    afStack_ac[1] = afStack_64[1] + (this_ptr->base).base.model.accumulated_root_motion.z;
    CStack_74.x = fStack_b0;
    *(float *)((int)&CStack_74 + (uint)bVar8 * -8 + 4) = afStack_ac[(uint)bVar8 * -2];
    *(float *)((int)&CStack_74 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar9->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00423a60((CCharacter *)this_ptr,&CStack_74);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  return;
}
