// Name: core_bride.cpp_FUN_00423a30
// Address: 00423a30
// Address Range: [[00423a30, 00423ace] [00423b02, 00423ce5] [00423d1a, 00423e83] [0042404a, 0042409a] [004242b3, 00424559]]
// Convention: unknown
// Signature: undefined core_bride.cpp_FUN_00423a30()

#include "nocturne.h"

/* Signature: byte actors_enemy_bride.cpp_FUN_00423a30(uint param_1, uint param_2)
    */

void core_bride_cpp_FUN_00423a30(void)

{
  CDeformableModelInstance *pCVar1;
  uint uVar2;
  CDemonActor_vtable *pCVar3;
  float fVar4;
  int iVar5;
  SMotion *pSVar6;
  int extraout_EAX;
  CVector3f *pCVar7;
  int extraout_EAX_00;
  float fVar8;
  CEnemy *in_stack_00000004;
  float in_stack_00000008;
  SDamageInfo local_1b8;
  SDamageInfo local_17c;
  SDamageInfo local_140;
  uint local_104;
  uint local_100;
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
  uint local_8c;
  uint local_88;
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
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar1->motion_controller);
    uVar2 = pSVar6->state_index;
    if (uVar2 < 5) {
      if (uVar2 == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
        if (extraout_EAX_00 == 0) {
          (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                    ((CDemonActor *)in_stack_00000004);
          if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
            iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                              ((uint)in_stack_00000004[1].base_character.base_actor.orient.pitch);
            if ((iVar5 == 0) &&
               (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                  ((uint)in_stack_00000004[1].base_character.base_actor.orient.bank)
               , iVar5 == 0)) {
              fVar8 = (float)(*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                       ((CDemonActor *)in_stack_00000004,"ub-attack?.wav");
              in_stack_00000004[1].base_character.base_actor.orient.bank = fVar8;
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
          iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                            ((uint)in_stack_00000004[1].base_character.base_actor.orient.pitch);
          if ((iVar5 == 0) &&
             (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                ((uint)in_stack_00000004[1].base_character.base_actor.orient.bank),
             iVar5 == 0)) {
            fVar8 = (float)(*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                     ((CDemonActor *)in_stack_00000004,"ub-howl?.wav");
            in_stack_00000004[1].base_character.base_actor.orient.bank = fVar8;
          }
        }
        fVar8 = in_stack_00000004->speed;
        fVar4 = (float)1.57079632675;
        pCVar3 = (in_stack_00000004->base_character).base_actor.vtable;
        pCVar1 = &(in_stack_00000004->base_character).model;
        *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
             in_stack_00000004->speed * (float)3 * in_stack_00000008;
        *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
             fVar8 * fVar4 * in_stack_00000008;
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
          local_fc = 0x40200000;
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
            iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                              ((uint)in_stack_00000004[1].base_character.base_actor.orient.pitch);
            if ((iVar5 == 0) &&
               (iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                  ((uint)in_stack_00000004[1].base_character.base_actor.orient.bank)
               , iVar5 == 0)) {
              fVar8 = (float)(*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                       ((CDemonActor *)in_stack_00000004,"ub-attack?.wav");
              in_stack_00000004[1].base_character.base_actor.orient.bank = fVar8;
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
          local_20 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                               (&pCVar1->motion_controller);
          local_4c = (double)local_20;
          local_14 = local_20;
          if (local_20 <= (float)3) {
            local_18 = 0x40200000;
            if ((local_4c < 1.0) || (2 < local_4c)) {
              local_44 = (double)local_20;
              if (((float)3 <= local_20) &&
                 ((local_44 <= 4 &&
                  ((in_stack_00000004->base_character).model.part_visibility_flags
                   [*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc)] != 0)
                  ))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_140);
                local_140.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_140.attacker = (CDemonActor *)in_stack_00000004;
                local_140.wielder = (CDemonActor *)in_stack_00000004;
                local_14 = local_140.damage_amount;
                pCVar7 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_a4,(CVector3f *)&DAT_00822c94,
                                    (in_stack_00000004->base_character).model.bone_transform.
                                    bone_world_matrices + DAT_00822ce0);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)in_stack_00000004,&local_68,pCVar7);
                core_enemy_cpp_FUN_004a9880();
              }
            }
            else if ((in_stack_00000004->base_character).model.part_visibility_flags
                     [*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14)] !=
                     0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe0c);
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              pCVar7 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                 (&local_e0,(CVector3f *)&DAT_00822c94,
                                  (in_stack_00000004->base_character).model.bone_transform.
                                  bone_world_matrices + DAT_00822ce4);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)in_stack_00000004,&local_f8,pCVar7);
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
          local_1c = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                               (&pCVar1->motion_controller);
          local_54 = (double)local_1c;
          local_14 = local_1c;
          if (local_1c <= (float)8) {
            local_18 = 0x40200000;
            if (((1.0 <= local_54) && (local_54 <= 2)) ||
               ((local_2c = (double)local_1c, (float)5 <= local_1c &&
                (local_2c <= 6)))) {
              if ((in_stack_00000004->base_character).model.part_visibility_flags
                  [*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14)] != 0)
              {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_17c);
                local_17c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_17c.attacker = (CDemonActor *)in_stack_00000004;
                local_17c.wielder = (CDemonActor *)in_stack_00000004;
                local_14 = local_17c.damage_amount;
                pCVar7 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_80,(CVector3f *)&DAT_00822c94,
                                    (in_stack_00000004->base_character).model.bone_transform.
                                    bone_world_matrices + DAT_00822ce4);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)in_stack_00000004,&local_b0,pCVar7);
                core_enemy_cpp_FUN_004a9880();
              }
            }
            else {
              local_5c = (double)local_1c;
              if (((((float)3 <= local_1c) && (local_5c <= 4)) ||
                  ((local_34 = (double)local_1c, (float)7 <= local_1c &&
                   (local_34 <= 8)))) &&
                 ((in_stack_00000004->base_character).model.part_visibility_flags
                  [*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc)] != 0))
              {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_1b8);
                local_1b8.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
                local_1b8.attacker = (CDemonActor *)in_stack_00000004;
                local_1b8.wielder = (CDemonActor *)in_stack_00000004;
                local_14 = local_1b8.damage_amount;
                pCVar7 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_98,(CVector3f *)&DAT_00822c94,
                                    (in_stack_00000004->base_character).model.bone_transform.
                                    bone_world_matrices + DAT_00822ce0);
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                          ((CDemonActor *)in_stack_00000004,&local_74,pCVar7);
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
      pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (pCVar1,&local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_d4,pCVar7);
      core_gore_cpp_FUN_004ede30();
      (*((in_stack_00000004->base_character).base_actor.vtable)->spawnFlies)
                ((CDemonActor *)in_stack_00000004,0x32,25.0);
      in_stack_00000004->pool_me = 1;
    }
    if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) && (0.0 <= local_18)) {
      fVar8 = in_stack_00000004->speed;
      fVar4 = (float)2.5;
      *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
           in_stack_00000004->speed * (float)1.57079632675 * in_stack_00000008;
      *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
           in_stack_00000008 * fVar4 * fVar8;
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
           in_stack_00000008 * (float)32;
      local_bc = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
                 in_stack_00000008;
      local_b8 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
                 in_stack_00000008;
      local_b4 = in_stack_00000008 *
                 *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
      local_ec = local_bc + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x10);
      local_e8 = local_b8 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
      local_e4 = local_b4 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
      pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->base_character).model.motion_controller);
      if (pSVar6->state_index != 1) {
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
