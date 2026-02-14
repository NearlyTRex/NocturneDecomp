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
  uint uVar6;
  CCharacter *pCVar7;
  int iVar8;
  uint uVar9;
  SMotion *pSVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  float afStackY_1870 [1521];
  float fVar14;
  code *blend_callback;
  float in_stack_ffffff68;
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
  
  bVar13 = 0;
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
  fVar14 = (float)(this_ptr->base).no_collision_flag;
  *(uint *)(this_ptr->unk + 0x1c) =
       (uint)((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0);
  fVar14 = fVar14 - delta_time;
  (this_ptr->base).base.turn_speed = delta_time * fVar2;
  (this_ptr->base).no_collision_flag = (int)fVar14;
  if (fVar14 < 0.0) {
    (this_ptr->base).no_collision_flag = 0;
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
    pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&this_ptr_00->motion_controller);
    uVar6 = pSVar10->state_index;
    if (uVar6 < 9) {
      if ((((uVar6 == 0) || (uVar6 < 2)) || (uVar6 < 3)) || (uVar6 == 3)) goto LAB_004f8427;
    }
    else {
      if (uVar6 < 10) {
        return;
      }
      if (uVar6 < 0xf) {
        if (uVar6 < 0xb) {
LAB_004f8427:
          if ((this_ptr->base).base.is_on_ground != 0) {
            iVar3 = 0;
            if ((this_ptr->guns_drawn != 0) && (*(int *)(this_ptr->unk + 0x1c) == 0)) {
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
              uVar6 = (uint)(iVar3 == 0);
              this_ptr->guns_drawn = uVar6;
              if ((uVar6 == 0) || (*(int *)(this_ptr->unk + 0x1c) != 0)) {
                iVar3 = 0;
              }
              else {
                iVar3 = 10;
              }
            }
            if ((this_ptr->base).player_control.action_states[3] != 0) {
              bVar1 = true;
              if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != 2)) {
                iVar8 = core_hero_cpp_CHero_FUN_004f2af0(&this_ptr->base);
                bVar1 = false;
                if (iVar8 != 0) goto LAB_004f84cc;
                local_24 = core_hero_cpp_CHero_FUN_004f2d70(&this_ptr->base);
                if ((local_24 != 0) && (local_24 != 1)) {
                  core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
                }
                if ((local_24 != 0) ||
                   (iVar8 = core_hero_cpp_CHero_FUN_004f2c40(&this_ptr->base), iVar8 != 0))
                goto LAB_004f84cc;
                iVar8 = core_hero_cpp_CHero_FUN_004f2f50(&this_ptr->base);
                if (iVar8 != 0) {
                  core_hero_cpp_CHero_FUN_004f30f0(&this_ptr->base);
                  goto LAB_004f84cc;
                }
              }
              else {
LAB_004f84cc:
                if (!bVar1) goto switchD_004f8665_default;
              }
              if (this_ptr->guns_drawn != 0) {
                if (*(int *)(this_ptr->unk + 0x1c) == 0) {
                  (this_ptr->base).player_control.action_states[3] = 0;
                  switch(*(uint *)this_ptr->unk) {
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
                  pCVar7 = (CCharacter *)
                           core_actor_cpp_castToClassHash_FUN_0040c790
                                     ((this_ptr->base).base.carry_hands[1].carry_actor,
                                      g_CWeaponClassInfo.name_hash);
                  if (pCVar7 != (CCharacter *)0x0) {
                    (*(((pCVar7->base).vtable._uc)->_uc).isGrabbable)(pCVar7);
                  }
                }
              }
            }
switchD_004f8665_default:
            (this_ptr->base).base.turn_angle_accumulator =
                 (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed;
            pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                (&(this_ptr->base).base.model.motion_controller);
            if (iVar3 != pSVar10->state_index) {
              if ((((iVar3 == 0xe) || (iVar3 == 0xf)) || (iVar3 == 0x10)) &&
                 (iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk + 4)),
                 iVar8 == 0)) {
                uVar9 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"icepick-miss?.wav");
                *(uint *)(this_ptr->unk + 4) = uVar9;
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
      else if (((0xf < uVar6) && (0x10 < uVar6)) && (uVar6 == 0x15)) goto LAB_004f8427;
    }
  }
  else {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar4->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    uVar6 = (this_ptr->base).base.is_walking;
    if (uVar6 < 2) {
      if (uVar6 == 1) {
        iVar3 = 1;
      }
      else {
LAB_004f8417:
        iVar3 = 0;
      }
    }
    else {
      if (2 < uVar6) {
        if (uVar6 == 3) {
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
    pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_44,pCVar4);
    local_14 = (CCharacter_full_vtable *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar4->y);
    in_stack_ffffff68 = (float)local_14;
    if ((float)local_14 < (float)-1.57079632675) {
      in_stack_ffffff68 = (float)local_14 + 3.141593f;
    }
    if ((float)1.57079632675 < in_stack_ffffff68) {
      in_stack_ffffff68 = in_stack_ffffff68 + -3.141593f;
    }
    local_18 = delta_time * (float)3.1415926535000001;
    local_1c = -local_18;
    if (in_stack_ffffff68 < local_1c) {
      in_stack_ffffff68 = local_1c;
    }
    if (local_18 < in_stack_ffffff68) {
      in_stack_ffffff68 = local_18;
    }
    (this_ptr->base).base.base.orient.vec.y =
         (this_ptr->base).base.base.orient.vec.y + in_stack_ffffff68;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  }
  pCVar7 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  local_14 = (pCVar7->base).vtable._uc;
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base).base.model,&local_74,0);
  iVar3 = (*(local_14->_uc).attractActorToward)(pCVar7,(CDemonActor *)this_ptr,pCVar4);
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
    fVar14 = *(float *)(this_ptr->unk + 0x18);
    iVar3 = INT_02db8970;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(this_ptr->unk + 0xc),&CStack_94);
    CStack_84.w = CStack_94.w;
    puVar12 = (uint *)((int)&CStack_84 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    puVar11 = (uint *)((int)&CStack_94 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
    *(uint *)((int)&CStack_84 + (uint)bVar13 * -8 + 4) =
         *(uint *)((int)&CStack_94 + (uint)bVar13 * -8 + 4);
    *puVar12 = *puVar11;
    puVar12[(uint)bVar13 * -2 + 1] = puVar11[(uint)bVar13 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (pCStack_20,&CStack_84,fVar14,iVar3,blend_callback);
  }
  core_icepick_cpp_CIcePick_FUN_004f8810(this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_ffffff68);
  return;
}
