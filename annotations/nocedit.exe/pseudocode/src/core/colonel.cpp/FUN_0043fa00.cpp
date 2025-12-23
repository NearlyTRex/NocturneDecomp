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
  uint uVar1;
  CDemonActor *this_ptr;
  bool bVar2;
  int iVar3;
  CVector3f *pCVar4;
  float fVar5;
  int iVar6;
  SMotion *pSVar7;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  byte bVar8;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CCharacter *apCStackY_186c [1520];
  CDeformableModelInstance *this_ptr_00;
  CQuaternion4f *source_quaternions;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *blend_callback;
  CCharacter *pCVar9;
  CCharacter *in_stack_ffffff74;
  CCharacter *pCStack_88;
  byte auStack_80 [24];
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  CVector3f local_50 [2];
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float fStack_18;
  CDeformableModelInstance *local_14;
  
  bVar8 = 0;
  iVar3 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar3 == 0) {
    return;
  }
  fVar5 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar5;
  if (fVar5 < 0.0) {
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
  fVar5 = (float)12.566370614;
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar5;
  iVar3 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar3 == 0) {
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    switch(pSVar7->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
        iVar3 = 0;
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0) {
          if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = 2;
          }
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
          iVar3 = 3;
        }
        if (in_stack_00000004[1].base_actor.location.position.x != 0.0) {
          iVar6 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f4);
          in_stack_00000004[1].base_actor.location.position.x = 0.0;
          iVar3 = 0;
          *(uint *)(in_stack_00000004[2].cloth_data + 0x54f4) = (uint)(iVar6 == 0);
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
          bVar2 = true;
          if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) &&
             (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) != 2)) {
            iVar6 = core_hero_cpp_FUN_004f2af0();
            bVar2 = false;
            if (iVar6 != 0) goto LAB_0043fd60;
            fStack_18 = (float)core_hero_cpp_FUN_004f2d70();
            if ((fStack_18 != 0.0) && (fStack_18 != 1.4013e-45)) {
              core_hero_cpp_FUN_004f2ed0();
            }
            if ((local_14 != (CDeformableModelInstance *)0x0) ||
               (in_stack_ffffff74 = in_stack_00000004, iVar6 = core_hero_cpp_FUN_004f2c40(),
               iVar6 != 0)) goto LAB_0043fd60;
            pCStack_88 = in_stack_00000004;
            in_stack_ffffff74 = (CCharacter *)0x43fdfd;
            iVar6 = core_hero_cpp_FUN_004f2f50();
            if (iVar6 != 0) {
              pCStack_88 = (CCharacter *)0x43fe1a;
              core_hero_cpp_FUN_004f30f0();
              goto LAB_0043fd60;
            }
          }
          else {
LAB_0043fd60:
            if (!bVar2) goto LAB_0043fd6e;
          }
          pCVar9 = in_stack_00000004 + 1;
          (pCVar9->base_actor).actor_name[0x14] = '\0';
          (pCVar9->base_actor).actor_name[0x15] = '\0';
          (pCVar9->base_actor).actor_name[0x16] = '\0';
          (pCVar9->base_actor).actor_name[0x17] = '\0';
        }
LAB_0043fd6e:
        *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
             (float)in_stack_00000004[1].base_actor.location.area_id *
             *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
        pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(in_stack_00000004->model).motion_controller);
        if (iVar3 != pSVar7->state_index) goto LAB_0043fad3;
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
        iVar3 = 1;
      }
      else {
LAB_0043fcd4:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
          goto switchD_0043fe37_caseD_5;
        }
        goto LAB_0043fcd4;
      }
      iVar3 = 2;
    }
LAB_0043fad3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar3,1);
  }
switchD_0043fe37_caseD_5:
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_38 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_34 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_30 = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    pCVar4 = &(in_stack_00000004->model).accumulated_root_motion;
    local_50[0].x = pCVar4->x + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    local_50[0].y =
         (in_stack_00000004->model).accumulated_root_motion.y +
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    local_68 = local_50[0].x + local_38;
    local_50[0].z =
         (in_stack_00000004->model).accumulated_root_motion.z +
         *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    local_64 = local_50[0].y + local_34;
    local_60 = local_50[0].z + local_30;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar4->x = (in_stack_00000004->model).accumulated_root_motion.y;
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
      pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&in_stack_00000004->base_actor,&local_5c,
                          &(in_stack_00000004->grabbed_by->location).position);
      pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(local_50,pCVar4);
      fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar4->y);
      fVar5 = fStack_18;
      if (fStack_18 < (float)-1.57079632675) {
        fVar5 = fStack_18 + 5.3286462644388174e-315._0_4_;
      }
      if ((float)1.57079632675 < fVar5) {
        fVar5 = fVar5 + -3.141593f;
      }
      local_20 = in_stack_00000008 * (float)3.1415926535000001;
      local_24 = -local_20;
      if (fVar5 < local_24) {
        fVar5 = local_24;
      }
      if (local_20 < fVar5) {
        fVar5 = local_20;
      }
      (in_stack_00000004->base_actor).orient.bank =
           (in_stack_00000004->base_actor).orient.bank + fVar5;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (&in_stack_00000004->base_actor);
    }
    this_ptr = in_stack_00000004->grabbed_by;
    local_14 = (CDeformableModelInstance *)this_ptr->vtable;
    pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&in_stack_00000004->model,(CVector3f *)(auStack_80 + 0xc),0);
    fVar5 = (**(code **)(unaff_EBP + 0x124))(this_ptr,(float)in_stack_00000004,pCVar4);
    if (fVar5 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_0043fc01:
      iVar3 = 0;
    }
    else {
      if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_0043fc01;
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) goto LAB_0043fc14;
      iVar3 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar3,1);
  }
LAB_0043fc14:
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  blend_callback = (CDeformableModel_MotionBlendWeightFunc *)0x43fc30;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  pCVar9 = in_stack_00000004;
  iVar3 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                    (&in_stack_00000004->base_actor,(SCollisionInfo *)in_stack_ffffff74);
  if (iVar3 == 0) {
    bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar5 = (float)DAT_0083b124;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(in_stack_00000004[2].cloth_data + 0x54fc),
               *(CVector3f **)(in_stack_00000004[2].cloth_data + 0x5508));
    this_ptr_00 = local_14;
    source_quaternions = (CQuaternion4f *)auStack_80;
    auStack_80._0_4_ = pCVar9;
    *(uint *)(auStack_80 + (uint)bVar8 * -8 + 4) =
         *(uint *)(auStack_80 + (uint)bVar8 * -8 + -0xc);
    *(uint *)(auStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)((int)&stack0xffffff78 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)
     ((int)(auStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) + ((uint)bVar8 * -2 + 1) * 4) =
         ((uint *)((int)&stack0xffffff78 + (uint)bVar8 * -8 + (uint)bVar8 * -8))
         [(uint)bVar8 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (this_ptr_00,source_quaternions,fVar5,(int)bone_index,blend_callback);
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
switchD_0043fe37_caseD_6:
  return;
}
