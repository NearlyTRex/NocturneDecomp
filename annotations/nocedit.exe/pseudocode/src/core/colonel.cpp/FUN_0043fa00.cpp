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
  bool bVar2;
  CCharacter *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  int iVar6;
  SMotion *pSVar7;
  byte bVar8;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_186c [1521];
  CDeformableModelInstance *this_ptr;
  CQuaternion4f *source_quaternions;
  float fVar9;
  code *blend_callback;
  CQuaternion4f CStack_90;
  byte auStack_80 [24];
  float local_68;
  float local_64;
  float local_60;
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
  CDeformableModelInstance *pCStack_18;
  CDeformableModelInstance *local_14;
  
  bVar8 = 0;
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar4 == 0) {
    return;
  }
  fVar9 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar9;
  if (fVar9 < 0.0) {
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
  fVar9 = (float)12.566370614;
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar9;
  iVar4 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar4 == 0) {
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    switch(pSVar7->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
        iVar4 = 0;
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
          iVar6 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f4);
          in_stack_00000004[1].base_actor.location.position.x = 0.0;
          iVar4 = 0;
          *(uint *)(in_stack_00000004[2].cloth_data + 0x54f4) = (uint)(iVar6 == 0);
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
          bVar2 = true;
          if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) &&
             (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) != 2)) {
            iVar6 = core_hero_cpp_FUN_004f2af0();
            bVar2 = false;
            if (iVar6 != 0) goto LAB_0043fd60;
            local_24 = core_hero_cpp_FUN_004f2d70();
            if ((local_24 != 0) && (local_24 != 1)) {
              core_hero_cpp_FUN_004f2ed0();
            }
            if ((local_24 != 0) || (iVar6 = core_hero_cpp_FUN_004f2c40(), iVar6 != 0))
            goto LAB_0043fd60;
            iVar6 = core_hero_cpp_FUN_004f2f50();
            if (iVar6 != 0) {
              core_hero_cpp_FUN_004f30f0();
              goto LAB_0043fd60;
            }
          }
          else {
LAB_0043fd60:
            if (!bVar2) goto LAB_0043fd6e;
          }
          pCVar3 = in_stack_00000004 + 1;
          (pCVar3->base_actor).actor_name[0x14] = '\0';
          (pCVar3->base_actor).actor_name[0x15] = '\0';
          (pCVar3->base_actor).actor_name[0x16] = '\0';
          (pCVar3->base_actor).actor_name[0x17] = '\0';
        }
LAB_0043fd6e:
        *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
             (float)in_stack_00000004[1].base_actor.location.area_id *
             *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
        pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(in_stack_00000004->model).motion_controller);
        if (iVar4 != pSVar7->state_index) goto LAB_0043fad3;
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
                    (&(in_stack_00000004->model).motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
          goto switchD_0043fe37_caseD_5;
        }
        goto LAB_0043fcd4;
      }
      iVar4 = 2;
    }
LAB_0043fad3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar4,1);
  }
switchD_0043fe37_caseD_5:
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_38 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_34 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_30 = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    pCVar5 = &(in_stack_00000004->model).accumulated_root_motion;
    local_50 = pCVar5->x + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    local_4c = (in_stack_00000004->model).accumulated_root_motion.y +
               *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    local_68 = local_50 + local_38;
    local_48 = (in_stack_00000004->model).accumulated_root_motion.z +
               *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    local_64 = local_4c + local_34;
    local_60 = local_48 + local_30;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar5->x = (in_stack_00000004->model).accumulated_root_motion.y;
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
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&in_stack_00000004->base_actor,&local_5c,
                          &(in_stack_00000004->grabbed_by->location).position);
      pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar5);
      local_14 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y);
      fVar9 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        fVar9 = (float)local_14 + 5.3286462644388174e-315._0_4_;
      }
      if ((float)1.57079632675 < fVar9) {
        fVar9 = fVar9 + -3.141593f;
      }
      local_1c = in_stack_00000008 * (float)3.1415926535000001;
      local_20 = -local_1c;
      if (fVar9 < local_20) {
        fVar9 = local_20;
      }
      if (local_1c < fVar9) {
        fVar9 = local_1c;
      }
      (in_stack_00000004->base_actor).orient.bank =
           (in_stack_00000004->base_actor).orient.bank + fVar9;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (&in_stack_00000004->base_actor);
    }
    local_14 = (CDeformableModelInstance *)(in_stack_00000004->grabbed_by->vtable)._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
              (&in_stack_00000004->model,(CVector3f *)(auStack_80 + 0xc),0);
    iVar4 = (*(code *)local_14->transformed_vertices[0x11].x)();
    if (iVar4 == 0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_0043fc01:
      iVar4 = 0;
    }
    else {
      if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_0043fc01;
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) goto LAB_0043fc14;
      iVar4 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar4,1);
  }
LAB_0043fc14:
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  pCStack_18 = &in_stack_00000004->model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_18);
  iVar4 = (*(((in_stack_00000004->base_actor).vtable._uc)->_uc).isDamageable)(in_stack_00000004);
  if (iVar4 == 0) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar9 = *(float *)(in_stack_00000004[2].cloth_data + 0x5508);
    iVar4 = DAT_0083b124;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CVector3f *)(in_stack_00000004[2].cloth_data + 0x54fc),&CStack_90);
    this_ptr = local_14;
    source_quaternions = (CQuaternion4f *)auStack_80;
    auStack_80._0_4_ = CStack_90.w;
    *(uint *)(auStack_80 + (uint)bVar8 * -8 + 4) =
         *(uint *)(auStack_80 + (uint)bVar8 * -8 + -0xc);
    *(uint *)(auStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)(auStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8);
    *(uint *)
     ((int)(auStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) + ((uint)bVar8 * -2 + 1) * 4) =
         *(uint *)
          ((int)(auStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -8) + ((uint)bVar8 * -2 + 1) * 4
          );
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (this_ptr,source_quaternions,fVar9,iVar4,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
switchD_0043fe37_caseD_6:
  return;
}
