// Name: core_colonel.cpp_FUN_0043fa00
// Address: 0043fa00
// Address Range: [[0043fa00, 0043ff16]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_0043fa00()

#include "nocturne.h"

/* Signature: byte actors_hero_colonel.cpp_FUN_0043fa00(uint param_1, uint
   param_2) */

void core_colonel_cpp_FUN_0043fa00(void)

{
  CDeformableModelInstance *this_ptr;
  uint uVar1;
  CDemonActor *this_ptr_00;
  bool bVar2;
  float fVar3;
  CCharacter *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  float fVar7;
  int iVar8;
  SMotion *pSVar9;
  BADSPACEBASE *in_ESP;
  byte bVar10;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CDeformableModelInstance *in_stack_00000020;
  float afStackY_1838 [1508];
  CCharacter *this_ptr_01;
  CCharacter *desired_state_index;
  CDeformableModelInstance *this_ptr_02;
  SCollisionInfo *in_stack_ffffff88;
  CQuaternion4f *source_quaternions;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffff9c;
  CVector3f local_60;
  float afStack_54 [2];
  byte local_4c [8];
  float local_44 [2];
  CVector3f aCStack_3c [2];
  float local_24;
  float local_20;
  float local_1c;
  int iStack_18;
  
  bVar10 = 0;
  iVar5 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar5 == 0) {
    return;
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
  core_colonel_cpp_FUN_00440430();
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
    core_colonel_cpp_FUN_0043ff20();
  }
  fVar7 = (float)12.566370614;
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar7;
  this_ptr_01 = in_stack_00000004;
  iVar5 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  this_ptr = &in_stack_00000004->model;
  if (iVar5 == 0) {
    desired_state_index = (CCharacter *)0x43fe28;
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    switch(pSVar9->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
        iVar5 = 0;
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
          iVar8 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f4);
          in_stack_00000004[1].base_actor.location.position.x = 0.0;
          iVar5 = 0;
          *(uint *)(in_stack_00000004[2].cloth_data + 0x54f4) = (uint)(iVar8 == 0);
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
          bVar2 = true;
          if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) &&
             (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) != 2)) {
            iVar8 = core_hero_cpp_FUN_004f2af0();
            bVar2 = false;
            if (iVar8 != 0) goto LAB_0043fd60;
            local_1c = (float)core_hero_cpp_FUN_004f2d70();
            if ((local_1c != 0.0) && (local_1c != 1.4013e-45)) {
              this_ptr_01 = in_stack_00000004;
              core_hero_cpp_FUN_004f2ed0();
            }
            if (iStack_18 != 0) goto LAB_0043fd60;
            this_ptr_01 = (CCharacter *)0x43fdec;
            desired_state_index = in_stack_00000004;
            iVar8 = core_hero_cpp_FUN_004f2c40();
            if (iVar8 != 0) goto LAB_0043fd60;
            desired_state_index = (CCharacter *)0x43fdfd;
            iVar8 = core_hero_cpp_FUN_004f2f50();
            if (iVar8 != 0) {
              core_hero_cpp_FUN_004f30f0();
              goto LAB_0043fd60;
            }
          }
          else {
LAB_0043fd60:
            if (!bVar2) goto LAB_0043fd6e;
          }
          pCVar4 = in_stack_00000004 + 1;
          (pCVar4->base_actor).actor_name[0x14] = '\0';
          (pCVar4->base_actor).actor_name[0x15] = '\0';
          (pCVar4->base_actor).actor_name[0x16] = '\0';
          (pCVar4->base_actor).actor_name[0x17] = '\0';
        }
LAB_0043fd6e:
        this_ptr_02 = &in_stack_00000004->model;
        *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
             (float)in_stack_00000004[1].base_actor.location.area_id *
             *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
        pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&this_ptr_02->motion_controller);
        if (iVar5 != pSVar9->state_index) goto LAB_0043fad3;
      }
      break;
    case 6:
      goto switchD_0043fe37_caseD_6;
    }
  }
  else {
    uVar1 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        desired_state_index = (CCharacter *)&DAT_00000001;
        goto LAB_0043fad2;
      }
