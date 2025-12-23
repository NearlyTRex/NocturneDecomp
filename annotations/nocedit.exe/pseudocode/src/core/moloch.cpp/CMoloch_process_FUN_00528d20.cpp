// Name: core_moloch.cpp_CMoloch_process_FUN_00528d20
// Address: 00528d20
// Address Range: [[00528d20, 005293a1]]
// Convention: __cdecl
// Signature: void core_moloch.cpp_CMoloch_process_FUN_00528d20(CMoloch * this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_process_FUN_00528d20(CMoloch *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  char *this_ptr_00;
  CDemonActor *pCVar2;
  CHero *pCVar3;
  CGame *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  float fVar7;
  SMotion *pSVar8;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  char *model_name;
  float in_stack_00000008;
  char *in_stack_0000000c;
  uint uVar9;
  SCollisionInfo *in_stack_ffffe4f4;
  CVector3f local_5c [2];
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  float fStack_20;
  float local_1c;
  float local_18;
  CDemonActor_vtable *local_14;
  
  if ((this_ptr->base_hero).ai_task == 4) {
    return;
  }
  iVar5 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar5 == 0) {
    return;
  }
  fVar7 = (float)(this_ptr->base_hero).field1_0xbe24 - in_stack_00000008;
  (this_ptr->base_hero).field1_0xbe24 = (int)fVar7;
  if (fVar7 < 0.0) {
    (this_ptr->base_hero).field1_0xbe24 = 0;
  }
  (this_ptr->base_hero).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_hero).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_hero).base_character.model.accumulated_root_motion.z;
  (this_ptr->base_hero).base_character.model.accumulated_root_motion.x =
       (this_ptr->base_hero).base_character.model.accumulated_root_motion.y;
  fVar7 = in_stack_00000008;
  while (pCVar4 = g_CGamePtr, 0.0 < fVar7) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610
              (&(this_ptr->base_hero).base_character.model.motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
  }
  fVar7 = (float)12.566370614;
  *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x28) =
       (this_ptr->base_hero).base_character.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x2c) = in_stack_00000008 * fVar7;
  if (pCVar4->letterbox_mode != 0) {
    *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x2c) =
         *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x2c) *
         (float)0.33333333333333298;
  }
  iVar5 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar5 == 0) {
    if ((this_ptr->base_hero).control_type == 2) {
      core_moloch_cpp_FUN_005293b0();
    }
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base_hero).base_character.model.motion_controller);
    uVar9 = pSVar8->state_index;
    if ((((uVar9 == 0) || (uVar9 < 2)) || (uVar9 == 2)) &&
       (*(int *)((this_ptr->base_hero).base_character.field2_0x240c + 4) != 0)) {
      uVar9 = (uint)(*(int *)(this_ptr->base_hero).field3_0xbe2c != 0);
      if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 4) != 0) {
        uVar9 = 2;
      }
      if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 0x18) != 0) {
        if (this_ptr->morphing == 0) {
          core_moloch_cpp_PlaySoundAbtMolochMorphing_FUN_00529900();
        }
        (this_ptr->base_hero).field3_0xbe2c[0x18] = '\0';
        (this_ptr->base_hero).field3_0xbe2c[0x19] = '\0';
        (this_ptr->base_hero).field3_0xbe2c[0x1a] = '\0';
        (this_ptr->base_hero).field3_0xbe2c[0x1b] = '\0';
      }
      *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0xc) =
           *(float *)((this_ptr->base_hero).field3_0xbe2c + 0x24) *
           *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x2c);
      pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base_hero).base_character.model.motion_controller);
      if (uVar9 != pSVar8->state_index) goto LAB_00528e32;
    }
  }
  else {
    uVar9 = *(uint *)((this_ptr->base_hero).base_character.field11_0x25a0 + 0x10);
    if (uVar9 < 2) {
      if (uVar9 == 1) goto LAB_00528e31;
LAB_0052903e:
      uVar9 = 0;
    }
    else {
      if (2 < uVar9) {
        if (uVar9 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base_hero).base_character.model.motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_00528e3a;
        }
        goto LAB_0052903e;
      }
LAB_00528e31:
      uVar9 = 1;
    }
LAB_00528e32:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_hero).base_character.model.motion_controller,uVar9,1);
  }
