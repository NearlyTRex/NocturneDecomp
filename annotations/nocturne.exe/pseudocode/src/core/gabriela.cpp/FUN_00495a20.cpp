// Name: core_gabriela.cpp_FUN_00495a20
// Address: 00495a20
// Address Range: [[00495a20, 00496d0f]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_00495a20(CGabriella *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_00495a20(CGabriella *param_1,float param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  CLadder *pCVar7;
  CWeapon *this_ptr;
  uint uVar8;
  CGame *pCVar9;
  int iVar10;
  CVector3f *pCVar11;
  CVector3f *pCVar12;
  CDemonActor *pCVar13;
  CBoxActor *pCVar14;
  EDeathState EVar15;
  SMotion *pSVar16;
  uint is_holstering;
  bool bVar17;
  char *sound_name;
  CMatrix3x3f local_1dc;
  CBoundingBox3D local_1b4;
  float local_19c;
  float local_198;
  float local_194;
  CVector3f local_190;
  CVector3f local_184;
  CVector3f local_178;
  CVector3f local_16c;
  float local_160;
  float local_15c;
  float local_158;
  CVector3f local_154;
  CVector3f local_148;
  CVector3f local_13c;
  CVector3f local_130;
  CVector3f local_124;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  float local_ac;
  uint local_a8;
  float local_a4;
  CVector3f local_a0;
  CVector3f local_94;
  float local_88;
  float local_84;
  float local_80;
  CVector3f local_7c;
  CVector3f local_70;
  double local_64;
  CCharacter *local_54;
  CLadder *local_50;
  CCharacter_full_vtable *local_4c;
  float local_48;
  float local_44;
  float local_40;
  CMotionController *local_3c;
  float local_38;
  float local_34;
  float local_30;
  CAmmoBox *local_2c;
  float local_28;
  CCharacter_full_vtable *local_24;
  float local_20;
  CCharacter_full_vtable *local_1c;
  float local_18;
  CCharacter_full_vtable *local_14;
  
  iVar10 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  if (iVar10 == 0) {
    return;
  }
  if ((param_1->base).control_type == HERO_CONTROL_AI) {
    core_gabriela_cpp_CGabriella_processAI_FUN_00496d10(param_1,param_2);
  }
  fVar3 = (param_1->base).invincibility_timer - param_2;
  (param_1->base).invincibility_timer = fVar3;
  if (fVar3 < 0.0) {
    (param_1->base).invincibility_timer = 0.0;
  }
  pCVar11 = core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_00497870(param_1,&local_10c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)param_1,&local_184,pCVar11);
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
  core_gabriela_cpp_CGabriella_processMotionEvents_FUN_00497410(param_1,param_2);
  is_holstering = (uint)((param_1->base).base.hit_points <= 0.0);
  if ((param_1->base).base.grabbed_by != (CDemonActor *)0x0) {
    is_holstering = 1;
  }
  if ((param_1->base).pushed_object != (CBoxActor *)0x0) {
    is_holstering = 1;
  }
  if ((param_1->base).ladder_to_climb != (CLadder *)0x0) {
    is_holstering = 1;
  }
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       (&(param_1->base).base.model.motion_controller,8);
  if (0.0 < (float)local_14) {
    is_holstering = 1;
  }
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       (&(param_1->base).base.model.motion_controller,0xb);
  if (0.0 < (float)local_14) {
    is_holstering = 1;
  }
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       (&(param_1->base).base.model.motion_controller,0xc);
  if (0.0 < (float)local_14) {
    is_holstering = 1;
  }
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       (&(param_1->base).base.model.motion_controller,0x12);
  if (0.0 < (float)local_14) {
    is_holstering = 1;
  }
  (param_1->base).base.turn_speed = 0.0;
  iVar10 = (param_1->base).base.is_on_ground;
  (param_1->base).base.walk_step_speed = 0.0;
  local_20 = 0.0;
  if (iVar10 != 0) {
    pCVar2 = &(param_1->base).base.model;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                         (&pCVar2->motion_controller,1);
    (param_1->base).base.walk_step_speed =
         (float)local_14 * _DAT_01c71358 + (param_1->base).base.walk_step_speed;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                         (&pCVar2->motion_controller,2);
    (param_1->base).base.walk_step_speed =
         (float)local_14 * _DAT_01c7135c + (param_1->base).base.walk_step_speed;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                         (&pCVar2->motion_controller,3);
    (param_1->base).base.walk_step_speed =
         (param_1->base).base.walk_step_speed - (float)local_14 * _DAT_01c71360;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                         (&pCVar2->motion_controller,0x14);
    local_20 = 0.0 - (float)local_14 * 2.0f;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                         (&pCVar2->motion_controller,0x15);
    pCVar9 = 0x01C775EC;
    fVar3 = (float)local_14 * 2.0f;
    (param_1->base).base.turn_speed = param_2 * (float)12.566370614;
    local_20 = fVar3 + local_20;
    if (pCVar9->letterbox_mode != 0) {
      (param_1->base).base.turn_speed = (param_1->base).base.turn_speed * (float)0.33333333333333298;
    }
  }
  local_20 = local_20 * param_2;
  pCVar7 = (param_1->base).ladder_to_climb;
  (param_1->base).base.walk_step_speed = (param_1->base).base.walk_step_speed * param_2;
  if (pCVar7 == (CLadder *)0x0) {
    pCVar13 = (param_1->base).base.grabbed_by;
    if (pCVar13 != (CDemonActor *)0x0) {
      if ((param_1->base).base.grabbed_type == 0) {
        pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                            ((CDemonActor *)param_1,&local_124,&(pCVar13->location).position);
        pCVar11 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                            (&local_118,pCVar11);
        local_14 = (CCharacter_full_vtable *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar11->y);
        local_18 = (float)local_14;
        if ((float)local_14 < (float)-1.57079632675) {
          local_18 = (float)local_14 + 3.141593f;
        }
        if ((float)1.57079632675 < local_18) {
          local_18 = local_18 + -3.141593f;
        }
        local_28 = param_2 * (float)3.1415926535000001;
        local_34 = -local_28;
        if (local_18 < local_34) {
          local_18 = local_34;
        }
        if (local_28 < local_18) {
          local_18 = local_28;
        }
        (param_1->base).base.base.orient.vec.y = (param_1->base).base.base.orient.vec.y + local_18;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
      }
      local_54 = (CCharacter *)(param_1->base).base.grabbed_by;
      local_14 = (local_54->base).vtable._uc;
      pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                          (&(param_1->base).base.model,&local_13c,0);
      iVar10 = (*(local_14->_uc).attractActorToward)(local_54,(CDemonActor *)param_1,pCVar11);
      if (iVar10 == 0) {
        (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if ((param_1->base).base.grabbed_by != (CDemonActor *)0x0) {
        if ((param_1->base).player_input.action_state.fire != 0) {
          iVar10 = 7;
          goto LAB_00495d95;
        }
        goto LAB_00495d9d;
      }
      goto LAB_00495d8e;
    }
    if ((param_1->base).pushed_object == (CBoxActor *)0x0) {
      iVar10 = core_charactr_cpp_FUN_00428c00((CCharacter *)param_1,param_2);
      pCVar2 = &(param_1->base).base.model;
      if (iVar10 == 0) {
        if (is_holstering == 0) {
          pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                              (&pCVar2->motion_controller);
          uVar8 = pSVar16->state_index;
          if (uVar8 < 0xe) {
            if ((((uVar8 == 0) || (uVar8 < 2)) || (uVar8 < 3)) || (uVar8 == 3)) goto LAB_00496679;
          }
          else if (uVar8 < 0xf) {
            local_2c = (CAmmoBox *)
                       core_actor_cpp_castToClassHash_FUN_0040d890
                                 ((param_1->base).object_to_pick_up,
                                  g_CAmmoBoxActorType_007641f8.name_hash);
            if (local_2c != (CAmmoBox *)0x0) {
              local_14 = (CCharacter_full_vtable *)
                         core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                                   (&pCVar2->motion_controller);
              core_ammobox_cpp_CAmmoBox_openBox_FUN_0040f130(local_2c,(float)local_14);
            }
          }
          else if (uVar8 < 0x11) {
            if (uVar8 == 0x10) {
LAB_00496679:
              if ((param_1->base).base.is_on_ground != 0) {
                iVar10 = 0;
                if ((param_1->base).player_input.action_state.walk != 0) {
                  if ((param_1->base).player_input.action_state.run == 0) {
                    iVar10 = 1;
                  }
                  else {
                    iVar10 = 2;
                  }
                }
                if ((param_1->base).player_input.action_state.backup != 0) {
                  iVar10 = 3;
                }
                fVar3 = (param_1->base).base.walk_step_speed;
                fVar4 = (param_1->base).base.position_delta.x;
                local_3c = &(param_1->base).base.model.motion_controller;
                fVar5 = (param_1->base).base.position_delta.z;
                (param_1->base).base.turn_angle_accumulator =
                     (param_1->base).player_input.turn_speed * (param_1->base).base.turn_speed;
                (param_1->base).base.position_delta.z = fVar3 + fVar5;
                (param_1->base).base.position_delta.x = fVar4 + local_20;
                pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(local_3c);
                if (iVar10 != pSVar16->state_index) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_3c,iVar10,1);
                }
                if (((param_1->base).player_input.action_state.use_item != 0) &&
                   (iVar10 = core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0
                                       (param_1), iVar10 == 0)) {
                  core_gabriela_cpp_CGabriella_tryThrowObject_FUN_00498bd0(param_1);
                }
              }
            }
          }
          else if ((uVar8 < 0x12) || ((0x13 < uVar8 && ((uVar8 < 0x15 || (uVar8 == 0x15))))))
          goto LAB_00496679;
        }
        goto LAB_00495d9d;
      }
      uVar8 = (param_1->base).base.is_walking;
      if (uVar8 < 2) {
        if (uVar8 != 1) goto LAB_00495d8e;
        iVar10 = 1;
      }
      else {
        if (2 < uVar8) {
          if (uVar8 == 3) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar2->motion_controller,0,1);
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
            goto LAB_00495d9d;
          }
          goto LAB_00495d8e;
        }
        iVar10 = 2;
      }
      goto LAB_00495d95;
    }
    local_50 = pCVar7;
    if ((param_1->base).player_input.action_state.fire != 0) {
      pCVar14 = (param_1->base).pushed_object;
      (*((pCVar14->base).vtable._ub)->getBoundingBox)(&pCVar14->base,&local_1b4);
      local_19c = local_1b4.min.x + local_1b4.max.x;
      local_198 = local_1b4.min.y + local_1b4.max.y;
      local_a0.x = local_19c * 0.5f;
      local_a0.y = local_198 * 0.5f;
      local_194 = local_1b4.min.z + local_1b4.max.z;
      local_a0.z = local_194 * 0.5f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                (&((param_1->base).pushed_object)->base,&local_148,&local_a0);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                ((CDemonActor *)param_1,&local_b8,&local_148);
      pCVar11 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                          (&local_dc,&local_b8);
      local_14 = (CCharacter_full_vtable *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040df00(pCVar11->y);
      local_88 = local_1b4.max.x - local_1b4.min.x;
      local_80 = local_1b4.max.z - local_1b4.min.z;
      local_ac = local_88 * 0.5f;
      local_a4 = local_80 * 0.5f;
      local_a8 = 0;
      local_84 = local_1b4.max.y - local_1b4.min.y;
      local_1c = local_14;
      if ((((local_b8.z - SQRT(local_a4 * local_a4 + local_ac * local_ac) < (float)3)
           && (local_64 = (double)local_b8.y, 1.0 < local_64)) && (local_64 < 5)) &&
         (ABS((float)local_14) < (float)0.78539816337500001)) {
        local_24 = (CCharacter_full_vtable *)(param_2 * (float)3.1415926535000001);
        if ((float)local_14 < -(float)local_24) {
          local_1c = (CCharacter_full_vtable *)-(float)local_24;
        }
        if ((float)local_24 < (float)local_1c) {
          local_1c = local_24;
        }
        (param_1->base).base.base.orient.vec.y =
             (param_1->base).base.base.orient.vec.y + (float)local_1c;
        goto LAB_00495d9d;
      }
    }
    if (local_50 == (CLadder *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,0,1);
      core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(&param_1->base);
    }
  }
  else {
    pCVar11 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        (&((param_1->base).ladder_to_climb)->base,&local_130,&pCVar7->ladder_size);
    if ((param_1->base).base.base.location.position.y <= pCVar11->y) goto LAB_00495d9d;
    (param_1->base).ladder_to_climb = (CLadder *)0x0;
    local_f4.x = 0.0;
    local_f4.y = 0.5;
    local_f4.z = 4.0;
    pCVar11 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                        ((CDemonActor *)param_1,&local_c4,&local_f4);
    pCVar1 = &(param_1->base).base.base.location;
    (pCVar1->position).x = pCVar11->x + (pCVar1->position).x;
    (param_1->base).base.base.location.position.y =
         pCVar11->y + (param_1->base).base.base.location.position.y;
    (param_1->base).base.base.location.position.z =
         pCVar11->z + (param_1->base).base.base.location.position.z;
    local_14 = (CCharacter_full_vtable *)
               (*((param_1->base).base.base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)param_1,(param_1->base).base.collision_cylinder_height,
                          (CVector3f *)0x0);
    (param_1->base).base.closest_distance_threshold = (float)local_14;
    (param_1->base).base.is_on_ground =
         (uint)((param_1->base).base.base.location.position.y <
               (param_1->base).base.closest_distance_threshold + (float)0.01);
LAB_00495d8e:
    iVar10 = 0;
LAB_00495d95:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,iVar10,1);
  }