LAB_0043fcd4:
      this_ptr_02 = (CDeformableModelInstance *)&DAT_00000001;
      desired_state_index = (CCharacter *)0x0;
      this_ptr_01 = (CCharacter *)&in_stack_00000004->model;
    }
    else {
      if (2 < uVar1) {
        if (uVar1 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
          goto switchD_0043fe37_caseD_5;
        }
        goto LAB_0043fcd4;
      }
      desired_state_index = (CCharacter *)&DAT_00000002;
LAB_0043fad2:
      this_ptr_02 = (CDeformableModelInstance *)&DAT_00000001;
      this_ptr_01 = (CCharacter *)this_ptr;
    }
LAB_0043fad3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)this_ptr_01,(int)desired_state_index,(int)this_ptr_02);
  }
switchD_0043fe37_caseD_5:
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_24 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_20 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_1c = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    pCVar6 = &(in_stack_00000004->model).accumulated_root_motion;
    aCStack_3c[0].x = pCVar6->x + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    aCStack_3c[0].y =
         (in_stack_00000004->model).accumulated_root_motion.y +
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    afStack_54[0] = aCStack_3c[0].x + local_24;
    aCStack_3c[0].z =
         (in_stack_00000004->model).accumulated_root_motion.z +
         *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    afStack_54[1] = aCStack_3c[0].y + local_20;
    local_4c._0_4_ = aCStack_3c[0].z + local_1c;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar6->x = (in_stack_00000004->model).accumulated_root_motion.y;
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(float *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
  }
  else {
    if (in_stack_00000004->grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&in_stack_00000004->base_actor,(CVector3f *)(local_4c + 4),
                          &(in_stack_00000004->grabbed_by->location).position);
      pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(aCStack_3c,pCVar6);
      fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y);
      if (fVar7 < (float)-1.57079632675) {
        fVar7 = fVar7 + 5.3286462644388174e-315._0_4_;
      }
      if ((float)1.57079632675 < fVar7) {
        fVar7 = fVar7 + -3.141593f;
      }
      fVar3 = in_stack_00000008 * (float)3.1415926535000001;
      if (fVar7 < -fVar3) {
        fVar7 = -fVar3;
      }
      if (fVar3 < fVar7) {
        fVar7 = fVar3;
      }
      (in_stack_00000004->base_actor).orient.bank =
           (in_stack_00000004->base_actor).orient.bank + fVar7;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (&in_stack_00000004->base_actor);
    }
    this_ptr_00 = in_stack_00000004->grabbed_by;
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&in_stack_00000004->model,&local_60,0);
    fVar7 = (**(code **)(iStack_18 + 0x124))(this_ptr_00,(float)in_stack_00000004,pCVar6);
    if (fVar7 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_0043fc01:
      iVar5 = 0;
    }
    else {
      if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_0043fc01;
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) goto LAB_0043fc14;
      iVar5 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar5,1);
  }
LAB_0043fc14:
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  iVar5 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                    (&in_stack_00000004->base_actor,in_stack_ffffff88);
  if (iVar5 == 0) {
    bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar7 = (float)DAT_0083b124;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(in_stack_00000004[2].cloth_data + 0x54fc),
               *(CVector3f **)(in_stack_00000004[2].cloth_data + 0x5508));
    source_quaternions = (CQuaternion4f *)local_4c;
    local_4c._0_4_ = local_60.y;
    *(float *)(local_4c + (uint)bVar10 * -8 + 4) = afStack_54[(uint)bVar10 * -2 + -1];
    local_44[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
         afStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    (local_44 + (uint)bVar10 * -2 + (uint)bVar10 * -2)[(uint)bVar10 * -2 + 1] =
         (afStack_54 + (uint)bVar10 * -2 + (uint)bVar10 * -2)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (in_stack_00000020,source_quaternions,fVar7,(int)bone_index,in_stack_ffffff9c);
  }
  local_60.x = in_stack_00000008;
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
switchD_0043fe37_caseD_6:
  return;
}
