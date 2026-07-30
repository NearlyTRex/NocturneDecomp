// Name: core_larva.cpp_CLarva_process_FUN_004c4970
// Address: 004c4970
// Address Range: [[004c4970, 004c5241]]
// Convention: unknown
// Signature: void core_larva_cpp_CLarva_process_FUN_004c4970(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004c518e) */

void core_larva_cpp_CLarva_process_FUN_004c4970(CEnemy *param_1,float param_2)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar2;
  float fVar3;
  CCharacter *pCVar4;
  float fVar5;
  int iVar6;
  SMotion *pSVar7;
  CEnemy *pCVar8;
  CVector3f *pCVar9;
  CPathMap *path_map;
  uint uVar10;
  unkbyte10 Var11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
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
  
  iVar6 = core_charactr_cpp_FUN_004259f0(&param_1->base,param_2);
  if (iVar6 == 0) {
    return;
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  pCVar1 = &(param_1->base).base.location;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  local_18 = param_2 * param_1->speed;
  this_ptr = &(param_1->base).model;
  while (0.0 < local_18) {
    iVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&this_ptr->motion_controller,&local_18);
    if ((iVar6 == 100) && (pCVar4 = param_1->victim, pCVar4 != (CCharacter *)0x0)) {
      local_d4 = (pCVar4->base).location.position.x - (pCVar1->position).x;
      local_d0 = (pCVar4->base).location.position.y - (param_1->base).base.location.position.y;
      local_cc = (pCVar4->base).location.position.z - (param_1->base).base.location.position.z;
      if (&local_ec != &local_d4) {
        local_ec = local_d4;
        local_e8 = local_d0;
        local_e4 = local_cc;
      }
      local_e8 = local_e8 + 2.0f;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-2.0,2.0);
      local_ec = local_14 + local_ec;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-2.0,2.0);
      Var11 = fsin((float10)-0.52359877558333301);
      fVar16 = (float10)fptan((float10)0.52359877558333301);
      fVar14 = (float10)local_14 + (float10)local_e4;
      local_e4 = (float)fVar14;
      fVar15 = atan2((float10)local_ec,fVar14);
      fVar3 = SQRT(local_ec * local_ec + local_e4 * local_e4);
      fVar12 = (float10)fcos(Var11);
      fVar13 = (float10)fsin(fVar15);
      fVar15 = (float10)fcos(fVar15);
      local_60 = (double)fVar3;
      local_24 = fVar3 * (float)32 * fVar3;
      fVar14 = fVar12 * (float10)2.0f * fVar12 *
               (fVar14 * (float10)fVar3 - (float10)local_e8);
      local_b0.y = (float)-fVar16;
      local_20 = (float)fVar14;
      local_b0.x = (float)(fVar13 * fVar12);
      local_b0.z = (float)(fVar15 * fVar12);
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
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_74,&local_11c);
        core_fire_cpp_CFireEffect_createFireball_FUN_0048b270(0x01C08D04,&local_74,&local_b0,2,0);
        (*((param_1->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"larva-blow1.wav");
      }
    }
  }
  fVar3 = param_1->speed;
  fVar5 = (float)0.39269908168750001;
  fVar17 = (float)3;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).turn_speed = param_2 * fVar5 * fVar3 * fVar17;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&this_ptr->motion_controller);
  local_30 = pSVar7->state_index;
  local_28 = local_30;
  iVar6 = core_charactr_cpp_FUN_00428c00(&param_1->base,param_2);
  if (iVar6 == 0) {
    if (local_28 == 0) {
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      pCVar4 = param_1->victim;
      if (pCVar4 == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar6 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,1,1);
        }
      }
      else {
        local_128.x = (pCVar4->base).location.position.x - (pCVar1->position).x;
        local_128.y = (pCVar4->base).location.position.y - (param_1->base).base.location.position.y;
        local_128.z = (pCVar4->base).location.position.z - (param_1->base).base.location.position.z;
        local_54 = local_128.z * local_128.z + local_128.x * local_128.x + local_128.y * local_128.y
        ;
        local_2c = (float)(((int)local_54 >> 1) + (int)CVector3f_01c70708.y);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_80,&local_128);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                             (local_80.y - (param_1->base).base.orient.vec.y);
        if (((float)0.39269908168750001 <= ABS(local_14)) || ((float)12 < local_2c)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).model.motion_controller,1,1);
        }
        else if (param_1->attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,2,1);
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(15.0,30.0);
          param_1->attack_cooldown = local_14;
        }
      }
    }
    else if (local_28 < 2) {
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      fVar3 = 20.0f;
      if (param_1->victim == (CCharacter *)0x0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,0,1);
        }
      }
      else {
        local_38 = 20.0f;
        (param_1->base).model.accumulated_root_motion.z = 0.0;
        (param_1->base).model.accumulated_root_motion.y =
             (param_1->base).model.accumulated_root_motion.z;
        (param_1->base).model.accumulated_root_motion.x =
             (param_1->base).model.accumulated_root_motion.y;
        local_110 = 0;
        local_10c = 0;
        fVar17 = 0.17453292;
        local_108 = fVar3;
        pCVar9 = (CVector3f *)0x3f000000;
        path_map = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (&param_1->base,&(param_1->victim->base).location.position,path_map,pCVar9
                           ,fVar17,in_stack_fffffe18);
        if (iVar6 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60();
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&this_ptr->motion_controller,0,1);
        }
        if (param_1->attack_cooldown <= 0.0) {
          pCVar4 = param_1->victim;
          local_f8.x = (pCVar4->base).location.position.x - (param_1->base).base.location.position.x
          ;
          local_f8.y = (pCVar4->base).location.position.y - (param_1->base).base.location.position.y
          ;
          local_f8.z = (pCVar4->base).location.position.z - (param_1->base).base.location.position.z
          ;
          local_44 = local_f8.z * local_f8.z + local_f8.x * local_f8.x + local_f8.y * local_f8.y;
          local_40 = (float)(((int)local_44 >> 1) + (int)CVector3f_01c70708.y);
          if (local_40 < param_1->guard_distance) {
            pCVar9 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                               (&local_a4,&local_f8);
            if (&local_f8 != pCVar9) {
              local_f8.x = pCVar9->x;
              local_f8.y = pCVar9->y;
              local_f8.z = pCVar9->z;
            }
            local_3c = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_f8.y);
            local_14 = local_3c;
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 ((param_1->base).base.orient.vec.y);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(local_3c - local_14);
            if (ABS(local_14) < (float)0.39269908168750001) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).model.motion_controller,2,1);
              param_1->attack_cooldown = 6.0;
            }
          }
        }
      }
    }
    else if (((local_28 == 5) && (param_1->pool_me == 0)) &&
            ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         (this_ptr,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_e0,pCVar9);
      core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_e0,1);
      param_1->pool_me = 1;
    }
    goto LAB_004c4a74;
  }
  uVar10 = (param_1->base).is_walking;
  if (uVar10 < 2) {
    if (uVar10 == 1) {
LAB_004c4a49:
      iVar6 = 1;
    }
    else {
LAB_004c4df1:
      iVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar6,1);
  }
  else {
    if (uVar10 < 3) goto LAB_004c4a49;
    if (uVar10 != 3) goto LAB_004c4df1;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&this_ptr->motion_controller,0,1)
    ;
    engine_console_cpp_CConsole_printf_FUN_0043ac60();
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
LAB_004c4a74:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  if (local_30 == 1) {
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                      (*(uint *)(param_1[1].base.base.actor_name + 8));
    if (iVar6 == 0) {
      fVar16 = (float10)1;
      fVar14 = (float10)1.4426950408889634 *
               (float10)0.6931471805599453 * (float10)(param_1->base).size_scale *
               (float10)-0.20000000000000001;
      fVar15 = (float10)f2xm1(fVar14 - (fVar14 / fVar16) * fVar16);
      fVar16 = (float10)fscale(fVar15 + fVar16,fVar14);
      local_68 = (double)fVar16;
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.99,1.01);
      _sprintf(&stack0xfffffe10,"slime.wav @%f *%f",(double)(param_1->base).size_scale,
                 (double)(local_14 * (float)local_68));
      uVar10 = (*((param_1->base).base.vtable._ub)->playAmbientSound)
                         ((CDemonActor *)param_1,&stack0xfffffe10);
      *(uint *)(param_1[1].base.base.actor_name + 8) = uVar10;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1[1].base.base.actor_name + 8));
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
  if (iVar6 != 0) {
    pCVar4 = param_1->victim;
    if ((pCVar4 != (CCharacter *)0x0) &&
       (pCVar8 = (CEnemy *)(*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
       pCVar8 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&param_1->victim->base);
    }
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_104 = (param_1->base).velocity.x * param_2;
    local_100 = (param_1->base).velocity.y * param_2;
    pCVar9 = &(param_1->base).position_delta;
    local_fc = param_2 * (param_1->base).velocity.z;
    pCVar2 = &(param_1->base).model.accumulated_root_motion;
    local_98 = local_104 + pCVar9->x;
    local_94 = local_100 + (param_1->base).position_delta.y;
    local_90 = local_fc + (param_1->base).position_delta.z;
    local_bc.x = local_98 + pCVar2->x;
    local_bc.y = local_94 + (param_1->base).model.accumulated_root_motion.y;
    local_bc.z = local_90 + (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar9->x = (param_1->base).position_delta.y;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    fVar3 = (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.y = fVar3;
    pCVar2->x = fVar3;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_bc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(param_1->base).model);
  core_charactr_cpp_FUN_0042a150(&param_1->base,param_2);
  return;
}
