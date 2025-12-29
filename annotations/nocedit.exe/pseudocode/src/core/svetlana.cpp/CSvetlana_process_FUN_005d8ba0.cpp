// Name: core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0
// Address: 005d8ba0
// Address Range: [[005d8ba0, 005d9256]]
// Convention: __cdecl
// Signature: void core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0(CSvetlana * this_ptr)

#include "nocturne.h"

void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_005d8ba0(CSvetlana *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CDemonActor *pCVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  SMotion *pSVar6;
  CVector3f *pCVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  byte bVar11;
  int unaff_retaddr;
  float in_stack_00000008;
  int in_stack_00000014;
  CDeformableModelInstance *pCStack0000002c;
  CDeformableModelInstance *in_stack_00000048;
  CLocation *pCStack00000058;
  CDeformableModelInstance *apCStackY_1810 [5];
  float afStackY_17fc [504];
  CDeformableModelInstance *apCStackY_101c [5];
  float afStackY_1008 [986];
  int in_stack_ffffff94;
  SCollisionInfo *in_stack_ffffffb4;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffffc8;
  byte auStack_34 [8];
  CDeformableModelInstance *pCStack_2c;
  CVector3f CStack_28;
  float afStack_1c [3];
  
  bVar11 = 0;
  if (((this_ptr->base_hero).base_character.hit_points < (float)100) &&
     (fVar8 = (this_ptr->base_hero).base_character.hit_points + in_stack_00000008,
     (this_ptr->base_hero).base_character.hit_points = fVar8, (float)100 < fVar8)) {
    (this_ptr->base_hero).base_character.hit_points = 100.0;
  }
  iVar5 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if ((iVar5 == 0) || ((this_ptr->base_hero).ai_task == 4)) {
switchD_005d8f77_caseD_9:
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042ea40((CCharacter *)this_ptr);
  fVar8 = (float)(this_ptr->base_hero).field1_0xbe24 - in_stack_00000008;
  fVar4 = (float)12.566370614;
  (this_ptr->base_hero).field1_0xbe24 = (int)fVar8;
  *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x2c) = in_stack_00000008 * fVar4;
  if (fVar8 < 0.0) {
    (this_ptr->base_hero).field1_0xbe24 = 0;
  }
  pCVar7 = &(this_ptr->base_hero).base_character.model.accumulated_root_motion;
  (this_ptr->base_hero).base_character.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base_hero).base_character.model.accumulated_root_motion.y =
       (this_ptr->base_hero).base_character.model.accumulated_root_motion.z;
  pCVar7->x = (this_ptr->base_hero).base_character.model.accumulated_root_motion.y;
  core_svetlana_cpp_MotionControllerAdvance_ParentBones_FUN_005d9970();
  *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x28) =
       (this_ptr->base_hero).base_character.model.accumulated_root_motion.z;
  iVar5 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar5 == 0) {
    if ((this_ptr->base_hero).control_type == 2) {
      core_svetlana_cpp_FUN_005d9260();
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base_hero).base_character.model.motion_controller);
    switch(pSVar6->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)((this_ptr->base_hero).base_character.field2_0x240c + 4) != 0) {
        iVar5 = 0;
        if (*(int *)this_ptr->field1_0x1fbd4 != 0) {
          iVar5 = 10;
        }
        if (*(int *)(this_ptr->base_hero).field3_0xbe2c != 0) {
          if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 8) == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
        }
        if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 4) != 0) {
          iVar5 = 3;
        }
        if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 0x18) != 0) {
          iVar5 = *(int *)this_ptr->field1_0x1fbd4;
          (this_ptr->base_hero).field3_0xbe2c[0x18] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0x19] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0x1a] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0x1b] = '\0';
          uVar9 = (uint)(iVar5 == 0);
          *(uint *)this_ptr->field1_0x1fbd4 = uVar9;
          if (uVar9 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = 10;
          }
        }
        if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 0xc) != 0) {
          bVar3 = true;
          if ((*(int *)this_ptr->field1_0x1fbd4 == 0) && ((this_ptr->base_hero).control_type != 2))
          {
            iVar10 = core_hero_cpp_FUN_004f2af0();
            bVar3 = false;
            if (iVar10 != 0) goto LAB_005d9011;
            iVar10 = core_hero_cpp_FUN_004f2d70();
            if ((iVar10 != 0) && (iVar10 != 1)) {
              core_hero_cpp_FUN_004f2ed0();
            }
            if ((unaff_retaddr != 0) || (iVar10 = core_hero_cpp_FUN_004f2c40(), iVar10 != 0))
            goto LAB_005d9011;
            iVar10 = core_hero_cpp_FUN_004f2f50();
            if (iVar10 != 0) {
              core_hero_cpp_FUN_004f30f0();
              goto LAB_005d9011;
            }
          }
          else {
LAB_005d9011:
            if (!bVar3) goto LAB_005d9032;
          }
          iVar5 = *(int *)(this_ptr->field1_0x1fbd4 + 4);
          (this_ptr->base_hero).field3_0xbe2c[0xc] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0xd] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0xe] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0xf] = '\0';
          if (iVar5 == 0) {
            iVar5 = 0xf;
          }
          else {
            iVar5 = 0xe;
          }
        }
