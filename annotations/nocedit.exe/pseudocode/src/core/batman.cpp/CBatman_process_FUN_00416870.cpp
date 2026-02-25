// Name: core_batman.cpp_CBatman_process_FUN_00416870
// Address: 00416870
// Address Range: [[00416870, 004173ab]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_process_FUN_00416870(CBatman *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_batman_cpp_CBatman_process_FUN_00416870(CBatman *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  UOrientationVector *pUVar2;
  CDeformableModelInstance *pCVar3;
  CVector3f *pCVar4;
  float fVar5;
  CBatman *this_ptr_00;
  CDemonActor_vtable *pCVar6;
  CDemonActor *pCVar7;
  int iVar8;
  SMotion *pSVar9;
  int iVar10;
  uint uVar11;
  CVector3f *pCVar12;
  CBatman *pCVar13;
  CPathMap *path_map;
  float fVar13;
  float max_distance;
  float in_stack_fffffe78;
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
  
  iVar8 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar8 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_3c = delta_time * (this_ptr->base).speed;
  while (0.0 < local_3c) {
    uVar11 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                       (&(this_ptr->base).base.model.motion_controller);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,uVar11);
  }
  fVar5 = (this_ptr->base).speed;
  fVar13 = (float)3.1415926535000001;
  pCVar3 = &(this_ptr->base).base.model;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar13 * fVar5;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar3->motion_controller);
  iVar8 = pSVar9->state_index;
  local_28 = iVar8;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    switch(iVar8) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar8 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,1,1);
        }
      }
      else {
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
        if ((iVar8 != 0) &&
           (iVar8 = core_actor_cpp_isOfClass_FUN_0040c6d0((this_ptr->base).victim,"CHero"),
           iVar8 != 0)) {
          iVar10 = 0;
          iVar8 = 0;
          while ((iVar8 < g_CDemonSetPtr->enemy_count &&
                 ((pCVar13 = (CBatman *)
                             core_actor_cpp_castToClassHash_FUN_0040c790
                                       (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar10),
                                        g_CBatmanClassInfo.name_hash), pCVar13 == (CBatman *)0x0 ||
                  (pCVar13->mist_state == 0))))) {
            iVar8 = iVar8 + 1;
            iVar10 = iVar10 + 4;
          }
          if (iVar8 == g_CDemonSetPtr->enemy_count) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0xd,1);
            pCVar7 = (this_ptr->base).victim;
            this_ptr->mist_state = 1;
            if ((CLocation *)&this_ptr->new_pos != &pCVar7->location) {
              (this_ptr->new_pos).x = (pCVar7->location).position.x;
              (this_ptr->new_pos).y = (pCVar7->location).position.y;
              (this_ptr->new_pos).z = (pCVar7->location).position.z;
            }
            pCVar6 = (this_ptr->base).base.base.vtable._ub;
            this_ptr->vanish_timer = 0.0;
            local_28 = 0xd;
            (*pCVar6->playSound)((CDemonActor *)this_ptr,"batman-disappear.wav");
            break;
          }
        }
        pCVar7 = (this_ptr->base).victim;
        local_c8.x = (pCVar7->location).position.x - (this_ptr->base).base.base.location.position.x;
        local_c8.y = (pCVar7->location).position.y - (this_ptr->base).base.base.location.position.y;
        local_c8.z = (pCVar7->location).position.z - (this_ptr->base).base.base.location.position.z;
        if (SQRT(local_c8.z * local_c8.z + local_c8.x * local_c8.x + local_c8.y * local_c8.y) <
            3.5f) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_80,&local_c8);
          local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (local_80.y - (this_ptr->base).base.base.orient.vec.y);
          if (ABS(local_14) < (float)0.52359877558333301) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,3,1);
          }
        }
        core_batman_cpp_CBatman_FUN_004167f0(this_ptr);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar5 = 3.5f;
      pCVar3 = &(this_ptr->base).base.model;
      if ((this_ptr->base).victim == (CDemonActor *)0x0) {
        iVar8 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar8 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,1,1);
        }
      }
      else {
        max_distance = 0.17453292;
        local_2c = 3.5f;
        fVar13 = 0.5;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_110.x = 0.0;
        local_110.z = fVar5;
        pCVar12 = &local_110;
        local_110.y = 0.0;
        pCVar7 = (this_ptr->base).victim;
        path_map = (*((pCVar7->vtable)._ub)->getPathMap)(pCVar7);
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,&(((this_ptr->base).victim)->location).position,
                           path_map,pCVar12,fVar13,max_distance);
        if (-1 < iVar8) {
          pCVar1 = &(this_ptr->base).base.base.location;
          pCVar7 = (this_ptr->base).victim;
          local_8c = (pCVar1->position).x - (pCVar7->location).position.x;
          local_84 = (this_ptr->base).base.base.location.position.z - (pCVar7->location).position.z;
          local_88 = 0;
          local_38 = SQRT(local_84 * local_84 + local_8c * local_8c);
          local_34 = local_38;
          if ((local_38 <= local_2c) && ((this_ptr->base).attack_cooldown <= 0.0)) {
            pCVar7 = (this_ptr->base).victim;
            local_5c.x = (pCVar7->location).position.x - (pCVar1->position).x;
            local_5c.y = (pCVar7->location).position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_5c.z = (pCVar7->location).position.z -
                         (this_ptr->base).base.base.location.position.z;
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_98,&local_5c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_98.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar3->motion_controller,3,1);
              uVar11 = this_ptr->sfx_handles[1];
              (this_ptr->base).attack_cooldown = 1.0;
              iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar11);
              if ((iVar8 == 0) &&
                 (iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[2]),
                 iVar8 == 0)) {
                uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                   ((CDemonActor *)this_ptr,"batman-attack?.wav");
                this_ptr->sfx_handles[2] = uVar11;
              }
            }
          }
          if ((this_ptr->base).guard_distance < local_34) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe78);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_104,&g_ZeroVector,
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                           INT_008227c0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_f8,pCVar12);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      break;
    case 8:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar3,&local_ec,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_74,pCVar12);
        core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_74,0);
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 9:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if (((this_ptr->base).victim != (CDemonActor *)0x0) ||
         (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                            (g_CEventListPtr,this_ptr->fall_event), iVar8 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0xb,1);
        iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
        if ((iVar8 == 0) &&
           ((iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[2]),
            iVar8 == 0 &&
            (iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]),
            iVar8 == 0)))) {
          uVar11 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                             ((CDemonActor *)this_ptr,"batman-alert.wav");
          this_ptr->sfx_handles[0] = uVar11;
        }
      }
      break;
    case 0xb:
      if ((this_ptr->base).base.base.location.position.y <
          (this_ptr->base).base.closest_distance_threshold + 1.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0xc,1);
      }
      break;
    case 0xd:
      switch(this_ptr->mist_state) {
      case 0:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
        break;
      case 1:
        fVar5 = this_ptr->vanish_timer + delta_time;
        this_ptr->vanish_timer = fVar5;
        if (1.0f < fVar5) {
          this_ptr->mist_state = 2;
          this_ptr->vanish_timer = 1.0f;
        }
        pCVar3 = &(this_ptr->base).base.model;
        iVar8 = 0;
        local_bc.x = 0.0;
        local_bc.y = 3.0;
        local_bc.z = 0.0;
        local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar3);
        if (0 < local_20->bone_count) {
          do {
            pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                                (pCVar3,&local_11c,iVar8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_14c,pCVar12);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                      (g_CFireEffectPtr,&local_14c,0.5,&local_bc,0xffff);
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_20->bone_count);
        }
        break;
      case 2:
        local_30 = 1;
        local_1c = 0;
        for (local_18 = 0; fVar5 = 1.0f, local_18 < g_CDemonSetPtr->character_count;
            local_18 = local_18 + 1) {
          this_ptr_00 = *(CBatman **)((int)g_CDemonSetPtr->characters + local_1c);
          if (((this_ptr_00 != (CBatman *)0x0) && (this_ptr_00 != this_ptr)) &&
             (iVar8 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).getDeathState)
                                ((CCharacter *)this_ptr_00), iVar8 < 1)) {
            local_50 = (this_ptr_00->base).base.base.location.position.x - (this_ptr->new_pos).x;
            local_4c = (this_ptr_00->base).base.base.location.position.y - (this_ptr->new_pos).y;
            local_48 = (this_ptr_00->base).base.base.location.position.z - (this_ptr->new_pos).z;
            if (SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c) <
                (float)5) goto switchD_004173a5_caseD_4;
          }
          local_1c = local_1c + 4;
        }
        if (local_30 != 0) {
          this_ptr->mist_state = 3;
          pCVar1 = &(this_ptr->base).base.base.location;
          this_ptr->vanish_timer = fVar5;
          (pCVar1->position).x = (this_ptr->new_pos).x;
          (this_ptr->base).base.base.location.position.y = (this_ptr->new_pos).y;
          (this_ptr->base).base.base.location.position.z = (this_ptr->new_pos).z;
          pCVar7 = (this_ptr->base).victim;
          if (pCVar7 != (CDemonActor *)0x0) {
            local_a4.x = (pCVar7->location).position.x - (pCVar1->position).x;
            local_a4.y = (pCVar7->location).position.y -
                         (this_ptr->base).base.base.location.position.y;
            local_a4.z = (pCVar7->location).position.z -
                         (this_ptr->base).base.base.location.position.z;
            pUVar2 = &(this_ptr->base).base.base.orient;
            pCVar12 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&local_b0,&local_a4);
            if ((CVector3f *)pUVar2 != pCVar12) {
              (pUVar2->vec).x = pCVar12->x;
              (this_ptr->base).base.base.orient.vec.y = pCVar12->y;
              (this_ptr->base).base.base.orient.vec.z = pCVar12->z;
            }
            (this_ptr->base).base.base.orient.vec.z = 0.0;
            (this_ptr->base).base.base.orient.vec.x = 0.0;
          }
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"batman-disappear.wav");
        }
        break;
      case 3:
        iVar8 = 0;
        local_68.x = 0.0;
        local_68.y = 3.0;
        local_68.z = 0.0;
        local_24 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar3);
        if (0 < local_24->bone_count) {
          do {
            pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                                (pCVar3,&local_128,iVar8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_134,pCVar12);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                      (g_CFireEffectPtr,&local_134,0.5,&local_68,0xffff);
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_24->bone_count);
        }
        fVar5 = this_ptr->vanish_timer - delta_time;
        this_ptr->vanish_timer = fVar5;
        if (fVar5 < 0.0) {
          this_ptr->vanish_timer = 0.0;
          this_ptr->mist_state = 0;
          core_batman_cpp_CBatman_FUN_004167f0(this_ptr);
        }
      }
    }
    goto switchD_004173a5_caseD_4;
  }
  uVar11 = (this_ptr->base).base.is_walking;
  if (uVar11 < 2) {
    if (uVar11 == 1) {
LAB_00416943:
      iVar8 = 1;
    }
    else {
LAB_00416b03:
      iVar8 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar8,1);
  }
  else {
    if (uVar11 < 3) goto LAB_00416943;
    if (uVar11 != 3) goto LAB_00416b03;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004173a5_caseD_4:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar8 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if ((iVar8 != 0) && (local_28 != 9)) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_e0 = (this_ptr->base).base.velocity.x * delta_time;
    local_dc = (this_ptr->base).base.velocity.y * delta_time;
    pCVar12 = &(this_ptr->base).base.position_delta;
    local_d8 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar4 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_140 = local_e0 + pCVar12->x;
    local_13c = local_dc + (this_ptr->base).base.position_delta.y;
    local_138 = local_d8 + (this_ptr->base).base.position_delta.z;
    local_d4.x = local_140 + pCVar4->x;
    local_d4.y = local_13c + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_d4.z = local_138 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar12->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar5 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar5;
    pCVar4->x = fVar5;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_d4);
  }
  if (local_28 != 0xd) {
    this_ptr->mist_state = 0;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_fffffe78);
  return;
}
