// Name: core_gabriela.cpp_CGabriella_process_FUN_004d2ea0
// Address: 004d2ea0
// Address Range: [[004d2ea0, 004d418f]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004d2ea0(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004d2ea0(CGabriella *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  CWeapon *this_ptr_00;
  CDemonActor *pCVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  CGame *pCVar14;
  int iVar15;
  CVector3f *pCVar16;
  CVector3f *pCVar17;
  CDemonActor *pCVar18;
  CBoxActor *this_ptr_01;
  SMotion *pSVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  char *sound_name;
  float in_stack_fffffe24;
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
  CVector3f local_118 [2];
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
  CDemonActor *local_50;
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
  
  iVar15 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar15 == 0) {
    return;
  }
  if ((this_ptr->base).control_type == 2) {
    core_gabriela_cpp_CGabriella_FUN_004d4190(this_ptr);
  }
  fVar3 = (float)(this_ptr->base).no_collision_flag - delta_time;
  (this_ptr->base).no_collision_flag = (int)fVar3;
  if (fVar3 < 0.0) {
    (this_ptr->base).no_collision_flag = 0;
  }
  pCVar16 = (CVector3f *)core_gabriela_cpp_CGabriella_FUN_004d4cf0(this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_184,pCVar16);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_gabriela_cpp_CGabriella_FUN_004d4890(this_ptr);
  bVar9 = 0.0 < (this_ptr->base).base.hit_points;
  bVar20 = (this_ptr->base).base.grabbed_by == (CDemonActor *)0x0;
  bVar21 = (this_ptr->base).pushed_object == (CDemonActor *)0x0;
  bVar22 = (this_ptr->base).ladder_to_climb == (CDemonActor *)0x0;
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,8);
  bVar10 = (float)local_14 <= 0.0;
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0xb);
  bVar11 = (float)local_14 <= 0.0;
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0xc);
  bVar12 = (float)local_14 <= 0.0;
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(this_ptr->base).base.model.motion_controller,0x12);
  bVar13 = (float)local_14 <= 0.0;
  (this_ptr->base).base.turn_speed = 0.0;
  iVar15 = (this_ptr->base).base.is_on_ground;
  (this_ptr->base).base.walk_step_speed = 0.0;
  local_20 = 0.0;
  if (iVar15 != 0) {
    pCVar2 = &(this_ptr->base).base.model;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,1);
    (this_ptr->base).base.walk_step_speed =
         (float)local_14 * FLOAT_02d7b808 + (this_ptr->base).base.walk_step_speed;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,2);
    (this_ptr->base).base.walk_step_speed =
         (float)local_14 * FLOAT_02d7b80c + (this_ptr->base).base.walk_step_speed;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,3);
    (this_ptr->base).base.walk_step_speed =
         (this_ptr->base).base.walk_step_speed - (float)local_14 * FLOAT_02d7b810;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,0x14);
    local_20 = 0.0 - (float)local_14 * 2.0f;
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,0x15);
    pCVar14 = g_CGamePtr;
    fVar3 = (float)local_14 * 2.0f;
    (this_ptr->base).base.turn_speed = delta_time * (float)12.566370614;
    local_20 = fVar3 + local_20;
    if (pCVar14->letterbox_mode != 0) {
      (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
    }
  }
  local_20 = local_20 * delta_time;
  pCVar18 = (this_ptr->base).ladder_to_climb;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.walk_step_speed * delta_time;
  if (pCVar18 == (CDemonActor *)0x0) {
    pCVar7 = (this_ptr->base).base.grabbed_by;
    if (pCVar7 != (CDemonActor *)0x0) {
      if ((this_ptr->base).base.grabbed_type == 0) {
        pCVar16 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            ((CDemonActor *)this_ptr,&local_124,&(pCVar7->location).position);
        pCVar16 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (local_118,pCVar16);
        local_14 = (CCharacter_full_vtable *)
                   core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar16->y);
        local_18 = (float)local_14;
        if ((float)local_14 < (float)-1.57079632675) {
          local_18 = (float)local_14 + 3.141593f;
        }
        if ((float)1.57079632675 < local_18) {
          local_18 = local_18 + -3.141593f;
        }
        local_28 = delta_time * (float)3.1415926535000001;
        local_34 = -local_28;
        if (local_18 < local_34) {
          local_18 = local_34;
        }
        if (local_28 < local_18) {
          local_18 = local_28;
        }
        (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_18
        ;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
      }
      local_54 = (CCharacter *)(this_ptr->base).base.grabbed_by;
      local_14 = (local_54->base).vtable._uc;
      pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                          (&(this_ptr->base).base.model,&local_13c,0);
      iVar15 = (*(local_14->_uc).attractActorToward)(local_54,(CDemonActor *)this_ptr,pCVar16);
      if (iVar15 == 0) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
        if ((this_ptr->base).player_control.action_states[3] != 0) {
          iVar15 = 7;
          goto LAB_004d3215;
        }
        goto LAB_004d321d;
      }
      goto LAB_004d320e;
    }
    if ((this_ptr->base).pushed_object == (CDemonActor *)0x0) {
      iVar15 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                         ((CCharacter *)this_ptr,delta_time);
      pCVar2 = &(this_ptr->base).base.model;
      if (iVar15 == 0) {
        if (bVar13 && (bVar12 && (bVar11 && (bVar10 && (bVar22 && (bVar21 && (bVar20 && bVar9)))))))
        {
          pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&pCVar2->motion_controller);
          uVar8 = pSVar19->state_index;
          if (uVar8 < 0xe) {
            if ((((uVar8 == 0) || (uVar8 < 2)) || (uVar8 < 3)) || (uVar8 == 3)) goto LAB_004d3af9;
          }
          else if (uVar8 < 0xf) {
            local_2c = (CAmmoBox *)
                       core_actor_cpp_castToClassHash_FUN_0040c790
                                 ((this_ptr->base).object_to_pick_up,g_CAmmoBoxClassInfo.name_hash);
            if (local_2c != (CAmmoBox *)0x0) {
              local_14 = (CCharacter_full_vtable *)
                         core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                   (&pCVar2->motion_controller);
              core_ammobox_cpp_CAmmoBox_FUN_00411690(local_2c);
            }
          }
          else if (uVar8 < 0x11) {
            if (uVar8 == 0x10) {
LAB_004d3af9:
              if ((this_ptr->base).base.is_on_ground != 0) {
                iVar15 = 0;
                if ((this_ptr->base).player_control.action_states[0] != 0) {
                  if ((this_ptr->base).player_control.action_states[2] == 0) {
                    iVar15 = 1;
                  }
                  else {
                    iVar15 = 2;
                  }
                }
                if ((this_ptr->base).player_control.action_states[1] != 0) {
                  iVar15 = 3;
                }
                fVar3 = (this_ptr->base).base.walk_step_speed;
                fVar4 = (this_ptr->base).base.position_delta.x;
                local_3c = &(this_ptr->base).base.model.motion_controller;
                fVar5 = (this_ptr->base).base.position_delta.z;
                (this_ptr->base).base.turn_angle_accumulator =
                     (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed;
                (this_ptr->base).base.position_delta.z = fVar3 + fVar5;
                (this_ptr->base).base.position_delta.x = fVar4 + local_20;
                pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(local_3c);
                if (iVar15 != pSVar19->state_index) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_3c,iVar15,1);
                }
                if (((this_ptr->base).player_control.action_states[4] != 0) &&
                   (iVar15 = core_gabriela_cpp_CGabriella_FUN_004d5870(this_ptr), iVar15 == 0)) {
                  core_gabriela_cpp_CGabriella_FUN_004d6050(this_ptr);
                }
              }
            }
          }
          else if ((uVar8 < 0x12) || ((0x13 < uVar8 && ((uVar8 < 0x15 || (uVar8 == 0x15))))))
          goto LAB_004d3af9;
        }
        goto LAB_004d321d;
      }
      uVar8 = (this_ptr->base).base.is_walking;
      if (uVar8 < 2) {
        if (uVar8 != 1) goto LAB_004d320e;
        iVar15 = 1;
      }
      else {
        if (2 < uVar8) {
          if (uVar8 == 3) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,0,1);
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
            goto LAB_004d321d;
          }
          goto LAB_004d320e;
        }
        iVar15 = 2;
      }
      goto LAB_004d3215;
    }
    local_50 = pCVar18;
    if ((this_ptr->base).player_control.action_states[3] != 0) {
      pCVar18 = (this_ptr->base).pushed_object;
      (*((pCVar18->vtable)._ub)->getBoundingBox)(pCVar18,&local_1b4);
      local_19c = local_1b4.min.x + local_1b4.max.x;
      local_198 = local_1b4.min.y + local_1b4.max.y;
      local_a0.x = local_19c * 0.5f;
      local_a0.y = local_198 * 0.5f;
      local_194 = local_1b4.min.z + local_1b4.max.z;
      local_a0.z = local_194 * 0.5f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((this_ptr->base).pushed_object,&local_148,&local_a0);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                ((CDemonActor *)this_ptr,&local_b8,&local_148);
      pCVar16 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_dc,&local_b8);
      local_14 = (CCharacter_full_vtable *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar16->y);
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
        local_24 = (CCharacter_full_vtable *)(delta_time * (float)3.1415926535000001);
        if ((float)local_14 < -(float)local_24) {
          local_1c = (CCharacter_full_vtable *)-(float)local_24;
        }
        if ((float)local_24 < (float)local_1c) {
          local_1c = local_24;
        }
        (this_ptr->base).base.base.orient.vec.y =
             (this_ptr->base).base.base.orient.vec.y + (float)local_1c;
        goto LAB_004d321d;
      }
    }
    if (local_50 == (CDemonActor *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0,1);
      core_hero_cpp_CHero_FUN_004f3350(&this_ptr->base);
    }
  }
  else {
    pCVar16 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((this_ptr->base).ladder_to_climb,&local_130,
                         (CVector3f *)&pCVar18[2].location.position.y);
    if ((this_ptr->base).base.base.location.position.y <= pCVar16->y) goto LAB_004d321d;
    (this_ptr->base).ladder_to_climb = (CDemonActor *)0x0;
    local_f4.x = 0.0;
    local_f4.y = 0.5;
    local_f4.z = 4.0;
    pCVar16 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&local_c4,&local_f4);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar16->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar16->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar16->z + (this_ptr->base).base.base.location.position.z;
    local_14 = (CCharacter_full_vtable *)
               (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                         ((CDemonActor *)this_ptr,(this_ptr->base).base.collision_cylinder_height,
                          (CVector3f *)0x0);
    (this_ptr->base).base.closest_distance_threshold = (float)local_14;
    (this_ptr->base).base.is_on_ground =
         (uint)((this_ptr->base).base.base.location.position.y <
               (this_ptr->base).base.closest_distance_threshold + (float)0.01);
LAB_004d320e:
    iVar15 = 0;
LAB_004d3215:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar15,1);
  }
