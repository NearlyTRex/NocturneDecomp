// Name: core_haystack.cpp_FUN_004f0e40
// Address: 004f0e40
// Address Range: [[004f0e40, 004f13e7]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f0e40()

#include "nocturne.h"

/* Signature: byte actors_hero_haystack.cpp_FUN_004f0e40(uint param_1, uint
   param_2) */

void core_haystack_cpp_FUN_004f0e40(void)

{
  CDemonActor *this_ptr;
  bool bVar1;
  CCharacter *pCVar2;
  CGame *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  float fVar6;
  SMotion *pSVar7;
  uint uVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  uint *puVar10;
  byte bVar11;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_1858 [1519];
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *source_quaternions;
  SCollisionInfo *in_stack_ffffff74;
  int in_stack_ffffff78;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffff7c;
  float fStack_7c;
  CQuaternion4f local_6c;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  float local_38;
  float local_34;
  float fStack_30;
  SCollisionInfo *pSStack_24;
  CMotionController *local_20;
  SCollisionInfo *local_1c;
  int local_18;
  CDeformableModelInstance *pCStack_14;
  
  bVar11 = 0;
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
    core_haystack_cpp_FUN_004f13f0();
  }
  pCVar3 = g_CGamePtr;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * (float)12.566370614;
  if (pCVar3->letterbox_mode != 0) {
    *(float *)(in_stack_00000004->field2_0x240c + 0x2c) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x2c) * (float)0.33333333333333298;
  }
  fVar6 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar6;
  if (fVar6 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  core_haystack_cpp_FUN_004f1970();
  iVar4 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar4 == 0) {
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    switch(pSVar7->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
        iVar4 = 0;
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
          iVar4 = 10;
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0) {
          if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
          iVar4 = 3;
        }
        if (in_stack_00000004[1].base_actor.location.position.x != 0.0) {
          iVar4 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f4);
          in_stack_00000004[1].base_actor.location.position.x = 0.0;
          uVar8 = (uint)(iVar4 == 0);
          *(uint *)(in_stack_00000004[2].cloth_data + 0x54f4) = uVar8;
          if (uVar8 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = 10;
          }
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
          bVar1 = true;
          if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) &&
             (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) != 2)) {
            iVar9 = core_hero_cpp_FUN_004f2af0();
            bVar1 = false;
            if (iVar9 != 0) goto LAB_004f11d6;
            local_18 = core_hero_cpp_FUN_004f2d70();
            if ((local_18 != 0) && (local_18 != 1)) {
              core_hero_cpp_FUN_004f2ed0();
            }
            if ((local_18 != 0) || (iVar9 = core_hero_cpp_FUN_004f2c40(), iVar9 != 0))
            goto LAB_004f11d6;
            iVar9 = core_hero_cpp_FUN_004f2f50();
            if (iVar9 != 0) {
              core_hero_cpp_FUN_004f30f0();
              goto LAB_004f11d6;
            }
          }
          else {
LAB_004f11d6:
            if (!bVar1) goto LAB_004f11f7;
          }
          iVar4 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f8);
          pCVar2 = in_stack_00000004 + 1;
          (pCVar2->base_actor).actor_name[0x14] = '\0';
          (pCVar2->base_actor).actor_name[0x15] = '\0';
          (pCVar2->base_actor).actor_name[0x16] = '\0';
          (pCVar2->base_actor).actor_name[0x17] = '\0';
          if (iVar4 == 0) {
            iVar4 = 0xf;
          }
          else {
            iVar4 = 0xe;
          }
        }
LAB_004f11f7:
        *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
             (float)in_stack_00000004[1].base_actor.location.area_id *
             *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
        pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(in_stack_00000004->model).motion_controller);
        if (iVar4 != pSVar7->state_index) goto LAB_004f0f1c;
      }
      break;
    case 9:
      goto switchD_004f12ce_caseD_9;
    }
  }
  else {
    uVar8 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
    if (uVar8 < 2) {
      if (uVar8 == 1) {
        iVar4 = 1;
      }
      else {
LAB_004f1134:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar8) {
        if (uVar8 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
          goto switchD_004f12ce_caseD_8;
        }
        goto LAB_004f1134;
      }
      iVar4 = 2;
    }
LAB_004f0f1c:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar4,1);
  }
