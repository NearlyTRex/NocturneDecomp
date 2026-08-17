// Name: core_batman.cpp_CBatman_process_FUN_00413800
// Address: 00413800
// Address Range: [[00413800, 0041433b]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_process_FUN_00413800(CBatman *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_batman_cpp_CBatman_process_FUN_00413800(CBatman *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CBatman *this_ptr_00;
  CDemonActor_vtable *pCVar4;
  CCharacter *pCVar5;
  int iVar6;
  SMotion *pSVar7;
  int iVar8;
  EDeathState EVar9;
  CVector3f *pCVar10;
  uint uVar11;
  CDemonActor *pCVar12;
  CPathMap *path_map;
  CLocation *pCVar13;
  float fVar14;
  float fVar15;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo local_188;
  CVector3f local_14c;
  float local_140;
  float local_13c;
  float local_138;
  CVector3f local_134;
  CVector3f local_128;
  CVector3f local_11c;
  CVector3f local_110;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  float local_8c;
  uint local_88;
  float local_84;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_28;
  CSkeleton *local_24;
  CSkeleton *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  iVar6 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_3c = delta_time * (this_ptr->base).speed;
  while (0.0 < local_3c) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&(this_ptr->base).base.model.motion_controller,&local_3c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,iVar6);
  }
  fVar14 = (this_ptr->base).speed;
  fVar15 = (float)3.1415926535000001;
  pCVar2 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar15 * fVar14;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar2->motion_controller);
  iVar6 = pSVar7->state_index;
  local_28 = iVar6;
  iVar8 = core_charactr_cpp_CCharacter_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    switch(iVar6) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
        if (iVar6 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,1,1);
        }
      }
      else {
        iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(0.25);
        if ((iVar6 != 0) &&
           (iVar6 = core_actor_cpp_isOfClass_FUN_0040d7e0
                              (&((this_ptr->base).victim)->base,"CHero"), iVar6 != 0)) {
          iVar8 = 0;
          iVar6 = 0;
          while ((iVar6 < g_CDemonSet_PTR_005be368->enemy_count &&
                 ((pCVar12 = core_actor_cpp_castToClassHash_FUN_0040d890
                                       (*(CDemonActor **)
                                         ((int)g_CDemonSet_PTR_005be368->enemies + iVar8),
                                        g_CBatmanActorType_00764638.name_hash),
                  pCVar12 == (CDemonActor *)0x0 ||
                  (*(int *)(pCVar12[0x90].create_event + 0x48) == 0))))) {
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + 4;
          }
          if (iVar6 == g_CDemonSet_PTR_005be368->enemy_count) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.motion_controller,0xd,1);
            pCVar5 = (this_ptr->base).victim;
            pCVar13 = &(pCVar5->base).location;
            this_ptr->mist_state = 1;
            if ((CLocation *)&this_ptr->new_pos != pCVar13) {
              (this_ptr->new_pos).x = (pCVar13->position).x;
              (this_ptr->new_pos).y = (pCVar5->base).location.position.y;
              (this_ptr->new_pos).z = (pCVar5->base).location.position.z;
            }
            pCVar4 = (this_ptr->base).base.base.vtable._ub;
            this_ptr->vanish_timer = 0.0;
            local_28 = 0xd;
            (*pCVar4->playSound)((CDemonActor *)this_ptr,"batman-disappear.wav");
            break;
          }
        }
        pCVar5 = (this_ptr->base).victim;
        local_c8.x = (pCVar5->base).location.position.x -
                     (this_ptr->base).base.base.location.position.x;
        local_c8.y = (pCVar5->base).location.position.y -
                     (this_ptr->base).base.base.location.position.y;
        local_c8.z = (pCVar5->base).location.position.z -
                     (this_ptr->base).base.base.location.position.z;
        if (SQRT(local_c8.z * local_c8.z + local_c8.x * local_c8.x + local_c8.y * local_c8.y) <
            3.5f) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_80,&local_c8);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                               (local_80.y - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(local_14) < (float)0.52359877558333301) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.motion_controller,3,1);
          }
        }
        core_batman_cpp_CBatman_pickRandomMovementState_FUN_00413780(this_ptr);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar14 = 3.5f;
      pCVar2 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        local_2c = 3.5f;
        fVar15 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_110.x = 0.0;
        local_110.z = fVar14;
        pCVar10 = &local_110;
        local_110.y = 0.0;
        pCVar5 = (this_ptr->base).victim;
        path_map = (*((pCVar5->base).vtable._ub)->getPathMap)(&pCVar5->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar10,
                           fVar15,max_distance);
        if (-1 < iVar6) {
          pCVar13 = &(this_ptr->base).base.base.location;
          pCVar5 = (this_ptr->base).victim;
          local_8c = (pCVar13->position).x - (pCVar5->base).location.position.x;
          local_84 = (this_ptr->base).base.base.location.position.z -
                     (pCVar5->base).location.position.z;
          local_88 = 0;
          local_38 = SQRT(local_84 * local_84 + local_8c * local_8c);
          local_34 = local_38;
          if ((local_38 <= local_2c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar5 = (this_ptr->base).victim;
            local_5c.x = (pCVar5->base).location.position.x - (pCVar13->position).x;
            local_5c.y = (pCVar5->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_5c.z = (pCVar5->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_98,&local_5c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_98.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar2->motion_controller,3,1);
              uVar11 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 1.0;
              iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uVar11);
              if ((iVar6 == 0) &&
                 (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[2]),
                 iVar6 == 0)) {
                uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar11;
              }
            }
          }
          if ((this_ptr->base).guard_distance < local_34) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(this_ptr->base).base.model.motion_controller,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_188);
      local_188.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
      damage_info = &local_188;
      local_188.attacker = (CDemonActor *)this_ptr;
      local_188.wielder = (CDemonActor *)this_ptr;
      fVar14 = 0.4;
      local_14 = local_188.damage_amount;
      pCVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                          (&local_104,(CVector3f *)&DAT_02dd1184,
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                           DAT_00764610);
      pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                          ((CDemonActor *)this_ptr,&local_f8,pCVar10);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0
                (&this_ptr->base,pCVar10,fVar14,damage_info);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            (pCVar2,&local_ec,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)this_ptr,&local_74,pCVar10);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480(g_CGore_PTR_005b96c4,&local_74,0);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if (((this_ptr->base).victim != (CCharacter *)0x0) ||
         (iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                            (0x01C03A10,this_ptr->fall_event), iVar6 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,0xb,1);
        iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[1]);
        if ((iVar6 == 0) &&
           ((iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[2]),
            iVar6 == 0 &&
            (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handles[0]),
            iVar6 == 0)))) {
          uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"batman-alert.wav");
          this_ptr->sfx_handles[0] = uVar11;
        }
      }
      break;
    case 0xb:
      if ((this_ptr->base).base.base.location.position.y <
          (this_ptr->base).base.closest_distance_threshold + 1.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,0xc,1);
      }
      break;
    case 0xd:
      switch(this_ptr->mist_state) {
      case 0:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,0,1);
        break;
      case 1:
        fVar14 = this_ptr->vanish_timer + delta_time;
        this_ptr->vanish_timer = fVar14;
        if (1.0f < fVar14) {
          this_ptr->mist_state = 2;
          this_ptr->vanish_timer = 1.0f;
        }
        pCVar2 = &(this_ptr->base).base.model;
        iVar6 = 0;
        local_bc.x = 0.0;
        local_bc.y = 3.0;
        local_bc.z = 0.0;
        local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar2);
        if (0 < local_20->bone_count) {
          do {
            pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                                (pCVar2,&local_11c,iVar6);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      ((CDemonActor *)this_ptr,&local_14c,pCVar10);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                      (g_CFireEffect_PTR_005b80f0,&local_14c,0.5,&local_bc,0xffff);
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_20->bone_count);
        }
        break;
      case 2:
        local_30 = 1;
        local_1c = 0;
        for (local_18 = 0; fVar14 = 1.0f,
            local_18 < g_CDemonSet_PTR_005be368->character_count; local_18 = local_18 + 1) {
          this_ptr_00 = *(CBatman **)((int)g_CDemonSet_PTR_005be368->characters + local_1c);
          if (((this_ptr_00 != (CBatman *)0x0) && (this_ptr_00 != this_ptr)) &&
             (EVar9 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).getDeathState)
                                ((CCharacter *)this_ptr_00), (int)EVar9 < 1)) {
            local_50 = (this_ptr_00->base).base.base.location.position.x - (this_ptr->new_pos).x;
            local_4c = (this_ptr_00->base).base.base.location.position.y - (this_ptr->new_pos).y;
            local_48 = (this_ptr_00->base).base.base.location.position.z - (this_ptr->new_pos).z;
            if (SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c) <
                (float)5) goto switchD_00413d82_default;
          }
          local_1c = local_1c + 4;
        }
        if (local_30 != 0) {
          this_ptr->mist_state = 3;
          pCVar13 = &(this_ptr->base).base.base.location;
          this_ptr->vanish_timer = fVar14;
          (pCVar13->position).x = (this_ptr->new_pos).x;
          (this_ptr->base).base.base.location.position.y = (this_ptr->new_pos).y;
          (this_ptr->base).base.base.location.position.z = (this_ptr->new_pos).z;
          pCVar5 = (this_ptr->base).victim;
          if (pCVar5 != (CCharacter *)0x0) {
            local_a4.x = (pCVar5->base).location.position.x - (pCVar13->position).x;
            local_a4.y = (pCVar5->base).location.position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_a4.z = (pCVar5->base).location.position.z -
                         (this_ptr->base).base.base.location.position.z;
            pUVar1 = &(this_ptr->base).base.base.orient;
            pCVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (&local_b0,&local_a4);
            if ((CVector3f *)pUVar1 != pCVar10) {
              (pUVar1->vec).x = pCVar10->x;
              (this_ptr->base).base.base.orient.vec.y = pCVar10->y;
              (this_ptr->base).base.base.orient.vec.z = pCVar10->z;
            }
            (this_ptr->base).base.base.orient.vec.z = 0.0;
            (this_ptr->base).base.base.orient.vec.x = 0.0;
          }
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"batman-disappear.wav");
        }
        break;
      case 3:
        iVar6 = 0;
        local_68.x = 0.0;
        local_68.y = 3.0;
        local_68.z = 0.0;
        local_24 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar2);
        if (0 < local_24->bone_count) {
          do {
            pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                                (pCVar2,&local_128,iVar6);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      ((CDemonActor *)this_ptr,&local_134,pCVar10);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                      (g_CFireEffect_PTR_005b80f0,&local_134,0.5,&local_68,0xffff);
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_24->bone_count);
        }
        fVar14 = this_ptr->vanish_timer - delta_time;
        this_ptr->vanish_timer = fVar14;
        if (fVar14 < 0.0) {
          this_ptr->vanish_timer = 0.0;
          this_ptr->mist_state = 0;
          core_batman_cpp_CBatman_pickRandomMovementState_FUN_00413780(this_ptr);
        }
      }
    }
    goto switchD_00413d82_default;
  }
  uVar11 = (this_ptr->base).base.is_walking;
  if (uVar11 < 2) {
    if (uVar11 == 1) {
LAB_004138d3:
      iVar6 = 1;
    }
    else {
LAB_00413a93:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
  else {
    if (uVar11 < 3) goto LAB_004138d3;
    if (uVar11 != 3) goto LAB_00413a93;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_00413d82_default:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960((CCharacter *)this_ptr);
  if ((iVar6 != 0) && (local_28 != 9)) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_e0 = (this_ptr->base).base.velocity.x * delta_time;
    local_dc = (this_ptr->base).base.velocity.y * delta_time;
    pCVar10 = &(this_ptr->base).base.position_delta;
    local_d8 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_140 = local_e0 + pCVar10->x;
    local_13c = local_dc + (this_ptr->base).base.position_delta.y;
    local_138 = local_d8 + (this_ptr->base).base.position_delta.z;
    local_d4.x = local_140 + pCVar3->x;
    local_d4.y = local_13c + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_d4.z = local_138 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar10->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar14 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar14;
    pCVar3->x = fVar14;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_d4);
  }
  if (local_28 != 0xd) {
    this_ptr->mist_state = 0;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  return;
}
