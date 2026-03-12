// Name: core_gabriela.cpp_CGabriella_process_FUN_004d2ea0
// Address: 004d2ea0
// Address Range: [[004d2ea0, 004d418f]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004d2ea0(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004d2ea0(CGabriella *this_ptr,float delta_time)

{
  CLocation *pCVar3;
  CDeformableModelInstance *pCVar4;
  CLadder *pCVar5;
  CWeapon *this_ptr_01;
  CCharacter *this_ptr_02;
  CCharacter_full_vtable *pCVar6;
  CBoxActor *this_ptr_03;
  uint uVar7;
  int iVar10;
  CVector3f *pCVar11;
  float fVar8;
  float fVar9;
  CVector3f *pCVar10;
  CVector3f *pCVar12;
  CDemonActor *pCVar13;
  CBoxActor *pCVar14;
  CDemonActor *pCVar15;
  int iVar16;
  EDeathState EVar15;
  CAmmoBox *this_ptr_04;
  SMotion *pSVar17;
  SMotion *pSVar16;
  uint is_holstering;
  bool bVar17;
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
  CLocation *pCVar1;
  float fVar5;
  float fVar4;
  char *sound_name;
  float fVar3;
  CDeformableModelInstance *pCVar2;
  CGame *pCVar9;
  uint uVar8;
  CWeapon *this_ptr_00;
  CLadder *pCVar7;
  byte bVar6;
  
  iVar10 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    return;
  }
  if ((this_ptr->base).control_type == HERO_CONTROL_AI) {
    core_gabriela_cpp_CGabriella_processAI_FUN_004d4190(this_ptr);
  }
  fVar8 = (this_ptr->base).invincibility_timer - delta_time;
  (this_ptr->base).invincibility_timer = fVar8;
  if (fVar8 < 0.0) {
    (this_ptr->base).invincibility_timer = 0.0;
  }
  pCVar11 = core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_004d4cf0(this_ptr,&local_10c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_184,pCVar11);
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  core_gabriela_cpp_CGabriella_processMotionEvents_FUN_004d4890(this_ptr,delta_time);
  is_holstering = (uint)((this_ptr->base).base.hit_points <= 0.0);
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    is_holstering = 1;
  }
  if ((this_ptr->base).pushed_object != (CBoxActor *)0x0) {
    is_holstering = 1;
  }
  if ((this_ptr->base).ladder_to_climb != (CLadder *)0x0) {
    is_holstering = 1;
  }
  fVar8 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&(this_ptr->base).base.model.motion_controller,8);
  if (0.0 < fVar8) {
    is_holstering = 1;
  }
  fVar8 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&(this_ptr->base).base.model.motion_controller,0xb);
  if (0.0 < fVar8) {
    is_holstering = 1;
  }
  fVar8 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&(this_ptr->base).base.model.motion_controller,0xc);
  if (0.0 < fVar8) {
    is_holstering = 1;
  }
  fVar8 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&(this_ptr->base).base.model.motion_controller,0x12);
  if (0.0 < fVar8) {
    is_holstering = 1;
  }
  (this_ptr->base).base.turn_speed = 0.0;
  iVar16 = (this_ptr->base).base.is_on_ground;
  (this_ptr->base).base.walk_step_speed = 0.0;
  local_20 = 0.0;
  if (iVar16 != 0) {
    pCVar4 = &(this_ptr->base).base.model;
    fVar8 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                      (&pCVar4->motion_controller,1);
    (this_ptr->base).base.walk_step_speed =
         fVar8 * FLOAT_02d7b808 + (this_ptr->base).base.walk_step_speed;
    fVar8 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                      (&pCVar4->motion_controller,2);
    (this_ptr->base).base.walk_step_speed =
         fVar8 * FLOAT_02d7b80c + (this_ptr->base).base.walk_step_speed;
    fVar8 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                      (&pCVar4->motion_controller,3);
    (this_ptr->base).base.walk_step_speed =
         (this_ptr->base).base.walk_step_speed - fVar8 * FLOAT_02d7b810;
    fVar8 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                      (&pCVar4->motion_controller,0x14);
    fVar8 = fVar8 * 2.0f;
    fVar9 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                      (&pCVar4->motion_controller,0x15);
    pCVar9 = g_CGamePtr;
    fVar9 = fVar9 * 2.0f;
    (this_ptr->base).base.turn_speed = delta_time * (float)12.566370614;
    local_20 = fVar9 + (0.0 - fVar8);
    if (pCVar9->letterbox_mode != 0) {
      (this_ptr->base).base.turn_speed = (this_ptr->base).base.turn_speed * (float)0.33333333333333298;
    }
  }
  pCVar5 = (this_ptr->base).ladder_to_climb;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.walk_step_speed * delta_time;
  if (pCVar5 == (CLadder *)0x0) {
    pCVar15 = (this_ptr->base).base.grabbed_by;
    if (pCVar15 != (CDemonActor *)0x0) {
      if ((this_ptr->base).base.grabbed_type == 0) {
        pCVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                            ((CDemonActor *)this_ptr,&local_124,&(pCVar15->location).position);
        pCVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                            (&local_118,pCVar10);
        local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar10->y);
        if (local_18 < (float)-1.57079632675) {
          local_18 = local_18 + 3.141593f;
        }
        if ((float)1.57079632675 < local_18) {
          local_18 = local_18 + -3.141593f;
        }
        fVar8 = delta_time * (float)3.1415926535000001;
        if (local_18 < -fVar8) {
          local_18 = -fVar8;
        }
        if (fVar8 < local_18) {
          local_18 = fVar8;
        }
        (this_ptr->base).base.base.orient.vec.y = (this_ptr->base).base.base.orient.vec.y + local_18
        ;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
      }
      this_ptr_02 = (CCharacter *)(this_ptr->base).base.grabbed_by;
      pCVar6 = (this_ptr_02->base).vtable._uc;
      pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                          (&(this_ptr->base).base.model,&local_13c,0);
      iVar16 = (*(pCVar6->_uc).attractActorToward)(this_ptr_02,(CDemonActor *)this_ptr,pCVar10);
      if (iVar16 == 0) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      }
      else if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
        if ((this_ptr->base).player_control.action_states[3] != 0) {
          iVar16 = 7;
          goto LAB_004d3215;
        }
        goto LAB_004d321d;
      }
      goto LAB_004d320e;
    }
    if ((this_ptr->base).pushed_object == (CBoxActor *)0x0) {
      iVar16 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                         ((CCharacter *)this_ptr,delta_time);
      pCVar4 = &(this_ptr->base).base.model;
      if (iVar16 == 0) {
        if (is_holstering == 0) {
          pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&pCVar4->motion_controller);
          uVar7 = pSVar17->state_index;
          if (uVar7 < 0xe) {
            if ((((uVar7 == 0) || (uVar7 < 2)) || (uVar7 < 3)) || (uVar7 == 3)) goto LAB_004d3af9;
          }
          else if (uVar7 < 0xf) {
            this_ptr_04 = (CAmmoBox *)
                          core_actor_cpp_castToClassHash_FUN_0040c790
                                    ((this_ptr->base).object_to_pick_up,
                                     g_CAmmoBoxClassInfo.name_hash);
            if (this_ptr_04 != (CAmmoBox *)0x0) {
              fVar8 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                (&pCVar4->motion_controller);
              core_ammobox_cpp_CAmmoBox_openBox_FUN_00411690(this_ptr_04,fVar8);
            }
          }
          else if (uVar7 < 0x11) {
            if (uVar7 == 0x10) {
LAB_004d3af9:
              if ((this_ptr->base).base.is_on_ground != 0) {
                iVar16 = 0;
                if ((this_ptr->base).player_control.action_states[0] != 0) {
                  if ((this_ptr->base).player_control.action_states[2] == 0) {
                    iVar16 = 1;
                  }
                  else {
                    iVar16 = 2;
                  }
                }
                if ((this_ptr->base).player_control.action_states[1] != 0) {
                  iVar16 = 3;
                }
                fVar3 = (this_ptr->base).base.walk_step_speed;
                fVar4 = (this_ptr->base).base.position_delta.x;
                pCVar4 = &(this_ptr->base).base.model;
                fVar5 = (this_ptr->base).base.position_delta.z;
                (this_ptr->base).base.turn_angle_accumulator =
                     (this_ptr->base).player_control.turn_speed * (this_ptr->base).base.turn_speed;
                (this_ptr->base).base.position_delta.z = fVar3 + fVar5;
                (this_ptr->base).base.position_delta.x = fVar4 + local_20 * delta_time;
                pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                    (&pCVar4->motion_controller);
                if (iVar16 != pSVar17->state_index) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&pCVar4->motion_controller,iVar16,1);
                }
                if (((this_ptr->base).player_control.action_states[4] != 0) &&
                   (iVar16 = core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004d5870
                                       (this_ptr), iVar16 == 0)) {
                  core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004d6050(this_ptr);
                }
              }
            }
          }
          else if ((uVar7 < 0x12) || ((0x13 < uVar7 && ((uVar7 < 0x15 || (uVar7 == 0x15))))))
          goto LAB_004d3af9;
        }
        goto LAB_004d321d;
      }
      uVar7 = (this_ptr->base).base.is_walking;
      if (uVar7 < 2) {
        if (uVar7 != 1) goto LAB_004d320e;
        iVar16 = 1;
      }
      else {
        if (2 < uVar7) {
          if (uVar7 == 3) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar4->motion_controller,0,1);
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
            goto LAB_004d321d;
          }
          goto LAB_004d320e;
        }
        iVar16 = 2;
      }
      goto LAB_004d3215;
    }
    if ((this_ptr->base).player_control.action_states[3] != 0) {
      this_ptr_03 = (this_ptr->base).pushed_object;
      (*((this_ptr_03->base).vtable._ub)->getBoundingBox)(&this_ptr_03->base,&local_1b4);
      local_a0.x = (local_1b4.min.x + local_1b4.max.x) * 0.5f;
      local_a0.y = (local_1b4.min.y + local_1b4.max.y) * 0.5f;
      local_a0.z = (local_1b4.min.z + local_1b4.max.z) * 0.5f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&((this_ptr->base).pushed_object)->base,&local_148,&local_a0);
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                ((CDemonActor *)this_ptr,&local_b8,&local_148);
      pCVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_dc,&local_b8);
      local_1c = (CCharacter_full_vtable *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar10->y);
      fVar9 = (local_1b4.max.x - local_1b4.min.x) * 0.5f;
      fVar8 = (local_1b4.max.z - local_1b4.min.z) * 0.5f;
      if ((((local_b8.z - SQRT(fVar8 * fVar8 + fVar9 * fVar9) < (float)3) &&
           (1.0 < (double)local_b8.y)) && ((double)local_b8.y < 5)) &&
         (ABS((float)local_1c) < (float)0.78539816337500001)) {
        pCVar6 = (CCharacter_full_vtable *)(delta_time * (float)3.1415926535000001);
        if ((float)local_1c < -(float)pCVar6) {
          local_1c = (CCharacter_full_vtable *)-(float)pCVar6;
        }
        if ((float)pCVar6 < (float)local_1c) {
          local_1c = pCVar6;
        }
        (this_ptr->base).base.base.orient.vec.y =
             (this_ptr->base).base.base.orient.vec.y + (float)local_1c;
        goto LAB_004d321d;
      }
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0,1);
    core_hero_cpp_CHero_stopPushingBox_FUN_004f3350(&this_ptr->base);
  }
  else {
    pCVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        (&((this_ptr->base).ladder_to_climb)->base,&local_130,&pCVar5->ladder_size);
    if ((this_ptr->base).base.base.location.position.y <= pCVar10->y) goto LAB_004d321d;
    (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
    local_f4.x = 0.0;
    local_f4.y = 0.5;
    local_f4.z = 4.0;
    pCVar10 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&local_c4,&local_f4);
    pCVar1 = &(this_ptr->base).base.base.location;
    (pCVar1->position).x = pCVar10->x + (pCVar1->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar10->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar10->z + (this_ptr->base).base.base.location.position.z;
    fVar8 = (*((this_ptr->base).base.base.vtable._ub)->cylinderGroundCheck)
                      ((CDemonActor *)this_ptr,(this_ptr->base).base.collision_cylinder_height,
                       (CVector3f *)0x0);
    (this_ptr->base).base.closest_distance_threshold = fVar8;
    (this_ptr->base).base.is_on_ground =
         (uint)((this_ptr->base).base.base.location.position.y <
               (this_ptr->base).base.closest_distance_threshold + (float)0.01);
LAB_004d320e:
    iVar16 = 0;
LAB_004d3215:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar16,1);
  }
