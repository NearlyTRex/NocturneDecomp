// Name: core_gargoyle.cpp_CGargoyle_process_FUN_004e4a00
// Address: 004e4a00
// Address Range: [[004e4a00, 004e53e1]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004e4a00(CGargoyle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_gargoyle_cpp_CGargoyle_process_FUN_004e4a00(CGargoyle *this_ptr,float delta_time)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CVector3f *pCVar7;
  uint uVar8;
  CPathMap *pCVar9;
  float fVar10;
  float fVar11;
  float max_distance;
  SDamageInfo local_104;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  float local_98;
  float local_94;
  float local_90;
  CVector3f local_8c;
  CVector3f local_80;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f local_68;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50;
  CVector3f local_44;
  float local_30;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 0) {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if (pSVar5->state_index == 8) {
      return;
    }
    if (pSVar5->state_index == 5) {
      return;
    }
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_2c = delta_time * (this_ptr->base).speed;
  pCVar1 = &(this_ptr->base).base.model;
  while (0.0 < local_2c) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar4);
  }
  fVar10 = (this_ptr->base).speed;
  fVar11 = (float)3.1415926535000001;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar11 * fVar10;
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  iVar4 = pSVar5->state_index;
  local_28 = iVar4;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    switch(iVar4) {
    case 0:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar4 = core_gargoyle_cpp_CGargoyle_FUN_004e48a0(this_ptr);
      if (iVar4 == 0) {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
        this_ptr->petrify_timer = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,5,1);
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-stone.wav");
          this_ptr->sfx_handles[1] = uVar8;
        }
      }
      else {
        if (this_ptr->returning_home == 0) {
          pCVar3 = (this_ptr->base).victim;
          if (pCVar3 == (CCharacter *)0x0) {
            iVar4 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
            if (iVar4 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,1,1);
            }
            break;
          }
          local_a4.x = (pCVar3->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_a4.y = (pCVar3->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_a4.z = (pCVar3->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          local_1c = SQRT(local_a4.z * local_a4.z +
                          local_a4.x * local_a4.x + local_a4.y * local_a4.y);
          local_18 = local_1c;
          if (local_1c < 3.0f) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_68,&local_a4);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_68.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,3,1);
            }
          }
          if ((this_ptr->base).guard_distance <= local_1c) break;
          pCVar1 = &(this_ptr->base).base.model;
          if (10.0f <= local_1c) {
            iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,4,1);
            }
            break;
          }
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,1,1);
      }
      break;
    case 1:
    case 2:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar4 = core_gargoyle_cpp_CGargoyle_FUN_004e48a0(this_ptr);
      pCVar1 = &(this_ptr->base).base.model;
      if (iVar4 == 0) {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
        this_ptr->petrify_timer = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,5,1);
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-stone.wav");
          this_ptr->sfx_handles[1] = uVar8;
        }
      }
      else {
        fVar10 = (float)this_ptr->returning_home;
        pCVar7 = &(this_ptr->base).base.model.accumulated_root_motion;
        if (fVar10 == 0.0) {
          if ((this_ptr->base).victim == (CCharacter *)0x0) {
            iVar4 = core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base,delta_time);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,0,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,1,1);
            }
          }
          else {
            max_distance = 0.17453292;
            fVar11 = 0.5;
            (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
            local_80.z = 3.0f;
            (this_ptr->base).base.model.accumulated_root_motion.y =
                 (this_ptr->base).base.model.accumulated_root_motion.z;
            pCVar7->x = (this_ptr->base).base.model.accumulated_root_motion.y;
            pCVar7 = &local_80;
            pCVar3 = (this_ptr->base).victim;
            local_20 = local_80.z;
            local_80.x = fVar10;
            local_80.y = fVar10;
            pCVar9 = (*((pCVar3->base).vtable._ub)->getPathMap)(&pCVar3->base);
            iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                              ((CCharacter *)this_ptr,
                               &(((this_ptr->base).victim)->base).location.position,pCVar9,pCVar7,
                               fVar11,max_distance);
            if (-1 < iVar4) {
              pCVar3 = (this_ptr->base).victim;
              local_5c = (this_ptr->base).base.base.location.position.x -
                         (pCVar3->base).location.position.x;
              local_54 = (this_ptr->base).base.base.location.position.z -
                         (pCVar3->base).location.position.z;
              local_30 = SQRT(local_54 * local_54 + local_5c * local_5c);
              local_58 = fVar10;
              local_24 = local_30;
              if (10.0f < local_30) {
                iVar4 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
                if (iVar4 == 0) {
                  iVar4 = 2;
                }
                else {
                  iVar4 = 4;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,iVar4,1);
              }
              if ((local_24 <= local_20) && ((this_ptr->base).attack_cooldown <= 0.0)) {
                pCVar3 = (this_ptr->base).victim;
                local_50.x = (pCVar3->base).location.position.x -
                             (this_ptr->base).base.base.location.position.x;
                local_50.y = (pCVar3->base).location.position.y -
                             (this_ptr->base).base.base.location.position.y;
                local_50.z = (pCVar3->base).location.position.z -
                             (this_ptr->base).base.base.location.position.z;
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_c8,&local_50);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_c8.y - (this_ptr->base).base.base.orient.vec.y);
                if (ABS(local_14) < (float)0.52359877558333301) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&(this_ptr->base).base.model.motion_controller,3,1);
                  (this_ptr->base).attack_cooldown = 1.0;
                }
              }
              if ((this_ptr->base).guard_distance < local_24) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(this_ptr->base).base.model.motion_controller,0,1);
              }
            }
          }
        }
        else {
          fVar11 = 0.17453292;
          fVar10 = 0.5;
          (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
          (this_ptr->base).base.model.accumulated_root_motion.y =
               (this_ptr->base).base.model.accumulated_root_motion.z;
          pCVar7->x = (this_ptr->base).base.model.accumulated_root_motion.y;
          pCVar7 = &local_44;
          local_44.x = 0.0;
          local_44.y = 0.0;
          local_44.z = 0.0;
          pCVar9 = (*((this_ptr->home_base->vtable)._ub)->getPathMap)(this_ptr->home_base);
          core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                    ((CCharacter *)this_ptr,&(this_ptr->home_base->location).position,pCVar9,pCVar7,
                     fVar10,fVar11);
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_104);
      local_104.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(3.0,5.0);
      local_104.attacker = (CDemonActor *)this_ptr;
      local_104.wielder = (CDemonActor *)this_ptr;
      local_14 = local_104.damage_amount;
      pCVar7 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_8c,&g_ZeroVector.f,
                          (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                          INT_02d83208);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_bc,pCVar7);
      core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
      break;
    case 5:
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      iVar4 = core_gargoyle_cpp_CGargoyle_FUN_004e48a0(this_ptr);
      if ((iVar4 != 0) &&
         (fVar10 = this_ptr->petrify_timer - delta_time, this_ptr->petrify_timer = fVar10,
         fVar10 < 0.0)) {
        this_ptr->petrify_timer = 0.0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
        iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
        if (iVar4 == 0) {
          uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"gargoyle-alive?.wav");
          this_ptr->sfx_handles[1] = uVar8;
        }
      }
    }
    goto switchD_004e531f_caseD_4;
  }
  uVar8 = (this_ptr->base).base.is_walking;
  if (uVar8 < 2) {
    if (uVar8 == 1) {
LAB_004e4b02:
      iVar4 = 1;
    }
    else {
LAB_004e4d57:
      iVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar4,1);
  }
  else {
    if (uVar8 < 3) goto LAB_004e4b02;
    if (uVar8 != 3) goto LAB_004e4d57;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
switchD_004e531f_caseD_4:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_98 = (this_ptr->base).base.velocity.x * delta_time;
    local_94 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar7 = &(this_ptr->base).base.position_delta;
    local_90 = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_74 = local_98 + pCVar7->x;
    local_70 = local_94 + (this_ptr->base).base.position_delta.y;
    local_6c = local_90 + (this_ptr->base).base.position_delta.z;
    local_b0.x = local_74 + pCVar2->x;
    local_b0.y = local_70 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_b0.z = local_6c + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar7->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    pCVar2->x = (this_ptr->base).base.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_b0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  iVar4 = local_28;
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  if (iVar4 == 5) {
    (this_ptr->target_scale).x = this_ptr->stone_red << 8;
    (this_ptr->target_scale).y = this_ptr->stone_green << 8;
    (this_ptr->target_scale).z = this_ptr->stone_blue << 8;
  }
  else {
    (this_ptr->target_scale).y = 0xffff;
    (this_ptr->target_scale).z = 0xffff;
    (this_ptr->target_scale).x = 0xffff;
  }
  iVar4 = (this_ptr->target_scale).x;
  iVar6 = (this_ptr->base).base.base.scale.x;
  if (iVar6 < iVar4) {
    iVar6 = (this_ptr->base).base.base.scale.x + g_GlobalDeltaTimeInt;
    iVar4 = (this_ptr->target_scale).x;
    (this_ptr->base).base.base.scale.x = iVar6;
    if (iVar4 < iVar6) {
      (this_ptr->base).base.base.scale.x = iVar4;
    }
  }
  else if (iVar4 < iVar6) {
    iVar6 = (this_ptr->base).base.base.scale.x - g_GlobalDeltaTimeInt;
    iVar4 = (this_ptr->target_scale).x;
    (this_ptr->base).base.base.scale.x = iVar6;
    if (iVar6 < iVar4) {
      (this_ptr->base).base.base.scale.x = iVar4;
    }
  }
  iVar4 = (this_ptr->target_scale).y;
  iVar6 = (this_ptr->base).base.base.scale.y;
  if (iVar6 < iVar4) {
    iVar6 = (this_ptr->base).base.base.scale.y + g_GlobalDeltaTimeInt;
    iVar4 = (this_ptr->target_scale).y;
    (this_ptr->base).base.base.scale.y = iVar6;
    if (iVar4 < iVar6) {
      (this_ptr->base).base.base.scale.y = iVar4;
    }
  }
  else if (iVar4 < iVar6) {
    iVar6 = (this_ptr->base).base.base.scale.y - g_GlobalDeltaTimeInt;
    iVar4 = (this_ptr->target_scale).y;
    (this_ptr->base).base.base.scale.y = iVar6;
    if (iVar6 < iVar4) {
      (this_ptr->base).base.base.scale.y = iVar4;
    }
  }
  iVar4 = (this_ptr->target_scale).z;
  iVar6 = (this_ptr->base).base.base.scale.z;
  if (iVar6 < iVar4) {
    iVar6 = (this_ptr->base).base.base.scale.z + g_GlobalDeltaTimeInt;
    iVar4 = (this_ptr->target_scale).z;
    (this_ptr->base).base.base.scale.z = iVar6;
    if (iVar4 < iVar6) {
      (this_ptr->base).base.base.scale.z = iVar4;
      return;
    }
  }
  else if (iVar4 < iVar6) {
    iVar6 = (this_ptr->base).base.base.scale.z - g_GlobalDeltaTimeInt;
    iVar4 = (this_ptr->target_scale).z;
    (this_ptr->base).base.base.scale.z = iVar6;
    if (iVar6 < iVar4) {
      (this_ptr->base).base.base.scale.z = iVar4;
      return;
    }
  }
  return;
}
