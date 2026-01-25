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
  bool bVar1;
  CCharacter *pCVar2;
  CGame *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  SMotion *pSVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_1864 [1521];
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *source_quaternions;
  float fVar13;
  code *blend_callback;
  CQuaternion4f CStack_88;
  CQuaternion4f CStack_78;
  float local_68;
  float local_64;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  float local_3c;
  float local_38;
  float local_34;
  CDeformableModelInstance *local_28;
  CDeformableModelInstance *pCStack_24;
  CDeformableModelInstance *local_20;
  int local_1c;
  CDeformableModelInstance *local_18;
  
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
  fVar13 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar13;
  if (fVar13 < 0.0) {
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
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    switch(pSVar6->state_index) {
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
          uVar7 = (uint)(iVar4 == 0);
          *(uint *)(in_stack_00000004[2].cloth_data + 0x54f4) = uVar7;
          if (uVar7 == 0) {
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
            iVar8 = core_hero_cpp_FUN_004f2af0();
            bVar1 = false;
            if (iVar8 != 0) goto LAB_004f11d6;
            local_1c = core_hero_cpp_FUN_004f2d70();
            if ((local_1c != 0) && (local_1c != 1)) {
              core_hero_cpp_FUN_004f2ed0();
            }
            if ((local_1c != 0) || (iVar8 = core_hero_cpp_FUN_004f2c40(), iVar8 != 0))
            goto LAB_004f11d6;
            iVar8 = core_hero_cpp_FUN_004f2f50();
            if (iVar8 != 0) {
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
        pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(in_stack_00000004->model).motion_controller);
        if (iVar4 != pSVar6->state_index) goto LAB_004f0f1c;
      }
      break;
    case 9:
      goto switchD_004f12ce_caseD_9;
    }
  }
  else {
    uVar7 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
    if (uVar7 < 2) {
      if (uVar7 == 1) {
        iVar4 = 1;
      }
      else {
LAB_004f1134:
        iVar4 = 0;
      }
    }
    else {
      if (2 < uVar7) {
        if (uVar7 == 3) {
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
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    if ((pSVar6->state_index == 0xe) || (pSVar6->state_index == 0xf)) {
      local_38 = 0.0;
      local_3c = 0.0;
      local_34 = 0.0;
    }
    CStack_78.z = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_68 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_64 = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    local_3c = local_3c + CStack_78.z;
    local_38 = local_38 + local_68;
    local_34 = local_34 + local_64;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
  }
  else {
    if (in_stack_00000004->grabbed_type == 0) {
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&in_stack_00000004->base_actor,&local_60,
                          &(in_stack_00000004->grabbed_by->location).position);
      pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_54,pCVar5);
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar5->y);
      pCVar12 = local_18;
      if ((float)local_18 < (float)-1.57079632675) {
        pCVar12 = (CDeformableModelInstance *)((float)local_18 + 3.141593f);
      }
      if ((float)1.57079632675 < (float)pCVar12) {
        pCVar12 = (CDeformableModelInstance *)((float)pCVar12 + -3.141593f);
      }
      local_20 = (CDeformableModelInstance *)(in_stack_00000008 * (float)3.1415926535000001);
      local_28 = (CDeformableModelInstance *)-(float)local_20;
      if ((float)pCVar12 < (float)local_28) {
        pCVar12 = local_28;
      }
      if ((float)local_20 < (float)pCVar12) {
        pCVar12 = local_20;
      }
      (in_stack_00000004->base_actor).orient.bank =
           (in_stack_00000004->base_actor).orient.bank + (float)pCVar12;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (&in_stack_00000004->base_actor);
    }
    local_18 = (CDeformableModelInstance *)(in_stack_00000004->grabbed_by->vtable)._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
              (&in_stack_00000004->model,&local_48,0);
    iVar4 = (*((CCharacter_vtable *)((int)local_18 + 0xec))->cfunc15)();
    if (iVar4 == 0) {
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
  pCStack_24 = &in_stack_00000004->model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_24);
  iVar4 = (*(((in_stack_00000004->base_actor).vtable._uc)->_uc).isDamageable)(in_stack_00000004);
  if ((iVar4 == 0) &&
     (pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&local_20->motion_controller), pSVar6->state_index != 0x13)) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar13 = *(float *)(in_stack_00000004[2].cloth_data + 0x5508);
    iVar4 = DAT_02db8700;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CVector3f *)(in_stack_00000004[2].cloth_data + 0x54fc),&CStack_88);
    pCVar12 = local_20;
    source_quaternions = &CStack_78;
    CStack_78.w = CStack_88.w;
    puVar10 = (uint *)((int)&CStack_78 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    puVar9 = (uint *)((int)&CStack_88 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(uint *)((int)&CStack_78 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_88 + (uint)bVar11 * -8 + 4);
    *puVar10 = *puVar9;
    puVar10[(uint)bVar11 * -2 + 1] = puVar9[(uint)bVar11 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCVar12,source_quaternions,fVar13,iVar4,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
switchD_004f12ce_caseD_9:
  return;
}
