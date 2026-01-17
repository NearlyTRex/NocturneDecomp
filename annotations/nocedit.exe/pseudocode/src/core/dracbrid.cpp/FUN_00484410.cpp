// Name: core_dracbrid.cpp_FUN_00484410
// Address: 00484410
// Address Range: [[00484410, 004858e5]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00484410()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_draculabride.cpp_FUN_00484410(uint param_1, uint
   param_2) */

void core_dracbrid_cpp_FUN_00484410(uint param_1)

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
  uint uVar10;
  int iVar11;
  int extraout_EAX;
  SMotion *pSVar12;
  int iVar13;
  CEnemy *pCVar14;
  CSkeleton *pCVar15;
  CVector3f *pCVar16;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  CDemonActor *pCVar17;
  int extraout_EAX_03;
  float10 fVar18;
  float10 fVar19;
  double dVar20;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  SCollisionInfo *in_stack_fffffb6c;
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
  uint local_1a0;
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
  uint local_50;
  CVector3f local_4c;
  float local_38;
  uint local_34;
  int local_30;
  CDeformableModelInstance *local_2c;
  int local_28;
  CDeformableModelInstance *local_24;
  CSkeleton *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if (in_stack_00000004[1].base_character.base_actor.previous_transform_state.position.z != 0.0) {
    fVar5 = in_stack_00000004[1].base_character.base_actor.previous_transform_state.orientation.x -
            in_stack_00000008;
    in_stack_00000004[1].base_character.base_actor.previous_transform_state.orientation.x = fVar5;
    param_1 = (uint)(ushort)((ushort)(0.0 < fVar5) << 8 | (ushort)NAN(fVar5) << 10 |
                            (ushort)(fVar5 == 0.0) << 0xe);
    if (0.0 < fVar5 || (fVar5 == 0.0) != 0) {
      iVar11 = 0;
      if (0 < *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x3c)) {
        fVar18 = (float10)_DAT_0065cd8c;
        fVar19 = (float10)65535;
        pCVar14 = in_stack_00000004;
        do {
          iVar13 = *(int *)(pCVar14[1].base_character.base_actor.create_event + 0x40);
          *(uint *)(iVar13 + 0xfc) = 1;
          *(uint *)(iVar13 + 0xcb4) = 1;
          iVar11 = iVar11 + 1;
          in_stack_fffffb6c = (SCollisionInfo *)0x4845ee;
          dVar20 = crt_math_c_round_FUN_005fe6b0
                             ((double)(((float10)in_stack_00000004[1].base_character.base_actor.
                                                 previous_transform_state.orientation.x * fVar19) /
                                      fVar18));
          *(int *)(extraout_EAX + 0xcc0) = (int)ROUND(dVar20);
          param_1 = *(uint *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x3c);
          pCVar14 = (CEnemy *)((pCVar14->base_character).base_actor.actor_name + 4);
        } while (iVar11 < (int)param_1);
      }
    }
    else {
      in_stack_00000004[1].base_character.base_actor.previous_transform_state.position.z = 0.0;
      (in_stack_00000004->base_character).base_actor.was_created = 2;
      iVar11 = *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x3c);
      in_stack_00000004[1].base_character.base_actor.previous_transform_state.orientation.x = 0.0;
      param_1 = 0;
      pCVar14 = in_stack_00000004;
      if (0 < iVar11) {
        do {
          *(uint *)(*(int *)(pCVar14[1].base_character.base_actor.create_event + 0x40) + 0x70)
               = 2;
          param_1 = param_1 + 1;
          pCVar14 = (CEnemy *)((pCVar14->base_character).base_actor.actor_name + 4);
        } while ((int)param_1 <
                 *(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x3c));
      }
    }
  }
  core_dracbrid_cpp_FUN_004869a0(param_1);
  iVar11 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar11 == 0) {
    return;
  }
  if (0.0 <= *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x28)) {
    *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x28) =
         *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x28) -
         in_stack_00000008;
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
  local_38 = in_stack_00000008 * in_stack_00000004->speed;
  pCVar3 = &(in_stack_00000004->base_character).model;
  while (0.0 < local_38) {
    iVar11 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar3->motion_controller);
    if (iVar11 == 0x29a) {
      (in_stack_00000004->base_character).cloth_data[0x35c] = '\0';
      (in_stack_00000004->base_character).cloth_data[0x35d] = '\0';
      (in_stack_00000004->base_character).cloth_data[0x35e] = '\0';
      (in_stack_00000004->base_character).cloth_data[0x35f] = '\0';
      local_178.x = 0.0;
      local_178.y = 20.0;
      local_178.z = 20.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                ((CDemonActor *)in_stack_00000004,&local_ac,&local_178);
      core_dracbrid_cpp_FUN_004858f0();
      fVar5 = _DAT_0065cd8c;
      pCVar6 = (in_stack_00000004->base_character).base_actor.vtable;
      in_stack_00000004[1].base_character.base_actor.previous_transform_state.position.z =
           1.4013e-45;
      in_stack_00000004[1].base_character.base_actor.previous_transform_state.orientation.x = fVar5;
      (*pCVar6->playAmbientSound)((CDemonActor *)in_stack_00000004,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
    }
  }
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar3->motion_controller);
  iVar11 = pSVar12->state_index;
  if (iVar11 == 9) {
    fVar8 = _DAT_0065cd80 * in_stack_00000008;
    fVar5 = in_stack_00000004->speed;
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
         _DAT_0065cd84 * in_stack_00000008 * in_stack_00000004->speed;
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) = fVar5 * fVar8;
  }
  else {
    fVar8 = _DAT_0065cd7c * in_stack_00000008;
    fVar5 = in_stack_00000004->speed;
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
         (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) = fVar8 * fVar5;
  }
  iVar13 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar13 != 0) {
    uVar7 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
    if (uVar7 < 2) {
      if (uVar7 == 1) {
LAB_004846a6:
        iVar11 = 0xe;
      }
      else {
LAB_004848f9:
        iVar11 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_character).model.motion_controller,iVar11,1);
    }
    else {
      if (uVar7 < 3) goto LAB_004846a6;
      if (uVar7 != 3) goto LAB_004848f9;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_character).model.motion_controller,0,1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
    }
    (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
    (in_stack_00000004->base_character).model.accumulated_root_motion.y =
         (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).model.accumulated_root_motion.x =
         (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    goto switchD_004858cd_caseD_1;
  }
  switch(iVar11) {
  case 0:
    (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)in_stack_00000004);
    if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
      if (extraout_EAX_02 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,0xe,1);
      }
      break;
    }
    iVar11 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
    if ((iVar11 != 0) &&
       (iVar11 = core_actor_cpp_isOfClass_FUN_0040c6d0
                           (*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4),"CHero"
                           ), iVar11 != 0)) {
      iVar13 = 0;
      iVar11 = 0;
      while ((iVar13 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c) &&
             ((pCVar17 = core_actor_cpp_castToClassHash_FUN_0040c790
                                   (*(CDemonActor **)
                                     (g_CDemonSetPtr->field19_0x14f0a0 + iVar11 + 8000),
                                    g_CDraculaBrideClassInfo.name_hash),
              pCVar17 == (CDemonActor *)0x0 || (*(int *)pCVar17[0x8e].create_event == 0))))) {
        iVar13 = iVar13 + 1;
        iVar11 = iVar11 + 4;
      }
      if (iVar13 == *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c)) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_430,"bride-%d?.wav");
        core_dracbrid_cpp_FUN_004864c0();
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,0x17,1);
        (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                  ((CDemonActor *)in_stack_00000004,"hotbride-disappear.wav");
        iVar11 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
        pcVar4 = in_stack_00000004[1].base_character.base_actor.create_event + 0x2c;
        pCVar9 = &in_stack_00000004[1].base_character;
        (pCVar9->base_actor).create_event[0x1c] = '\x01';
        (pCVar9->base_actor).create_event[0x1d] = '\0';
        (pCVar9->base_actor).create_event[0x1e] = '\0';
        (pCVar9->base_actor).create_event[0x1f] = '\0';
        if (pcVar4 != (char *)(iVar11 + 0x20)) {
          *(uint *)pcVar4 = *(uint *)(iVar11 + 0x20);
          *(uint *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x30) =
               *(uint *)(iVar11 + 0x24);
          *(uint *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x34) =
               *(uint *)(iVar11 + 0x28);
        }
        pCVar9 = &in_stack_00000004[1].base_character;
        (pCVar9->base_actor).create_event[0x20] = '\0';
        (pCVar9->base_actor).create_event[0x21] = '\0';
        (pCVar9->base_actor).create_event[0x22] = '\0';
        (pCVar9->base_actor).create_event[0x23] = '\0';
        break;
      }
    }
    if (*(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x28) < 0.0) {
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
      *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x28) = local_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_character).model.motion_controller,0xd,1);
      break;
    }
    goto LAB_004852f8;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_28c);
    local_28c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_28c.attacker = (CDemonActor *)in_stack_00000004;
    local_28c.wielder = (CDemonActor *)in_stack_00000004;
    local_14 = local_28c.damage_amount;
    pCVar16 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_b8,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (in_stack_00000004->base_character).model.bone_transform.
                         bone_world_matrices[DAT_02c6d0a0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)in_stack_00000004,&local_100,pCVar16);
    core_enemy_cpp_FUN_004a9880();
    pCVar9 = &in_stack_00000004[1].base_character;
    (pCVar9->base_actor).create_event[0x38] = '\x01';
    (pCVar9->base_actor).create_event[0x39] = '\0';
    (pCVar9->base_actor).create_event[0x3a] = '\0';
    (pCVar9->base_actor).create_event[0x3b] = '\0';
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_304);
    local_304.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_304.attacker = (CDemonActor *)in_stack_00000004;
    local_304.wielder = (CDemonActor *)in_stack_00000004;
    local_14 = local_304.damage_amount;
    pCVar16 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_184,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (in_stack_00000004->base_character).model.bone_transform.
                         bone_world_matrices[DAT_02c6d0a0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)in_stack_00000004,&local_4c,pCVar16);
    core_enemy_cpp_FUN_004a9880();
    break;
  case 7:
    if (in_stack_00000004[1].base_character.base_actor.previous_transform_state.position.z == 0.0) {
      pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                          (&(in_stack_00000004->base_character).model,&local_d0,DAT_02c6d0bc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_f4,pCVar16);
      core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
      local_9c = (in_stack_00000004->base_character).base_actor.orient.bank;
      local_98 = (in_stack_00000004->base_character).base_actor.orient.heading;
      local_a0 = (in_stack_00000004->base_character).base_actor.orient.pitch + -1.570796f;
      core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
    }
    break;
  case 8:
    (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)in_stack_00000004);
    if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
      if (extraout_EAX_00 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,0xe,1);
      }
    }
    else {
      if (((in_stack_00000004->base_character).hit_points < _DAT_0065cd78) ||
         (*(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x28) < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,0,1);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x28) = local_14;
      }
      pCVar3 = &(in_stack_00000004->base_character).model;
      if (*(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x38) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,9,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0x19,1);
        pCVar9 = &in_stack_00000004[1].base_character;
        (pCVar9->base_actor).create_event[0x38] = '\0';
        (pCVar9->base_actor).create_event[0x39] = '\0';
        (pCVar9->base_actor).create_event[0x3a] = '\0';
        (pCVar9->base_actor).create_event[0x3b] = '\0';
      }
    }
    break;
  case 9:
    if (*(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x24) <= 0.0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_3cc,"bride-%d?.wav",
                 *(uint *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x18)
                );
      core_dracbrid_cpp_FUN_004864c0();
      iVar11 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar11 != 0) {
        core_dracbrid_cpp_FUN_004864c0();
      }
    }
    (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)in_stack_00000004);
    pCVar3 = &(in_stack_00000004->base_character).model;
    if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
      if (0.0 <= *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x28)) {
        local_58 = 0;
        local_50 = 0x40000000;
        local_54 = 0;
        (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
        iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                           (&in_stack_00000004->base_character);
        if (iVar11 < 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",in_stack_00000004);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,8,1);
        }
        else if (iVar11 < 1) {
          iVar11 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
          local_124.x = *(float *)(iVar11 + 0x20) -
                        (in_stack_00000004->base_character).base_actor.location.position.x;
          local_124.y = *(float *)(iVar11 + 0x24) -
                        (in_stack_00000004->base_character).base_actor.location.position.y;
          local_124.z = *(float *)(iVar11 + 0x28) -
                        (in_stack_00000004->base_character).base_actor.location.position.z;
          if (&local_7c != &local_124) {
            local_7c.x = local_124.x;
            local_7c.y = local_124.y;
            local_7c.z = local_124.z;
          }
          if ((float)10 <
              SQRT(local_7c.z * local_7c.z + local_7c.x * local_7c.x + local_7c.y * local_7c.y)) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_70,&local_7c);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_70.y -
                                  (in_stack_00000004->base_character).base_actor.orient.bank);
            if (ABS(local_14) < (float)0.39269908168750001) {
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
              (in_stack_00000004->base_character).base_actor.orient.bank =
                   local_14 + (in_stack_00000004->base_character).base_actor.orient.bank;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base_character).model.motion_controller,3,1);
            }
          }
        }
        else if (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,2,1);
          (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                    ((CDemonActor *)in_stack_00000004,"hotbride-bite?.wav");
          in_stack_00000004->field6_0xbe38[0] = '\0';
          in_stack_00000004->field6_0xbe38[1] = '\0';
          in_stack_00000004->field6_0xbe38[2] = -0x80;
          in_stack_00000004->field6_0xbe38[3] = '?';
        }
      }
      else {
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x28) = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
      }
      break;
    }
    core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
    if (extraout_EAX_01 == 0) break;