LAB_00495d9d:
  if ((param_1->base).ladder_to_climb == (CLadder *)0x0) {
    if (((is_holstering == 0) ||
        (pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                             (&(param_1->base).base.model.motion_controller),
        pSVar16->state_index == 0xd)) ||
       ((param_1->base).base.base.standing_platform != (CPlatform *)0x0)) {
      local_178.x = (param_1->base).base.position_delta.x;
      local_178.y = (param_1->base).base.position_delta.y;
      local_178.z = (param_1->base).base.position_delta.z;
      pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                          (&(param_1->base).base.model.motion_controller);
      uVar8 = pSVar16->state_index;
      if (uVar8 < 3) {
        if (uVar8 == 0) {
          bVar17 = true;
LAB_00496832:
          if (!bVar17) {
LAB_00496834:
            local_178.x = local_178.x + (param_1->base).base.model.accumulated_root_motion.x;
            local_178.y = local_178.y + (param_1->base).base.model.accumulated_root_motion.y;
            local_178.z = local_178.z + (param_1->base).base.model.accumulated_root_motion.z;
          }
        }
      }
      else if (3 < uVar8) {
        if (uVar8 < 0x11) {
          bVar17 = uVar8 == 0x10;
          goto LAB_00496832;
        }
        if (0x11 < uVar8) {
          if (uVar8 < 0x14) goto LAB_00496834;
          if (0x14 < uVar8) {
            bVar17 = uVar8 == 0x15;
            goto LAB_00496832;
          }
        }
      }
      (param_1->base).base.velocity.y =
           (param_1->base).base.velocity.y - param_2 * (float)32;
      local_160 = (param_1->base).base.velocity.x * param_2;
      local_15c = (param_1->base).base.velocity.y * param_2;
      local_158 = param_2 * (param_1->base).base.velocity.z;
      local_178.x = local_178.x + local_160;
      local_178.y = local_178.y + local_15c;
      local_178.z = local_178.z + local_158;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_178);
    }
  }
  else {
    pCVar11 = &(param_1->base).base.model.accumulated_root_motion;
    pCVar12 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                        ((CDemonActor *)param_1,&local_70,pCVar11);
    pCVar1 = &(param_1->base).base.base.location;
    (pCVar1->position).x = pCVar12->x + (pCVar1->position).x;
    (param_1->base).base.base.location.position.y =
         pCVar12->y + (param_1->base).base.base.location.position.y;
    (param_1->base).base.base.location.position.z =
         pCVar12->z + (param_1->base).base.base.location.position.z;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    pCVar11->x = (param_1->base).base.model.accumulated_root_motion.y;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  if (((is_holstering == 0) && ((param_1->base).player_input.action_state.draw != 0)) &&
     ((param_1->base).inventory.selected_weapon != (CWeapon *)0x0)) {
    bVar6 = (byte)param_1->weapon_state_flags;
    if ((bVar6 & 3) == 0) {
      *(byte *)&param_1->weapon_state_flags = bVar6 | 2;
    }
    else {
      *(byte *)&param_1->weapon_state_flags = bVar6 & 0xfc;
    }
  }
  pCVar13 = core_actor_cpp_castToClassHash_FUN_0040d890
                      ((param_1->base).base.carry_hands[0].carry_actor,
                       g_CLightActorActorType_00764a9c.name_hash);
  if (pCVar13 != (CDemonActor *)0x0) {
    if ((((param_1->base).player_input.action_state.light != 0) && (is_holstering == 0)) &&
       (pCVar13[0x1a].is_transparent = (uint)(pCVar13[0x1a].is_transparent == 0),
       pCVar13[4].dead2 == 1)) {
      (*((param_1->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)param_1,"flashlit.wav");
    }
    if (pCVar13[0x1a].is_transparent != 0) {
      param_1->flashlight_angle =
           (param_1->base).player_input.look_up_down_speed * (float)3.1415926535000001 *
           (float)2 * param_2 + param_1->flashlight_angle;
      local_48 = core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_00497810(param_1);
      local_14 = (CCharacter_full_vtable *)local_48;
      local_4c = (CCharacter_full_vtable *)
                 core_gabriela_cpp_CGabriella_getFlashlightMaxAngle_FUN_00497860(param_1);
      if (param_1->flashlight_angle < local_48) {
        param_1->flashlight_angle = local_48;
      }
      local_14 = local_4c;
      if ((float)local_4c < param_1->flashlight_angle) {
        param_1->flashlight_angle = (float)local_4c;
      }
    }
  }
  if ((param_1->weapon_state_flags & 1) == 0) {
    fVar3 = param_1->holster_blend - param_2 / 1.2f;
    param_1->holster_blend = fVar3;
    if (fVar3 < 0.0) {
      param_1->holster_blend = 0.0;
    }
  }
  else {
    fVar3 = param_2 / 1.1f + param_1->holster_blend;
    param_1->holster_blend = fVar3;
    if (1.0 < fVar3) {
      param_1->holster_blend = 1.0;
    }
  }
  if ((param_1->weapon_state_flags & 2) == 0) {
    local_30 = param_1->draw_blend;
    fVar3 = local_30 - param_2 / 1.2f;
    param_1->draw_blend = fVar3;
    if (fVar3 < 0.0) {
      param_1->draw_blend = 0.0;
    }
    local_38 = 0.64f + (float)0.14000000000000001;
    if ((local_38 <= local_30) && (param_1->draw_blend < local_38)) {
      sound_name = "undraw-s.wav @ .7";
      goto LAB_00495f6c;
    }
  }
  else {
    local_44 = param_1->draw_blend;
    fVar3 = param_2 / 1.1f + local_44;
    param_1->draw_blend = fVar3;
    if (1.0 < fVar3) {
      param_1->draw_blend = 1.0;
    }
    local_40 = 0.64f + (float)-0.14999999999999999;
    if ((local_44 <= local_40) && (local_40 < param_1->draw_blend)) {
      core_game_cpp_FUN_004a3a70(0x01C775EC);
      sound_name = "draw-f.wav @ 1.5";
LAB_00495f6c:
      (*((param_1->base).base.base.vtable._ub)->playSound)((CDemonActor *)param_1,sound_name);
    }
  }
  if ((param_1->weapon_state_flags & 3) == 0) {
    fVar3 = param_1->aim_blend - param_2 / 1.2f;
    param_1->aim_blend = fVar3;
    if (fVar3 < 0.0) {
      param_1->aim_blend = 0.0;
    }
  }
  else {
    fVar3 = param_2 / 1.1f + param_1->aim_blend;
    param_1->aim_blend = fVar3;
    if (1.0 < fVar3) {
      param_1->aim_blend = 1.0;
    }
  }
  if (is_holstering == 0) {
    if (((pCVar13 == (CDemonActor *)0x0) || (pCVar13[0x1a].is_transparent == 0)) ||
       (pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                            (&(param_1->base).base.model.motion_controller),
       pSVar16->state_index == 5)) {
      fVar3 = param_2 / 1.2f;
      goto LAB_00495fcb;
    }
    fVar3 = param_2 / 1.1f + param_1->light_aim_blend;
  }
  else {
    fVar3 = (param_2 / 1.2f) * (float)3;
LAB_00495fcb:
    fVar3 = param_1->light_aim_blend - fVar3;
  }
  param_1->light_aim_blend = fVar3;
  if (param_1->light_aim_blend < 0.0) {
    param_1->light_aim_blend = 0.0;
  }
  if ((float)0.90000000000000002 < param_1->light_aim_blend) {
    param_1->light_aim_blend = 0.9;
  }
  core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004990c0(param_1,param_2,is_holstering);
  fVar3 = param_1->fire_cooldown_timer - param_2 / 0.2f;
  param_1->fire_cooldown_timer = fVar3;
  if (((fVar3 <= 0.0) && (param_1->fire_cooldown_timer = 0.0, is_holstering == 0)) &&
     (((param_1->base).player_input.action_state.fire != 0 && (param_1->fire_state == 0)))) {
    if (param_1->weapon_state_flags == 0) {
      if ((param_1->draw_blend <= 0.0) &&
         (iVar10 = core_hero_cpp_CHero_tryInteract_FUN_004b4e90(&param_1->base), iVar10 == 0)) {
        iVar10 = core_hero_cpp_FUN_004b5110(&param_1->base);
        switch(iVar10) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0x12,1);
          break;
        default:
          core_hero_cpp_CHero_tryOpenDoor_FUN_004b5270(&param_1->base);
        }
        if ((iVar10 == 0) &&
           (iVar10 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0(&param_1->base),
           iVar10 == 0)) {
          iVar10 = core_hero_cpp_CHero_tryPushNearbyBox_FUN_004b54c0(&param_1->base);
          if (iVar10 == 0) {
            iVar10 = core_hero_cpp_CHero_tryPullLever_FUN_004b52f0(&param_1->base);
            if (iVar10 == 0) {
              core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004987e0(param_1);
            }
            else {
              core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(&param_1->base);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(param_1->base).base.model.motion_controller,0xd,1);
          }
        }
      }
    }
    else {
      param_1->fire_state = 3;
    }
  }
  core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900(param_1);
  core_gabriela_cpp_FUN_004998c0(param_1,param_2,(uint)(is_holstering == 0));
  core_charactr_cpp_FUN_0042a150((CCharacter *)param_1,param_2);
  pCVar2 = &(param_1->base).base.model;
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                       (&pCVar2->motion_controller,0xd);
  if ((float)local_14 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004b56f0(&param_1->base);
  }
  else {
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                         (&pCVar2->motion_controller);
    if ((1.0 < (float)local_14) &&
       (pCVar14 = (CBoxActor *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (&((param_1->base).pushed_object)->base,
                             g_CBoxActorActorType_00764800.name_hash), pCVar14 != (CBoxActor *)0x0))
    {
      core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_00497870(param_1,&local_7c);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_16c,&local_7c);
      local_190.x = local_16c.x - local_184.x;
      local_190.z = local_16c.z - local_184.z;
      local_190.y = 0.0;
      pCVar11 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                          ((CDemonActor *)param_1,&local_154,&local_190);
      if (0.0 < pCVar11->z) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_0041ef90(pCVar14,&local_184,&local_190);
      }
    }
  }
  core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004980d0(param_1,param_2);
  if (param_1->fire_state == 3) {
    pCVar13 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (&((param_1->base).inventory.selected_weapon)->base,
                         g_CDynamiteActorType_01bca088.name_hash);
    if (pCVar13 != (CDemonActor *)0x0) {
      if ((param_1->base).player_input.action_state.fire == 0) {
        param_1->fire_state = 2;
      }
      else {
        fVar3 = param_2 * (float)25 +
                (float)(param_1->coat_cloth).vertices[0x300].connected_indices[9];
        (param_1->coat_cloth).vertices[0x300].connected_indices[9] = (int)fVar3;
        if (60.0f < fVar3) {
          (param_1->base).player_input.action_state.fire = 0;
          param_1->fire_state = 2;
          (param_1->coat_cloth).vertices[0x300].connected_indices[9] = (int)60.0f;
        }
      }
      local_e8.x = param_1->aim_pitch;
      local_e8.z = 0.0;
      local_e8.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_1dc,&local_e8);
      local_d0.z = (float)(param_1->coat_cloth).vertices[0x300].connected_indices[9];
      local_d0.x = 0.0;
      local_d0.y = 0.0;
      pCVar11 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                          (&local_1dc,&local_100,&local_d0);
      pCVar12 = (CVector3f *)((int)&pCVar13[4].orient + 4);
      pCVar11 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                          ((CDemonActor *)param_1,&local_94,pCVar11);
      if (pCVar12 != pCVar11) {
        pCVar12->x = pCVar11->x;
        pCVar13[4].orient.vec.z = pCVar11->y;
        pCVar13[4].orient_matrix.m[0].x = pCVar11->z;
      }
      goto LAB_00496cc5;
    }
    param_1->fire_state = 2;
