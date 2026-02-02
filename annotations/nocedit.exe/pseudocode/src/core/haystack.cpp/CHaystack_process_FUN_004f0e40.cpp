// Name: core_haystack.cpp_CHaystack_process_FUN_004f0e40
// Address: 004f0e40
// Address Range: [[004f0e40, 004f13e7]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_process_FUN_004f0e40(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_process_FUN_004f0e40(CHaystack *this_ptr,float delta_time)

{
  char *pcVar1;
  CDemonActor *pCVar2;
  bool bVar3;
  CHero *pCVar4;
  CGame *pCVar5;
  int iVar6;
  CVector3f *pCVar7;
  SMotion *pSVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  float afStackY_1864 [1521];
  CDeformableModelInstance *pCVar14;
  CQuaternion4f *source_quaternions;
  float fVar15;
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
  
  bVar13 = 0;
  iVar6 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar6 == 0) {
    return;
  }
  if ((this_ptr->base).control_type == 2) {
    core_haystack_cpp_CHaystack_FUN_004f13f0(this_ptr);
  }
  pCVar5 = g_CGamePtr;
  *(float *)((this_ptr->base).base.unk1 + 0x2c) = delta_time * (float)12.566370614;
  if (pCVar5->letterbox_mode != 0) {
    *(float *)((this_ptr->base).base.unk1 + 0x2c) =
         *(float *)((this_ptr->base).base.unk1 + 0x2c) * (float)0.33333333333333298;
  }
  fVar15 = (float)(this_ptr->base).unk1 - delta_time;
  (this_ptr->base).unk1 = (uint)fVar15;
  if (fVar15 < 0.0) {
    (this_ptr->base).unk1 = 0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_haystack_cpp_CHaystack_FUN_004f1970(this_ptr);
  iVar6 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  pCVar14 = &(this_ptr->base).base.model;
  if (iVar6 == 0) {
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar14->motion_controller);
    switch(pSVar8->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)((this_ptr->base).base.unk1 + 4) != 0) {
        iVar6 = 0;
        if (*(int *)this_ptr->unk != 0) {
          iVar6 = 10;
        }
        if ((this_ptr->base).action_bindings.walk_key != 0) {
          if ((this_ptr->base).action_bindings.run_key == 0) {
            iVar6 = 1;
          }
          else {
            iVar6 = 2;
          }
        }
        if ((this_ptr->base).action_bindings.backup_key != 0) {
          iVar6 = 3;
        }
        if ((this_ptr->base).action_bindings.draw_key != 0) {
          iVar6 = *(int *)this_ptr->unk;
          (this_ptr->base).action_bindings.draw_key = 0;
          uVar9 = (uint)(iVar6 == 0);
          *(uint *)this_ptr->unk = uVar9;
          if (uVar9 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = 10;
          }
        }
        if ((this_ptr->base).action_bindings.fire_key != 0) {
          bVar3 = true;
          if ((*(int *)this_ptr->unk == 0) && ((this_ptr->base).control_type != 2)) {
            iVar10 = core_hero_cpp_CHero_FUN_004f2af0(&this_ptr->base);
            bVar3 = false;
            if (iVar10 != 0) goto LAB_004f11d6;
            local_1c = core_hero_cpp_CHero_FUN_004f2d70(&this_ptr->base);
            if ((local_1c != 0) && (local_1c != 1)) {
              core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
            }
            if ((local_1c != 0) ||
               (iVar10 = core_hero_cpp_CHero_FUN_004f2c40(&this_ptr->base), iVar10 != 0))
            goto LAB_004f11d6;
            iVar10 = core_hero_cpp_CHero_FUN_004f2f50(&this_ptr->base);
            if (iVar10 != 0) {
              core_hero_cpp_CHero_FUN_004f30f0(&this_ptr->base);
              goto LAB_004f11d6;
            }
          }
          else {
LAB_004f11d6:
            if (!bVar3) goto LAB_004f11f7;
          }
          iVar6 = *(int *)(this_ptr->unk + 4);
          (this_ptr->base).action_bindings.fire_key = 0;
          if (iVar6 == 0) {
            iVar6 = 0xf;
          }
          else {
            iVar6 = 0xe;
          }
        }
LAB_004f11f7:
        *(float *)((this_ptr->base).base.unk1 + 0xc) =
             *(float *)((this_ptr->base).unk2 + 4) * *(float *)((this_ptr->base).base.unk1 + 0x2c);
        pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(this_ptr->base).base.model.motion_controller);
        if (iVar6 != pSVar8->state_index) goto LAB_004f0f1c;
      }
      break;
    case 9:
      goto switchD_004f12ce_caseD_9;
    }
  }
  else {
    uVar9 = *(uint *)((this_ptr->base).base.unk2 + 0x10);
    if (uVar9 < 2) {
      if (uVar9 == 1) {
        iVar6 = 1;
      }
      else {
LAB_004f1134:
        iVar6 = 0;
      }
    }
    else {
      if (2 < uVar9) {
        if (uVar9 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar14->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto switchD_004f12ce_caseD_8;
        }
        goto LAB_004f1134;
      }
      iVar6 = 2;
    }
LAB_004f0f1c:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
switchD_004f12ce_caseD_8:
  pCVar2 = (this_ptr->base).base.grabbed_by;
  if (pCVar2 == (CDemonActor *)0x0) {
    pCVar7 = &(this_ptr->base).base.model.accumulated_root_motion;
    pcVar1 = (this_ptr->base).base.unk1 + 0x10;
    *(float *)((this_ptr->base).base.unk1 + 0x20) =
         *(float *)((this_ptr->base).base.unk1 + 0x20) - delta_time * (float)32;
    local_3c = pCVar7->x + *(float *)pcVar1;
    local_38 = (this_ptr->base).base.model.accumulated_root_motion.y +
               *(float *)((this_ptr->base).base.unk1 + 0x14);
    local_34 = (this_ptr->base).base.model.accumulated_root_motion.z +
               *(float *)((this_ptr->base).base.unk1 + 0x18);
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar7->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    pCVar4 = &this_ptr->base;
    (pCVar4->base).unk1[0x18] = '\0';
    (pCVar4->base).unk1[0x19] = '\0';
    (pCVar4->base).unk1[0x1a] = '\0';
    (pCVar4->base).unk1[0x1b] = '\0';
    *(uint *)((this_ptr->base).base.unk1 + 0x14) =
         *(uint *)((this_ptr->base).base.unk1 + 0x18);
    *(float *)pcVar1 = *(float *)((this_ptr->base).base.unk1 + 0x14);
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if ((pSVar8->state_index == 0xe) || (pSVar8->state_index == 0xf)) {
      local_38 = 0.0;
      local_3c = 0.0;
      local_34 = 0.0;
    }
    CStack_78.z = *(float *)((this_ptr->base).base.unk1 + 0x1c) * delta_time;
    local_68 = *(float *)((this_ptr->base).base.unk1 + 0x20) * delta_time;
    local_64 = delta_time * *(float *)((this_ptr->base).base.unk1 + 0x24);
    local_3c = local_3c + CStack_78.z;
    local_38 = local_38 + local_68;
    local_34 = local_34 + local_64;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_60,&(pCVar2->location).position);
      pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_54,pCVar7);
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar7->y);
      pCVar14 = local_18;
      if ((float)local_18 < (float)-1.57079632675) {
        pCVar14 = (CDeformableModelInstance *)((float)local_18 + 3.141593f);
      }
      if ((float)1.57079632675 < (float)pCVar14) {
        pCVar14 = (CDeformableModelInstance *)((float)pCVar14 + -3.141593f);
      }
      local_20 = (CDeformableModelInstance *)(delta_time * (float)3.1415926535000001);
      local_28 = (CDeformableModelInstance *)-(float)local_20;
      if ((float)pCVar14 < (float)local_28) {
        pCVar14 = local_28;
      }
      if ((float)local_20 < (float)pCVar14) {
        pCVar14 = local_20;
      }
      (this_ptr->base).base.base.orient.bank =
           (this_ptr->base).base.base.orient.bank + (float)pCVar14;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    local_18 = (CDeformableModelInstance *)(((this_ptr->base).base.grabbed_by)->vtable)._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
              (&(this_ptr->base).base.model,&local_48,0);
    iVar6 = (*((CCharacter_vtable *)((int)local_18 + 0xec))->cfunc15)();
    if (iVar6 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004f1041:
      iVar6 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004f1041;
      if ((this_ptr->base).action_bindings.fire_key == 0) goto LAB_004f1054;
      iVar6 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
LAB_004f1054:
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  pCStack_24 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_24);
  iVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr);
  if ((iVar6 == 0) &&
     (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&local_20->motion_controller), pSVar8->state_index != 0x13)) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar15 = *(float *)(this_ptr->unk + 0x14);
    iVar6 = INT_02db8700;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(this_ptr->unk + 8),&CStack_88);
    pCVar14 = local_20;
    source_quaternions = &CStack_78;
    CStack_78.w = CStack_88.w;
    puVar12 = (uint *)((int)&CStack_78 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    puVar11 = (uint *)((int)&CStack_88 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(uint *)((int)&CStack_78 + (uint)bVar13 * -8 + 4) =
         *(uint *)((int)&CStack_88 + (uint)bVar13 * -8 + 4);
    *puVar12 = *puVar11;
    puVar12[(uint)bVar13 * -2 + 1] = puVar11[(uint)bVar13 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCVar14,source_quaternions,fVar15,iVar6,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
switchD_004f12ce_caseD_9:
  return;
}
