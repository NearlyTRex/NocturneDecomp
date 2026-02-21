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
  uint uVar7;
  CDemonActor *pCVar8;
  CCharacter *pCVar9;
  CCharacter_full_vtable *pCVar10;
  float fVar11;
  CGame *pCVar12;
  int iVar13;
  CVector3f *pCVar14;
  CDeformableModelInstance *pCVar15;
  SMotion *pSVar16;
  CDeformableModelInstance *unaff_ESI;
  uint *puVar17;
  int desired_state_index;
  uint *puVar18;
  byte bVar19;
  float afStackY_1848 [1517];
  CDemonActor *in_stack_ffffff78;
  int in_stack_ffffff7c;
  CQuaternion4f *source_quaternions;
  float fVar20;
  code *blend_callback;
  float in_stack_ffffff90;
  CQuaternion4f CStack_6c;
  CQuaternion4f local_5c;
  float local_4c;
  CVector3f local_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  
  bVar19 = 0;
  iVar13 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  pCVar12 = g_CGamePtr;
  if (iVar13 == 0) {
    return;
  }
  (this_ptr->base).base.turn_speed = delta_time * (float)12.566370614;
  if (pCVar12->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar20 = (float)(this_ptr->base).no_collision_flag - delta_time;
  (this_ptr->base).no_collision_flag = (int)fVar20;
  if (fVar20 < 0.0) {
    (this_ptr->base).no_collision_flag = 0;
  }
  pCVar14 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_scat_cpp_CScat_FUN_00557d20(this_ptr);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar13 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar13 == 0) {
    if ((this_ptr->base).control_type == 2) {
      core_scat_cpp_CScat_FUN_005578e0(this_ptr);
    }
    pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(this_ptr->base).base.model.motion_controller);
    switch(pSVar16->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar13 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
        desired_state_index = 0;
        if (iVar13 != 0) {
          desired_state_index = 7;
        }
        if ((this_ptr->base).player_control.action_states[0] != 0) {
          iVar13 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
          if (iVar13 == 0) {
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
          iVar13 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
          if (iVar13 == 0) {
            desired_state_index = 3;
          }
          else {
            desired_state_index = 10;
          }
        }
        if (((((this_ptr->base).player_control.action_states[3] != 0) && (this_ptr->guns_drawn != 0)
             ) && (pCVar9 = (CCharacter *)this_ptr->weapon_actor, pCVar9 != (CCharacter *)0x0)) &&
           (iVar13 = (*(((pCVar9->base).vtable._uc)->_uc).canBeGrabbed)
                               (pCVar9,in_stack_ffffff78,in_stack_ffffff7c), iVar13 != 0)) {
          (*(((((CCharacter *)this_ptr->weapon_actor)->base).vtable._uc)->_uc).isGrabbable)
                    ((CCharacter *)this_ptr->weapon_actor);
          pCVar8 = this_ptr->weapon_actor;
          (this_ptr->base).player_control.action_states[3] = 0;
          if (pCVar8[2].orient.vec.x == 1.12104e-44) {
            desired_state_index = 0xb;
          }
        }
        pCVar15 = &(this_ptr->base).base.model;
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed +
             (this_ptr->base).base.turn_angle_accumulator;
        pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&pCVar15->motion_controller);
        if (desired_state_index != pSVar16->state_index) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar15->motion_controller,desired_state_index,1);
        }
        if ((this_ptr->base).player_control.action_states[6] != 0) {
          (this_ptr->base).player_control.action_states[6] = 0;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                    ((CEnemy *)this_ptr,(float)(uint)(this_ptr->guns_drawn == 0));
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
    pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    uVar7 = (this_ptr->base).base.is_walking;
    if (uVar7 < 2) {
      if (uVar7 == 1) {
        iVar13 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
        if (iVar13 == 0) {
          iVar13 = 1;
        }
        else {
LAB_005572db:
          iVar13 = 9;
        }
      }
      else {
LAB_00557637:
        iVar13 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
        if (iVar13 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = 7;
        }
      }
    }
    else if (uVar7 < 3) {
      iVar13 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
      if (iVar13 != 0) goto LAB_005572db;
      iVar13 = 2;
    }
    else {
      if (uVar7 != 3) goto LAB_00557637;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
      iVar13 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
      if (iVar13 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar13,1);
  }
  pCVar8 = (this_ptr->base).base.grabbed_by;
  if (pCVar8 == (CDemonActor *)0x0) {
    pCVar14 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    fVar20 = pCVar14->x;
    fVar2 = pCVar1->x;
    fVar3 = (this_ptr->base).base.model.accumulated_root_motion.y;
    fVar4 = (this_ptr->base).base.position_delta.y;
    fVar5 = (this_ptr->base).base.model.accumulated_root_motion.z;
    fVar6 = (this_ptr->base).base.position_delta.z;
    fVar11 = (float)32;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.velocity.y = (this_ptr->base).base.velocity.y - delta_time * fVar11;
    local_5c.y = (this_ptr->base).base.velocity.x * delta_time;
    local_5c.z = (this_ptr->base).base.velocity.y * delta_time;
    local_4c = delta_time * (this_ptr->base).base.velocity.z;
    CStack_3c.x = fVar20 + fVar2 + local_5c.y;
    CStack_3c.y = fVar3 + fVar4 + local_5c.z;
    CStack_3c.z = fVar5 + fVar6 + local_4c;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&CStack_3c);
  }
  else {
    pCVar14 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,&CStack_30,&(pCVar8->location).position);
    pCVar14 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_48,pCVar14);
    pCVar15 = (CDeformableModelInstance *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar14->y)
    ;
    if ((float)pCVar15 < (float)-1.57079632675) {
      pCVar15 = (CDeformableModelInstance *)((float)pCVar15 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)pCVar15) {
      pCVar15 = (CDeformableModelInstance *)((float)pCVar15 + -3.141593f);
    }
    unaff_ESI = (CDeformableModelInstance *)(delta_time * (float)3.1415926535000001);
    if ((float)pCVar15 < -(float)unaff_ESI) {
      pCVar15 = (CDeformableModelInstance *)-(float)unaff_ESI;
    }
    if ((float)unaff_ESI < (float)pCVar15) {
      pCVar15 = unaff_ESI;
    }
    (this_ptr->base).base.base.orient.vec.y =
         (this_ptr->base).base.base.orient.vec.y + (float)pCVar15;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    pCVar9 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    pCVar10 = (pCVar9->base).vtable._uc;
    pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (&(this_ptr->base).base.model,&CStack_24,0);
    iVar13 = (*(pCVar10->_uc).attractActorToward)(pCVar9,(CDemonActor *)this_ptr,pCVar14);
    if (iVar13 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_005573f5:
      iVar13 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_005573f5;
      if ((this_ptr->base).player_control.action_states[3] == 0) goto LAB_00557408;
      iVar13 = 0xf;
    }
    in_stack_ffffff90 = 1.4013e-45;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar13,1);
  }
