// Name: core_bride.cpp_CBride_process_FUN_0041fe40
// Address: 0041fe40
// Address Range: [[0041fe40, 00420969]]
// Convention: unknown
// Signature: void core_bride_cpp_CBride_process_FUN_0041fe40(CEnemy *param_1,float param_2)

#include "nocturne.h"

void core_bride_cpp_CBride_process_FUN_0041fe40(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *pCVar1;
  CEnemy_full_vtable *pCVar2;
  CCharacter *pCVar3;
  int iVar4;
  SMotion *pSVar5;
  CVector3f *pCVar6;
  CDemonActor *pCVar7;
  uint uVar8;
  CPathMap *pCVar9;
  float fVar10;
  float min_distance;
  float fVar11;
  SDamageInfo *pSVar12;
  float max_distance;
  SDamageInfo local_1f4;
  SDamageInfo local_1b8;
  SDamageInfo local_17c;
  SDamageInfo local_140;
  CVector3f local_104;
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
  CVector3f local_8c;
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
  
  iVar4 = core_charactr_cpp_FUN_004259f0(&param_1->base,param_2);
  if (iVar4 != 0) {
    if (0.0 <= param_1[1].base.base.location.position.y) {
      param_1[1].base.base.location.position.y = param_1[1].base.base.location.position.y - param_2;
    }
    pCVar1 = &(param_1->base).model;
    local_18 = -1.0;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&pCVar1->motion_controller);
    uVar8 = pSVar5->state_index;
    if (uVar8 < 5) {
      if (uVar8 == 0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar4 == 0) {
          (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
          if (param_1->victim != (CCharacter *)0x0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar1->motion_controller,1,1);
            iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                              ((uint)param_1[1].base.base.location.position.z);
            if ((iVar4 == 0) &&
               (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                  (param_1[1].base.base.location.area_id), iVar4 == 0)) {
              uVar8 = (*((param_1->base).base.vtable._ub)->playSound)
                                ((CDemonActor *)param_1,"ub-attack?.wav");
              param_1[1].base.base.location.area_id = uVar8;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).model.motion_controller,1,1);
        }
      }
      else if (uVar8 == 1) {
        if (param_1[1].base.base.location.position.y <= 0.0) {
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,20.0);
          param_1[1].base.base.location.position.y = local_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,3,1);
          iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                            ((uint)param_1[1].base.base.location.position.z);
          if ((iVar4 == 0) &&
             (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                (param_1[1].base.base.location.area_id), iVar4 == 0)) {
            uVar8 = (*((param_1->base).base.vtable._ub)->playSound)
                              ((CDemonActor *)param_1,"ub-howl?.wav");
            param_1[1].base.base.location.area_id = uVar8;
          }
        }
        fVar10 = param_1->speed;
        fVar11 = (float)1.57079632675;
        pCVar2 = (param_1->base).base.vtable._ue;
        pCVar1 = &(param_1->base).model;
        (param_1->base).walk_step_speed = param_1->speed * (float)3 * param_2;
        (param_1->base).turn_speed = fVar10 * fVar11 * param_2;
        (*(pCVar2->_ue).updateVictim)(param_1,param_2);
        if (param_1->victim == (CCharacter *)0x0) {
          iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar1->motion_controller,0,1);
          }
        }
        else {
          fVar11 = 0.17453292;
          fVar10 = 1.0;
          local_104.x = 0.0;
          local_104.z = 2.5f;
          pCVar6 = &local_104;
          local_104.y = 0.0;
          pCVar9 = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (&param_1->base,&(param_1->victim->base).location.position,pCVar9,pCVar6
                             ,fVar10,fVar11);
          if (iVar4 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar1->motion_controller,0,1);
          }
          else if (((0 < iVar4) && (param_1->attack_cooldown <= 0.0)) &&
                  (pCVar7 = (*(((param_1->victim->base).vtable._uc)->_uc).getGrabber)
                                      (param_1->victim), pCVar7 == (CDemonActor *)0x0)) {
            iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0.5);
            if (iVar4 == 0) {
              iVar4 = 6;
            }
            else {
              iVar4 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar1->motion_controller,iVar4,1);
            iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                              ((uint)param_1[1].base.base.location.position.z);
            if ((iVar4 == 0) &&
               (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                  (param_1[1].base.base.location.area_id), iVar4 == 0)) {
              uVar8 = (*((param_1->base).base.vtable._ub)->playSound)
                                ((CDemonActor *)param_1,"ub-attack?.wav");
              param_1[1].base.base.location.area_id = uVar8;
            }
          }
        }
      }
    }
    else if (uVar8 < 6) {
      pCVar3 = param_1->victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,1,1);
      }
      else {
        pCVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar7 == (CDemonActor *)0x0) {
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.2,0.5);
          param_1->attack_cooldown = local_14;
          local_20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                               (&pCVar1->motion_controller);
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
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
                pSVar12 = &local_140;
                local_140.attacker = (CDemonActor *)param_1;
                local_140.wielder = (CDemonActor *)param_1;
                fVar10 = 0.4;
                local_14 = local_140.damage_amount;
                pCVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                   (&local_a4,&CVector3f_00764ae4,
                                    (param_1->base).model.bone_transform.bone_world_matrices +
                                    DAT_00764b30);
                pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                   ((CDemonActor *)param_1,&local_68,pCVar6);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar6,fVar10,pSVar12);
              }
            }
            else if ((param_1->base).model.part_data.visibility_flags
                     [*(int *)(param_1[1].base.base.actor_name + 0xc)] != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_1f4);
              local_1f4.damage_amount =
                   core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
              local_1f4.attacker = (CDemonActor *)param_1;
              local_1f4.wielder = (CDemonActor *)param_1;
              pSVar12 = &local_1f4;
              fVar10 = 0.4;
              local_14 = local_1f4.damage_amount;
              pCVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                 (&local_e0,&CVector3f_00764ae4,
                                  (param_1->base).model.bone_transform.bone_world_matrices +
                                  DAT_00764b34);
              pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                 ((CDemonActor *)param_1,&local_f8,pCVar6);
              core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar6,fVar10,pSVar12);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,1,1);
        }
      }
    }
    else if (uVar8 < 7) {
      pCVar3 = param_1->victim;
      if (pCVar3 == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,1,1);
      }
      else {
        pCVar7 = (*(((pCVar3->base).vtable._uc)->_uc).getGrabber)(pCVar3);
        if (pCVar7 == (CDemonActor *)0x0) {
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.2,0.5);
          param_1->attack_cooldown = local_14;
          local_1c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                               (&pCVar1->motion_controller);
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
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
                local_17c.attacker = (CDemonActor *)param_1;
                local_17c.wielder = (CDemonActor *)param_1;
                pSVar12 = &local_17c;
                fVar10 = 0.4;
                local_14 = local_17c.damage_amount;
                pCVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                   (&local_80,&CVector3f_00764ae4,
                                    (param_1->base).model.bone_transform.bone_world_matrices +
                                    DAT_00764b34);
                pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                   ((CDemonActor *)param_1,&local_b0,pCVar6);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar6,fVar10,pSVar12);
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
                     core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
                local_1b8.attacker = (CDemonActor *)param_1;
                local_1b8.wielder = (CDemonActor *)param_1;
                pSVar12 = &local_1b8;
                fVar10 = 0.4;
                local_14 = local_1b8.damage_amount;
                pCVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                   (&local_98,&CVector3f_00764ae4,
                                    (param_1->base).model.bone_transform.bone_world_matrices +
                                    DAT_00764b30);
                pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                   ((CDemonActor *)param_1,&local_74,pCVar6);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar6,fVar10,pSVar12);
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,1,1);
        }
      }
    }
    else if ((uVar8 == 0xe) && (param_1->pool_me == 0)) {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         (pCVar1,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_d4,pCVar6);
      core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_d4,0);
      (*((param_1->base).base.vtable._ub)->spawnFlies)((CDemonActor *)param_1,0x32,25.0);
      param_1->pool_me = 1;
    }
    if ((param_1->victim != (CCharacter *)0x0) && (0.0 <= local_18)) {
      fVar10 = param_1->speed;
      fVar11 = (float)2.5;
      max_distance = 0.5235988;
      min_distance = 3.0;
      (param_1->base).turn_speed = param_1->speed * (float)1.57079632675 * param_2;
      (param_1->base).walk_step_speed = param_2 * fVar11 * fVar10;
      local_8c.x = 0.0;
      local_8c.z = local_18;
      pCVar6 = &local_8c;
      local_8c.y = 0.0;
      pCVar9 = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        (&param_1->base,&(param_1->victim->base).location.position,pCVar9,pCVar6,
                         min_distance,max_distance);
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
    core_charactr_cpp_FUN_0042a150(&param_1->base,param_2);
    if (param_1->pool_me == 0) {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (&param_1->base,*(int *)param_1[1].base.base.actor_name,DAT_00764b40,0.2);
      if ((param_1->base).model.part_data.visibility_flags[*(int *)param_1[1].base.base.actor_name]
          != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  (&param_1->base,*(int *)(param_1[1].base.base.actor_name + 4),DAT_00764b38,0.2);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (&param_1->base,*(int *)(param_1[1].base.base.actor_name + 8),DAT_00764b44,0.2);
      if ((param_1->base).model.part_data.visibility_flags
          [*(int *)(param_1[1].base.base.actor_name + 8)] != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  (&param_1->base,*(int *)(param_1[1].base.base.actor_name + 0xc),DAT_00764b3c,0.2);
      }
      core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990
                (&param_1->base,(int)param_1[1].base.base.location.position.x,DAT_00764b2c,0.7);
      core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0(&param_1->base);
    }
  }
  return;
}
