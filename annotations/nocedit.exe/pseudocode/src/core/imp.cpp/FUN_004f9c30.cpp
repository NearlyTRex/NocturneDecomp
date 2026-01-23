// Name: core_imp.cpp_FUN_004f9c30
// Address: 004f9c30
// Address Range: [[004f9c30, 004fa8f3]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004f9c30()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_imp.cpp_FUN_004f9c30(uint param_1, uint param_2)
    */

void core_imp_cpp_FUN_004f9c30(void)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  CCharacter *pCVar6;
  int iVar7;
  uint uVar8;
  CVector3f *pCVar9;
  SMotion *pSVar10;
  int iVar11;
  CEnemy *pCVar12;
  int extraout_EAX;
  int extraout_EAX_00;
  uint uVar13;
  double dVar14;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  SCollisionInfo *in_stack_fffffe60;
  SCollisionInfo *in_stack_fffffe68;
  SDamageInfo local_164;
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_11c;
  float local_110;
  float local_10c;
  float local_108;
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
  int local_98;
  int local_94;
  float local_90;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  int local_3c;
  float local_34;
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar7 == 0) {
    return;
  }
  if (((in_stack_00000004->base_character).model.part_visibility_flags
       [(int)in_stack_00000004[1].base_character.base_actor.orient.heading] == 0) &&
     (iVar7 = (*(in_stack_00000004->base_character).base_actor.vtable[1].hasCollision)
                        ((CDemonActor *)in_stack_00000004,in_stack_fffffe60), iVar7 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,6,1);
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
  local_34 = in_stack_00000008 * in_stack_00000004->speed;
  pCVar1 = &(in_stack_00000004->base_character).model;
LAB_004f9c99:
  if (0.0 < local_34) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar1->motion_controller);
    if (uVar8 < 0x29a) {
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
      goto LAB_004f9c99;
    }
    if (uVar8 < 0x29b) {
      if ((((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
           (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                                0x120))(), iVar7 == 0)) &&
          (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                               0x108))(), iVar7 == 0)) &&
         (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                              0xfc))(), iVar7 != 0)) {
        local_50.z = 0x40000000;
        local_50.x = 0.0;
        local_50.y = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_68,&local_50);
        fVar3 = local_68.x - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
        fVar5 = local_68.z - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
        bVar4 = (float)0.80000000000000004 < SQRT(fVar5 * fVar5 + fVar3 * fVar3);
        if (((ABS(local_68.y - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x24)) <=
              (float)4) &&
            ((bVar4 || (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4)
                                                     + 0x154) + 0x100))(), iVar7 != 0)))) &&
           (!bVar4)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,9,1);
          goto LAB_004f9c99;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,0,1)
      ;
      goto LAB_004f9c99;
    }
    if (uVar8 == 0x29b) {
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,0,1);
      }
      else {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (pCVar1,&local_104,DAT_02db89f4);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_8c,pCVar9);
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_164);
        local_164.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
        local_164.attacker = (CDemonActor *)in_stack_00000004;
        local_164.wielder = (CDemonActor *)in_stack_00000004;
        local_14 = local_164.damage_amount;
        (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0x11c))();
        dVar14 = crt_math_c_round_FUN_005fe6b0
                           ((double)(local_164.damage_amount * (float)2.5 *
                                    (float)0.25));
        local_3c = (int)ROUND(dVar14);
        core_gore_cpp_FUN_004edbb0();
        iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                            0x120))();
        if (iVar7 < 1) {
          (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                    ((CDemonActor *)in_stack_00000004,"ghoul-eat-?.wav");
        }
        else {
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0x104))();
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
    }
    goto LAB_004f9c99;
  }
  fVar3 = in_stack_00000004->speed;
  fVar5 = (float)3.1415926535000001;
  pCVar1 = &(in_stack_00000004->base_character).model;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar3;
  pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                      (&pCVar1->motion_controller);
  iVar7 = pSVar10->state_index;
  local_24 = iVar7;
  iVar11 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar11 == 0) {
    switch(iVar7) {
    case 0:
      iVar7 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision)
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffe68);
      if (iVar7 == 0) {
        (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                  ((CDemonActor *)in_stack_00000004);
        iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
        if (iVar7 == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
          if (extraout_EAX != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
          }
        }
        else if (*(int *)(iVar7 + 0x2598) == 0) {
          local_80.x = *(float *)(iVar7 + 0x20) -
                       (in_stack_00000004->base_character).base_actor.location.position.x;
          local_80.y = *(float *)(iVar7 + 0x24) -
                       (in_stack_00000004->base_character).base_actor.location.position.y;
          local_80.z = *(float *)(iVar7 + 0x28) -
                       (in_stack_00000004->base_character).base_actor.location.position.z;
          local_20 = SQRT(local_80.z * local_80.z +
                          local_80.x * local_80.x + local_80.y * local_80.y);
          local_18 = local_20;
          if (local_20 < 0x40000000) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_e0,&local_80);
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (local_e0.y -
                                  (in_stack_00000004->base_character).base_actor.orient.bank);
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,4,1);
            }
          }
          if (local_20 < in_stack_00000004->guard_distance) {
            pCVar1 = &(in_stack_00000004->base_character).model;
            if (_DAT_006601e8 <= local_20) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,1,1);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,3,1);
        }
      }
      else {
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar7 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,3,1);
        }
      }
      break;
    case 1:
    case 2:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      fVar3 = 0x40000000;
      pCVar1 = &(in_stack_00000004->base_character).model;
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
        if (extraout_EAX_00 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
      else {
        iVar7 = *(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x2598);
        if (iVar7 == 0) {
          local_28 = 0x40000000;
          (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
          (in_stack_00000004->base_character).model.accumulated_root_motion.y =
               (in_stack_00000004->base_character).model.accumulated_root_motion.z;
          (in_stack_00000004->base_character).model.accumulated_root_motion.x =
               (in_stack_00000004->base_character).model.accumulated_root_motion.y;
          local_90 = fVar3;
          local_98 = iVar7;
          local_94 = iVar7;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            (&in_stack_00000004->base_character);
          if (-1 < iVar7) {
            local_a4 = (in_stack_00000004->base_character).base_actor.location.position.x -
                       *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
            local_9c = (in_stack_00000004->base_character).base_actor.location.position.z -
                       *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
            local_a0 = 0;
            local_2c = SQRT(local_9c * local_9c + local_a4 * local_a4);
            local_1c = local_2c;
            if ((_DAT_006601e8 < local_2c) && (local_24 == 1)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
            }
            if (((local_1c < _DAT_006601ec) &&
                (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) +
                                              0x154) + 0x108))(), iVar7 == 0)) &&
               ((in_stack_00000004->base_character).model.part_visibility_flags
                [(int)in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].x] != 0)) {
              iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
              local_74.x = *(float *)(iVar7 + 0x20) -
                           (in_stack_00000004->base_character).base_actor.location.position.x;
              local_74.y = *(float *)(iVar7 + 0x24) -
                           (in_stack_00000004->base_character).base_actor.location.position.y;
              local_74.z = *(float *)(iVar7 + 0x28) -
                           (in_stack_00000004->base_character).base_actor.location.position.z;
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_ec,&local_74)
              ;
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_ec.y -
                                    (in_stack_00000004->base_character).base_actor.orient.bank);
              if ((ABS(local_14) < (float)0.52359877558333301) &&
                 (iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.1), iVar7 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(in_stack_00000004->base_character).model.motion_controller,8,1);
                iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                  (*(uint *)(in_stack_00000004[1].base_character.base_actor.
                                             actor_name + 8));
                if (iVar7 == 0) {
                  uVar13 = (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                     ((CDemonActor *)in_stack_00000004,"imp-jump?.wav");
                  *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) =
                       uVar13;
                }
              }
            }
            if ((local_1c <= local_28) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
              iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
              local_d4.x = *(float *)(iVar7 + 0x20) -
                           (in_stack_00000004->base_character).base_actor.location.position.x;
              local_d4.y = *(float *)(iVar7 + 0x24) -
                           (in_stack_00000004->base_character).base_actor.location.position.y;
              local_d4.z = *(float *)(iVar7 + 0x28) -
                           (in_stack_00000004->base_character).base_actor.location.position.z;
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                        (&local_11c,&local_d4);
              local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_11c.y -
                                    (in_stack_00000004->base_character).base_actor.orient.bank);
              if (ABS(local_14) < (float)0.52359877558333301) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(in_stack_00000004->base_character).model.motion_controller,4,1);
                in_stack_00000004->field6_0xbe38[0] = '\0';
                in_stack_00000004->field6_0xbe38[1] = '\0';
                in_stack_00000004->field6_0xbe38[2] = -0x80;
                in_stack_00000004->field6_0xbe38[3] = '@';
              }
            }
            if (in_stack_00000004->guard_distance < local_1c) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base_character).model.motion_controller,0,1);
            }
            fVar3 = *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) -
                    in_stack_00000008;
            *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = fVar3;
            if (fVar3 < 0.0) {
              uVar8 = *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8);
              pCVar6 = &in_stack_00000004[1].base_character;
              (pCVar6->base_actor).actor_name[0x10] = '\0';
              (pCVar6->base_actor).actor_name[0x11] = '\0';
              (pCVar6->base_actor).actor_name[0x12] = '\0';
              (pCVar6->base_actor).actor_name[0x13] = '\0';
              iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar8);
              if ((iVar7 == 0) &&
                 (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                    (*(uint *)(in_stack_00000004[1].base_character.base_actor.
                                               actor_name + 0xc)), iVar7 == 0)) {
                uVar13 = (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                   ((CDemonActor *)in_stack_00000004,"imp-laugh?.wav");
                *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) =
                     uVar13;
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
                *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) =
                     local_14;
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,3,1);
        }
      }
      break;
    case 3:
      fVar3 = *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) -
              in_stack_00000008 * 4.0f;
      *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = fVar3;
      if (fVar3 < 0.0) {
        uVar8 = *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8);
        pCVar6 = &in_stack_00000004[1].base_character;
        (pCVar6->base_actor).actor_name[0x10] = '\0';
        (pCVar6->base_actor).actor_name[0x11] = '\0';
        (pCVar6->base_actor).actor_name[0x12] = '\0';
        (pCVar6->base_actor).actor_name[0x13] = '\0';
        iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uVar8);
        if ((iVar7 == 0) &&
           (iVar7 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                              (*(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name +
                                        0xc)), iVar7 == 0)) {
          uVar13 = (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                             ((CDemonActor *)in_stack_00000004,"imp-laugh?.wav");
          *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) = uVar13;
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
          *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = local_14;
        }
      }
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe60);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(3.0,5.0);
      pCVar9 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_b0,&g_ZeroVector,
                          (CMatrix3x4f *)
                          (in_stack_00000004->base_character).model.bone_transform.
                          bone_world_matrices[DAT_02db89fc].m);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_5c,pCVar9);
      iVar7 = core_enemy_cpp_FUN_004a9880();
      if (iVar7 != 0) {
        iVar11 = 0;
        iVar7 = 0;
        while (iVar7 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c)) {
          pCVar12 = (CEnemy *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar11 + 8000),
                               g_CImpClassInfo.name_hash);
          if (((pCVar12 == (CEnemy *)0x0) || (pCVar12 == in_stack_00000004)) ||
             (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != *(int *)(pCVar12->field6_0xbe38 + 4)
             )) {
            iVar7 = iVar7 + 1;
            iVar11 = iVar11 + 4;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(pCVar12->base_character).model.motion_controller,3,1);
            iVar7 = iVar7 + 1;
            iVar11 = iVar11 + 4;
          }
        }
      }
      break;
    case 7:
      if ((in_stack_00000004->pool_me == 0) &&
         ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (pCVar1,&local_f8,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_c8,pCVar9);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
      break;
    case 9:
      if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
         (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                              0x120))(), iVar7 == 0)) {
        pCVar12 = *(CEnemy **)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x2598);
        if (in_stack_00000004 == pCVar12) {
          fVar3 = (float)0.75;
          iVar7 = *(int *)(pCVar12->field6_0xbe38 + 4);
          (pCVar12->base_character).base_actor.location.position.x =
               *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20) -
               (pCVar12->base_character).base_actor.orient_matrix.m[0].z * fVar3;
          (pCVar12->base_character).base_actor.location.position.z =
               *(float *)(iVar7 + 0x28) -
               (pCVar12->base_character).base_actor.orient_matrix.m[2].z * fVar3;
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar1->motion_controller,5,1)
      ;
    }
    goto switchD_004fa8ed_caseD_8;
  }
  uVar8 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
  if (uVar8 < 2) {
    if (uVar8 == 1) {
LAB_004f9fc4:
      iVar7 = 1;
    }
    else {
LAB_004fa163:
      iVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,iVar7,1);
  }
  else {
    if (uVar8 < 3) goto LAB_004f9fc4;
    if (uVar8 != 3) goto LAB_004fa163;
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
switchD_004fa8ed_caseD_8:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
  }
  iVar7 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
  if ((iVar7 != 0) && (local_24 != 9)) {
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_bc = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_b8 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar2 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_b4 = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pCVar9 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
    local_128 = local_bc + *(float *)pcVar2;
    local_124 = local_b8 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_120 = local_b4 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_110 = local_128 + pCVar9->x;
    local_10c = local_124 + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    local_108 = local_120 + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
    *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(uint *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    *(float *)pcVar2 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
    (in_stack_00000004->base_character).model.accumulated_root_motion.y =
         (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    pCVar9->x = (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base_character).model);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  return;
}