LAB_00528e3a:
  pCVar2 = (this_ptr->base_hero).base_character.grabbed_by;
  if (pCVar2 == (CDemonActor *)0x0) {
    *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x20) =
         *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_38 = *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_34 = *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x20) *
               in_stack_00000008;
    local_30 = in_stack_00000008 *
               *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x24);
    (this_ptr->base_hero).base_character.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base_hero).base_character.model.accumulated_root_motion.y =
         (this_ptr->base_hero).base_character.model.accumulated_root_motion.z;
    (this_ptr->base_hero).base_character.model.accumulated_root_motion.x =
         (this_ptr->base_hero).base_character.model.accumulated_root_motion.y;
    pCVar3 = &this_ptr->base_hero;
    (pCVar3->base_character).field2_0x240c[0x18] = '\0';
    (pCVar3->base_character).field2_0x240c[0x19] = '\0';
    (pCVar3->base_character).field2_0x240c[0x1a] = '\0';
    (pCVar3->base_character).field2_0x240c[0x1b] = '\0';
    *(uint *)((this_ptr->base_hero).base_character.field2_0x240c + 0x14) =
         *(uint *)((this_ptr->base_hero).base_character.field2_0x240c + 0x18);
    *(uint *)((this_ptr->base_hero).base_character.field2_0x240c + 0x10) =
         *(uint *)((this_ptr->base_hero).base_character.field2_0x240c + 0x14);
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  else {
    if ((this_ptr->base_hero).base_character.grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,local_5c,&(pCVar2->location).position);
      pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(local_5c,pCVar6);
      local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y);
      fVar7 = local_18;
      if (local_18 < (float)-1.57079632675) {
        fVar7 = local_18 + 3.141593f;
      }
      if ((float)1.57079632675 < fVar7) {
        fVar7 = fVar7 + -3.141593f;
      }
      local_1c = in_stack_00000008 * (float)3.1415926535000001;
      fStack_20 = -local_1c;
      if (fVar7 < fStack_20) {
        fVar7 = fStack_20;
      }
      if (local_1c < fVar7) {
        fVar7 = local_1c;
      }
      (this_ptr->base_hero).base_character.base_actor.orient.bank =
           (this_ptr->base_hero).base_character.base_actor.orient.bank + fVar7;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    pCVar2 = (this_ptr->base_hero).base_character.grabbed_by;
    local_14 = pCVar2->vtable;
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base_hero).base_character.model,&local_44,0);
    fVar7 = (**(code **)(unaff_EBP + 0x124))(pCVar2,(float)this_ptr,pCVar6);
    if (fVar7 == 0.0) {
      (this_ptr->base_hero).base_character.grabbed_by = (CDemonActor *)0x0;
    }
    else if (((this_ptr->base_hero).base_character.grabbed_by != (CDemonActor *)0x0) &&
            (*(int *)((this_ptr->base_hero).field3_0xbe2c + 0xc) == 0)) goto LAB_00528f8e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_hero).base_character.model.motion_controller,0,1);
  }
LAB_00528f8e:
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  pCVar1 = &(this_ptr->base_hero).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  (*(this_ptr->base_hero).base_character.base_actor.vtable[1].hasCollision)
            ((CDemonActor *)this_ptr,in_stack_ffffe4f4);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  if (this_ptr->morphing == 0) {
    if (this_ptr->in_human_form == 0) {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->field5_0x21e94 + 100);
      if (iVar5 != 0) {
        core_moloch_cpp_PlaySoundAbtMolochMorphing_FUN_00529900();
        return;
      }
    }
    else {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->field5_0x21e94);
      if (iVar5 != 0) {
        core_moloch_cpp_PlaySoundAbtMolochMorphing_FUN_00529900();
        return;
      }
    }
  }
  else {
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar1->motion_controller);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
              ((CMotionController *)this_ptr->field1_0x1fbd4,pSVar8->motion_name,
               (this_ptr->base_hero).base_character.model.motion_controller.current_frame_number);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)this_ptr->field1_0x1fbd4);
    fVar7 = this_ptr->morph_timer + in_stack_00000008;
    this_ptr->morph_timer = fVar7;
    if (2f < fVar7) {
      if (this_ptr->in_human_form == 0) {
        model_name = "moloch_h.dfm";
        this_ptr->in_human_form = 1;
      }
      else {
        model_name = "moloch_d.dfm";
        this_ptr->in_human_form = 0;
      }
      this_ptr_00 = this_ptr->field1_0x1fbd4;
      this_ptr->morphing = 0;
      this_ptr->morph_timer = 0.0;
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
                ((CDeformableModelInstance *)this_ptr_00,(SBoneTransformData *)&stack0xffffe500);
      pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         ((CMotionController *)this_ptr_00);
      pCVar1 = &(this_ptr->base_hero).base_character.model;
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,model_name);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(pCVar1);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&pCVar1->motion_controller,in_stack_0000000c,unaff_EBX);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                ((CDeformableModelInstance *)this_ptr_00,pSVar8->motion_name);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)this_ptr_00);
      core_morph_cpp_FUN_0052b430();
      core_morph_cpp_FUN_0052b430();
      core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)(this_ptr->field5_0x21e94 + 200));
      return;
    }
  }
  return;
}
