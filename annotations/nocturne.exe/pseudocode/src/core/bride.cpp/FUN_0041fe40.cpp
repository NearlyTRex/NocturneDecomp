// Name: core_bride.cpp_FUN_0041fe40
// Address: 0041fe40
// Address Range: [[0041fe40, 00420969]]
// Convention: unknown
// Signature: void core_bride_cpp_FUN_0041fe40(CEnemy *param_1,float param_2)

#include "nocturne.h"

void core_bride_cpp_FUN_0041fe40(CEnemy *param_1,float param_2)

{
  CCharacter_full_vtable *pCVar1;
  CCharacter *pCVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  uint uVar6;
  CPathMap *pCVar7;
  char *drop_direction;
  CVector3f *in_stack_fffffe0c;
  float in_stack_fffffe10;
  float fVar8;
  CVector3f *pCVar9;
  float in_stack_fffffe14;
  SDamageInfo *pSVar10;
  float min_distance;
  CDeformableModelInstance *in_stack_fffffe18;
  CDeformableModelInstance *pCVar11;
  float in_stack_fffffe1c;
  SDamageInfo local_1b8;
  SDamageInfo local_17c;
  SDamageInfo local_140;
  uint local_104;
  uint local_100;
  float local_fc;
  CVector3f local_f8;
  CVector3f local_ec;
  CVector3f local_e0;
  CVector3f local_d4;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  uint local_8c;
  uint local_88;
  float local_84;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  double local_5c;
  double local_54;
  double local_4c;
  double local_44;
  double local_34;
  double local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 != 0) {
    if (0.0 <= param_1[1].base.base.location.position.y) {
      param_1[1].base.base.location.position.y = param_1[1].base.base.location.position.y - param_2;
    }
    pCVar11 = &(param_1->base).model;
    local_18 = -1.0;
    drop_direction = (char *)pCVar11;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&pCVar11->motion_controller);
    uVar6 = pSVar5->state_index;
    if (uVar6 < 5) {
      if (uVar6 == 0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar4 == 0) {
          (*(((param_1->base).base.vtable._uc)->_uc).dropCarriedObject)
                    (&param_1->base,(int)param_2,in_stack_fffffe0c);
          if (param_1->victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar11->motion_controller,1,1);
            iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                              ((uint)param_1[1].base.base.location.position.z);
            if ((iVar4 == 0) &&
               (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                  (param_1[1].base.base.location.area_id), iVar4 == 0)) {
              uVar6 = (*((param_1->base).base.vtable._ub)->playSound)
                                ((CDemonActor *)param_1,"ub-attack?.wav");
              param_1[1].base.base.location.area_id = uVar6;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).model.motion_controller,1,1);
        }
      }
      else if (uVar6 == 1) {
        if (param_1[1].base.base.location.position.y <= 0.0) {
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0x41200000,0x41a00000);
          param_1[1].base.base.location.position.y = local_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar11->motion_controller,3,1);
          drop_direction = (char *)param_1[1].base.base.location.position.z;
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50((uint)drop_direction);
          if (iVar4 == 0) {
            drop_direction = (char *)param_1[1].base.base.location.area_id;
            iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50((uint)drop_direction);
            if (iVar4 == 0) {
              drop_direction = "ub-howl?.wav";
              uVar6 = (*((param_1->base).base.vtable._ub)->playSound)
                                ((CDemonActor *)param_1,"ub-howl?.wav");
              param_1[1].base.base.location.area_id = uVar6;
            }
          }
        }
        fVar8 = param_1->speed;
        fVar3 = (float)1.57079632675;
        pCVar1 = (param_1->base).base.vtable._uc;
        pCVar11 = &(param_1->base).model;
        (param_1->base).walk_step_speed = param_1->speed * (float)3 * param_2;
        (param_1->base).turn_speed = fVar8 * fVar3 * param_2;
        (*(pCVar1->_uc).dropCarriedObject)(&param_1->base,(int)param_2,(CVector3f *)drop_direction);
        if (param_1->victim == (CCharacter *)0x0) {
          iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar11->motion_controller,0,1);
          }
        }
        else {
          fVar8 = 0.17453292;
          pCVar9 = (CVector3f *)0x3f800000;
          local_104 = 0;
          local_fc = 2.5f;
          local_100 = 0;
          pCVar7 = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (&param_1->base,&(param_1->victim->base).location.position,pCVar7,pCVar9
                             ,fVar8,in_stack_fffffe14);
          if (iVar4 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar11->motion_controller,0,1);
          }
          else if (((0 < iVar4) && (param_1->attack_cooldown <= 0.0)) &&
                  (iVar4 = (*(((param_1->victim->base).vtable._uc)->_uc).applyDamage)
                                     (param_1->victim,(int)in_stack_fffffe18,in_stack_fffffe1c),
                  iVar4 == 0)) {
            iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
            if (iVar4 == 0) {
              fVar8 = 8.40779e-45;
            }
            else {
              fVar8 = 7.00649e-45;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar11->motion_controller,(int)fVar8,1);
            iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                              ((uint)param_1[1].base.base.location.position.z);
            in_stack_fffffe18 = pCVar11;
            if ((iVar4 == 0) &&
               (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                  (param_1[1].base.base.location.area_id),
               in_stack_fffffe18 = pCVar11, iVar4 == 0)) {
              in_stack_fffffe18 = (CDeformableModelInstance *)0x42021d;
              uVar6 = (*((param_1->base).base.vtable._ub)->playSound)
                                ((CDemonActor *)param_1,"ub-attack?.wav");
              param_1[1].base.base.location.area_id = uVar6;
            }
          }
        }
      }
    }
    else if (uVar6 < 6) {
      pCVar2 = param_1->victim;
      if (pCVar2 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar11->motion_controller,1,1);
      }
      else {
        iVar4 = (*(((pCVar2->base).vtable._uc)->_uc).applyDamage)
                          (pCVar2,(int)in_stack_fffffe0c,in_stack_fffffe10);
        if (iVar4 == 0) {
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
          param_1->attack_cooldown = local_14;
          local_20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                               (&pCVar11->motion_controller);
          local_4c = (double)local_20;
          local_14 = local_20;
          if (local_20 <= (float)3) {
            local_18 = 2.5f;
            if ((local_4c < 1.0) || (2 < local_4c)) {
              local_44 = (double)local_20;
              if (((float)3 <= local_20) &&
                 ((local_44 <= 4 &&
                  ((param_1->base).model.part_data.visibility_flags
                   [*(int *)(param_1[1].base.base.actor_name + 4)] != 0)))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_140);
                local_140.damage_amount =
                     (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
                pSVar10 = &local_140;
                local_140.attacker = (CDemonActor *)param_1;
                local_140.wielder = (CDemonActor *)param_1;
                fVar8 = 0.4;
                local_14 = local_140.damage_amount;
                pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                   (&local_a4,&CVector3f_00764ae4,
                                    (param_1->base).model.bone_transform.bone_world_matrices +
                                    DAT_00764b30);
                pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                   ((CDemonActor *)param_1,&local_68,pCVar9);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar9,fVar8,pSVar10);
              }
            }
            else if ((param_1->base).model.part_data.visibility_flags
                     [*(int *)(param_1[1].base.base.actor_name + 0xc)] != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xfffffe0c);
              fVar8 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
              pSVar10 = (SDamageInfo *)&stack0xfffffe0c;
              local_14 = fVar8;
              pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                 (&local_e0,&CVector3f_00764ae4,
                                  (param_1->base).model.bone_transform.bone_world_matrices +
                                  DAT_00764b34);
              pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                 ((CDemonActor *)param_1,&local_f8,pCVar9);
              core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar9,fVar8,pSVar10);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar11->motion_controller,1,1);
        }
      }
    }
    else if (uVar6 < 7) {
      pCVar2 = param_1->victim;
      if (pCVar2 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar11->motion_controller,1,1);
      }
      else {
        iVar4 = (*(((pCVar2->base).vtable._uc)->_uc).applyDamage)
                          (pCVar2,(int)in_stack_fffffe0c,in_stack_fffffe10);
        if (iVar4 == 0) {
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
          param_1->attack_cooldown = local_14;
          local_1c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                               (&pCVar11->motion_controller);
          local_54 = (double)local_1c;
          local_14 = local_1c;
          if (local_1c <= (float)8) {
            local_18 = 2.5f;
            if (((1.0 <= local_54) && (local_54 <= 2)) ||
               ((local_2c = (double)local_1c, (float)5 <= local_1c &&
                (local_2c <= 6)))) {
              if ((param_1->base).model.part_data.visibility_flags
                  [*(int *)(param_1[1].base.base.actor_name + 0xc)] != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_17c);
                local_17c.damage_amount =
                     (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
                local_17c.attacker = (CDemonActor *)param_1;
                local_17c.wielder = (CDemonActor *)param_1;
                pSVar10 = &local_17c;
                fVar8 = 0.4;
                local_14 = local_17c.damage_amount;
                pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                   (&local_80,&CVector3f_00764ae4,
                                    (param_1->base).model.bone_transform.bone_world_matrices +
                                    DAT_00764b34);
                pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                   ((CDemonActor *)param_1,&local_b0,pCVar9);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar9,fVar8,pSVar10);
              }
            }
            else {
              local_5c = (double)local_1c;
              if (((((float)3 <= local_1c) && (local_5c <= 4)) ||
                  ((local_34 = (double)local_1c, (float)7 <= local_1c &&
                   (local_34 <= 8)))) &&
                 ((param_1->base).model.part_data.visibility_flags
                  [*(int *)(param_1[1].base.base.actor_name + 4)] != 0)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_1b8);
                local_1b8.damage_amount =
                     (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
                local_1b8.attacker = (CDemonActor *)param_1;
                local_1b8.wielder = (CDemonActor *)param_1;
                pSVar10 = &local_1b8;
                fVar8 = 0.4;
                local_14 = local_1b8.damage_amount;
                pCVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                   (&local_98,&CVector3f_00764ae4,
                                    (param_1->base).model.bone_transform.bone_world_matrices +
                                    DAT_00764b30);
                pCVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                   ((CDemonActor *)param_1,&local_74,pCVar9);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar9,fVar8,pSVar10);
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar11->motion_controller,1,1);
        }
      }
    }
    else if ((uVar6 == 0xe) && (param_1->pool_me == 0)) {
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         (pCVar11,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_d4,pCVar9);
      core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_d4,0);
      (*((param_1->base).base.vtable._ub)->spawnFlies)((CDemonActor *)param_1,0x32,25.0);
      param_1->pool_me = 1;
    }
    if ((param_1->victim != (CCharacter *)0x0) && (0.0 <= local_18)) {
      fVar8 = param_1->speed;
      fVar3 = (float)2.5;
      min_distance = 0.5235988;
      pCVar9 = (CVector3f *)0x40400000;
      (param_1->base).turn_speed = param_1->speed * (float)1.57079632675 * param_2;
      (param_1->base).walk_step_speed = param_2 * fVar3 * fVar8;
      local_8c = 0;
      local_84 = local_18;
      local_88 = 0;
      pCVar7 = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        (&param_1->base,&(param_1->victim->base).location.position,pCVar7,pCVar9,
                         min_distance,(float)in_stack_fffffe18);
      if (iVar4 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).model.motion_controller,1,1);
        (param_1->base).turn_angle_accumulator = 0.0;
      }
    }
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).model.accumulated_root_motion.x =
         (param_1->base).model.accumulated_root_motion.y;
    local_24 = param_2 * param_1->speed;
    while (0.0 < local_24) {
      iVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                        (&(param_1->base).model.motion_controller,&local_24);
      if (iVar4 != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,iVar4);
      }
    }
    if (0.0 < param_1->attack_cooldown) {
      param_1->attack_cooldown = param_1->attack_cooldown - param_2;
    }
    (param_1->base).base.orient.vec.y =
         (param_1->base).turn_angle_accumulator + (param_1->base).base.orient.vec.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000((CDemonActor *)param_1);
    iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
    if (iVar4 != 0) {
      (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
      local_bc = (param_1->base).velocity.x * param_2;
      local_b8 = (param_1->base).velocity.y * param_2;
      local_b4 = param_2 * (param_1->base).velocity.z;
      local_ec.x = local_bc + (param_1->base).position_delta.x;
      local_ec.y = local_b8 + (param_1->base).position_delta.y;
      local_ec.z = local_b4 + (param_1->base).position_delta.z;
      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&(param_1->base).model.motion_controller);
      if (pSVar5->state_index != 1) {
        local_ec.x = local_ec.x + (param_1->base).model.accumulated_root_motion.x;
        local_ec.y = local_ec.y + (param_1->base).model.accumulated_root_motion.y;
        local_ec.z = local_ec.z + (param_1->base).model.accumulated_root_motion.z;
      }
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_ec);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(param_1->base).model);
    core_charactr_cpp_FUN_0042a150();
    if (param_1->pool_me == 0) {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0(param_1);
      if ((param_1->base).model.part_data.visibility_flags[*(int *)param_1[1].base.base.actor_name]
          != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0(param_1);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0(param_1);
      if ((param_1->base).model.part_data.visibility_flags
          [*(int *)(param_1[1].base.base.actor_name + 8)] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0(param_1);
      }
      core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990
                (&param_1->base,(int)param_1[1].base.base.location.position.x,DAT_00764b2c,0.7);
      core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0(&param_1->base);
    }
  }
  return;
}
