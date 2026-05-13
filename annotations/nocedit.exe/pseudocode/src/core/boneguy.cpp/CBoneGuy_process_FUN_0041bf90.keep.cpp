// Name: core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90
// Address: 0041bf90
// MANUAL RECONSTRUCTION
// Address Range: [[0041bf90, 0041ca3c] [0060eb39, 0060eb5a]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_0041bf90(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_process_FUN_0041bf90(CBoneGuy *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CBodyPart *pCVar6;
  uint uVar7;
  CDemonActor *this_ptr_00;
  CCharacter *pCVar8;
  float fVar9;
  int iVar7;
  int iVar11;
  SBoneGuyBox *pSVar8;
  SMotion *pSVar9;
  int iVar10;
  CBoneGuy *pCVar11;
  uint uVar12;
  CVector3f *pCVar13;
  CVector3f *pCVar12;
  CPathMap *path_map;
  float fVar15;
  SDamageInfo local_1bc;
  SDamageInfo local_180;
  CBoundingBox3D local_144;
  CQuaternion4f local_12c;
  CQuaternion4f local_11c;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_58;
  float local_38;
  int local_34;
  float local_30;
  SBoneGuyBox *local_2c;
  CQuaternion4f *local_28;
  float *local_24;
  CQuaternion4f *local_20;
  int local_1c;
  CVector3f *local_18;
  float local_14;
  SDamageInfo *damage_info;
  float fVar18;
  float fVar17;
  UOrientationVector *pUVar1;
  CDemonActor *pCVar4;
  CCharacter *pCVar5;
  float fVar6;
  CVector3f *pCVar3;
  
  iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->death_event);
  if (iVar7 != 0) {
    (this_ptr->base).base.hit_points = 0.0;
    (this_ptr->base).pool_me = 1;
    this_ptr->recombine_interpolation = 0.0;
    if (this_ptr->blown_up == 0) {
      core_boneguy_cpp_CBoneGuy_explode_FUN_0041d680(this_ptr);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
              (&(this_ptr->base).base.model.motion_controller,5,0.0);
  }
  iVar11 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar11 == 0) goto LAB_0041c220;
  if ((this_ptr->blown_up == 1) && (0.0 < (this_ptr->base).base.hit_points)) {
    fVar15 = this_ptr->recombine_interpolation + delta_time;
    this_ptr->recombine_interpolation = fVar15;
    if (fVar15 <= this_ptr->recombine_time) {
      return;
    }
    core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041d8a0(this_ptr);
  }
  if (this_ptr->blown_up == 2) {
    fVar15 = delta_time / 2.0f + this_ptr->recombine_interpolation;
    this_ptr->recombine_interpolation = fVar15;
    if (fVar15 < 1.0) {
      local_1c = 0;
      if (this_ptr->box_count < 1) {
        return;
      }
      local_2c = this_ptr->boxes;
      local_24 = &this_ptr->recombine_interpolation;
      local_28 = &this_ptr->boxes[0].dest_orient;
      local_20 = &this_ptr->boxes[0].start_orient;
      local_18 = &this_ptr->boxes[0].source_pos;
      do {
        pSVar8 = local_2c + local_1c;
        pCVar6 = pSVar8->body_part;
        local_ac = local_18->x + ((pSVar8->pos).x - local_18->x) * *local_24;
        local_a8 = local_18->y + ((pSVar8->pos).y - local_18->y) * *local_24;
        local_a4 = local_18->z + ((pSVar8->pos).z - local_18->z) * *local_24;
        core_xform_cpp_slerpQuaternion_FUN_005f77e0
                  (local_28,local_20,this_ptr->recombine_interpolation,&local_11c);
        local_12c = local_11c;
        core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(&local_88,&local_12c);
        local_88.x = this_ptr->recombine_interpolation * (float)6.2831853070000001 + local_88.x;
        (pCVar6->base).location.position.x = local_ac;
        (pCVar6->base).location.position.y = local_a8;
        pUVar1 = &(pCVar6->base).orient;
        (pCVar6->base).location.position.z = local_a4;
        if ((CVector3f *)pUVar1 != &local_88) {
          (pCVar6->base).orient.vec = local_88;
        }
        if (&pCVar6->physics_box != (CBox *)&local_ac) {
          (pCVar6->physics_box).position.x = local_ac;
          (pCVar6->physics_box).position.y = local_a8;
          (pCVar6->physics_box).position.z = local_a4;
        }
        pCVar12 = &(pCVar6->physics_box).orientation;
        if ((CVector3f *)pCVar12 != &local_88) {
          (pCVar6->physics_box).orientation = local_88;
        }
        local_28 = (CQuaternion4f *)&local_28[4].y;
        local_20 = (CQuaternion4f *)&local_20[4].y;
        local_18 = local_18 + 6;
        local_1c = local_1c + 1;
      } while (local_1c < this_ptr->box_count);
      return;
    }
    iVar11 = 0;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
              (&(this_ptr->base).base.model);
    if (0 < this_ptr->box_count) {
      do {
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
                  (g_CDemonMissionPtr,&(this_ptr->boxes[iVar11].body_part)->base,1);
        this_ptr->boxes[iVar11].body_part = (CBodyPart *)0x0;
        iVar11 = iVar11 + 1;
      } while (iVar11 < this_ptr->box_count);
    }
    this_ptr->blown_up = 0;
    fVar15 = this_ptr->recombine_time * (float)0.5;
    (this_ptr->base).base.hit_points = 100.0;
    this_ptr->recombine_time = fVar15;
    if (fVar15 <= (float)2.5) {
      this_ptr->recombine_time = 2.5;
    }
  }
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  local_38 = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < local_38) {
    iVar11 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                       (&pCVar1->motion_controller,&local_38);
    if (iVar11 == 100) {
      pCVar4 = this_ptr->pickup_target;
      if (pCVar4 != (CDemonActor *)0x0) {
        this_ptr->pickup_target = (CDemonActor *)0x0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                  ((CCharacter *)this_ptr,1,pCVar4,0.2);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar11);
    }
  }
  fVar15 = (this_ptr->base).speed;
  fVar6 = (float)3.1415926535000001;
  fVar9 = (float)0.25;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar6 * fVar15 * fVar9;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  iVar11 = pSVar9->state_index;
  local_34 = iVar11;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    switch(iVar11) {
    case 0:
      iVar11 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
      if (iVar11 == 0) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        if ((this_ptr->base).victim != (CCharacter *)0x0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      break;
    case 1:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar11 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar11 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
      }
      else {
        iVar11 = core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_0041cc40(this_ptr,delta_time);
        if (iVar11 == 0) {
          local_30 = 2.0f;
          if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
            local_30 = 3.0f;
          }
          fVar18 = 0.17453292;
          fVar15 = 0.5;
          local_d0.x = 0.0;
          local_d0.z = local_30;
          pCVar12 = &local_d0;
          local_d0.y = 0.0;
          pCVar8 = (this_ptr->base).victim;
          path_map = (*((pCVar8->base).vtable._ub)->getPathMap)(&pCVar8->base);
          iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                             ((CCharacter *)this_ptr,
                              &(((this_ptr->base).victim)->base).location.position,path_map,pCVar12,
                              fVar15,fVar18);
          pCVar1 = &(this_ptr->base).base.model;
          if (iVar11 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr->base.base.base.actor_name);
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
          else {
            pCVar8 = (this_ptr->base).victim;
            fVar15 = (this_ptr->base).base.base.location.position.x -
                     (pCVar8->base).location.position.x;
            fVar9 = (this_ptr->base).base.base.location.position.z -
                    (pCVar8->base).location.position.z;
            if ((SQRT(fVar9 * fVar9 + fVar15 * fVar15) <= local_30 + (float)0.5) &&
               ((this_ptr->base).attack_cooldown <= 0.0)) {
              if ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0) {
                iVar11 = 2;
              }
              else {
                iVar11 = 6;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,iVar11,1);
              sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
              (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"boneguy-swing?.wav");
              (this_ptr->base).attack_cooldown = 1.0;
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_180);
      local_180.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(7.0,15.0);
      damage_info = &local_180;
      local_180.attacker = (CDemonActor *)this_ptr;
      local_180.wielder = (CDemonActor *)this_ptr;
      fVar17 = 0.4;
      local_14 = local_180.damage_amount;
      pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_94,&g_ZeroVector.f,
                           (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                           g_BoneGuyIndices[0]);
      pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)this_ptr,&local_e8,pCVar12);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880
                (&this_ptr->base,pCVar12,fVar17,damage_info);
      break;
    case 5:
      if (((this_ptr->base).pool_me == 0) &&
         ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
        (this_ptr->base).pool_me = 1;
      }
      break;
    case 6:
      this_ptr_00 = (this_ptr->base).base.carry_hands[1].carry_actor;
      if (this_ptr_00 != (CDemonActor *)0x0) {
        (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,&local_144);
        local_c4.x = (local_144.min.x + local_144.max.x) * 0.5f;
        local_c4.y = (local_144.min.y + local_144.max.y) * 0.5f;
        local_c4.z = (local_144.min.z + local_144.max.z) * 0.5f;
        if (&local_f4 != &local_c4) {
          local_f4.x = local_c4.x;
          local_f4.y = local_c4.y;
        }
        if (&local_100 != &local_f4) {
          local_100.x = local_f4.x;
          local_100.y = local_f4.y;
        }
        local_100.z = local_144.min.z;
        local_f4.z = local_144.max.z;
        pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                            ((this_ptr->base).base.carry_hands[1].carry_actor,&local_a0,&local_100);
        if (&local_100 != pCVar13) {
          local_100 = *pCVar13;
        }
        pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                            ((this_ptr->base).base.carry_hands[1].carry_actor,&local_58,&local_f4);
        if (&local_f4 != pCVar12) {
          local_f4 = *pCVar12;
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1bc);
        local_1bc.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(15.0,25.0);
        local_1bc.attacker = (this_ptr->base).base.carry_hands[1].carry_actor;
        local_1bc.wielder = (CDemonActor *)this_ptr;
        local_14 = local_1bc.damage_amount;
        core_enemy_cpp_CEnemy_testAttackLine_FUN_004a9930
                  (&this_ptr->base,&local_100,&local_f4,&local_1bc);
      }
    }
  }
  else {
    uVar7 = (this_ptr->base).base.is_walking;
    if (uVar7 < 2) {
      if (uVar7 == 1) {
LAB_0041c3c9:
        iVar11 = 1;
      }
      else {
LAB_0041c60c:
        iVar11 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,iVar11,1);
    }
    else {
      if (uVar7 < 3) goto LAB_0041c3c9;
      if (uVar7 != 3) goto LAB_0041c60c;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr->base.base.base.actor_name);
    }
    (this_ptr->base).base.model.accumulated_root_motion.x = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  }
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar11 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar11 != 0) {
    pCVar5 = (this_ptr->base).victim;
    if ((pCVar5 != (CCharacter *)0x0) &&
       (pCVar11 = (CBoneGuy *)(*(((pCVar5->base).vtable._uc)->_uc).getGrabber)(pCVar5),
       pCVar11 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar12 = &(this_ptr->base).base.position_delta;
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_dc.x = (this_ptr->base).base.velocity.x * delta_time + pCVar12->x + pCVar3->x;
    local_dc.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_dc.z = delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.x = 0.0;
    (this_ptr->base).base.position_delta.y = 0.0;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.x = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_dc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  if ((local_34 == 1) &&
     (iVar11 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                         ((double)(this_ptr->base).base.base.location.position.x,
                          (double)(this_ptr->base).base.base.location.position.y,
                          (double)(this_ptr->base).base.base.location.position.z,100.0), iVar11 != 0
     )) {
    iVar11 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle);
    if (iVar11 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    iVar11 = 2;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,1.0);
    sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_14,iVar11);
    uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                       ((CDemonActor *)this_ptr,"boneGuy-walkloop.wav");
    this_ptr->sfx_handle = uVar12;
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
LAB_0041c220:
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
  return;
}
