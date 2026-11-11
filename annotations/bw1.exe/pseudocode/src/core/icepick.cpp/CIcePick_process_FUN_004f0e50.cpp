// Name: core_icepick.cpp_CIcePick_process_FUN_004f0e50
// Address: 004f0e50
// Address Range: [[004f0e50, 004f1660]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f0e50(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f14e5) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_CIcePick_process_FUN_004f0e50(CIcePick *this_ptr,float delta_time)

{
  EWalkState EVar1;
  CDemonActor *pCVar2;
  bool bVar3;
  CCharacter_full_vtable *pCVar4;
  int iVar5;
  CMotionController *this_ptr_00;
  EDeathState EVar6;
  int iVar7;
  uint uVar8;
  SMotion *pSVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_18a4 [1522];
  CDeformableModelInstance *pCVar12;
  CQuaternion4f *source_quaternions;
  CCharacter *this_ptr_01;
  float fVar13;
  CIcePick *actor;
  CVector3f *pCVar14;
  code *blend_callback;
  float fStack_c8;
  CQuaternion4f CStack_b8;
  float fStack_a8;
  float afStack_a4 [4];
  float fStack_94;
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  uint uStack_60;
  float afStack_5c [5];
  uint uStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  CCharacter_full_vtable *pCStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar11 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar5 == 0) {
    return;
  }
  if ((this_ptr->base).ai_task == HERO_TASK_SUSPEND) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_icepick_cpp_FUN_004f1b50(this_ptr,delta_time);
  }
  this_ptr->is_armed =
       (uint)((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0);
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  fVar13 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar13;
  if (fVar13 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar14 = &(this_ptr->base).base.model.accumulated_root_motion;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  core_icepick_cpp_FUN_004f2340(this_ptr,delta_time);
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  pCVar12 = &(this_ptr->base).base.model;
  if (iVar5 == 0) {
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCVar12->base);
    uVar8 = pSVar9->state_index;
    if (uVar8 < 9) {
      if ((((uVar8 == 0) || (uVar8 < 2)) || (uVar8 < 3)) || (uVar8 == 3)) goto LAB_004f1252;
    }
    else {
      if (uVar8 < 10) {
        return;
      }
      if (uVar8 < 0xf) {
        if (uVar8 < 0xb) {
LAB_004f1252:
          if ((this_ptr->base).base.is_on_ground != 0) {
            iVar5 = 0;
            if ((this_ptr->guns_drawn != 0) && (this_ptr->is_armed == 0)) {
              iVar5 = 10;
            }
            if ((this_ptr->base).player_input.action_state.walk != 0) {
              if ((this_ptr->base).player_input.action_state.run == 0) {
                iVar5 = 1;
              }
              else {
                iVar5 = 2;
              }
            }
            if ((this_ptr->base).player_input.action_state.backup != 0) {
              iVar5 = 3;
            }
            if ((this_ptr->base).player_input.action_state.draw != 0) {
              iVar5 = this_ptr->guns_drawn;
              (this_ptr->base).player_input.action_state.draw = 0;
              uVar8 = (uint)(iVar5 == 0);
              this_ptr->guns_drawn = uVar8;
              if ((uVar8 == 0) || (this_ptr->is_armed != 0)) {
                iVar5 = 0;
              }
              else {
                iVar5 = 10;
              }
            }
            if ((this_ptr->base).player_input.action_state.fire != 0) {
              bVar3 = true;
              if ((this_ptr->guns_drawn == 0) && ((this_ptr->base).control_type != HERO_CONTROL_AI))
              {
                iVar7 = core_hero_cpp_CHero_tryInteract_FUN_004eb090(&this_ptr->base);
                bVar3 = false;
                if (iVar7 != 0) goto LAB_004f12f7;
                iVar7 = core_hero_cpp_FUN_004eb3e0(this_ptr,0);
                if ((iVar7 != 0) && (iVar7 != 1)) {
                  core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(&this_ptr->base);
                }
                if ((iVar7 != 0) ||
                   (iVar7 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240
                                      (&this_ptr->base), iVar7 != 0)) goto LAB_004f12f7;
                iVar7 = core_hero_cpp_FUN_004eb660(&this_ptr->base);
                if (iVar7 != 0) {
                  core_hero_cpp_FUN_004eb7f0(this_ptr);
                  goto LAB_004f12f7;
                }
              }
              else {
LAB_004f12f7:
                if (!bVar3) goto switchD_004f148c_default;
              }
              if (this_ptr->guns_drawn != 0) {
                if (this_ptr->is_armed == 0) {
                  iVar7 = this_ptr->attack_count;
                  (this_ptr->base).player_input.action_state.fire = 0;
                  switch(iVar7) {
                  case 0:
                  case 2:
                    iVar5 = 0xe;
                    break;
                  case 1:
                  case 3:
                    iVar5 = 0xf;
                    break;
                  case 4:
                    iVar5 = 0x10;
                  }
                }
                else {
                  iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                                    ((this_ptr->base).base.carry_hands[1].carry_actor,
                                     g_CWeaponClassInfo.name_hash);
                  if (iVar7 != 0) {
                    (**(code **)(*(int *)(iVar7 + 0x154) + 0xe4))(iVar7);
                  }
                }
              }
            }
switchD_004f148c_default:
            (this_ptr->base).base.turn_angle_accumulator =
                 (this_ptr->base).player_input.turn_speed * (this_ptr->base).base.turn_speed;
            pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                               (&(this_ptr->base).base.model.base);
            if (iVar5 != pSVar9->state_index) {
              if ((((iVar5 == 0xe) || (iVar5 == 0xf)) || (iVar5 == 0x10)) &&
                 (iVar7 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handles[0]), iVar7 == 0)) {
                uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                                  ((CDemonActor *)this_ptr,"icepick-miss?.wav");
                this_ptr->sfx_handles[0] = uVar8;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,iVar5,1);
            }
            if (((this_ptr->base).player_input.action_state.use_item != 0) &&
               (iVar5 = core_icepick_cpp_FUN_004f17e0(this_ptr), iVar5 == 0)) {
              core_icepick_cpp_CIcePick_startThrowAttack_FUN_004f1980(this_ptr);
            }
          }
        }
      }
      else if (((0xf < uVar8) && (0x10 < uVar8)) && (uVar8 == 0x15)) goto LAB_004f1252;
    }
  }
  else {
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar14->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    EVar1 = (this_ptr->base).base.walk_state;
    if (EVar1 < 2) {
      if (EVar1 == WALK_STATE_WALKING) {
        iVar5 = 1;
      }
      else {
LAB_004f1242:
        iVar5 = 0;
      }
    }
    else {
      if (2 < EVar1) {
        if (EVar1 == WALK_STATE_NO_PATH) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCVar12->base,0,1);
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
          goto LAB_004f0f65;
        }
        goto LAB_004f1242;
      }
      iVar5 = 2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              (&(this_ptr->base).base.model.base,iVar5,1);
  }
