// Name: core_moloch.cpp_CMoloch_process_FUN_00528d20
// Address: 00528d20
// Address Range: [[00528d20, 005293a1]]
// Convention: __cdecl
// Signature: void core_moloch.cpp_CMoloch_process_FUN_00528d20(CMoloch * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_process_FUN_00528d20(CMoloch *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  char *this_ptr_00;
  CDemonActor *pCVar2;
  CHero *pCVar3;
  CGame *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  SMotion *pSVar7;
  char *pcVar8;
  uint uVar9;
  float fVar10;
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
  fVar10 = (float)(this_ptr->base).unk1 - delta_time;
  (this_ptr->base).unk1 = (int)fVar10;
  if (fVar10 < 0.0) {
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
  fVar10 = (float)12.566370614;
  *(float *)((this_ptr->base).base.unk1 + 0x28) =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  *(float *)((this_ptr->base).base.unk1 + 0x2c) = delta_time * fVar10;
  if (pCVar4->letterbox_mode != 0) {
    *(float *)((this_ptr->base).base.unk1 + 0x2c) =
         *(float *)((this_ptr->base).base.unk1 + 0x2c) * (float)0.33333333333333298;
  }
  iVar5 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar5 == 0) {
    if ((this_ptr->base).control_type == 2) {
      core_moloch_cpp_FUN_005293b0();
    }
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    uVar9 = pSVar7->state_index;
    if ((((uVar9 == 0) || (uVar9 < 2)) || (uVar9 == 2)) &&
       (*(int *)((this_ptr->base).base.unk1 + 4) != 0)) {
      uVar9 = (uint)(*(int *)(this_ptr->base).unk2 != 0);
      if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
        uVar9 = 2;
      }
      if (*(int *)((this_ptr->base).unk2 + 0x18) != 0) {
        if (this_ptr->morphing == 0) {
          core_moloch_cpp_PlaySoundAbtMolochMorphing_FUN_00529900();
        }
        (this_ptr->base).unk2[0x18] = '\0';
        (this_ptr->base).unk2[0x19] = '\0';
        (this_ptr->base).unk2[0x1a] = '\0';
        (this_ptr->base).unk2[0x1b] = '\0';
      }
      *(float *)((this_ptr->base).base.unk1 + 0xc) =
           *(float *)((this_ptr->base).unk2 + 0x24) * *(float *)((this_ptr->base).base.unk1 + 0x2c);
      pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller);
      if (uVar9 != pSVar7->state_index) goto LAB_00528e32;
    }
  }
  else {
    uVar9 = *(uint *)((this_ptr->base).base.unk2 + 0x10);
    if (uVar9 < 2) {
      if (uVar9 == 1) goto LAB_00528e31;
LAB_0052903e:
      uVar9 = 0;
    }
    else {
      if (2 < uVar9) {
        if (uVar9 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0,1);
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
              (&(this_ptr->base).base.model.motion_controller,uVar9,1);
  }
LAB_00528e3a:
  pCVar2 = (this_ptr->base).base.grabbed_by;
  if (pCVar2 == (CDemonActor *)0x0) {
    *(float *)((this_ptr->base).base.unk1 + 0x20) =
         *(float *)((this_ptr->base).base.unk1 + 0x20) - delta_time * (float)32;
    local_38 = *(float *)((this_ptr->base).base.unk1 + 0x1c) * delta_time;
    local_34 = *(float *)((this_ptr->base).base.unk1 + 0x20) * delta_time;
    pCVar6 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_30 = delta_time * *(float *)((this_ptr->base).base.unk1 + 0x24);
    pcVar8 = (this_ptr->base).base.unk1 + 0x10;
    SStack_1b0c.bone_world_matrices[99].m[2].z = pCVar6->x + *(float *)pcVar8;
    local_70 = (this_ptr->base).base.model.accumulated_root_motion.y +
               *(float *)((this_ptr->base).base.unk1 + 0x14);
    local_68 = SStack_1b0c.bone_world_matrices[99].m[2].z + local_38;
    local_6c = (this_ptr->base).base.model.accumulated_root_motion.z +
               *(float *)((this_ptr->base).base.unk1 + 0x18);
    local_64 = local_70 + local_34;
    local_60 = local_6c + local_30;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar6->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    pCVar3 = &this_ptr->base;
    (pCVar3->base).unk1[0x18] = '\0';
    (pCVar3->base).unk1[0x19] = '\0';
    (pCVar3->base).unk1[0x1a] = '\0';
    (pCVar3->base).unk1[0x1b] = '\0';
    *(uint *)((this_ptr->base).base.unk1 + 0x14) =
         *(uint *)((this_ptr->base).base.unk1 + 0x18);
    *(float *)pcVar8 = *(float *)((this_ptr->base).base.unk1 + 0x14);
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_5c,&(pCVar2->location).position);
      pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_50,pCVar6);
      local_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y)
      ;
      fVar10 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        fVar10 = (float)local_14 + 3.141593f;
      }
      if ((float)1.57079632675 < fVar10) {
        fVar10 = fVar10 + -3.141593f;
      }
      local_18 = delta_time * (float)3.1415926535000001;
      local_1c = (char *)-local_18;
      if (fVar10 < (float)local_1c) {
        fVar10 = (float)local_1c;
      }
      if (local_18 < fVar10) {
        fVar10 = local_18;
      }
      (this_ptr->base).base.base.orient.bank = (this_ptr->base).base.base.orient.bank + fVar10;
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
            (*(int *)((this_ptr->base).unk2 + 0xc) == 0)) goto LAB_00528f8e;
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
                        (g_CEventListPtr,this_ptr->unk2 + 100);
      if (iVar5 != 0) {
        core_moloch_cpp_PlaySoundAbtMolochMorphing_FUN_00529900();
        return;
      }
    }
    else {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->unk2);
      if (iVar5 != 0) {
        core_moloch_cpp_PlaySoundAbtMolochMorphing_FUN_00529900();
        return;
      }
    }
  }
  else {
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar1->motion_controller);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
              ((CMotionController *)this_ptr->unk1,pSVar7->motion_name,
               (this_ptr->base).base.model.motion_controller.current_frame_number);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
              ((CDeformableModelInstance *)this_ptr->unk1);
    fVar10 = this_ptr->morph_timer + delta_time;
    this_ptr->morph_timer = fVar10;
    if (2.0f < fVar10) {
      if (this_ptr->in_human_form == 0) {
        pcVar8 = "moloch_h.dfm";
        this_ptr->in_human_form = 1;
        local_1c = "moloch_d.dfm";
      }
      else {
        pcVar8 = "moloch_d.dfm";
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
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(pCVar1,pcVar8);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(pCVar1);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
                (&pCVar1->motion_controller,pSVar7->motion_name,fStack_20);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
                ((CDeformableModelInstance *)this_ptr_00,local_1c);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
                ((CDeformableModelInstance *)this_ptr_00);
      core_morph_cpp_FUN_0052b430();
      core_morph_cpp_FUN_0052b430();
      core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)(this_ptr->unk2 + 200));
      return;
    }
  }
  return;
}
