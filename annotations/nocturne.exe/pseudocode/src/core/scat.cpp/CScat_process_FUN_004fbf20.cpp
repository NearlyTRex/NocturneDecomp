// Name: core_scat.cpp_CScat_process_FUN_004fbf20
// Address: 004fbf20
// Address Range: [[004fbf20, 004fc60d]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_process_FUN_004fbf20(CScat *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_process_FUN_004fbf20(CScat *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CCharacter *pCVar7;
  CCharacter_full_vtable *pCVar8;
  CWeapon *pCVar9;
  float fVar10;
  CGame *pCVar11;
  int iVar12;
  CVector3f *pCVar13;
  CDeformableModelInstance *pCVar14;
  CDemonActor *pCVar15;
  float fVar16;
  EDeathState EVar17;
  SMotion *pSVar18;
  CDeformableModelInstance *unaff_EBX;
  uint uVar19;
  uint *puVar20;
  int desired_state_index;
  uint *puVar21;
  byte bVar22;
  float afStackY_1844 [1516];
  CDemonActor *in_stack_ffffff78;
  int in_stack_ffffff7c;
  CDemonActor *in_stack_ffffff84;
  CQuaternion4f *source_quaternions;
  code *blend_callback;
  CQuaternion4f CStack_68;
  CQuaternion4f local_58;
  float local_48;
  CVector3f local_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  
  bVar22 = 0;
  iVar12 = core_charactr_cpp_CCharacter_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  pCVar11 = g_CGame_PTR_005b9354;
  if (iVar12 == 0) {
    return;
  }
  (this_ptr->base).base.turn_speed = delta_time * (float)12.566370614;
  if (pCVar11->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar16 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar16;
  if (fVar16 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar13 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar13->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar12 = core_charactr_cpp_CCharacter_FUN_00428c00((CCharacter *)this_ptr,delta_time);
  if (iVar12 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_scat_cpp_CScat_updateAI_FUN_004fc610(this_ptr,delta_time);
    }
    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                        (&(this_ptr->base).base.model.motion_controller);
    switch(pSVar18->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
        desired_state_index = 0;
        if (iVar12 != 0) {
          desired_state_index = 7;
        }
        if ((this_ptr->base).player_input.action_state.walk != 0) {
          iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
          if (iVar12 == 0) {
            if ((this_ptr->base).player_input.action_state.run == 0) {
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
        if ((this_ptr->base).player_input.action_state.backup != 0) {
          iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
          if (iVar12 == 0) {
            desired_state_index = 3;
          }
          else {
            desired_state_index = 10;
          }
        }
        if (((((this_ptr->base).player_input.action_state.fire != 0) && (this_ptr->guns_drawn != 0))
            && (pCVar7 = (CCharacter *)this_ptr->weapon_actor, pCVar7 != (CCharacter *)0x0)) &&
           (iVar12 = (*(((pCVar7->base).vtable._uc)->_uc).canBeGrabbed)
                               (pCVar7,in_stack_ffffff78,in_stack_ffffff7c), iVar12 != 0)) {
          (*(((((CCharacter *)this_ptr->weapon_actor)->base).vtable._uc)->_uc).isGrabbable)
                    ((CCharacter *)this_ptr->weapon_actor,in_stack_ffffff84);
          pCVar9 = this_ptr->weapon_actor;
          (this_ptr->base).player_input.action_state.fire = 0;
          if (pCVar9->weapon_type == WEAPON_TYPE_BARON) {
            desired_state_index = 0xb;
          }
        }
        pCVar14 = &(this_ptr->base).base.model;
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed +
             (this_ptr->base).base.turn_angle_accumulator;
        pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                            (&pCVar14->motion_controller);
        if (desired_state_index != pSVar18->state_index) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar14->motion_controller,desired_state_index,1);
        }
        if ((this_ptr->base).player_input.action_state.draw != 0) {
          (this_ptr->base).player_input.action_state.draw = 0;
          (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)
                    ((CEnemy *)this_ptr,(float)(uint)(this_ptr->guns_drawn == 0));
        }
      }
      break;
    case 5:
      goto switchD_004fc3b6_caseD_5;
    }
  }
  else {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar13->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    uVar19 = (this_ptr->base).base.is_walking;
    if (uVar19 < 2) {
      if (uVar19 == 1) {
        iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
        if (iVar12 == 0) {
          iVar12 = 1;
        }
        else {
LAB_004fc00b:
          iVar12 = 9;
        }
      }
      else {
LAB_004fc367:
        iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
        if (iVar12 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = 7;
        }
      }
    }
    else if (uVar19 < 3) {
      iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
      if (iVar12 != 0) goto LAB_004fc00b;
      iVar12 = 2;
    }
    else {
      if (uVar19 != 3) goto LAB_004fc367;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",this_ptr);
      iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,iVar12,1);
  }
  pCVar15 = (this_ptr->base).base.grabbed_by;
  if (pCVar15 == (CDemonActor *)0x0) {
    pCVar13 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    fVar16 = pCVar13->x;
    fVar2 = pCVar1->x;
    fVar3 = (this_ptr->base).base.model.accumulated_root_motion.y;
    fVar4 = (this_ptr->base).base.position_delta.y;
    fVar5 = (this_ptr->base).base.model.accumulated_root_motion.z;
    fVar6 = (this_ptr->base).base.position_delta.z;
    fVar10 = (float)32;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar13->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.velocity.y = (this_ptr->base).base.velocity.y - delta_time * fVar10;
    local_58.y = (this_ptr->base).base.velocity.x * delta_time;
    local_58.z = (this_ptr->base).base.velocity.y * delta_time;
    local_48 = delta_time * (this_ptr->base).base.velocity.z;
    CStack_38.x = fVar16 + fVar2 + local_58.y;
    CStack_38.y = fVar3 + fVar4 + local_58.z;
    CStack_38.z = fVar5 + fVar6 + local_48;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&CStack_38);
  }
  else {
    pCVar13 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)this_ptr,&CStack_2c,&(pCVar15->location).position);
    pCVar13 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_44,pCVar13);
    pCVar14 = (CDeformableModelInstance *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar13->y)
    ;
    if ((float)pCVar14 < (float)-1.57079632675) {
      pCVar14 = (CDeformableModelInstance *)((float)pCVar14 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)pCVar14) {
      pCVar14 = (CDeformableModelInstance *)((float)pCVar14 + 1.5938625219265179e-314._0_4_);
    }
    unaff_EBX = (CDeformableModelInstance *)(delta_time * (float)3.1415926535000001);
    if ((float)pCVar14 < -(float)unaff_EBX) {
      pCVar14 = (CDeformableModelInstance *)-(float)unaff_EBX;
    }
    if ((float)unaff_EBX < (float)pCVar14) {
      pCVar14 = unaff_EBX;
    }
    (this_ptr->base).base.base.orient.vec.y =
         (this_ptr->base).base.base.orient.vec.y + (float)pCVar14;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)this_ptr);
    pCVar7 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    pCVar8 = (pCVar7->base).vtable._uc;
    pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                        (&(this_ptr->base).base.model,&CStack_20,0);
    iVar12 = (*(pCVar8->_uc).attractActorToward)(pCVar7,(CDemonActor *)this_ptr,pCVar13);
    if (iVar12 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004fc125:
      iVar12 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004fc125;
      if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_004fc138;
      iVar12 = 0xf;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.motion_controller,iVar12,1);
  }