LAB_004f0f65:
  pCVar2 = (this_ptr->base).base.grabbed_by;
  if (pCVar2 == (CDemonActor *)0x0) {
    CStack_6c.x = (this_ptr->base).base.model.accumulated_root_motion.x;
    CStack_6c.y = (this_ptr->base).base.model.accumulated_root_motion.y;
    CStack_6c.z = (this_ptr->base).base.model.accumulated_root_motion.z;
    core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
    fStack_a8 = (this_ptr->base).base.velocity.x * delta_time;
    pCVar14 = &CStack_6c;
    afStack_a4[0] = (this_ptr->base).base.velocity.y * delta_time;
    afStack_a4[1] = (this_ptr->base).base.velocity.z * delta_time;
    fStack_84 = fStack_a8;
    afStack_a4[(uint)bVar11 * -2 + 9] = afStack_a4[(uint)bVar11 * -2];
    afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    fStack_3c = fStack_84 + (this_ptr->base).base.position_delta.x;
    fStack_38 = fStack_80 + (this_ptr->base).base.position_delta.y;
    fStack_34 = fStack_7c + (this_ptr->base).base.position_delta.z;
    afStack_a4[2] = fStack_3c;
    afStack_a4[(uint)bVar11 * -2 + 3] = afStack_5c[(uint)bVar11 * -2 + 9];
    afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    CStack_6c.x = CStack_6c.x + afStack_a4[2];
    CStack_6c.y = CStack_6c.y + afStack_a4[3];
    CStack_6c.z = CStack_6c.z + fStack_94;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,pCVar14);
    goto LAB_004f111a;
  }
  if ((this_ptr->base).base.grabbed_type == 0) {
    core_actor_cpp_FUN_00408bb0(this_ptr,&pCVar2->location);
    uStack_60 = uStack_48;
    afStack_5c[(uint)bVar11 * -2] = afStack_5c[(uint)bVar11 * -2 + 6];
    afStack_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&uStack_60);
    afStack_5c[2] = (float)uStack_90;
    afStack_5c[(uint)bVar11 * -2 + 3] = afStack_a4[(uint)bVar11 * -2 + 6];
    afStack_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    pCStack_24 = (CCharacter_full_vtable *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_5c[3]);
    fStack_14 = (float)pCStack_24;
    if ((float)pCStack_24 < _DAT_005e539f) {
      fStack_14 = (float)pCStack_24 + _DAT_005e53a3;
    }
    if (_DAT_005e53a7 < fStack_14) {
      fStack_14 = fStack_14 + _DAT_005e53ab;
    }
    fStack_18 = delta_time * _DAT_005e53a3;
    fStack_20 = -fStack_18;
    if (fStack_14 < fStack_20) {
      fStack_14 = fStack_20;
    }
    if (fStack_18 < fStack_14) {
      fStack_14 = fStack_18;
    }
    (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + fStack_14;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  }
  this_ptr_01 = (CCharacter *)(this_ptr->base).base.grabbed_by;
  pCStack_24 = (this_ptr_01->base).vtable._uc;
  pCStack_1c = &(this_ptr->base).base.model.base;
  core_skeleton_cpp_FUN_00569130(pCStack_1c,0);
  pCVar4 = pCStack_24;
  pCVar14 = (CVector3f *)(afStack_a4 + 0xb);
  CStack_78.x = (float)uStack_30;
  afStack_a4[(uint)bVar11 * -2 + 0xc] = afStack_5c[(uint)bVar11 * -2 + 0xc];
  actor = this_ptr;
  afStack_a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
       afStack_5c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
  iVar5 = (*(pCVar4->_uc).attractActorToward)(this_ptr_01,(CDemonActor *)actor,pCVar14);
  if (iVar5 == 0) {
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
LAB_004f1107:
    iVar5 = 0;
    this_ptr_00 = &(this_ptr->base).base.model.base;
  }
  else {
    if ((this_ptr->base).base.grabbed_by == (CDemonActor *)0x0) goto LAB_004f1107;
    if ((this_ptr->base).player_input.action_state.fire == 0) goto LAB_004f111a;
    iVar5 = 0x11;
    this_ptr_00 = pCStack_1c;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr_00,iVar5,1);
