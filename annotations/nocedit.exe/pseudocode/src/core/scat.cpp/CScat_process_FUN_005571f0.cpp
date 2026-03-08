// Name: core_scat.cpp_CScat_process_FUN_005571f0
// Address: 005571f0
// Address Range: [[005571f0, 005578dd]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_process_FUN_005571f0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_process_FUN_005571f0(CScat *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CWeapon *pCVar7;
  float fVar8;
  CGame *pCVar9;
  int iVar10;
  CVector3f *pCVar11;
  CDemonActor *pCVar12;
  EDeathState EVar13;
  SMotion *pSVar14;
  uint uVar15;
  uint *puVar16;
  int desired_state_index;
  uint *puVar17;
  byte bVar18;
  float afStackY_1860 [1521];
  CDeformableModelInstance *pCVar19;
  CQuaternion4f *source_quaternions;
  float fVar20;
  code *blend_callback;
  float local_88;
  CQuaternion4f CStack_84;
  CQuaternion4f CStack_74;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CDeformableModelInstance *pCStack_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar18 = 0;
  iVar10 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  pCVar9 = g_CGamePtr;
  if (iVar10 == 0) {
    return;
  }
  (this_ptr->base).base.turn_speed = delta_time * (float)12.566370614;
  if (pCVar9->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar20 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar20;
  if (fVar20 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar11 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar11->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_00557d20(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar10 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_scat_cpp_CScat_updateAI_FUN_005578e0(this_ptr,delta_time);
    }
    pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(this_ptr->base).base.model.motion_controller);
    switch(pSVar14->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_00558010(this_ptr);
        desired_state_index = 0;
        if (iVar10 != 0) {
          desired_state_index = 7;
        }
        if ((this_ptr->base).player_control.action_states[0] != 0) {
          iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_00558010(this_ptr);
          if (iVar10 == 0) {
            if ((this_ptr->base).player_control.action_states[2] == 0) {
              desired_state_index = 1;
            }
            else {
              desired_state_index = 2;
            }
          }
          else {
            desired_state_index = 9;
          }
        }
        if ((this_ptr->base).player_control.action_states[1] != 0) {
          iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_00558010(this_ptr);
          if (iVar10 == 0) {
            desired_state_index = 3;
          }
          else {
            desired_state_index = 10;
          }
        }
        if (((((this_ptr->base).player_control.action_states[3] != 0) && (this_ptr->guns_drawn != 0)
             ) && (pCVar7 = this_ptr->weapon_actor, pCVar7 != (CWeapon *)0x0)) &&
           (iVar10 = (*(((pCVar7->base).vtable._uw)->_uw).isReadyToFire)(pCVar7), iVar10 != 0)) {
          (*(((this_ptr->weapon_actor->base).vtable._uw)->_uw).fire)(this_ptr->weapon_actor);
          pCVar7 = this_ptr->weapon_actor;
          (this_ptr->base).player_control.action_states[3] = 0;
          if (pCVar7->weapon_type == 8) {
            desired_state_index = 0xb;
          }
        }
        pCVar19 = &(this_ptr->base).base.model;
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed +
             (this_ptr->base).base.turn_angle_accumulator;
        pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&pCVar19->motion_controller);
        if (desired_state_index != pSVar14->state_index) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar19->motion_controller,desired_state_index,1);
        }
        if ((this_ptr->base).player_control.action_states[6] != 0) {
          (this_ptr->base).player_control.action_states[6] = 0;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                    ((CEnemy *)this_ptr,SUB14(this_ptr->guns_drawn == 0,0));
        }
      }
      break;
    case 5:
      goto switchD_00557686_caseD_5;
    }
  }
  else {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar11->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    uVar15 = (this_ptr->base).base.is_walking;
    if (uVar15 < 2) {
      if (uVar15 == 1) {
        iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_00558010(this_ptr);
        if (iVar10 == 0) {
          iVar10 = 1;
        }
        else {
LAB_005572db:
          iVar10 = 9;
        }
      }
      else {
LAB_00557637:
        iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_00558010(this_ptr);
        if (iVar10 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = 7;
        }
      }
    }
    else if (uVar15 < 3) {
      iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_00558010(this_ptr);
      if (iVar10 != 0) goto LAB_005572db;
      iVar10 = 2;
    }
    else {
      if (uVar15 != 3) goto LAB_00557637;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
      iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_00558010(this_ptr);
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar10,1);
  }
  pCVar12 = (this_ptr->base).base.grabbed_by;
  if (pCVar12 == (CDemonActor *)0x0) {
    pCVar11 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    fVar20 = pCVar11->x;
    fVar2 = pCVar1->x;
    fVar3 = (this_ptr->base).base.model.accumulated_root_motion.y;
    fVar4 = (this_ptr->base).base.position_delta.y;
    fVar5 = (this_ptr->base).base.model.accumulated_root_motion.z;
    fVar6 = (this_ptr->base).base.position_delta.z;
    fVar8 = (float)32;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar11->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.velocity.y = (this_ptr->base).base.velocity.y - delta_time * fVar8;
    local_64 = (this_ptr->base).base.velocity.x * delta_time;
    local_60 = (this_ptr->base).base.velocity.y * delta_time;
    local_5c = delta_time * (this_ptr->base).base.velocity.z;
    local_4c.x = fVar20 + fVar2 + local_64;
    local_4c.y = fVar3 + fVar4 + local_60;
    local_4c.z = fVar5 + fVar6 + local_5c;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_4c);
  }
  else {
    pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,&local_40,&(pCVar12->location).position);
    pCVar11 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_58,pCVar11);
    local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar11->y);
    local_88 = local_14;
    if (local_14 < (float)-1.57079632675) {
      local_88 = local_14 + 3.141593f;
    }
    if ((float)1.57079632675 < local_88) {
      local_88 = local_88 + -3.141593f;
    }
    local_18 = delta_time * (float)3.1415926535000001;
    local_1c = -local_18;
    if (local_88 < local_1c) {
      local_88 = local_1c;
    }
    if (local_18 < local_88) {
      local_88 = local_18;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_88;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    pCVar12 = (this_ptr->base).base.grabbed_by;
    local_14 = *(float *)&pCVar12->vtable;
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (&(this_ptr->base).base.model,&local_34,0);
    iVar10 = (**(code **)((int)local_14 + 0x124))(pCVar12,this_ptr,pCVar11);
    if (iVar10 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_005573f5:
      iVar10 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_005573f5;
      if ((this_ptr->base).player_control.action_states[3] == 0) goto LAB_00557408;
      iVar10 = 0xf;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar10,1);
  }
