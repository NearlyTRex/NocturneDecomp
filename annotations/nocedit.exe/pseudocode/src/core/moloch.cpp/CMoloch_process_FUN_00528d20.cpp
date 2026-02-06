// Name: core_moloch.cpp_CMoloch_process_FUN_00528d20
// Address: 00528d20
// Address Range: [[00528d20, 005293a1]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_process_FUN_00528d20(CMoloch *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_process_FUN_00528d20(CMoloch *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  char *this_ptr_00;
  CDemonActor *pCVar3;
  CGame *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  SMotion *pSVar7;
  char *model_name;
  uint uVar8;
  float fVar9;
  SBoneTransformData SStack_1b0c;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float fStack_20;
  char *local_1c;
  float local_18;
  CCharacter_full_vtable *local_14;
  
  if ((this_ptr->base).ai_task == 4) {
    return;
  }
  iVar5 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar5 == 0) {
    return;
  }
  fVar9 = (float)(this_ptr->base).unk1 - delta_time;
  (this_ptr->base).unk1 = (uint)fVar9;
  if (fVar9 < 0.0) {
    (this_ptr->base).unk1 = 0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  while (pCVar4 = g_CGamePtr, 0.0 < delta_time) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              (&(this_ptr->base).base.model.motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  fVar9 = (float)12.566370614;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar9;
  if (pCVar4->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  iVar5 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar5 == 0) {
    if ((this_ptr->base).control_type == 2) {
      core_moloch_cpp_CMoloch_FUN_005293b0(this_ptr);
    }
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    uVar8 = pSVar7->state_index;
    if ((((uVar8 == 0) || (uVar8 < 2)) || (uVar8 == 2)) &&
       ((this_ptr->base).base.field3_0x2410 != 0)) {
      uVar8 = (uint)((this_ptr->base).action_bindings.walk_key != 0);
      if ((this_ptr->base).action_bindings.backup_key != 0) {
        uVar8 = 2;
      }
      if ((this_ptr->base).action_bindings.draw_key != 0) {
        if (this_ptr->morphing == 0) {
          core_moloch_cpp_CMoloch_FUN_00529900(this_ptr);
        }
        (this_ptr->base).action_bindings.draw_key = 0;
      }
      (this_ptr->base).base.turn_angle_accumulator =
           *(float *)((this_ptr->base).unk2 + 4) * (this_ptr->base).base.turn_speed;
      pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller);
      if (uVar8 != pSVar7->state_index) goto LAB_00528e32;
    }
  }
  else {
    uVar8 = (this_ptr->base).base.field22_0x25b0;
    if (uVar8 < 2) {
      if (uVar8 == 1) goto LAB_00528e31;
LAB_0052903e:
      uVar8 = 0;
    }
    else {
      if (2 < uVar8) {
        if (uVar8 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_00528e3a;
        }
        goto LAB_0052903e;
      }
LAB_00528e31:
      uVar8 = 1;
    }
LAB_00528e32:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,uVar8,1);
  }
LAB_00528e3a:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_38 = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_34 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar6 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_30 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar2 = &(this_ptr->base).base.field6_0x241c;
    SStack_1b0c.bone_world_matrices[99].m[2].z = pCVar6->x + pCVar2->x;
    local_70 = (this_ptr->base).base.model.accumulated_root_motion.y +
               (this_ptr->base).base.field6_0x241c.y;
    local_68 = SStack_1b0c.bone_world_matrices[99].m[2].z + local_38;
    local_6c = (this_ptr->base).base.model.accumulated_root_motion.z +
               (this_ptr->base).base.field6_0x241c.z;
    local_64 = local_70 + local_34;
    local_60 = local_6c + local_30;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar6->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar2->x = (this_ptr->base).base.field6_0x241c.y;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_5c,&(pCVar3->location).position);
      pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_50,pCVar6);
      local_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y)
      ;
      fVar9 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        fVar9 = (float)local_14 + 3.141593f;
      }
      if ((float)1.57079632675 < fVar9) {
        fVar9 = fVar9 + -3.141593f;
      }
      local_18 = delta_time * (float)3.1415926535000001;
      local_1c = (char *)-local_18;
      if (fVar9 < (float)local_1c) {
        fVar9 = (float)local_1c;
      }
      if (local_18 < fVar9) {
        fVar9 = local_18;
      }
      (this_ptr->base).base.base.orient.bank = (this_ptr->base).base.base.orient.bank + fVar9;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    local_14 = (((this_ptr->base).base.grabbed_by)->vtable)._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
              (&(this_ptr->base).base.model,&local_44,0);
    iVar5 = (*(local_14->_uc).cfunc15)();
    if (iVar5 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
    }
    else if (((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) &&
            ((this_ptr->base).action_bindings.fire_key == 0)) goto LAB_00528f8e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
  }
LAB_00528f8e:
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  if (this_ptr->morphing == 0) {
    if (this_ptr->in_human_form == 0) {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->demon_to_human_condition);
      if (iVar5 != 0) {
        core_moloch_cpp_CMoloch_FUN_00529900(this_ptr);
        return;
      }
    }
    else {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->human_to_demon_condition);
      if (iVar5 != 0) {
        core_moloch_cpp_CMoloch_FUN_00529900(this_ptr);
        return;
      }
    }
  }
  else {
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar1->motion_controller);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
              ((CMotionController *)this_ptr->unk1,pSVar7->motion_name,
               (float)(this_ptr->base).base.model.motion_controller.current_frame_number);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)this_ptr->unk1);
    fVar9 = this_ptr->morph_timer + delta_time;
    this_ptr->morph_timer = fVar9;
    if (2.0f < fVar9) {
      if (this_ptr->in_human_form == 0) {
        model_name = "moloch_h.dfm";
        this_ptr->in_human_form = 1;
        local_1c = "moloch_d.dfm";
      }
      else {
        model_name = "moloch_d.dfm";
        this_ptr->in_human_form = 0;
        local_1c = "moloch_h.dfm";
      }
      this_ptr_00 = this_ptr->unk1;
      this_ptr->morphing = 0;
      this_ptr->morph_timer = 0.0;
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
                ((CDeformableModelInstance *)this_ptr_00,&SStack_1b0c);
      pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         ((CMotionController *)this_ptr_00);
      pCVar1 = &(this_ptr->base).base.model;
      fStack_20 = *(float *)(this_ptr->unk1 + 8);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,model_name);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(pCVar1);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&pCVar1->motion_controller,pSVar7->motion_name,fStack_20);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                ((CDeformableModelInstance *)this_ptr_00,local_1c);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)this_ptr_00);
      core_morph_cpp_FUN_0052b430();
      core_morph_cpp_FUN_0052b430();
      core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)this_ptr->unk2);
      return;
    }
  }
  return;
}
