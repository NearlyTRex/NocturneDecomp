// Name: core_bride.cpp_FUN_00423a30
// Address: 00423a30
// Address Range: [[00423a30, 00423ace] [00423b02, 00423ce5] [00423d1a, 00423e83] [0042404a, 0042409a] [004242b3, 00424559]]
// Convention: unknown
// Signature: undefined core_bride.cpp_FUN_00423a30()
// Globals:
//   undefined4 DAT_00002424
//   TerminatedCString s_ub_attack_wav_00616bc8
//   TerminatedCString s_ub_attack_wav_00616be4
//   double DOUBLE_00616c15 = 3
//   double DOUBLE_00616c2d = 1.57079632675000
//   double DOUBLE_00616c35 = 2.5
//   double DOUBLE_00616c3d = 32
//   undefined4 DAT_0065b40c
//   CGore* g_CGorePtr = 02d83364
//   undefined4 DAT_00822cdc
//   undefined4 DAT_00822ce8
//   undefined4 DAT_00822cec
//   undefined4 DAT_00822cf0
//   undefined4 DAT_00822cf4
//   CGore g_CGoreInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_004297e0
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042b670
//   core_charactr.cpp_CCharacter_FUN_0042b760
//   core_charactr.cpp_CCharacter_FUN_0042b810
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_gore.cpp_FUN_004ede30
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bride.cpp_FUN_00423a30(undefined4 param_1, undefined4 param_2)
    */

void core_bride_cpp_FUN_00423a30(void)

