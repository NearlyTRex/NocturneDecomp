// Name: core_scat.cpp_FUN_004fbf20
// Address: 004fbf20
// Address Range: [[004fbf20, 004fc60d]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_004fbf20(CScat *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_004fbf20(CScat *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CCharacter *this_ptr_00;
  CCharacter_full_vtable *pCVar6;
  CWeapon *pCVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  CVector3f *pCVar11;
  CDemonActor *pCVar12;
  float fVar13;
  SMotion *pSVar14;
  uint uVar15;
  uint *puVar16;
  byte bVar17;
  CDeformableModelInstance *unaff_retaddr;
  float afStackY_1840 [1515];
  _FILE *in_stack_ffffff78;
  int *in_stack_ffffff80;
  CVector3f *in_stack_ffffff88;
  CQuaternion4f *source_quaternions;
  float in_stack_ffffff8c;
  float fVar18;
  code *blend_callback;
  CQuaternion4f local_64;
  float fStack_54;
  float afStack_50 [2];
  byte local_48 [12];
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  
  bVar17 = 0;
  iVar9 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  iVar10 = 0x01C775EC;
  if (iVar9 == 0) {
    return;
  }
  (param_1->base).base.turn_speed = param_2 * (float)12.566370614;
  if (*(int *)(iVar10 + 0x228) != 0) {
    (param_1->base).base.turn_speed = (param_1->base).base.turn_speed * (float)0.33333333333333298;
  }
  fVar13 = (param_1->base).invincibility_timer - param_2;
  (param_1->base).invincibility_timer = fVar13;
  if (fVar13 < 0.0) {
    (param_1->base).invincibility_timer = 0.0;
  }
  pCVar11 = &(param_1->base).base.model.accumulated_root_motion;
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  pCVar11->x = (param_1->base).base.model.accumulated_root_motion.y;
  core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50(param_1,param_2);
  (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
  iVar10 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar10 == 0) {
    if ((param_1->base).control_type == HERO_CONTROL_AI) {
      core_scat_cpp_CScat_updateAI_FUN_004fc610(param_1,param_2);
    }
    pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                        (&(param_1->base).base.model.motion_controller);
    switch(pSVar14->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
      if ((param_1->base).base.is_on_ground != 0) {
        iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
        iVar9 = 0;
        if (iVar10 != 0) {
          iVar9 = 7;
        }
        if ((param_1->base).player_input.action_state.walk != 0) {
          iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
          if (iVar10 == 0) {
            if ((param_1->base).player_input.action_state.run == 0) {
              iVar9 = 1;
            }
            else {
              iVar9 = 2;
            }
          }
          else {
            iVar9 = 9;
          }
        }
        if ((param_1->base).player_input.action_state.backup != 0) {
          iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
          if (iVar10 == 0) {
            iVar9 = 3;
          }
          else {
            iVar9 = 10;
          }
        }
        if (((((param_1->base).player_input.action_state.fire != 0) && (param_1->guns_drawn != 0))
            && (pCVar7 = param_1->weapon_actor, pCVar7 != (CWeapon *)0x0)) &&
           (iVar10 = (*((pCVar7->base).vtable._ub)->addFilesToExtract)
                               (&pCVar7->base,in_stack_ffffff78), iVar10 != 0)) {
          (*((param_1->weapon_actor->base).vtable._ub)->showEditorHelp)
                    (&param_1->weapon_actor->base,in_stack_ffffff80);
          pCVar7 = param_1->weapon_actor;
          (param_1->base).player_input.action_state.fire = 0;
          if (pCVar7->weapon_type == 8) {
            iVar9 = 0xb;
          }
        }
        this_ptr = &(param_1->base).base.model;
        (param_1->base).base.turn_angle_accumulator =
             (param_1->base).player_input.turn_speed * (param_1->base).base.turn_speed +
             (param_1->base).base.turn_angle_accumulator;
        pSVar14 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                            (&this_ptr->motion_controller);
        if (iVar9 != pSVar14->state_index) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,iVar9,1);
        }
        if ((param_1->base).player_input.action_state.draw != 0) {
          (param_1->base).player_input.action_state.draw = 0;
          (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                    ((CCharacter *)param_1,(uint)(param_1->guns_drawn == 0),in_stack_ffffff88);
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
    pCVar11->x = (param_1->base).base.model.accumulated_root_motion.y;
    uVar15 = (param_1->base).base.is_walking;
    if (uVar15 < 2) {
      if (uVar15 == 1) {
        iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
        if (iVar10 == 0) {
          iVar10 = 1;
        }
        else {
LAB_004fc00b:
          iVar10 = 9;
        }
      }
      else {
LAB_004fc367:
        iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
        if (iVar10 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = 7;
        }
      }
    }
    else if (uVar15 < 3) {
      iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
      if (iVar10 != 0) goto LAB_004fc00b;
      iVar10 = 2;
    }
    else {
      if (uVar15 != 3) goto LAB_004fc367;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
      iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = 7;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,iVar10,1);
  }
  pCVar12 = (param_1->base).base.grabbed_by;
  if (pCVar12 == (CDemonActor *)0x0) {
    pCVar11 = &(param_1->base).base.model.accumulated_root_motion;
    pCVar1 = &(param_1->base).base.position_delta;
    fVar13 = pCVar11->x;
    fVar18 = pCVar1->x;
    fVar2 = (param_1->base).base.model.accumulated_root_motion.y;
    fVar3 = (param_1->base).base.position_delta.y;
    fVar4 = (param_1->base).base.model.accumulated_root_motion.z;
    fVar5 = (param_1->base).base.position_delta.z;
    fVar8 = (float)32;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    pCVar11->x = (param_1->base).base.model.accumulated_root_motion.y;
    (param_1->base).base.position_delta.z = 0.0;
    (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
    pCVar1->x = (param_1->base).base.position_delta.y;
    (param_1->base).base.velocity.y = (param_1->base).base.velocity.y - param_2 * fVar8;
    fStack_54 = (param_1->base).base.velocity.x * param_2;
    afStack_50[0] = (param_1->base).base.velocity.y * param_2;
    afStack_50[1] = param_2 * (param_1->base).base.velocity.z;
    CStack_3c.x = fVar13 + fVar18 + fStack_54;
    CStack_3c.y = fVar2 + fVar3 + afStack_50[0];
    CStack_3c.z = fVar4 + fVar5 + afStack_50[1];
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&CStack_3c);
  }
  else {
    pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        ((CDemonActor *)param_1,&CStack_30,&(pCVar12->location).position);
    iVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_48,pCVar11);
    in_stack_ffffff88 =
         (CVector3f *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar10 + 4));
    if ((float)in_stack_ffffff88 < (float)-1.57079632675) {
      in_stack_ffffff88 = (CVector3f *)((float)in_stack_ffffff88 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)in_stack_ffffff88) {
      in_stack_ffffff88 = (CVector3f *)((float)in_stack_ffffff88 + 1.5938625219265179e-314._0_4_);
    }
    pCVar11 = (CVector3f *)(param_2 * (float)3.1415926535000001);
    if ((float)in_stack_ffffff88 < -(float)pCVar11) {
      in_stack_ffffff88 = (CVector3f *)-(float)pCVar11;
    }
    if ((float)pCVar11 < (float)in_stack_ffffff88) {
      in_stack_ffffff88 = pCVar11;
    }
    (param_1->base).base.base.orient.vec.y =
         (param_1->base).base.base.orient.vec.y + (float)in_stack_ffffff88;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
    this_ptr_00 = (CCharacter *)(param_1->base).base.grabbed_by;
    pCVar6 = (this_ptr_00->base).vtable._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
              (&(param_1->base).base.model,&CStack_24,0);
    pCVar12 = (*(pCVar6->_uc).getGrabber)(this_ptr_00);
    if (pCVar12 == (CDemonActor *)0x0) {
      (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004fc125:
      iVar10 = 0;
    }
    else {
      if ((param_1->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004fc125;
      if ((param_1->base).player_input.action_state.fire == 0) goto LAB_004fc138;
      iVar10 = 0xf;
    }
    in_stack_ffffff88 = (CVector3f *)0x1;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,iVar10,1);
  }
LAB_004fc138:
  core_inv_cpp_CInventory_updateInventory_FUN_004c1850(&(param_1->base).inventory);
  pCVar7 = param_1->weapon_actor;
  if (pCVar7 != (CWeapon *)0x0) {
    (*((pCVar7->base).vtable._ub)->process)(&pCVar7->base,param_2);
  }
  core_scat_cpp_FUN_004fcd90(param_1,param_2);
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  uVar15 = (uint)((param_1->base).base.hit_points <= 0.0);
  iVar10 = (*(((param_1->base).base.base.vtable._uc)->_uc).applyDamage)
                     ((CCharacter *)param_1,(int)in_stack_ffffff88,in_stack_ffffff8c);
  if (iVar10 != 0) {
    uVar15 = 1;
  }
  fVar13 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                            (&(param_1->base).base.model,0xc);
  if (0.0 < fVar13) {
    uVar15 = 1;
  }
  fVar13 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                            (&(param_1->base).base.model,0xd);
  if (0.0 < fVar13) {
    uVar15 = 1;
  }
  fVar13 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                            (&(param_1->base).base.model,4);
  if (0.0 < fVar13) {
    uVar15 = 1;
  }
  fVar13 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                            (&(param_1->base).base.model,5);
  if (0.0 < fVar13) {
    uVar15 = 1;
  }
  core_scat_cpp_CScat_updateAiming_FUN_004fd450(param_1,fVar13,uVar15);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(param_1->base).base.model);
  core_scat_cpp_CScat_blendLayerAction_FUN_004fcff0(param_1);
  iVar10 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
  if ((iVar10 == 0) &&
     (iVar10 = (*(((param_1->base).base.base.vtable._uc)->_uc).releaseFromGrab)
                         ((CCharacter *)param_1), iVar10 == 0)) {
    blend_callback = core_skeleton_cpp_FUN_0051b650;
    fVar18 = param_1->head_blend_weight;
    iVar10 = _DAT_01e53388;
    core_xform_cpp_eulerToQuaternion_FUN_0055d610(&param_1->head_euler_angles);
    source_quaternions = &local_64;
    local_64.w = fStack_54;
    puVar16 = (uint *)((int)&local_64 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    *(float *)((int)&local_64 + (uint)bVar17 * -8 + 4) = afStack_50[(uint)bVar17 * -2];
    *puVar16 = *(uint *)(local_48 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + -4);
    puVar16[(uint)bVar17 * -2 + 1] =
         *(uint *)
          ((int)(local_48 + (uint)bVar17 * -8 + (uint)bVar17 * -8 + -4) +
          ((uint)bVar17 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
              (unaff_retaddr,source_quaternions,fVar18,iVar10,blend_callback);
  }
  core_charactr_cpp_FUN_0042a150(param_1,fVar13);
  core_scat_cpp_FUN_004fdd00(param_1);
switchD_004fc3b6_caseD_5:
  return;
}
