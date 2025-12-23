// Name: core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0
// Address: 005d8ba0
// Address Range: [[005d8ba0, 005d9256]]
// Convention: __cdecl
// Signature: void core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0(CSvetlana * this_ptr)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_005d8ba0(CSvetlana *this_ptr)

{
  CDemonActor *pCVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  CVector3f *pCVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float in_stack_00000008;
  CSvetlana *apCStackY_1870 [1516];
  CSvetlana *pCStack_bc;
  int in_stack_ffffff58;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  SCollisionInfo *in_stack_ffffff74;
  float afStack_7c [2];
  CVector3f local_74;
  CVector3f local_68;
  float local_5c;
  float fStack_4c;
  float fStack_48;
  CVector3f local_44;
  float fStack_30;
  float fStack_28;
  float local_24;
  CDemonActor_vtable *local_20;
  int iStack_1c;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  
  bVar12 = 0;
  if (((this_ptr->base_hero).base_character.hit_points < (float)100) &&
     (fVar7 = (this_ptr->base_hero).base_character.hit_points + in_stack_00000008,
     (this_ptr->base_hero).base_character.hit_points = fVar7, (float)100 < fVar7)) {
    (this_ptr->base_hero).base_character.hit_points = 100.0;
  }
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if ((iVar4 == 0) || ((this_ptr->base_hero).ai_task == 4)) {
switchD_005d8f77_caseD_9:
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042ea40((CCharacter *)this_ptr);
  fVar7 = (float)(this_ptr->base_hero).field1_0xbe24 - in_stack_00000008;
  fVar3 = (float)12.566370614;
  (this_ptr->base_hero).field1_0xbe24 = (int)fVar7;
  *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x2c) = in_stack_00000008 * fVar3;
  if (fVar7 < 0.0) {
    (this_ptr->base_hero).field1_0xbe24 = 0;
  }
  pCVar6 = &(this_ptr->base_hero).base_character.model.accumulated_root_motion;
  (this_ptr->base_hero).base_character.model.accumulated_root_motion.z = 0.0;
  pCStack_bc = this_ptr;
  (this_ptr->base_hero).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_hero).base_character.model.accumulated_root_motion.z;
  pCVar6->x = (this_ptr->base_hero).base_character.model.accumulated_root_motion.y;
  core_svetlana_cpp_MotionControllerAdvance_ParentBones_FUN_005d9970();
  *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x28) =
       (this_ptr->base_hero).base_character.model.accumulated_root_motion.z;
  pCStack_bc = (CSvetlana *)0x5d8c83;
  iVar4 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar4 == 0) {
    if ((this_ptr->base_hero).control_type == 2) {
      core_svetlana_cpp_FUN_005d9260();
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base_hero).base_character.model.motion_controller);
    switch(pSVar5->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)((this_ptr->base_hero).base_character.field2_0x240c + 4) != 0) {
        iVar4 = 0;
        if (*(int *)this_ptr->field1_0x1fbd4 != 0) {
          iVar4 = 10;
        }
        if (*(int *)(this_ptr->base_hero).field3_0xbe2c != 0) {
          if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 8) == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
        }
        if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 4) != 0) {
          iVar4 = 3;
        }
        if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 0x18) != 0) {
          iVar4 = *(int *)this_ptr->field1_0x1fbd4;
          (this_ptr->base_hero).field3_0xbe2c[0x18] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0x19] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0x1a] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0x1b] = '\0';
          uVar8 = (uint)(iVar4 == 0);
          *(uint *)this_ptr->field1_0x1fbd4 = uVar8;
          if (uVar8 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = 10;
          }
        }
        if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 0xc) != 0) {
          bVar2 = true;
          if ((*(int *)this_ptr->field1_0x1fbd4 == 0) && ((this_ptr->base_hero).control_type != 2))
          {
            iVar9 = core_hero_cpp_FUN_004f2af0();
            bVar2 = false;
            if (iVar9 != 0) goto LAB_005d9011;
            fStack_28 = (float)core_hero_cpp_FUN_004f2d70();
            if ((fStack_28 != 0.0) && (fStack_28 != 1.4013e-45)) {
              core_hero_cpp_FUN_004f2ed0();
            }
            if ((local_24 != 0.0) || (iVar9 = core_hero_cpp_FUN_004f2c40(), iVar9 != 0))
            goto LAB_005d9011;
            iVar9 = core_hero_cpp_FUN_004f2f50();
            if (iVar9 != 0) {
              core_hero_cpp_FUN_004f30f0();
              goto LAB_005d9011;
            }
          }
          else {
LAB_005d9011:
            if (!bVar2) goto LAB_005d9032;
          }
          iVar4 = *(int *)(this_ptr->field1_0x1fbd4 + 4);
          (this_ptr->base_hero).field3_0xbe2c[0xc] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0xd] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0xe] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0xf] = '\0';
          if (iVar4 == 0) {
            iVar4 = 0xf;
          }
          else {
            iVar4 = 0xe;
          }
        }