{
  CDeformableModelInstance *pCVar1;
  uint uVar2;
  CDemonActor_vtable *pCVar3;
  float fVar4;
  int iVar5;
  int extraout_EAX;
  CVector3f *pCVar6;
  int extraout_EAX_00;
  float fVar7;
  BADSPACEBASE *in_ESP;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  SDamageInfo local_1b8;
  SDamageInfo local_17c;
  SDamageInfo local_140;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc;
  CVector3f local_f8;
  float local_ec;
  float local_e8;
  float local_e4;
  CVector3f local_e0;
  CVector3f local_d4;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  undefined4 local_8c;
  undefined4 local_88;
  float local_84;
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
  
  iVar5 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar5 != 0) {
    if (0.0 <= (float)in_stack_00000004[1].base_character.base_actor.location.area_id) {
      in_stack_00000004[1].base_character.base_actor.location.area_id =
           (int)((float)in_stack_00000004[1].base_character.base_actor.location.area_id -
                in_stack_00000008);
    }
    pCVar1 = &(in_stack_00000004->base_character).model;
    local_18 = -1.0;
    iVar5 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar1->motion_controller);
    uVar2 = *(uint *)(iVar5 + 0x24);
    if (uVar2 < 5) {
      if (uVar2 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
        if (extraout_EAX_00 == 0) {
          (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                    ((CDemonActor *)in_stack_00000004);
          if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
            iVar5 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
            if ((iVar5 == 0) &&
               (iVar5 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660(), iVar5 == 0)) {
              fVar7 = (float)(*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                       ((CDemonActor *)in_stack_00000004,"ub-attack?.wav");
              in_stack_00000004[1].base_character.base_actor.orient.bank = fVar7;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->base_character).model.motion_controller,1,1);
        }
      }
      else if (uVar2 == 1) {
        if ((float)in_stack_00000004[1].base_character.base_actor.location.area_id <= 0.0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
          in_stack_00000004[1].base_character.base_actor.location.area_id = (int)local_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,3,1);
          iVar5 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
          if ((iVar5 == 0) &&
             (iVar5 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660(), iVar5 == 0)) {
            fVar7 = (float)(*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                     ((CDemonActor *)in_stack_00000004,"ub-howl?.wav");
            in_stack_00000004[1].base_character.base_actor.orient.bank = fVar7;
          }
        }
        fVar7 = in_stack_00000004->speed;
        fVar4 = (float)DOUBLE_00616c2d;
        pCVar3 = (in_stack_00000004->base_character).base_actor.vtable;
        pCVar1 = &(in_stack_00000004->base_character).model;
        *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
             in_stack_00000004->speed * (float)DOUBLE_00616c15 * in_stack_00000008;
        *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
             fVar7 * fVar4 * in_stack_00000008;
        (*pCVar3[1].getAllowedMeleeAttackTypes)((CDemonActor *)in_stack_00000004);
        if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
          if (extraout_EAX == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
        }
        else {
          local_104 = 0;
          local_fc = DAT_0065b40c;
          local_100 = 0;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
          iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            (&in_stack_00000004->base_character);
          if (iVar5 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,0,1);
          }
          else if (((0 < iVar5) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) &&
                  (iVar5 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) +
                                                0x154) + 0x108))(), iVar5 == 0)) {
            iVar5 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
            if (iVar5 == 0) {
              iVar5 = 6;
            }
            else {
              iVar5 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,iVar5,1);
            iVar5 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
            if ((iVar5 == 0) &&
               (iVar5 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660(), iVar5 == 0)) {
              fVar7 = (float)(*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                       ((CDemonActor *)in_stack_00000004,"ub-attack?.wav");
              in_stack_00000004[1].base_character.base_actor.orient.bank = fVar7;
            }
          }
        }
      }
    }
    else if (uVar2 < 6) {
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      else {
        iVar5 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                            0x108))();
        if (iVar5 == 0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          *(float *)in_stack_00000004->field6_0xbe38 = local_14;
          local_20 = (float)core_motion_cpp_CMotionController_FUN_0052e2b0();
          local_4c = (double)local_20;
          local_14 = local_20;
          if (local_20 <= (float)DOUBLE_00616c15) {
            local_18 = DAT_0065b40c;
            if ((local_4c < 1.0) || (DOUBLE_00616bfd < local_4c)) {
              local_44 = (double)local_20;
              if (((float)DOUBLE_00616c15 <= local_20) &&
                 ((local_44 <= DOUBLE_00616c1d &&
                  ((in_stack_00000004->base_character).model.part_visibility_flags
                   [*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc)] != 0)
                  ))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_140);
                local_140.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_140.attacker = (CDemonActor *)in_stack_00000004;
                local_140.wielder = (CDemonActor *)in_stack_00000004;
                local_14 = local_140.damage_amount;
                pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_a4,(CVector3f *)&DAT_00822c94,
                                    (in_stack_00000004->base_character).model.bone_transform.
                                    bone_world_matrices + DAT_00822ce0);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)in_stack_00000004,&local_68,pCVar6);
                core_enemy_cpp_FUN_004a9880();
              }
            }
            else if ((in_stack_00000004->base_character).model.part_visibility_flags
                     [*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14)] !=
                     0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe0c);
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                 (&local_e0,(CVector3f *)&DAT_00822c94,
                                  (in_stack_00000004->base_character).model.bone_transform.
                                  bone_world_matrices + DAT_00822ce4);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)in_stack_00000004,&local_f8,pCVar6);
              core_enemy_cpp_FUN_004a9880();
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
    }
    else if (uVar2 < 7) {
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar1->motion_controller,1,1);
      }
      else {
        iVar5 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                            0x108))();
        if (iVar5 == 0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          *(float *)in_stack_00000004->field6_0xbe38 = local_14;
          local_1c = (float)core_motion_cpp_CMotionController_FUN_0052e2b0();
          local_54 = (double)local_1c;
          local_14 = local_1c;
          if (local_1c <= (float)DOUBLE_00616bf5) {
            local_18 = DAT_0065b40c;
            if (((1.0 <= local_54) && (local_54 <= DOUBLE_00616bfd)) ||
               ((local_2c = (double)local_1c, (float)DOUBLE_00616c05 <= local_1c &&
                (local_2c <= DOUBLE_00616c0d)))) {
              if ((in_stack_00000004->base_character).model.part_visibility_flags
                  [*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14)] != 0)
              {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_17c);
                local_17c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_17c.attacker = (CDemonActor *)in_stack_00000004;
                local_17c.wielder = (CDemonActor *)in_stack_00000004;
                local_14 = local_17c.damage_amount;
                pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_80,(CVector3f *)&DAT_00822c94,
                                    (in_stack_00000004->base_character).model.bone_transform.
                                    bone_world_matrices + DAT_00822ce4);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)in_stack_00000004,&local_b0,pCVar6);
                core_enemy_cpp_FUN_004a9880();
              }
            }
            else {
              local_5c = (double)local_1c;
              if (((((float)DOUBLE_00616c15 <= local_1c) && (local_5c <= DOUBLE_00616c1d)) ||
                  ((local_34 = (double)local_1c, (float)DOUBLE_00616c25 <= local_1c &&
                   (local_34 <= DOUBLE_00616bf5)))) &&
                 ((in_stack_00000004->base_character).model.part_visibility_flags
                  [*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc)] != 0))
              {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1b8);
                local_1b8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_1b8.attacker = (CDemonActor *)in_stack_00000004;
                local_1b8.wielder = (CDemonActor *)in_stack_00000004;
                local_14 = local_1b8.damage_amount;
                pCVar6 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_98,(CVector3f *)&DAT_00822c94,
                                    (in_stack_00000004->base_character).model.bone_transform.
                                    bone_world_matrices + DAT_00822ce0);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)in_stack_00000004,&local_74,pCVar6);
                core_enemy_cpp_FUN_004a9880();
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar1->motion_controller,1,1);
        }
      }
    }
    else if ((uVar2 == 0xe) && (in_stack_00000004->pool_me == 0)) {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (pCVar1,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_d4,pCVar6);
      core_gore_cpp_FUN_004ede30();
      (*((in_stack_00000004->base_character).base_actor.vtable)->spawnFlies)
                ((CDemonActor *)in_stack_00000004,0x32,25.0);
      in_stack_00000004->pool_me = 1;
    }
    if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) && (0.0 <= local_18)) {
      fVar7 = in_stack_00000004->speed;
      fVar4 = (float)DOUBLE_00616c35;
      *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
           in_stack_00000004->speed * (float)DOUBLE_00616c2d * in_stack_00000008;
      *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
           in_stack_00000008 * fVar4 * fVar7;
      local_8c = 0;
      local_84 = local_18;
      local_88 = 0;
      (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                        (&in_stack_00000004->base_character);
      if (iVar5 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,1,1);
        (in_stack_00000004->base_character).field2_0x240c[0xc] = '\0';
        (in_stack_00000004->base_character).field2_0x240c[0xd] = '\0';
        (in_stack_00000004->base_character).field2_0x240c[0xe] = '\0';
        (in_stack_00000004->base_character).field2_0x240c[0xf] = '\0';
      }
    }
    (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
    (in_stack_00000004->base_character).model.accumulated_root_motion.y =
         (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).model.accumulated_root_motion.x =
         (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    local_24 = in_stack_00000008 * in_stack_00000004->speed;
    while (0.0 < local_24) {
      iVar5 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                        (&(in_stack_00000004->base_character).model.motion_controller);
      if (iVar5 != 0x11) {
        core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
      }
    }
    if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
      *(float *)in_stack_00000004->field6_0xbe38 =
           *(float *)in_stack_00000004->field6_0xbe38 - in_stack_00000008;
    }
    (in_stack_00000004->base_character).base_actor.orient.bank =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0xc) +
         (in_stack_00000004->base_character).base_actor.orient.bank;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
              ((CDemonActor *)in_stack_00000004);
    iVar5 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
    if (iVar5 != 0) {
      *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
           *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
           in_stack_00000008 * (float)DOUBLE_00616c3d;
      local_bc = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
                 in_stack_00000008;
      local_b8 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
                 in_stack_00000008;
      local_b4 = in_stack_00000008 *
                 *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
      local_ec = local_bc + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x10);
      local_e8 = local_b8 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
      local_e4 = local_b4 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
      iVar5 = core_motion_cpp_CMotionController_FUN_0052dab0
                        (&(in_stack_00000004->base_character).model.motion_controller);
      if (*(int *)(iVar5 + 0x24) != 1) {
        local_ec = local_ec + (in_stack_00000004->base_character).model.accumulated_root_motion.x;
        local_e8 = local_e8 + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
        local_e4 = local_e4 + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
      }
      core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(in_stack_00000004->base_character).model);
    core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character)
    ;
    if (in_stack_00000004->pool_me == 0) {
      core_charactr_cpp_CCharacter_FUN_0042b760(&in_stack_00000004->base_character);
      if ((in_stack_00000004->base_character).model.part_visibility_flags
          [*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8)] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760(&in_stack_00000004->base_character);
      }
      core_charactr_cpp_CCharacter_FUN_0042b760(&in_stack_00000004->base_character);
      if ((in_stack_00000004->base_character).model.part_visibility_flags
          [*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10)] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760(&in_stack_00000004->base_character);
      }
      core_charactr_cpp_CCharacter_FUN_0042b810(&in_stack_00000004->base_character);
      core_charactr_cpp_CCharacter_FUN_0042b670(&in_stack_00000004->base_character);
    }
  }
  return;
}


