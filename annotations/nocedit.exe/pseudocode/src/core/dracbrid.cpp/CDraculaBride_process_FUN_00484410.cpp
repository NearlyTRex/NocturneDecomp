// Name: core_dracbrid.cpp_CDraculaBride_process_FUN_00484410
// Address: 00484410
// Address Range: [[00484410, 004858e5]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_process_FUN_00484410(CDraculaBride *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Type propagation algorithm not settling */

void __cdecl core_dracbrid_cpp_CDraculaBride_process_FUN_00484410(CDraculaBride *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar5;
  CDemonActor *pCVar7;
  CCharacter *pCVar8;
  float fVar9;
  int iVar7;
  int iVar10;
  SMotion *pSVar8;
  int iVar9;
  SMotion *pSVar11;
  CDraculaBride *pCVar10;
  CSkeleton *pCVar11;
  UOrientationVector *pUVar12;
  CVector3f *pCVar12;
  CVector3f *pCVar13;
  EDeathState EVar14;
  EDeathState EVar13;
  CPathMap *path_map;
  CDemonActor *pCVar14;
  CPathMap *pCVar15;
  CDraculaBride *pCVar17;
  int iVar18;
  CLocation *pCVar16;
  float fVar20;
  SDamageInfo *pSVar21;
  float fVar22;
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
  uint uVar5;
  CCharacter *pCVar6;
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CVector3f *pCVar3;
  CDemonActor_vtable *pCVar4;
  float fVar17;
  SDamageInfo *pSVar18;
  float fVar19;
  
  if (this_ptr->exploded != 0) {
    fVar20 = this_ptr->fade_timer - delta_time;
    this_ptr->fade_timer = fVar20;
    fVar22 = 5.0f;
    if (0.0 <= fVar20) {
      iVar10 = 0;
      if (0 < this_ptr->part_count) {
        fVar20 = (float)65535;
        pCVar17 = this_ptr;
        do {
          pCVar7 = pCVar17->part_list[0];
          pCVar7->is_transparent = 1;
          pCVar7[9].create_event[0x24] = '\x01';
          pCVar7[9].create_event[0x25] = '\0';
          pCVar7[9].create_event[0x26] = '\0';
          pCVar7[9].create_event[0x27] = '\0';
          iVar10 = iVar10 + 1;
          *(int *)(pCVar7[9].create_event + 0x30) =
               (int)ROUND(ROUND((this_ptr->fade_timer * fVar20) / fVar22));
          pCVar17 = (CDraculaBride *)((pCVar17->base).base.base.actor_name + 4);
        } while (iVar10 < this_ptr->part_count);
      }
    }
    else {
      this_ptr->exploded = 0;
      (this_ptr->base).base.base.lifecycle_state = ACTOR_DESTROYED;
      this_ptr->fade_timer = 0.0;
      iVar7 = 0;
      pCVar17 = this_ptr;
      if (0 < this_ptr->part_count) {
        do {
          pCVar17->part_list[0]->lifecycle_state = ACTOR_DESTROYED;
          iVar7 = iVar7 + 1;
          pCVar17 = (CDraculaBride *)((pCVar17->base).base.base.actor_name + 4);
        } while (iVar7 < this_ptr->part_count);
      }
    }
  }
  core_dracbrid_cpp_CDraculaBride_updateFreakySounds_FUN_004869a0(this_ptr,delta_time);
  iVar10 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar10 == 0) {
    return;
  }
  if (0.0 <= this_ptr->action_delay) {
    this_ptr->action_delay = this_ptr->action_delay - delta_time;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_38 = delta_time * (this_ptr->base).speed;
  pCVar5 = &(this_ptr->base).base.model;
  while (0.0 < local_38) {
    iVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                       (&pCVar5->motion_controller,&local_38);
    if (iVar10 == 0x29a) {
      (this_ptr->base).base.damage_decal_count = 0;
      local_178.x = 0.0;
      local_178.y = 20.0;
      local_178.z = 20.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                ((CDemonActor *)this_ptr,&local_ac,&local_178);
      core_dracbrid_cpp_CDraculaBride_explode_FUN_004858f0(this_ptr,&local_ac,-1.0,1);
      fVar20 = 5.0f;
      pCVar4 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->exploded = 1;
      this_ptr->fade_timer = fVar20;
      (*pCVar4->playAmbientSound)((CDemonActor *)this_ptr,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar10);
    }
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar5->motion_controller);
  iVar10 = pSVar8->state_index;
  if (iVar10 == 9) {
    fVar22 = 6.0f * delta_time;
    fVar20 = (this_ptr->base).speed;
    (this_ptr->base).base.turn_speed = 3.141593f * delta_time * (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = fVar20 * fVar22;
  }
  else {
    fVar22 = 1.570796f * delta_time;
    fVar20 = (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.turn_speed = fVar22 * fVar20;
  }
  iVar9 = core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar9 != 0) {
    uVar5 = (this_ptr->base).base.is_walking;
    if (uVar5 < 2) {
      if (uVar5 == 1) {
LAB_004846a6:
        iVar10 = 0xe;
      }
      else {
LAB_004848f9:
        iVar10 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,iVar10,1);
    }
    else {
      if (uVar5 < 3) goto LAB_004846a6;
      if (uVar5 != 3) goto LAB_004848f9;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0,1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    (this_ptr->base).base.model.accumulated_root_motion.y =
         (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.x =
         (this_ptr->base).base.model.accumulated_root_motion.y;
    goto switchD_004858cd_caseD_1;
  }
  switch(iVar10) {
  case 0:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
      if (iVar10 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0xe,1);
      }
      break;
    }
    iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
    if ((iVar10 != 0) &&
       (iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0
                           (&((this_ptr->base).victim)->base,"CHero"), iVar10 != 0)) {
      iVar18 = 0;
      iVar10 = 0;
      while ((iVar18 < g_CDemonSetPtr->enemy_count &&
             ((pCVar14 = core_actor_cpp_castToClassHash_FUN_0040c790
                                   (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar10),
                                    g_CDraculaBrideClassInfo.name_hash),
              pCVar14 == (CDemonActor *)0x0 || (*(int *)pCVar14[0x8e].create_event == 0))))) {
        iVar18 = iVar18 + 1;
        iVar10 = iVar10 + 4;
      }
      if (iVar18 == g_CDemonSetPtr->enemy_count) {
        _sprintf
                  (local_430,"bride-%d?.wav",this_ptr->freaky_voice_number);
        core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_004864c0(this_ptr,local_430,1.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0x17,1);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"hotbride-disappear.wav");
        pCVar8 = (this_ptr->base).victim;
        pCVar16 = &(pCVar8->base).location;
        this_ptr->mist_state = 1;
        if ((CLocation *)&this_ptr->new_pos != pCVar16) {
          (this_ptr->new_pos).x = (pCVar16->position).x;
          (this_ptr->new_pos).y = (pCVar8->base).location.position.y;
          (this_ptr->new_pos).z = (pCVar8->base).location.position.z;
        }
        this_ptr->vanish_timer = 0.0;
        break;
      }
    }
    if (this_ptr->action_delay < 0.0) {
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
      this_ptr->action_delay = local_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0xd,1);
      break;
    }
    goto LAB_004852f8;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_28c);
    local_28c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    pSVar21 = &local_28c;
    local_28c.attacker = (CDemonActor *)this_ptr;
    local_28c.wielder = (CDemonActor *)this_ptr;
    fVar20 = 0.4;
    local_14 = local_28c.damage_amount;
    pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_b8,&g_ZeroVector.f,
                         (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                         g_DraculaBrideIndices[0]);
    pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_100,pCVar13);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar13,fVar20,pSVar21);
    this_ptr->attack_landed = 1;
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_304);
    local_304.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    pSVar21 = &local_304;
    local_304.attacker = (CDemonActor *)this_ptr;
    local_304.wielder = (CDemonActor *)this_ptr;
    fVar20 = 0.4;
    local_14 = local_304.damage_amount;
    pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_184,&g_ZeroVector.f,
                         (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                         g_DraculaBrideIndices[0]);
    pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_4c,pCVar13);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar13,fVar20,pSVar21);
    break;
  case 7:
    if (this_ptr->exploded == 0) {
      pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                          (&(this_ptr->base).base.model,&local_d0,g_DraculaBrideIndices[7]);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_f4,pCVar13);
      core_fire_cpp_CFireEffect_createGunFlames_FUN_004c8ef0
                (g_CFireEffectPtr,&local_f4,&(this_ptr->base).base.base.orient.vec,1,0);
      local_a0.y = (this_ptr->base).base.base.orient.vec.y;
      local_a0.z = (this_ptr->base).base.base.orient.vec.z;
      local_a0.x = (this_ptr->base).base.base.orient.vec.x + -1.570796f;
      core_fire_cpp_CFireEffect_createGunFlames_FUN_004c8ef0
                (g_CFireEffectPtr,&local_f4,&local_a0,1,0);
    }
    break;
  case 8:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
      if (iVar10 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0xe,1);
      }
    }
    else {
      if (((this_ptr->base).base.hit_points < 20.0f) || (this_ptr->action_delay < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        this_ptr->action_delay = local_14;
      }
      pCVar5 = &(this_ptr->base).base.model;
      if (this_ptr->attack_landed == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar5->motion_controller,9,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar5->motion_controller,0x19,1);
        this_ptr->attack_landed = 0;
      }
    }
    break;
  case 9:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf
                (local_3cc,"bride-%d?.wav",this_ptr->freaky_voice_number);
      core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_004864c0(this_ptr,local_3cc,1.0);
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar10 != 0) {
        core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_004864c0(this_ptr,local_3cc,1.0);
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    pCVar5 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim != (CCharacter *)0x0) {
      if (0.0 <= this_ptr->action_delay) {
        fVar22 = 0.08726646;
        fVar20 = 0.5;
        local_58.x = 0.0;
        local_58.z = 2.0f;
        pCVar13 = &local_58;
        local_58.y = 0.0;
        pCVar8 = (this_ptr->base).victim;
        path_map = (*((pCVar8->base).vtable._ub)->getPathMap)(&pCVar8->base);
        iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                           ((CCharacter *)this_ptr,
                            &(((this_ptr->base).victim)->base).location.position,path_map,pCVar13,
                            fVar20,fVar22);
        if (iVar10 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar5->motion_controller,8,1);
        }
        else if (iVar10 < 1) {
          pCVar8 = (this_ptr->base).victim;
          local_124.x = (pCVar8->base).location.position.x -
                        (this_ptr->base).base.base.location.position.x;
          local_124.y = (pCVar8->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
          local_124.z = (pCVar8->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
          if (&local_7c != &local_124) {
            local_7c.x = local_124.x;
            local_7c.y = local_124.y;
            local_7c.z = local_124.z;
          }
          if ((float)10 <
              SQRT(local_7c.z * local_7c.z + local_7c.x * local_7c.x + local_7c.y * local_7c.y)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_70,&local_7c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_70.y - (this_ptr->base).base.base.orient.vec.y);
            if (ABS(local_14) < (float)0.39269908168750001) {
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
              (this_ptr->base).base.base.orient.vec.y =
                   local_14 + (this_ptr->base).base.base.orient.vec.y;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,3,1);
            }
          }
        }
        else if ((this_ptr->base).attack_cooldown <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar5->motion_controller,2,1);
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hotbride-bite?.wav");
          (this_ptr->base).attack_cooldown = 1.0;
        }
      }
      else {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        this_ptr->action_delay = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar5->motion_controller,0,1);
      }
      break;
    }
    iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
    if (iVar10 == 0) break;
