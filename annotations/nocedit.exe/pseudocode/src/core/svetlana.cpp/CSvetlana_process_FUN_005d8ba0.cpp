// Name: core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0
// Address: 005d8ba0
// Address Range: [[005d8ba0, 005d9256]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_005d8ba0(CSvetlana *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_005d8ba0(CSvetlana *this_ptr,float delta_time)

{
  UOrientationVector *euler;
  CLocation *position;
  CDeformableModelInstance *model_ptr;
  CDemonActor *pCVar1;
  CCharacter *this_ptr_00;
  bool bVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  CVector3f *pCVar6;
  uint uVar7;
  int iVar8;
  CDeformableModelInstance *unaff_EDI;
  byte bVar9;
  float afStackY_1860 [1519];
  float fVar10;
  code *blend_callback;
  float in_stack_ffffff78;
  CQuaternion4f CStack_84;
  byte local_74 [24];
  CVector3f local_5c;
  CVector3f local_50;
  float local_44;
  float local_40;
  float local_3c;
  CVector3f local_38;
  int local_24;
  float local_20;
  float local_18;
  CCharacter_full_vtable *local_14;
  
  bVar9 = 0;
  if (((this_ptr->base).base.hit_points < (float)100) &&
     (fVar10 = (this_ptr->base).base.hit_points + delta_time,
     (this_ptr->base).base.hit_points = fVar10, (float)100 < fVar10)) {
    (this_ptr->base).base.hit_points = 100.0;
  }
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if ((iVar4 == 0) || ((this_ptr->base).ai_task == 4)) {
switchD_005d8f77_caseD_9:
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042ea40((CCharacter *)this_ptr,delta_time);
  fVar10 = (this_ptr->base).unk1 - delta_time;
  fVar3 = (float)12.566370614;
  (this_ptr->base).unk1 = fVar10;
  (this_ptr->base).base.turn_speed = delta_time * fVar3;
  if (fVar10 < 0.0) {
    (this_ptr->base).unk1 = 0.0;
  }
  pCVar6 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar6->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_svetlana_cpp_CSvetlana_FUN_005d9970(this_ptr);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar4 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    if ((this_ptr->base).control_type == 2) {
      core_svetlana_cpp_CSvetlana_FUN_005d9260(this_ptr);
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    switch(pSVar5->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar4 = 0;
        if (this_ptr->unk1 != 0) {
          iVar4 = 10;
        }
        if ((this_ptr->base).action_bindings.walk_key != 0) {
          if ((this_ptr->base).action_bindings.run_key == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
        }
        if ((this_ptr->base).action_bindings.backup_key != 0) {
          iVar4 = 3;
        }
        if ((this_ptr->base).action_bindings.draw_key != 0) {
          iVar4 = this_ptr->unk1;
          (this_ptr->base).action_bindings.draw_key = 0;
          uVar7 = (uint)(iVar4 == 0);
          this_ptr->unk1 = uVar7;
          if (uVar7 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = 10;
          }
        }
        if ((this_ptr->base).action_bindings.fire_key != 0) {
          bVar2 = true;
          if ((this_ptr->unk1 == 0) && ((this_ptr->base).control_type != 2)) {
            iVar8 = core_hero_cpp_CHero_FUN_004f2af0(&this_ptr->base);
            bVar2 = false;
            if (iVar8 != 0) goto LAB_005d9011;
            local_24 = core_hero_cpp_CHero_FUN_004f2d70(&this_ptr->base);
            if ((local_24 != 0) && (local_24 != 1)) {
              core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
            }
            if ((local_24 != 0) ||
               (iVar8 = core_hero_cpp_CHero_FUN_004f2c40(&this_ptr->base), iVar8 != 0))
            goto LAB_005d9011;
            iVar8 = core_hero_cpp_CHero_FUN_004f2f50(&this_ptr->base);
            if (iVar8 != 0) {
              core_hero_cpp_CHero_FUN_004f30f0(&this_ptr->base);
              goto LAB_005d9011;
            }
          }
          else {
LAB_005d9011:
            if (!bVar2) goto LAB_005d9032;
          }
          iVar4 = this_ptr->unk2;
          (this_ptr->base).action_bindings.fire_key = 0;
          if (iVar4 == 0) {
            iVar4 = 0xf;
          }
          else {
            iVar4 = 0xe;
          }
        }
LAB_005d9032:
        (this_ptr->base).base.turn_angle_accumulator =
             *(float *)((this_ptr->base).unk2 + 4) * (this_ptr->base).base.turn_speed;
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(this_ptr->base).base.model.motion_controller);
        if (iVar4 != pSVar5->state_index) goto LAB_005d8cdd;
      }
      break;
    case 9:
      goto switchD_005d8f77_caseD_9;
    }
  }
  else {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if ((pSVar5->state_index != 0x1a) && (pSVar5->state_index != 0x1b)) {
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      pCVar6->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    }
    uVar7 = (this_ptr->base).base.is_walking;
    if (uVar7 < 2) {
      if (uVar7 == 1) {
        iVar4 = 1;
      }
      else {
LAB_005d8f37:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar7) {
        if (uVar7 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto switchD_005d8f77_caseD_8;
        }
        goto LAB_005d8f37;
      }
      iVar4 = 2;
    }
LAB_005d8cdd:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar4,1);
  }