LAB_005d9032:
        *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0xc) =
             *(float *)((this_ptr->base_hero).field3_0xbe2c + 0x24) *
             *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x2c);
        pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(this_ptr->base_hero).base_character.model.motion_controller);
        if (iVar5 != pSVar6->state_index) {
          in_stack_ffffff94 = 1;
          goto LAB_005d8cdd;
        }
      }
      break;
    case 9:
      goto switchD_005d8f77_caseD_9;
    }
  }
  else {
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base_hero).base_character.model.motion_controller);
    if ((pSVar6->state_index != 0x1a) && (pSVar6->state_index != 0x1b)) {
      (this_ptr->base_hero).base_character.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base_hero).base_character.model.accumulated_root_motion.y =
           (this_ptr->base_hero).base_character.model.accumulated_root_motion.z;
      pCVar7->x = (this_ptr->base_hero).base_character.model.accumulated_root_motion.y;
    }
    uVar9 = *(uint *)((this_ptr->base_hero).base_character.field11_0x25a0 + 0x10);
    if (uVar9 < 2) {
      if (uVar9 != 1) goto LAB_005d8f37;
LAB_005d8cdc:
      iVar5 = 1;
    }
    else {
      if (uVar9 < 3) goto LAB_005d8cdc;
      if (uVar9 == 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base_hero).base_character.model.motion_controller,0,1);
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
        goto switchD_005d8f77_caseD_8;
      }
LAB_005d8f37:
      iVar5 = 1;
    }
LAB_005d8cdd:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_hero).base_character.model.motion_controller,iVar5,in_stack_ffffff94
              );
  }
