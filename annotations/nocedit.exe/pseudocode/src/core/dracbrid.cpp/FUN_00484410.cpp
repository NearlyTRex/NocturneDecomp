// Name: core_dracbrid.cpp_FUN_00484410
// Address: 00484410
// Address Range: [[00484410, 004858e5]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_FUN_00484410 (uint param_1,int param_2,undefined4 param_3,int param_4,CEnemy *param_5, float param_6)

#include "nocturne.h"

/* Signature: byte actors_enemy_draculabride.cpp_FUN_00484410(uint param_1, uint
   param_2) */

void core_dracbrid_cpp_FUN_00484410
               (uint param_1,int param_2,uint param_3,int param_4,CEnemy *param_5,
               float param_6)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  CDeformableModelInstance *pCVar3;
  char *pcVar4;
  float fVar5;
  CDemonActor_vtable *pCVar6;
  uint uVar7;
  float fVar8;
  CCharacter *pCVar9;
  int iVar10;
  SMotion *pSVar11;
  int iVar12;
  CEnemy *pCVar13;
  CSkeleton *pCVar14;
  CVector3f *pCVar15;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  CDemonActor *pCVar16;
  int extraout_EAX_02;
  float10 fVar17;
  float10 fVar18;
  double dVar19;
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
  
  if (param_5[1].base.base.previous_transform_state.position.z != 0.0) {
    fVar5 = param_5[1].base.base.previous_transform_state.orientation.x - param_6;
    param_5[1].base.base.previous_transform_state.orientation.x = fVar5;
    param_1 = (uint)(ushort)((ushort)(0.0 < fVar5) << 8 | (ushort)NAN(fVar5) << 10 |
                            (ushort)(fVar5 == 0.0) << 0xe);
    if (0.0 < fVar5 || (fVar5 == 0.0) != 0) {
      param_4 = *(int *)(param_5[1].base.base.create_event + 0x3c);
      iVar10 = 0;
      if (0 < param_4) {
        fVar17 = (float10)5.0f;
        fVar18 = (float10)65535;
        pCVar13 = param_5;
        do {
          iVar12 = *(int *)(pCVar13[1].base.base.create_event + 0x40);
          *(uint *)(iVar12 + 0xfc) = 1;
          *(uint *)(iVar12 + 0xcb4) = 1;
          iVar10 = iVar10 + 1;
          dVar19 = crt_math_c_round_FUN_005fe6b0
                             ((double)(((float10)param_5[1].base.base.previous_transform_state.
                                                 orientation.x * fVar18) / fVar17));
          *(int *)(iVar12 + 0xcc0) = (int)ROUND(dVar19);
          param_1 = *(uint *)(param_5[1].base.base.create_event + 0x3c);
          pCVar13 = (CEnemy *)((pCVar13->base).base.actor_name + 4);
        } while (iVar10 < (int)param_1);
      }
    }
    else {
      param_5[1].base.base.previous_transform_state.position.z = 0.0;
      (param_5->base).base.was_created = 2;
      iVar10 = *(int *)(param_5[1].base.base.create_event + 0x3c);
      param_5[1].base.base.previous_transform_state.orientation.x = 0.0;
      param_1 = 0;
      pCVar13 = param_5;
      if (0 < iVar10) {
        do {
          *(uint *)(*(int *)(pCVar13[1].base.base.create_event + 0x40) + 0x70) = 2;
          param_1 = param_1 + 1;
          param_2 = *(int *)(param_5[1].base.base.create_event + 0x3c);
          pCVar13 = (CEnemy *)((pCVar13->base).base.actor_name + 4);
        } while ((int)param_1 < param_2);
      }
    }
  }
  core_dracbrid_cpp_FUN_004869a0(param_1,param_2,param_5,param_4,param_5,param_6);
  iVar10 = core_charactr_cpp_CCharacter_FUN_00429870(&param_5->base);
  if (iVar10 == 0) {
    return;
  }
  if (0.0 <= *(float *)(param_5[1].base.base.create_event + 0x28)) {
    *(float *)(param_5[1].base.base.create_event + 0x28) =
         *(float *)(param_5[1].base.base.create_event + 0x28) - param_6;
  }
  (param_5->base).model.accumulated_root_motion.z = 0.0;
  (param_5->base).model.accumulated_root_motion.y = (param_5->base).model.accumulated_root_motion.z;
  (param_5->base).model.accumulated_root_motion.x = (param_5->base).model.accumulated_root_motion.y;
  local_38 = param_6 * param_5->speed;
  pCVar3 = &(param_5->base).model;
  while (0.0 < local_38) {
    iVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar3->motion_controller);
    if (iVar10 == 0x29a) {
      (param_5->base).cloth_data[0x35c] = '\0';
      (param_5->base).cloth_data[0x35d] = '\0';
      (param_5->base).cloth_data[0x35e] = '\0';
      (param_5->base).cloth_data[0x35f] = '\0';
      local_178.x = 0.0;
      local_178.y = 20.0;
      local_178.z = 20.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                ((CDemonActor *)param_5,&local_ac,&local_178);
      core_dracbrid_cpp_FUN_004858f0();
      fVar5 = 5.0f;
      pCVar6 = (param_5->base).base.vtable._ub;
      param_5[1].base.base.previous_transform_state.position.z = 1.4013e-45;
      param_5[1].base.base.previous_transform_state.orientation.x = fVar5;
      (*pCVar6->playAmbientSound)((CDemonActor *)param_5,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(&param_5->base);
    }
  }
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar3->motion_controller);
  iVar10 = pSVar11->state_index;
  if (iVar10 == 9) {
    fVar8 = 6.0f * param_6;
    fVar5 = param_5->speed;
    *(float *)((param_5->base).unk1 + 0x2c) = 3.141593f * param_6 * param_5->speed;
    *(float *)((param_5->base).unk1 + 0x28) = fVar5 * fVar8;
  }
  else {
    fVar8 = 1.570796f * param_6;
    fVar5 = param_5->speed;
    *(float *)((param_5->base).unk1 + 0x28) = (param_5->base).model.accumulated_root_motion.z;
    *(float *)((param_5->base).unk1 + 0x2c) = fVar8 * fVar5;
  }
  iVar12 = core_charactr_cpp_CCharacter_FUN_0042ca70(&param_5->base);
  if (iVar12 != 0) {
    uVar7 = *(uint *)((param_5->base).unk2 + 0x10);
    if (uVar7 < 2) {
      if (uVar7 == 1) {
LAB_004846a6:
        iVar10 = 0xe;
      }
      else {
LAB_004848f9:
        iVar10 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base).model.motion_controller,iVar10,1);
    }
    else {
      if (uVar7 < 3) goto LAB_004846a6;
      if (uVar7 != 3) goto LAB_004848f9;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base).model.motion_controller,0,1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_5);
    }
    (param_5->base).model.accumulated_root_motion.z = 0.0;
    (param_5->base).model.accumulated_root_motion.y =
         (param_5->base).model.accumulated_root_motion.z;
    (param_5->base).model.accumulated_root_motion.x =
         (param_5->base).model.accumulated_root_motion.y;
    goto switchD_004858cd_caseD_1;
  }
  switch(iVar10) {
  case 0:
    (*(((param_5->base).base.vtable._ue)->_ue).field_4)();
    if (*(int *)(param_5->unk2 + 4) == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(param_5);
      if (extraout_EAX_01 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(param_5->base).model.motion_controller,0xe,1);
      }
      break;
    }
    iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
    if ((iVar10 != 0) &&
       (iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0
                           (*(CDemonActor **)(param_5->unk2 + 4),"CHero"), iVar10 != 0)) {
      iVar12 = 0;
      iVar10 = 0;
      while ((iVar12 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c) &&
             ((pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c790
                                   (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar10 + 8000),
                                    g_CDraculaBrideClassInfo.name_hash),
              pCVar16 == (CDemonActor *)0x0 || (*(int *)pCVar16[0x8e].create_event == 0))))) {
        iVar12 = iVar12 + 1;
        iVar10 = iVar10 + 4;
      }
      if (iVar12 == *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c)) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_430,"bride-%d?.wav",
                   *(uint *)(param_5[1].base.base.create_event + 0x18));
        core_dracbrid_cpp_FUN_004864c0();
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(param_5->base).model.motion_controller,0x17,1);
        (*((param_5->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)param_5,"hotbride-disappear.wav");
        iVar10 = *(int *)(param_5->unk2 + 4);
        pcVar4 = param_5[1].base.base.create_event + 0x2c;
        pCVar9 = &param_5[1].base;
        (pCVar9->base).create_event[0x1c] = '\x01';
        (pCVar9->base).create_event[0x1d] = '\0';
        (pCVar9->base).create_event[0x1e] = '\0';
        (pCVar9->base).create_event[0x1f] = '\0';
        if (pcVar4 != (char *)(iVar10 + 0x20)) {
          *(uint *)pcVar4 = *(uint *)(iVar10 + 0x20);
          *(uint *)(param_5[1].base.base.create_event + 0x30) = *(uint *)(iVar10 + 0x24)
          ;
          *(uint *)(param_5[1].base.base.create_event + 0x34) = *(uint *)(iVar10 + 0x28)
          ;
        }
        pCVar9 = &param_5[1].base;
        (pCVar9->base).create_event[0x20] = '\0';
        (pCVar9->base).create_event[0x21] = '\0';
        (pCVar9->base).create_event[0x22] = '\0';
        (pCVar9->base).create_event[0x23] = '\0';
        break;
      }
    }
    if (*(float *)(param_5[1].base.base.create_event + 0x28) < 0.0) {
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
      *(float *)(param_5[1].base.base.create_event + 0x28) = local_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base).model.motion_controller,0xd,1);
      break;
    }
    goto LAB_004852f8;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_28c);
    local_28c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_28c.attacker = (CDemonActor *)param_5;
    local_28c.wielder = (CDemonActor *)param_5;
    local_14 = local_28c.damage_amount;
    pCVar15 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_b8,&g_ZeroVector,
                         (param_5->base).model.bone_transform.bone_world_matrices + INT_02c6d0a0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)param_5,&local_100,pCVar15);
    core_enemy_cpp_FUN_004a9880();
    pCVar9 = &param_5[1].base;
    (pCVar9->base).create_event[0x38] = '\x01';
    (pCVar9->base).create_event[0x39] = '\0';
    (pCVar9->base).create_event[0x3a] = '\0';
    (pCVar9->base).create_event[0x3b] = '\0';
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_304);
    local_304.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_304.attacker = (CDemonActor *)param_5;
    local_304.wielder = (CDemonActor *)param_5;
    local_14 = local_304.damage_amount;
    pCVar15 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_184,&g_ZeroVector,
                         (param_5->base).model.bone_transform.bone_world_matrices + INT_02c6d0a0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)param_5,&local_4c,pCVar15);
    core_enemy_cpp_FUN_004a9880();
    break;
  case 7:
    if (param_5[1].base.base.previous_transform_state.position.z == 0.0) {
      pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                          (&(param_5->base).model,&local_d0,INT_02c6d0bc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)param_5,&local_f4,pCVar15);
      core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
      local_9c = (param_5->base).base.orient.bank;
      local_98 = (param_5->base).base.orient.heading;
      local_a0 = (param_5->base).base.orient.pitch + -1.570796f;
      core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
    }
    break;
  case 8:
    (*(((param_5->base).base.vtable._ue)->_ue).field_4)();
    if (*(int *)(param_5->unk2 + 4) == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(param_5);
      if (extraout_EAX != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(param_5->base).model.motion_controller,0xe,1);
      }
    }
    else {
      if (((param_5->base).hit_points < 20.0f) ||
         (*(float *)(param_5[1].base.base.create_event + 0x28) < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(param_5->base).model.motion_controller,0,1);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        *(float *)(param_5[1].base.base.create_event + 0x28) = local_14;
      }
      pCVar3 = &(param_5->base).model;
      if (*(int *)(param_5[1].base.base.create_event + 0x38) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,9,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0x19,1);
        pCVar9 = &param_5[1].base;
        (pCVar9->base).create_event[0x38] = '\0';
        (pCVar9->base).create_event[0x39] = '\0';
        (pCVar9->base).create_event[0x3a] = '\0';
        (pCVar9->base).create_event[0x3b] = '\0';
      }
    }
    break;
  case 9:
    if (*(float *)(param_5[1].base.base.create_event + 0x24) <= 0.0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_3cc,"bride-%d?.wav",
                 *(uint *)(param_5[1].base.base.create_event + 0x18));
      core_dracbrid_cpp_FUN_004864c0();
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar10 != 0) {
        core_dracbrid_cpp_FUN_004864c0();
      }
    }
    (*(((param_5->base).base.vtable._ue)->_ue).field_4)();
    pCVar3 = &(param_5->base).model;
    if (*(int *)(param_5->unk2 + 4) != 0) {
      if (0.0 <= *(float *)(param_5[1].base.base.create_event + 0x28)) {
        local_58 = 0;
        local_50 = 2.0f;
        local_54 = 0;
        (**(code **)(*(int *)(*(int *)(param_5->unk2 + 4) + 0x154) + 0xbc))();
        iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(&param_5->base);
        if (iVar10 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_5);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,8,1);
        }
        else if (iVar10 < 1) {
          iVar10 = *(int *)(param_5->unk2 + 4);
          local_124.x = *(float *)(iVar10 + 0x20) - (param_5->base).base.location.position.x;
          local_124.y = *(float *)(iVar10 + 0x24) - (param_5->base).base.location.position.y;
          local_124.z = *(float *)(iVar10 + 0x28) - (param_5->base).base.location.position.z;
          if (&local_7c != &local_124) {
            local_7c.x = local_124.x;
            local_7c.y = local_124.y;
            local_7c.z = local_124.z;
          }
          if ((float)10 <
              SQRT(local_7c.z * local_7c.z + local_7c.x * local_7c.x + local_7c.y * local_7c.y)) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_70,&local_7c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_70.y - (param_5->base).base.orient.bank);
            if (ABS(local_14) < (float)0.39269908168750001) {
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
              (param_5->base).base.orient.bank = local_14 + (param_5->base).base.orient.bank;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(param_5->base).model.motion_controller,3,1);
            }
          }
        }
        else if (*(float *)param_5->unk2 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,2,1);
          (*((param_5->base).base.vtable._ub)->playSound)
                    ((CDemonActor *)param_5,"hotbride-bite?.wav");
          param_5->unk2[0] = '\0';
          param_5->unk2[1] = '\0';
          param_5->unk2[2] = -0x80;
          param_5->unk2[3] = '?';
        }
      }
      else {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        *(float *)(param_5[1].base.base.create_event + 0x28) = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
      }
      break;
    }
    core_enemy_cpp_CEnemy_FUN_004a9fd0(param_5);
    if (extraout_EAX_00 == 0) break;