LAB_004d321d:
  if ((this_ptr->base).ladder_to_climb == (CDemonActor *)0x0) {
    if (((bVar13 && (bVar12 && (bVar11 && (bVar10 && (bVar22 && (bVar21 && (bVar20 && bVar9)))))))
        || (pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                (&(this_ptr->base).base.model.motion_controller),
           pSVar19->state_index == 0xd)) ||
       ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
      local_178.x = (this_ptr->base).base.position_delta.x;
      local_178.y = (this_ptr->base).base.position_delta.y;
      local_178.z = (this_ptr->base).base.position_delta.z;
      pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&(this_ptr->base).base.model.motion_controller);
      uVar8 = pSVar19->state_index;
      if (uVar8 < 3) {
        if (uVar8 == 0) {
          bVar23 = true;
LAB_004d3cb2:
          if (!bVar23) {
LAB_004d3cb4:
            local_178.x = local_178.x + (this_ptr->base).base.model.accumulated_root_motion.x;
            local_178.y = local_178.y + (this_ptr->base).base.model.accumulated_root_motion.y;
            local_178.z = local_178.z + (this_ptr->base).base.model.accumulated_root_motion.z;
          }
        }
      }
      else if (3 < uVar8) {
        if (uVar8 < 0x11) {
          bVar23 = uVar8 == 0x10;
          goto LAB_004d3cb2;
        }
        if (0x11 < uVar8) {
          if (uVar8 < 0x14) goto LAB_004d3cb4;
          if (0x14 < uVar8) {
            bVar23 = uVar8 == 0x15;
            goto LAB_004d3cb2;
          }
        }
      }
      (this_ptr->base).base.velocity.y =
           (this_ptr->base).base.velocity.y - delta_time * (float)32;
      local_160 = (this_ptr->base).base.velocity.x * delta_time;
      local_15c = (this_ptr->base).base.velocity.y * delta_time;
      local_158 = delta_time * (this_ptr->base).base.velocity.z;
      local_178.x = local_178.x + local_160;
      local_178.y = local_178.y + local_15c;
      local_178.z = local_178.z + local_158;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_178);
    }
  }
  else {
    pCVar16 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar17 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&local_70,pCVar16);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar17->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar17->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar17->z + (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar16->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  if (((bVar13 && (bVar12 && (bVar11 && (bVar10 && (bVar22 && (bVar21 && (bVar20 && bVar9))))))) &&
      ((this_ptr->base).player_control.action_states[6] != 0)) &&
     ((this_ptr->base).inventory.selected_weapon != (CWeapon *)0x0)) {
    bVar6 = (byte)this_ptr->weapon_state_flags;
    if ((bVar6 & 3) == 0) {
      *(byte *)&this_ptr->weapon_state_flags = bVar6 | 2;
    }
    else {
      *(byte *)&this_ptr->weapon_state_flags = bVar6 & 0xfc;
    }
  }
  pCVar18 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((this_ptr->base).base.carry_hands[0].carry_actor,
                       g_CLightActorClassInfo.name_hash);
  if (pCVar18 != (CDemonActor *)0x0) {
    if ((((this_ptr->base).player_control.action_states[5] != 0) &&
        (bVar13 && (bVar12 && (bVar11 && (bVar10 && (bVar22 && (bVar21 && (bVar20 && bVar9))))))))
       && (*(uint *)((int)&pCVar18[0x1a].orient + 4) = (uint)(pCVar18[0x1a].orient.vec.y == 0.0),
          pCVar18[4].scale.y == 1)) {
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"flashlit.wav");
    }
    if (pCVar18[0x1a].orient.vec.y != 0.0) {
      this_ptr->flashlight_angle =
           (this_ptr->base).player_control.look_up_down_speed * (float)3.1415926535000001 *
           (float)2 * delta_time + this_ptr->flashlight_angle;
      local_48 = (float)core_gabriela_cpp_CGabriella_FUN_004d4c90(this_ptr);
      local_14 = (CCharacter_full_vtable *)local_48;
      local_4c = (CCharacter_full_vtable *)core_gabriela_cpp_CGabriella_FUN_004d4ce0(this_ptr);
      if (this_ptr->flashlight_angle < local_48) {
        this_ptr->flashlight_angle = local_48;
      }
      local_14 = local_4c;
      if ((float)local_4c < this_ptr->flashlight_angle) {
        this_ptr->flashlight_angle = (float)local_4c;
      }
    }
  }
  if ((this_ptr->weapon_state_flags & 1) == 0) {
    fVar3 = this_ptr->holster_blend - delta_time / 1.2f;
    this_ptr->holster_blend = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->holster_blend = 0.0;
    }
  }
  else {
    fVar3 = delta_time / 1.1f + this_ptr->holster_blend;
    this_ptr->holster_blend = fVar3;
    if (1.0 < fVar3) {
      this_ptr->holster_blend = 1.0;
    }
  }
  if ((this_ptr->weapon_state_flags & 2) == 0) {
    local_30 = this_ptr->draw_blend;
    fVar3 = local_30 - delta_time / 1.2f;
    this_ptr->draw_blend = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->draw_blend = 0.0;
    }
    local_38 = 0.64f + (float)0.14000000000000001;
    if ((local_38 <= local_30) && (this_ptr->draw_blend < local_38)) {
      sound_name = "undraw-s.wav @ .7";
      goto LAB_004d33ec;
    }
  }
  else {
    local_44 = this_ptr->draw_blend;
    fVar3 = delta_time / 1.1f + local_44;
    this_ptr->draw_blend = fVar3;
    if (1.0 < fVar3) {
      this_ptr->draw_blend = 1.0;
    }
    local_40 = 0.64f + (float)-0.14999999999999999;
    if ((local_44 <= local_40) && (local_40 < this_ptr->draw_blend)) {
      core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004e0bb0(g_CGamePtr);
      sound_name = "draw-f.wav @ 1.5";
LAB_004d33ec:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
    }
  }
  if ((this_ptr->weapon_state_flags & 3) == 0) {
    fVar3 = this_ptr->aim_blend - delta_time / 1.2f;
    this_ptr->aim_blend = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->aim_blend = 0.0;
    }
  }
  else {
    fVar3 = delta_time / 1.1f + this_ptr->aim_blend;
    this_ptr->aim_blend = fVar3;
    if (1.0 < fVar3) {
      this_ptr->aim_blend = 1.0;
    }
  }
  if (bVar13 && (bVar12 && (bVar11 && (bVar10 && (bVar22 && (bVar21 && (bVar20 && bVar9))))))) {
    if (((pCVar18 == (CDemonActor *)0x0) || (pCVar18[0x1a].orient.vec.y == 0.0)) ||
       (pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&(this_ptr->base).base.model.motion_controller),
       pSVar19->state_index == 5)) {
      fVar3 = delta_time / 1.2f;
      goto LAB_004d344b;
    }
    fVar3 = delta_time / 1.1f + this_ptr->light_aim_blend;
  }
  else {
    fVar3 = (delta_time / 1.2f) * (float)3;
LAB_004d344b:
    fVar3 = this_ptr->light_aim_blend - fVar3;
  }
  this_ptr->light_aim_blend = fVar3;
  if (this_ptr->light_aim_blend < 0.0) {
    this_ptr->light_aim_blend = 0.0;
  }
  if ((float)0.90000000000000002 < this_ptr->light_aim_blend) {
    this_ptr->light_aim_blend = 0.9;
  }
  core_gabriela_cpp_CGabriella_FUN_004d6540(this_ptr);
  fVar3 = this_ptr->fire_cooldown_timer - delta_time / 0.2f;
  this_ptr->fire_cooldown_timer = fVar3;
  if (((fVar3 <= 0.0) &&
      (this_ptr->fire_cooldown_timer = 0.0,
      bVar13 && (bVar12 && (bVar11 && (bVar10 && (bVar22 && (bVar21 && (bVar20 && bVar9)))))))) &&
     (((this_ptr->base).player_control.action_states[3] != 0 && (this_ptr->fire_state == 0)))) {
    if (this_ptr->weapon_state_flags == 0) {
      if ((this_ptr->draw_blend <= 0.0) &&
         (iVar15 = core_hero_cpp_CHero_FUN_004f2af0(&this_ptr->base), iVar15 == 0)) {
        iVar15 = core_hero_cpp_CHero_FUN_004f2d70(&this_ptr->base);
        switch(iVar15) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0x12,1);
          break;
        default:
          core_hero_cpp_CHero_FUN_004f2ed0(&this_ptr->base);
        }
        if ((iVar15 == 0) &&
           (iVar15 = core_hero_cpp_CHero_FUN_004f2c40(&this_ptr->base), iVar15 == 0)) {
          iVar15 = core_hero_cpp_CHero_FUN_004f3120(&this_ptr->base);
          if (iVar15 == 0) {
            iVar15 = core_hero_cpp_CHero_FUN_004f2f50(&this_ptr->base);
            if (iVar15 == 0) {
              core_gabriela_cpp_CGabriella_FUN_004d5c60(this_ptr);
            }
            else {
              core_hero_cpp_CHero_FUN_004f30f0(&this_ptr->base);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base).base.model.motion_controller,0xd,1);
          }
        }
      }
    }
    else {
      this_ptr->fire_state = 3;
    }
  }
  core_gabriela_cpp_CGabriella_FUN_004d4d80(this_ptr);
  core_gabriela_cpp_CGabriella_FUN_004d6d40(this_ptr);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
            ((CCharacter *)this_ptr,delta_time,in_stack_fffffe24);
  pCVar2 = &(this_ptr->base).base.model;
  local_14 = (CCharacter_full_vtable *)
             core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&pCVar2->motion_controller,0xd);
  if ((float)local_14 <= 0.0) {
    core_hero_cpp_CHero_FUN_004f3350(&this_ptr->base);
  }
  else {
    local_14 = (CCharacter_full_vtable *)
               core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                         (&pCVar2->motion_controller);
    if ((1.0 < (float)local_14) &&
       (this_ptr_01 = (CBoxActor *)
                      core_actor_cpp_castToClassHash_FUN_0040c790
                                ((this_ptr->base).pushed_object,g_CBoxActorClassInfo.name_hash),
       this_ptr_01 != (CBoxActor *)0x0)) {
      core_gabriela_cpp_CGabriella_FUN_004d4cf0(this_ptr);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_16c,&local_7c);
      local_190.x = local_16c.x - local_184.x;
      local_190.z = local_16c.z - local_184.z;
      local_190.y = 0.0;
      pCVar16 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          ((CDemonActor *)this_ptr,&local_154,&local_190);
      if (0.0 < pCVar16->z) {
        core_boxactor_cpp_CBoxActor_FUN_00422390(this_ptr_01);
      }
    }
  }
  core_gabriela_cpp_CGabriella_FUN_004d5550(this_ptr);
  if (this_ptr->fire_state == 3) {
    pCVar18 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (&((this_ptr->base).inventory.selected_weapon)->base,
                         g_CDynamiteClassInfo.name_hash);
    if (pCVar18 != (CDemonActor *)0x0) {
      if ((this_ptr->base).player_control.action_states[3] == 0) {
        this_ptr->fire_state = 2;
      }
      else {
        fVar3 = delta_time * (float)25 + this_ptr->dynamite_charge_power;
        this_ptr->dynamite_charge_power = fVar3;
        if (60.0f < fVar3) {
          (this_ptr->base).player_control.action_states[3] = 0;
          this_ptr->fire_state = 2;
          this_ptr->dynamite_charge_power = 60.0f;
        }
      }
      local_e8.x = this_ptr->dynamite_throw_angle;
      local_e8.z = 0.0;
      local_e8.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                ((CMatrix3x3f *)&stack0xfffffe24,&local_e8);
      local_d0.z = this_ptr->dynamite_charge_power;
      local_d0.x = 0.0;
      local_d0.y = 0.0;
      pCVar16 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                          ((CMatrix3x3f *)&stack0xfffffe24,&local_100,&local_d0);
      pCVar16 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                          ((CDemonActor *)this_ptr,&local_94,pCVar16);
      if ((CVector3f *)(pCVar18[4].actor_name + 0x1c) != pCVar16) {
        ((CVector3f *)(pCVar18[4].actor_name + 0x1c))->x = pCVar16->x;
        pCVar18[4].location.position.x = pCVar16->y;
        pCVar18[4].location.position.y = pCVar16->z;
      }
      goto LAB_004d4145;
    }
    this_ptr->fire_state = 2;
LAB_004d363a:
    this_ptr->dynamite_charge_power = 10.0f;
    iVar15 = core_gabriela_cpp_CGabriella_FUN_004d5f70(this_ptr);
    if (iVar15 == 0) goto LAB_004d4152;
    this_ptr->fire_state = 1;
  }
  else {
LAB_004d4145:
    if (this_ptr->fire_state == 2) goto LAB_004d363a;
LAB_004d4152:
    if (this_ptr->fire_state != 1) goto LAB_004d368e;
  }
  this_ptr->fire_state = 0;
  core_gabriela_cpp_CGabriella_FUN_004d5fe0(this_ptr);
  if (((this_ptr->base).inventory.selected_weapon)->fire_cooldown == 0.0) {
    (this_ptr->base).player_control.action_states[3] = 0;
  }
LAB_004d368e:
  iVar15 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (iVar15 != 2) {
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->coat,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&(this_ptr->base).base.model);
  }
  this_ptr_00 = (this_ptr->base).inventory.selected_weapon;
  (*((this_ptr_00->base).vtable._ub)->process)(&this_ptr_00->base,delta_time);
  if ((((this_ptr->base).inventory.selected_weapon)->base).is_transparent == 0) {
    return;
  }
  (this_ptr->base).base.base.is_transparent = 1;
  return;
}