switchD_005d8f77_caseD_8:
  pCVar2 = (this_ptr->base_hero).base_character.grabbed_by;
  if (pCVar2 == (CDemonActor *)0x0) {
    CStack_28.x = (this_ptr->base_hero).base_character.model.accumulated_root_motion.x;
    CStack_28.y = (this_ptr->base_hero).base_character.model.accumulated_root_motion.y;
    CStack_28.z = (this_ptr->base_hero).base_character.model.accumulated_root_motion.z;
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base_hero).base_character.model.motion_controller);
    if (pSVar6->state_index != 0x1a) {
      *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x20) =
           *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x20) -
           in_stack_00000008 * (float)32;
    }
    in_stack_ffffffc8 =
         (CDeformableModel_MotionBlendWeightFunc *)
         (*(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x20) * in_stack_00000008
         + *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x14));
    CStack_28.y = CStack_28.y +
                  *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x1c) *
                  in_stack_00000008 +
                  *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x10);
    auStack_34._0_4_ =
         in_stack_00000008 * *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x24) +
         *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x18);
    CStack_28.z = CStack_28.z + (float)in_stack_ffffffc8;
    afStack_1c[0] = afStack_1c[0] + (float)auStack_34._0_4_;
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base_hero).base_character.model.motion_controller);
    iVar5 = pSVar6->state_index;
    if ((((iVar5 != 0x17) && (iVar5 != 0x18)) && (iVar5 != 0x19)) &&
       (((iVar5 != 0x25 && (iVar5 != 0x26)) && ((iVar5 != 0x27 && (iVar5 != 0x28)))))) {
      core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base_hero).base_character.model.motion_controller);
    if (pSVar6->state_index == 0x1a) {
      (this_ptr->base_hero).base_character.base_actor.location.position.y =
           in_stack_00000008 * (float)3 +
           (this_ptr->base_hero).base_character.base_actor.location.position.y;
    }
    goto LAB_005d8e27;
  }
  if ((this_ptr->base_hero).base_character.grabbed_type == 0) {
    pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,(CVector3f *)auStack_34,&(pCVar2->location).position
                       );
    pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_28,pCVar7);
    fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar7->y);
    if (fVar8 < (float)-1.57079632675) {
      fVar8 = fVar8 + 3.141593f;
    }
    if ((float)1.57079632675 < fVar8) {
      fVar8 = fVar8 + -3.141593f;
    }
    fVar4 = in_stack_00000008 * (float)3.1415926535000001;
    if (fVar8 < -fVar4) {
      fVar8 = -fVar4;
    }
    if (fVar4 < fVar8) {
      fVar8 = fVar4;
    }
    (this_ptr->base_hero).base_character.base_actor.orient.bank =
         (this_ptr->base_hero).base_character.base_actor.orient.bank + fVar8;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  }
  pCVar2 = (this_ptr->base_hero).base_character.grabbed_by;
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base_hero).base_character.model,(CVector3f *)&stack0xfffffffc,0);
  fVar8 = (**(code **)(in_stack_00000014 + 0x124))(pCVar2,(float)this_ptr,pCVar7);
  if (fVar8 == 0.0) {
    (this_ptr->base_hero).base_character.grabbed_by = (CDemonActor *)0x0;
LAB_005d8e14:
    iVar5 = 0;
  }
  else {
    if ((this_ptr->base_hero).base_character.grabbed_by == (CDemonActor *)0x0) goto LAB_005d8e14;
    if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 0xc) == 0) goto LAB_005d8e27;
    iVar5 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base_hero).base_character.model.motion_controller,iVar5,1);
LAB_005d8e27:
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  pCStack0000002c = &(this_ptr->base_hero).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack0000002c);
  iVar5 = (*(this_ptr->base_hero).base_character.base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)this_ptr,in_stack_ffffffb4);
  if (iVar5 == 0) {
    bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar8 = (float)DAT_03f6cb90;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(this_ptr->field1_0x1fbd4 + 0x7fcec),
               *(CVector3f **)(this_ptr->field1_0x1fbd4 + 0x7fcf8));
    auStack_34._0_4_ = CStack_28.z;
    *(float *)(auStack_34 + (uint)bVar11 * -8 + 4) = afStack_1c[(uint)bVar11 * -2];
    (&pCStack_2c)[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
         (CDeformableModelInstance *)afStack_1c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    (&pCStack_2c + (uint)bVar11 * -2 + (uint)bVar11 * -2)[(uint)bVar11 * -2 + 1] =
         (CDeformableModelInstance *)
         (afStack_1c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (in_stack_00000048,(CQuaternion4f *)(auStack_34 + 4),fVar8,(int)bone_index,
               in_stack_ffffffc8);
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  pCVar1 = &(this_ptr->base_hero).base_character.model;
  auStack_34._0_4_ = *(uint *)((this_ptr->base_hero).base_character.field2_0x240c + 8);
  pCStack00000058 = &(this_ptr->base_hero).base_character.base_actor.location;
  auStack_34._4_4_ = pCVar1;
  core_cloth_cpp_FUN_0043ab80();
  auStack_34._4_4_ = *(uint *)((this_ptr->base_hero).base_character.field2_0x240c + 8);
  pCStack_2c = pCVar1;
  core_cloth_cpp_FUN_0043ab80();
  return;
}
