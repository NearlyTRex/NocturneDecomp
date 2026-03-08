// Name: core_haystack.cpp_CHaystack_process_FUN_004f0e40
// Address: 004f0e40
// Address Range: [[004f0e40, 004f13e7]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_process_FUN_004f0e40(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_process_FUN_004f0e40(CHaystack *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CDemonActor *pCVar2;
  CCharacter *this_ptr_00;
  bool bVar3;
  CGame *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  EDeathState EVar7;
  SMotion *pSVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  float afStackY_1868 [1521];
  CDeformableModelInstance *pCVar14;
  CQuaternion4f *source_quaternions;
  float fVar15;
  code *blend_callback;
  float local_90;
  CQuaternion4f CStack_8c;
  CQuaternion4f CStack_7c;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  float local_28;
  CDeformableModelInstance *pCStack_24;
  float local_20;
  int local_1c;
  CCharacter_full_vtable *local_18;
  
  bVar13 = 0;
  iVar5 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_haystack_cpp_CHaystack_updateAI_FUN_004f13f0(this_ptr,delta_time);
  }
  pCVar4 = g_CGamePtr;
  (this_ptr->base).base.turn_speed = delta_time * (float)12.566370614;
  if (pCVar4->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar15 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar15;
  if (fVar15 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_haystack_cpp_CHaystack_advanceMotion_FUN_004f1970(this_ptr,delta_time);
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  pCVar14 = &(this_ptr->base).base.model;
  if (iVar5 == 0) {
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar14->motion_controller);
    switch(pSVar8->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar5 = 0;
        if (this_ptr->guns_drawn != 0) {
          iVar5 = 10;
        }
        if ((this_ptr->base).player_control.action_states[0] != 0) {
          if ((this_ptr->base).player_control.action_states[2] == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
        }
        if ((this_ptr->base).player_control.action_states[1] != 0) {
          iVar5 = 3;
        }
        if ((this_ptr->base).player_control.action_states[6] != 0) {
          iVar5 = this_ptr->guns_drawn;
          (this_ptr->base).player_control.action_states[6] = 0;
          uVar9 = (uint)(iVar5 == 0);
          this_ptr->guns_drawn = uVar9;
          if (uVar9 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = 10;
          }
        }
        if ((this_ptr->base).player_control.action_states[3] != 0) {
          bVar3 = true;
          if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI)) {
            iVar10 = core_hero_cpp_CHero_tryInteract_FUN_004f2af0(&this_ptr->base);
            bVar3 = false;
            if (iVar10 != 0) goto LAB_004f11d6;
            local_1c = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(&this_ptr->base);
            if ((local_1c != 0) && (local_1c != 1)) {
              core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(&this_ptr->base);
            }
            if ((local_1c != 0) ||
               (iVar10 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40(&this_ptr->base),
               iVar10 != 0)) goto LAB_004f11d6;
            iVar10 = core_hero_cpp_CHero_tryPullLever_FUN_004f2f50(&this_ptr->base);
            if (iVar10 != 0) {
              core_hero_cpp_CHero_executeLeverPull_FUN_004f30f0(&this_ptr->base);
              goto LAB_004f11d6;
            }
          }
          else {
LAB_004f11d6:
            if (!bVar3) goto LAB_004f11f7;
          }
          iVar5 = this_ptr->attack_side;
          (this_ptr->base).player_control.action_states[3] = 0;
          if (iVar5 == 0) {
            iVar5 = 0xf;
          }
          else {
            iVar5 = 0xe;
          }
        }
LAB_004f11f7:
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed;
        pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(this_ptr->base).base.model.motion_controller);
        if (iVar5 != pSVar8->state_index) goto LAB_004f0f1c;
      }
      break;
    case 9:
      goto switchD_004f12ce_caseD_9;
    }
  }
  else {
    uVar9 = (this_ptr->base).base.is_walking;
    if (uVar9 < 2) {
      if (uVar9 == 1) {
        iVar5 = 1;
      }
      else {
LAB_004f1134:
        iVar5 = 0;
      }
    }
    else {
      if (2 < uVar9) {
        if (uVar9 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar14->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto switchD_004f12ce_caseD_8;
        }
        goto LAB_004f1134;
      }
      iVar5 = 2;
    }
LAB_004f0f1c:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
switchD_004f12ce_caseD_8:
  pCVar2 = (this_ptr->base).base.grabbed_by;
  if (pCVar2 == (CDemonActor *)0x0) {
    pCVar6 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_3c.x = pCVar6->x + pCVar1->x;
    local_3c.y = (this_ptr->base).base.model.accumulated_root_motion.y +
                 (this_ptr->base).base.position_delta.y;
    local_3c.z = (this_ptr->base).base.model.accumulated_root_motion.z +
                 (this_ptr->base).base.position_delta.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar6->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if ((pSVar8->state_index == 0xe) || (pSVar8->state_index == 0xf)) {
      local_3c.y = 0.0;
      local_3c.x = 0.0;
      local_3c.z = 0.0;
    }
    local_6c = (this_ptr->base).base.velocity.x * delta_time;
    local_68 = (this_ptr->base).base.velocity.y * delta_time;
    local_64 = delta_time * (this_ptr->base).base.velocity.z;
    local_3c.x = local_3c.x + local_6c;
    local_3c.y = local_3c.y + local_68;
    local_3c.z = local_3c.z + local_64;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_3c);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_60,&(pCVar2->location).position);
      pCVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_54,pCVar6);
      local_18 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y)
      ;
      local_90 = (float)local_18;
      if ((float)local_18 < (float)-1.57079632675) {
        local_90 = (float)local_18 + 3.141593f;
      }
      if ((float)1.57079632675 < local_90) {
        local_90 = local_90 + -3.141593f;
      }
      local_20 = delta_time * (float)3.1415926535000001;
      local_28 = -local_20;
      if (local_90 < local_28) {
        local_90 = local_28;
      }
      if (local_20 < local_90) {
        local_90 = local_20;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_90;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    this_ptr_00 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    local_18 = (this_ptr_00->base).vtable._uc;
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,&local_48,0);
    iVar5 = (*(local_18->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)this_ptr,pCVar6);
    if (iVar5 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004f1041:
      iVar5 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004f1041;
      if ((this_ptr->base).player_control.action_states[3] == 0) goto LAB_004f1054;
      iVar5 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
LAB_004f1054:
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCStack_24 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_24);
  EVar7 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if ((EVar7 == DEATH_STATE_ALIVE) &&
     (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&pCStack_24->motion_controller), pSVar8->state_index != 0x13)) {
    blend_callback = core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0;
    fVar15 = this_ptr->head_look_blend_weight;
    iVar5 = INT_02db8700;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&this_ptr->head_look_euler,&CStack_8c);
    pCVar14 = pCStack_24;
    source_quaternions = &CStack_7c;
    CStack_7c.w = CStack_8c.w;
    puVar12 = (uint *)((int)&CStack_7c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    puVar11 = (uint *)((int)&CStack_8c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(uint *)((int)&CStack_7c + (uint)bVar13 * -8 + 4) =
         *(uint *)((int)&CStack_8c + (uint)bVar13 * -8 + 4);
    *puVar12 = *puVar11;
    puVar12[(uint)bVar13 * -2 + 1] = puVar11[(uint)bVar13 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCVar14,source_quaternions,fVar15,iVar5,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
switchD_004f12ce_caseD_9:
  return;
}