LAB_004852f8:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,0xe,1);
    break;
  case 0xc:
    iVar11 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                       ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffb6c);
    if ((iVar11 == 0) &&
       (iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                           (g_CEventListPtr,
                            (char *)&in_stack_00000004[1].base_character.base_actor.location.area_id
                           ), iVar11 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_character).model.motion_controller,0xd,1);
    }
    break;
  case 0xe:
    if (*(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x24) <= 0.0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_368,"bride-%d?.wav",
                 *(uint *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x18)
                );
      core_dracbrid_cpp_FUN_004864c0();
      iVar11 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar11 != 0) {
        core_dracbrid_cpp_FUN_004864c0();
      }
    }
    (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
              ((CDemonActor *)in_stack_00000004);
    uVar10 = 0x3FC00000;
    pCVar3 = &(in_stack_00000004->base_character).model;
    if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
      core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
      if (extraout_EAX_03 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
      }
    }
    else {
      local_34 = 0x3FC00000;
      (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
      (in_stack_00000004->base_character).model.accumulated_root_motion.y =
           (in_stack_00000004->base_character).model.accumulated_root_motion.z;
      (in_stack_00000004->base_character).model.accumulated_root_motion.x =
           (in_stack_00000004->base_character).model.accumulated_root_motion.y;
      local_1a8 = 0;
      local_1a4 = 0;
      local_1a0 = uVar10;
      (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
      iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                         (&in_stack_00000004->base_character);
      if (iVar11 < 0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s gave up chase - I'm confused\n",in_stack_00000004);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0,1);
      }
      else if ((0 < iVar11) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
        iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
        if (iVar11 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar3->motion_controller,0x13,1);
        }
        if (iVar11 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,0x14,1);
        }
        if (iVar11 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,0x15,1);
          (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                    ((CDemonActor *)in_stack_00000004,"hotbride-swipe?.wav");
        }
        in_stack_00000004->field6_0xbe38[0] = '\0';
        in_stack_00000004->field6_0xbe38[1] = '\0';
        in_stack_00000004->field6_0xbe38[2] = -0x80;
        in_stack_00000004->field6_0xbe38[3] = '?';
      }
    }
    break;
  case 0xf:
    iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,
                        (char *)&in_stack_00000004[1].base_character.base_actor.location.area_id);
    if (iVar11 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_character).model.motion_controller,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_004858cd_caseD_10;
  case 0x11:
    if ((in_stack_00000004->pool_me != 0) ||
       ((in_stack_00000004->base_character).base_actor.field11_0xdc != 0)) break;
    pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                        (&(in_stack_00000004->base_character).model,&local_1b4,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)in_stack_00000004,&local_1cc,pCVar16);
    core_gore_cpp_FUN_004ede30();
    goto switchD_004858cd_caseD_10;
  case 0x12:
    iVar11 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                       ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffb6c);
    if ((iVar11 == 0) &&
       (iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                           (g_CEventListPtr,
                            (char *)&in_stack_00000004[1].base_character.base_actor.location.area_id
                           ), iVar11 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_character).model.motion_controller,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2c8);
    local_2c8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_2c8.attacker = (CDemonActor *)in_stack_00000004;
    local_2c8.wielder = (CDemonActor *)in_stack_00000004;
    local_14 = local_2c8.damage_amount;
    pCVar16 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_13c,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (in_stack_00000004->base_character).model.bone_transform.
                         bone_world_matrices[DAT_02c6d0a0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)in_stack_00000004,&local_94,pCVar16);
    core_enemy_cpp_FUN_004a9880();
    pCVar9 = &in_stack_00000004[1].base_character;
    (pCVar9->base_actor).create_event[0x38] = '\x01';
    (pCVar9->base_actor).create_event[0x39] = '\0';
    (pCVar9->base_actor).create_event[0x3a] = '\0';
    (pCVar9->base_actor).create_event[0x3b] = '\0';
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_214);
    local_214.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_214.attacker = (CDemonActor *)in_stack_00000004;
    local_214.wielder = (CDemonActor *)in_stack_00000004;
    local_14 = local_214.damage_amount;
    pCVar16 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_88,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (in_stack_00000004->base_character).model.bone_transform.
                         bone_world_matrices[DAT_02c6d0a0].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)in_stack_00000004,&local_16c,pCVar16);
    core_enemy_cpp_FUN_004a9880();
    pCVar9 = &in_stack_00000004[1].base_character;
    (pCVar9->base_actor).create_event[0x38] = '\x01';
    (pCVar9->base_actor).create_event[0x39] = '\0';
    (pCVar9->base_actor).create_event[0x3a] = '\0';
    (pCVar9->base_actor).create_event[0x3b] = '\0';
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_250);
    local_250.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
    local_250.attacker = (CDemonActor *)in_stack_00000004;
    local_250.wielder = (CDemonActor *)in_stack_00000004;
    local_14 = local_250.damage_amount;
    pCVar16 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                        (&local_1c0,&g_ZeroVector,
                         (CMatrix3x4f *)
                         (in_stack_00000004->base_character).model.bone_transform.
                         bone_world_matrices[DAT_02c6d0a8].m);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)in_stack_00000004,&local_154,pCVar16);
    core_enemy_cpp_FUN_004a9880();
    break;
  case 0x17:
    if (*(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x24) <= 0.0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffb6c,"bride-%d?.wav",
                 *(uint *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x18)
                );
      core_dracbrid_cpp_FUN_004864c0();
      iVar11 = core_actor_cpp_randomChance_FUN_0040cd10(0.2);
      if (iVar11 != 0) {
        core_dracbrid_cpp_FUN_004864c0();
      }
    }
    switch(*(uint *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x1c)) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_character).model.motion_controller,0,1);
      break;
    case 1:
      fVar5 = *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x20) +
              in_stack_00000008;
      *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x20) = fVar5;
      if (0x3F800000 < fVar5) {
        pCVar9 = &in_stack_00000004[1].base_character;
        (pCVar9->base_actor).create_event[0x1c] = '\x02';
        (pCVar9->base_actor).create_event[0x1d] = '\0';
        (pCVar9->base_actor).create_event[0x1e] = '\0';
        (pCVar9->base_actor).create_event[0x1f] = '\0';
        *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x20) =
             0x3F800000;
      }
      local_2c = &(in_stack_00000004->base_character).model;
      iVar11 = 0;
      local_148.x = 0.0;
      local_148.y = 3.0;
      local_148.z = 0.0;
      pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_2c);
      if (0 < pCVar15->bone_count) {
        local_24 = local_2c;
        do {
          pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (local_24,&local_64,iVar11);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)in_stack_00000004,&local_118,pCVar16);
          iVar11 = iVar11 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&local_118,0.5,&local_148,0xffff);
        } while (iVar11 < pCVar15->bone_count);
      }
      break;
    case 2:
      local_30 = 1;
      local_1c = 0;
      pcVar4 = in_stack_00000004[1].base_character.base_actor.create_event + 0x2c;
      for (local_18 = 0; fVar5 = 0x3F800000, local_18 < g_CDemonSetPtr->damage_listener_count;
          local_18 = local_18 + 1) {
        pCVar14 = *(CEnemy **)(g_CDemonSetPtr->field19_0x14f0a0 + local_1c + -4);
        if (((pCVar14 != (CEnemy *)0x0) && (pCVar14 != in_stack_00000004)) &&
           (iVar11 = (*(pCVar14->base_character).base_actor.vtable[1].hasCollision)
                               ((CDemonActor *)pCVar14,in_stack_fffffb6c), iVar11 < 1)) {
          local_19c = (pCVar14->base_character).base_actor.location.position.x - *(float *)pcVar4;
          local_198 = (pCVar14->base_character).base_actor.location.position.y -
                      *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x30)
          ;
          local_194 = (pCVar14->base_character).base_actor.location.position.z -
                      *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x34)
          ;
          if (SQRT(local_194 * local_194 + local_19c * local_19c + local_198 * local_198) <
              (float)5) goto switchD_004858cd_caseD_1;
        }
        local_1c = local_1c + 4;
      }
      if (local_30 != 0) {
        pCVar9 = &in_stack_00000004[1].base_character;
        (pCVar9->base_actor).create_event[0x1c] = '\x03';
        (pCVar9->base_actor).create_event[0x1d] = '\0';
        (pCVar9->base_actor).create_event[0x1e] = '\0';
        (pCVar9->base_actor).create_event[0x1f] = '\0';
        pCVar1 = &(in_stack_00000004->base_character).base_actor.location;
        *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x20) = fVar5;
        (pCVar1->position).x = *(float *)pcVar4;
        (in_stack_00000004->base_character).base_actor.location.position.y =
             *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x30);
        (in_stack_00000004->base_character).base_actor.location.position.z =
             *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x34);
        iVar11 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
        if (iVar11 != 0) {
          local_dc.x = *(float *)(iVar11 + 0x20) - (pCVar1->position).x;
          local_dc.y = *(float *)(iVar11 + 0x24) -
                       (in_stack_00000004->base_character).base_actor.location.position.y;
          local_dc.z = *(float *)(iVar11 + 0x28) -
                       (in_stack_00000004->base_character).base_actor.location.position.z;
          pCVar2 = &(in_stack_00000004->base_character).base_actor.orient;
          pCVar16 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_190,&local_dc);
          if (pCVar2 != (COrientation *)pCVar16) {
            pCVar2->pitch = pCVar16->x;
            (in_stack_00000004->base_character).base_actor.orient.bank = pCVar16->y;
            (in_stack_00000004->base_character).base_actor.orient.heading = pCVar16->z;
          }
          (in_stack_00000004->base_character).base_actor.orient.heading = 0.0;
          (in_stack_00000004->base_character).base_actor.orient.pitch = 0.0;
        }
        (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                  ((CDemonActor *)in_stack_00000004,"hotbride-disappear.wav");
      }
      break;
    case 3:
      local_c4.x = 0.0;
      local_c4.z = 0.0;
      pCVar3 = &(in_stack_00000004->base_character).model;
      iVar11 = 0;
      local_c4.y = 3.0;
      local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar3);
      if (0 < local_20->bone_count) {
        do {
          pCVar16 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                              (pCVar3,&local_10c,iVar11);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)in_stack_00000004,&local_130,pCVar16);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&local_130,0.5,&local_c4,0xffff);
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_20->bone_count);
      }
      fVar5 = *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x20) -
              in_stack_00000008;
      *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x20) = fVar5;
      if (fVar5 < 0.0) {
        pCVar9 = &in_stack_00000004[1].base_character;
        (pCVar9->base_actor).create_event[0x20] = '\0';
        (pCVar9->base_actor).create_event[0x21] = '\0';
        (pCVar9->base_actor).create_event[0x22] = '\0';
        (pCVar9->base_actor).create_event[0x23] = '\0';
        pCVar9 = &in_stack_00000004[1].base_character;
        (pCVar9->base_actor).create_event[0x1c] = '\0';
        (pCVar9->base_actor).create_event[0x1d] = '\0';
        (pCVar9->base_actor).create_event[0x1e] = '\0';
        (pCVar9->base_actor).create_event[0x1f] = '\0';
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar3->motion_controller,0xe,1);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
        *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x28) = local_14;
      }
    }
    break;
  case 0x1a:
    iVar11 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                       (g_CEventListPtr,
                        (char *)&in_stack_00000004[1].base_character.base_actor.location.area_id);
    if (iVar11 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_character).model.motion_controller,0,1);
    }
  }