LAB_00557408:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&(this_ptr->base).inventory);
  pCVar7 = this_ptr->weapon_actor;
  if (pCVar7 != (CWeapon *)0x0) {
    (*((pCVar7->base).vtable._ub)->process)(&pCVar7->base,delta_time);
  }
  core_scat_cpp_CScat_updateWeaponState_FUN_00558060(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  uVar15 = (uint)((this_ptr->base).base.hit_points <= 0.0);
  pCVar12 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getGrabber)((CCharacter *)this_ptr);
  if (pCVar12 != (CDemonActor *)0x0) {
    uVar15 = 1;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0xc);
  if (0.0 < local_14) {
    uVar15 = 1;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0xd);
  if (0.0 < local_14) {
    uVar15 = 1;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,4);
  if (0.0 < local_14) {
    uVar15 = 1;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,5);
  if (0.0 < local_14) {
    uVar15 = 1;
  }
  core_scat_cpp_CScat_updateAiming_FUN_00558720(this_ptr,delta_time,uVar15);
  pCStack_20 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_20);
  core_scat_cpp_CScat_blendLayerAction_FUN_005582c0(this_ptr);
  iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_00558010(this_ptr);
  if ((iVar10 == 0) &&
     (EVar13 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                         ((CCharacter *)this_ptr), EVar13 == DEATH_STATE_ALIVE)) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
    fVar20 = this_ptr->head_blend_weight;
    iVar10 = INT_0310615c;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&this_ptr->head_euler_angles,&CStack_74);
    pCVar19 = pCStack_20;
    source_quaternions = &CStack_84;
    CStack_84.w = CStack_74.w;
    puVar17 = (uint *)((int)&CStack_84 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    puVar16 = (uint *)((int)&CStack_74 + (uint)bVar18 * -8 + (uint)bVar18 * -8 + 8);
    *(uint *)((int)&CStack_84 + (uint)bVar18 * -8 + 4) =
         *(uint *)((int)&CStack_74 + (uint)bVar18 * -8 + 4);
    *puVar17 = *puVar16;
    puVar17[(uint)bVar18 * -2 + 1] = puVar16[(uint)bVar18 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCVar19,source_quaternions,fVar20,iVar10,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  core_scat_cpp_CScat_updateWeaponAttachment_FUN_00558fd0(this_ptr);
switchD_00557686_caseD_5:
  return;
}
