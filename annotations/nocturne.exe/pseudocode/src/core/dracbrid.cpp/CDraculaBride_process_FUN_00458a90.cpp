// Name: core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90
// Address: 00458a90
// Address Range: [[00458a90, 00459f65]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_CDraculaBride_process_FUN_00458a90(CDraculaBride *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_CDraculaBride_process_FUN_00458a90(CDraculaBride *param_1,float param_2)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CDemonActor_vtable *pCVar4;
  CBodyPart *pCVar5;
  uint uVar6;
  int iVar7;
  SMotion *pSVar8;
  int iVar9;
  CDraculaBride *pCVar10;
  CSkeleton *pCVar11;
  EDeathState EVar12;
  CVector3f *pCVar13;
  CDemonActor *pCVar14;
  CPathMap *pCVar15;
  CCharacter *pCVar16;
  CLocation *pCVar17;
  double dVar18;
  float fVar19;
  SDamageInfo *pSVar20;
  float fVar21;
  char local_494 [100];
  char local_430 [100];
  char local_3cc [100];
  char local_368 [100];
  SDamageInfo local_304;
  SDamageInfo local_2c8;
  SDamageInfo local_28c;
  SDamageInfo local_250;
  SDamageInfo local_214;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  CVector3f local_1cc;
  CVector3f local_1c0;
  CVector3f local_1b4;
  CVector3f local_1a8;
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
  CVector3f local_ac;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  float local_38;
  float local_34;
  int local_30;
  CDeformableModelInstance *local_2c;
  int local_28;
  CDeformableModelInstance *local_24;
  CSkeleton *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if (param_1->exploded != 0) {
    fVar19 = param_1->fade_timer - param_2;
    param_1->fade_timer = fVar19;
    fVar21 = 5.0f;
    if (0.0 <= fVar19) {
      iVar7 = 0;
      if (0 < param_1->part_count) {
        fVar19 = (float)65535;
        pCVar10 = param_1;
        do {
          pCVar5 = pCVar10->part_list[0];
          (pCVar5->base).is_transparent = 1;
          pCVar5->transparent_geometry_flag = 1;
          iVar7 = iVar7 + 1;
          local_494[0] = 'n';
          local_494[1] = -0x74;
          local_494[2] = 'E';
          local_494[3] = '\0';
          dVar18 = round((double)((param_1->fade_timer * fVar19) / fVar21));
          pCVar5->render_alpha = (int)ROUND(dVar18);
          pCVar10 = (CDraculaBride *)((pCVar10->base).base.base.actor_name + 4);
        } while (iVar7 < param_1->part_count);
      }
    }
    else {
      param_1->exploded = 0;
      (param_1->base).base.base.lifecycle_state = ACTOR_DESTROYED;
      param_1->fade_timer = 0.0;
      iVar7 = 0;
      pCVar10 = param_1;
      if (0 < param_1->part_count) {
        do {
          (pCVar10->part_list[0]->base).lifecycle_state = ACTOR_DESTROYED;
          iVar7 = iVar7 + 1;
          pCVar10 = (CDraculaBride *)((pCVar10->base).base.base.actor_name + 4);
        } while (iVar7 < param_1->part_count);
      }
    }
  }
  core_dracbrid_cpp_CDraculaBride_updateFreakySounds_FUN_0045b020(param_1,param_2);
  iVar7 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  if (iVar7 == 0) {
    return;
  }
  if (0.0 <= param_1->action_delay) {
    param_1->action_delay = param_1->action_delay - param_2;
  }
  (param_1->base).base.model.accumulated_root_motion.z = 0.0;
  (param_1->base).base.model.accumulated_root_motion.y =
       (param_1->base).base.model.accumulated_root_motion.z;
  (param_1->base).base.model.accumulated_root_motion.x =
       (param_1->base).base.model.accumulated_root_motion.y;
  local_38 = param_2 * (param_1->base).speed;
  pCVar2 = &(param_1->base).base.model;
  while (0.0 < local_38) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                      (&pCVar2->motion_controller,&local_38);
    if (iVar7 == 0x29a) {
      (param_1->base).base.damage_decal_count = 0;
      local_178.x = 0.0;
      local_178.y = 20.0;
      local_178.z = 20.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                ((CDemonActor *)param_1,&local_ac,&local_178);
      core_dracbrid_cpp_CDraculaBride_explode_FUN_00459f70(param_1,&local_ac,-1.0,1);
      fVar19 = 5.0f;
      pCVar4 = (param_1->base).base.base.vtable._ub;
      param_1->exploded = 1;
      param_1->fade_timer = fVar19;
      (*pCVar4->playAmbientSound)((CDemonActor *)param_1,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)param_1,iVar7);
    }
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&pCVar2->motion_controller);
  iVar7 = pSVar8->state_index;
  if (iVar7 == 9) {
    fVar21 = 6.0f * param_2;
    fVar19 = (param_1->base).speed;
    (param_1->base).base.turn_speed = 3.141593f * param_2 * (param_1->base).speed;
    (param_1->base).base.walk_step_speed = fVar19 * fVar21;
  }
  else {
    fVar21 = 1.570796f * param_2;
    fVar19 = (param_1->base).speed;
    (param_1->base).base.walk_step_speed = (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.turn_speed = fVar21 * fVar19;
  }
  iVar9 = core_charactr_cpp_FUN_00428c00((CCharacter *)param_1,param_2);
  if (iVar9 != 0) {
    uVar6 = (param_1->base).base.is_walking;
    if (uVar6 < 2) {
      if (uVar6 == 1) {
LAB_00458d26:
        iVar7 = 0xe;
      }
      else {
LAB_00458f79:
        iVar7 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,iVar7,1);
    }
    else {
      if (uVar6 < 3) goto LAB_00458d26;
      if (uVar6 != 3) goto LAB_00458f79;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,0,1);
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
    }
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    (param_1->base).base.model.accumulated_root_motion.y =
         (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.model.accumulated_root_motion.x =
         (param_1->base).base.model.accumulated_root_motion.y;
    goto switchD_00458fa0_default;
  }
  switch(iVar7) {
  case 0:
    (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
    if ((param_1->base).victim == (CCharacter *)0x0) {
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
      if (iVar7 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0xe,1);
      }
      break;
    }
    iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(0.25);
    if ((iVar7 != 0) &&
       (iVar7 = core_actor_cpp_isOfClass_FUN_0040d7e0
                          (&((param_1->base).victim)->base,"CHero"), iVar7 != 0)) {
      pCVar16 = (CCharacter *)0x0;
      iVar7 = 0;
      while (((int)pCVar16 < (int)0x01E57284->characters[0x6d6] &&
             ((pCVar14 = core_actor_cpp_castToClassHash_FUN_0040d890
                                   (*(CDemonActor **)
                                     ((int)0x01E57284->characters + iVar7 + 0x1b5c),
                                    g_CDraculaBrideActorType_01b4d224.name_hash),
              pCVar14 == (CDemonActor *)0x0 || (*(int *)(pCVar14[0x90].create_event + 0x38) == 0))))
            ) {
        pCVar16 = (CCharacter *)((pCVar16->base).actor_name + 1);
        iVar7 = iVar7 + 4;
      }
      if (pCVar16 == 0x01E57284->characters[0x6d6]) {
        _sprintf(local_430,"bride-%d?.wav",param_1->freaky_voice_number);
        core_dracbrid_cpp_FUN_0045ab40(param_1,local_430,1.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0x17,1);
        (*((param_1->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"hotbride-disappear.wav");
        pCVar16 = (param_1->base).victim;
        pCVar17 = &(pCVar16->base).location;
        param_1->mist_state = 1;
        if ((CLocation *)&param_1->new_pos != pCVar17) {
          (param_1->new_pos).x = (pCVar17->position).x;
          (param_1->new_pos).y = (pCVar16->base).location.position.y;
          (param_1->new_pos).z = (pCVar16->base).location.position.z;
        }
        param_1->vanish_timer = 0.0;
        break;
      }
    }
    if (param_1->action_delay < 0.0) {
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(2.0,20.0);
      param_1->action_delay = local_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,0xd,1);
      break;
    }
    goto LAB_00459978;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_28c);
    local_28c.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
    pSVar20 = &local_28c;
    local_28c.attacker = (CDemonActor *)param_1;
    local_28c.wielder = (CDemonActor *)param_1;
    fVar19 = 0.4;
    local_14 = local_28c.damage_amount;
    pCVar13 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (&local_b8,(CVector3f *)&DAT_02dd1184,
                         (param_1->base).base.model.bone_transform.bone_world_matrices +
                         _DAT_01b4d260);
    pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        ((CDemonActor *)param_1,&local_100,pCVar13);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar13,fVar19,pSVar20);
    param_1->attack_landed = 1;
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_304);
    local_304.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
    pSVar20 = &local_304;
    local_304.attacker = (CDemonActor *)param_1;
    local_304.wielder = (CDemonActor *)param_1;
    fVar19 = 0.4;
    local_14 = local_304.damage_amount;
    pCVar13 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (&local_184,(CVector3f *)&DAT_02dd1184,
                         (param_1->base).base.model.bone_transform.bone_world_matrices +
                         _DAT_01b4d260);
    pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        ((CDemonActor *)param_1,&local_4c,pCVar13);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar13,fVar19,pSVar20);
    break;
  case 7:
    if (param_1->exploded == 0) {
      pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                          (&(param_1->base).base.model,&local_d0,_DAT_01b4d27c);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                ((CDemonActor *)param_1,&local_f4,pCVar13);
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0
                (0x01C08D04,&local_f4,&(param_1->base).base.base.orient.vec,1,0);
      local_a0.y = (param_1->base).base.base.orient.vec.y;
      local_a0.z = (param_1->base).base.base.orient.vec.z;
      local_a0.x = (param_1->base).base.base.orient.vec.x + 1.5897179988972888e-314._0_4_;
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0(0x01C08D04,&local_f4,&local_a0,1,0);
    }
    break;
  case 8:
    (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
    if ((param_1->base).victim == (CCharacter *)0x0) {
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
      if (iVar7 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0xe,1);
      }
    }
    else {
      if (((param_1->base).base.hit_points < 20.0f) || (param_1->action_delay < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(param_1->base).base.model.motion_controller,0,1);
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(2.0,20.0);
        param_1->action_delay = local_14;
      }
      pCVar2 = &(param_1->base).base.model;
      if (param_1->attack_landed == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,9,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,0x19,1);
        param_1->attack_landed = 0;
      }
    }
    break;
  case 9:
    if (param_1->freaky_timer <= 0.0) {
      _sprintf(local_3cc,"bride-%d?.wav",param_1->freaky_voice_number);
      core_dracbrid_cpp_FUN_0045ab40(param_1,local_3cc,1.0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(0.2);
      if (iVar7 != 0) {
        core_dracbrid_cpp_FUN_0045ab40(param_1,local_3cc,1.0);
      }
    }
    (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
    pCVar2 = &(param_1->base).base.model;
    if ((param_1->base).victim != (CCharacter *)0x0) {
      if (0.0 <= param_1->action_delay) {
        fVar21 = 0.08726646;
        fVar19 = 0.5;
        local_58.x = 0.0;
        local_58.z = 2.0f;
        pCVar13 = &local_58;
        local_58.y = 0.0;
        pCVar16 = (param_1->base).victim;
        pCVar15 = (*((pCVar16->base).vtable._ub)->getPathMap)(&pCVar16->base);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          ((CCharacter *)param_1,&(((param_1->base).victim)->base).location.position
                           ,pCVar15,pCVar13,fVar19,fVar21);
        if (iVar7 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,8,1);
        }
        else if (iVar7 < 1) {
          pCVar16 = (param_1->base).victim;
          local_124.x = (pCVar16->base).location.position.x -
                        (param_1->base).base.base.location.position.x;
          local_124.y = (pCVar16->base).location.position.y -
                        (param_1->base).base.base.location.position.y;
          local_124.z = (pCVar16->base).location.position.z -
                        (param_1->base).base.base.location.position.z;
          if (&local_7c != &local_124) {
            local_7c.x = local_124.x;
            local_7c.y = local_124.y;
            local_7c.z = local_124.z;
          }
          if ((float)10 <
              SQRT(local_7c.z * local_7c.z + local_7c.x * local_7c.x + local_7c.y * local_7c.y)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&local_70,&local_7c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (local_70.y - (param_1->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.39269908168750001) {
              local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-0.7853982,0.7853982);
              (param_1->base).base.base.orient.vec.y =
                   local_14 + (param_1->base).base.base.orient.vec.y;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).base.model.motion_controller,3,1);
            }
          }
        }
        else if ((param_1->base).attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,2,1);
          (*((param_1->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"hotbride-bite?.wav");
          (param_1->base).attack_cooldown = 1.0;
        }
      }
      else {
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(2.0,20.0);
        param_1->action_delay = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,0,1);
      }
      break;
    }
    iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
    if (iVar7 == 0) break;
