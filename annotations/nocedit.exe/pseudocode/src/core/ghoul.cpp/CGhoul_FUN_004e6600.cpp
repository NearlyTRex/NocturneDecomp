// Name: core_ghoul.cpp_CGhoul_FUN_004e6600
// Address: 004e6600
// Address Range: [[004e6600, 004e818c]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_CGhoul_FUN_004e6600()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_ghoul.cpp_CGhoul_FUN_004e6600(uint param_1, uint
   param_2) */

void core_ghoul_cpp_CGhoul_FUN_004e6600(void)

{
  CDeformableModelInstance *pCVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  CDemonActor_vtable *pCVar6;
  bool bVar7;
  CCharacter *pCVar8;
  CGame *pCVar9;
  int iVar10;
  SMotion *pSVar11;
  int iVar12;
  CEnemy *pCVar13;
  int extraout_EAX;
  CVector3f *pCVar14;
  int extraout_EAX_00;
  float fVar15;
  int extraout_EAX_01;
  uint uVar16;
  CLocation *pCVar17;
  BADSPACEBASE *in_ESP;
  char *pcVar18;
  char *pcVar19;
  char cVar20;
  float10 fVar21;
  float10 fVar22;
  double dVar23;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  int force_immediate;
  SCollisionInfo *in_stack_fffffc88;
  SCollisionInfo *in_stack_fffffc94;
  SDamageInfo local_314;
  SDamageInfo local_2d8;
  SDamageInfo local_29c;
  char local_260 [36];
  float local_23c;
  float local_230;
  CVector3f local_228;
  CVector3f local_21c;
  CVector3f local_210 [2];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  CVector3f local_1ec;
  CVector3f local_1e0;
  CVector3f local_1d4;
  CVector3f local_1c8;
  CVector3f local_1bc;
  CVector3f local_1b0;
  CVector3f local_1a4;
  CVector3f local_198;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  CVector3f local_174;
  CVector3f local_168;
  CVector3f local_15c;
  CVector3f local_150;
  CVector3f local_144;
  uint local_138;
  uint local_134;
  float local_130;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  float local_118;
  CVector3f local_114;
  CVector3f local_108;
  uint local_fc;
  uint local_f8;
  float local_f4;
  CVector3f local_f0;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_8c;
  int local_84;
  float local_7c;
  float local_78;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CMotionController *local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  float local_14;
  
  iVar10 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar10 == 0) {
    return;
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
  local_64 = in_stack_00000008 * in_stack_00000004->speed;
  local_18 = &(in_stack_00000004->base_character).model;
switchD_004e6f9a_caseD_e:
  pCVar1 = local_18;
  if (0.0 < local_64) {
    iVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_18->motion_controller);
    switch(iVar10) {
    case 5:
      if ((((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
           (iVar10 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                                 0x120))(), iVar10 == 0)) &&
          (iVar10 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                                0x108))(), iVar10 == 0)) &&
         (iVar10 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                               0xfc))(), iVar10 != 0)) {
        local_174.z = DAT_0065ed18;
        local_174.x = 0.0;
        local_174.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_1c8,&local_174);
        fVar15 = local_1c8.x - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
        fVar3 = local_1c8.z - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
        bVar7 = SQRT(fVar3 * fVar3 + fVar15 * fVar15) <= 1.0;
        if (((ABS(local_1c8.y - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x24))
              <= (float)4) &&
            ((!bVar7 ||
             (iVar10 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154)
                                   + 0x100))(), iVar10 != 0)))) && (bVar7)) break;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&local_18->motion_controller,1,1);
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
      break;
    case 10:
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      else {
        pCVar13 = (CEnemy *)
                  (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                              0x108))();
        if (pCVar13 == in_stack_00000004) {
          iVar10 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                               0x120))();
          if (iVar10 == 0) {
            (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0x14))()
            ;
            iVar10 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
            local_168.x = *(float *)(iVar10 + 0x20);
            local_168.z = *(float *)(iVar10 + 0x28);
            local_168.y = (local_230 - local_23c) * (float)0.69999999999999996 +
                          *(float *)(iVar10 + 0x24);
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_29c);
            local_29c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
            local_14 = local_29c.damage_amount;
            pCVar14 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                (*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4),&local_f0,
                                 &local_168);
            if (&local_29c.impact_direction != pCVar14) {
              local_29c.impact_direction.x = pCVar14->x;
              local_29c.impact_direction.y = pCVar14->y;
              local_29c.impact_direction.z = pCVar14->z;
            }
            local_29c.attacker = (CDemonActor *)in_stack_00000004;
            local_29c.wielder = (CDemonActor *)in_stack_00000004;
            (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0x11c))
                      ();
            local_ac = (double)local_29c.damage_amount;
            if (0.0 < local_ac) {
              dVar23 = crt_math_c_round_FUN_005fe6b0(local_ac * 2.5 * 0.25);
              local_70 = (int)ROUND(dVar23);
              core_gore_cpp_FUN_004edbb0();
            }
            if (*(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x243c) <= 0.0) {
              (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0x104)
              )();
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&local_18->motion_controller,1,1);
            }
            (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                      ((CDemonActor *)in_stack_00000004,"ghoul-eat-?.wav");
          }
          else {
            (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0x104))
                      ();
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(local_18);
      iVar12 = DAT_02d83300;
      if (iVar10 == 0xc) {
        iVar12 = DAT_02d83304;
      }
      pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (local_18,&local_1e0,iVar12);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_1d4,pCVar14);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar23 = crt_math_c_round_FUN_005fe6b0((double)(local_14 * (float)0.25));
      local_58 = (int)ROUND(dVar23);
      core_gore_cpp_FUN_004edbb0();
      (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                ((CDemonActor *)in_stack_00000004,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
      pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar1,&local_1b0,DAT_02d832fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_228,pCVar14);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar23 = crt_math_c_round_FUN_005fe6b0((double)(local_14 * (float)0.25));
      local_54 = (int)ROUND(dVar23);
      core_gore_cpp_FUN_004edbb0();
      (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                ((CDemonActor *)in_stack_00000004,"ghoul-eat-?.wav @1.3");
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
      pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar1,&local_1ec,DAT_02d832fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_15c,pCVar14);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      dVar23 = crt_math_c_round_FUN_005fe6b0((double)(local_14 * (float)0.25));
      local_84 = (int)ROUND(dVar23);
      core_gore_cpp_FUN_004edbb0();
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      if (iVar10 == 0) {
        pcVar18 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar18 = "ghoul-eat-?.wav @1.3";
      }
      pcVar19 = local_260;
      do {
        cVar20 = *pcVar18;
        *pcVar19 = cVar20;
        if (cVar20 == '\0') break;
        cVar20 = pcVar18[1];
        pcVar18 = pcVar18 + 2;
        pcVar19[1] = cVar20;
        pcVar19 = pcVar19 + 2;
      } while (cVar20 != '\0');
      (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                ((CDemonActor *)in_stack_00000004,local_260);
    }
    goto switchD_004e6f9a_caseD_e;
  }
  local_14 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&local_18->motion_controller,1);
  local_8c = (double)in_stack_00000008;
  fVar15 = in_stack_00000004->speed;
  fVar3 = (float)1.57079632675;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       in_stack_00000004->speed * local_14 * (float)3 * in_stack_00000008;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar3 * fVar15;
  pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&local_18->motion_controller);
  iVar10 = pSVar11->state_index;
  if (iVar10 == 0x11) {
    fVar15 = in_stack_00000004->speed;
    fVar21 = (float10)8;
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
         (float)(fVar21 * (float10)*(float *)((in_stack_00000004->base_character).field2_0x240c +
                                             0x2c));
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
         (float)((float10)local_8c * fVar21 * (float10)fVar15);
  }
  iVar12 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar12 == 0) {
    local_20 = -1.0;
    pCVar1 = &(in_stack_00000004->base_character).model;
    pSVar11 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&pCVar1->motion_controller);
    switch(pSVar11->state_index) {
    case 0:
      if ((float)in_stack_00000004[1].base_character.base_actor.health <= 0.0) {
        iVar12 = in_stack_00000004[1].base_character.base_actor.field6_0x68;
        if (iVar12 == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
          if (extraout_EAX_00 != 0) goto LAB_004e7576;
          (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                    ((CDemonActor *)in_stack_00000004);
          if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->base_character).model.motion_controller,1,1);
            iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                               ((uint)in_stack_00000004[1].base_character.base_actor.orient_matrix.m
                                      [2].y);
            if ((iVar12 == 0) ||
               (iVar12 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                   ((uint)in_stack_00000004[1].base_character.base_actor.
                                          orient_matrix.m[2].z), iVar12 == 0)) {
              fVar15 = (float)(*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                        ((CDemonActor *)in_stack_00000004,"ghoul-alert-?.wav"
                                        );
              in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].y = fVar15;
            }
          }
        }
        else {
          local_180 = *(float *)(iVar12 + 0x20) -
                      (in_stack_00000004->base_character).base_actor.location.position.x;
          local_17c = *(float *)(iVar12 + 0x24) -
                      (in_stack_00000004->base_character).base_actor.location.position.y;
          local_178 = *(float *)(iVar12 + 0x28) -
                      (in_stack_00000004->base_character).base_actor.location.position.z;
          if (SQRT(local_178 * local_178 + local_180 * local_180 + local_17c * local_17c) <
              (float)4) {
            fVar15 = (in_stack_00000004->base_character).hit_points + in_stack_00000008;
            in_stack_00000004[1].base_character.base_actor.field7_0x6c =
                 (int)((float)in_stack_00000004[1].base_character.base_actor.field7_0x6c -
                      in_stack_00000008);
            (in_stack_00000004->base_character).hit_points = fVar15;
            if ((float)100 < fVar15) {
              (in_stack_00000004->base_character).hit_points = 100.0;
            }
            if ((float)in_stack_00000004[1].base_character.base_actor.field7_0x6c < 0.0) {
              in_stack_00000004[1].base_character.base_actor.field7_0x6c = 0;
              in_stack_00000004[1].base_character.base_actor.field6_0x68 = 0;
            }
          }
        }
      }
      else {
        in_stack_00000004[1].base_character.base_actor.health =
             (int)((float)in_stack_00000004[1].base_character.base_actor.health - in_stack_00000008)
        ;
      }
      break;
    case 1:
    case 0x11:
      if ((in_stack_00000004[1].base_character.base_actor.was_created != 0) && (iVar10 == 1)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,0x11,1);
      }
      if (0.0 < (float)in_stack_00000004[1].base_character.base_actor.health) {
        in_stack_00000004[1].base_character.base_actor.health =
             (int)((float)in_stack_00000004[1].base_character.base_actor.health - in_stack_00000008)
        ;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,0,1);
      }
      else {
        (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
        (in_stack_00000004->base_character).model.accumulated_root_motion.y =
             (in_stack_00000004->base_character).model.accumulated_root_motion.z;
        (in_stack_00000004->base_character).model.accumulated_root_motion.x =
             (in_stack_00000004->base_character).model.accumulated_root_motion.y;
        cVar20 = (in_stack_00000004->base_character).model.part_visibility_flags
                 [(int)in_stack_00000004[1].base_character.base_actor.orient.pitch] != 0;
        if ((in_stack_00000004->base_character).model.part_visibility_flags
            [(int)in_stack_00000004[1].base_character.base_actor.orient.heading] != 0) {
          cVar20 = cVar20 + '\x01';
        }
        iVar12 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                   hasCollision)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffc88);
        pCVar9 = g_CGamePtr;
        if (iVar12 == 0) {
          (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                    ((CDemonActor *)in_stack_00000004);
          iVar12 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
          if (iVar12 == 0) {
            core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
            if (extraout_EAX_01 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base_character).model.motion_controller,0,1);
            }
          }
          else {
            local_1f8 = *(float *)(iVar12 + 0x20) -
                        (in_stack_00000004->base_character).base_actor.location.position.x;
            local_1f0 = *(float *)(iVar12 + 0x28) -
                        (in_stack_00000004->base_character).base_actor.location.position.z;
            local_1f4 = 0.0;
            if ((((in_stack_00000004->base_character).hit_points < (float)25) &&
                (cVar20 != '\0')) &&
               (in_stack_00000004[1].base_character.base_actor.field6_0x68 == 0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0();
            }
            local_30 = &(in_stack_00000004->base_character).model.motion_controller;
            iVar12 = in_stack_00000004[1].base_character.base_actor.field6_0x68;
            if (iVar12 == 0) {
              local_fc = 0;
              local_f4 = DAT_0065ed18;
              local_f8 = 0;
              (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))
                        ();
              iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                 (&in_stack_00000004->base_character);
              if (iVar12 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0,1);
              }
              else if (((0 < iVar12) && (cVar20 != '\0')) &&
                      ((*(float *)in_stack_00000004->field6_0xbe38 <= 0.0 &&
                       ((iVar12 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 +
                                                                4) + 0x154) + 0x108))(), iVar12 == 0
                        && (*(float *)(in_stack_00000004[1].base_character.base_actor.actor_name +
                                      0x1c) <= 0.0)))))) {
                local_48 = SQRT(local_1f0 * local_1f0 +
                                local_1f8 * local_1f8 + local_1f4 * local_1f4);
                local_24 = 0.0;
                local_40 = 0.0;
                local_38 = 0.0;
                if ((in_stack_00000004->base_character).model.part_visibility_flags
                    [(int)in_stack_00000004[1].base_character.base_actor.orient.heading] != 0) {
                  local_24 = (1.0 - ABS(local_48 - DAT_0065ed1c) / DAT_0065ed1c) *
                             (float)0.29999999999999999;
                }
                if ((in_stack_00000004->base_character).model.part_visibility_flags
                    [(int)in_stack_00000004[1].base_character.base_actor.orient.pitch] != 0) {
                  local_40 = (1.0 - ABS(local_48 - DAT_0065ed20) / DAT_0065ed20) *
                             (float)0.40000000000000002;
                }
                local_44 = local_48;
                iVar12 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) +
                                              0x154) + 0xfc))();
                if (iVar12 != 0) {
                  local_38 = (1.0 - ABS(local_48 - DAT_0065ed18) / DAT_0065ed18) *
                             (float)0.29999999999999999;
                }
                local_3c = local_24 + local_40;
                local_34 = local_3c + local_38;
                if (0.0 < local_34) {
                  local_28 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,local_34);
                  if (local_24 <= local_28) {
                    if (local_3c <= local_28) {
                      iVar12 = 0xb;
                    }
                    else {
                      iVar12 = 0xc;
                    }
                  }
                  else {
                    iVar12 = 2;
                  }
                  local_14 = local_28;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&(in_stack_00000004->base_character).model.motion_controller,iVar12,1);
                  builtin_strncpy(in_stack_00000004->field6_0xbe38,"333?",4);
                }
              }
            }
            else {
              (**(code **)(*(int *)(iVar12 + 0x154) + 0xbc))();
              iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                 (&in_stack_00000004->base_character);
              if (0 < iVar12) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0,1);
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,30.0);
                in_stack_00000004[1].base_character.base_actor.field7_0x6c = (int)local_14;
              }
              if (iVar12 < 0) {
                in_stack_00000004[1].base_character.base_actor.field7_0x6c = 0x41f00000;
                in_stack_00000004[1].base_character.base_actor.field6_0x68 = 0;
              }
              if (iVar10 == 1) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(in_stack_00000004->base_character).model.motion_controller,0x11,1);
              }
            }
          }
        }
        else {
          if (*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) < 0) {
            cVar20 = (in_stack_00000004->base_character).model.part_visibility_flags
                     [(int)in_stack_00000004[1].base_character.base_actor.orient.pitch] != 0;
            if ((in_stack_00000004->base_character).model.part_visibility_flags
                [(int)in_stack_00000004[1].base_character.base_actor.orient.heading] != 0) {
              cVar20 = cVar20 + '\x01';
            }
            if (cVar20 != '\0') {
              if (cVar20 == '\x01') {
                pCVar8 = &in_stack_00000004[1].base_character;
                (pCVar8->base_actor).actor_name[0x18] = '\x0e';
                (pCVar8->base_actor).actor_name[0x19] = '\0';
                (pCVar8->base_actor).actor_name[0x1a] = '\0';
                (pCVar8->base_actor).actor_name[0x1b] = '\0';
                pCVar9->field73_0x220 = 1;
              }
              else {
                iVar12 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
                *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) =
                     (iVar12 == 0) + 0xd;
                g_CGamePtr->field73_0x220 = 1;
              }
              goto LAB_004e7a33;
            }
            pCVar8 = &in_stack_00000004[1].base_character;
            (pCVar8->base_actor).actor_name[0x18] = '\0';
            (pCVar8->base_actor).actor_name[0x19] = '\0';
            (pCVar8->base_actor).actor_name[0x1a] = '\0';
            (pCVar8->base_actor).actor_name[0x1b] = '\0';
          }
          else {
LAB_004e7a33:
            if (*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) != 0) {
              local_2c = DAT_0065ed24;
              if (*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) == 0xe)
              {
                local_2c = DAT_0065ed28;
              }
              local_dc = local_2c;
              local_e4 = 0;
              local_e0 = 0;
              (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->getPathMap)
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
              pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                                  (&(g_HeroActors[g_LocalHeroIndex]->base_character).model,
                                   &local_198,0);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_150,pCVar14);
              iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                 (&in_stack_00000004->base_character);
              if (((0 < iVar12) &&
                  (iVar12 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                              hasCollision)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                                            in_stack_fffffc94), iVar12 == 2)) &&
                 (core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&(in_stack_00000004->base_character).model.motion_controller,
                             *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name +
                                     0x18),1),
                 *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) == 0xd))
              {
                pCVar6 = (in_stack_00000004->base_character).base_actor.vtable;
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.5,1.2);
                (*pCVar6->playSoundWithVolume)
                          ((CDemonActor *)in_stack_00000004,"ghoul-scream-!-?.wav",local_14);
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,0,1);
        }
      }
      break;
    case 2:
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
LAB_004e7576:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,1,1);
      }
      else {
        iVar12 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                             0x108))();
        if (iVar12 == 0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          fVar15 = in_stack_00000004[1].base_character.base_actor.orient.heading;
          *(float *)in_stack_00000004->field6_0xbe38 = local_14;
          if ((in_stack_00000004->base_character).model.part_visibility_flags[(int)fVar15] != 0) {
            local_50 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                                 (&pCVar1->motion_controller);
            local_9c = (double)local_50;
            local_14 = local_50;
            if ((local_50 <= (float)2) && (local_20 = DAT_0065ed1c, 1.0 <= local_9c))
            {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2d8);
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              local_2d8.damage_amount = local_14;
              if (in_stack_00000004[1].base_character.base_actor.was_created != 0) {
                local_2d8.damage_amount = local_14 * (float)2;
              }
              local_2d8.attacker = (CDemonActor *)in_stack_00000004;
              local_2d8.wielder = (CDemonActor *)in_stack_00000004;
              pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                  (&local_114,(CVector3f *)&DAT_02d832b4,
                                   (CMatrix3x4f *)
                                   (in_stack_00000004->base_character).model.bone_transform.
                                   bone_world_matrices[DAT_02d83304].m);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)in_stack_00000004,&local_1bc,pCVar14);
              iVar12 = core_enemy_cpp_FUN_004a9880();
              if (iVar12 != 0) {
                (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                          ((CDemonActor *)in_stack_00000004,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      break;
    case 10:
      if (((in_stack_00000004->pool_me == 0) &&
          ((int)in_stack_00000004[1].base_character.base_actor.location.position.y < 1)) &&
         ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
        pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar1,&local_12c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_108,pCVar14);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
      fVar15 = in_stack_00000004[1].base_character.base_actor.location.position.z;
      in_stack_00000004[1].base_character.base_actor.was_created = 0;
      if (((0 < (int)fVar15) ||
          (0 < (int)in_stack_00000004[1].base_character.base_actor.location.position.y)) &&
         (iVar12 = *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) -
                   g_GlobalDeltaTimeInt,
         *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = iVar12,
         iVar12 < 1)) {
        if ((int)in_stack_00000004[1].base_character.base_actor.location.position.y < 1) {
          pfVar2 = &in_stack_00000004[1].base_character.base_actor.location.position.z;
          *pfVar2 = (float)((int)*pfVar2 + -1);
        }
        if ((0 < (int)in_stack_00000004[1].base_character.base_actor.location.position.z) ||
           (0 < (int)in_stack_00000004[1].base_character.base_actor.location.position.y)) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,12.0);
          force_immediate = 0xf;
          iVar12 = 0x4e71df;
          dVar23 = crt_math_c_round_FUN_005fe6b0((double)(local_14 * (float)65536));
          *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) =
               (int)ROUND(dVar23);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,iVar12,
                     force_immediate);
        }
      }
      if (0 < (int)in_stack_00000004[1].base_character.base_actor.location.position.y) {
        if (*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) < 1) {
          iVar12 = *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) +
                   g_GlobalDeltaTimeInt;
          *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) = iVar12;
          if (iVar12 < 0) {
            (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                      ((CDemonActor *)in_stack_00000004);
            iVar12 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
            if (iVar12 != 0) {
              local_120 = (in_stack_00000004->base_character).base_actor.location.position.x -
                          *(float *)(iVar12 + 0x20);
              local_11c = (in_stack_00000004->base_character).base_actor.location.position.y -
                          *(float *)(iVar12 + 0x24);
              local_118 = (in_stack_00000004->base_character).base_actor.location.position.z -
                          *(float *)(iVar12 + 0x28);
              if (&local_c0 != &local_120) {
                local_c0 = local_120;
                local_bc = local_11c;
                local_b8 = local_118;
              }
              local_7c = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
              local_78 = (float)(((int)local_7c >> 1) + DAT_02d7a7b8);
              if (local_78 < (float)8) goto LAB_004e7243;
            }
          }
          else {
            pCVar8 = &in_stack_00000004[1].base_character;
            (pCVar8->base_actor).actor_name[0x14] = '\0';
            (pCVar8->base_actor).actor_name[0x15] = '\0';
            (pCVar8->base_actor).actor_name[0x16] = '\0';
            (pCVar8->base_actor).actor_name[0x17] = '\0';
LAB_004e7243:
            local_1c = *(float *)((in_stack_00000004->base_character).cloth_data + 0x358);
            if (local_1c < *(float *)((in_stack_00000004->base_character).cloth_data + 0x354)) {
              local_1c = (in_stack_00000004->base_character).model.bounding_box.max.y;
            }
            if (local_1c < *(float *)((in_stack_00000004->base_character).cloth_data + 0x354)) {
              local_1c = *(float *)((in_stack_00000004->base_character).cloth_data + 0x354) +
                         (float)0.5;
            }
            iVar12 = 0;
            do {
              local_68 = (float)iVar12 * (float)6.2831853070000001 * (float)0.25;
              local_14 = (float)iVar12;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,(CDemonActor *)in_stack_00000004);
              fVar21 = (float10)fcos((float10)local_68);
              fVar22 = (float10)fsin((float10)local_68);
              local_6c = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                                   (g_CDemonSetPtr,
                                    (in_stack_00000004->base_character).base_actor.location.position
                                    .x,(in_stack_00000004->base_character).base_actor.location.
                                       position.z,(float)(fVar22 * (float10)0.050000000000000003),
                                    (float)(fVar21 * (float10)0.050000000000000003),
                                    *(float *)((in_stack_00000004->base_character).cloth_data +
                                              0x348),
                                    (void *)((in_stack_00000004->base_character).base_actor.location
                                             .position.y +
                                            *(float *)((in_stack_00000004->base_character).
                                                       cloth_data + 0x354)),
                                    (void *)((in_stack_00000004->base_character).base_actor.location
                                             .position.y + local_1c));
              local_14 = local_6c;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              if (local_6c < 1.0) break;
              iVar12 = iVar12 + 1;
            } while (iVar12 < 4);
            if (iVar12 < 4) {
              pCVar8 = &in_stack_00000004[1].base_character;
              (pCVar8->base_actor).actor_name[0x14] = '\x03';
              (pCVar8->base_actor).actor_name[0x15] = '\0';
              (pCVar8->base_actor).actor_name[0x16] = '\0';
              (pCVar8->base_actor).actor_name[0x17] = '\0';
              in_stack_00000004->field6_0xbe38[4] = '\0';
              in_stack_00000004->field6_0xbe38[5] = '\0';
              in_stack_00000004->field6_0xbe38[6] = '\0';
              in_stack_00000004->field6_0xbe38[7] = '\0';
            }
            else {
              local_14 = (float)((int)in_stack_00000004[1].base_character.base_actor.location.
                                      position.y + 1);
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                                   (10.0,(float)(int)local_14 * (float)10);
              (in_stack_00000004->base_character).hit_points = local_14;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base_character).model.motion_controller,0x10,1);
            }
          }
        }
        else {
          iVar12 = *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) -
                   g_GlobalDeltaTimeInt;
          *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) = iVar12;
          if (iVar12 < 1) {
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,30.0);
            dVar23 = crt_math_c_round_FUN_005fe6b0((double)(-local_14 * 65536f));
            *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) =
                 (int)ROUND(dVar23);
          }
        }
      }
      break;
    case 0xb:
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
LAB_004e7d9a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      else {
        iVar12 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                             0x108))();
        if (iVar12 == 0) {
          local_20 = DAT_0065ed18;
        }
        else {
          pCVar13 = (CEnemy *)
                    (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                                0x108))();
          if (pCVar13 != in_stack_00000004) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
          }
        }
      }
      break;
    case 0xc:
      if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) ||
         (iVar12 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                               0x108))(), iVar12 != 0)) goto LAB_004e7d9a;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
      fVar15 = in_stack_00000004[1].base_character.base_actor.orient.pitch;
      *(float *)in_stack_00000004->field6_0xbe38 = local_14;
      if ((in_stack_00000004->base_character).model.part_visibility_flags[(int)fVar15] != 0) {
        local_4c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                             (&pCVar1->motion_controller);
        local_a4 = (double)local_4c;
        local_14 = local_4c;
        if (local_4c <= (float)2) {
          local_20 = DAT_0065ed20;
          if (1.0 <= local_a4) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_314);
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
            local_314.damage_amount = local_14;
            if (in_stack_00000004[1].base_character.base_actor.was_created != 0) {
              local_314.damage_amount = local_14 * (float)2;
            }
            local_314.attacker = (CDemonActor *)in_stack_00000004;
            local_314.wielder = (CDemonActor *)in_stack_00000004;
            pCVar14 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                (local_210,(CVector3f *)&DAT_02d832a8,
                                 (CMatrix3x4f *)
                                 (in_stack_00000004->base_character).model.bone_transform.
                                 bone_world_matrices[DAT_02d83300].m);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)in_stack_00000004,&local_21c,pCVar14);
            iVar12 = core_enemy_cpp_FUN_004a9880();
            if (iVar12 != 0) {
              (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                        ((CDemonActor *)in_stack_00000004,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar12 = *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) -
               g_GlobalDeltaTimeInt;
      *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) = iVar12;
      if (iVar12 < 1) {
        (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                  ((CDemonActor *)in_stack_00000004,"burp[1,2].wav");
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
        dVar23 = crt_math_c_round_FUN_005fe6b0((double)(local_14 * (float)65536));
        *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) =
             (int)ROUND(dVar23);
      }
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,0,1);
      }
    }
    if (((0.0 <= local_20) &&
        (*(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) <= 0.0)) &&
       (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0)) {
      local_138 = 0;
      local_134 = 0;
      local_130 = local_20;
      (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
      pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          ((CDeformableModelInstance *)
                           (*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x158),&local_1a4,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4),&local_144,pCVar14);
      iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                         (&in_stack_00000004->base_character);
      if (iVar12 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,1,1);
        (in_stack_00000004->base_character).field2_0x240c[0xc] = '\0';
        (in_stack_00000004->base_character).field2_0x240c[0xd] = '\0';
        (in_stack_00000004->base_character).field2_0x240c[0xe] = '\0';
        (in_stack_00000004->base_character).field2_0x240c[0xf] = '\0';
      }
    }
    goto LAB_004e6754;
  }
  uVar5 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
  if (uVar5 < 2) {
    if (uVar5 == 1) {
      iVar12 = 1;
    }
    else {
LAB_004e6fdc:
      iVar12 = 0;
    }
LAB_004e672d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,iVar12,1);
  }
  else {
    if (uVar5 < 3) {
      iVar12 = 0x11;
      goto LAB_004e672d;
    }
    if (uVar5 != 3) goto LAB_004e6fdc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
LAB_004e6754:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  iVar12 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
  if (iVar12 != 0) {
    if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
       (pCVar13 = (CEnemy *)
                  (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                              0x108))(), pCVar13 == in_stack_00000004)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4));
    }
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_cc = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_c8 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar18 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_c4 = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pCVar14 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
    local_d8 = local_cc + *(float *)pcVar18;
    local_d4 = local_c8 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_d0 = local_c4 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_18c = local_d8 + pCVar14->x;
    local_188 = local_d4 + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    local_184 = local_d0 + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
    *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    *(float *)pcVar18 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
    (in_stack_00000004->base_character).model.accumulated_root_motion.y =
         (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    pCVar14->x = (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  pCVar1 = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  fVar15 = *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c);
  local_b4 = (double)fVar15;
  if (0.0 < local_b4) {
    local_60 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&pCVar1->motion_controller,
                          (int)in_stack_00000004[1].base_character.base_actor.location.position.x,
                          1.0 - fVar15);
    fVar15 = 1.0 - *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c);
    local_5c = 1.0 - fVar15 * fVar15 * fVar15;
    local_14 = local_60;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (pCVar1,(int)in_stack_00000004[1].base_character.base_actor.location.position.x,
               local_60,local_5c,DAT_02d83320,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    fVar15 = *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) -
             in_stack_00000008 / _DAT_0065ed2c;
    *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) = fVar15;
    if (fVar15 < 0.0) {
      pCVar8 = &in_stack_00000004[1].base_character;
      (pCVar8->base_actor).actor_name[0x1c] = '\0';
      (pCVar8->base_actor).actor_name[0x1d] = '\0';
      (pCVar8->base_actor).actor_name[0x1e] = '\0';
      (pCVar8->base_actor).actor_name[0x1f] = '\0';
    }
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  if (((float)0.01 <
       ABS(*(float *)((in_stack_00000004->base_character).field2_0x240c + 0xc))) ||
     (fVar15 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14),
     fVar3 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x10),
     fVar4 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18),
     (float)0.01 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar15 * fVar15))) {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
              (g_CSoundPtr,*(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8))
    ;
    if (extraout_EAX == 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffc88,"ghoul-walk-?.wav *%f",(double)in_stack_00000004->speed);
      uVar16 = (*((in_stack_00000004->base_character).base_actor.vtable)->playAmbientSound)
                         ((CDemonActor *)in_stack_00000004,&stack0xfffffc88);
      *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) = uVar16;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_005b3b90
              (g_CSoundPtr,*(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8))
    ;
  }
  if (in_stack_00000004->pool_me == 0) {
    if ((in_stack_00000004->base_character).model.part_visibility_flags
        [(int)in_stack_00000004[1].base_character.base_actor.orient_matrix.m[1].z] != 0) {
      core_charactr_cpp_CCharacter_FUN_0042b760(&in_stack_00000004->base_character);
      if ((in_stack_00000004->base_character).model.part_visibility_flags
          [in_stack_00000004[1].base_character.base_actor.location.area_id] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760(&in_stack_00000004->base_character);
      }
      core_charactr_cpp_CCharacter_FUN_0042b760(&in_stack_00000004->base_character);
      if ((in_stack_00000004->base_character).model.part_visibility_flags
          [(int)in_stack_00000004[1].base_character.base_actor.orient.bank] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760(&in_stack_00000004->base_character);
      }
    }
    core_charactr_cpp_CCharacter_FUN_0042b810(&in_stack_00000004->base_character);
    core_charactr_cpp_CCharacter_FUN_0042b670(&in_stack_00000004->base_character);
  }
  if ((in_stack_00000004[1].base_character.base_actor.field6_0x68 != 0) && (iVar10 == 0x11)) {
    fVar15 = (in_stack_00000004->base_character).base_actor.location.position.x -
             *(float *)in_stack_00000004[1].base_character.base_actor.create_event;
    fVar3 = (in_stack_00000004->base_character).base_actor.location.position.z -
            *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 8);
    if (in_stack_00000008 * (float)0.5 <= SQRT(fVar3 * fVar3 + fVar15 * fVar15)) {
      in_stack_00000004[1].base_character.base_actor.create_prob = 1.0;
    }
    else {
      in_stack_00000008 =
           in_stack_00000004[1].base_character.base_actor.create_prob - in_stack_00000008;
      in_stack_00000004[1].base_character.base_actor.create_prob = in_stack_00000008;
      if (in_stack_00000008 < 0.0) {
        in_stack_00000004[1].base_character.base_actor.field7_0x6c = 0x41f00000;
        in_stack_00000004[1].base_character.base_actor.field6_0x68 = 0;
        in_stack_00000004[1].base_character.base_actor.was_created = 0;
      }
    }
  }
  pcVar18 = in_stack_00000004[1].base_character.base_actor.create_event;
  pCVar17 = &(in_stack_00000004->base_character).base_actor.location;
  if ((CLocation *)pcVar18 == pCVar17) {
    return;
  }
  *(float *)pcVar18 = (pCVar17->position).x;
  *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 4) =
       (in_stack_00000004->base_character).base_actor.location.position.y;
  *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 8) =
       (in_stack_00000004->base_character).base_actor.location.position.z;
  return;
}
