// Name: core_colonel.cpp_FUN_0043fa00
// Address: 0043fa00
// Address Range: [[0043fa00, 0043ff16]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_0043fa00()

#include "nocturne.h"

/* Signature: byte actors_hero_colonel.cpp_FUN_0043fa00(uint param_1, uint
   param_2) */

void core_colonel_cpp_FUN_0043fa00
               (uint param_1,uint param_2,CDeformableModelInstance *unaff_EBX,
               uint param_4,CCharacter *param_5,float param_6)

{
  uint uVar1;
  CDemonActor *this_ptr;
  bool bVar2;
  CCharacter *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  float fVar6;
  int iVar7;
  SMotion *pSVar8;
  byte bVar9;
  float afStackY_185c [1518];
  CQuaternion4f *source_quaternions;
  SCollisionInfo *in_stack_ffffff74;
  code *blend_callback;
  float fStack_80;
  byte local_74 [8];
  float afStack_6c [4];
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  float local_38;
  float local_34;
  float local_30;
  int local_24;
  float local_20;
  float local_1c;
  CDemonActor_vtable *local_14;
  
  bVar9 = 0;
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870(param_5);
  if (iVar4 == 0) {
    return;
  }
  fVar6 = *(float *)param_5[1].base_actor.actor_name - param_6;
  *(float *)param_5[1].base_actor.actor_name = fVar6;
  if (fVar6 < 0.0) {
    param_5[1].base_actor.actor_name[0] = '\0';
    param_5[1].base_actor.actor_name[1] = '\0';
    param_5[1].base_actor.actor_name[2] = '\0';
    param_5[1].base_actor.actor_name[3] = '\0';
  }
  (param_5->model).accumulated_root_motion.z = 0.0;
  (param_5->model).accumulated_root_motion.y = (param_5->model).accumulated_root_motion.z;
  (param_5->model).accumulated_root_motion.x = (param_5->model).accumulated_root_motion.y;
  core_colonel_cpp_FUN_00440430();
  if (*(int *)(param_5[1].base_actor.actor_name + 4) == 2) {
    core_colonel_cpp_FUN_0043ff20();
  }
  fVar6 = (float)12.566370614;
  *(float *)(param_5->field2_0x240c + 0x28) = (param_5->model).accumulated_root_motion.z;
  *(float *)(param_5->field2_0x240c + 0x2c) = param_6 * fVar6;
  iVar4 = core_charactr_cpp_CCharacter_FUN_0042ca70(param_5);
  if (iVar4 == 0) {
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(param_5->model).motion_controller);
    switch(pSVar8->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)(param_5->field2_0x240c + 4) != 0) {
        iVar4 = 0;
        if (*(int *)(param_5[1].base_actor.actor_name + 8) != 0) {
          if (*(int *)(param_5[1].base_actor.actor_name + 0x10) == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 2;
          }
        }
        if (*(int *)(param_5[1].base_actor.actor_name + 0xc) != 0) {
          iVar4 = 3;
        }
        if (param_5[1].base_actor.location.position.x != 0.0) {
          iVar7 = *(int *)(param_5[2].cloth_data + 0x54f4);
          param_5[1].base_actor.location.position.x = 0.0;
          iVar4 = 0;
          *(uint *)(param_5[2].cloth_data + 0x54f4) = (uint)(iVar7 == 0);
        }
        if (*(int *)(param_5[1].base_actor.actor_name + 0x14) != 0) {
          bVar2 = true;
          if ((*(int *)(param_5[2].cloth_data + 0x54f4) == 0) &&
             (*(int *)(param_5[1].base_actor.actor_name + 4) != 2)) {
            iVar7 = core_hero_cpp_FUN_004f2af0();
            bVar2 = false;
            if (iVar7 != 0) goto LAB_0043fd60;
            local_24 = core_hero_cpp_FUN_004f2d70();
            if ((local_24 != 0) && (local_24 != 1)) {
              core_hero_cpp_FUN_004f2ed0();
            }
            if ((local_24 != 0) || (iVar7 = core_hero_cpp_FUN_004f2c40(), iVar7 != 0))
            goto LAB_0043fd60;
            iVar7 = core_hero_cpp_FUN_004f2f50();
            if (iVar7 != 0) {
              core_hero_cpp_FUN_004f30f0();
              goto LAB_0043fd60;
            }
          }
          else {
LAB_0043fd60:
            if (!bVar2) goto LAB_0043fd6e;
          }
          pCVar3 = param_5 + 1;
          (pCVar3->base_actor).actor_name[0x14] = '\0';
          (pCVar3->base_actor).actor_name[0x15] = '\0';
          (pCVar3->base_actor).actor_name[0x16] = '\0';
          (pCVar3->base_actor).actor_name[0x17] = '\0';
        }
LAB_0043fd6e:
        *(float *)(param_5->field2_0x240c + 0xc) =
             (float)param_5[1].base_actor.location.area_id *
             *(float *)(param_5->field2_0x240c + 0x2c);
        pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(param_5->model).motion_controller);
        if (iVar4 != pSVar8->state_index) goto LAB_0043fad3;
      }
      break;
    case 6:
      goto switchD_0043fe37_caseD_6;
    }
  }
  else {
    uVar1 = *(uint *)(param_5->field11_0x25a0 + 0x10);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        iVar4 = 1;
      }
      else {
LAB_0043fcd4:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(param_5->model).motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_5);
          goto switchD_0043fe37_caseD_5;
        }
        goto LAB_0043fcd4;
      }
      iVar4 = 2;
    }
