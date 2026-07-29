// Name: core_imp.cpp_CImp_process_FUN_004bbaf0
// Address: 004bbaf0
// Address Range: [[004bbaf0, 004bc7b3]]
// Convention: unknown
// Signature: void core_imp_cpp_CImp_process_FUN_004bbaf0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_imp_cpp_CImp_process_FUN_004bbaf0(CEnemy *param_1,float param_2)

{
  CDeformableModelInstance *pCVar1;
  CVector3f *pCVar2;
  CCharacter *pCVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  CDemonActor *pCVar7;
  CVector3f *pCVar8;
  EDeathState EVar9;
  SMotion *pSVar10;
  int iVar11;
  CEnemy *pCVar12;
  CPathMap *path_map;
  double dVar13;
  float fVar14;
  float fVar15;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo local_1a0;
  SDamageInfo local_164;
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_11c;
  CVector3f local_110;
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
  float local_a4;
  uint local_a0;
  float local_9c;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  int local_3c;
  float local_34 [2];
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_FUN_004259f0(&param_1->base,param_2);
  if (iVar5 == 0) {
    return;
  }
  if (((param_1->base).model.part_data.visibility_flags[*(int *)&param_1[1].base.base.orient] == 0)
     && (EVar9 = (*(((param_1->base).base.vtable._uc)->_uc).getDeathState)(&param_1->base),
        EVar9 == DEATH_STATE_ALIVE)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,6,1);
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
  local_34[0] = param_2 * param_1->speed;
  pCVar1 = &(param_1->base).model;
LAB_004bbb59:
  if (0.0 < local_34[0]) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar1->motion_controller,local_34);
    if (uVar6 < 0x29a) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,uVar6);
      goto LAB_004bbb59;
    }
    if (uVar6 < 0x29b) {
      pCVar3 = param_1->victim;
      if ((((pCVar3 != (CCharacter *)0x0) &&
           (EVar9 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
           EVar9 == DEATH_STATE_ALIVE)) &&
          (pCVar7 = (*(((param_1->victim->base).vtable._uc)->_uc).getGrabber)(param_1->victim),
          pCVar7 == (CDemonActor *)0x0)) &&
         (iVar5 = (*(((param_1->victim->base).vtable._uc)->_uc).canBeGrabbed)
                            (param_1->victim,(CDemonActor *)param_1,0), iVar5 != 0)) {
        local_50.z = 2.0f;
        local_50.x = 0.0;
        local_50.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_68,&local_50);
        fVar14 = local_68.x - (param_1->victim->base).location.position.x;
        fVar15 = local_68.z - (param_1->victim->base).location.position.z;
        bVar4 = (float)0.80000000000000004 < SQRT(fVar15 * fVar15 + fVar14 * fVar14);
        if (((ABS(local_68.y - (param_1->victim->base).location.position.y) <=
              (float)4) &&
            ((bVar4 || (iVar5 = (*(((param_1->victim->base).vtable._uc)->_uc).getGrabbed)
                                          (param_1->victim,(CDemonActor *)param_1,0), iVar5 != 0))))
           && (!bVar4)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,9,1);
          goto LAB_004bbb59;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->motion_controller,0,1)
      ;
      goto LAB_004bbb59;
    }
    if (uVar6 == 0x29b) {
      if (param_1->victim == (CCharacter *)0x0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar1->motion_controller,0,1);
      }
      else {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (pCVar1,&local_104,_DAT_01cae30c);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_8c,pCVar8);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(5.0,10.0);
        local_164.attacker = (CDemonActor *)param_1;
        local_164.wielder = (CDemonActor *)param_1;
        local_14 = local_164.damage_amount;
        (*(((param_1->victim->base).vtable._uc)->_uc).processDamage)(param_1->victim,&local_164);
        iVar5 = 0x4bbd84;
        dVar13 = round
                           ((double)(local_164.damage_amount * (float)2.5 *
                                    (float)0.25));
        local_3c = (int)ROUND(dVar13);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                  ((CGore *)INT_005b96c4,&local_8c,(CVector3f *)0x0,local_3c,iVar5);
        EVar9 = (*(((param_1->victim->base).vtable._uc)->_uc).getDeathState)(param_1->victim);
        if ((int)EVar9 < 1) {
          (*((param_1->base).base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"ghoul-eat-?.wav");
        }
        else {
          (*(((param_1->victim->base).vtable._uc)->_uc).releaseFromGrab)(param_1->victim);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,0,1);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(&param_1->base,uVar6);
    }
    goto LAB_004bbb59;
  }
  fVar14 = param_1->speed;
  fVar15 = (float)3.1415926535000001;
  pCVar1 = &(param_1->base).model;
  (param_1->base).walk_step_speed = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).turn_speed = param_2 * fVar15 * fVar14;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                      (&pCVar1->motion_controller);
  iVar5 = pSVar10->state_index;
  local_24 = iVar5;
  iVar11 = core_charactr_cpp_FUN_00428c00(&param_1->base,param_2);
  if (iVar11 == 0) {
    switch(iVar5) {
    case 0:
      iVar5 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      iVar5 = (**(code **)(*(int *)(iVar5 + 0x14c) + 0x104))(iVar5);
      if (iVar5 == 0) {
        (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
        pCVar3 = param_1->victim;
        if (pCVar3 == (CCharacter *)0x0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
          if (iVar5 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&pCVar1->motion_controller,1,1);
          }
        }
        else if (pCVar3->grabbed_by == (CDemonActor *)0x0) {
          local_80.x = (pCVar3->base).location.position.x - (param_1->base).base.location.position.x
          ;
          local_80.y = (pCVar3->base).location.position.y - (param_1->base).base.location.position.y
          ;
          local_80.z = (pCVar3->base).location.position.z - (param_1->base).base.location.position.z
          ;
          local_20 = SQRT(local_80.z * local_80.z +
                          local_80.x * local_80.x + local_80.y * local_80.y);
          local_18 = local_20;
          if (local_20 < 2.0f) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_e0,&local_80);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_e0.y - (param_1->base).base.orient.vec.y);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,4,1);
            }
          }
          if (local_20 < param_1->guard_distance) {
            pCVar1 = &(param_1->base).model;
            if (10.0f <= local_20) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,1,1);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,3,1);
        }
      }
      else {
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.1);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).model.motion_controller,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (*(((param_1->base).base.vtable._ue)->_ue).updateVictim)(param_1,param_2);
      fVar14 = 2.0f;
      pCVar1 = &(param_1->base).model;
      if (param_1->victim == (CCharacter *)0x0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        pCVar7 = param_1->victim->grabbed_by;
        if (pCVar7 == (CDemonActor *)0x0) {
          local_28 = 2.0f;
          max_distance = 0.17453292;
          (param_1->base).model.accumulated_root_motion.z = 0.0;
          fVar15 = 0.5;
          (param_1->base).model.accumulated_root_motion.y =
               (param_1->base).model.accumulated_root_motion.z;
          (param_1->base).model.accumulated_root_motion.x =
               (param_1->base).model.accumulated_root_motion.y;
          local_98.z = fVar14;
          pCVar8 = &local_98;
          local_98.x = (float)pCVar7;
          local_98.y = (float)pCVar7;
          path_map = (*((param_1->victim->base).vtable._ub)->getPathMap)(&param_1->victim->base);
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (&param_1->base,&(param_1->victim->base).location.position,path_map,
                             pCVar8,fVar15,max_distance);
          if (-1 < iVar5) {
            local_a4 = (param_1->base).base.location.position.x -
                       (param_1->victim->base).location.position.x;
            local_9c = (param_1->base).base.location.position.z -
                       (param_1->victim->base).location.position.z;
            local_a0 = 0;
            local_2c = SQRT(local_9c * local_9c + local_a4 * local_a4);
            local_1c = local_2c;
            if ((10.0f < local_2c) && (local_24 == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&pCVar1->motion_controller,2,1);
            }
            if (((local_1c < 4.0f) &&
                (pCVar7 = (*(((param_1->victim->base).vtable._uc)->_uc).getGrabber)(param_1->victim)
                , pCVar7 == (CDemonActor *)0x0)) &&
               ((param_1->base).model.part_data.visibility_flags
                [*(int *)((int)&param_1[1].base.base.orient + 4)] != 0)) {
              pCVar3 = param_1->victim;
              local_74.x = (pCVar3->base).location.position.x -
                           (param_1->base).base.location.position.x;
              local_74.y = (pCVar3->base).location.position.y -
                           (param_1->base).base.location.position.y;
              local_74.z = (pCVar3->base).location.position.z -
                           (param_1->base).base.location.position.z;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_ec,&local_74);
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                   (local_ec.y - (param_1->base).base.orient.vec.y);
              if ((ABS(local_14) < (float)0.52359877558333301) &&
                 (iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0.1), iVar5 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&(param_1->base).model.motion_controller,8,1);
                iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                  (*(uint *)param_1[1].base.base.actor_name);
                if (iVar5 == 0) {
                  uVar6 = (*((param_1->base).base.vtable._ub)->playSound)
                                    ((CDemonActor *)param_1,"imp-jump?.wav");
                  *(uint *)param_1[1].base.base.actor_name = uVar6;
                }
              }
            }
            if ((local_1c <= local_28) && (param_1->attack_cooldown <= 0.0)) {
              pCVar3 = param_1->victim;
              local_d4.x = (pCVar3->base).location.position.x -
                           (param_1->base).base.location.position.x;
              local_d4.y = (pCVar3->base).location.position.y -
                           (param_1->base).base.location.position.y;
              local_d4.z = (pCVar3->base).location.position.z -
                           (param_1->base).base.location.position.z;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_11c,&local_d4)
              ;
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                   (local_11c.y - (param_1->base).base.orient.vec.y);
              if (ABS(local_14) < (float)0.52359877558333301) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&(param_1->base).model.motion_controller,4,1);
                param_1->attack_cooldown = 4.0;
              }
            }
            if (param_1->guard_distance < local_1c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).model.motion_controller,0,1);
            }
            fVar14 = *(float *)(param_1[1].base.base.actor_name + 8) - param_2;
            *(float *)(param_1[1].base.base.actor_name + 8) = fVar14;
            if (fVar14 < 0.0) {
              uVar6 = *(uint *)param_1[1].base.base.actor_name;
              pCVar3 = &param_1[1].base;
              (pCVar3->base).actor_name[8] = '\0';
              (pCVar3->base).actor_name[9] = '\0';
              (pCVar3->base).actor_name[10] = '\0';
              (pCVar3->base).actor_name[0xb] = '\0';
              iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uVar6);
              if ((iVar5 == 0) &&
                 (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                    (*(uint *)(param_1[1].base.base.actor_name + 4)), iVar5 == 0)) {
                uVar6 = (*((param_1->base).base.vtable._ub)->playSound)
                                  ((CDemonActor *)param_1,"imp-laugh?.wav");
                *(uint *)param_1[1].base.base.actor_name = uVar6;
                local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,20.0);
                *(float *)(param_1[1].base.base.actor_name + 8) = local_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar1->motion_controller,3,1);
        }
      }
      break;
    case 3:
      fVar14 = *(float *)(param_1[1].base.base.actor_name + 8) - param_2 * 4.0f;
      *(float *)(param_1[1].base.base.actor_name + 8) = fVar14;
      if (fVar14 < 0.0) {
        uVar6 = *(uint *)param_1[1].base.base.actor_name;
        pCVar3 = &param_1[1].base;
        (pCVar3->base).actor_name[8] = '\0';
        (pCVar3->base).actor_name[9] = '\0';
        (pCVar3->base).actor_name[10] = '\0';
        (pCVar3->base).actor_name[0xb] = '\0';
        iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uVar6);
        if ((iVar5 == 0) &&
           (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                              (*(uint *)(param_1[1].base.base.actor_name + 4)), iVar5 == 0)) {
          uVar6 = (*((param_1->base).base.vtable._ub)->playSound)
                            ((CDemonActor *)param_1,"imp-laugh?.wav");
          *(uint *)param_1[1].base.base.actor_name = uVar6;
          local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(10.0,20.0);
          *(float *)(param_1[1].base.base.actor_name + 8) = local_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_1a0);
      local_1a0.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(3.0,5.0);
      damage_info = &local_1a0;
      local_1a0.attacker = (CDemonActor *)param_1;
      local_1a0.wielder = (CDemonActor *)param_1;
      fVar14 = 0.4;
      local_14 = local_1a0.damage_amount;
      pCVar8 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                         (&local_b0,(CVector3f *)&DAT_02dd1184,
                          (param_1->base).model.bone_transform.bone_world_matrices + _DAT_01cae314);
      pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)param_1,&local_5c,pCVar8);
      iVar5 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,pCVar8,fVar14,damage_info)
      ;
      if (iVar5 != 0) {
        iVar11 = 0;
        iVar5 = 0;
        while (iVar5 < *(int *)(0x01E57284 + 0x150bf4)) {
          pCVar12 = (CEnemy *)
                    core_actor_cpp_castToClassHash_FUN_0040d890
                              (*(CDemonActor **)(iVar11 + 0x150bf8 + 0x01E57284),
                               g_CImpActorType_01cae33c.name_hash);
          if (((pCVar12 == (CEnemy *)0x0) || (pCVar12 == param_1)) ||
             (param_1->victim != pCVar12->victim)) {
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                      (&(pCVar12->base).model.motion_controller,3,1);
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 4;
          }
        }
      }
      break;
    case 7:
      if ((param_1->pool_me == 0) && ((param_1->base).base.standing_platform == (CPlatform *)0x0)) {
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (pCVar1,&local_f8,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  ((CDemonActor *)param_1,&local_c8,pCVar8);
        core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_c8,0);
        param_1->pool_me = 1;
      }
      break;
    case 9:
      pCVar3 = param_1->victim;
      if ((pCVar3 != (CCharacter *)0x0) &&
         (EVar9 = (*(((pCVar3->base).vtable._uc)->_uc).getDeathState)(pCVar3),
         EVar9 == DEATH_STATE_ALIVE)) {
        pCVar12 = (CEnemy *)param_1->victim->grabbed_by;
        if (param_1 == pCVar12) {
          fVar14 = (float)0.75;
          pCVar3 = pCVar12->victim;
          (pCVar12->base).base.location.position.x =
               (param_1->victim->base).location.position.x -
               (pCVar12->base).base.orient_matrix.m[0].z * fVar14;
          (pCVar12->base).base.location.position.z =
               (pCVar3->base).location.position.z -
               (pCVar12->base).base.orient_matrix.m[2].z * fVar14;
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(&pCVar1->motion_controller,5,1)
      ;
    }
    goto switchD_004bc7ad_caseD_5;
  }
  uVar6 = (param_1->base).is_walking;
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_004bbe84:
      iVar5 = 1;
    }
    else {
LAB_004bc023:
      iVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,iVar5,1);
  }
  else {
    if (uVar6 < 3) goto LAB_004bbe84;
    if (uVar6 != 3) goto LAB_004bc023;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  (param_1->base).model.accumulated_root_motion.z = 0.0;
  (param_1->base).model.accumulated_root_motion.y = (param_1->base).model.accumulated_root_motion.z;
  (param_1->base).model.accumulated_root_motion.x = (param_1->base).model.accumulated_root_motion.y;
switchD_004bc7ad_caseD_5:
  if (0.0 < param_1->attack_cooldown) {
    param_1->attack_cooldown = param_1->attack_cooldown - param_2;
  }
  iVar5 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(&param_1->base);
  if ((iVar5 != 0) && (local_24 != 9)) {
    (param_1->base).velocity.y = (param_1->base).velocity.y - param_2 * (float)32;
    local_bc = (param_1->base).velocity.x * param_2;
    local_b8 = (param_1->base).velocity.y * param_2;
    pCVar8 = &(param_1->base).position_delta;
    local_b4 = param_2 * (param_1->base).velocity.z;
    pCVar2 = &(param_1->base).model.accumulated_root_motion;
    local_128 = local_bc + pCVar8->x;
    local_124 = local_b8 + (param_1->base).position_delta.y;
    local_120 = local_b4 + (param_1->base).position_delta.z;
    local_110.x = local_128 + pCVar2->x;
    local_110.y = local_124 + (param_1->base).model.accumulated_root_motion.y;
    local_110.z = local_120 + (param_1->base).model.accumulated_root_motion.z;
    (param_1->base).position_delta.z = 0.0;
    (param_1->base).position_delta.y = (param_1->base).position_delta.z;
    pCVar8->x = (param_1->base).position_delta.y;
    (param_1->base).model.accumulated_root_motion.z = 0.0;
    (param_1->base).model.accumulated_root_motion.y =
         (param_1->base).model.accumulated_root_motion.z;
    pCVar2->x = (param_1->base).model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(&param_1->base,&local_110);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(&param_1->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(&(param_1->base).model);
  core_charactr_cpp_FUN_0042a150(&param_1->base,param_2);
  return;
}
