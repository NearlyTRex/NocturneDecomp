// Name: core_svetlana.cpp_CSvetlana_process_FUN_00541d00
// Address: 00541d00
// Address Range: [[00541d00, 005423b6]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00541d00(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_00541d00(CSvetlana *this_ptr,float delta_time)

{
  UOrientationVector *euler;
  CDeformableModelInstance *model_ptr;
  CDemonActor *pCVar1;
  CCharacter *this_ptr_00;
  bool bVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  CVector3f *pCVar6;
  EDeathState EVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_1870 [1520];
  float fVar13;
  code *blend_callback;
  float local_98;
  CQuaternion4f CStack_94;
  CQuaternion4f CStack_84;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  CVector3f local_38;
  int local_24;
  float local_20;
  CDeformableModelInstance *pCStack_1c;
  float local_18;
  CCharacter_full_vtable *local_14;
  
  bVar12 = 0;
  if (((this_ptr->base).base.hit_points < (float)100) &&
     (fVar13 = (this_ptr->base).base.hit_points + delta_time,
     (this_ptr->base).base.hit_points = fVar13, (float)100 < fVar13)) {
    (this_ptr->base).base.hit_points = 100.0;
  }
  iVar4 = core_charactr_cpp_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if ((iVar4 == 0) || ((this_ptr->base).ai_task == HERO_TASK_SUSPEND)) {
switchD_005420d7_caseD_9:
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0((CCharacter *)this_ptr,delta_time);
  fVar13 = (this_ptr->base).invincibility_timer - delta_time;
  fVar3 = (float)12.566370614;
  (this_ptr->base).invincibility_timer = fVar13;
  (this_ptr->base).base.turn_speed = delta_time * fVar3;
  if (fVar13 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar6 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar6->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_svetlana_cpp_CSvetlana_advanceMotion_FUN_00542ad0(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar4 = core_charactr_cpp_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_svetlana_cpp_FUN_005423c0(this_ptr,delta_time);
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(this_ptr->base).base.model.motion_controller);
    switch(pSVar5->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar4 = 0;
        if (this_ptr->blades_drawn != 0) {
          iVar4 = 10;
        }
        if ((this_ptr->base).player_input.action_state.walk != 0) {
          if ((this_ptr->base).player_input.action_state.run == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
        }
        if ((this_ptr->base).player_input.action_state.backup != 0) {
          iVar4 = 3;
        }
        if ((this_ptr->base).player_input.action_state.draw != 0) {
          iVar4 = this_ptr->blades_drawn;
          (this_ptr->base).player_input.action_state.draw = 0;
          uVar8 = (uint)(iVar4 == 0);
          this_ptr->blades_drawn = uVar8;
          if (uVar8 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = 10;
          }
        }
        if ((this_ptr->base).player_input.action_state.fire != 0) {
          bVar2 = true;
          if ((this_ptr->blades_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
            iVar9 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(&this_ptr->base);
            bVar2 = false;
            if (iVar9 != 0) goto LAB_00542171;
            local_24 = core_hero_cpp_FUN_004b5110(&this_ptr->base);
            if ((local_24 != 0) && (local_24 != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(&this_ptr->base);
            }
            if ((local_24 != 0) ||
               (iVar9 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(&this_ptr->base),
               iVar9 != 0)) goto LAB_00542171;
            iVar9 = core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(&this_ptr->base);
            if (iVar9 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(&this_ptr->base);
              goto LAB_00542171;
            }
          }
          else {
LAB_00542171:
            if (!bVar2) goto LAB_00542192;
          }
          iVar4 = this_ptr->attack_hand;
          (this_ptr->base).player_input.action_state.fire = 0;
          if (iVar4 == 0) {
            iVar4 = 0xf;
          }
          else {
            iVar4 = 0xe;
          }
        }
LAB_00542192:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                           (&(this_ptr->base).base.model.motion_controller);
        if (iVar4 != pSVar5->state_index) goto LAB_00541e3d;
      }
      break;
    case 9:
      goto switchD_005420d7_caseD_9;
    }
  }
  else {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(this_ptr->base).base.model.motion_controller);
    if ((pSVar5->state_index != 0x1a) && (pSVar5->state_index != 0x1b)) {
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      pCVar6->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    }
    uVar8 = (this_ptr->base).base.is_walking;
    if (uVar8 < 2) {
      if (uVar8 == 1) {
        iVar4 = 1;
      }
      else {
LAB_00542097:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar8) {
        if (uVar8 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n");
          goto switchD_005420d7_caseD_4;
        }
        goto LAB_00542097;
      }
      iVar4 = 2;
    }
LAB_00541e3d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,iVar4,1);
  }
switchD_005420d7_caseD_4:
  pCVar1 = (this_ptr->base).base.grabbed_by;
  if (pCVar1 == (CDemonActor *)0x0) {
    local_5c.x = (this_ptr->base).base.model.accumulated_root_motion.x;
    local_5c.y = (this_ptr->base).base.model.accumulated_root_motion.y;
    local_5c.z = (this_ptr->base).base.model.accumulated_root_motion.z;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(this_ptr->base).base.model.motion_controller);
    if (pSVar5->state_index != 0x1a) {
      (this_ptr->base).base.velocity.y =
           (this_ptr->base).base.velocity.y - delta_time * (float)32;
    }
    local_44 = (this_ptr->base).base.velocity.x * delta_time;
    local_40 = (this_ptr->base).base.velocity.y * delta_time;
    local_3c = delta_time * (this_ptr->base).base.velocity.z;
    local_74 = local_44 + (this_ptr->base).base.position_delta.x;
    local_70 = local_40 + (this_ptr->base).base.position_delta.y;
    local_5c.x = local_5c.x + local_74;
    local_6c = local_3c + (this_ptr->base).base.position_delta.z;
    local_5c.y = local_5c.y + local_70;
    local_5c.z = local_5c.z + local_6c;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(this_ptr->base).base.model.motion_controller);
    iVar4 = pSVar5->state_index;
    if ((((iVar4 != 0x17) && (iVar4 != 0x18)) && (iVar4 != 0x19)) &&
       (((iVar4 != 0x25 && (iVar4 != 0x26)) && ((iVar4 != 0x27 && (iVar4 != 0x28)))))) {
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&local_5c);
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&(this_ptr->base).base.model.motion_controller);
    if (pSVar5->state_index == 0x1a) {
      (this_ptr->base).base.base.location.position.y =
           delta_time * (float)3 + (this_ptr->base).base.base.location.position.y;
    }
    goto LAB_00541f87;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       ((CDemonActor *)this_ptr,&local_68,&(pCVar1->location).position);
    pCVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_50,pCVar6);
    local_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar6->y);
    local_98 = (float)local_14;
    if ((float)local_14 < (float)-1.57079632675) {
      local_98 = (float)local_14 + 3.141593f;
    }
    if ((float)1.57079632675 < local_98) {
      local_98 = local_98 + 1.5938625219265179e-314._0_4_;
    }
    local_18 = delta_time * (float)3.1415926535000001;
    local_20 = -local_18;
    if (local_98 < local_20) {
      local_98 = local_20;
    }
    if (local_18 < local_98) {
      local_98 = local_18;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_98;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)this_ptr);
  }
  this_ptr_00 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  local_14 = (this_ptr_00->base).vtable._uc;
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&(this_ptr->base).base.model,&local_38,0);
  iVar4 = (*(local_14->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)this_ptr,pCVar6);
  if (iVar4 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_00541f74:
    iVar4 = 0;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_00541f74;
    if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_00541f87;
    iVar4 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(this_ptr->base).base.model.motion_controller,iVar4,1);
LAB_00541f87:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  pCStack_1c = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(pCStack_1c);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar7 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_FUN_0051b650;
    fVar13 = this_ptr->head_blend_weight;
    iVar4 = _DAT_02dca058;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610(&this_ptr->head_euler_angles,&CStack_84);
    CStack_94.w = CStack_84.w;
    puVar11 = (uint *)((int)&CStack_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    puVar10 = (uint *)((int)&CStack_84 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)((int)&CStack_94 + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&CStack_84 + (uint)bVar12 * -8 + 4);
    *puVar11 = *puVar10;
    puVar11[(uint)bVar12 * -2 + 1] = puVar10[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (pCStack_1c,&CStack_94,fVar13,iVar4,blend_callback);
  }
  core_charactr_cpp_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  model_ptr = &(this_ptr->base).base.model;
  euler = &(this_ptr->base).base.base.orient;
  local_14 = (CCharacter_full_vtable *)&(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_process_FUN_00436e50
            (&this_ptr->cape_cloth,(CVector3f *)local_14,&euler->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,model_ptr);
  core_cloth_cpp_CCloth_process_FUN_00436e50
            (&this_ptr->hair_cloth,(CVector3f *)local_14,&euler->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,model_ptr);
  return;
}