LAB_00557408:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&(this_ptr->base).inventory);
  pCVar8 = this_ptr->weapon_actor;
  if (pCVar8 != (CDemonActor *)0x0) {
    (*((pCVar8->vtable)._ub)->process)(pCVar8,delta_time);
  }
  core_scat_cpp_CScat_FUN_00558060(this_ptr);
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).getGrabber)((CCharacter *)this_ptr);
  core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
            (&(this_ptr->base).base.model.motion_controller,0xc);
  core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
            (&(this_ptr->base).base.model.motion_controller,0xd);
  core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
            (&(this_ptr->base).base.model.motion_controller,4);
  core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
            (&(this_ptr->base).base.model.motion_controller,5);
  core_scat_cpp_CScat_FUN_00558720(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_scat_cpp_CScat_FUN_005582c0(this_ptr);
  iVar13 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
  if ((iVar13 == 0) &&
     (iVar13 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                         ((CCharacter *)this_ptr), iVar13 == 0)) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar20 = this_ptr->head_blend_weight;
    iVar13 = INT_0310615c;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&this_ptr->head_euler_angles,&local_5c);
    source_quaternions = &CStack_6c;
    CStack_6c.w = local_5c.w;
    puVar18 = (uint *)((int)&CStack_6c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    puVar17 = (uint *)((int)&local_5c + (uint)bVar19 * -8 + (uint)bVar19 * -8 + 8);
    *(uint *)((int)&CStack_6c + (uint)bVar19 * -8 + 4) =
         *(uint *)((int)&local_5c + (uint)bVar19 * -8 + 4);
    *puVar18 = *puVar17;
    puVar18[(uint)bVar19 * -2 + 1] = puVar17[(uint)bVar19 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (unaff_ESI,source_quaternions,fVar20,iVar13,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_ffffff90);
  core_scat_cpp_CScat_FUN_00558fd0(this_ptr);
switchD_00557686_caseD_5:
  return;
}