LAB_004852f8:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0xe,1);
    break;
  case 0xc:
    EVar14 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                       (&g_HeroActors[g_LocalHeroIndex]->base);
    if ((EVar14 == DEATH_STATE_ALIVE) &&
       (iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                           (g_CEventListPtr,this_ptr->rise_event), iVar10 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0xd,1);
    }
    break;
  case 0xe:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf
                (local_368,"bride-%d?.wav",this_ptr->freaky_voice_number);
      core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_004864c0(this_ptr,local_368,1.0);
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar10 != 0) {
        core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_004864c0(this_ptr,local_368,1.0);
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
    fVar20 = 1.5f;
    pCVar5 = &(this_ptr->base).base.model;
    if ((this_ptr->base).victim == (CCharacter *)0x0) {
      iVar10 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a9fd0(&this_ptr->base,delta_time);
      if (iVar10 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar5->motion_controller,0,1);
      }
    }
    else {
      local_34 = 1.5f;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      local_1a8.x = 0.0;
      local_1a8.y = 0.0;
      fVar19 = 0.08726646;
      local_1a8.z = fVar20;
      pCVar13 = &local_1a8;
      fVar20 = 0.5;
      pCVar8 = (this_ptr->base).victim;
      pCVar15 = (*((pCVar8->base).vtable._ub)->getPathMap)(&pCVar8->base);
      iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                         ((CCharacter *)this_ptr,
                          &(((this_ptr->base).victim)->base).location.position,pCVar15,pCVar13,
                          fVar20,fVar19);
      if (iVar10 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar5->motion_controller,0,1);
      }
      else if ((0 < iVar10) && ((this_ptr->base).attack_cooldown <= 0.0)) {
        iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
        if (iVar10 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar5->motion_controller,0x13,1);
        }
        if (iVar10 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0x14,1);
        }
        if (iVar10 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0x15,1);
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hotbride-swipe?.wav");
        }
        (this_ptr->base).attack_cooldown = 1.0;
      }
    }
    break;
  case 0xf:
    iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,this_ptr->rise_event);
    if (iVar10 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_004858cd_caseD_10;
  case 0x11:
    if (((this_ptr->base).pool_me != 0) ||
       ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) break;
    pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                        (&(this_ptr->base).base.model,&local_1b4,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_1cc,pCVar13);
    core_gore_cpp_CGore_createBloodPool_FUN_004ede30(g_CGorePtr,&local_1cc,0);
    goto switchD_004858cd_caseD_10;
  case 0x12:
    EVar13 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).getDeathState)
                       (&g_HeroActors[g_LocalHeroIndex]->base);
    if ((EVar13 == DEATH_STATE_ALIVE) &&
       (iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                           (g_CEventListPtr,this_ptr->rise_event), iVar10 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2c8);
    local_2c8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    pSVar21 = &local_2c8;
    local_2c8.attacker = (CDemonActor *)this_ptr;
    local_2c8.wielder = (CDemonActor *)this_ptr;
    fVar20 = 0.4;
    local_14 = local_2c8.damage_amount;
    pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_13c,&g_ZeroVector.f,
                         (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                         g_DraculaBrideIndices[0]);
    pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_94,pCVar13);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar13,fVar20,pSVar21);
    this_ptr->attack_landed = 1;
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_214);
    local_214.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    pSVar21 = &local_214;
    local_214.attacker = (CDemonActor *)this_ptr;
    local_214.wielder = (CDemonActor *)this_ptr;
    fVar20 = 0.4;
    local_14 = local_214.damage_amount;
    pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_88,&g_ZeroVector.f,
                         (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                         g_DraculaBrideIndices[0]);
    pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_16c,pCVar13);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar13,fVar20,pSVar21);
    this_ptr->attack_landed = 1;
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_250);
    local_250.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    pSVar18 = &local_250;
    local_250.attacker = (CDemonActor *)this_ptr;
    local_250.wielder = (CDemonActor *)this_ptr;
    fVar17 = 0.4;
    local_14 = local_250.damage_amount;
    pCVar12 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_1c0,&g_ZeroVector.f,
                         (this_ptr->base).base.model.bone_transform.bone_world_matrices +
                         g_DraculaBrideIndices[2]);
    pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)this_ptr,&local_154,pCVar12);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(&this_ptr->base,pCVar13,fVar17,pSVar18);
    break;
  case 0x17:
    if (this_ptr->freaky_timer <= 0.0) {
      _sprintf
                (local_494,"bride-%d?.wav",this_ptr->freaky_voice_number);
      core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_004864c0(this_ptr,local_494,1.0);
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar10 != 0) {
        core_dracbrid_cpp_CDraculaBride_startFreakySound_FUN_004864c0(this_ptr,local_494,1.0);
      }
    }
    switch(this_ptr->mist_state) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0,1);
      break;
    case 1:
      fVar20 = this_ptr->vanish_timer + delta_time;
      this_ptr->vanish_timer = fVar20;
      if (1.0f < fVar20) {
        this_ptr->mist_state = 2;
        this_ptr->vanish_timer = 1.0f;
      }
      local_2c = &(this_ptr->base).base.model;
      iVar10 = 0;
      local_148.x = 0.0;
      local_148.y = 3.0;
      local_148.z = 0.0;
      pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_2c);
      if (0 < pCVar11->bone_count) {
        local_24 = local_2c;
        do {
          pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (local_24,&local_64,iVar10);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_118,pCVar13);
          iVar10 = iVar10 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&local_118,0.5,&local_148,0xffff);
        } while (iVar10 < pCVar11->bone_count);
      }
      break;
    case 2:
      local_30 = 1;
      local_1c = 0;
      for (local_18 = 0; fVar20 = 1.0f, local_18 < g_CDemonSetPtr->character_count;
          local_18 = local_18 + 1) {
        pCVar17 = *(CDraculaBride **)((int)g_CDemonSetPtr->characters + local_1c);
        if ((((pCVar17 != (CDraculaBride *)0x0) && (pCVar17 != this_ptr)) &&
            (EVar14 = (*(((pCVar17->base).base.base.vtable._uc)->_uc).getDeathState)
                                ((CCharacter *)pCVar17), (int)EVar14 < 1)) &&
           (fVar20 = (pCVar17->base).base.base.location.position.x - (this_ptr->new_pos).x,
           fVar22 = (pCVar17->base).base.base.location.position.y - (this_ptr->new_pos).y,
           fVar9 = (pCVar17->base).base.base.location.position.z - (this_ptr->new_pos).z,
           SQRT(fVar9 * fVar9 + fVar20 * fVar20 + fVar22 * fVar22) < (float)5))
        goto switchD_004858cd_caseD_1;
        local_1c = local_1c + 4;
      }
      if (local_30 != 0) {
        this_ptr->mist_state = 3;
        pCVar1 = &(this_ptr->base).base.base.location;
        this_ptr->vanish_timer = fVar20;
        (pCVar1->position).x = (this_ptr->new_pos).x;
        (this_ptr->base).base.base.location.position.y = (this_ptr->new_pos).y;
        (this_ptr->base).base.base.location.position.z = (this_ptr->new_pos).z;
        pCVar8 = (this_ptr->base).victim;
        if (pCVar8 != (CCharacter *)0x0) {
          local_dc.x = (pCVar8->base).location.position.x - (pCVar1->position).x;
          local_dc.y = (pCVar8->base).location.position.y -
                       (this_ptr->base).base.base.location.position.y;
          local_dc.z = (pCVar8->base).location.position.z -
                       (this_ptr->base).base.base.location.position.z;
          pUVar1 = &(this_ptr->base).base.base.orient;
          pUVar12 = (UOrientationVector *)
                    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_190,&local_dc);
          if (pUVar1 != pUVar12) {
            (pUVar1->vec).x = (pUVar12->vec).x;
            (this_ptr->base).base.base.orient.vec.y = (pUVar12->vec).y;
            (this_ptr->base).base.base.orient.vec.z = (pUVar12->vec).z;
          }
          (this_ptr->base).base.base.orient.vec.z = 0.0;
          (this_ptr->base).base.base.orient.vec.x = 0.0;
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"hotbride-disappear.wav");
      }
      break;
    case 3:
      local_c4.x = 0.0;
      local_c4.z = 0.0;
      pCVar5 = &(this_ptr->base).base.model;
      iVar10 = 0;
      local_c4.y = 3.0;
      local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar5);
      if (0 < local_20->bone_count) {
        do {
          pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (pCVar5,&local_10c,iVar10);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_130,pCVar13);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&local_130,0.5,&local_c4,0xffff);
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_20->bone_count);
      }
      fVar20 = this_ptr->vanish_timer - delta_time;
      this_ptr->vanish_timer = fVar20;
      if (fVar20 < 0.0) {
        this_ptr->vanish_timer = 0.0;
        this_ptr->mist_state = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar5->motion_controller,0xe,1);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        this_ptr->action_delay = local_14;
      }
    }
    break;
  case 0x1a:
    iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,this_ptr->rise_event);
    if (iVar10 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0,1);
    }
  }
