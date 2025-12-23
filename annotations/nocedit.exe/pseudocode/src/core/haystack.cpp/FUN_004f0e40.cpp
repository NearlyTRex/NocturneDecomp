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
  int unaff_EDI;
  uint *puVar10;
  byte bVar11;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CCharacter *apCStackY_185c [1518];
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *source_quaternions;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  CCharacter *in_stack_ffffff80;
  CQuaternion4f CStack_70;
  CVector3f local_60 [2];
  CVector3f local_48;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_24;
  CMotionController *local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  int iStack_14;
  
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
            iVar9 = core_hero_cpp_FUN_004f2d70();
            if ((iVar9 != 0) && (iVar9 != 1)) {
              core_hero_cpp_FUN_004f2ed0();
            }
            if ((unaff_EDI != 0) || (iVar9 = core_hero_cpp_FUN_004f2c40(), iVar9 != 0))
            goto LAB_004f11d6;
            in_stack_ffffff80 = in_stack_00000004;
            iVar9 = core_hero_cpp_FUN_004f2f50();
            if (iVar9 != 0) {
              in_stack_ffffff80 = (CCharacter *)0x4f12a7;
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
    local_3c = pCVar5->x + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    local_38 = (in_stack_00000004->model).accumulated_root_motion.y +
               *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    local_34 = (in_stack_00000004->model).accumulated_root_motion.z +
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
    CStack_70.y = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    CStack_70.z = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_60[0].x = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    local_38 = local_38 + CStack_70.y;
    local_34 = local_34 + CStack_70.z;
    fStack_30 = fStack_30 + local_60[0].x;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
  }
  else {
    if (in_stack_00000004->grabbed_type == 0) {
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&in_stack_00000004->base_actor,local_60,
                          &(in_stack_00000004->grabbed_by->location).position);
      pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(local_60,pCVar5);
      local_1c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y);
      fVar6 = local_1c;
      if (local_1c < (float)-1.57079632675) {
        fVar6 = local_1c + 3.141593f;
      }
      if ((float)1.57079632675 < fVar6) {
        fVar6 = fVar6 + -3.141593f;
      }
      fStack_24 = in_stack_00000008 * (float)3.1415926535000001;
      fStack_2c = -fStack_24;
      if (fVar6 < fStack_2c) {
        fVar6 = fStack_2c;
      }
      if (fStack_24 < fVar6) {
        fVar6 = fStack_24;
      }
      (in_stack_00000004->base_actor).orient.bank =
           (in_stack_00000004->base_actor).orient.bank + fVar6;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (&in_stack_00000004->base_actor);
    }
    this_ptr = in_stack_00000004->grabbed_by;
    local_18 = (CDeformableModelInstance *)this_ptr->vtable;
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&in_stack_00000004->model,&local_48,0);
    fVar6 = (**(code **)(iStack_14 + 0x124))(this_ptr,(float)in_stack_00000004,pCVar5);
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
  local_18 = &in_stack_00000004->model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(local_18);
  blend_callback = (CDeformableModel_MotionBlendWeightFunc *)0x4f107d;
  iVar4 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                    (&in_stack_00000004->base_actor,(SCollisionInfo *)in_stack_ffffff80);
  if ((iVar4 == 0) &&
     (pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(local_20),
     pSVar7->state_index != 0x13)) {
    bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar6 = (float)DAT_02db8700;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(in_stack_00000004[2].cloth_data + 0x54fc),
               *(CVector3f **)(in_stack_00000004[2].cloth_data + 0x5508));
    this_ptr_00 = local_18;
    source_quaternions = &CStack_70;
    CStack_70.w = (float)in_stack_ffffff80;
    puVar10 = (uint *)((int)local_60 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + -8);
    *(uint *)((int)local_60 + (uint)bVar11 * -8 + -0xc) =
         *(uint *)((int)local_60 + (uint)bVar11 * -8 + -0x1c);
    *puVar10 = *(uint *)(&stack0xffffff88 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    puVar10[(uint)bVar11 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff88 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
          ((uint)bVar11 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (this_ptr_00,source_quaternions,fVar6,(int)bone_index,blend_callback);
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
switchD_004f12ce_caseD_9:
  return;
}
