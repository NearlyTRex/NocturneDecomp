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
  EWalkState EVar7;
  CCharacter *pCVar8;
  CCharacter_full_vtable *pCVar9;
  CWeapon *pCVar10;
  float fVar11;
  CGame *pCVar12;
  int iVar13;
  CVector3f *pCVar14;
  CDeformableModelInstance *pCVar15;
  CDemonActor *pCVar16;
  float fVar17;
  EDeathState EVar18;
  SMotion *pSVar19;
  CDeformableModelInstance *unaff_EBX;
  uint is_holstered;
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
  iVar13 = core_charactr_cpp_CCharacter_processCharacter_FUN_004259f0
                     ((CCharacter *)this_ptr,delta_time);
  pCVar12 = g_CGame_PTR_005b9354;
  if (iVar13 == 0) {
    return;
  }
  (this_ptr->base).base.turn_speed = delta_time * (float)12.566370614;
  if (pCVar12->letterbox_mode != 0) {
    (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar17 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar17;
  if (fVar17 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar14 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar13 = core_charactr_cpp_CCharacter_processWalking_FUN_00428c00
                     ((CCharacter *)this_ptr,delta_time);
  if (iVar13 == 0) {
    if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
      core_scat_cpp_CScat_updateAI_FUN_004fc610(this_ptr,delta_time);
    }
    pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                        (&(this_ptr->base).base.model.base);
    switch(pSVar19->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if ((this_ptr->base).base.is_on_ground != 0) {
        iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
        desired_state_index = 0;
        if (iVar13 != 0) {
          desired_state_index = 7;
        }
        if ((this_ptr->base).player_input.action_state.walk != 0) {
          iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
          if (iVar13 == 0) {
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
          iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
          if (iVar13 == 0) {
            desired_state_index = 3;
          }
          else {
            desired_state_index = 10;
          }
        }
        if (((((this_ptr->base).player_input.action_state.fire != 0) && (this_ptr->guns_drawn != 0))
            && (pCVar8 = (CCharacter *)this_ptr->weapon_actor, pCVar8 != (CCharacter *)0x0)) &&
           (iVar13 = (*(((pCVar8->base).vtable._uc)->_uc).canBeGrabbed)
                               (pCVar8,in_stack_ffffff78,in_stack_ffffff7c), iVar13 != 0)) {
          (*(((((CCharacter *)this_ptr->weapon_actor)->base).vtable._uc)->_uc).isGrabbable)
                    ((CCharacter *)this_ptr->weapon_actor,in_stack_ffffff84);
          pCVar10 = this_ptr->weapon_actor;
          (this_ptr->base).player_input.action_state.fire = 0;
          if (pCVar10->weapon_type == WEAPON_TYPE_BARON) {
            desired_state_index = 0xb;
          }
        }
        pCVar15 = &(this_ptr->base).base.model;
        (this_ptr->base).base.turn_angle_accumulator =
             (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed +
             (this_ptr->base).base.turn_angle_accumulator;
        pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(&pCVar15->base);
        if (desired_state_index != pSVar19->state_index) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar15->base,desired_state_index,1);
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
    pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    EVar7 = (this_ptr->base).base.walk_state;
    if (EVar7 < 2) {
      if (EVar7 == WALK_STATE_WALKING) {
        iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
        if (iVar13 == 0) {
          iVar13 = 1;
        }
        else {
LAB_004fc00b:
          iVar13 = 9;
        }
      }
      else {
LAB_004fc367:
        iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
        if (iVar13 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = 7;
        }
      }
    }
    else if (EVar7 < WALK_STATE_NO_PATH) {
      iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
      if (iVar13 != 0) goto LAB_004fc00b;
      iVar13 = 2;
    }
    else {
      if (EVar7 != WALK_STATE_NO_PATH) goto LAB_004fc367;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",this_ptr);
      iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
      if (iVar13 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.base,iVar13,1);
  }
  pCVar16 = (this_ptr->base).base.grabbed_by;
  if (pCVar16 == (CDemonActor *)0x0) {
    pCVar14 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar1 = &(this_ptr->base).base.position_delta;
    fVar17 = pCVar14->x;
    fVar2 = pCVar1->x;
    fVar3 = (this_ptr->base).base.model.accumulated_root_motion.y;
    fVar4 = (this_ptr->base).base.position_delta.y;
    fVar5 = (this_ptr->base).base.model.accumulated_root_motion.z;
    fVar6 = (this_ptr->base).base.position_delta.z;
    fVar11 = (float)32;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar1->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.velocity.y = (this_ptr->base).base.velocity.y - delta_time * fVar11;
    local_58.y = (this_ptr->base).base.velocity.x * delta_time;
    local_58.z = (this_ptr->base).base.velocity.y * delta_time;
    local_48 = delta_time * (this_ptr->base).base.velocity.z;
    CStack_38.x = fVar17 + fVar2 + local_58.y;
    CStack_38.y = fVar3 + fVar4 + local_58.z;
    CStack_38.z = fVar5 + fVar6 + local_48;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)this_ptr,&CStack_38);
  }
  else {
    pCVar14 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)this_ptr,&CStack_2c,&(pCVar16->location).position);
    pCVar14 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_44,pCVar14);
    pCVar15 = (CDeformableModelInstance *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar14->y)
    ;
    if ((float)pCVar15 < (float)-1.57079632675) {
      pCVar15 = (CDeformableModelInstance *)((float)pCVar15 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)pCVar15) {
      pCVar15 = (CDeformableModelInstance *)((float)pCVar15 + 1.5938625219265179e-314._0_4_);
    }
    unaff_EBX = (CDeformableModelInstance *)(delta_time * (float)3.1415926535000001);
    if ((float)pCVar15 < -(float)unaff_EBX) {
      pCVar15 = (CDeformableModelInstance *)-(float)unaff_EBX;
    }
    if ((float)unaff_EBX < (float)pCVar15) {
      pCVar15 = unaff_EBX;
    }
    (this_ptr->base).base.base.orient.vec.y =
         (this_ptr->base).base.base.orient.vec.y + (float)pCVar15;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)this_ptr);
    pCVar8 = (CCharacter *)(this_ptr->base).base.grabbed_by;
    pCVar9 = (pCVar8->base).vtable._uc;
    pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0051d380
                        (&(this_ptr->base).base.model,&CStack_20,0);
    iVar13 = (*(pCVar9->_uc).attractActorToward)(pCVar8,(CDemonActor *)this_ptr,pCVar14);
    if (iVar13 == 0) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004fc125:
      iVar13 = 0;
    }
    else {
      if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004fc125;
      if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_004fc138;
      iVar13 = 0xf;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(this_ptr->base).base.model.base,iVar13,1);
  }
