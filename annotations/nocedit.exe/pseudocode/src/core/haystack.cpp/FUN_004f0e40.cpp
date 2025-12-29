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
  float fVar2;
  CCharacter *pCVar3;
  CGame *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  float fVar7;
  SMotion *pSVar8;
  uint uVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  uint *puVar11;
  byte bVar12;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CMotionController *in_stack_00000014;
  CDeformableModelInstance *in_stack_0000001c;
  float afStackY_1828 [1507];
  CCharacter *this_ptr_00;
  CCharacter *desired_state_index;
  CDeformableModelInstance *this_ptr_01;
  SCollisionInfo *in_stack_ffffff94;
  uint local_68;
  CQuaternion4f *source_quaternions;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffffac;
  float fStack_50;
  CVector3f CStack_4c;
  byte local_3c [20];
  float local_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  int iStack_14;
  
  bVar12 = 0;
  iVar5 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar5 == 0) {
    return;
  }
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
    core_haystack_cpp_FUN_004f13f0();
  }
  pCVar4 = g_CGamePtr;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * (float)12.566370614;
  if (pCVar4->letterbox_mode != 0) {
    *(float *)(in_stack_00000004->field2_0x240c + 0x2c) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x2c) * (float)0.33333333333333298;
  }
  fVar7 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar7;
  if (fVar7 < 0.0) {
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
  this_ptr_00 = in_stack_00000004;
  iVar5 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar5 == 0) {
    desired_state_index = (CCharacter *)0x4f12bf;
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    switch(pSVar8->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
        iVar5 = 0;
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
          iVar5 = 10;
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0) {
          if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
          iVar5 = 3;
        }
        if (in_stack_00000004[1].base_actor.location.position.x != 0.0) {
          iVar5 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f4);
          in_stack_00000004[1].base_actor.location.position.x = 0.0;
          uVar9 = (uint)(iVar5 == 0);
          *(uint *)(in_stack_00000004[2].cloth_data + 0x54f4) = uVar9;
          if (uVar9 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = 10;
          }
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
          bVar1 = true;
          if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) &&
             (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) != 2)) {
            iVar10 = core_hero_cpp_FUN_004f2af0();
            bVar1 = false;
            if (iVar10 != 0) goto LAB_004f11d6;
            iStack_14 = core_hero_cpp_FUN_004f2d70();
            if ((iStack_14 != 0) && (iStack_14 != 1)) {
              this_ptr_00 = in_stack_00000004;
              core_hero_cpp_FUN_004f2ed0();
            }
            if (unaff_EBP != 0) goto LAB_004f11d6;
            this_ptr_00 = (CCharacter *)0x4f1279;
            desired_state_index = in_stack_00000004;
            iVar10 = core_hero_cpp_FUN_004f2c40();
            if (iVar10 != 0) goto LAB_004f11d6;
            desired_state_index = (CCharacter *)0x4f128a;
            iVar10 = core_hero_cpp_FUN_004f2f50();
            if (iVar10 != 0) {
              core_hero_cpp_FUN_004f30f0();
              goto LAB_004f11d6;
            }
          }
          else {
LAB_004f11d6:
            if (!bVar1) goto LAB_004f11f7;
          }
          iVar5 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f8);
          pCVar3 = in_stack_00000004 + 1;
          (pCVar3->base_actor).actor_name[0x14] = '\0';
          (pCVar3->base_actor).actor_name[0x15] = '\0';
          (pCVar3->base_actor).actor_name[0x16] = '\0';
          (pCVar3->base_actor).actor_name[0x17] = '\0';
          if (iVar5 == 0) {
            iVar5 = 0xf;
          }
          else {
            iVar5 = 0xe;
          }
        }