switchD_005d8f77_caseD_8:
  pCVar1 = (this_ptr->base).base.grabbed_by;
  if (pCVar1 == (CDemonActor *)0x0) {
    local_5c.x = (this_ptr->base).base.model.accumulated_root_motion.x;
    local_5c.y = (this_ptr->base).base.model.accumulated_root_motion.y;
    local_5c.z = (this_ptr->base).base.model.accumulated_root_motion.z;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if (pSVar5->state_index != 0x1a) {
      (this_ptr->base).base.velocity.y =
           (this_ptr->base).base.velocity.y - delta_time * (float)32;
    }
    local_44 = (this_ptr->base).base.velocity.x * delta_time;
    local_40 = (this_ptr->base).base.velocity.y * delta_time;
    local_3c = delta_time * (this_ptr->base).base.velocity.z;
    local_74._0_4_ = local_44 + (this_ptr->base).base.position_delta.x;
    local_74._4_4_ = local_40 + (this_ptr->base).base.position_delta.y;
    local_5c.x = local_5c.x + (float)local_74._0_4_;
    local_74._8_4_ = local_3c + (this_ptr->base).base.position_delta.z;
    local_5c.y = local_5c.y + (float)local_74._4_4_;
    local_5c.z = local_5c.z + (float)local_74._8_4_;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    iVar4 = pSVar5->state_index;
    if ((((iVar4 != 0x17) && (iVar4 != 0x18)) && (iVar4 != 0x19)) &&
       (((iVar4 != 0x25 && (iVar4 != 0x26)) && ((iVar4 != 0x27 && (iVar4 != 0x28)))))) {
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_5c);
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if (pSVar5->state_index == 0x1a) {
      (this_ptr->base).base.base.location.position.y =
           delta_time * (float)3 + (this_ptr->base).base.base.location.position.y;
    }
    goto LAB_005d8e27;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,(CVector3f *)(local_74 + 0xc),
                        &(pCVar1->location).position);
    pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_50,pCVar6);
    local_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y);
    fVar10 = (float)local_14;
    if ((float)local_14 < (float)-1.57079632675) {
      fVar10 = (float)local_14 + 3.141593f;
    }
    if ((float)1.57079632675 < fVar10) {
      fVar10 = fVar10 + -3.141593f;
    }
    local_18 = delta_time * (float)3.1415926535000001;
    local_20 = -local_18;
    if (fVar10 < local_20) {
      fVar10 = local_20;
    }
    if (local_18 < fVar10) {
      fVar10 = local_18;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fVar10;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  }
  this_ptr_00 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  local_14 = (this_ptr_00->base).vtable._uc;
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_38,0);
  iVar4 = (*(local_14->_uc).attractActorToward)(this_ptr_00,(CDemonActor *)this_ptr,pCVar6);
  if (iVar4 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_005d8e14:
    iVar4 = 0;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_005d8e14;
    if ((this_ptr->base).action_bindings.fire_key == 0) goto LAB_005d8e27;
    iVar4 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,iVar4,1);
LAB_005d8e27:
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  iVar4 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (iVar4 == 0) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar10 = *(float *)(this_ptr->unk6 + 0xc);
    iVar4 = INT_03f6cb90;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CVector3f *)this_ptr->unk6,(CQuaternion4f *)local_74);
    CStack_84.w = (float)local_74._0_4_;
    *(uint *)(local_74 + (uint)bVar9 * -8 + -0xc) =
         *(uint *)(local_74 + (uint)bVar9 * -8 + 4);
    *(uint *)(local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) =
         *(uint *)(local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *(uint *)
     ((int)(local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) + ((uint)bVar9 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (unaff_EDI,&CStack_84,fVar10,iVar4,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_ffffff78);
  model_ptr = &(this_ptr->base).base.model;
  euler = &(this_ptr->base).base.base.orient;
  position = &(this_ptr->base).base.base.location;
  core_cloth_cpp_CCloth_process_FUN_0043ab80
            (&this_ptr->cape_cloth,&position->position,&euler->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,model_ptr);
  core_cloth_cpp_CCloth_process_FUN_0043ab80
            (&this_ptr->hair_cloth,&position->position,&euler->vec,delta_time,
             (this_ptr->base).base.closest_distance_threshold,model_ptr);
  return;
}
