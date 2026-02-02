// Name: core_scat.cpp_CScat_process_FUN_005571f0
// Address: 005571f0
// Address Range: [[005571f0, 005578dd]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_process_FUN_005571f0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_process_FUN_005571f0(CScat *this_ptr,float delta_time)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  CDemonActor *pCVar8;
  float fVar9;
  CHero *pCVar10;
  CGame *pCVar11;
  int iVar12;
  CVector3f *pCVar13;
  SMotion *pSVar14;
  uint *puVar15;
  int desired_state_index;
  uint *puVar16;
  byte bVar17;
  float afStackY_185c [1521];
  CDeformableModelInstance *pCVar18;
  CQuaternion4f *source_quaternions;
  float fVar19;
  code *blend_callback;
  CQuaternion4f CStack_80;
  CQuaternion4f CStack_70;
  float local_60;
  float local_5c;
  CVector3f local_58;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40;
  CVector3f local_34;
  CDeformableModelInstance *pCStack_20;
  CDeformableModelInstance *local_1c;
  CDeformableModelInstance *local_18;
  CDeformableModelInstance *local_14;
  
  bVar17 = 0;
  iVar12 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  pCVar11 = g_CGamePtr;
  if (iVar12 == 0) {
    return;
  }
  *(float *)((this_ptr->base).base.unk1 + 0x2c) = delta_time * (float)12.566370614;
  if (pCVar11->letterbox_mode != 0) {
    *(float *)((this_ptr->base).base.unk1 + 0x2c) =
         *(float *)((this_ptr->base).base.unk1 + 0x2c) * (float)0.33333333333333298;
  }
  fVar19 = (float)(this_ptr->base).unk1 - delta_time;
  (this_ptr->base).unk1 = (uint)fVar19;
  if (fVar19 < 0.0) {
    (this_ptr->base).unk1 = 0;
  }
  pCVar13 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar13->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_scat_cpp_CScat_FUN_00557d20(this_ptr);
  *(float *)((this_ptr->base).base.unk1 + 0x28) =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar12 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar12 == 0) {
    if ((this_ptr->base).control_type == 2) {
      core_scat_cpp_CScat_FUN_005578e0(this_ptr);
    }
    pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(this_ptr->base).base.model.motion_controller);
    switch(pSVar14->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if (*(int *)((this_ptr->base).base.unk1 + 4) != 0) {
        iVar12 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
        desired_state_index = 0;
        if (iVar12 != 0) {
          desired_state_index = 7;
        }
        if ((this_ptr->base).action_bindings.walk_key != 0) {
          iVar12 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
          if (iVar12 == 0) {
            if ((this_ptr->base).action_bindings.run_key == 0) {
              desired_state_index = 1;
            }
            else {
              desired_state_index = 2;
            }
          }
          else {
            desired_state_index = 9;
          }
        }
        if ((this_ptr->base).action_bindings.backup_key != 0) {
          iVar12 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
          if (iVar12 == 0) {
            desired_state_index = 3;
          }
          else {
            desired_state_index = 10;
          }
        }
        if (((((this_ptr->base).action_bindings.fire_key != 0) && (*(int *)this_ptr->unk != 0)) &&
            (*(int *)(this_ptr->unk + 0x14) != 0)) &&
           (iVar12 = (**(code **)(*(int *)(*(int *)(this_ptr->unk + 0x14) + 0x154) + 0xfc))(),
           iVar12 != 0)) {
          (**(code **)(*(int *)(*(int *)(this_ptr->unk + 0x14) + 0x154) + 0xf8))();
          iVar12 = *(int *)(this_ptr->unk + 0x14);
          (this_ptr->base).action_bindings.fire_key = 0;
          if (*(int *)(iVar12 + 0x2e0) == 8) {
            desired_state_index = 0xb;
          }
        }
        pCVar18 = &(this_ptr->base).base.model;
        *(float *)((this_ptr->base).base.unk1 + 0xc) =
             *(float *)((this_ptr->base).unk2 + 4) * *(float *)((this_ptr->base).base.unk1 + 0x2c) +
             *(float *)((this_ptr->base).base.unk1 + 0xc);
        pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&pCVar18->motion_controller);
        if (desired_state_index != pSVar14->state_index) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar18->motion_controller,desired_state_index,1);
        }
        if ((this_ptr->base).action_bindings.draw_key != 0) {
          (this_ptr->base).action_bindings.draw_key = 0;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        }
      }
      break;
    case 5:
      goto switchD_00557686_caseD_5;
    }
  }
  else {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar13->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    uVar7 = *(uint *)((this_ptr->base).base.unk2 + 0x10);
    if (uVar7 < 2) {
      if (uVar7 == 1) {
        iVar12 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
        if (iVar12 == 0) {
          iVar12 = 1;
        }
        else {
LAB_005572db:
          iVar12 = 9;
        }
      }
      else {
LAB_00557637:
        iVar12 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
        if (iVar12 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = 7;
        }
      }
    }
    else if (uVar7 < 3) {
      iVar12 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
      if (iVar12 != 0) goto LAB_005572db;
      iVar12 = 2;
    }
    else {
      if (uVar7 != 3) goto LAB_00557637;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
      iVar12 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar12,1);
  }
  pCVar8 = (this_ptr->base).base.grabbed_by;
  if (pCVar8 == (CDemonActor *)0x0) {
    pCVar13 = &(this_ptr->base).base.model.accumulated_root_motion;
    pcVar1 = (this_ptr->base).base.unk1 + 0x10;
    fVar19 = pCVar13->x;
    fVar2 = *(float *)pcVar1;
    fVar3 = (this_ptr->base).base.model.accumulated_root_motion.y;
    fVar4 = *(float *)((this_ptr->base).base.unk1 + 0x14);
    fVar5 = (this_ptr->base).base.model.accumulated_root_motion.z;
    fVar6 = *(float *)((this_ptr->base).base.unk1 + 0x18);
    fVar9 = (float)32;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar13->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    pCVar10 = &this_ptr->base;
    (pCVar10->base).unk1[0x18] = '\0';
    (pCVar10->base).unk1[0x19] = '\0';
    (pCVar10->base).unk1[0x1a] = '\0';
    (pCVar10->base).unk1[0x1b] = '\0';
    *(uint *)((this_ptr->base).base.unk1 + 0x14) =
         *(uint *)((this_ptr->base).base.unk1 + 0x18);
    *(float *)pcVar1 = *(float *)((this_ptr->base).base.unk1 + 0x14);
    *(float *)((this_ptr->base).base.unk1 + 0x20) =
         *(float *)((this_ptr->base).base.unk1 + 0x20) - delta_time * fVar9;
    CStack_70.z = *(float *)((this_ptr->base).base.unk1 + 0x1c) * delta_time;
    local_60 = *(float *)((this_ptr->base).base.unk1 + 0x20) * delta_time;
    local_5c = delta_time * *(float *)((this_ptr->base).base.unk1 + 0x24);
    local_4c = fVar19 + fVar2 + CStack_70.z;
    local_48 = fVar3 + fVar4 + local_60;
    local_44 = fVar5 + fVar6 + local_5c;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  else {
    pCVar13 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,&local_40,&(pCVar8->location).position);
    pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_58,pCVar13);
    local_14 = (CDeformableModelInstance *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar13->y);
    pCVar18 = local_14;
    if ((float)local_14 < (float)-1.57079632675) {
      pCVar18 = (CDeformableModelInstance *)((float)local_14 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)pCVar18) {
      pCVar18 = (CDeformableModelInstance *)((float)pCVar18 + -3.141593f);
    }
    local_18 = (CDeformableModelInstance *)(delta_time * (float)3.1415926535000001);
    local_1c = (CDeformableModelInstance *)-(float)local_18;
    if ((float)pCVar18 < (float)local_1c) {
      pCVar18 = local_1c;
    }
    if ((float)local_18 < (float)pCVar18) {
      pCVar18 = local_18;
    }
    (this_ptr->base).base.base.orient.bank = (this_ptr->base).base.base.orient.bank + (float)pCVar18
    ;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    local_14 = (CDeformableModelInstance *)(((this_ptr->base).base.grabbed_by)->vtable)._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
              (&(this_ptr->base).base.model,&local_34,0);
    iVar12 = (*((CCharacter_vtable *)((int)local_14 + 0xec))->cfunc15)();
    if (iVar12 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_005573f5:
      iVar12 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_005573f5;
      if ((this_ptr->base).action_bindings.fire_key == 0) goto LAB_00557408;
      iVar12 = 0xf;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar12,1);
  }
