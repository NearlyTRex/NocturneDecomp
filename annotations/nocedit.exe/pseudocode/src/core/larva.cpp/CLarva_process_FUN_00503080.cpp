// Name: core_larva.cpp_CLarva_process_FUN_00503080
// Address: 00503080
// Address Range: [[00503080, 0050334d] [005034b7, 00503676] [0050368b, 005038ec] [0050393e, 00503951]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_process_FUN_00503080(CLarva *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */
/* WARNING: Removing unreachable block (ram,0x0050389e) */

void __cdecl core_larva_cpp_CLarva_process_FUN_00503080(CLarva *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar2;
  float fVar3;
  CCharacter *pCVar4;
  float fVar5;
  int iVar6;
  SMotion *pSVar7;
  CLarva *pCVar8;
  CVector3f *pCVar9;
  CPathMap *path_map;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  unkbyte10 Var16;
  float fVar17;
  float in_stack_fffffe18;
  CVector3f local_128;
  CVector3f local_11c;
  uint local_110;
  uint local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
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
  float local_98;
  float local_94;
  float local_90;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  double local_68;
  double local_60;
  float local_54;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar6 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
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
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&this_ptr_00->motion_controller,&local_18);
    if ((iVar6 == 100) && (pCVar4 = (this_ptr->base).victim, pCVar4 != (CCharacter *)0x0)) {
      local_d4 = (pCVar4->base).location.position.x - (pCVar1->position).x;
      local_d0 = (pCVar4->base).location.position.y - (this_ptr->base).base.base.location.position.y
      ;
      local_cc = (pCVar4->base).location.position.z - (this_ptr->base).base.base.location.position.z
      ;
      if (&local_ec != &local_d4) {
        local_ec = local_d4;
        local_e8 = local_d0;
        local_e4 = local_cc;
      }
      local_e8 = local_e8 + 2.0f;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
      local_ec = local_14 + local_ec;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
      fVar13 = (float10)fsin((float10)-0.52359877558333301);
      fVar14 = (float10)fptan((float10)0.52359877558333301);
      fVar15 = (float10)local_e4;
      local_e4 = (float)((float10)local_14 + fVar15);
      Var16 = fpatan((float10)local_ec,(float10)local_14 + fVar15);
      fVar3 = SQRT(local_ec * local_ec + local_e4 * local_e4);
      fVar15 = (float10)fcos((float10)-0.52359877558333301);
      fVar11 = (float10)fsin(Var16);
      fVar12 = (float10)fcos(Var16);
      local_60 = (double)fVar3;
      local_24 = fVar3 * (float)32 * fVar3;
      fVar14 = fVar15 * (float10)2.0f * fVar15 *
               (fVar14 * (float10)fVar3 - (float10)local_e8);
      local_b0.y = (float)-fVar13;
      local_20 = (float)fVar14;
      local_b0.x = (float)(fVar11 * fVar15);
      local_b0.z = (float)(fVar12 * fVar15);
      if ((float10)0 < fVar14) {
        local_1c = SQRT(local_24 / local_20);
        local_8c.x = local_b0.x * local_1c;
        local_8c.y = local_b0.y * local_1c;
        local_8c.z = local_b0.z * local_1c;
        if (&local_b0 != &local_8c) {
          local_b0.x = local_8c.x;
          local_b0.y = local_8c.y;
          local_b0.z = local_8c.z;
        }
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
  fVar3 = (this_ptr->base).speed;
  fVar5 = (float)0.39269908168750001;
  fVar17 = (float)3;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.turn_speed = delta_time * fVar5 * fVar3 * fVar17;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&this_ptr_00->motion_controller);
  local_30 = pSVar7->state_index;
  local_28 = local_30;
  iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar6 == 0) {
    if (local_28 == 0) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      pCVar4 = (this_ptr->base).victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar6 != 0) {
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
        local_54 = local_128.z * local_128.z + local_128.x * local_128.x + local_128.y * local_128.y
        ;
        local_2c = (float)(((int)local_54 >> 1) + INT_02d7a7b8);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_80,&local_128);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_80.y - (this_ptr->base).base.base.orient.vec.y);
        if (((float)0.39269908168750001 <= ABS(local_14)) || ((float)12 < local_2c)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,1,1);
        }
        else if ((this_ptr->base).attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,2,1);
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
          (this_ptr->base).attack_cooldown = local_14;
        }
      }
    }
    else if (local_28 < 2) {
      (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
      fVar3 = 20.0f;
      if ((this_ptr->base).victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr_00->motion_controller,0,1);
        }
      }
      else {
        local_38 = 20.0f;
        (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
        (this_ptr->base).base.model.accumulated_root_motion.y =
             (this_ptr->base).base.model.accumulated_root_motion.z;
        (this_ptr->base).base.model.accumulated_root_motion.x =
             (this_ptr->base).base.model.accumulated_root_motion.y;
        local_110 = 0;
        local_10c = 0;
        fVar17 = 0.17453292;
        local_108 = fVar3;
        pCVar9 = (CVector3f *)0x3f000000;
        pCVar4 = (this_ptr->base).victim;
        path_map = (*((pCVar4->base).vtable._ub)->getPathMap)(&pCVar4->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          ((CCharacter *)this_ptr,
                           &(((this_ptr->base).victim)->base).location.position,path_map,pCVar9,
                           fVar17,in_stack_fffffe18);
        if (iVar6 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n");
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
          local_44 = local_f8.z * local_f8.z + local_f8.x * local_f8.x + local_f8.y * local_f8.y;
          local_40 = (float)(((int)local_44 >> 1) + INT_02d7a7b8);
          if (local_40 < (this_ptr->base).guard_distance) {
            pCVar9 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               (&local_a4,&local_f8);
            if (&local_f8 != pCVar9) {
              local_f8.x = pCVar9->x;
              local_f8.y = pCVar9->y;
              local_f8.z = pCVar9->z;
            }
            local_3c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_f8.y);
            local_14 = local_3c;
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 ((this_ptr->base).base.base.orient.vec.y);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_3c - local_14);
            if (ABS(local_14) < (float)0.39269908168750001) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,2,1);
              (this_ptr->base).attack_cooldown = 6.0;
            }
          }
        }
      }
    }
    else if (((local_28 == 5) && ((this_ptr->base).pool_me == 0)) &&
            ((this_ptr->base).base.base.standing_platform == (CPlatform *)0x0)) {
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (this_ptr_00,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_e0,pCVar9);
      core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_e0,1);
      (this_ptr->base).pool_me = 1;
    }
    goto LAB_00503184;
  }
  uVar10 = (this_ptr->base).base.is_walking;
  if (uVar10 < 2) {
    if (uVar10 == 1) {
LAB_00503159:
      iVar6 = 1;
    }
    else {
LAB_00503501:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,iVar6,1);
  }
  else {
    if (uVar10 < 3) goto LAB_00503159;
    if (uVar10 != 3) goto LAB_00503501;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
LAB_00503184:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  if (local_30 == 1) {
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handles[1]);
    if (iVar6 == 0) {
      fVar15 = (float10)1;
      fVar13 = (float10)1.4426950408889634 *
               (float10)0.6931471805599453 * (float10)(this_ptr->base).base.size_scale *
               (float10)-0.20000000000000001;
      fVar14 = (float10)f2xm1(fVar13 - (fVar13 / fVar15) * fVar15);
      fVar15 = (float10)fscale(fVar14 + fVar15,fVar13);
      local_68 = (double)fVar15;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.99,1.01);
      _sprintf
                (&stack0xfffffe10,"slime.wav @%f *%f",(double)(this_ptr->base).base.size_scale,
                 (double)(local_14 * (float)local_68));
      uVar10 = (*((this_ptr->base).base.base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)this_ptr,&stack0xfffffe10);
      this_ptr->sfx_handles[1] = uVar10;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[1]);
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_004297e0((CCharacter *)this_ptr);
  if (iVar6 != 0) {
    pCVar4 = (this_ptr->base).victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar8 = (CLarva *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar8 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    local_104 = (this_ptr->base).base.velocity.x * delta_time;
    local_100 = (this_ptr->base).base.velocity.y * delta_time;
    pCVar9 = &(this_ptr->base).base.position_delta;
    local_fc = delta_time * (this_ptr->base).base.velocity.z;
    pCVar2 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_98 = local_104 + pCVar9->x;
    local_94 = local_100 + (this_ptr->base).base.position_delta.y;
    local_90 = local_fc + (this_ptr->base).base.position_delta.z;
    local_bc.x = local_98 + pCVar2->x;
    local_bc.y = local_94 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_bc.z = local_90 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar9->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar3 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar3;
    pCVar2->x = fVar3;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_bc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
}
