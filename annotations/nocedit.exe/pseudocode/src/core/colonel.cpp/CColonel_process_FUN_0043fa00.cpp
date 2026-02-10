// Name: core_colonel.cpp_CColonel_process_FUN_0043fa00
// Address: 0043fa00
// Address Range: [[0043fa00, 0043ff16]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_process_FUN_0043fa00(CColonel *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_colonel_cpp_CColonel_process_FUN_0043fa00(CColonel *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  uint uVar2;
  CDemonActor *pCVar3;
  CCharacter *this_ptr_01;
  bool bVar4;
  int iVar5;
  CVector3f *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  CDeformableModelInstance *unaff_ESI;
  byte bVar9;
  float afStackY_1860 [1519];
  float fVar10;
  CQuaternion4f *source_quaternions;
  code *blend_callback;
  float in_stack_ffffff78;
  CQuaternion4f CStack_84;
  byte local_74 [16];
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
  CCharacter_full_vtable *local_14;
  
  bVar9 = 0;
  iVar5 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  fVar10 = (this_ptr->base).unk1 - delta_time;
  (this_ptr->base).unk1 = fVar10;
  if (fVar10 < 0.0) {
    (this_ptr->base).unk1 = 0.0;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_colonel_cpp_CColonel_FUN_00440430(this_ptr);
  if ((this_ptr->base).control_type == 2) {
    core_colonel_cpp_CColonel_FUN_0043ff20(this_ptr);
  }
  fVar10 = (float)12.566370614;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar10;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  this_ptr_00 = &(this_ptr->base).base.model;
  if (iVar5 == 0) {
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    switch(pSVar8->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if ((this_ptr->base).base.field3_0x2410 != 0) {
        iVar5 = 0;
        if ((this_ptr->base).action_bindings.walk_key != 0) {
          if ((this_ptr->base).action_bindings.run_key == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
        }
        if ((this_ptr->base).action_bindings.backup_key != 0) {
          iVar5 = 3;
        }
        if ((this_ptr->base).action_bindings.draw_key != 0) {
          iVar7 = *(int *)this_ptr->unk;
          (this_ptr->base).action_bindings.draw_key = 0;
          iVar5 = 0;
          *(uint *)this_ptr->unk = (uint)(iVar7 == 0);
        }
        if ((this_ptr->base).action_bindings.fire_key != 0) {
          bVar4 = true;
          if ((*(int *)this_ptr->unk == 0) && ((this_ptr->base).control_type != 2)) {
            iVar7 = core_hero_cpp_CHero_FUN_004f2af0(&this_ptr->base);
            bVar4 = false;
            if (iVar7 != 0) goto LAB_0043fd60;
            local_24 = core_hero_cpp_CHero_FUN_004f2d70(&this_ptr->base);
            if ((local_24 != 0) && (local_24 != 1)) {
              core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
            }
            if ((local_24 != 0) ||
               (iVar7 = core_hero_cpp_CHero_FUN_004f2c40(&this_ptr->base), iVar7 != 0))
            goto LAB_0043fd60;
            iVar7 = core_hero_cpp_CHero_FUN_004f2f50(&this_ptr->base);
            if (iVar7 != 0) {
              core_hero_cpp_CHero_FUN_004f30f0(&this_ptr->base);
              goto LAB_0043fd60;
            }
          }
          else {
LAB_0043fd60:
            if (!bVar4) goto LAB_0043fd6e;
          }
          (this_ptr->base).action_bindings.fire_key = 0;
        }
LAB_0043fd6e:
        (this_ptr->base).base.turn_angle_accumulator =
             *(float *)((this_ptr->base).unk2 + 4) * (this_ptr->base).base.turn_speed;
        pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(this_ptr->base).base.model.motion_controller);
        if (iVar5 != pSVar8->state_index) goto LAB_0043fad3;
      }
      break;
    case 6:
      goto switchD_0043fe37_caseD_6;
    }
  }
  else {
    uVar2 = (this_ptr->base).base.is_walking;
    if (uVar2 < 2) {
      if (uVar2 == 1) {
        iVar5 = 1;
      }
      else {
LAB_0043fcd4:
        iVar5 = 0;
      }
    }
    else {
      if (2 < uVar2) {
        if (uVar2 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto switchD_0043fe37_caseD_5;
        }
        goto LAB_0043fcd4;
      }
      iVar5 = 2;
    }
LAB_0043fad3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
switchD_0043fe37_caseD_5:
  pCVar3 = (this_ptr->base).base.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_38 = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_34 = (this_ptr->base).base.field7_0x2428.y * delta_time;
    local_30 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar6 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.field6_0x241c;
    local_50 = pCVar6->x + pCVar1->x;
    local_4c = (this_ptr->base).base.model.accumulated_root_motion.y +
               (this_ptr->base).base.field6_0x241c.y;
    local_74._12_4_ = local_50 + local_38;
    local_48 = (this_ptr->base).base.model.accumulated_root_motion.z +
               (this_ptr->base).base.field6_0x241c.z;
    local_64 = local_4c + local_34;
    local_60 = local_48 + local_30;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar6->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    fVar10 = (this_ptr->base).base.field6_0x241c.z;
    (this_ptr->base).base.field6_0x241c.y = fVar10;
    pCVar1->x = fVar10;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40
              ((CCharacter *)this_ptr,(CVector3f *)(local_74 + 0xc));
  }
  else {
    if ((this_ptr->base).base.grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_5c,&(pCVar3->location).position);
      pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar6);
      local_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y)
      ;
      fVar10 = (float)local_14;
      if ((float)local_14 < (float)-1.57079632675) {
        fVar10 = (float)local_14 + 5.3286462644388174e-315._0_4_;
      }
      if ((float)1.57079632675 < fVar10) {
        fVar10 = fVar10 + -3.141593f;
      }
      local_1c = delta_time * (float)3.1415926535000001;
      local_20 = -local_1c;
      if (fVar10 < local_20) {
        fVar10 = local_20;
      }
      if (local_1c < fVar10) {
        fVar10 = local_1c;
      }
      (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fVar10;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    }
    this_ptr_01 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    local_14 = (this_ptr_01->base).vtable._uc;
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&(this_ptr->base).base.model,(CVector3f *)local_74,0);
    iVar5 = (*(local_14->_uc).attractActorToward)(this_ptr_01,(CDemonActor *)this_ptr,pCVar6);
    if (iVar5 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_0043fc01:
      iVar5 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_0043fc01;
      if ((this_ptr->base).action_bindings.fire_key == 0) goto LAB_0043fc14;
      iVar5 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar5,1);
  }
LAB_0043fc14:
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  iVar5 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (iVar5 == 0) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar10 = *(float *)(this_ptr->unk + 0x14);
    iVar5 = INT_0083b124;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(this_ptr->unk + 8),&CStack_84);
    source_quaternions = (CQuaternion4f *)local_74;
    local_74._0_4_ = CStack_84.w;
    *(uint *)(local_74 + (uint)bVar9 * -8 + 4) =
         *(uint *)(local_74 + (uint)bVar9 * -8 + -0xc);
    *(uint *)(local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)(local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8);
    *(uint *)
     ((int)(local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) + ((uint)bVar9 * -2 + 1) * 4) =
         *(uint *)
          ((int)(local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -8) + ((uint)bVar9 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (unaff_ESI,source_quaternions,fVar10,iVar5,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_ffffff78);
switchD_0043fe37_caseD_6:
  return;
}