LAB_004f111a:
  core_inv_cpp_FUN_004f9f10(&(this_ptr->base).inventory);
  iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                    ((this_ptr->base).base.carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash);
  if (iVar5 != 0) {
    (**(code **)(*(int *)(iVar5 + 0x154) + 0xc))(iVar5,delta_time);
    *(uint *)(iVar5 + 0x568) = 100;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  pCVar12 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(pCVar12);
  EVar6 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar6 == DEATH_STATE_ALIVE) {
    blend_callback = core_skeleton_cpp_FUN_00567360;
    fVar13 = this_ptr->head_look_blend_weight;
    iVar5 = _DAT_01d06c74;
    core_xform_cpp_FUN_005b7ed0(&this_ptr->head_look_euler);
    source_quaternions = &CStack_b8;
    CStack_b8.w = fStack_c8;
    puVar10 = (uint *)((int)&CStack_b8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    *(uint *)((int)&CStack_b8 + (uint)bVar11 * -8 + 4) =
         *(uint *)(&stack0xffffff3c + (uint)bVar11 * -8);
    *puVar10 = *(uint *)(&stack0xffffff40 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    puVar10[(uint)bVar11 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff40 + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
          ((uint)bVar11 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60
              (pCVar12,source_quaternions,fVar13,iVar5,blend_callback);
  }
  core_icepick_cpp_FUN_004f1670(this_ptr,delta_time);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  return;
}