LAB_004f11f7:
        this_ptr_01 = &in_stack_00000004->model;
        *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
             (float)in_stack_00000004[1].base_actor.location.area_id *
             *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
        pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&this_ptr_01->motion_controller);
        if (iVar5 != pSVar8->state_index) goto LAB_004f0f1c;
      }
      break;
    case 9:
      goto switchD_004f12ce_caseD_9;
    }
  }
  else {
    uVar9 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
    if (uVar9 < 2) {
      if (uVar9 == 1) {
        desired_state_index = (CCharacter *)&DAT_00000001;
      }
      else {
LAB_004f1134:
        desired_state_index = (CCharacter *)0x0;
      }
    }
    else {
      if (2 < uVar9) {
        if (uVar9 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
          goto switchD_004f12ce_caseD_8;
        }
        goto LAB_004f1134;
      }
      desired_state_index = (CCharacter *)&DAT_00000002;
    }
    this_ptr_01 = (CDeformableModelInstance *)&DAT_00000001;
    this_ptr_00 = (CCharacter *)&in_stack_00000004->model;
LAB_004f0f1c:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)this_ptr_00,(int)desired_state_index,(int)this_ptr_01);
  }
switchD_004f12ce_caseD_8:
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    pCVar6 = &(in_stack_00000004->model).accumulated_root_motion;
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_28 = pCVar6->x + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    fStack_24 = (in_stack_00000004->model).accumulated_root_motion.y +
                *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    local_20 = (in_stack_00000004->model).accumulated_root_motion.z +
               *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar6->x = (in_stack_00000004->model).accumulated_root_motion.y;
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(uint *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(uint *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    if ((pSVar8->state_index == 0xe) || (pSVar8->state_index == 0xf)) {
      local_20 = 0.0;
      fStack_24 = 0.0;
      local_1c = 0.0;
    }
    in_stack_ffffffac =
         (CDeformableModel_MotionBlendWeightFunc *)
         (*(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008);
    fStack_50 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    CStack_4c.x = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    fStack_24 = fStack_24 + (float)in_stack_ffffffac;
    local_20 = local_20 + fStack_50;
    local_1c = local_1c + CStack_4c.x;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
  }
  else {
    if (in_stack_00000004->grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&in_stack_00000004->base_actor,&CStack_4c,
                          &(in_stack_00000004->grabbed_by->location).position);
      pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_4c,pCVar6);
      fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y);
      if (fVar7 < (float)-1.57079632675) {
        fVar7 = fVar7 + 3.141593f;
      }
      if ((float)1.57079632675 < fVar7) {
        fVar7 = fVar7 + -3.141593f;
      }
      fVar2 = in_stack_00000008 * (float)3.1415926535000001;
      local_18 = -fVar2;
      if (fVar7 < local_18) {
        fVar7 = local_18;
      }
      if (fVar2 < fVar7) {
        fVar7 = fVar2;
      }
      (in_stack_00000004->base_actor).orient.bank =
           (in_stack_00000004->base_actor).orient.bank + fVar7;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (&in_stack_00000004->base_actor);
    }
    this_ptr = in_stack_00000004->grabbed_by;
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&in_stack_00000004->model,(CVector3f *)(local_3c + 8),0);
    fVar7 = (**(code **)((int)local_18 + 0x124))(this_ptr,(float)in_stack_00000004,pCVar6);
    if (fVar7 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_004f1041:
      iVar5 = 0;
    }
    else {
      if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_004f1041;
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) goto LAB_004f1054;
      iVar5 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar5,1);
  }
LAB_004f1054:
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  iVar5 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                    (&in_stack_00000004->base_actor,in_stack_ffffff94);
  if ((iVar5 == 0) &&
     (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(in_stack_00000014),
     pSVar8->state_index != 0x13)) {
    bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    local_68 = 0x4f10bb;
    fVar7 = (float)DAT_02db8700;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(in_stack_00000004[2].cloth_data + 0x54fc),
               *(CVector3f **)(in_stack_00000004[2].cloth_data + 0x5508));
    source_quaternions = (CQuaternion4f *)local_3c;
    local_3c._0_4_ = CStack_4c.x;
    puVar11 = (uint *)((int)&CStack_4c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)(local_3c + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&CStack_4c + (uint)bVar12 * -8 + 4);
    *(uint *)(local_3c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) = *puVar11;
    *(uint *)
     ((int)(local_3c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) + ((uint)bVar12 * -2 + 1) * 4) =
         puVar11[(uint)bVar12 * -2 + 1];
    local_68 = 0x4f10d9;
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (in_stack_0000001c,source_quaternions,fVar7,(int)bone_index,in_stack_ffffffac);
  }
  fStack_50 = in_stack_00000008;
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
switchD_004f12ce_caseD_9:
  return;
}