switchD_004858cd_caseD_1:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
  }
  pSVar12 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&(in_stack_00000004->base_character).model.motion_controller);
  local_28 = pSVar12->state_index;
  if ((((local_28 != 0x11) && (local_28 != 0x10)) && (local_28 != 0xf)) ||
     ((in_stack_00000004->base_character).base_actor.field11_0xdc != 0)) {
    if (local_28 == 3) {
      (in_stack_00000004->base_character).model.accumulated_root_motion.z =
           (in_stack_00000004->base_character).model.accumulated_root_motion.z *
           (float)2;
    }
    if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
       (pCVar14 = (CEnemy *)
                  (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                              0x108))(), pCVar14 == in_stack_00000004)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4));
    }
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_160 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
                in_stack_00000008;
    local_15c = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
                in_stack_00000008;
    pcVar4 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_158 = in_stack_00000008 *
                *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pCVar16 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
    local_1d8 = local_160 + *(float *)pcVar4;
    local_1d4 = local_15c + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_1d0 = local_158 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_e8 = local_1d8 + pCVar16->x;
    local_e4 = local_1d4 + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    local_e0 = local_1d0 + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
    *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    *(float *)pcVar4 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
    fVar5 = (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).model.accumulated_root_motion.y = fVar5;
    pCVar16->x = fVar5;
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  if (local_28 != 0x17) {
    pCVar9 = &in_stack_00000004[1].base_character;
    (pCVar9->base_actor).create_event[0x1c] = '\0';
    (pCVar9->base_actor).create_event[0x1d] = '\0';
    (pCVar9->base_actor).create_event[0x1e] = '\0';
    (pCVar9->base_actor).create_event[0x1f] = '\0';
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base_character).model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  return;
switchD_004858cd_caseD_10:
  in_stack_00000004->pool_me = 1;
  goto switchD_004858cd_caseD_1;
}