LAB_004852f8:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(param_5->base).model.motion_controller,0xe,1);
    break;
  case 0xc:
    iVar10 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                       (&g_HeroActors[g_LocalHeroIndex]->base);
    if ((iVar10 == 0) &&
       (iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                           (g_CEventListPtr,(char *)&param_5[1].base.base.location.area_id),
       iVar10 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base).model.motion_controller,0xd,1);
    }
    break;
  case 0xe:
    if (*(float *)(param_5[1].base.base.create_event + 0x24) <= 0.0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_368,"bride-%d?.wav",
                 *(uint *)(param_5[1].base.base.create_event + 0x18));
      core_dracbrid_cpp_FUN_004864c0();
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar10 != 0) {
        core_dracbrid_cpp_FUN_004864c0();
      }
    }
    (*(((param_5->base).base.vtable._ue)->_ue).field_4)();
    fVar5 = 1.5f;
    pCVar3 = &(param_5->base).model;
    if (*(int *)(param_5->unk2 + 4) == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(param_5);
      if (extraout_EAX_02 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
      }
    }
    else {
      local_34 = 1.5f;
      (param_5->base).model.accumulated_root_motion.z = 0.0;
      (param_5->base).model.accumulated_root_motion.y =
           (param_5->base).model.accumulated_root_motion.z;
      (param_5->base).model.accumulated_root_motion.x =
           (param_5->base).model.accumulated_root_motion.y;
      local_1a8 = 0;
      local_1a4 = 0;
      local_1a0 = fVar5;
      (**(code **)(*(int *)(*(int *)(param_5->unk2 + 4) + 0x154) + 0xbc))();
      iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(&param_5->base);
      if (iVar10 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_5);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
      }
      else if ((0 < iVar10) && (*(float *)param_5->unk2 <= 0.0)) {
        iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
        if (iVar10 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,0x13,1);
        }
        if (iVar10 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(param_5->base).model.motion_controller,0x14,1);
        }
        if (iVar10 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(param_5->base).model.motion_controller,0x15,1);
          (*((param_5->base).base.vtable._ub)->playSound)
                    ((CDemonActor *)param_5,"hotbride-swipe?.wav");
        }
        param_5->unk2[0] = '\0';
        param_5->unk2[1] = '\0';
        param_5->unk2[2] = -0x80;
        param_5->unk2[3] = '?';
      }
    }
    break;
  case 0xf:
    iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,(char *)&param_5[1].base.base.location.area_id);
    if (iVar10 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base).model.motion_controller,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_004858cd_caseD_10;
  case 0x11:
    if ((param_5->pool_me != 0) || ((param_5->base).base.unk2 != 0)) break;
    pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                        (&(param_5->base).model,&local_1b4,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)param_5,&local_1cc,pCVar15);
    core_gore_cpp_FUN_004ede30();
    goto switchD_004858cd_caseD_10;
  case 0x12:
    iVar10 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._uc)->_uc).isDamageable)
                       (&g_HeroActors[g_LocalHeroIndex]->base);
    if ((iVar10 == 0) &&
       (iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                           (g_CEventListPtr,(char *)&param_5[1].base.base.location.area_id),
       iVar10 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base).model.motion_controller,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2c8);
    local_2c8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_2c8.attacker = (CDemonActor *)param_5;
    local_2c8.wielder = (CDemonActor *)param_5;
    local_14 = local_2c8.damage_amount;
    pCVar15 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_13c,&g_ZeroVector,
                         (param_5->base).model.bone_transform.bone_world_matrices + INT_02c6d0a0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)param_5,&local_94,pCVar15);
    core_enemy_cpp_FUN_004a9880();
    pCVar9 = &param_5[1].base;
    (pCVar9->base).create_event[0x38] = '\x01';
    (pCVar9->base).create_event[0x39] = '\0';
    (pCVar9->base).create_event[0x3a] = '\0';
    (pCVar9->base).create_event[0x3b] = '\0';
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_214);
    local_214.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_214.attacker = (CDemonActor *)param_5;
    local_214.wielder = (CDemonActor *)param_5;
    local_14 = local_214.damage_amount;
    pCVar15 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_88,&g_ZeroVector,
                         (param_5->base).model.bone_transform.bone_world_matrices + INT_02c6d0a0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)param_5,&local_16c,pCVar15);
    core_enemy_cpp_FUN_004a9880();
    pCVar9 = &param_5[1].base;
    (pCVar9->base).create_event[0x38] = '\x01';
    (pCVar9->base).create_event[0x39] = '\0';
    (pCVar9->base).create_event[0x3a] = '\0';
    (pCVar9->base).create_event[0x3b] = '\0';
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_250);
    local_250.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_250.attacker = (CDemonActor *)param_5;
    local_250.wielder = (CDemonActor *)param_5;
    local_14 = local_250.damage_amount;
    pCVar15 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_1c0,&g_ZeroVector,
                         (param_5->base).model.bone_transform.bone_world_matrices + INT_02c6d0a8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)param_5,&local_154,pCVar15);
    core_enemy_cpp_FUN_004a9880();
    break;
  case 0x17:
    if (*(float *)(param_5[1].base.base.create_event + 0x24) <= 0.0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffb6c,"bride-%d?.wav",
                 *(uint *)(param_5[1].base.base.create_event + 0x18));
      core_dracbrid_cpp_FUN_004864c0();
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar10 != 0) {
        core_dracbrid_cpp_FUN_004864c0();
      }
    }
    switch(*(uint *)(param_5[1].base.base.create_event + 0x1c)) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base).model.motion_controller,0,1);
      break;
    case 1:
      fVar5 = *(float *)(param_5[1].base.base.create_event + 0x20) + param_6;
      *(float *)(param_5[1].base.base.create_event + 0x20) = fVar5;
      if (1.0f < fVar5) {
        pCVar9 = &param_5[1].base;
        (pCVar9->base).create_event[0x1c] = '\x02';
        (pCVar9->base).create_event[0x1d] = '\0';
        (pCVar9->base).create_event[0x1e] = '\0';
        (pCVar9->base).create_event[0x1f] = '\0';
        *(float *)(param_5[1].base.base.create_event + 0x20) = 1.0f;
      }
      local_2c = &(param_5->base).model;
      iVar10 = 0;
      local_148.x = 0.0;
      local_148.y = 3.0;
      local_148.z = 0.0;
      pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_2c);
      if (0 < pCVar14->bone_count) {
        local_24 = local_2c;
        do {
          pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (local_24,&local_64,iVar10);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)param_5,&local_118,pCVar15);
          iVar10 = iVar10 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&local_118,0.5,&local_148,0xffff);
        } while (iVar10 < pCVar14->bone_count);
      }
      break;
    case 2:
      local_30 = 1;
      local_1c = 0;
      pcVar4 = param_5[1].base.base.create_event + 0x2c;
      for (local_18 = 0; fVar5 = 1.0f, local_18 < g_CDemonSetPtr->damage_listener_count;
          local_18 = local_18 + 1) {
        pCVar13 = *(CEnemy **)(g_CDemonSetPtr->unk4 + local_1c + -4);
        if (((pCVar13 != (CEnemy *)0x0) && (pCVar13 != param_5)) &&
           (iVar10 = (*(((pCVar13->base).base.vtable._uc)->_uc).isDamageable)(&pCVar13->base),
           iVar10 < 1)) {
          local_19c = (pCVar13->base).base.location.position.x - *(float *)pcVar4;
          local_198 = (pCVar13->base).base.location.position.y -
                      *(float *)(param_5[1].base.base.create_event + 0x30);
          local_194 = (pCVar13->base).base.location.position.z -
                      *(float *)(param_5[1].base.base.create_event + 0x34);
          if (SQRT(local_194 * local_194 + local_19c * local_19c + local_198 * local_198) <
              (float)5) goto switchD_004858cd_caseD_1;
        }
        local_1c = local_1c + 4;
      }
      if (local_30 != 0) {
        pCVar9 = &param_5[1].base;
        (pCVar9->base).create_event[0x1c] = '\x03';
        (pCVar9->base).create_event[0x1d] = '\0';
        (pCVar9->base).create_event[0x1e] = '\0';
        (pCVar9->base).create_event[0x1f] = '\0';
        pCVar1 = &(param_5->base).base.location;
        *(float *)(param_5[1].base.base.create_event + 0x20) = fVar5;
        (pCVar1->position).x = *(float *)pcVar4;
        (param_5->base).base.location.position.y =
             *(float *)(param_5[1].base.base.create_event + 0x30);
        (param_5->base).base.location.position.z =
             *(float *)(param_5[1].base.base.create_event + 0x34);
        iVar10 = *(int *)(param_5->unk2 + 4);
        if (iVar10 != 0) {
          local_dc.x = *(float *)(iVar10 + 0x20) - (pCVar1->position).x;
          local_dc.y = *(float *)(iVar10 + 0x24) - (param_5->base).base.location.position.y;
          local_dc.z = *(float *)(iVar10 + 0x28) - (param_5->base).base.location.position.z;
          pCVar2 = &(param_5->base).base.orient;
          pCVar15 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_190,&local_dc);
          if (pCVar2 != (COrientation *)pCVar15) {
            pCVar2->pitch = pCVar15->x;
            (param_5->base).base.orient.bank = pCVar15->y;
            (param_5->base).base.orient.heading = pCVar15->z;
          }
          (param_5->base).base.orient.heading = 0.0;
          (param_5->base).base.orient.pitch = 0.0;
        }
        (*((param_5->base).base.vtable._ub)->playSound)
                  ((CDemonActor *)param_5,"hotbride-disappear.wav");
      }
      break;
    case 3:
      local_c4.x = 0.0;
      local_c4.z = 0.0;
      pCVar3 = &(param_5->base).model;
      iVar10 = 0;
      local_c4.y = 3.0;
      local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar3);
      if (0 < local_20->bone_count) {
        do {
          pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (pCVar3,&local_10c,iVar10);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)param_5,&local_130,pCVar15);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&local_130,0.5,&local_c4,0xffff);
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_20->bone_count);
      }
      fVar5 = *(float *)(param_5[1].base.base.create_event + 0x20) - param_6;
      *(float *)(param_5[1].base.base.create_event + 0x20) = fVar5;
      if (fVar5 < 0.0) {
        pCVar9 = &param_5[1].base;
        (pCVar9->base).create_event[0x20] = '\0';
        (pCVar9->base).create_event[0x21] = '\0';
        (pCVar9->base).create_event[0x22] = '\0';
        (pCVar9->base).create_event[0x23] = '\0';
        pCVar9 = &param_5[1].base;
        (pCVar9->base).create_event[0x1c] = '\0';
        (pCVar9->base).create_event[0x1d] = '\0';
        (pCVar9->base).create_event[0x1e] = '\0';
        (pCVar9->base).create_event[0x1f] = '\0';
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0xe,1);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        *(float *)(param_5[1].base.base.create_event + 0x28) = local_14;
      }
    }
    break;
  case 0x1a:
    iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,(char *)&param_5[1].base.base.location.area_id);
    if (iVar10 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(param_5->base).model.motion_controller,0,1);
    }
  }
