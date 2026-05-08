// Name: core_larva.cpp_CLarva_process_FUN_00503080
// Address: 00503080
// MANUAL RECONSTRUCTION
// Address Range: [[00503080, 0050334d] [005034b7, 00503676] [0050368b, 005038ec] [0050393e, 00503951]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_process_FUN_00503080(CLarva *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_larva_cpp_CLarva_process_FUN_00503080(CLarva *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar2;
  uint uVar3;
  CCharacter *pCVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  SMotion *pSVar8;
  CLarva *pCVar9;
  CVector3f *pCVar10;
  float fVar11;
  CPathMap *path_map;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 Var18;
  char acStack_sprintf[64];
  CVector3f local_128;
  CVector3f local_11c;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  CVector3f local_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  CVector3f local_c8;
  CVector3f local_bc;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_8c;
  CVector3f local_86;
  CVector3f local_80;
  CVector3f local_74;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  pCVar1 = &(this_ptr->base).base.base.location;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_18 = delta_time * (this_ptr->base).speed;
  this_ptr_00 = &(this_ptr->base).base.model;
  while (0.0 < local_18) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&this_ptr_00->motion_controller,&local_18);
    if ((iVar7 == 100) && (pCVar4 = (this_ptr->base).victim, pCVar4 != (CCharacter *)0x0)) {
      local_d4 = (pCVar4->base).location.position.x - (pCVar1->position).x;
      local_d0 = (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y
      ;
      local_cc = (pCVar4->base).location.position.z - (this_ptr->base).base.base.location.position.z
      ;
      local_ec = local_d4;
      local_e8 = local_d0;
      local_e4 = local_cc;
      local_e8 = local_e8 + 2.0f;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-2.0,2.0);
      local_ec = local_14 + local_ec;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-2.0,2.0);
      fVar15 = (float10)fsin((float10)-0.52359877558333301);
      fVar16 = (float10)fptan((float10)0.52359877558333301);
      fVar17 = (float10)local_e4;
      local_e4 = (float)((float10)local_14 + fVar17);
      Var18 = fpatan((float10)local_ec,(float10)local_14 + fVar17);
      fVar11 = SQRT(local_ec * local_ec + local_e4 * local_e4);
      fVar17 = (float10)fcos((float10)-0.52359877558333301);
      fVar13 = (float10)fsin(Var18);
      fVar14 = (float10)fcos(Var18);
      fVar16 = fVar17 * (float10)2.0f * fVar17 *
               (fVar16 * (float10)fVar11 - (float10)local_e8);
      local_b0.y = (float)-fVar15;
      local_b0.x = (float)(fVar13 * fVar17);
      local_b0.z = (float)(fVar14 * fVar17);
      if ((float10)0 < fVar16) {
        fVar11 = SQRT((fVar11 * (float)32 * fVar11) / (float)fVar16);
        local_8c.x = local_b0.x * fVar11;
        local_8c.y = local_b0.y * fVar11;
        local_8c.z = local_b0.z * fVar11;
        local_b0 = local_8c;
        local_11c.z = 1.0;
        local_11c.x = 0.0;
        local_11c.y = 0.5;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_74,&local_11c);
        core_fire_cpp_CFireEffect_createFireball_FUN_004c7db0
                  (g_CFireEffectPtr,&local_74,&local_b0,2,0);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"larva-blow1.wav");
      }
    }
  }
  fVar11 = (this_ptr->base).speed;
  fVar6 = (float)0.39269908168750001;
  fVar5 = (float)3;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar6 * fVar11 * fVar5;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  uVar12 = pSVar8->state_index;
  iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    if (uVar12 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar7 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,1,1);
        }
      }
      else {
        local_128.x = (pCVar4->base).location.position.x - (pCVar1->position).x;
        local_128.y = (pCVar4->base).location.position.y -
                      (this_ptr->base).base.base.location.position.y;
        local_128.z = (pCVar4->base).location.position.z -
                      (this_ptr->base).base.base.location.position.z;
        fVar11 = core_chain_cpp_fastSqrt_FUN_00431350(
                   local_128.z * local_128.z +
                   local_128.x * local_128.x + local_128.y * local_128.y);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_80,&local_128);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_80.y - (this_ptr->base).base.base.orient.vec.y);
        if (((float)0.39269908168750001 <= ABS(local_14)) || ((float)12 < fVar11)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
        else if ((this_ptr->base).attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,2,1);
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(15.0,30.0);
          (this_ptr->base).attack_cooldown = local_14;
        }
      }
    }
    else if (uVar12 < 2) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
      }
      else {
        (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
        (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
        local_86.x = 0.0f;
        local_86.y = 0.0f;
        local_86.z = 20.0f;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,&local_86,
                           0.5f,0.17453292f);
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",(this_ptr->base).base.base.actor_name);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
        if ((this_ptr->base).attack_cooldown <= 0.0) {
          pCVar4 = (this_ptr->base).victim;
          local_f8.x = (pCVar4->base).location.position.x -
                       (this_ptr->base).base.base.location.position.x;
          local_f8.y = (pCVar4->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_f8.z = (pCVar4->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          if (core_chain_cpp_fastSqrt_FUN_00431350(
                local_f8.z * local_f8.z +
                local_f8.x * local_f8.x + local_f8.y * local_f8.y)
              < (this_ptr->base).guard_distance) {
            pCVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&local_a4,&local_f8);
            local_f8 = *pCVar10;
            fVar11 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_f8.y);
            local_14 = fVar11;
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 ((this_ptr->base).base.base.orient.vec.y);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar11 - local_14);
            if (ABS(local_14) < (float)0.39269908168750001) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,2,1);
              (this_ptr->base).attack_cooldown = 6.0;
            }
          }
        }
      }
    }
    else if (((uVar12 == 5) && ((this_ptr->base).pool_me == 0)) &&
            ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      pCVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (this_ptr_00,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_e0,pCVar10);
      core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_e0,1);
      (this_ptr->base).pool_me = 1;
    }
    goto LAB_00503184;
  }
  uVar3 = (this_ptr->base).base.is_walking;
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_00503159:
      iVar7 = 1;
    }
    else {
LAB_00503501:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar7,1);
  }
  else {
    if (uVar3 < 3) goto LAB_00503159;
    if (uVar3 != 3) goto LAB_00503501;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n",(this_ptr->base).base.base.actor_name);
  }
  (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
LAB_00503184:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if (uVar12 == 1) {
    iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
    if (iVar7 == 0) {
      fVar17 = (float10)1;
      fVar15 = (float10)1.4426950408889634 *
               (float10)0.6931471805599453 * (float10)(this_ptr->base).base.size_scale *
               (float10)-0.20000000000000001;
      fVar16 = (float10)f2xm1(fVar15 - (fVar15 / fVar17) * fVar17);
      fVar17 = (float10)fscale(fVar16 + fVar17,fVar15);
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.99,1.01);
      _sprintf
                (acStack_sprintf,"slime.wav @%f *%f",(double)(this_ptr->base).base.size_scale,
                 (double)(local_14 * (float)fVar17));
      uVar12 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,acStack_sprintf);
      this_ptr->sfx_handles[1] = uVar12;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
  }
  iVar7 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar7 != 0) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar9 = (CLarva *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar9 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar10 = &(this_ptr->base).base.position_delta;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_bc.x = (this_ptr->base).base.velocity.x * delta_time + pCVar10->x + pCVar2->x;
    local_bc.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_bc.z = delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.x = 0.0f;
    (this_ptr->base).base.position_delta.y = 0.0f;
    (this_ptr->base).base.position_delta.z = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.x = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.y = 0.0f;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0f;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_bc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