LAB_004fc138:
  core_inv_cpp_CInventory_updateInventory_FUN_004c1850(&(this_ptr->base).inventory);
  pCVar9 = this_ptr->weapon_actor;
  if (pCVar9 != (CWeapon *)0x0) {
    (*((pCVar9->base).vtable._ub)->process)(&pCVar9->base,delta_time);
  }
  core_scat_cpp_CScat_FUN_004fcd90(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  uVar19 = (uint)((this_ptr->base).base.hit_points <= 0.0);
  pCVar15 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getGrabber)((CCharacter *)this_ptr);
  if (pCVar15 != (CDemonActor *)0x0) {
    uVar19 = 1;
  }
  fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(this_ptr->base).base.model.motion_controller,0xc);
  if (0.0 < fVar16) {
    uVar19 = 1;
  }
  fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(this_ptr->base).base.model.motion_controller,0xd);
  if (0.0 < fVar16) {
    uVar19 = 1;
  }
  fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(this_ptr->base).base.model.motion_controller,4);
  if (0.0 < fVar16) {
    uVar19 = 1;
  }
  fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(this_ptr->base).base.model.motion_controller,5);
  if (0.0 < fVar16) {
    uVar19 = 1;
  }
  core_scat_cpp_CScat_updateAiming_FUN_004fd450(this_ptr,delta_time,uVar19);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  core_scat_cpp_CScat_blendLayerAction_FUN_004fcff0(this_ptr);
  iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
  if ((iVar12 == 0) &&
     (EVar17 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                         ((CCharacter *)this_ptr), EVar17 == DEATH_STATE_ALIVE)) {
    blend_callback = core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650;
    fVar16 = this_ptr->head_blend_weight;
    iVar12 = _DAT_01e53388;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610(&this_ptr->head_euler_angles,&local_58);
    source_quaternions = &CStack_68;
    CStack_68.w = local_58.w;
    puVar21 = (uint *)((int)&CStack_68 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 8);
    puVar20 = (uint *)((int)&local_58 + ((uint)bVar22 * -2 + (uint)bVar22 * -2) * 4 + 8);
    *(uint *)((int)&CStack_68 + (uint)bVar22 * -8 + 4) =
         *(uint *)((int)&local_58 + (uint)bVar22 * -8 + 4);
    *puVar21 = *puVar20;
    puVar21[(uint)bVar22 * -2 + 1] = puVar20[(uint)bVar22 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (unaff_EBX,source_quaternions,fVar16,iVar12,blend_callback);
  }
  core_charactr_cpp_CCharacter_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  core_scat_cpp_CScat_FUN_004fdd00(this_ptr);
switchD_004fc3b6_caseD_5:
  return;
}
