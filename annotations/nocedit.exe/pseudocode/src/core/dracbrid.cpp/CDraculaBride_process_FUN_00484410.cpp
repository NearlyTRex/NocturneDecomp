// Name: core_dracbrid.cpp_CDraculaBride_process_FUN_00484410
// Address: 00484410
// Address Range: [[00484410, 004858e5]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_process_FUN_00484410(CDraculaBride *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl
core_dracbrid_cpp_CDraculaBride_process_FUN_00484410(CDraculaBride *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  CDeformableModelInstance *pCVar3;
  CVector3f *pCVar4;
  float fVar5;
  CDemonActor_vtable *pCVar6;
  uint uVar7;
  float fVar8;
  int iVar9;
  SMotion *pSVar10;
  int iVar11;
  CDraculaBride *pCVar12;
  CSkeleton *pCVar13;
  CVector3f *pCVar14;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  CDemonActor *pCVar15;
  int extraout_EAX_02;
  float10 fVar16;
  float10 fVar17;
  double dVar18;
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
  uint local_1a8;
  uint local_1a4;
  float local_1a0;
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
  float local_e8;
  float local_e4;
  float local_e0;
  CVector3f local_dc;
  CVector3f local_d0;
  CVector3f local_c4;
  CVector3f local_b8;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  uint local_58;
  uint local_54;
  float local_50;
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
  
  if (this_ptr->exploded != 0) {
    fVar5 = this_ptr->fade_timer - delta_time;
    this_ptr->fade_timer = fVar5;
    if (0.0 <= fVar5) {
      iVar9 = 0;
      if (0 < this_ptr->part_count) {
        fVar16 = (float10)5.0f;
        fVar17 = (float10)65535;
        pCVar12 = this_ptr;
        do {
          iVar11 = *(int *)pCVar12->unk4;
          *(uint *)(iVar11 + 0xfc) = 1;
          *(uint *)(iVar11 + 0xcb4) = 1;
          iVar9 = iVar9 + 1;
          dVar18 = round
                             ((double)(((float10)this_ptr->fade_timer * fVar17) / fVar16));
          *(int *)(iVar11 + 0xcc0) = (int)ROUND(dVar18);
          pCVar12 = (CDraculaBride *)((pCVar12->base).base.base.actor_name + 4);
        } while (iVar9 < this_ptr->part_count);
      }
    }
    else {
      this_ptr->exploded = 0;
      (this_ptr->base).base.base.was_created = 2;
      this_ptr->fade_timer = 0.0;
      iVar9 = 0;
      pCVar12 = this_ptr;
      if (0 < this_ptr->part_count) {
        do {
          *(uint *)(*(int *)pCVar12->unk4 + 0x70) = 2;
          iVar9 = iVar9 + 1;
          pCVar12 = (CDraculaBride *)((pCVar12->base).base.base.actor_name + 4);
        } while (iVar9 < this_ptr->part_count);
      }
    }
  }
  core_dracbrid_cpp_CDraculaBride_FUN_004869a0(this_ptr);
  iVar9 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar9 == 0) {
    return;
  }
  if (0.0 <= *(float *)(this_ptr->unk2 + 4)) {
    *(float *)(this_ptr->unk2 + 4) = *(float *)(this_ptr->unk2 + 4) - delta_time;
  }
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  local_38 = delta_time * (this_ptr->base).speed;
  pCVar3 = &(this_ptr->base).base.model;
  while (0.0 < local_38) {
    iVar9 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar3->motion_controller);
    if (iVar9 == 0x29a) {
      (this_ptr->base).base.field60_0x2df4 = 0;
      local_178.x = 0.0;
      local_178.y = 20.0;
      local_178.z = 20.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                ((CDemonActor *)this_ptr,&local_ac,&local_178);
      core_dracbrid_cpp_CDraculaBride_FUN_004858f0(this_ptr);
      fVar5 = 5.0f;
      pCVar6 = (this_ptr->base).base.base.vtable._ub;
      this_ptr->exploded = 1;
      this_ptr->fade_timer = fVar5;
      (*pCVar6->playAmbientSound)((CDemonActor *)this_ptr,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
    }
  }
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar3->motion_controller);
  iVar9 = pSVar10->state_index;
  if (iVar9 == 9) {
    fVar8 = 6.0f * delta_time;
    fVar5 = (this_ptr->base).speed;
    (this_ptr->base).base.turn_speed = 3.141593f * delta_time * (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = fVar5 * fVar8;
  }
  else {
    fVar8 = 1.570796f * delta_time;
    fVar5 = (this_ptr->base).speed;
    (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.turn_speed = fVar8 * fVar5;
  }
  iVar11 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar11 != 0) {
    uVar7 = (this_ptr->base).base.field22_0x25b0;
    if (uVar7 < 2) {
      if (uVar7 == 1) {
LAB_004846a6:
        iVar9 = 0xe;
      }
      else {
LAB_004848f9:
        iVar9 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,iVar9,1);
    }
    else {
      if (uVar7 < 3) goto LAB_004846a6;
      if (uVar7 != 3) goto LAB_004848f9;
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
  switch(iVar9) {
  case 0:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
    if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
      if (extraout_EAX_01 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0xe,1);
      }
      break;
    }
    iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
    if ((iVar9 != 0) &&
       (iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0
                          (*(CDemonActor **)((this_ptr->base).unk2 + 4),"CHero"),
       iVar9 != 0)) {
      iVar11 = 0;
      iVar9 = 0;
      while ((iVar11 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c) &&
             ((pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c790
                                   (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar9 + 8000),
                                    g_CDraculaBrideClassInfo.name_hash),
              pCVar15 == (CDemonActor *)0x0 || (*(int *)pCVar15[0x8e].create_event == 0))))) {
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 4;
      }
      if (iVar11 == *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c)) {
        _sprintf
                  (local_430,"bride-%d?.wav",this_ptr->freaky_voice_number);
        core_dracbrid_cpp_CDraculaBride_FUN_004864c0(this_ptr);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0x17,1);
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"hotbride-disappear.wav");
        iVar9 = *(int *)((this_ptr->base).unk2 + 4);
        this_ptr->mist_state = 1;
        if (&this_ptr->new_pos != (CVector3f *)(iVar9 + 0x20)) {
          (this_ptr->new_pos).x = *(float *)(iVar9 + 0x20);
          (this_ptr->new_pos).y = *(float *)(iVar9 + 0x24);
          (this_ptr->new_pos).z = *(float *)(iVar9 + 0x28);
        }
        this_ptr->vanish_timer = 0.0;
        break;
      }
    }
    if (*(float *)(this_ptr->unk2 + 4) < 0.0) {
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
      *(float *)(this_ptr->unk2 + 4) = local_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0xd,1);
      break;
    }
    goto LAB_004852f8;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_28c);
    local_28c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_28c.attacker = (CDemonActor *)this_ptr;
    local_28c.wielder = (CDemonActor *)this_ptr;
    local_14 = local_28c.damage_amount;
    pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_b8,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (this_ptr->base).base.model.bone_transform.bone_world_matrices
                         [INT_02c6d0a0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_100,pCVar14);
    core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
    this_ptr->unk3[0] = '\x01';
    this_ptr->unk3[1] = '\0';
    this_ptr->unk3[2] = '\0';
    this_ptr->unk3[3] = '\0';
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_304);
    local_304.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_304.attacker = (CDemonActor *)this_ptr;
    local_304.wielder = (CDemonActor *)this_ptr;
    local_14 = local_304.damage_amount;
    pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_184,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (this_ptr->base).base.model.bone_transform.bone_world_matrices
                         [INT_02c6d0a0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_4c,pCVar14);
    core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
    break;
  case 7:
    if (this_ptr->exploded == 0) {
      pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                          (&(this_ptr->base).base.model,&local_d0,INT_02c6d0bc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)this_ptr,&local_f4,pCVar14);
      core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
      local_9c = (this_ptr->base).base.base.orient.bank;
      local_98 = (this_ptr->base).base.base.orient.heading;
      local_a0 = (this_ptr->base).base.base.orient.pitch + -1.570796f;
      core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
    }
    break;
  case 8:
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
    if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
      if (extraout_EAX != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0xe,1);
      }
    }
    else {
      if (((this_ptr->base).base.hit_points < 20.0f) ||
         (*(float *)(this_ptr->unk2 + 4) < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,0,1);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        *(float *)(this_ptr->unk2 + 4) = local_14;
      }
      pCVar3 = &(this_ptr->base).base.model;
      if (*(int *)this_ptr->unk3 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,9,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0x19,1);
        this_ptr->unk3[0] = '\0';
        this_ptr->unk3[1] = '\0';
        this_ptr->unk3[2] = '\0';
        this_ptr->unk3[3] = '\0';
      }
    }
    break;
  case 9:
    if (*(float *)this_ptr->unk2 <= 0.0) {
      _sprintf
                (local_3cc,"bride-%d?.wav",this_ptr->freaky_voice_number);
      core_dracbrid_cpp_CDraculaBride_FUN_004864c0(this_ptr);
      iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar9 != 0) {
        core_dracbrid_cpp_CDraculaBride_FUN_004864c0(this_ptr);
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
    pCVar3 = &(this_ptr->base).base.model;
    if (*(int *)((this_ptr->base).unk2 + 4) != 0) {
      if (0.0 <= *(float *)(this_ptr->unk2 + 4)) {
        local_58 = 0;
        local_50 = 2.0f;
        local_54 = 0;
        (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
        iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
        if (iVar9 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,8,1);
        }
        else if (iVar9 < 1) {
          iVar9 = *(int *)((this_ptr->base).unk2 + 4);
          local_124.x = *(float *)(iVar9 + 0x20) - (this_ptr->base).base.base.location.position.x;
          local_124.y = *(float *)(iVar9 + 0x24) - (this_ptr->base).base.base.location.position.y;
          local_124.z = *(float *)(iVar9 + 0x28) - (this_ptr->base).base.base.location.position.z;
          if (&local_7c != &local_124) {
            local_7c.x = local_124.x;
            local_7c.y = local_124.y;
            local_7c.z = local_124.z;
          }
          if ((float)10 <
              SQRT(local_7c.z * local_7c.z + local_7c.x * local_7c.x + local_7c.y * local_7c.y)) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_70,&local_7c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_70.y - (this_ptr->base).base.base.orient.bank);
            if (ABS(local_14) < (float)0.39269908168750001) {
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
              (this_ptr->base).base.base.orient.bank =
                   local_14 + (this_ptr->base).base.base.orient.bank;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,3,1);
            }
          }
        }
        else if (*(float *)(this_ptr->base).unk2 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,2,1);
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hotbride-bite?.wav");
          (this_ptr->base).unk2[0] = '\0';
          (this_ptr->base).unk2[1] = '\0';
          (this_ptr->base).unk2[2] = -0x80;
          (this_ptr->base).unk2[3] = '?';
        }
      }
      else {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        *(float *)(this_ptr->unk2 + 4) = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
      }
      break;
    }
    core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
    if (extraout_EAX_00 == 0) break;