LAB_004961ba:
    (param_1->coat_cloth).vertices[0x300].connected_indices[9] = (int)10.0f;
    iVar10 = core_gabriela_cpp_CGabriella_canFireWeapon_FUN_00498af0(param_1);
    if (iVar10 == 0) goto LAB_00496cd2;
    param_1->fire_state = 1;
  }
  else {
LAB_00496cc5:
    if (param_1->fire_state == 2) goto LAB_004961ba;
LAB_00496cd2:
    if (param_1->fire_state != 1) goto LAB_0049620e;
  }
  param_1->fire_state = 0;
  core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_00498b60(param_1);
  if (((param_1->base).inventory.selected_weapon)->fire_cooldown == 0) {
    (param_1->base).player_input.action_state.fire = 0;
  }
LAB_0049620e:
  EVar15 = (*(((param_1->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)param_1);
  if (EVar15 != DEATH_STATE_DEAD) {
    core_cloth_cpp_CCloth_process_FUN_00436e50
              (&param_1->coat_cloth,&(param_1->base).base.base.location.position,
               &(param_1->base).base.base.orient.vec,param_2,
               (param_1->base).base.closest_distance_threshold,&(param_1->base).base.model);
  }
  this_ptr = (param_1->base).inventory.selected_weapon;
  (*((this_ptr->base).vtable._ub)->process)(&this_ptr->base,param_2);
  if ((((param_1->base).inventory.selected_weapon)->base).is_transparent == 0) {
    return;
  }
  (param_1->base).base.base.is_transparent = 1;
  return;
}