// Assembly code:
// 00423a30: PUSH EBX
//   Label: core_bride.cpp_FUN_00423a30
// 00423a31: PUSH ESI
// 00423a32: PUSH EDI
// 00423a33: PUSH EBP
// 00423a34: MOV EBP,ESP
// 00423a36: SUB ESP,0x1e4
// 00423a3c: SUB EBP,0x7a
// 00423a3f: MOV EBX,dword ptr [EBP + 0x8e]
// 00423a45: PUSH dword ptr [EBP + 0x92]
// 00423a4b: PUSH EBX
// 00423a4c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 00423a51: ADD ESP,0x8
// 00423a54: TEST EAX,EAX
// 00423a56: JZ 0x00424552
//   XREF to: 00424552 (CONDITIONAL_JUMP)
// 00423a5c: FLD float ptr [EBX + 0xbee0]
// 00423a62: FLDZ
// 00423a64: FCOMPP
// 00423a66: FNSTSW AX
// 00423a68: SAHF
// 00423a69: JA 0x00423a7d
//   XREF to: 00423a7d (CONDITIONAL_JUMP)
// 00423a6b: FLD float ptr [EBX + 0xbee0]
// 00423a71: FSUB float ptr [EBP + 0x92]
// 00423a77: FSTP float ptr [EBX + 0xbee0]
// 00423a7d: LEA ESI,[EBX + 0x158]
//   Label: LAB_00423a7d
// 00423a83: MOV EDX,0xbf800000
// 00423a88: PUSH ESI
// 00423a89: MOV dword ptr [EBP + 0x72],EDX
// 00423a8c: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00423a91: MOV EAX,dword ptr [EAX + 0x24]
// 00423a94: ADD ESP,0x4
// 00423a97: CMP EAX,0x5
// 00423a9a: JNC 0x004242b3
//   XREF to: 004242b3 (CONDITIONAL_JUMP)
// 00423aa0: TEST EAX,EAX
// 00423aa2: JBE 0x00423c3e
//   XREF to: 00423c3e (CONDITIONAL_JUMP)
// 00423aa8: CMP EAX,0x1
// 00423aab: JNZ 0x00423b75
//   XREF to: 00423b75 (CONDITIONAL_JUMP)
// 00423ab1: FLD float ptr [EBX + 0xbee0]
// 00423ab7: FLDZ
// 00423ab9: FCOMPP
// 00423abb: FNSTSW AX
// 00423abd: SAHF
// 00423abe: JC 0x00423b02
//   XREF to: 00423b02 (CONDITIONAL_JUMP)
// 00423ac0: PUSH 0x41a00000
// 00423ac5: PUSH 0x41200000
// 00423aca: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00423b02: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_00423b02
// 00423b08: FMUL double ptr [0x00616c15]
//   XREF to: 00616c15 (READ)
// 00423b0e: FLD float ptr [EBX + 0xbe24]
// 00423b14: FMUL double ptr [0x00616c2d]
//   XREF to: 00616c2d (READ)
// 00423b1a: FLD float ptr [EBP + 0x92]
// 00423b20: FXCH ST2
// 00423b22: FMUL ST2
// 00423b24: FXCH
// 00423b26: FMULP ST2
// 00423b28: PUSH dword ptr [EBP + 0x92]
// 00423b2e: MOV EAX,dword ptr [EBX + 0x154]
// 00423b34: PUSH EBX
// 00423b35: LEA ESI,[EBX + 0x158]
// 00423b3b: FSTP float ptr [EBX + 0x2434]
// 00423b41: FSTP float ptr [EBX + 0x2438]
// 00423b47: CALL dword ptr [EAX + 0x158]
// 00423b4d: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00423b53: ADD ESP,0x8
// 00423b56: TEST EAX,EAX
// 00423b58: JNZ 0x00423d2b
//   XREF to: 00423d2b (CONDITIONAL_JUMP)
// 00423b5e: PUSH dword ptr [EBP + 0x92]
// 00423b64: PUSH EBX
// 00423b65: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 00423b6a: ADD ESP,0x8
// 00423b6d: TEST EAX,EAX
// 00423b6f: JZ 0x00423d1a
//   XREF to: 00423d1a (CONDITIONAL_JUMP)
// 00423b75: CMP dword ptr [EBX + 0xbe3c],0x0
//   Label: LAB_00423b75
// 00423b7c: JNZ 0x004242d0
//   XREF to: 004242d0 (CONDITIONAL_JUMP)
// 00423b82: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_00423b82
// 00423b88: MOV dword ptr [EAX + 0x8],0x0
// 00423b8f: FLD float ptr [EBP + 0x92]
// 00423b95: MOV EDX,dword ptr [EAX + 0x8]
// 00423b98: MOV dword ptr [EAX + 0x4],EDX
// 00423b9b: MOV EDX,dword ptr [EAX + 0x4]
// 00423b9e: MOV dword ptr [EAX],EDX
// 00423ba0: FMUL float ptr [EBX + 0xbe24]
// 00423ba6: LEA ESI,[EBX + 0x158]
// 00423bac: FSTP float ptr [EBP + 0x66]
// 00423baf: FLD float ptr [EBP + 0x66]
//   Label: LAB_00423baf
// 00423bb2: FLDZ
// 00423bb4: FCOMPP
// 00423bb6: FNSTSW AX
// 00423bb8: SAHF
// 00423bb9: JNC 0x00424383
//   XREF to: 00424383 (CONDITIONAL_JUMP)
// 00423bbf: LEA EAX,[EBP + 0x66]
// 00423bc2: PUSH EAX
// 00423bc3: PUSH ESI
// 00423bc4: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 00423bc9: ADD ESP,0x8
// 00423bcc: CMP EAX,0x11
// 00423bcf: JZ 0x00423baf
//   XREF to: 00423baf (CONDITIONAL_JUMP)
// 00423bd1: PUSH EAX
// 00423bd2: PUSH EBX
// 00423bd3: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00423bd8: ADD ESP,0x8
// 00423bdb: JMP 0x00423baf
//   XREF to: 00423baf (UNCONDITIONAL_JUMP)
// 00423bdd: MOV ECX,dword ptr [EBX + 0xbe28]
//   Label: LAB_00423bdd
// 00423be3: TEST ECX,ECX
// 00423be5: JNZ 0x00423b75
//   XREF to: 00423b75 (CONDITIONAL_JUMP)
// 00423be7: PUSH ECX
// 00423be8: LEA EAX,[EBP + -0x3e]
// 00423beb: PUSH EAX
// 00423bec: PUSH ESI
// 00423bed: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 00423bf2: ADD ESP,0xc
// 00423bf5: PUSH EAX
// 00423bf6: LEA EAX,[EBP + -0x4a]
// 00423bf9: PUSH EAX
// 00423bfa: PUSH EBX
// 00423bfb: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00423c00: ADD ESP,0xc
// 00423c03: PUSH 0x0
// 00423c05: LEA EAX,[EBP + -0x4a]
// 00423c08: PUSH EAX
// 00423c09: MOV ESI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 00423c0f: PUSH ESI
//   XREF to: 02d83364 (DATA)
// 00423c10: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 00423c15: ADD ESP,0xc
// 00423c18: PUSH 0x41c80000
// 00423c1d: PUSH 0x32
// 00423c1f: MOV EAX,dword ptr [EBX + 0x154]
// 00423c25: PUSH EBX
// 00423c26: CALL dword ptr [EAX + 0xa0]
// 00423c2c: ADD ESP,0xc
// 00423c2f: MOV dword ptr [EBX + 0xbe28],0x1
// 00423c39: JMP 0x00423b75
//   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
// 00423c3e: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_00423c3e
// 00423c44: PUSH EBX
// 00423c45: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 00423c4a: ADD ESP,0x8
// 00423c4d: TEST EAX,EAX
// 00423c4f: JZ 0x00423c69
//   XREF to: 00423c69 (CONDITIONAL_JUMP)
// 00423c51: PUSH 0x1
// 00423c53: PUSH 0x1
// 00423c55: LEA EAX,[EBX + 0x158]
// 00423c5b: PUSH EAX
// 00423c5c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00423c61: ADD ESP,0xc
// 00423c64: JMP 0x00423b75
//   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
// 00423c69: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_00423c69
// 00423c6f: MOV EAX,dword ptr [EBX + 0x154]
// 00423c75: PUSH EBX
// 00423c76: CALL dword ptr [EAX + 0x158]
// 00423c7c: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00423c82: ADD ESP,0x8
// 00423c85: TEST EAX,EAX
// 00423c87: JZ 0x00423b75
//   XREF to: 00423b75 (CONDITIONAL_JUMP)
// 00423c8d: PUSH 0x1
// 00423c8f: PUSH 0x1
// 00423c91: PUSH ESI
// 00423c92: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00423c97: ADD ESP,0xc
// 00423c9a: MOV EDX,dword ptr [EBX + 0xbee4]
// 00423ca0: PUSH EDX
// 00423ca1: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00423ca6: ADD ESP,0x4
// 00423ca9: TEST EAX,EAX
// 00423cab: JNZ 0x00423b75
//   XREF to: 00423b75 (CONDITIONAL_JUMP)
// 00423cb1: MOV ECX,dword ptr [EBX + 0xbee8]
// 00423cb7: PUSH ECX
// 00423cb8: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00423cbd: ADD ESP,0x4
// 00423cc0: TEST EAX,EAX
// 00423cc2: JNZ 0x00423b75
//   XREF to: 00423b75 (CONDITIONAL_JUMP)
// 00423cc8: MOV EDX,0x616bc8
//   XREF to: 00616bc8 (DATA)
// 00423ccd: PUSH EDX
//   XREF to: 00616bc8 (DATA)
// 00423cce: MOV ESI,dword ptr [EBX + 0x154]
// 00423cd4: PUSH EBX
// 00423cd5: CALL dword ptr [ESI + 0x24]
// 00423cd8: ADD ESP,0x8
// 00423cdb: MOV dword ptr [EBX + 0xbee8],EAX
// 00423ce1: JMP 0x00423b75
//   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
// 00423d1a: PUSH 0x1
//   Label: LAB_00423d1a
// 00423d1c: PUSH EAX
// 00423d1d: PUSH ESI
// 00423d1e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00423d23: ADD ESP,0xc
// 00423d26: JMP 0x00423b75
//   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
// 00423d2b: PUSH 0x3e32b8c2
//   Label: LAB_00423d2b
// 00423d30: PUSH 0x3f800000
// 00423d35: MOV EAX,[0x0065b40c]
//   XREF to: 0065b40c (READ)
// 00423d3a: XOR EDX,EDX
// 00423d3c: MOV dword ptr [EBP + -0x7a],EDX
// 00423d3f: MOV dword ptr [EBP + -0x72],EAX
// 00423d42: LEA EAX,[EBP + -0x7a]
// 00423d45: MOV dword ptr [EBP + -0x76],EDX
// 00423d48: PUSH EAX
// 00423d49: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00423d4f: PUSH EAX
// 00423d50: MOV EDX,dword ptr [EAX + 0x154]
// 00423d56: CALL dword ptr [EDX + 0xbc]
// 00423d5c: ADD ESP,0x4
// 00423d5f: PUSH EAX
// 00423d60: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00423d66: ADD EAX,0x20
// 00423d69: PUSH EAX
// 00423d6a: PUSH EBX
// 00423d6b: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00423d70: ADD ESP,0x18
// 00423d73: TEST EAX,EAX
// 00423d75: JL 0x00423e1b
//   XREF to: 00423e1b (CONDITIONAL_JUMP)
// 00423d7b: JLE 0x00423b75
//   XREF to: 00423b75 (CONDITIONAL_JUMP)
// 00423d81: FLD float ptr [EBX + 0xbe38]
// 00423d87: FLDZ
// 00423d89: FCOMPP
// 00423d8b: FNSTSW AX
// 00423d8d: SAHF
// 00423d8e: JC 0x00423b75
//   XREF to: 00423b75 (CONDITIONAL_JUMP)
// 00423d94: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00423d9a: PUSH EAX
// 00423d9b: MOV EDX,dword ptr [EAX + 0x154]
// 00423da1: CALL dword ptr [EDX + 0x108]
// 00423da7: ADD ESP,0x4
// 00423daa: TEST EAX,EAX
// 00423dac: JNZ 0x00423b75
//   XREF to: 00423b75 (CONDITIONAL_JUMP)
// 00423db2: PUSH 0x3f000000
// 00423db7: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00423dbc: ADD ESP,0x4
// 00423dbf: TEST EAX,EAX
// 00423dc1: JZ 0x00423e2d
//   XREF to: 00423e2d (CONDITIONAL_JUMP)
// 00423dc3: PUSH 0x1
// 00423dc5: PUSH 0x5
// 00423dc7: PUSH ESI
//   Label: LAB_00423dc7
// 00423dc8: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00423dcd: ADD ESP,0xc
// 00423dd0: MOV ESI,dword ptr [EBX + 0xbee4]
// 00423dd6: PUSH ESI
// 00423dd7: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00423ddc: ADD ESP,0x4
// 00423ddf: TEST EAX,EAX
// 00423de1: JNZ 0x00423b75
//   XREF to: 00423b75 (CONDITIONAL_JUMP)
// 00423de7: MOV EDI,dword ptr [EBX + 0xbee8]
// 00423ded: PUSH EDI
// 00423dee: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00423df3: ADD ESP,0x4
// 00423df6: TEST EAX,EAX
// 00423df8: JNZ 0x00423b75
//   XREF to: 00423b75 (CONDITIONAL_JUMP)
// 00423dfe: PUSH 0x616be4
//   XREF to: 00616be4 (DATA)
// 00423e03: MOV EAX,dword ptr [EBX + 0x154]
// 00423e09: PUSH EBX
// 00423e0a: CALL dword ptr [EAX + 0x24]
// 00423e0d: ADD ESP,0x8
// 00423e10: MOV dword ptr [EBX + 0xbee8],EAX
// 00423e16: JMP 0x00423b75
//   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
// 00423e1b: PUSH 0x1
//   Label: LAB_00423e1b
// 00423e1d: PUSH 0x0
// 00423e1f: PUSH ESI
// 00423e20: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00423e25: ADD ESP,0xc
// 00423e28: JMP 0x00423b75
//   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
// 00423e2d: PUSH 0x1
//   Label: LAB_00423e2d
// 00423e2f: PUSH 0x6
// 00423e31: JMP 0x00423dc7
//   XREF to: 00423dc7 (UNCONDITIONAL_JUMP)
// 00423e33: MOV EDI,dword ptr [EBX + 0xbe3c]
//   Label: LAB_00423e33
// 00423e39: TEST EDI,EDI
// 00423e3b: JNZ 0x00423e4f
//   XREF to: 00423e4f (CONDITIONAL_JUMP)
// 00423e3d: PUSH 0x1
// 00423e3f: PUSH 0x1
// 00423e41: PUSH ESI
// 00423e42: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00423e47: ADD ESP,0xc
// 00423e4a: JMP 0x00423b75
//   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
// 00423e4f: PUSH EDI
//   Label: LAB_00423e4f
// 00423e50: MOV EDX,dword ptr [EDI + 0x154]
// 00423e56: CALL dword ptr [EDX + 0x108]
// 00423e5c: ADD ESP,0x4
// 00423e5f: TEST EAX,EAX
// 00423e61: JZ 0x00423e75
//   XREF to: 00423e75 (CONDITIONAL_JUMP)
// 00423e63: PUSH 0x1
// 00423e65: PUSH 0x1
// 00423e67: PUSH ESI
// 00423e68: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00423e6d: ADD ESP,0xc
// 00423e70: JMP 0x00423b75
//   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
// 00423e75: PUSH 0x3f000000
//   Label: LAB_00423e75
// 00423e7a: PUSH 0x3e4ccccd
// 00423e7f: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0042404a: MOV EDI,dword ptr [EBX + 0xbe3c]
//   Label: LAB_0042404a
// 00424050: TEST EDI,EDI
// 00424052: JNZ 0x00424066
//   XREF to: 00424066 (CONDITIONAL_JUMP)
// 00424054: PUSH 0x1
// 00424056: PUSH 0x1
// 00424058: PUSH ESI
// 00424059: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0042405e: ADD ESP,0xc
// 00424061: JMP 0x00423b75
//   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
// 00424066: PUSH EDI
//   Label: LAB_00424066
// 00424067: MOV EDX,dword ptr [EDI + 0x154]
// 0042406d: CALL dword ptr [EDX + 0x108]
// 00424073: ADD ESP,0x4
// 00424076: TEST EAX,EAX
// 00424078: JZ 0x0042408c
//   XREF to: 0042408c (CONDITIONAL_JUMP)
// 0042407a: PUSH 0x1
// 0042407c: PUSH 0x1
// 0042407e: PUSH ESI
// 0042407f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00424084: ADD ESP,0xc
// 00424087: JMP 0x00423b75
//   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
// 0042408c: PUSH 0x3f000000
//   Label: LAB_0042408c
// 00424091: PUSH 0x3e4ccccd
// 00424096: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004242b3: JBE 0x00423e33
//   Label: LAB_004242b3
//   XREF to: 00423e33 (CONDITIONAL_JUMP)
// 004242b9: CMP EAX,0x6
// 004242bc: JBE 0x0042404a
//   XREF to: 0042404a (CONDITIONAL_JUMP)
// 004242c2: CMP EAX,0xe
// 004242c5: JZ 0x00423bdd
//   XREF to: 00423bdd (CONDITIONAL_JUMP)
// 004242cb: JMP 0x00423b75
//   XREF to: 00423b75 (UNCONDITIONAL_JUMP)
// 004242d0: FLD float ptr [EBP + 0x72]
//   Label: LAB_004242d0
// 004242d3: FLDZ
// 004242d5: FCOMPP
// 004242d7: FNSTSW AX
// 004242d9: SAHF
// 004242da: JA 0x00423b82
//   XREF to: 00423b82 (CONDITIONAL_JUMP)
// 004242e0: FLD float ptr [EBX + 0xbe24]
// 004242e6: FMUL double ptr [0x00616c2d]
//   XREF to: 00616c2d (READ)
// 004242ec: FLD float ptr [EBX + 0xbe24]
// 004242f2: FLD float ptr [EBP + 0x92]
// 004242f8: FLD ST0
// 004242fa: FMUL double ptr [0x00616c35]
//   XREF to: 00616c35 (READ)
// 00424300: FXCH ST3
// 00424302: FMULP
// 00424304: FXCH ST2
// 00424306: FMULP
// 00424308: PUSH 0x3f060a92
// 0042430d: PUSH 0x40400000
// 00424312: MOV EAX,dword ptr [EBP + 0x72]
// 00424315: XOR EDI,EDI
// 00424317: FXCH
// 00424319: FSTP float ptr [EBX + 0x2438]
// 0042431f: FSTP float ptr [EBX + 0x2434]
// 00424325: MOV dword ptr [EBP + -0x2],EDI
// 00424328: MOV dword ptr [EBP + 0x6],EAX
// 0042432b: LEA EAX,[EBP + -0x2]
// 0042432e: MOV dword ptr [EBP + 0x2],EDI
// 00424331: PUSH EAX
// 00424332: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00424338: PUSH EAX
// 00424339: MOV ESI,dword ptr [EAX + 0x154]
// 0042433f: CALL dword ptr [ESI + 0xbc]
// 00424345: ADD ESP,0x4
// 00424348: PUSH EAX
// 00424349: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0042434f: ADD EAX,0x20
// 00424352: PUSH EAX
// 00424353: PUSH EBX
// 00424354: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00424359: ADD ESP,0x18
// 0042435c: CMP EAX,0x1
// 0042435f: JZ 0x00423b82
//   XREF to: 00423b82 (CONDITIONAL_JUMP)
// 00424365: PUSH 0x1
// 00424367: PUSH 0x1
// 00424369: LEA EAX,[EBX + 0x158]
// 0042436f: PUSH EAX
// 00424370: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00424375: ADD ESP,0xc
// 00424378: MOV dword ptr [EBX + 0x2418],EDI
// 0042437e: JMP 0x00423b82
//   XREF to: 00423b82 (UNCONDITIONAL_JUMP)
// 00424383: FLD float ptr [EBX + 0xbe38]
//   Label: LAB_00424383
// 00424389: FLDZ
// 0042438b: FCOMPP
// 0042438d: FNSTSW AX
// 0042438f: SAHF
// 00424390: JNC 0x004243a4
//   XREF to: 004243a4 (CONDITIONAL_JUMP)
// 00424392: FLD float ptr [EBX + 0xbe38]
// 00424398: FSUB float ptr [EBP + 0x92]
// 0042439e: FSTP float ptr [EBX + 0xbe38]
// 004243a4: FLD float ptr [EBX + 0x2418]
//   Label: LAB_004243a4
// 004243aa: FADD float ptr [EBX + 0x34]
// 004243ad: PUSH EBX
// 004243ae: FSTP float ptr [EBX + 0x34]
// 004243b1: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004243b6: ADD ESP,0x4
// 004243b9: PUSH EBX
// 004243ba: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 004243bf: ADD ESP,0x4
// 004243c2: TEST EAX,EAX
// 004243c4: JZ 0x00424471
//   XREF to: 00424471 (CONDITIONAL_JUMP)
// 004243ca: FLD float ptr [EBP + 0x92]
// 004243d0: FLD ST0
// 004243d2: FMUL double ptr [0x00616c3d]
//   XREF to: 00616c3d (READ)
// 004243d8: FLD float ptr [EBX + 0x242c]
// 004243de: FXCH
// 004243e0: FSUBR ST0,ST1
// 004243e2: LEA EAX,[EBX + 0x2428]
// 004243e8: FSTP ST1
// 004243ea: FSTP float ptr [EBX + 0x242c]
// 004243f0: FLD float ptr [EAX]
// 004243f2: FMUL ST1
// 004243f4: FSTP float ptr [EBP + -0x32]
// 004243f7: FLD float ptr [EAX + 0x4]
// 004243fa: FMUL ST1
// 004243fc: FSTP float ptr [EBP + -0x2e]
// 004243ff: FMUL float ptr [EAX + 0x8]
// 00424402: LEA ESI,[EBX + 0x241c]
// 00424408: FLD float ptr [EBP + -0x32]
// 0042440b: FLD float ptr [EBP + -0x2e]
// 0042440e: FXCH ST2
// 00424410: FSTP float ptr [EBP + -0x2a]
// 00424413: FADD float ptr [ESI]
// 00424415: LEA EAX,[EBX + 0x158]
// 0042441b: FSTP float ptr [EBP + -0x62]
// 0042441e: FADD float ptr [ESI + 0x4]
// 00424421: FLD float ptr [EBP + -0x2a]
// 00424424: FXCH
// 00424426: FSTP float ptr [EBP + -0x5e]
// 00424429: FADD float ptr [ESI + 0x8]
//   XREF to: 00002424 (DATA)
// 0042442c: PUSH EAX
// 0042442d: FSTP float ptr [EBP + -0x5a]
// 00424430: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00424435: MOV EAX,dword ptr [EAX + 0x24]
// 00424438: ADD ESP,0x4
// 0042443b: CMP EAX,0x1
// 0042443e: JZ 0x00424464
//   XREF to: 00424464 (CONDITIONAL_JUMP)
// 00424440: LEA EAX,[EBX + 0x23ac]
// 00424446: FLD float ptr [EBP + -0x62]
// 00424449: FADD float ptr [EAX]
// 0042444b: FLD float ptr [EBP + -0x5e]
// 0042444e: FXCH
// 00424450: FSTP float ptr [EBP + -0x62]
// 00424453: FADD float ptr [EAX + 0x4]
// 00424456: FLD float ptr [EBP + -0x5a]
// 00424459: FXCH
// 0042445b: FSTP float ptr [EBP + -0x5e]
// 0042445e: FADD float ptr [EAX + 0x8]
// 00424461: FSTP float ptr [EBP + -0x5a]
// 00424464: LEA EAX,[EBP + -0x62]
//   Label: LAB_00424464
// 00424467: PUSH EAX
// 00424468: PUSH EBX
// 00424469: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 0042446e: ADD ESP,0x8
// 00424471: LEA EAX,[EBX + 0x158]
//   Label: LAB_00424471
// 00424477: PUSH EAX
// 00424478: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 0042447d: ADD ESP,0x4
// 00424480: PUSH dword ptr [EBP + 0x92]
// 00424486: PUSH EBX
// 00424487: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 0042448c: MOV EDX,dword ptr [EBX + 0xbe28]
// 00424492: ADD ESP,0x8
// 00424495: TEST EDX,EDX
// 00424497: JNZ 0x00424552
//   XREF to: 00424552 (CONDITIONAL_JUMP)
// 0042449d: MOV ECX,dword ptr [0x00822cf0]
//   XREF to: 00822cf0 (READ)
// 004244a3: PUSH 0x3e4ccccd
// 004244a8: PUSH ECX
// 004244a9: MOV ESI,dword ptr [EBX + 0xbebc]
// 004244af: PUSH ESI
// 004244b0: PUSH EBX
// 004244b1: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 004244b6: MOV EAX,dword ptr [EBX + 0xbebc]
// 004244bc: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298]
// 004244c3: ADD ESP,0x10
// 004244c6: TEST EDI,EDI
// 004244c8: JZ 0x004244e5
//   XREF to: 004244e5 (CONDITIONAL_JUMP)
// 004244ca: MOV EAX,[0x00822ce8]
//   XREF to: 00822ce8 (READ)
// 004244cf: PUSH 0x3e4ccccd
// 004244d4: PUSH EAX
// 004244d5: MOV EDX,dword ptr [EBX + 0xbec0]
// 004244db: PUSH EDX
// 004244dc: PUSH EBX
// 004244dd: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 004244e2: ADD ESP,0x10
// 004244e5: MOV ECX,dword ptr [0x00822cf4]
//   Label: LAB_004244e5
//   XREF to: 00822cf4 (READ)
// 004244eb: PUSH 0x3e4ccccd
// 004244f0: PUSH ECX
// 004244f1: MOV ESI,dword ptr [EBX + 0xbec4]
// 004244f7: PUSH ESI
// 004244f8: PUSH EBX
// 004244f9: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 004244fe: MOV EAX,dword ptr [EBX + 0xbec4]
// 00424504: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298]
// 0042450b: ADD ESP,0x10
// 0042450e: TEST EDI,EDI
// 00424510: JZ 0x0042452d
//   XREF to: 0042452d (CONDITIONAL_JUMP)
// 00424512: MOV EAX,[0x00822cec]
//   XREF to: 00822cec (READ)
// 00424517: PUSH 0x3e4ccccd
// 0042451c: PUSH EAX
// 0042451d: MOV EDX,dword ptr [EBX + 0xbec8]
// 00424523: PUSH EDX
// 00424524: PUSH EBX
// 00424525: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 0042452a: ADD ESP,0x10
// 0042452d: MOV ECX,dword ptr [0x00822cdc]
//   Label: LAB_0042452d
//   XREF to: 00822cdc (READ)
// 00424533: PUSH 0x3f333333
// 00424538: PUSH ECX
// 00424539: MOV ESI,dword ptr [EBX + 0xbedc]
// 0042453f: PUSH ESI
// 00424540: PUSH EBX
// 00424541: CALL core_charactr.cpp_CCharacter_FUN_0042b810
//   XREF to: 0042b810 (UNCONDITIONAL_CALL)
// 00424546: ADD ESP,0x10
// 00424549: PUSH EBX
// 0042454a: CALL core_charactr.cpp_CCharacter_FUN_0042b670
//   XREF to: 0042b670 (UNCONDITIONAL_CALL)
// 0042454f: ADD ESP,0x4
// 00424552: LEA ESP,[EBP + 0x7a]
//   Label: LAB_00424552
// 00424555: POP EBP
// 00424556: POP EDI
// 00424557: POP ESI
// 00424558: POP EBX
// 00424559: RET
