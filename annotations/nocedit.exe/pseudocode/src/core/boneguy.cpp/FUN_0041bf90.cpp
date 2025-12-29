// Name: core_boneguy.cpp_FUN_0041bf90
// Address: 0041bf90
// Address Range: [[0041bf90, 0041ca3c]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041bf90()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_boneguy.cpp_FUN_0041bf90(uint param_1, uint
   param_2) */

void core_boneguy_cpp_FUN_0041bf90(void)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  CDemonActor *this_ptr;
  float fVar5;
  float fVar6;
  CEnemy *pCVar7;
  int iVar8;
  SMotion *pSVar9;
  int iVar10;
  CBoneGuy *pCVar11;
  uint uVar12;
  CVector3f *pCVar13;
  int extraout_EAX;
  int extraout_EAX_00;
  BADSPACEBASE *in_ESP;
  float *pfVar14;
  byte bVar15;
  CBoneGuy *in_stack_00000004;
  float in_stack_00000008;
  float afStackY_1908 [1484];
  CQuaternion4f *quat_ptr;
  float in_stack_fffffe44;
  int iStack_1b4;
  SDamageInfo local_180;
  CBoundingBox3D local_144;
  CQuaternion4f local_12c;
  float local_11c;
  float afStack_118 [4];
  float local_108;
  float local_104;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  uint local_d0;
  uint local_cc;
  float local_c8;
  CVector3f local_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  int local_44;
  float local_38;
  int local_34;
  float local_30;
  CVector3f *local_2c;
  CQuaternion4f *local_28;
  float *local_24;
  CQuaternion4f *local_20;
  int local_1c;
  CVector3f *local_18;
  float local_14;
  
  bVar15 = 0;
  iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,in_stack_00000004->field1_0xbeb4 + 0x1c);
  if (iVar8 != 0) {
    (in_stack_00000004->base_enemy).base_character.hit_points = 0.0;
    (in_stack_00000004->base_enemy).pool_me = 1;
    in_stack_00000004->param = 0.0;
    if (in_stack_00000004->blown_up == 0) {
      core_boneguy_cpp_CBoneGuy_FUN_0041d680(in_stack_00000004);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
              (&(in_stack_00000004->base_enemy).base_character.model.motion_controller,5,0.0);
  }
  iVar8 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)in_stack_00000004);
  if (iVar8 == 0) goto LAB_0041c220;
  if ((in_stack_00000004->blown_up == 1) &&
     (0.0 < (in_stack_00000004->base_enemy).base_character.hit_points)) {
    fVar3 = in_stack_00000004->param + in_stack_00000008;
    in_stack_00000004->param = fVar3;
    if (fVar3 <= in_stack_00000004->recombine_time) {
      return;
    }
    core_boneguy_cpp_FUN_0041d8a0();
  }
  if (in_stack_00000004->blown_up == 2) {
    fVar3 = in_stack_00000008 / _DAT_0065af68 + in_stack_00000004->param;
    in_stack_00000004->param = fVar3;
    if (fVar3 < 1.0) {
      local_1c = 0;
      if (in_stack_00000004->box_count < 1) {
        return;
      }
      local_2c = &in_stack_00000004->box_list_pos;
      local_24 = &in_stack_00000004->param;
      local_28 = &in_stack_00000004->box_list_dest_orient;
      local_20 = &in_stack_00000004->box_list_start_orient;
      local_18 = &in_stack_00000004->source_pos;
      do {
        pCVar13 = local_2c + local_1c * 6;
        local_44 = *(int *)((int)(pCVar13 + 5) + 8);
        local_70 = pCVar13->x - local_18->x;
        local_6c = pCVar13->y - local_18->y;
        local_68 = pCVar13->z - local_18->z;
        local_b8 = local_70 * *local_24;
        local_b4 = local_6c * *local_24;
        local_b0 = local_68 * *local_24;
        local_ac = local_18->x + local_b8;
        local_a8 = local_18->y + local_b4;
        local_a4 = local_18->z + local_b0;
        core_xform_cpp_slerpQuaternion_FUN_005f77e0
                  (local_28,local_20,(CQuaternion4f *)in_stack_00000004->param,in_stack_fffffe44);
        quat_ptr = &local_12c;
        pCVar13 = &local_88;
        local_12c.w = local_11c;
        pfVar14 = (float *)((int)&local_12c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        *(float *)((int)&local_12c + (uint)bVar15 * -8 + 4) = afStack_118[(uint)bVar15 * -2];
        *pfVar14 = afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        pfVar14[(uint)bVar15 * -2 + 1] =
             (afStack_118 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
        core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(pCVar13,quat_ptr);
        local_88.x = in_stack_00000004->param * (float)6.2831853070000001 + local_88.x;
        *(float *)(local_44 + 0x20) = local_ac;
        *(float *)(local_44 + 0x24) = local_a8;
        *(float *)(local_44 + 0x28) = local_a4;
        if ((CVector3f *)(local_44 + 0x30) != &local_88) {
          ((CVector3f *)(local_44 + 0x30))->x = local_88.x;
          *(float *)(local_44 + 0x34) = local_88.y;
          *(float *)(local_44 + 0x38) = local_88.z;
        }
        if ((float *)(local_44 + 0xccc) != &local_ac) {
          *(float *)(local_44 + 0xccc) = local_ac;
          *(float *)(local_44 + 0xcd0) = local_a8;
          *(float *)(local_44 + 0xcd4) = local_a4;
        }
        if ((CVector3f *)(local_44 + 0xcd8) != &local_88) {
          ((CVector3f *)(local_44 + 0xcd8))->x = local_88.x;
          *(float *)(local_44 + 0xcdc) = local_88.y;
          *(float *)(local_44 + 0xce0) = local_88.z;
        }
        local_28 = (CQuaternion4f *)&local_28[4].y;
        local_20 = (CQuaternion4f *)&local_20[4].y;
        local_18 = local_18 + 6;
        local_1c = local_1c + 1;
      } while (local_1c < in_stack_00000004->box_count);
      return;
    }
    iVar8 = 0;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
              (&(in_stack_00000004->base_enemy).base_character.model);
    pCVar11 = in_stack_00000004;
    if (0 < in_stack_00000004->box_count) {
      do {
        core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
        pCVar11->field9_0xbf80[0] = '\0';
        pCVar11->field9_0xbf80[1] = '\0';
        pCVar11->field9_0xbf80[2] = '\0';
        pCVar11->field9_0xbf80[3] = '\0';
        iVar8 = iVar8 + 1;
        pCVar11 = (CBoneGuy *)((pCVar11->base_enemy).base_character.base_actor.orient_matrix.m + 1);
      } while (iVar8 < in_stack_00000004->box_count);
    }
    in_stack_00000004->blown_up = 0;
    fVar3 = in_stack_00000004->recombine_time * (float)0.5;
    (in_stack_00000004->base_enemy).base_character.hit_points = 100.0;
    in_stack_00000004->recombine_time = fVar3;
    if (fVar3 <= (float)2.5) {
      in_stack_00000004->recombine_time = 2.5;
    }
  }
  (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.y =
       (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.z;
  (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.x =
       (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.y;
  local_38 = in_stack_00000008 * (in_stack_00000004->base_enemy).speed;
  pCVar1 = &(in_stack_00000004->base_enemy).base_character.model;
  while (0.0 < local_38) {
    iVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (iVar8 == 100) {
      if (*(int *)(in_stack_00000004->field1_0xbeb4 + 0x14) != 0) {
        in_stack_00000004->field1_0xbeb4[0x14] = '\0';
        in_stack_00000004->field1_0xbeb4[0x15] = '\0';
        in_stack_00000004->field1_0xbeb4[0x16] = '\0';
        in_stack_00000004->field1_0xbeb4[0x17] = '\0';
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0((CCharacter *)in_stack_00000004);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)in_stack_00000004);
    }
  }
  fVar3 = (in_stack_00000004->base_enemy).speed;
  fVar6 = (float)3.1415926535000001;
  fVar5 = (float)0.25;
  *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x28) =
       (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.z;
  *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar6 * fVar3 * fVar5;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar1->motion_controller);
  iVar8 = pSVar9->state_index;
  local_34 = iVar8;
  iVar10 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)in_stack_00000004);
  if (iVar10 == 0) {
    switch(iVar8) {
    case 0:
      core_enemy_cpp_CEnemy_FUN_004a9fd0(&in_stack_00000004->base_enemy);
      if (extraout_EAX == 0) {
        (*(in_stack_00000004->base_enemy).base_character.base_actor.vtable[1].
          getAllowedMeleeAttackTypes)((CDemonActor *)in_stack_00000004);
        if (*(int *)((in_stack_00000004->base_enemy).field6_0xbe38 + 4) != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      break;
    case 1:
      (*(in_stack_00000004->base_enemy).base_character.base_actor.vtable[1].
        getAllowedMeleeAttackTypes)((CDemonActor *)in_stack_00000004);
      if (*(int *)((in_stack_00000004->base_enemy).field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&in_stack_00000004->base_enemy);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
      }
      else {
        iVar8 = core_boneguy_cpp_FUN_0041cc40();
        if (iVar8 == 0) {
          local_30 = DAT_0065af58;
          if ((in_stack_00000004->base_enemy).base_character.carry_hands[1].carry_actor !=
              (CDemonActor *)0x0) {
            local_30 = DAT_0065af5c;
          }
          local_d0 = 0;
          local_c8 = local_30;
          local_cc = 0;
          (**(code **)(*(int *)(*(int *)((in_stack_00000004->base_enemy).field6_0xbe38 + 4) + 0x154)
                      + 0xbc))();
          iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            ((CCharacter *)in_stack_00000004);
          pCVar1 = &(in_stack_00000004->base_enemy).base_character.model;
          if (iVar8 < 0) {
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n");
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
          else {
            iVar8 = *(int *)((in_stack_00000004->base_enemy).field6_0xbe38 + 4);
            fVar3 = (in_stack_00000004->base_enemy).base_character.base_actor.location.position.x -
                    *(float *)(iVar8 + 0x20);
            fVar5 = (in_stack_00000004->base_enemy).base_character.base_actor.location.position.z -
                    *(float *)(iVar8 + 0x28);
            if ((SQRT(fVar5 * fVar5 + fVar3 * fVar3) <= local_30 + (float)0.5) &&
               (*(float *)(in_stack_00000004->base_enemy).field6_0xbe38 <= 0.0)) {
              if ((in_stack_00000004->base_enemy).base_character.carry_hands[1].carry_actor ==
                  (CDemonActor *)0x0) {
                iVar8 = 2;
              }
              else {
                iVar8 = 6;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,iVar8,1);
              sound_sndmain_cpp_killSfx_FUN_005a9c40
                        (*(uint *)(in_stack_00000004->field1_0xbeb4 + 0x18));
              (*((in_stack_00000004->base_enemy).base_character.base_actor.vtable)->playSound)
                        ((CDemonActor *)in_stack_00000004,"boneguy-swing?.wav");
              (in_stack_00000004->base_enemy).field6_0xbe38[0] = '\0';
              (in_stack_00000004->base_enemy).field6_0xbe38[1] = '\0';
              (in_stack_00000004->base_enemy).field6_0xbe38[2] = -0x80;
              (in_stack_00000004->base_enemy).field6_0xbe38[3] = '?';
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_180);
      local_180.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_180.attacker = (CDemonActor *)in_stack_00000004;
      local_180.wielder = (CDemonActor *)in_stack_00000004;
      local_14 = local_180.damage_amount;
      pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                          (&local_94,&g_ZeroVector,
                           (CMatrix3x4f *)
                           (in_stack_00000004->base_enemy).base_character.model.bone_transform.
                           bone_world_matrices[DAT_00822944].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_e8,pCVar13);
      core_enemy_cpp_FUN_004a9880();
      break;
    case 5:
      if (((in_stack_00000004->base_enemy).pool_me == 0) &&
         ((in_stack_00000004->base_enemy).base_character.base_actor.field11_0xdc == 0)) {
        (in_stack_00000004->base_enemy).pool_me = 1;
      }
      break;
    case 6:
      this_ptr = (in_stack_00000004->base_enemy).base_character.carry_hands[1].carry_actor;
      if (this_ptr != (CDemonActor *)0x0) {
        (*this_ptr->vtable->getBoundingBox)(this_ptr,&local_144);
        afStack_118[3] = local_144.min.x + local_144.max.x;
        local_c4.x = afStack_118[3] * 0.5f;
        local_108 = local_144.min.y + local_144.max.y;
        local_104 = local_144.min.z + local_144.max.z;
        local_c4.y = local_108 * 0.5f;
        local_c4.z = local_104 * 0.5f;
        if (&local_f4 != &local_c4) {
          local_f4.x = local_c4.x;
          local_f4.y = local_c4.y;
        }
        if (&local_100 != &local_f4) {
          local_100.x = local_f4.x;
          local_100.y = local_f4.y;
        }
        local_100.z = local_144.min.z;
        local_f4.z = local_144.max.z;
        pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                            ((in_stack_00000004->base_enemy).base_character.carry_hands[1].
                             carry_actor,&local_a0,&local_100);
        if (&local_100 != pCVar13) {
          local_100.x = pCVar13->x;
          local_100.y = pCVar13->y;
          local_100.z = pCVar13->z;
        }
        pCVar13 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                            ((in_stack_00000004->base_enemy).base_character.carry_hands[1].
                             carry_actor,&local_58,&local_f4);
        if (&local_f4 != pCVar13) {
          local_f4.x = pCVar13->x;
          local_f4.y = pCVar13->y;
          local_f4.z = pCVar13->z;
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe44);
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
        core_enemy_cpp_FUN_004a9930();
      }
    }
  }
  else {
    uVar4 = *(uint *)((in_stack_00000004->base_enemy).base_character.field11_0x25a0 + 0x10);
    if (uVar4 < 2) {
      if (uVar4 == 1) {
LAB_0041c3c9:
        iVar8 = 1;
      }
      else {
LAB_0041c60c:
        iVar8 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base_enemy).base_character.model.motion_controller,iVar8,1);
    }
    else {
      if (uVar4 < 3) goto LAB_0041c3c9;
      if (uVar4 != 3) goto LAB_0041c60c;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
    }
    (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
    (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.y =
         (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.z;
    (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.x =
         (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.y;
  }
  if (0.0 < *(float *)(in_stack_00000004->base_enemy).field6_0xbe38) {
    *(float *)(in_stack_00000004->base_enemy).field6_0xbe38 =
         *(float *)(in_stack_00000004->base_enemy).field6_0xbe38 - in_stack_00000008;
  }
  iVar8 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)in_stack_00000004);
  if (iVar8 != 0) {
    iVar8 = *(int *)((in_stack_00000004->base_enemy).field6_0xbe38 + 4);
    if ((iVar8 != 0) &&
       (pCVar11 = (CBoneGuy *)(**(code **)(*(int *)(iVar8 + 0x154) + 0x108))(),
       pCVar11 == in_stack_00000004)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)((in_stack_00000004->base_enemy).field6_0xbe38 + 4)
                );
    }
    *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_64 = *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_60 = *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar2 = (in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x10;
    local_5c = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x24);
    pCVar13 = &(in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion;
    local_7c = local_64 + *(float *)pcVar2;
    local_78 = local_60 +
               *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x14);
    local_74 = local_5c +
               *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x18);
    local_dc = local_7c + pCVar13->x;
    local_d8 = local_78 +
               (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.y;
    local_d4 = local_74 +
               (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.z;
    pCVar7 = &in_stack_00000004->base_enemy;
    (pCVar7->base_character).field2_0x240c[0x18] = '\0';
    (pCVar7->base_character).field2_0x240c[0x19] = '\0';
    (pCVar7->base_character).field2_0x240c[0x1a] = '\0';
    (pCVar7->base_character).field2_0x240c[0x1b] = '\0';
    *(uint *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x14) =
         *(uint *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x18);
    *(float *)pcVar2 =
         *(float *)((in_stack_00000004->base_enemy).base_character.field2_0x240c + 0x14);
    (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.z = 0.0;
    (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.y =
         (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.z;
    pCVar13->x = (in_stack_00000004->base_enemy).base_character.model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)in_stack_00000004);
  }
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base_enemy).base_character.model);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)in_stack_00000004);
  if ((local_34 == 1) &&
     (iVar8 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(in_stack_00000004->base_enemy).base_character.base_actor.location.
                                 position.x,
                         (double)(in_stack_00000004->base_enemy).base_character.base_actor.location.
                                 position.y,
                         (double)(in_stack_00000004->base_enemy).base_character.base_actor.location.
                                 position.z,100.0), iVar8 != 0)) {
    iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      (*(uint *)(in_stack_00000004->field1_0xbeb4 + 0x18));
    if (iVar8 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    iVar8 = 2;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_14,iVar8);
    uVar12 = (*((in_stack_00000004->base_enemy).base_character.base_actor.vtable)->playAmbientSound)
                       ((CDemonActor *)in_stack_00000004,"boneGuy-walkloop.wav");
    *(uint *)(in_stack_00000004->field1_0xbeb4 + 0x18) = uVar12;
    iStack_1b4 = 0x41c5d5;
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
LAB_0041c220:
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004->field1_0xbeb4 + 0x18));
  return;
}