switchD_004f12ce_caseD_8:
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    pCVar5 = &(in_stack_00000004->model).accumulated_root_motion;
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_38 = pCVar5->x + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    local_34 = (in_stack_00000004->model).accumulated_root_motion.y +
               *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    fStack_30 = (in_stack_00000004->model).accumulated_root_motion.z +
                *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar5->x = (in_stack_00000004->model).accumulated_root_motion.y;
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(uint *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(uint *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    if ((pSVar7->state_index == 0xe) || (pSVar7->state_index == 0xf)) {
      local_34 = 0.0;
      local_38 = 0.0;
      fStack_30 = 0.0;
    }
    local_6c.x = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_6c.y = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_6c.z = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    local_38 = local_38 + local_6c.x;
    local_34 = local_34 + local_6c.y;
    fStack_30 = fStack_30 + local_6c.z;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
  }
  else {
    if (in_stack_00000004->grabbed_type == 0) {
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&in_stack_00000004->base_actor,&CStack_5c,
                          &(in_stack_00000004->grabbed_by->location).position);
      pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_50,pCVar5);
      in_stack_ffffff74 =
           (SCollisionInfo *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y);
      if ((float)in_stack_ffffff74 < (float)-1.57079632675) {
        in_stack_ffffff74 = (SCollisionInfo *)((float)in_stack_ffffff74 + 3.141593f);
      }
      if ((float)1.57079632675 < (float)in_stack_ffffff74) {
        in_stack_ffffff74 = (SCollisionInfo *)((float)in_stack_ffffff74 + -3.141593f);
      }
      local_1c = (SCollisionInfo *)(in_stack_00000008 * (float)3.1415926535000001);
      pSStack_24 = (SCollisionInfo *)-(float)local_1c;
      if ((float)in_stack_ffffff74 < (float)pSStack_24) {
        in_stack_ffffff74 = pSStack_24;
      }
      if ((float)local_1c < (float)in_stack_ffffff74) {
        in_stack_ffffff74 = local_1c;
      }
      (in_stack_00000004->base_actor).orient.bank =
           (in_stack_00000004->base_actor).orient.bank + (float)in_stack_ffffff74;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (&in_stack_00000004->base_actor);
    }
    this_ptr = in_stack_00000004->grabbed_by;
    pCStack_14 = (CDeformableModelInstance *)this_ptr->vtable;
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&in_stack_00000004->model,&CStack_44,0);
    fVar6 = (*(code *)pCStack_14->transformed_vertices[0x11].x)
                      (this_ptr,(float)in_stack_00000004,pCVar5);
    if (fVar6 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_004f1041:
      iVar4 = 0;
    }
    else {
      if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_004f1041;
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) goto LAB_004f1054;
      iVar4 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar4,1);
  }
LAB_004f1054:
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  local_20 = &(in_stack_00000004->model).motion_controller;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            ((CDeformableModelInstance *)local_20);
  iVar4 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                    (&in_stack_00000004->base_actor,in_stack_ffffff74);
  if ((iVar4 == 0) &&
     (pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(local_20),
     pSVar7->state_index != 0x13)) {
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(in_stack_00000004[2].cloth_data + 0x54fc),
               *(CVector3f **)(in_stack_00000004[2].cloth_data + 0x5508));
    this_ptr_00 = pCStack_14;
    source_quaternions = &local_6c;
    local_6c.w = fStack_7c;
    puVar10 = (uint *)((int)&local_6c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(uint *)((int)&local_6c + (uint)bVar11 * -8 + 4) =
         *(uint *)(&stack0xffffff88 + (uint)bVar11 * -8);
    *puVar10 = *(uint *)(&stack0xffffff8c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    puVar10[(uint)bVar11 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff8c + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
          ((uint)bVar11 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (this_ptr_00,source_quaternions,(float)in_stack_ffffff74,in_stack_ffffff78,
               in_stack_ffffff7c);
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
switchD_004f12ce_caseD_9:
  return;
}
