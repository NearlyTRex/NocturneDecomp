// Name: core_icepick.cpp_CIcePick_process_FUN_004f80b0
// Address: 004f80b0
// Address Range: [[004f80b0, 004f8807]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f80b0(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f86be) */

void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f80b0(CIcePick *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  bool bVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  CDemonActor *pCVar5;
  CCharacter *pCVar6;
  int iVar7;
  uint uVar8;
  SMotion *pSVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_1870 [1521];
  float fVar13;
  code *blend_callback;
  float local_98;
  CQuaternion4f CStack_94;
  CQuaternion4f CStack_84;
  CVector3f local_74;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  CVector3f local_38;
  int local_24;
  CDeformableModelInstance *pCStack_20;
  float local_1c;
  float local_18;
  CCharacter_full_vtable *local_14;
  
  bVar12 = 0;
  iVar3 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    return;
  }
  if ((this_ptr->base).ai_task == 4) {
    return;
  }
  if ((this_ptr->base).control_type == 2) {
    core_icepick_cpp_CIcePick_FUN_004f8c70(this_ptr);
  }
  fVar2 = (float)12.566370614;
  fVar13 = (this_ptr->base).invincibility_timer;
  this_ptr->is_armed =
       (uint)((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0);
  fVar13 = fVar13 - delta_time;
  (this_ptr->base).base.turn_speed = delta_time * fVar2;
  (this_ptr->base).invincibility_timer = fVar13;
  if (fVar13 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar4 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar4->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_icepick_cpp_CIcePick_FUN_004f93a0(this_ptr);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar3 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  this_ptr_00 = &(this_ptr->base).base.model;
  if (iVar3 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    uVar8 = pSVar9->state_index;
    if (uVar8 < 9) {
      if ((((uVar8 == 0) || (uVar8 < 2)) || (uVar8 < 3)) || (uVar8 == 3)) goto LAB_004f8427;
    }
    else {
      if (uVar8 < 10) {
        return;
      }
      if (uVar8 < 0xf) {
        if (uVar8 < 0xb) {
LAB_004f8427:
          if ((this_ptr->base).base.is_on_ground != 0) {
            iVar3 = 0;
            if ((this_ptr->guns_drawn != 0) && (this_ptr->is_armed == 0)) {
              iVar3 = 10;
            }
            if ((this_ptr->base).player_control.action_states[0] != 0) {
              if ((this_ptr->base).player_control.action_states[2] == 0) {
                iVar3 = 1;
              }
              else {
                iVar3 = 2;
              }
            }
            if ((this_ptr->base).player_control.action_states[1] != 0) {
              iVar3 = 3;
            }
            if ((this_ptr->base).player_control.action_states[6] != 0) {
              iVar3 = this_ptr->guns_drawn;
              (this_ptr->base).player_control.action_states[6] = 0;
              uVar8 = (uint)(iVar3 == 0);
              this_ptr->guns_drawn = uVar8;
              if ((uVar8 == 0) || (this_ptr->is_armed != 0)) {
                iVar3 = 0;
              }
              else {
                iVar3 = 10;
              }
            }
            if ((this_ptr->base).player_control.action_states[3] != 0) {
              bVar1 = true;
              if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != 2)) {
                iVar7 = core_hero_cpp_CHero_FUN_004f2af0(&this_ptr->base);
                bVar1 = false;
                if (iVar7 != 0) goto LAB_004f84cc;
                local_24 = core_hero_cpp_CHero_FUN_004f2d70(&this_ptr->base);
                if ((local_24 != 0) && (local_24 != 1)) {
                  core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
                }
                if ((local_24 != 0) ||
                   (iVar7 = core_hero_cpp_CHero_FUN_004f2c40(&this_ptr->base), iVar7 != 0))
                goto LAB_004f84cc;
                iVar7 = core_hero_cpp_CHero_FUN_004f2f50(&this_ptr->base);
                if (iVar7 != 0) {
                  core_hero_cpp_CHero_FUN_004f30f0(&this_ptr->base);
                  goto LAB_004f84cc;
                }
              }
              else {
LAB_004f84cc:
                if (!bVar1) goto switchD_004f8665_default;
              }
              if (this_ptr->guns_drawn != 0) {
                if (this_ptr->is_armed == 0) {
                  (this_ptr->base).player_control.action_states[3] = 0;
                  switch(this_ptr->attack_count) {
                  case 0:
                  case 2:
                    iVar3 = 0xe;
                    break;
                  case 1:
                  case 3:
                    iVar3 = 0xf;
                    break;
                  case 4:
                    iVar3 = 0x10;
                  }
                }
                else {
                  pCVar6 = (CCharacter *)
                           core_actor_cpp_castToClassHash_FUN_0040c790
                                     ((this_ptr->base).base.carry_hands[1].carry_actor,
                                      g_CWeaponClassInfo.name_hash);
                  if (pCVar6 != (CCharacter *)0x0) {
                    (*(((pCVar6->base).vtable._uc)->_uc).isGrabbable)(pCVar6);
                  }
                }
              }
            }
switchD_004f8665_default:
            (this_ptr->base).base.turn_angle_accumulator =
                 (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed;
            pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                               (&(this_ptr->base).base.model.motion_controller);
            if (iVar3 != pSVar9->state_index) {
              if ((((iVar3 == 0xe) || (iVar3 == 0xf)) || (iVar3 == 0x10)) &&
                 (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[0]),
                 iVar7 == 0)) {
                uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"icepick-miss?.wav");
                this_ptr->sfx_handles[0] = uVar8;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,iVar3,1);
            }
            if (((this_ptr->base).player_control.action_states[4] != 0) &&
               (iVar3 = core_icepick_cpp_CIcePick_FUN_004f8970(this_ptr), iVar3 == 0)) {
              core_icepick_cpp_CIcePick_FUN_004f8ad0(this_ptr);
            }
          }
        }
      }
      else if (((0xf < uVar8) && (0x10 < uVar8)) && (uVar8 == 0x15)) goto LAB_004f8427;
    }
  }
  else {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar4->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    uVar8 = (this_ptr->base).base.is_walking;
    if (uVar8 < 2) {
      if (uVar8 == 1) {
        iVar3 = 1;
      }
      else {
LAB_004f8417:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar8) {
        if (uVar8 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_004f81b6;
        }
        goto LAB_004f8417;
      }
      iVar3 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar3,1);
  }