LAB_00459978:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&(param_1->base).base.model.motion_controller,0xe,1);
    break;
  case 0xc:
    iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    iVar7 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x104))(iVar7);
    if ((iVar7 == 0) &&
       (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                          (0x01C03A10,param_1->rise_event), iVar7 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,0xd,1);
    }
    break;
  case 0xe:
    if (param_1->freaky_timer <= 0.0) {
      _sprintf(local_368,"bride-%d?.wav",param_1->freaky_voice_number);
      core_dracbrid_cpp_FUN_0045ab40(param_1,local_368,1.0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(0.2);
      if (iVar7 != 0) {
        core_dracbrid_cpp_FUN_0045ab40(param_1,local_368,1.0);
      }
    }
    (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
    fVar19 = 1.5f;
    pCVar2 = &(param_1->base).base.model;
    if ((param_1->base).victim == (CCharacter *)0x0) {
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(&param_1->base,param_2);
      if (iVar7 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,0,1);
      }
    }
    else {
      local_34 = 1.5f;
      (param_1->base).base.model.accumulated_root_motion.z = 0.0;
      (param_1->base).base.model.accumulated_root_motion.y =
           (param_1->base).base.model.accumulated_root_motion.z;
      (param_1->base).base.model.accumulated_root_motion.x =
           (param_1->base).base.model.accumulated_root_motion.y;
      local_1a8.x = 0.0;
      local_1a8.y = 0.0;
      fVar21 = 0.08726646;
      local_1a8.z = fVar19;
      pCVar13 = &local_1a8;
      fVar19 = 0.5;
      pCVar16 = (param_1->base).victim;
      pCVar15 = (*((pCVar16->base).vtable._ub)->getPathMap)(&pCVar16->base);
      iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        ((CCharacter *)param_1,&(((param_1->base).victim)->base).location.position,
                         pCVar15,pCVar13,fVar19,fVar21);
      if (iVar7 < 0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,0,1);
      }
      else if ((0 < iVar7) && ((param_1->base).attack_cooldown <= 0.0)) {
        iVar7 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&pCVar2->motion_controller,0x13,1);
        }
        if (iVar7 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0x14,1);
        }
        if (iVar7 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (&(param_1->base).base.model.motion_controller,0x15,1);
          (*((param_1->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"hotbride-swipe?.wav");
        }
        (param_1->base).attack_cooldown = 1.0;
      }
    }
    break;
  case 0xf:
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->rise_event);
    if (iVar7 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_00459f4d_caseD_10;
  case 0x11:
    if (((param_1->base).pool_me != 0) ||
       ((param_1->base).base.base.standing_platform != (CPlatform *)0x0)) break;
    pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                        (&(param_1->base).base.model,&local_1b4,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)param_1,&local_1cc,pCVar13);
    core_gore_cpp_CGore_createBloodPool_FUN_004b0480((CGore *)INT_005b96c4,&local_1cc,0);
    goto switchD_00459f4d_caseD_10;
  case 0x12:
    iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    iVar7 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x104))(iVar7);
    if ((iVar7 == 0) &&
       (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                          (0x01C03A10,param_1->rise_event), iVar7 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_2c8);
    local_2c8.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
    pSVar20 = &local_2c8;
    local_2c8.attacker = (CDemonActor *)param_1;
    local_2c8.wielder = (CDemonActor *)param_1;
    fVar19 = 0.4;
    local_14 = local_2c8.damage_amount;
    pCVar13 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (&local_13c,(CVector3f *)&DAT_02dd1184,
                         (param_1->base).base.model.bone_transform.bone_world_matrices +
                         _DAT_01b4d260);
    pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        ((CDemonActor *)param_1,&local_94,pCVar13);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar13,fVar19,pSVar20);
    param_1->attack_landed = 1;
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_214);
    local_214.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
    pSVar20 = &local_214;
    local_214.attacker = (CDemonActor *)param_1;
    local_214.wielder = (CDemonActor *)param_1;
    fVar19 = 0.4;
    local_14 = local_214.damage_amount;
    pCVar13 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (&local_88,(CVector3f *)&DAT_02dd1184,
                         (param_1->base).base.model.bone_transform.bone_world_matrices +
                         _DAT_01b4d260);
    pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        ((CDemonActor *)param_1,&local_16c,pCVar13);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar13,fVar19,pSVar20);
    param_1->attack_landed = 1;
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_250);
    local_250.damage_amount = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(7.0,15.0);
    pSVar20 = &local_250;
    local_250.attacker = (CDemonActor *)param_1;
    local_250.wielder = (CDemonActor *)param_1;
    fVar19 = 0.4;
    local_14 = local_250.damage_amount;
    pCVar13 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (&local_1c0,(CVector3f *)&DAT_02dd1184,
                         (param_1->base).base.model.bone_transform.bone_world_matrices +
                         _DAT_01b4d268);
    pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        ((CDemonActor *)param_1,&local_154,pCVar13);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(&param_1->base,pCVar13,fVar19,pSVar20);
    break;
  case 0x17:
    if (param_1->freaky_timer <= 0.0) {
      _sprintf(local_494,"bride-%d?.wav",param_1->freaky_voice_number);
      core_dracbrid_cpp_FUN_0045ab40(param_1,local_494,1.0);
      iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(0.2);
      if (iVar7 != 0) {
        core_dracbrid_cpp_FUN_0045ab40(param_1,local_494,1.0);
      }
    }
    switch(param_1->mist_state) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,0,1);
      break;
    case 1:
      fVar19 = param_1->vanish_timer + param_2;
      param_1->vanish_timer = fVar19;
      if (1.0f < fVar19) {
        param_1->mist_state = 2;
        param_1->vanish_timer = 1.0f;
      }
      local_2c = &(param_1->base).base.model;
      iVar7 = 0;
      local_148.x = 0.0;
      local_148.y = 3.0;
      local_148.z = 0.0;
      pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(local_2c);
      if (0 < pCVar11->bone_count) {
        local_24 = local_2c;
        do {
          pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                              (local_24,&local_64,iVar7);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)param_1,&local_118,pCVar13);
          iVar7 = iVar7 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                    (0x01C08D04,&local_118,0.5,&local_148,0xffff);
        } while (iVar7 < pCVar11->bone_count);
      }
      break;
    case 2:
      local_30 = 1;
      local_1c = 0;
      for (local_18 = 0; fVar19 = 1.0f, local_18 < (int)0x01E57284->actors[0x6d6];
          local_18 = local_18 + 1) {
        pCVar10 = *(CDraculaBride **)((int)0x01E57284->actors + local_1c + 0x1b5c);
        if (((pCVar10 != (CDraculaBride *)0x0) && (pCVar10 != param_1)) &&
           (EVar12 = (*(((pCVar10->base).base.base.vtable._uc)->_uc).getDeathState)
                               ((CCharacter *)pCVar10), (int)EVar12 < 1)) {
          local_19c = (pCVar10->base).base.base.location.position.x - (param_1->new_pos).x;
          local_198 = (pCVar10->base).base.base.location.position.y - (param_1->new_pos).y;
          local_194 = (pCVar10->base).base.base.location.position.z - (param_1->new_pos).z;
          if (SQRT(local_194 * local_194 + local_19c * local_19c + local_198 * local_198) <
              (float)5) goto switchD_00458fa0_default;
        }
        local_1c = local_1c + 4;
      }
      if (local_30 != 0) {
        param_1->mist_state = 3;
        pCVar17 = &(param_1->base).base.base.location;
        param_1->vanish_timer = fVar19;
        (pCVar17->position).x = (param_1->new_pos).x;
        (param_1->base).base.base.location.position.y = (param_1->new_pos).y;
        (param_1->base).base.base.location.position.z = (param_1->new_pos).z;
        pCVar16 = (param_1->base).victim;
        if (pCVar16 != (CCharacter *)0x0) {
          local_dc.x = (pCVar16->base).location.position.x - (pCVar17->position).x;
          local_dc.y = (pCVar16->base).location.position.y -
                       (param_1->base).base.base.location.position.y;
          local_dc.z = (pCVar16->base).location.position.z -
                       (param_1->base).base.base.location.position.z;
          pUVar1 = &(param_1->base).base.base.orient;
          pCVar13 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                              (&local_190,&local_dc);
          if ((CVector3f *)pUVar1 != pCVar13) {
            (pUVar1->vec).x = pCVar13->x;
            (param_1->base).base.base.orient.vec.y = pCVar13->y;
            (param_1->base).base.base.orient.vec.z = pCVar13->z;
          }
          (param_1->base).base.base.orient.vec.z = 0.0;
          (param_1->base).base.base.orient.vec.x = 0.0;
        }
        (*((param_1->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)param_1,"hotbride-disappear.wav");
      }
      break;
    case 3:
      local_c4.x = 0.0;
      local_c4.z = 0.0;
      pCVar2 = &(param_1->base).base.model;
      iVar7 = 0;
      local_c4.y = 3.0;
      local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar2);
      if (0 < local_20->bone_count) {
        do {
          pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                              (pCVar2,&local_10c,iVar7);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)param_1,&local_130,pCVar13);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                    (0x01C08D04,&local_130,0.5,&local_c4,0xffff);
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_20->bone_count);
      }
      fVar19 = param_1->vanish_timer - param_2;
      param_1->vanish_timer = fVar19;
      if (fVar19 < 0.0) {
        param_1->vanish_timer = 0.0;
        param_1->mist_state = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&pCVar2->motion_controller,0xe,1);
        local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(2.0,20.0);
        param_1->action_delay = local_14;
      }
    }
    break;
  case 0x1a:
    iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->rise_event);
    if (iVar7 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&(param_1->base).base.model.motion_controller,0,1);
    }
  }