LAB_004852f8:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base).base.model.motion_controller,0xe,1);
    break;
  case 0xc:
    iVar9 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                      (&g_HeroActors[g_LocalHeroIndex]->base);
    if ((iVar9 == 0) &&
       (iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,this_ptr->rise_event), iVar9 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0xd,1);
    }
    break;
  case 0xe:
    if (*(float *)this_ptr->unk2 <= 0.0) {
      _sprintf
                (local_368,"bride-%d?.wav",this_ptr->freaky_voice_number);
      core_dracbrid_cpp_CDraculaBride_FUN_004864c0(this_ptr);
      iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar9 != 0) {
        core_dracbrid_cpp_CDraculaBride_FUN_004864c0(this_ptr);
      }
    }
    (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
    fVar5 = 1.5f;
    pCVar3 = &(this_ptr->base).base.model;
    if (*(int *)((this_ptr->base).unk2 + 4) == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base);
      if (extraout_EAX_02 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
      }
    }
    else {
      local_34 = 1.5f;
      (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
      (this_ptr->base).base.model.accumulated_root_motion.y =
           (this_ptr->base).base.model.accumulated_root_motion.z;
      (this_ptr->base).base.model.accumulated_root_motion.x =
           (this_ptr->base).base.model.accumulated_root_motion.y;
      local_1a8 = 0;
      local_1a4 = 0;
      local_1a0 = fVar5;
      (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0xbc))();
      iVar9 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
      if (iVar9 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
      }
      else if ((0 < iVar9) && (*(float *)(this_ptr->base).unk2 <= 0.0)) {
        iVar9 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
        if (iVar9 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,0x13,1);
        }
        if (iVar9 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0x14,1);
        }
        if (iVar9 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base).base.model.motion_controller,0x15,1);
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hotbride-swipe?.wav");
        }
        (this_ptr->base).unk2[0] = '\0';
        (this_ptr->base).unk2[1] = '\0';
        (this_ptr->base).unk2[2] = -0x80;
        (this_ptr->base).unk2[3] = '?';
      }
    }
    break;
  case 0xf:
    iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->rise_event);
    if (iVar9 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_004858cd_caseD_10;
  case 0x11:
    if (((this_ptr->base).pool_me != 0) ||
       ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) break;
    pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                        (&(this_ptr->base).base.model,&local_1b4,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_1cc,pCVar14);
    core_gore_cpp_CGore_FUN_004ede30(g_CGorePtr);
    goto switchD_004858cd_caseD_10;
  case 0x12:
    iVar9 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                      (&g_HeroActors[g_LocalHeroIndex]->base);
    if ((iVar9 == 0) &&
       (iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                          (g_CEventListPtr,this_ptr->rise_event), iVar9 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2c8);
    local_2c8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_2c8.attacker = (CDemonActor *)this_ptr;
    local_2c8.wielder = (CDemonActor *)this_ptr;
    local_14 = local_2c8.damage_amount;
    pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_13c,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (this_ptr->base).base.model.bone_transform.bone_world_matrices
                         [INT_02c6d0a0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_94,pCVar14);
    core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
    this_ptr->unk3[0] = '\x01';
    this_ptr->unk3[1] = '\0';
    this_ptr->unk3[2] = '\0';
    this_ptr->unk3[3] = '\0';
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_214);
    local_214.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_214.attacker = (CDemonActor *)this_ptr;
    local_214.wielder = (CDemonActor *)this_ptr;
    local_14 = local_214.damage_amount;
    pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_88,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (this_ptr->base).base.model.bone_transform.bone_world_matrices
                         [INT_02c6d0a0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_16c,pCVar14);
    core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
    this_ptr->unk3[0] = '\x01';
    this_ptr->unk3[1] = '\0';
    this_ptr->unk3[2] = '\0';
    this_ptr->unk3[3] = '\0';
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_250);
    local_250.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_250.attacker = (CDemonActor *)this_ptr;
    local_250.wielder = (CDemonActor *)this_ptr;
    local_14 = local_250.damage_amount;
    pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_1c0,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (this_ptr->base).base.model.bone_transform.bone_world_matrices
                         [INT_02c6d0a8].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_154,pCVar14);
    core_enemy_cpp_CEnemy_FUN_004a9880(&this_ptr->base);
    break;
  case 0x17:
    if (*(float *)this_ptr->unk2 <= 0.0) {
      _sprintf
                (&stack0xfffffb6c,"bride-%d?.wav",this_ptr->freaky_voice_number);
      core_dracbrid_cpp_CDraculaBride_FUN_004864c0(this_ptr);
      iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar9 != 0) {
        core_dracbrid_cpp_CDraculaBride_FUN_004864c0(this_ptr);
      }
    }
    switch(this_ptr->mist_state) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0,1);
      break;
    case 1:
      fVar5 = this_ptr->vanish_timer + delta_time;
      this_ptr->vanish_timer = fVar5;
      if (1.0f < fVar5) {
        this_ptr->mist_state = 2;
        this_ptr->vanish_timer = 1.0f;
      }
      local_2c = &(this_ptr->base).base.model;
      iVar9 = 0;
      local_148.x = 0.0;
      local_148.y = 3.0;
      local_148.z = 0.0;
      pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_2c);
      if (0 < pCVar13->bone_count) {
        local_24 = local_2c;
        do {
          pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (local_24,&local_64,iVar9);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_118,pCVar14);
          iVar9 = iVar9 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&local_118,0.5,&local_148,0xffff);
        } while (iVar9 < pCVar13->bone_count);
      }
      break;
    case 2:
      local_30 = 1;
      local_1c = 0;
      for (local_18 = 0; fVar5 = 1.0f, local_18 < g_CDemonSetPtr->damage_listener_count;
          local_18 = local_18 + 1) {
        pCVar12 = *(CDraculaBride **)(g_CDemonSetPtr->unk4 + local_1c + -4);
        if (((pCVar12 != (CDraculaBride *)0x0) && (pCVar12 != this_ptr)) &&
           (iVar9 = (*(((pCVar12->base).base.base.vtable._uc)->_uc).isDamageable)
                              ((CCharacter *)pCVar12), iVar9 < 1)) {
          local_19c = (pCVar12->base).base.base.location.position.x - (this_ptr->new_pos).x;
          local_198 = (pCVar12->base).base.base.location.position.y - (this_ptr->new_pos).y;
          local_194 = (pCVar12->base).base.base.location.position.z - (this_ptr->new_pos).z;
          if (SQRT(local_194 * local_194 + local_19c * local_19c + local_198 * local_198) <
              (float)5) goto switchD_004858cd_caseD_1;
        }
        local_1c = local_1c + 4;
      }
      if (local_30 != 0) {
        this_ptr->mist_state = 3;
        pCVar1 = &(this_ptr->base).base.base.location;
        this_ptr->vanish_timer = fVar5;
        (pCVar1->position).x = (this_ptr->new_pos).x;
        (this_ptr->base).base.base.location.position.y = (this_ptr->new_pos).y;
        (this_ptr->base).base.base.location.position.z = (this_ptr->new_pos).z;
        iVar9 = *(int *)((this_ptr->base).unk2 + 4);
        if (iVar9 != 0) {
          local_dc.x = *(float *)(iVar9 + 0x20) - (pCVar1->position).x;
          local_dc.y = *(float *)(iVar9 + 0x24) - (this_ptr->base).base.base.location.position.y;
          local_dc.z = *(float *)(iVar9 + 0x28) - (this_ptr->base).base.base.location.position.z;
          pCVar2 = &(this_ptr->base).base.base.orient;
          pCVar14 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_190,&local_dc);
          if (pCVar2 != (COrientation *)pCVar14) {
            pCVar2->pitch = pCVar14->x;
            (this_ptr->base).base.base.orient.bank = pCVar14->y;
            (this_ptr->base).base.base.orient.heading = pCVar14->z;
          }
          (this_ptr->base).base.base.orient.heading = 0.0;
          (this_ptr->base).base.base.orient.pitch = 0.0;
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"hotbride-disappear.wav");
      }
      break;
    case 3:
      local_c4.x = 0.0;
      local_c4.z = 0.0;
      pCVar3 = &(this_ptr->base).base.model;
      iVar9 = 0;
      local_c4.y = 3.0;
      local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar3);
      if (0 < local_20->bone_count) {
        do {
          pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (pCVar3,&local_10c,iVar9);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_130,pCVar14);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&local_130,0.5,&local_c4,0xffff);
          iVar9 = iVar9 + 1;
        } while (iVar9 < local_20->bone_count);
      }
      fVar5 = this_ptr->vanish_timer - delta_time;
      this_ptr->vanish_timer = fVar5;
      if (fVar5 < 0.0) {
        this_ptr->vanish_timer = 0.0;
        this_ptr->mist_state = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0xe,1);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        *(float *)(this_ptr->unk2 + 4) = local_14;
      }
    }
    break;
  case 0x1a:
    iVar9 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->rise_event);
    if (iVar9 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,0,1);
    }
  }