LAB_00557408:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&(this_ptr->base).inventory);
  if (*(int *)(this_ptr->unk + 0x14) != 0) {
    (**(code **)(*(int *)(*(int *)(this_ptr->unk + 0x14) + 0x154) + 4))();
  }
  core_scat_cpp_CScat_FUN_00558060(this_ptr);
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).cfunc8)();
  local_14 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0xc);
  local_14 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0xd);
  local_14 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,4);
  local_14 = (CDeformableModelInstance *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,5);
  core_scat_cpp_CScat_FUN_00558720(this_ptr);
  pCStack_20 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_20);
  core_scat_cpp_CScat_FUN_005582c0(this_ptr);
  iVar12 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
  if ((iVar12 == 0) &&
     (iVar12 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)
                         ((CCharacter *)this_ptr), iVar12 == 0)) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar19 = *(float *)(this_ptr->unk + 0x10);
    iVar12 = INT_0310615c;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(this_ptr->unk + 4),&CStack_70);
    pCVar18 = local_1c;
    source_quaternions = &CStack_80;
    CStack_80.w = CStack_70.w;
    puVar16 = (uint *)((int)&CStack_80 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    puVar15 = (uint *)((int)&CStack_70 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    *(uint *)((int)&CStack_80 + (uint)bVar17 * -8 + 4) =
         *(uint *)((int)&CStack_70 + (uint)bVar17 * -8 + 4);
    *puVar16 = *puVar15;
    puVar16[(uint)bVar17 * -2 + 1] = puVar15[(uint)bVar17 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCVar18,source_quaternions,fVar19,iVar12,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  core_scat_cpp_CScat_FUN_00558fd0(this_ptr);
switchD_00557686_caseD_5:
  return;
}