LAB_004d321d:
  if ((this_ptr->base).ladder_to_climb == (CLadder *)0x0) {
    if (((is_holstering == 0) ||
        (pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&(this_ptr->base).base.model.motion_controller),
        pSVar17->state_index == 0xd)) ||
       ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
      local_178.x = (this_ptr->base).base.position_delta.x;
      local_178.y = (this_ptr->base).base.position_delta.y;
      local_178.z = (this_ptr->base).base.position_delta.z;
      pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&(this_ptr->base).base.model.motion_controller);
      uVar8 = pSVar17->state_index;
      if (uVar8 < 3) {
        if (uVar8 == 0) {
          bVar17 = true;
LAB_004d3cb2:
          if (!bVar17) {
LAB_004d3cb4:
            local_178.x = local_178.x + (this_ptr->base).base.model.accumulated_root_motion.x;
            local_178.y = local_178.y + (this_ptr->base).base.model.accumulated_root_motion.y;
            local_178.z = local_178.z + (this_ptr->base).base.model.accumulated_root_motion.z;
          }
        }
      }
      else if (3 < uVar8) {
        if (uVar8 < 0x11) {
          bVar17 = uVar8 == 0x10;
          goto LAB_004d3cb2;
        }
        if (0x11 < uVar8) {
          if (uVar8 < 0x14) goto LAB_004d3cb4;
          if (0x14 < uVar8) {
            bVar17 = uVar8 == 0x15;
            goto LAB_004d3cb2;
          }
        }
      }
      (this_ptr->base).base.velocity.y =
           (this_ptr->base).base.velocity.y - delta_time * (float)32;
      local_178.x = local_178.x + (this_ptr->base).base.velocity.x * delta_time;
      local_178.y = local_178.y + (this_ptr->base).base.velocity.y * delta_time;
      local_178.z = local_178.z + delta_time * (this_ptr->base).base.velocity.z;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_178);
    }
  }
  else {
    pCVar10 = &(this_ptr->base).base.model.accumulated_root_motion;
    pCVar12 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&local_70,pCVar10);
    pCVar3 = &(this_ptr->base).base.base.location;
    (pCVar3->position).x = pCVar12->x + (pCVar3->position).x;
    (this_ptr->base).base.base.location.position.y =
         pCVar12->y + (this_ptr->base).base.base.location.position.y;
    (this_ptr->base).base.base.location.position.z =
         pCVar12->z + (this_ptr->base).base.base.location.position.z;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar10->x = (this_ptr->base).base.model.accumulated_root_motion.y;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  if (((is_holstering == 0) && ((this_ptr->base).player_control.action_states[6] != 0)) &&
     ((this_ptr->base).inventory.selected_weapon != (CWeapon *)0x0)) {
    bVar6 = (byte)this_ptr->weapon_state_flags;
    if ((bVar6 & 3) == 0) {
      *(byte *)&this_ptr->weapon_state_flags = bVar6 | 2;
    }
    else {
      *(byte *)&this_ptr->weapon_state_flags = bVar6 & 0xfc;
    }
  }
  pCVar13 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((this_ptr->base).base.carry_hands[0].carry_actor,
                       g_CLightActorClassInfo.name_hash);
  if (pCVar13 != (CDemonActor *)0x0) {
    if ((((this_ptr->base).player_control.action_states[5] != 0) && (is_holstering == 0)) &&
       (*(uint *)((int)&pCVar13[0x1a].orient + 4) = (uint)(pCVar13[0x1a].orient.vec.y == 0.0),
       pCVar13[4].scale.y == 1)) {
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"flashlit.wav");
    }
    if (pCVar13[0x1a].orient.vec.y != 0.0) {
      this_ptr->flashlight_angle =
           (this_ptr->base).player_control.look_up_down_speed * (float)3.1415926535000001 *
           (float)2 * delta_time + this_ptr->flashlight_angle;
      fVar8 = core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004d4c90(this_ptr);
      fVar9 = core_gabriela_cpp_CGabriella_getFlashlightMaxAngle_FUN_004d4ce0(this_ptr);
      if (this_ptr->flashlight_angle < fVar8) {
        this_ptr->flashlight_angle = fVar8;
      }
      if (fVar9 < this_ptr->flashlight_angle) {
        this_ptr->flashlight_angle = fVar9;
      }
    }
  }
  if ((this_ptr->weapon_state_flags & 1) == 0) {
    fVar8 = this_ptr->holster_blend - delta_time / 1.2f;
    this_ptr->holster_blend = fVar8;
    if (fVar8 < 0.0) {
      this_ptr->holster_blend = 0.0;
    }
  }
  else {
    fVar8 = delta_time / 1.1f + this_ptr->holster_blend;
    this_ptr->holster_blend = fVar8;
    if (1.0 < fVar8) {
      this_ptr->holster_blend = 1.0;
    }
  }
  if ((this_ptr->weapon_state_flags & 2) == 0) {
    fVar8 = this_ptr->draw_blend;
    fVar9 = fVar8 - delta_time / 1.2f;
    this_ptr->draw_blend = fVar9;
    if (fVar9 < 0.0) {
      this_ptr->draw_blend = 0.0;
    }
    if ((0.64f + (float)0.14000000000000001 <= fVar8) &&
       (this_ptr->draw_blend < 0.64f + (float)0.14000000000000001)) {
      sound_name = "undraw-s.wav @ .7";
      goto LAB_004d33ec;
    }
  }
  else {
    fVar8 = this_ptr->draw_blend;
    fVar9 = delta_time / 1.1f + fVar8;
    this_ptr->draw_blend = fVar9;
    if (1.0 < fVar9) {
      this_ptr->draw_blend = 1.0;
    }
    if ((fVar8 <= 0.64f + (float)-0.14999999999999999) &&
       (0.64f + (float)-0.14999999999999999 < this_ptr->draw_blend)) {
      core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004e0bb0(g_CGamePtr);
      sound_name = "draw-f.wav @ 1.5";
LAB_004d33ec:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
    }
  }
  if ((this_ptr->weapon_state_flags & 3) == 0) {
    fVar8 = this_ptr->aim_blend - delta_time / 1.2f;
    this_ptr->aim_blend = fVar8;
    if (fVar8 < 0.0) {
      this_ptr->aim_blend = 0.0;
    }
  }
  else {
    fVar8 = delta_time / 1.1f + this_ptr->aim_blend;
    this_ptr->aim_blend = fVar8;
    if (1.0 < fVar8) {
      this_ptr->aim_blend = 1.0;
    }
  }
  if (is_holstering == 0) {
    if (((pCVar13 == (CDemonActor *)0x0) || (pCVar13[0x1a].orient.vec.y == 0.0)) ||
       (pSVar16 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&(this_ptr->base).base.model.motion_controller),
       pSVar16->state_index == 5)) {
      fVar8 = delta_time / 1.2f;
      goto LAB_004d344b;
    }
    fVar8 = delta_time / 1.1f + this_ptr->light_aim_blend;
  }
  else {
    fVar8 = (delta_time / 1.2f) * (float)3;
LAB_004d344b:
    fVar8 = this_ptr->light_aim_blend - fVar8;
  }
  this_ptr->light_aim_blend = fVar8;
  if (this_ptr->light_aim_blend < 0.0) {
    this_ptr->light_aim_blend = 0.0;
  }
  if ((float)0.90000000000000002 < this_ptr->light_aim_blend) {
    this_ptr->light_aim_blend = 0.9;
  }
  core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004d6540(this_ptr,delta_time,is_holstering);
  fVar8 = this_ptr->fire_cooldown_timer - delta_time / 0.2f;
  this_ptr->fire_cooldown_timer = fVar8;
  if (((fVar8 <= 0.0) && (this_ptr->fire_cooldown_timer = 0.0, is_holstering == 0)) &&
     (((this_ptr->base).player_control.action_states[3] != 0 && (this_ptr->fire_state == 0)))) {
    if (this_ptr->weapon_state_flags == 0) {
      if ((this_ptr->draw_blend <= 0.0) &&
         (iVar16 = core_hero_cpp_CHero_tryInteract_FUN_004f2af0(&this_ptr->base), iVar16 == 0)) {
        iVar16 = core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004f2d70(&this_ptr->base);
        switch(iVar16) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0x12,1);
          break;
        default:
          core_hero_cpp_CHero_tryOpenDoor_FUN_004f2ed0(&this_ptr->base);
        }
        if ((iVar16 == 0) &&
           (iVar16 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004f2c40(&this_ptr->base),
           iVar16 == 0)) {
          iVar16 = core_hero_cpp_CHero_tryPushNearbyBox_FUN_004f3120(&this_ptr->base);
          if (iVar16 == 0) {
            iVar16 = core_hero_cpp_CHero_tryPullLever_FUN_004f2f50(&this_ptr->base);
            if (iVar16 == 0) {
              core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004d5c60(this_ptr);
            }
            else {
              core_hero_cpp_CHero_executeLeverPull_FUN_004f30f0(&this_ptr->base);
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
  core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80(this_ptr);
  core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004d6d40
            (this_ptr,delta_time,(uint)(is_holstering == 0));
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  pCVar4 = &(this_ptr->base).base.model;
  fVar8 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar4->motion_controller,0xd);
  if (fVar8 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004f3350(&this_ptr->base);
  }
  else {
    fVar8 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                      (&pCVar4->motion_controller);
    if ((1.0 < fVar8) &&
       (pCVar14 = (CBoxActor *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (&((this_ptr->base).pushed_object)->base,g_CBoxActorClassInfo.name_hash)
       , pCVar14 != (CBoxActor *)0x0)) {
      core_gabriela_cpp_CGabriella_getTorsoCenterPosition_FUN_004d4cf0(this_ptr,&local_7c);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_16c,&local_7c);
      local_190.x = local_16c.x - local_184.x;
      local_190.z = local_16c.z - local_184.z;
      local_190.y = 0.0;
      pCVar10 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                          ((CDemonActor *)this_ptr,&local_154,&local_190);
      if (0.0 < pCVar10->z) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422390(pCVar14,&local_184,&local_190);
      }
    }
  }
  core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004d5550(this_ptr,delta_time);
  if (this_ptr->fire_state == 3) {
    pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (&((this_ptr->base).inventory.selected_weapon)->base,
                         g_CDynamiteClassInfo.name_hash);
    if (pCVar15 != (CDemonActor *)0x0) {
      if ((this_ptr->base).player_control.action_states[3] == 0) {
        this_ptr->fire_state = 2;
      }
      else {
        fVar8 = delta_time * (float)25 + this_ptr->dynamite_charge_power;
        this_ptr->dynamite_charge_power = fVar8;
        if (60.0f < fVar8) {
          (this_ptr->base).player_control.action_states[3] = 0;
          this_ptr->fire_state = 2;
          this_ptr->dynamite_charge_power = 60.0f;
        }
      }
      local_e8.x = this_ptr->aim_pitch;
      local_e8.z = 0.0;
      local_e8.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_1dc,&local_e8);
      local_d0.z = this_ptr->dynamite_charge_power;
      local_d0.x = 0.0;
      local_d0.y = 0.0;
      pCVar10 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                          (&local_1dc,&local_100,&local_d0);
      pCVar10 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                          ((CDemonActor *)this_ptr,&local_94,pCVar10);
      if ((CVector3f *)(pCVar15[4].actor_name + 0x1c) != pCVar10) {
        ((CVector3f *)(pCVar15[4].actor_name + 0x1c))->x = pCVar10->x;
        pCVar15[4].location.position.x = pCVar10->y;
        pCVar15[4].location.position.y = pCVar10->z;
      }
      goto LAB_004d4145;
    }
    this_ptr->fire_state = 2;
LAB_004d363a:
    this_ptr->dynamite_charge_power = 10.0f;
    iVar16 = core_gabriela_cpp_CGabriella_canFireWeapon_FUN_004d5f70(this_ptr);
    if (iVar16 == 0) goto LAB_004d4152;
    this_ptr->fire_state = 1;
  }
  else {
LAB_004d4145:
    if (this_ptr->fire_state == 2) goto LAB_004d363a;
LAB_004d4152:
    if (this_ptr->fire_state != 1) goto LAB_004d368e;
  }
  this_ptr->fire_state = 0;
  core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_004d5fe0(this_ptr);
  if (((this_ptr->base).inventory.selected_weapon)->fire_cooldown == 0.0) {
    (this_ptr->base).player_control.action_states[3] = 0;
  }
LAB_004d368e:
  EVar15 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar15 != DEATH_STATE_DEAD) {
    core_cloth_cpp_CCloth_process_FUN_0043ab80
              (&this_ptr->coat_cloth,&(this_ptr->base).base.base.location.position,
               &(this_ptr->base).base.base.orient.vec,delta_time,
               (this_ptr->base).base.closest_distance_threshold,&(this_ptr->base).base.model);
  }
  this_ptr_01 = (this_ptr->base).inventory.selected_weapon;
  (*((this_ptr_01->base).vtable._ub)->process)(&this_ptr_01->base,delta_time);
  if ((((this_ptr->base).inventory.selected_weapon)->base).is_transparent == 0) {
    return;
  }
  (this_ptr->base).base.base.is_transparent = 1;
  return;
}