switchD_004858cd_caseD_1:
  if (0.0 < *(float *)(this_ptr->base).unk2) {
    *(float *)(this_ptr->base).unk2 = *(float *)(this_ptr->base).unk2 - delta_time;
  }
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(this_ptr->base).base.model.motion_controller);
  local_28 = pSVar10->state_index;
  if ((((local_28 != 0x11) && (local_28 != 0x10)) && (local_28 != 0xf)) ||
     ((this_ptr->base).base.base.standing_platform != (CPlatform *)0x0)) {
    if (local_28 == 3) {
      (this_ptr->base).base.model.accumulated_root_motion.z =
           (this_ptr->base).base.model.accumulated_root_motion.z * (float)2;
    }
    iVar9 = *(int *)((this_ptr->base).unk2 + 4);
    if ((iVar9 != 0) &&
       (pCVar12 = (CDraculaBride *)(**(code **)(*(int *)(iVar9 + 0x154) + 0x108))(),
       pCVar12 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base).unk2 + 4));
    }
    (this_ptr->base).base.field7_0x2428.y =
         (this_ptr->base).base.field7_0x2428.y - delta_time * (float)32;
    local_160 = (this_ptr->base).base.field7_0x2428.x * delta_time;
    local_15c = (this_ptr->base).base.field7_0x2428.y * delta_time;
    pCVar14 = &(this_ptr->base).base.field6_0x241c;
    local_158 = delta_time * (this_ptr->base).base.field7_0x2428.z;
    pCVar4 = &(this_ptr->base).base.model.accumulated_root_motion;
    local_1d8 = local_160 + pCVar14->x;
    local_1d4 = local_15c + (this_ptr->base).base.field6_0x241c.y;
    local_1d0 = local_158 + (this_ptr->base).base.field6_0x241c.z;
    local_e8 = local_1d8 + pCVar4->x;
    local_e4 = local_1d4 + (this_ptr->base).base.model.accumulated_root_motion.y;
    local_e0 = local_1d0 + (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.field6_0x241c.z = 0.0;
    (this_ptr->base).base.field6_0x241c.y = (this_ptr->base).base.field6_0x241c.z;
    pCVar14->x = (this_ptr->base).base.field6_0x241c.y;
    (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
    fVar5 = (this_ptr->base).base.model.accumulated_root_motion.z;
    (this_ptr->base).base.model.accumulated_root_motion.y = fVar5;
    pCVar4->x = fVar5;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
  }
  if (local_28 != 0x17) {
    this_ptr->mist_state = 0;
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(this_ptr->base).base.model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  return;
switchD_004858cd_caseD_10:
  (this_ptr->base).pool_me = 1;
  goto switchD_004858cd_caseD_1;
}