LAB_005d9032:
        *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0xc) =
             *(float *)((this_ptr->base_hero).field3_0xbe2c + 0x24) *
             *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x2c);
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(this_ptr->base_hero).base_character.model.motion_controller);
        if (iVar4 != pSVar5->state_index) {
          in_stack_ffffff58 = 1;
          goto LAB_005d8cdd;
        }
      }
      break;
    case 9:
      goto switchD_005d8f77_caseD_9;
    }
  }
  else {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base_hero).base_character.model.motion_controller);
    if ((pSVar5->state_index != 0x1a) && (pSVar5->state_index != 0x1b)) {
      (this_ptr->base_hero).base_character.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base_hero).base_character.model.accumulated_root_motion.y =
           (this_ptr->base_hero).base_character.model.accumulated_root_motion.z;
      pCVar6->x = (this_ptr->base_hero).base_character.model.accumulated_root_motion.y;
    }
    uVar8 = *(uint *)((this_ptr->base_hero).base_character.field11_0x25a0 + 0x10);
    if (uVar8 < 2) {
      if (uVar8 != 1) goto LAB_005d8f37;
LAB_005d8cdc:
      iVar4 = 1;
    }
    else {
      if (uVar8 < 3) goto LAB_005d8cdc;
      if (uVar8 == 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base_hero).base_character.model.motion_controller,0,1);
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
        goto switchD_005d8f77_caseD_8;
      }
LAB_005d8f37:
      iVar4 = 1;
    }
LAB_005d8cdd:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_hero).base_character.model.motion_controller,iVar4,in_stack_ffffff58
              );
  }