switchD_004858cd_caseD_1:
  if (0.0 < *(float *)param_5->unk2) {
    *(float *)param_5->unk2 = *(float *)param_5->unk2 - param_6;
  }
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(param_5->base).model.motion_controller);
  local_28 = pSVar11->state_index;
  if ((((local_28 != 0x11) && (local_28 != 0x10)) && (local_28 != 0xf)) ||
     ((param_5->base).base.unk2 != 0)) {
    if (local_28 == 3) {
      (param_5->base).model.accumulated_root_motion.z =
           (param_5->base).model.accumulated_root_motion.z * (float)2;
    }
    if ((*(int *)(param_5->unk2 + 4) != 0) &&
       (pCVar13 = (CEnemy *)(**(code **)(*(int *)(*(int *)(param_5->unk2 + 4) + 0x154) + 0x108))(),
       pCVar13 == param_5)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)(param_5->unk2 + 4));
    }
    *(float *)((param_5->base).unk1 + 0x20) =
         *(float *)((param_5->base).unk1 + 0x20) - param_6 * (float)32;
    local_160 = *(float *)((param_5->base).unk1 + 0x1c) * param_6;
    local_15c = *(float *)((param_5->base).unk1 + 0x20) * param_6;
    pcVar4 = (param_5->base).unk1 + 0x10;
    local_158 = param_6 * *(float *)((param_5->base).unk1 + 0x24);
    pCVar15 = &(param_5->base).model.accumulated_root_motion;
    local_1d8 = local_160 + *(float *)pcVar4;
    local_1d4 = local_15c + *(float *)((param_5->base).unk1 + 0x14);
    local_1d0 = local_158 + *(float *)((param_5->base).unk1 + 0x18);
    local_e8 = local_1d8 + pCVar15->x;
    local_e4 = local_1d4 + (param_5->base).model.accumulated_root_motion.y;
    local_e0 = local_1d0 + (param_5->base).model.accumulated_root_motion.z;
    (param_5->base).unk1[0x18] = '\0';
    (param_5->base).unk1[0x19] = '\0';
    (param_5->base).unk1[0x1a] = '\0';
    (param_5->base).unk1[0x1b] = '\0';
    *(uint *)((param_5->base).unk1 + 0x14) = *(uint *)((param_5->base).unk1 + 0x18);
    *(float *)pcVar4 = *(float *)((param_5->base).unk1 + 0x14);
    (param_5->base).model.accumulated_root_motion.z = 0.0;
    fVar5 = (param_5->base).model.accumulated_root_motion.z;
    (param_5->base).model.accumulated_root_motion.y = fVar5;
    pCVar15->x = fVar5;
    core_charactr_cpp_CCharacter_FUN_00428f40(&param_5->base);
  }
  if (local_28 != 0x17) {
    pCVar9 = &param_5[1].base;
    (pCVar9->base).create_event[0x1c] = '\0';
    (pCVar9->base).create_event[0x1d] = '\0';
    (pCVar9->base).create_event[0x1e] = '\0';
    (pCVar9->base).create_event[0x1f] = '\0';
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&param_5->base);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&(param_5->base).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(&param_5->base);
  return;
switchD_004858cd_caseD_10:
  param_5->pool_me = 1;
  goto switchD_004858cd_caseD_1;
}