LAB_0043fad3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(param_5->model).motion_controller,iVar4,1);
  }
switchD_0043fe37_caseD_5:
  if (param_5->grabbed_by == (CDemonActor *)0x0) {
    *(float *)(param_5->field2_0x240c + 0x20) =
         *(float *)(param_5->field2_0x240c + 0x20) - param_6 * (float)32;
    local_38 = *(float *)(param_5->field2_0x240c + 0x1c) * param_6;
    local_34 = *(float *)(param_5->field2_0x240c + 0x20) * param_6;
    local_30 = param_6 * *(float *)(param_5->field2_0x240c + 0x24);
    pCVar5 = &(param_5->model).accumulated_root_motion;
    local_50 = pCVar5->x + *(float *)(param_5->field2_0x240c + 0x10);
    local_4c = (param_5->model).accumulated_root_motion.y +
               *(float *)(param_5->field2_0x240c + 0x14);
    afStack_6c[1] = local_50 + local_38;
    local_48 = (param_5->model).accumulated_root_motion.z +
               *(float *)(param_5->field2_0x240c + 0x18);
    afStack_6c[2] = local_4c + local_34;
    afStack_6c[3] = local_48 + local_30;
    (param_5->model).accumulated_root_motion.z = 0.0;
    (param_5->model).accumulated_root_motion.y = (param_5->model).accumulated_root_motion.z;
    pCVar5->x = (param_5->model).accumulated_root_motion.y;
    param_5->field2_0x240c[0x18] = '\0';
    param_5->field2_0x240c[0x19] = '\0';
    param_5->field2_0x240c[0x1a] = '\0';
    param_5->field2_0x240c[0x1b] = '\0';
    *(float *)(param_5->field2_0x240c + 0x14) = *(float *)(param_5->field2_0x240c + 0x18);
    *(float *)(param_5->field2_0x240c + 0x10) = *(float *)(param_5->field2_0x240c + 0x18);
    core_charactr_cpp_CCharacter_FUN_00428f40(param_5);
  }
  else {
    if (param_5->grabbed_type == 0) {
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&param_5->base_actor,&local_5c,&(param_5->grabbed_by->location).position);
      pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar5);
      local_14 = (CDemonActor_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y);
      fVar6 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        fVar6 = (float)local_14 + 5.3286462644388174e-315._0_4_;
      }
      if ((float)1.57079632675 < fVar6) {
        fVar6 = fVar6 + -3.141593f;
      }
      local_1c = param_6 * (float)3.1415926535000001;
      local_20 = -local_1c;
      if (fVar6 < local_20) {
        fVar6 = local_20;
      }
      if (local_1c < fVar6) {
        fVar6 = local_1c;
      }
      (param_5->base_actor).orient.bank = (param_5->base_actor).orient.bank + fVar6;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&param_5->base_actor);
    }
    this_ptr = param_5->grabbed_by;
    local_14 = this_ptr->vtable;
    pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&param_5->model,(CVector3f *)local_74,0);
    fVar6 = (*local_14[1].cylinderGroundCheck)(this_ptr,(float)param_5,pCVar5);
    if (fVar6 == 0.0) {
      param_5->grabbed_by = (CDemonActor *)0x0;
LAB_0043fc01:
      iVar4 = 0;
    }
    else {
      if (param_5->grabbed_by == (CDemonActor *)0x0) goto LAB_0043fc01;
      if (*(int *)(param_5[1].base_actor.actor_name + 0x14) == 0) goto LAB_0043fc14;
      iVar4 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(param_5->model).motion_controller,iVar4,1);
  }
LAB_0043fc14:
  core_charactr_cpp_CCharacter_FUN_00429820(param_5);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&param_5->model);
  iVar4 = (*(param_5->base_actor).vtable[1].hasCollision)(&param_5->base_actor,in_stack_ffffff74);
  if (iVar4 == 0) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    pCVar5 = *(CVector3f **)(param_5[2].cloth_data + 0x5508);
    iVar4 = DAT_0083b124;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(param_5[2].cloth_data + 0x54fc),pCVar5);
    source_quaternions = (CQuaternion4f *)(local_74 + 4);
    local_74._4_4_ = fStack_80;
    afStack_6c[(uint)bVar9 * -2] = *(float *)(&stack0xffffff84 + (uint)bVar9 * -8);
    afStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)(&stack0xffffff88 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (afStack_6c + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(float *)((int)(&stack0xffffff88 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
                   ((uint)bVar9 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (unaff_EBX,source_quaternions,(float)pCVar5,iVar4,blend_callback);
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(param_5);
switchD_0043fe37_caseD_6:
  return;
}
