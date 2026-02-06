// Name: core_scat.cpp_CScat_process_FUN_005571f0
// Address: 005571f0
// Address Range: [[005571f0, 005578dd]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_process_FUN_005571f0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_process_FUN_005571f0(CScat *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  CDemonActor *pCVar8;
  float fVar9;
  CGame *pCVar10;
  int iVar11;
  CVector3f *pCVar12;
  SMotion *pSVar13;
  uint *puVar14;
  int desired_state_index;
  uint *puVar15;
  byte bVar16;
  float afStackY_185c [1521];
  CDeformableModelInstance *pCVar17;
  CQuaternion4f *source_quaternions;
  float fVar18;
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
  
  bVar16 = 0;
  iVar11 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  pCVar10 = g_CGamePtr;
  if (iVar11 == 0) {
    return;
  }
  (this_ptr->base).base.turn_speed = delta_time * (float)12.566370614;
  if (pCVar10->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar18 = (float)(this_ptr->base).unk1 - delta_time;
  (this_ptr->base).unk1 = (uint)fVar18;
  if (fVar18 < 0.0) {
    (this_ptr->base).unk1 = 0;
  }
  pCVar12 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar12->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_scat_cpp_CScat_FUN_00557d20(this_ptr);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar11 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar11 == 0) {
    if ((this_ptr->base).control_type == 2) {
      core_scat_cpp_CScat_FUN_005578e0(this_ptr);
    }
    pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(this_ptr->base).base.model.motion_controller);
    switch(pSVar13->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if ((this_ptr->base).base.field3_0x2410 != 0) {
        iVar11 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
        desired_state_index = 0;
        if (iVar11 != 0) {
          desired_state_index = 7;
        }
        if ((this_ptr->base).action_bindings.walk_key != 0) {
          iVar11 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
          if (iVar11 == 0) {
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
          iVar11 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
          if (iVar11 == 0) {
            desired_state_index = 3;
          }
          else {
            desired_state_index = 10;
          }
        }
        if (((((this_ptr->base).action_bindings.fire_key != 0) && (*(int *)this_ptr->unk != 0)) &&
            (*(int *)(this_ptr->unk + 0x14) != 0)) &&
           (iVar11 = (**(code **)(*(int *)(*(int *)(this_ptr->unk + 0x14) + 0x154) + 0xfc))(),
           iVar11 != 0)) {
          (**(code **)(*(int *)(*(int *)(this_ptr->unk + 0x14) + 0x154) + 0xf8))();
          iVar11 = *(int *)(this_ptr->unk + 0x14);
          (this_ptr->base).action_bindings.fire_key = 0;
          if (*(int *)(iVar11 + 0x2e0) == 8) {
            desired_state_index = 0xb;
          }
        }
        pCVar17 = &(this_ptr->base).base.model;
        (this_ptr->base).base.turn_angle_accumulator =
             *(float *)((this_ptr->base).unk2 + 4) * (this_ptr->base).base.turn_speed +
             (this_ptr->base).base.turn_angle_accumulator;
        pSVar13 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&pCVar17->motion_controller);
        if (desired_state_index != pSVar13->state_index) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar17->motion_controller,desired_state_index,1);
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
    pCVar12->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    uVar7 = (this_ptr->base).base.field22_0x25b0;
    if (uVar7 < 2) {
      if (uVar7 == 1) {
        iVar11 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
        if (iVar11 == 0) {
          iVar11 = 1;
        }
        else {
LAB_005572db:
          iVar11 = 9;
        }
      }
      else {
LAB_00557637:
        iVar11 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
        if (iVar11 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = 7;
        }
      }
    }
    else if (uVar7 < 3) {
      iVar11 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
      if (iVar11 != 0) goto LAB_005572db;
      iVar11 = 2;
    }
    else {
      if (uVar7 != 3) goto LAB_00557637;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
      iVar11 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
      if (iVar11 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar11,1);
  }
  pCVar8 = (this_ptr->base).base.grabbed_by;
  if (pCVar8 == (CDemonActor *)0x0) {
    pCVar12 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.field6_0x241c;
    fVar18 = pCVar12->x;
    fVar2 = pCVar1->x;
    fVar3 = (this_ptr->base).base.model.accumulated_root_motion.y;
    fVar4 = (this_ptr->base).base.field6_0x241c.y;
    fVar5 = (this_ptr->base).base.model.accumulated_root_motion.z;
    fVar6 = (this_ptr->base).base.field6_0x241c.z;
    fVar9 = (float)32;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar12->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar1->x = (this_ptr->base).base.field6_0x241c.y;
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * fVar9;
    CStack_70.z = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_60 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    local_5c = delta_time * (this_ptr->base).base.field7_0x2428.z;
    local_4c = fVar18 + fVar2 + CStack_70.z;
    local_48 = fVar3 + fVar4 + local_60;
    local_44 = fVar5 + fVar6 + local_5c;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  else {
    pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        ((CDemonActor *)this_ptr,&local_40,&(pCVar8->location).position);
    pCVar12 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_58,pCVar12);
    local_14 = (CDeformableModelInstance *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar12->y);
    pCVar17 = local_14;
    if ((float)local_14 < (float)-1.57079632675) {
      pCVar17 = (CDeformableModelInstance *)((float)local_14 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)pCVar17) {
      pCVar17 = (CDeformableModelInstance *)((float)pCVar17 + -3.141593f);
    }
    local_18 = (CDeformableModelInstance *)(delta_time * (float)3.1415926535000001);
    local_1c = (CDeformableModelInstance *)-(float)local_18;
    if ((float)pCVar17 < (float)local_1c) {
      pCVar17 = local_1c;
    }
    if ((float)local_18 < (float)pCVar17) {
      pCVar17 = local_18;
    }
    (this_ptr->base).base.base.orient.bank = (this_ptr->base).base.base.orient.bank + (float)pCVar17
    ;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    local_14 = (CDeformableModelInstance *)(((this_ptr->base).base.grabbed_by)->vtable)._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
              (&(this_ptr->base).base.model,&local_34,0);
    iVar11 = (*((CCharacter_vtable *)((int)local_14 + 0xec))->cfunc15)();
    if (iVar11 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_005573f5:
      iVar11 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_005573f5;
      if ((this_ptr->base).action_bindings.fire_key == 0) goto LAB_00557408;
      iVar11 = 0xf;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar11,1);
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
  iVar11 = core_scat_cpp_CScat_FUN_00558010(this_ptr);
  if ((iVar11 == 0) &&
     (iVar11 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)
                         ((CCharacter *)this_ptr), iVar11 == 0)) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar18 = *(float *)(this_ptr->unk + 0x10);
    iVar11 = INT_0310615c;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(this_ptr->unk + 4),&CStack_70);
    pCVar17 = local_1c;
    source_quaternions = &CStack_80;
    CStack_80.w = CStack_70.w;
    puVar15 = (uint *)((int)&CStack_80 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    puVar14 = (uint *)((int)&CStack_70 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
    *(uint *)((int)&CStack_80 + (uint)bVar16 * -8 + 4) =
         *(uint *)((int)&CStack_70 + (uint)bVar16 * -8 + 4);
    *puVar15 = *puVar14;
    puVar15[(uint)bVar16 * -2 + 1] = puVar14[(uint)bVar16 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCVar17,source_quaternions,fVar18,iVar11,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  core_scat_cpp_CScat_FUN_00558fd0(this_ptr);
switchD_00557686_caseD_5:
  return;
}