LAB_004fc138:
  core_inv_cpp_CInventory_updateInventory_FUN_004c1850(&(this_ptr->base).inventory);
  pCVar10 = this_ptr->weapon_actor;
  if (pCVar10 != (CWeapon *)0x0) {
    (*((pCVar10->base).vtable._ub)->process)(&pCVar10->base,delta_time);
  }
  core_scat_cpp_CScat_updateWeaponState_FUN_004fcd90(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)this_ptr);
  is_holstered = (uint)((this_ptr->base).base.hit_points <= 0.0);
  pCVar16 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getGrabber)((CCharacter *)this_ptr);
  if (pCVar16 != (CDemonActor *)0x0) {
    is_holstered = 1;
  }
  fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(this_ptr->base).base.model.base,0xc);
  if (0.0 < fVar17) {
    is_holstered = 1;
  }
  fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(this_ptr->base).base.model.base,0xd);
  if (0.0 < fVar17) {
    is_holstered = 1;
  }
  fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(this_ptr->base).base.model.base,4);
  if (0.0 < fVar17) {
    is_holstered = 1;
  }
  fVar17 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(this_ptr->base).base.model.base,5);
  if (0.0 < fVar17) {
    is_holstered = 1;
  }
  core_scat_cpp_CScat_updateAiming_FUN_004fd450(this_ptr,delta_time,is_holstered);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(this_ptr->base).base.model);
  core_scat_cpp_CScat_blendLayerAction_FUN_004fcff0(this_ptr);
  iVar13 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
  if ((iVar13 == 0) &&
     (EVar18 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)
                         ((CCharacter *)this_ptr), EVar18 == DEATH_STATE_ALIVE)) {
    blend_callback = core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650;
    fVar17 = this_ptr->head_blend_weight;
    iVar13 = _DAT_01e53388;
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
              (unaff_EBX,source_quaternions,fVar17,iVar13,blend_callback);
  }
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042a150((CCharacter *)this_ptr,delta_time);
  core_scat_cpp_CScat_FUN_004fdd00(this_ptr);
switchD_004fc3b6_caseD_5:
  return;
}
