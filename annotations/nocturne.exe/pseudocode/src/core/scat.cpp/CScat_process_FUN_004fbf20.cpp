// Name: core_scat.cpp_CScat_process_FUN_004fbf20
// Address: 004fbf20
// Address Range: [[004fbf20, 004fc60d]]
// Convention: unknown
// Signature: void core_scat_cpp_CScat_process_FUN_004fbf20(CScat *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_CScat_process_FUN_004fbf20(CScat *param_1,float param_2)

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
  int desired_state_index;
  float *pfVar20;
  byte bVar21;
  float afStackY_1844 [1516];
  CDemonActor *in_stack_ffffff78;
  int in_stack_ffffff7c;
  CDemonActor *in_stack_ffffff84;
  CQuaternion4f *source_quaternions;
  code *blend_callback;
  CQuaternion4f CStack_68;
  float local_58;
  float afStack_54 [4];
  CVector3f local_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  
  bVar21 = 0;
  iVar12 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  pCVar11 = g_CGame_PTR_005b9354;
  if (iVar12 == 0) {
    return;
  }
  (param_1->base).base.turn_speed = param_2 * (float)12.566370614;
  if (pCVar11->letterbox_mode != 0) {
    (param_1->base).base.turn_speed = (param_1->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar16 = (param_1->base).invincibility_timer - param_2;
  (param_1->base).invincibility_timer = fVar16;
  if (fVar16 < 0.0) {
    (param_1->base).invincibility_timer = 0.0;
  }
  pCVar13 = &(param_1->base).base.model.accumulated_root_motion;
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  pCVar13->x = (param_1->base).base.model.accumulated_root_motion.y;
  core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50(param_1,param_2);
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  iVar12 = core_charactr_cpp_FUN_00428c00((CCharacter *)param_1,param_2);
  if (iVar12 == 0) {
    if ((param_1->base).control_type == HERO_CONTROL_AI) {
      core_scat_cpp_CScat_updateAI_FUN_004fc610(param_1,param_2);
    }
    pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                        (&(param_1->base).base.model.motion_controller);
    switch(pSVar18->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if ((param_1->base).base.is_on_ground != 0) {
        iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
        desired_state_index = 0;
        if (iVar12 != 0) {
          desired_state_index = 7;
        }
        if ((param_1->base).player_input.action_state.walk != 0) {
          iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
          if (iVar12 == 0) {
            if ((param_1->base).player_input.action_state.run == 0) {
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
        if ((param_1->base).player_input.action_state.backup != 0) {
          iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
          if (iVar12 == 0) {
            desired_state_index = 3;
          }
          else {
            desired_state_index = 10;
          }
        }
        if (((((param_1->base).player_input.action_state.fire != 0) && (param_1->guns_drawn != 0))
            && (pCVar7 = (CCharacter *)param_1->weapon_actor, pCVar7 != (CCharacter *)0x0)) &&
           (iVar12 = (*(((pCVar7->base).vtable._uc)->_uc).canBeGrabbed)
                               (pCVar7,in_stack_ffffff78,in_stack_ffffff7c), iVar12 != 0)) {
          (*(((((CCharacter *)param_1->weapon_actor)->base).vtable._uc)->_uc).isGrabbable)
                    ((CCharacter *)param_1->weapon_actor,in_stack_ffffff84);
          pCVar9 = param_1->weapon_actor;
          (param_1->base).player_input.action_state.fire = 0;
          if (pCVar9->weapon_type == 8) {
            desired_state_index = 0xb;
          }
        }
        pCVar14 = &(param_1->base).base.model;
        (param_1->base).base.turn_angle_accumulator =
             (param_1->base).player_input.turn_speed * (param_1->base).base.turn_speed +
             (param_1->base).base.turn_angle_accumulator;
        pSVar18 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                            (&pCVar14->motion_controller);
        if (desired_state_index != pSVar18->state_index) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar14->motion_controller,desired_state_index,1);
        }
        if ((param_1->base).player_input.action_state.draw != 0) {
          (param_1->base).player_input.action_state.draw = 0;
          (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)
                    ((CEnemy *)param_1,(float)(uint)(param_1->guns_drawn == 0));
        }
      }
      break;
    case 5:
      goto switchD_004fc3b6_caseD_5;
    }
  }
  else {
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    pCVar13->x = (param_1->base).base.model.accumulated_root_motion.y;
    uVar19 = (param_1->base).base.is_walking;
    if (uVar19 < 2) {
      if (uVar19 == 1) {
        iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
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
        iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
        if (iVar12 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = 7;
        }
      }
    }
    else if (uVar19 < 3) {
      iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
      if (iVar12 != 0) goto LAB_004fc00b;
      iVar12 = 2;
    }
    else {
      if (uVar19 != 3) goto LAB_004fc367;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (g_CConsole_PTR_005ad350,"%s confused while walking to scriptDest!\n",param_1);
      iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
      if (iVar12 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,iVar12,1);
  }
  pCVar15 = (param_1->base).base.grabbed_by;
  if (pCVar15 == (CDemonActor *)0x0) {
    pCVar13 = &(param_1->base).base.model.accumulated_root_motion;
    pCVar1 = &(param_1->base).base.position_delta;
    fVar16 = pCVar13->x;
    fVar2 = pCVar1->x;
    fVar3 = (param_1->base).base.model.accumulated_root_motion.y;
    fVar4 = (param_1->base).base.position_delta.y;
    fVar5 = (param_1->base).base.model.accumulated_root_motion.z;
    fVar6 = (param_1->base).base.position_delta.z;
    fVar10 = (float)32;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    pCVar13->x = (param_1->base).base.model.accumulated_root_motion.y;
    (param_1->base).base.position_delta.z = 0.0;
    (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
    pCVar1->x = (param_1->base).base.position_delta.y;
    (param_1->base).base.velocity.y = (param_1->base).base.velocity.y - param_2 * fVar10;
    afStack_54[1] = (param_1->base).base.velocity.x * param_2;
    afStack_54[2] = (param_1->base).base.velocity.y * param_2;
    afStack_54[3] = param_2 * (param_1->base).base.velocity.z;
    CStack_38.x = fVar16 + fVar2 + afStack_54[1];
    CStack_38.y = fVar3 + fVar4 + afStack_54[2];
    CStack_38.z = fVar5 + fVar6 + afStack_54[3];
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&CStack_38);
  }
  else {
    pCVar13 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)param_1,&CStack_2c,&(pCVar15->location).position);
    pCVar13 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_44,pCVar13);
    pCVar14 = (CDeformableModelInstance *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar13->y)
    ;
    if ((float)pCVar14 < (float)-1.57079632675) {
      pCVar14 = (CDeformableModelInstance *)((float)pCVar14 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)pCVar14) {
      pCVar14 = (CDeformableModelInstance *)((float)pCVar14 + 1.5938625219265179e-314._0_4_);
    }
    unaff_EBX = (CDeformableModelInstance *)(param_2 * (float)3.1415926535000001);
    if ((float)pCVar14 < -(float)unaff_EBX) {
      pCVar14 = (CDeformableModelInstance *)-(float)unaff_EBX;
    }
    if ((float)unaff_EBX < (float)pCVar14) {
      pCVar14 = unaff_EBX;
    }
    (param_1->base).base.base.orient.vec.y = (param_1->base).base.base.orient.vec.y + (float)pCVar14
    ;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
    pCVar7 = (CCharacter *)(param_1->base).base.grabbed_by;
    pCVar8 = (pCVar7->base).vtable._uc;
    pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                        (&(param_1->base).base.model,&CStack_20,0);
    iVar12 = (*(pCVar8->_uc).attractActorToward)(pCVar7,(CDemonActor *)param_1,pCVar13);
    if (iVar12 == 0) {
      (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004fc125:
      iVar12 = 0;
    }
    else {
      if ((param_1->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004fc125;
      if ((param_1->base).player_input.action_state.fire == 0) goto LAB_004fc138;
      iVar12 = 0xf;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,iVar12,1);
  }
LAB_004fc138:
  core_inv_cpp_CInventory_updateInventory_FUN_004c1850(&(param_1->base).inventory);
  pCVar9 = param_1->weapon_actor;
  if (pCVar9 != (CWeapon *)0x0) {
    (*((pCVar9->base).vtable._ub)->process)(&pCVar9->base,param_2);
  }
  core_scat_cpp_FUN_004fcd90(param_1,param_2);
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  uVar19 = (uint)((param_1->base).base.hit_points <= 0.0);
  pCVar15 = (*(((param_1->base).base.base.vtable._uc)->_uc).getGrabber)((CCharacter *)param_1);
  if (pCVar15 != (CDemonActor *)0x0) {
    uVar19 = 1;
  }
  fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(param_1->base).base.model.motion_controller,0xc);
  if (0.0 < fVar16) {
    uVar19 = 1;
  }
  fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(param_1->base).base.model.motion_controller,0xd);
  if (0.0 < fVar16) {
    uVar19 = 1;
  }
  fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(param_1->base).base.model.motion_controller,4);
  if (0.0 < fVar16) {
    uVar19 = 1;
  }
  fVar16 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                     (&(param_1->base).base.model.motion_controller,5);
  if (0.0 < fVar16) {
    uVar19 = 1;
  }
  core_scat_cpp_CScat_updateAiming_FUN_004fd450(param_1,param_2,uVar19);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(param_1->base).base.model);
  core_scat_cpp_CScat_blendLayerAction_FUN_004fcff0(param_1);
  iVar12 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
  if ((iVar12 == 0) &&
     (EVar17 = (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1)
     , EVar17 == DEATH_STATE_ALIVE)) {
    blend_callback = core_skeleton_cpp_FUN_0051b650;
    fVar16 = param_1->head_blend_weight;
    iVar12 = _DAT_01e53388;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610(&param_1->head_euler_angles);
    source_quaternions = &CStack_68;
    CStack_68.w = local_58;
    pfVar20 = (float *)((int)&CStack_68 + (uint)bVar21 * -8 + (uint)bVar21 * -8 + 8);
    *(float *)((int)&CStack_68 + (uint)bVar21 * -8 + 4) = afStack_54[(uint)bVar21 * -2];
    *pfVar20 = afStack_54[(uint)bVar21 * -2 + (uint)bVar21 * -2 + 1];
    pfVar20[(uint)bVar21 * -2 + 1] =
         (afStack_54 + (uint)bVar21 * -2 + (uint)bVar21 * -2 + 1)[(uint)bVar21 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (unaff_EBX,source_quaternions,fVar16,iVar12,blend_callback);
  }
  core_charactr_cpp_FUN_0042a150((CCharacter *)param_1,param_2);
  core_scat_cpp_FUN_004fdd00(param_1);
switchD_004fc3b6_caseD_5:
  return;
}