LAB_004f81b6:
  pCVar5 = (this_ptr->base).base.grabbed_by;
  if (pCVar5 == (CDemonActor *)0x0) {
    local_38.x = (this_ptr->base).base.model.accumulated_root_motion.x;
    local_38.y = (this_ptr->base).base.model.accumulated_root_motion.y;
    local_38.z = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_50 = (this_ptr->base).base.velocity.x * delta_time;
    local_4c = (this_ptr->base).base.velocity.y * delta_time;
    local_48 = delta_time * (this_ptr->base).base.velocity.z;
    local_5c = local_50 + (this_ptr->base).base.position_delta.x;
    local_58 = local_4c + (this_ptr->base).base.position_delta.y;
    local_38.x = local_38.x + local_5c;
    local_54 = local_48 + (this_ptr->base).base.position_delta.z;
    local_38.y = local_38.y + local_58;
    local_38.z = local_38.z + local_54;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_38);
    goto LAB_004f82f8;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,&local_68,&(pCVar5->location).position);
    pCVar4 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar4);
    local_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar4->y);
    local_98 = (float)local_14;
    if ((float)local_14 < (float)-1.57079632675) {
      local_98 = (float)local_14 + 3.141593f;
    }
    if ((float)1.57079632675 < local_98) {
      local_98 = local_98 + -3.141593f;
    }
    local_18 = delta_time * (float)3.1415926535000001;
    local_1c = -local_18;
    if (local_98 < local_1c) {
      local_98 = local_1c;
    }
    if (local_18 < local_98) {
      local_98 = local_18;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_98;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  }
  pCVar6 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  local_14 = (pCVar6->base).vtable._uc;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_74,0);
  iVar3 = (*(local_14->_uc).attractActorToward)(pCVar6,(CDemonActor *)this_ptr,pCVar4);
  if (iVar3 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004f82e5:
    iVar3 = 0;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004f82e5;
    if ((this_ptr->base).player_control.action_states[3] == 0) goto LAB_004f82f8;
    iVar3 = 0x11;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,iVar3,1);
LAB_004f82f8:
  core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(&(this_ptr->base).inventory);
  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                     ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash)
  ;
  if (pCVar5 != (CDemonActor *)0x0) {
    (*((pCVar5->vtable)._ub)->process)(pCVar5,delta_time);
    pCVar5[4].actor_name[8] = 'd';
    pCVar5[4].actor_name[9] = '\0';
    pCVar5[4].actor_name[10] = '\0';
    pCVar5[4].actor_name[0xb] = '\0';
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  pCStack_20 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack_20);
  iVar3 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (iVar3 == 0) {
    blend_callback = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar13 = this_ptr->head_look_blend_weight;
    iVar3 = INT_02db8970;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&this_ptr->head_look_euler,&CStack_94);
    CStack_84.w = CStack_94.w;
    puVar11 = (uint *)((int)&CStack_84 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    puVar10 = (uint *)((int)&CStack_94 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(uint *)((int)&CStack_84 + (uint)bVar12 * -8 + 4) =
         *(uint *)((int)&CStack_94 + (uint)bVar12 * -8 + 4);
    *puVar11 = *puVar10;
    puVar11[(uint)bVar12 * -2 + 1] = puVar10[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCStack_20,&CStack_84,fVar13,iVar3,blend_callback);
  }
  core_icepick_cpp_CIcePick_FUN_004f8810(this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