switchD_00458fa0_default:
  if (0.0 < (param_1->base).attack_cooldown) {
    (param_1->base).attack_cooldown = (param_1->base).attack_cooldown - param_2;
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&(param_1->base).base.model.motion_controller);
  local_28 = pSVar8->state_index;
  if ((((local_28 != 0x11) && (local_28 != 0x10)) && (local_28 != 0xf)) ||
     ((param_1->base).base.base.standing_platform != (CPlatform *)0x0)) {
    if (local_28 == 3) {
      (param_1->base).base.model.accumulated_root_motion.z =
           (param_1->base).base.model.accumulated_root_motion.z * (float)2;
    }
    pCVar16 = (param_1->base).victim;
    if ((pCVar16 != (CCharacter *)0x0) &&
       (pCVar10 = (CDraculaBride *)(*(((pCVar16->base).vtable._uc)->_uc).getGrabber)(pCVar16),
       pCVar10 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&((param_1->base).victim)->base);
    }
    (param_1->base).base.velocity.y =
         (param_1->base).base.velocity.y - param_2 * (float)32;
    local_160 = (param_1->base).base.velocity.x * param_2;
    local_15c = (param_1->base).base.velocity.y * param_2;
    pCVar13 = &(param_1->base).base.position_delta;
    local_158 = param_2 * (param_1->base).base.velocity.z;
    pCVar3 = &(param_1->base).base.model.accumulated_root_motion;
    local_1d8 = local_160 + pCVar13->x;
    local_1d4 = local_15c + (param_1->base).base.position_delta.y;
    local_1d0 = local_158 + (param_1->base).base.position_delta.z;
    local_e8.x = local_1d8 + pCVar3->x;
    local_e8.y = local_1d4 + (param_1->base).base.model.accumulated_root_motion.y;
    local_e8.z = local_1d0 + (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.position_delta.z = 0.0;
    (param_1->base).base.position_delta.y = (param_1->base).base.position_delta.z;
    pCVar13->x = (param_1->base).base.position_delta.y;
    (param_1->base).base.model.accumulated_root_motion.z = 0.0;
    fVar19 = (param_1->base).base.model.accumulated_root_motion.z;
    (param_1->base).base.model.accumulated_root_motion.y = fVar19;
    pCVar3->x = fVar19;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050((CCharacter *)param_1,&local_e8);
  }
  if (local_28 != 0x17) {
    param_1->mist_state = 0;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
            (&(param_1->base).base.model);
  core_charactr_cpp_FUN_0042a150((CCharacter *)param_1,param_2);
  return;
switchD_00459f4d_caseD_10:
  (param_1->base).pool_me = 1;
  goto switchD_00458fa0_default;
}