switchD_004858cd_caseD_1:
  if (0.0 < (this_ptr->base).attack_cooldown) {
    (this_ptr->base).attack_cooldown = (this_ptr->base).attack_cooldown - delta_time;
  }
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base).base.model.motion_controller);
  local_28 = pSVar11->state_index;
  if ((((local_28 != 0x11) && (local_28 != 0x10)) && (local_28 != 0xf)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    if (local_28 == 3) {
      (this_ptr->base).base.model.accumulated_root_motion.z =
           (this_ptr->base).base.model.accumulated_root_motion.z * (float)2;
    }
    pCVar6 = (this_ptr->base).victim;
    if ((pCVar6 != (CCharacter *)0x0) &&
       (pCVar10 = (CDraculaBride *)(*(((pCVar6->base).vtable._uc)->_uc).getGrabber)(pCVar6),
       pCVar10 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,&((this_ptr->base).victim)->base);
    }
    (this_ptr->base).base.velocity.y =
         (this_ptr->base).base.velocity.y - delta_time * (float)32;
    pCVar13 = &(this_ptr->base).base.position_delta;
    pCVar3 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_e8.x = (this_ptr->base).base.velocity.x * delta_time + pCVar13->x + pCVar3->x;
    local_e8.y = (this_ptr->base).base.velocity.y * delta_time +
                 (this_ptr->base).base.position_delta.y +
                 (this_ptr->base).base.model.accumulated_root_motion.y;
    local_e8.z = delta_time * (this_ptr->base).base.velocity.z +
                 (this_ptr->base).base.position_delta.z +
                 (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.position_delta.z = 0.0;
    (this_ptr->base).base.position_delta.y = (this_ptr->base).base.position_delta.z;
    pCVar13->x = (this_ptr->base).base.position_delta.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar20 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar20;
    pCVar3->x = fVar20;
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00428f40((CCharacter *)this_ptr,&local_e8);
  }
  if (local_28 != 0x17) {
    this_ptr->mist_state = 0;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  return;
switchD_004858cd_caseD_10:
  (this_ptr->base).pool_me = 1;
  goto switchD_004858cd_caseD_1;
}