switchD_005d8f77_caseD_8:
  pCVar1 = (this_ptr->base_hero).base_character.grabbed_by;
  if (pCVar1 == (CDemonActor *)0x0) {
    local_68.x = (this_ptr->base_hero).base_character.model.accumulated_root_motion.x;
    local_68.y = (this_ptr->base_hero).base_character.model.accumulated_root_motion.y;
    local_68.z = (this_ptr->base_hero).base_character.model.accumulated_root_motion.z;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base_hero).base_character.model.motion_controller);
    if (pSVar5->state_index != 0x1a) {
      *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x20) =
           *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x20) -
           in_stack_00000008 * (float)32;
    }
    fStack_4c = *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x1c) *
                in_stack_00000008;
    fStack_48 = *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x20) *
                in_stack_00000008;
    local_44.x = in_stack_00000008 *
                 *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x24);
    afStack_7c[0] =
         fStack_4c + *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x10);
    afStack_7c[1] =
         fStack_48 + *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x14);
    local_68.y = local_68.y + afStack_7c[0];
    local_74.x = local_44.x + *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x18);
    local_68.z = local_68.z + afStack_7c[1];
    local_5c = local_5c + local_74.x;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base_hero).base_character.model.motion_controller);
    iVar4 = pSVar5->state_index;
    if ((((iVar4 != 0x17) && (iVar4 != 0x18)) && (iVar4 != 0x19)) &&
       (((iVar4 != 0x25 && (iVar4 != 0x26)) && ((iVar4 != 0x27 && (iVar4 != 0x28)))))) {
      core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base_hero).base_character.model.motion_controller);
    if (pSVar5->state_index == 0x1a) {
      (this_ptr->base_hero).base_character.base_actor.location.position.y =
           in_stack_00000008 * (float)3 +
           (this_ptr->base_hero).base_character.base_actor.location.position.y;
    }
    goto LAB_005d8e27;
  }
  if ((this_ptr->base_hero).base_character.grabbed_type == 0) {
    pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,&local_74,&(pCVar1->location).position);
    pCStack_bc = (CSvetlana *)0x5d8d1d;
    pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_68,pCVar6);
    local_24 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y);
    fVar7 = local_24;
    if (local_24 < (float)-1.57079632675) {
      fVar7 = local_24 + 3.141593f;
    }
    if ((float)1.57079632675 < fVar7) {
      fVar7 = fVar7 + -3.141593f;
    }
    fStack_28 = in_stack_00000008 * (float)3.1415926535000001;
    fStack_30 = -fStack_28;
    if (fVar7 < fStack_30) {
      fVar7 = fStack_30;
    }
    if (fStack_28 < fVar7) {
      fVar7 = fStack_28;
    }
    (this_ptr->base_hero).base_character.base_actor.orient.bank =
         (this_ptr->base_hero).base_character.base_actor.orient.bank + fVar7;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  }
  pCVar1 = (this_ptr->base_hero).base_character.grabbed_by;
  local_20 = pCVar1->vtable;
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base_hero).base_character.model,&local_44,0);
  fVar7 = (**(code **)(iStack_1c + 0x124))(pCVar1,(float)this_ptr,pCVar6);
  if (fVar7 == 0.0) {
    (this_ptr->base_hero).base_character.grabbed_by = (CDemonActor *)0x0;
LAB_005d8e14:
    iVar4 = 0;
  }
  else {
    if ((this_ptr->base_hero).base_character.grabbed_by == (CDemonActor *)0x0) goto LAB_005d8e14;
    if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 0xc) == 0) goto LAB_005d8e27;
    iVar4 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base_hero).base_character.model.motion_controller,iVar4,1);
LAB_005d8e27:
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  local_14 = &(this_ptr->base_hero).base_character.model;
  blend_callback = (CDeformableModel_MotionBlendWeightFunc *)0x5d8e43;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(local_14);
  iVar4 = (*(this_ptr->base_hero).base_character.base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)this_ptr,in_stack_ffffff74);
  if (iVar4 == 0) {
    bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar7 = (float)DAT_03f6cb90;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(this_ptr->field1_0x1fbd4 + 0x7fcec),
               *(CVector3f **)(this_ptr->field1_0x1fbd4 + 0x7fcf8));
    puVar11 = (uint *)((int)&local_74 + ((uint)bVar12 * -2 + (uint)bVar12 * -2 + -6) * 4);
    puVar10 = (uint *)((int)&local_74 + ((uint)bVar12 * -2 + (uint)bVar12 * -2 + -1) * 4);
    *(float *)((int)&local_74 + ((uint)bVar12 * -2 + -7) * 4) = afStack_7c[(uint)bVar12 * -2];
    *puVar11 = *puVar10;
    puVar11[(uint)bVar12 * -2 + 1] = puVar10[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (local_18,(CQuaternion4f *)&stack0xffffff70,fVar7,(int)bone_index,blend_callback);
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  core_cloth_cpp_FUN_0043ab80();
  core_cloth_cpp_FUN_0043ab80();
  return;
}
