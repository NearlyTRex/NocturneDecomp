// Name: core_mobster.cpp_FUN_00525840
// Address: 00525840
// Address Range: [[00525840, 00526793]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00525840()
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_00525810 = 00526108
//   TerminatedCString s_mob_scream_wav_00639846
//   TerminatedCString s_s_confused_while_walking_00639856
//   double DOUBLE_00639886 = 3.14159265350000
//   double DOUBLE_0063988e = 0.5
//   double DOUBLE_00639896 = 0.523598775583333
//   double DOUBLE_0063989e = 2
//   double DOUBLE_006398a6 = 32
//   undefined4 DAT_00661778
//   undefined4 DAT_0066177c
//   undefined4 DAT_00661788
//   CConsole* g_CConsolePtr = 0083b1a4
//   CEventList* g_CEventListPtr = 02d05310
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   CEventList g_CEventListInstance
//   CGore g_CGoreInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   undefined4 DAT_02f37ecc
//   undefined4 DAT_02f37ed0
//   CDemonSet g_CDemonSetInstance
//   CVector3f g_ZeroVector
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_004297e0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042d090
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_enemy.cpp_FUN_004a9880
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_gore.cpp_FUN_004ede30
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0
//   core_mobster.cpp_FUN_00525650
//   core_mobster.cpp_FUN_00525720
//   core_mobster.cpp_FUN_00526d90
//   core_mobster.cpp_FUN_005271c0
//   core_mobster.cpp_FUN_005279f0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_FUN_005a9660
//   sound_sndmain.cpp_FUN_005a9c40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_00525840(undefined4 param_1, undefined4
   param_2) */

void core_mobster_cpp_FUN_00525840(void)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  char *pcVar3;
  uint uVar4;
  CDemonActor_vtable *pCVar5;
  CCharacter *pCVar6;
  int iVar7;
  undefined4 uVar8;
  SMotion *pSVar9;
  int iVar10;
  CEnemy *pCVar11;
  CDemonActor *pCVar12;
  CVector3f *pCVar13;
  int extraout_EAX;
  int extraout_EAX_00;
  BADSPACEBASE *in_ESP;
  CEnemy *in_stack_00000004;
  CEnemy *in_stack_00000008;
  float in_stack_fffffe64;
  float fVar14;
  CEnemy *in_stack_fffffe70;
  CEnemy *in_stack_fffffe74;
  SCollisionInfo *in_stack_fffffe78;
  float fVar15;
  float in_stack_fffffe80;
  SDamageInfo local_160;
  float local_124;
  float local_120;
  float local_11c;
  CVector3f local_118;
  CVector3f local_10c;
  CVector3f local_100;
  CVector3f local_f4;
  CVector3f local_e8;
  CVector3f local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3f local_c4;
  CVector3f local_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  CVector3f local_94;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  float local_64;
  undefined4 local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  float local_38;
  float local_34;
  float local_30;
  CDemonActor *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870(&in_stack_00000004->base_character);
  if (iVar7 == 0) {
    if (in_stack_00000004[1].base_character.base_actor.location.area_id != 0) {
      core_mobster_cpp_FUN_00525650();
      core_charactr_cpp_CCharacter_FUN_0042d090(&in_stack_00000004->base_character);
    }
    return;
  }
  if ((in_stack_00000004->base_character).model.part_visibility_flags
      [*(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x5c)] == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe64);
    (*(in_stack_00000004->base_character).base_actor.vtable[1].playAmbientSoundWithVolume)
              ((CDemonActor *)in_stack_00000004,&stack0xfffffe64,in_stack_fffffe64);
  }
  if (*(int *)((in_stack_00000004->base_character).cloth_data + 0x8d40) != 0) {
    (in_stack_00000004->base_character).cloth_data[0x8d44] = '\0';
    (in_stack_00000004->base_character).cloth_data[0x8d45] = '\0';
    (in_stack_00000004->base_character).cloth_data[0x8d46] = '\0';
    (in_stack_00000004->base_character).cloth_data[0x8d47] = '\0';
  }
  if (0 < *(int *)((in_stack_00000004->base_character).cloth_data + 0x478)) {
    (*(in_stack_00000004->base_character).base_actor.vtable[1].renderTargetPoints)
              ((CDemonActor *)in_stack_00000004);
    (*(in_stack_00000004->base_character).base_actor.vtable[1].renderTargetPoints)
              ((CDemonActor *)in_stack_00000004);
    sound_sndmain_cpp_FUN_005a9c40();
    in_stack_fffffe70 = (CEnemy *)0x525907;
    in_stack_fffffe74 = in_stack_00000004;
    iVar7 = (*(in_stack_00000004->base_character).base_actor.vtable[1].hasCollision)
                      ((CDemonActor *)in_stack_00000004,in_stack_fffffe78);
    if (((iVar7 == 0) && (iVar7 = sound_sndmain_cpp_FUN_005a9660(), iVar7 == 0)) &&
       (iVar7 = sound_sndmain_cpp_FUN_005a9660(), iVar7 == 0)) {
      in_stack_fffffe74 = (CEnemy *)0x525a6d;
      uVar8 = (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                        ((CDemonActor *)in_stack_00000004,"mob-scream?.wav");
      *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x30) = uVar8;
    }
  }
  fVar14 = (float)in_stack_00000004[1].base_character.base_actor.field11_0xdc -
           (float)in_stack_00000008;
  in_stack_00000004[1].base_character.base_actor.field11_0xdc = (int)fVar14;
  if (fVar14 < 0.0) {
    in_stack_00000004[1].base_character.base_actor.field11_0xdc = 0;
  }
  fVar14 = in_stack_00000004[1].base_character.base_actor.location.position.x -
           (float)in_stack_00000008;
  in_stack_00000004[1].base_character.base_actor.location.position.x = fVar14;
  if (fVar14 < 0.0) {
    in_stack_00000004[1].base_character.base_actor.location.position.x = 0.0;
  }
  if ((in_stack_00000004->base_character).model.part_visibility_flags
      [*(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x40)] == 0) {
    (*(in_stack_00000004->base_character).base_actor.vtable[1].renderTargetPoints)
              ((CDemonActor *)in_stack_00000004);
  }
  if ((in_stack_00000004->base_character).model.part_visibility_flags
      [*(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x38)] == 0) {
    (*(in_stack_00000004->base_character).base_actor.vtable[1].renderTargetPoints)
              ((CDemonActor *)in_stack_00000004);
  }
  if ((in_stack_00000004[1].base_character.base_actor.orient.bank == 0.0) &&
     (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,
                         (char *)&in_stack_00000004[1].base_character.base_actor.orient.heading),
     iVar7 != 0)) {
    in_stack_00000004[1].base_character.base_actor.orient.bank = 1.4013e-45;
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
  local_38 = (float)in_stack_00000008 * in_stack_00000004->speed;
  pCVar2 = &(in_stack_00000004->base_character).model;
  while (0.0 < local_38) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCVar2->motion_controller);
    if (iVar7 == 100) {
      if (*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) != 0) {
        pCVar6 = &in_stack_00000004[1].base_character;
        (pCVar6->base_actor).actor_name[0x14] = '\0';
        (pCVar6->base_actor).actor_name[0x15] = '\0';
        (pCVar6->base_actor).actor_name[0x16] = '\0';
        (pCVar6->base_actor).actor_name[0x17] = '\0';
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                  (&in_stack_00000004->base_character);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(&in_stack_00000004->base_character);
    }
  }
  fVar14 = in_stack_00000004->speed;
  fVar15 = (float)DOUBLE_00639886;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       (float)in_stack_00000008 * fVar15 * fVar14;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&pCVar2->motion_controller);
  iVar7 = pSVar9->state_index;
  iVar10 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar10 == 0) {
    switch(iVar7) {
    case 0:
      if (in_stack_00000004[1].base_character.base_actor.orient.bank == 0.0) {
        (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                  ((CDemonActor *)in_stack_00000004);
        if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
          in_stack_fffffe70 = in_stack_00000008;
          core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
          if (extraout_EAX != 0) {
            in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
          }
          break;
        }
        fVar14 = in_stack_00000004[1].base_character.base_actor.location.position.z;
        if (fVar14 != 0.0) {
          if (in_stack_00000004[1].base_character.base_actor.location.position.y == 0.0) {
            local_d0 = (in_stack_00000004->base_character).base_actor.location.position.x -
                       *(float *)((int)fVar14 + 0x20);
            local_cc = (in_stack_00000004->base_character).base_actor.location.position.y -
                       *(float *)((int)fVar14 + 0x24);
            local_c8 = (in_stack_00000004->base_character).base_actor.location.position.z -
                       *(float *)((int)fVar14 + 0x28);
            if ((float)DOUBLE_0063989e <
                SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc)) {
              in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
              in_stack_00000004[1].base_character.base_actor.location.position.y = 1.4013e-45;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,8,1);
              break;
            }
          }
          else {
            in_stack_00000004[1].base_character.base_actor.location.position.y = 0.0;
          }
        }
        if (in_stack_00000004[1].base_character.base_actor.location.area_id == 0) {
          iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
          local_10c.x = *(float *)(iVar7 + 0x20) -
                        (in_stack_00000004->base_character).base_actor.location.position.x;
          local_10c.y = *(float *)(iVar7 + 0x24) -
                        (in_stack_00000004->base_character).base_actor.location.position.y;
          local_10c.z = *(float *)(iVar7 + 0x28) -
                        (in_stack_00000004->base_character).base_actor.location.position.z;
          local_20 = SQRT(local_10c.z * local_10c.z +
                          local_10c.x * local_10c.x + local_10c.y * local_10c.y);
          local_18 = local_20;
          if (local_20 < DAT_00661778 + 1.0) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_70,&local_10c);
            in_stack_fffffe70 =
                 (CEnemy *)(local_70.y - (in_stack_00000004->base_character).base_actor.orient.bank)
            ;
            local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)in_stack_fffffe70);
            if ((ABS(local_14) < (float)DOUBLE_00639896) &&
               (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
              in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base_character).model.motion_controller,9,1);
              in_stack_00000004->field6_0xbe38[0] = '\0';
              in_stack_00000004->field6_0xbe38[1] = '\0';
              in_stack_00000004->field6_0xbe38[2] = '\0';
              in_stack_00000004->field6_0xbe38[3] = '@';
            }
          }
          if (local_20 < in_stack_00000004->guard_distance) {
            if (_DAT_00661788 <= local_20) {
              iVar7 = 8;
            }
            else {
              iVar7 = 1;
            }
            in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->base_character).model.motion_controller,iVar7,1);
          }
          if (*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) == 0) {
            in_stack_fffffe70 = (CEnemy *)0x3f333333;
            iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.7);
            if (iVar7 != 0) {
              in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
              core_mobster_cpp_FUN_005279f0();
              pCVar6 = &in_stack_00000004[1].base_character;
              (pCVar6->base_actor).actor_name[0x18] = '\x01';
              (pCVar6->base_actor).actor_name[0x19] = '\0';
              (pCVar6->base_actor).actor_name[0x1a] = '\0';
              (pCVar6->base_actor).actor_name[0x1b] = '\0';
              break;
            }
          }
          pCVar6 = &in_stack_00000004[1].base_character;
          (pCVar6->base_actor).actor_name[0x18] = '\x01';
          (pCVar6->base_actor).actor_name[0x19] = '\0';
          (pCVar6->base_actor).actor_name[0x1a] = '\0';
          (pCVar6->base_actor).actor_name[0x1b] = '\0';
          break;
        }
        if (*(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60) <=
            (float)DOUBLE_0063988e) break;
        in_stack_fffffe70 = (CEnemy *)0x3e800000;
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.25);
        if (iVar7 != 0) {
          in_stack_fffffe70 = in_stack_00000004;
          core_mobster_cpp_FUN_00525720();
          break;
        }
      }
      else {
        fVar14 = *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60);
        *(CHero **)(in_stack_00000004->field6_0xbe38 + 4) = g_HeroActors[g_LocalHeroIndex];
        if (fVar14 <= (float)DOUBLE_0063988e) break;
      }
      core_mobster_cpp_FUN_005271c0();
      break;
    case 1:
    case 8:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      pCVar2 = &(in_stack_00000004->base_character).model;
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) {
        core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
        if (extraout_EAX_00 == 0) {
          in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,0,1);
        }
        else {
          in_stack_fffffe70 = (CEnemy *)&DAT_00000001;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,1,1);
        }
      }
      else if (in_stack_00000004[1].base_character.base_actor.location.position.y == 0.0) {
        in_stack_fffffe70 = in_stack_00000008;
        iVar7 = core_mobster_cpp_FUN_00526d90();
        if (iVar7 == 0) {
          local_24 = DAT_00661778 + 1.0;
          if ((in_stack_00000004->base_character).carry_hands[1].carry_actor != (CDemonActor *)0x0)
          {
            local_24 = DAT_0066177c;
          }
          in_stack_fffffe70 = (CEnemy *)0x3e32b8c2;
          (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
          (in_stack_00000004->base_character).model.accumulated_root_motion.y =
               (in_stack_00000004->base_character).model.accumulated_root_motion.z;
          (in_stack_00000004->base_character).model.accumulated_root_motion.x =
               (in_stack_00000004->base_character).model.accumulated_root_motion.y;
          local_a0 = 0;
          local_28 = DAT_00661778;
          local_98 = DAT_00661778;
          local_9c = 0;
          (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))();
          iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                            (&in_stack_00000004->base_character);
          if (-1 < iVar7) {
            pCVar1 = &(in_stack_00000004->base_character).base_actor.location;
            local_64 = (pCVar1->position).x -
                       *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
            local_5c = (in_stack_00000004->base_character).base_actor.location.position.z -
                       *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
            local_30 = SQRT(local_5c * local_5c + local_64 * local_64);
            local_60 = 0;
            local_1c = local_30;
            if ((local_30 <= local_24) && (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
              pCVar2 = &(in_stack_00000004->base_character).model;
              if ((in_stack_00000004->base_character).carry_hands[1].carry_actor ==
                  (CDemonActor *)0x0) {
                iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
                local_b8.x = *(float *)(iVar7 + 0x20) - (pCVar1->position).x;
                local_b8.y = *(float *)(iVar7 + 0x24) -
                             (in_stack_00000004->base_character).base_actor.location.position.y;
                local_b8.z = *(float *)(iVar7 + 0x28) -
                             (in_stack_00000004->base_character).base_actor.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_f4,&local_b8);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_f4.y -
                                      (in_stack_00000004->base_character).base_actor.orient.bank);
                if (ABS(local_14) < (float)DOUBLE_00639896) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&pCVar2->motion_controller,9,1);
                }
              }
              else if (local_28 + 1.0 <= local_30) {
                if (((float)DOUBLE_0063988e <
                     *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60))
                   && ((float)in_stack_00000004[1].base_character.base_actor.field11_0xdc <= 0.0)) {
                  in_stack_00000004[1].base_character.base_actor.location.position.x = 0.0;
                  iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.3);
                  if (iVar7 != 0) {
                    core_mobster_cpp_FUN_005279f0();
                  }
                  if (in_stack_00000004[1].base_character.base_actor.location.position.x <= 0.0) {
                    core_mobster_cpp_FUN_005271c0();
                  }
                  else {
                    pCVar2 = &(in_stack_00000004->base_character).model;
                    if ((in_stack_00000004->base_character).carry_hands[0].carry_actor ==
                        (CDemonActor *)0x0) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&pCVar2->motion_controller,10,1);
                    }
                    else {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&pCVar2->motion_controller,0xb,1);
                    }
                  }
                }
              }
              else {
                iVar7 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
                local_e8.x = *(float *)(iVar7 + 0x20) - (pCVar1->position).x;
                local_e8.y = *(float *)(iVar7 + 0x24) -
                             (in_stack_00000004->base_character).base_actor.location.position.y;
                local_e8.z = *(float *)(iVar7 + 0x28) -
                             (in_stack_00000004->base_character).base_actor.location.position.z;
                core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&local_58,&local_e8);
                local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                     (local_58.y -
                                      (in_stack_00000004->base_character).base_actor.orient.bank);
                if ((ABS(local_14) < (float)DOUBLE_00639896) &&
                   (*(float *)in_stack_00000004->field6_0xbe38 <= 0.0)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&pCVar2->motion_controller,9,1);
                  in_stack_00000004->field6_0xbe38[0] = '\0';
                  in_stack_00000004->field6_0xbe38[1] = '\0';
                  in_stack_00000004->field6_0xbe38[2] = '\0';
                  in_stack_00000004->field6_0xbe38[3] = '@';
                }
              }
              in_stack_00000004->field6_0xbe38[0] = '\0';
              in_stack_00000004->field6_0xbe38[1] = '\0';
              in_stack_00000004->field6_0xbe38[2] = -0x80;
              in_stack_00000004->field6_0xbe38[3] = '?';
            }
            if (in_stack_00000004->guard_distance < local_30) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base_character).model.motion_controller,0,1);
            }
          }
        }
      }
      else {
        in_stack_fffffe70 = (CEnemy *)0x3e32b8c2;
        (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
        (in_stack_00000004->base_character).model.accumulated_root_motion.y =
             (in_stack_00000004->base_character).model.accumulated_root_motion.z;
        (in_stack_00000004->base_character).model.accumulated_root_motion.x =
             (in_stack_00000004->base_character).model.accumulated_root_motion.y;
        local_88 = 0;
        local_80 = DAT_00661778;
        local_84 = 0;
        (**(code **)(*(int *)((int)in_stack_00000004[1].base_character.base_actor.location.position.
                                   z + 0x154) + 0xbc))();
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                          (&in_stack_00000004->base_character);
        if (iVar7 < 1) {
          if (iVar7 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,0,1);
            in_stack_00000004[1].base_character.base_actor.location.position.z = 0.0;
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&pCVar2->motion_controller,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                ((CDemonActor *)in_stack_00000004);
      if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
        in_stack_fffffe70 = (CEnemy *)g_CWeaponClassInfo.name_hash;
        pCVar11 = (CEnemy *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            ((in_stack_00000004->base_character).carry_hands[1].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        if (pCVar11 != (CEnemy *)0x0) {
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          local_34 = (pCVar11->base_character).model.transformed_vertices[0x4f].y;
          pCVar5 = (pCVar11->base_character).base_actor.vtable;
          (pCVar11->base_character).model.transformed_vertices[0x4f].y = 1.4013e-43;
          in_stack_fffffe70 = pCVar11;
          iVar7 = (*pCVar5[1].renderBackground)((CDemonActor *)pCVar11,(int)in_stack_fffffe74);
          if (iVar7 != 0) {
            (*(pCVar11->base_character).base_actor.vtable[1].renderTransparent)
                      ((CDemonActor *)pCVar11);
          }
          (pCVar11->base_character).model.transformed_vertices[0x4f].y = local_34;
        }
        pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((in_stack_00000004->base_character).carry_hands[0].carry_actor,
                             g_CWeaponClassInfo.name_hash);
        local_2c = pCVar12;
        if (pCVar12 != (CDemonActor *)0x0) {
          core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
          pCVar5 = pCVar12->vtable;
          uVar8 = *(undefined4 *)(pCVar12[4].actor_name + 8);
          pCVar12[4].actor_name[8] = 'd';
          pCVar12[4].actor_name[9] = '\0';
          pCVar12[4].actor_name[10] = '\0';
          pCVar12[4].actor_name[0xb] = '\0';
          iVar7 = (*pCVar5[1].renderBackground)(pCVar12,(int)in_stack_fffffe80);
          if (iVar7 == 0) {
            *(undefined4 *)(local_2c[4].actor_name + 8) = uVar8;
          }
          else {
            (*pCVar12->vtable[1].renderTransparent)(pCVar12);
            *(undefined4 *)(local_2c[4].actor_name + 8) = uVar8;
          }
        }
      }
      if ((*(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x60) <
           (float)DOUBLE_0063988e) ||
         ((float)in_stack_00000004[1].base_character.base_actor.field11_0xdc <= 0.0)) {
        if (in_stack_00000004[1].base_character.base_actor.orient.bank == 0.0) {
          fVar15 = 4.0;
          fVar14 = 2.0;
        }
        else {
          fVar15 = 5.0;
          fVar14 = 4.0;
        }
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar14,fVar15);
        in_stack_00000004[1].base_character.base_actor.field11_0xdc = (int)local_14;
        in_stack_fffffe70 = (CEnemy *)0x525f6f;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->base_character).model.motion_controller,0,1);
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.3);
        if (iVar7 != 0) {
          core_mobster_cpp_FUN_005279f0();
        }
      }
      break;
    case 5:
      if ((in_stack_00000004->pool_me == 0) &&
         ((in_stack_00000004->base_character).base_actor.field11_0xdc == 0)) {
        pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_c4,pCVar13);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_160);
      local_160.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_160.attacker = (CDemonActor *)in_stack_00000004;
      local_160.wielder = (CDemonActor *)in_stack_00000004;
      local_14 = local_160.damage_amount;
      if ((in_stack_00000004->base_character).model.part_visibility_flags
          [*(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x38)] != 0) {
        pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_118,&g_ZeroVector,
                             (in_stack_00000004->base_character).model.bone_transform.
                             bone_world_matrices + DAT_02f37ecc);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_100,pCVar13);
        core_enemy_cpp_FUN_004a9880();
      }
      local_160.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
      local_14 = local_160.damage_amount;
      if ((in_stack_00000004->base_character).model.part_visibility_flags
          [*(int *)(in_stack_00000004[1].base_character.base_actor.create_event + 0x40)] != 0) {
        pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                            (&local_94,&g_ZeroVector,
                             (in_stack_00000004->base_character).model.bone_transform.
                             bone_world_matrices + DAT_02f37ed0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_dc,pCVar13);
        core_enemy_cpp_FUN_004a9880();
      }
      break;
    case 10:
    case 0xb:
      if (in_stack_00000004[1].base_character.base_actor.location.position.x <= 0.0) {
        core_mobster_cpp_FUN_005271c0();
      }
    }
    goto switchD_0052677f_caseD_7;
  }
  uVar4 = *(uint *)((in_stack_00000004->base_character).field11_0x25a0 + 0x10);
  if (uVar4 < 2) {
    if (uVar4 == 1) {
LAB_00525b6c:
      fVar14 = 1.4013e-45;
    }
    else {
LAB_00525dac:
      fVar14 = 0.0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,(int)fVar14,1);
  }
  else {
    if (uVar4 < 3) goto LAB_00525b6c;
    if (uVar4 != 3) goto LAB_00525dac;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&pCVar2->motion_controller,0,1);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
  (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
  (in_stack_00000004->base_character).model.accumulated_root_motion.y =
       (in_stack_00000004->base_character).model.accumulated_root_motion.z;
  (in_stack_00000004->base_character).model.accumulated_root_motion.x =
       (in_stack_00000004->base_character).model.accumulated_root_motion.y;
switchD_0052677f_caseD_7:
  if (0.0 < *(float *)in_stack_00000004->field6_0xbe38) {
    *(float *)in_stack_00000004->field6_0xbe38 =
         *(float *)in_stack_00000004->field6_0xbe38 - (float)in_stack_00000008;
  }
  if (in_stack_00000004[1].base_character.base_actor.location.area_id == 0) {
    iVar7 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
    if (iVar7 != 0) {
      if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
         (pCVar11 = (CEnemy *)
                    (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                                0x108))(), pCVar11 == in_stack_00000004)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                  (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4));
      }
      *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
           *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
           (float)in_stack_00000008 * (float)DOUBLE_006398a6;
      local_ac = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
                 (float)in_stack_00000008;
      local_a8 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
                 (float)in_stack_00000008;
      pcVar3 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
      local_a4 = (float)in_stack_00000008 *
                 *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
      pCVar13 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
      local_124 = local_ac + *(float *)pcVar3;
      local_120 = local_a8 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
      local_11c = local_a4 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
      local_7c = local_124 + pCVar13->x;
      local_78 = local_120 + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
      local_74 = local_11c + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
      (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
      (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
      (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
      (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
      *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
           *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
      *(float *)pcVar3 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
      (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
      fVar14 = (in_stack_00000004->base_character).model.accumulated_root_motion.z;
      (in_stack_00000004->base_character).model.accumulated_root_motion.y = fVar14;
      pCVar13->x = fVar14;
      core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
    }
  }
  else {
    core_mobster_cpp_FUN_00525650();
  }
  pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((in_stack_00000004->base_character).carry_hands[1].carry_actor,
                       g_CWeaponClassInfo.name_hash);
  if (pCVar12 != (CDemonActor *)0x0) {
    (*pCVar12->vtable->process)(pCVar12);
  }
  pCVar12 = core_actor_cpp_castToClassHash_FUN_0040c790
                      ((in_stack_00000004->base_character).carry_hands[0].carry_actor,
                       g_CWeaponClassInfo.name_hash);
  if (pCVar12 != (CDemonActor *)0x0) {
    (*pCVar12->vtable->process)(pCVar12);
  }
  core_charactr_cpp_CCharacter_FUN_00429820(&in_stack_00000004->base_character);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
            (&(in_stack_00000004->base_character).model);
  iVar7 = (*(in_stack_00000004->base_character).base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)in_stack_00000004,(SCollisionInfo *)in_stack_fffffe70);
  if (iVar7 == 0) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_005267a0();
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  return;
}


// Assembly code:
// 00525840: PUSH EBX
//   Label: core_mobster.cpp_FUN_00525840
// 00525841: PUSH ESI
// 00525842: PUSH EDI
// 00525843: PUSH EBP
// 00525844: MOV EBP,ESP
// 00525846: SUB ESP,0x18c
// 0052584c: SUB EBP,0x7a
// 0052584f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00525855: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0052585b: PUSH EBX
// 0052585c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 00525861: ADD ESP,0x8
// 00525864: TEST EAX,EAX
// 00525866: JNZ 0x00525893
//   XREF to: 00525893 (CONDITIONAL_JUMP)
// 00525868: CMP dword ptr [EBX + 0xbee0],0x0
// 0052586f: JNZ 0x00525879
//   XREF to: 00525879 (CONDITIONAL_JUMP)
// 00525871: LEA ESP,[EBP + 0x7a]
//   Label: LAB_00525871
//   XREF to: Stack[-0x10] (DATA)
// 00525874: POP EBP
// 00525875: POP EDI
// 00525876: POP ESI
// 00525877: POP EBX
// 00525878: RET
// 00525879: PUSH EBX
//   Label: LAB_00525879
// 0052587a: CALL core_mobster.cpp_FUN_00525650
//   XREF to: 00525650 (UNCONDITIONAL_CALL)
// 0052587f: ADD ESP,0x4
// 00525882: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00525888: PUSH EBX
// 00525889: CALL core_charactr.cpp_CCharacter_FUN_0042d090
//   XREF to: 0042d090 (UNCONDITIONAL_CALL)
// 0052588e: ADD ESP,0x8
// 00525891: JMP 0x00525871
//   XREF to: 00525871 (UNCONDITIONAL_JUMP)
// 00525893: MOV EAX,dword ptr [EBX + 0xbf88]
//   Label: LAB_00525893
// 00525899: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005258a1: JZ 0x00525a05
//   XREF to: 00525a05 (CONDITIONAL_JUMP)
// 005258a7: CMP dword ptr [EBX + 0xb7d8],0x0
//   Label: LAB_005258a7
// 005258ae: JZ 0x005258ba
//   XREF to: 005258ba (CONDITIONAL_JUMP)
// 005258b0: MOV dword ptr [EBX + 0xb7dc],0x0
// 005258ba: CMP dword ptr [EBX + 0x2f10],0x0
//   Label: LAB_005258ba
// 005258c1: JLE 0x00525925
//   XREF to: 00525925 (CONDITIONAL_JUMP)
// 005258c3: PUSH 0x0
// 005258c5: PUSH 0x1
// 005258c7: MOV EAX,dword ptr [EBX + 0x154]
// 005258cd: PUSH EBX
// 005258ce: CALL dword ptr [EAX + 0x13c]
// 005258d4: ADD ESP,0xc
// 005258d7: PUSH 0x0
// 005258d9: PUSH 0x0
// 005258db: MOV EAX,dword ptr [EBX + 0x154]
// 005258e1: PUSH EBX
// 005258e2: CALL dword ptr [EAX + 0x13c]
// 005258e8: ADD ESP,0xc
// 005258eb: MOV EAX,dword ptr [EBX + 0xbf54]
// 005258f1: PUSH EAX
// 005258f2: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005258f7: ADD ESP,0x4
// 005258fa: MOV EAX,dword ptr [EBX + 0x154]
// 00525900: PUSH EBX
// 00525901: CALL dword ptr [EAX + 0x120]
// 00525907: ADD ESP,0x4
// 0052590a: TEST EAX,EAX
// 0052590c: JNZ 0x00525925
//   XREF to: 00525925 (CONDITIONAL_JUMP)
// 0052590e: MOV EDX,dword ptr [EBX + 0xbf5c]
// 00525914: PUSH EDX
// 00525915: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0052591a: ADD ESP,0x4
// 0052591d: TEST EAX,EAX
// 0052591f: JZ 0x00525a47
//   XREF to: 00525a47 (CONDITIONAL_JUMP)
// 00525925: FLD float ptr [EBX + 0xbf90]
//   Label: LAB_00525925
// 0052592b: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00525931: FST float ptr [EBX + 0xbf90]
// 00525937: FLDZ
// 00525939: FCOMPP
// 0052593b: FNSTSW AX
// 0052593d: SAHF
// 0052593e: JBE 0x0052594a
//   XREF to: 0052594a (CONDITIONAL_JUMP)
// 00525940: MOV dword ptr [EBX + 0xbf90],0x0
// 0052594a: FLD float ptr [EBX + 0xbed4]
//   Label: LAB_0052594a
// 00525950: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00525956: FST float ptr [EBX + 0xbed4]
// 0052595c: FLDZ
// 0052595e: FCOMPP
// 00525960: FNSTSW AX
// 00525962: SAHF
// 00525963: JBE 0x0052596f
//   XREF to: 0052596f (CONDITIONAL_JUMP)
// 00525965: MOV dword ptr [EBX + 0xbed4],0x0
// 0052596f: MOV EAX,dword ptr [EBX + 0xbf6c]
//   Label: LAB_0052596f
// 00525975: MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298]
// 0052597c: TEST ESI,ESI
// 0052597e: JZ 0x00525a7b
//   XREF to: 00525a7b (CONDITIONAL_JUMP)
// 00525984: MOV EAX,dword ptr [EBX + 0xbf64]
//   Label: LAB_00525984
// 0052598a: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298]
// 00525991: TEST EDI,EDI
// 00525993: JZ 0x00525a93
//   XREF to: 00525a93 (CONDITIONAL_JUMP)
// 00525999: CMP dword ptr [EBX + 0xbee8],0x0
//   Label: LAB_00525999
// 005259a0: JZ 0x00525aaa
//   XREF to: 00525aaa (CONDITIONAL_JUMP)
// 005259a6: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_005259a6
// 005259ac: MOV dword ptr [EAX + 0x8],0x0
// 005259b3: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005259b9: MOV EDX,dword ptr [EAX + 0x8]
// 005259bc: MOV dword ptr [EAX + 0x4],EDX
// 005259bf: MOV EDX,dword ptr [EAX + 0x4]
// 005259c2: MOV dword ptr [EAX],EDX
// 005259c4: FMUL float ptr [EBX + 0xbe24]
// 005259ca: LEA ESI,[EBX + 0x158]
// 005259d0: FSTP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (WRITE)
// 005259d3: FLD float ptr [EBP + 0x52]
//   Label: LAB_005259d3
//   XREF to: Stack[-0x38] (READ)
// 005259d6: FLDZ
// 005259d8: FCOMPP
// 005259da: FNSTSW AX
// 005259dc: SAHF
// 005259dd: JNC 0x00525b0b
//   XREF to: 00525b0b (CONDITIONAL_JUMP)
// 005259e3: LEA EAX,[EBP + 0x52]
//   XREF to: Stack[-0x38] (DATA)
// 005259e6: PUSH EAX
// 005259e7: PUSH ESI
// 005259e8: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005259ed: ADD ESP,0x8
// 005259f0: CMP EAX,0x64
// 005259f3: JZ 0x00525ad7
//   XREF to: 00525ad7 (CONDITIONAL_JUMP)
// 005259f9: PUSH EAX
// 005259fa: PUSH EBX
// 005259fb: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00525a00: ADD ESP,0x8
// 00525a03: JMP 0x005259d3
//   XREF to: 005259d3 (UNCONDITIONAL_JUMP)
// 00525a05: LEA EAX,[EBP + 0xfffffeee]
//   Label: LAB_00525a05
//   XREF to: Stack[-0x19c] (DATA)
// 00525a0b: PUSH EAX
// 00525a0c: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00525a11: MOV ECX,0x4479f99a
// 00525a16: ADD ESP,0x4
// 00525a19: LEA EAX,[EBP + 0xfffffeee]
//   XREF to: Stack[-0x19c] (DATA)
// 00525a1f: MOV dword ptr [EBP + 0xffffff22],EBX
//   XREF to: Stack[-0x168] (WRITE)
// 00525a25: PUSH EAX
// 00525a26: MOV dword ptr [EBP + 0xffffff26],EBX
//   XREF to: Stack[-0x164] (WRITE)
// 00525a2c: MOV dword ptr [EBP + 0xfffffef2],ECX
//   XREF to: Stack[-0x198] (WRITE)
// 00525a32: PUSH EBX
// 00525a33: MOV EDX,dword ptr [EBX + 0x154]
// 00525a39: CALL dword ptr [EDX + 0x11c]
// 00525a3f: ADD ESP,0x8
// 00525a42: JMP 0x005258a7
//   XREF to: 005258a7 (UNCONDITIONAL_JUMP)
// 00525a47: MOV ECX,dword ptr [EBX + 0xbf50]
//   Label: LAB_00525a47
// 00525a4d: PUSH ECX
// 00525a4e: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00525a53: ADD ESP,0x4
// 00525a56: TEST EAX,EAX
// 00525a58: JNZ 0x00525925
//   XREF to: 00525925 (CONDITIONAL_JUMP)
// 00525a5e: PUSH 0x639846
//   XREF to: 00639846 (DATA)
// 00525a63: MOV EAX,dword ptr [EBX + 0x154]
// 00525a69: PUSH EBX
// 00525a6a: CALL dword ptr [EAX + 0x24]
// 00525a6d: ADD ESP,0x8
// 00525a70: MOV dword ptr [EBX + 0xbf5c],EAX
// 00525a76: JMP 0x00525925
//   XREF to: 00525925 (UNCONDITIONAL_JUMP)
// 00525a7b: PUSH ESI
//   Label: LAB_00525a7b
// 00525a7c: PUSH 0x1
// 00525a7e: MOV EAX,dword ptr [EBX + 0x154]
// 00525a84: PUSH EBX
// 00525a85: CALL dword ptr [EAX + 0x13c]
// 00525a8b: ADD ESP,0xc
// 00525a8e: JMP 0x00525984
//   XREF to: 00525984 (UNCONDITIONAL_JUMP)
// 00525a93: PUSH EDI
//   Label: LAB_00525a93
// 00525a94: PUSH EDI
// 00525a95: MOV EAX,dword ptr [EBX + 0x154]
// 00525a9b: PUSH EBX
// 00525a9c: CALL dword ptr [EAX + 0x13c]
// 00525aa2: ADD ESP,0xc
// 00525aa5: JMP 0x00525999
//   XREF to: 00525999 (UNCONDITIONAL_JUMP)
// 00525aaa: LEA EAX,[EBX + 0xbeec]
//   Label: LAB_00525aaa
// 00525ab0: PUSH EAX
// 00525ab1: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00525ab7: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 00525ab8: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00525abd: ADD ESP,0x8
// 00525ac0: TEST EAX,EAX
// 00525ac2: JZ 0x005259a6
//   XREF to: 005259a6 (CONDITIONAL_JUMP)
// 00525ac8: MOV dword ptr [EBX + 0xbee8],0x1
// 00525ad2: JMP 0x005259a6
//   XREF to: 005259a6 (UNCONDITIONAL_JUMP)
// 00525ad7: MOV EDX,dword ptr [EBX + 0xbec8]
//   Label: LAB_00525ad7
// 00525add: TEST EDX,EDX
// 00525adf: JZ 0x005259d3
//   XREF to: 005259d3 (CONDITIONAL_JUMP)
// 00525ae5: MOV EAX,EDX
// 00525ae7: PUSH 0x3e4ccccd
// 00525aec: PUSH EAX
// 00525aed: MOV EDX,0x1
// 00525af2: PUSH EDX
// 00525af3: PUSH EBX
// 00525af4: MOV dword ptr [EBX + 0xbec8],0x0
// 00525afe: CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)
// 00525b03: ADD ESP,0x10
// 00525b06: JMP 0x005259d3
//   XREF to: 005259d3 (UNCONDITIONAL_JUMP)
// 00525b0b: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_00525b0b
// 00525b11: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00525b17: FMUL double ptr [0x00639886]
//   XREF to: 00639886 (READ)
// 00525b1d: FMULP
// 00525b1f: FLD float ptr [EBX + 0x23b4]
// 00525b25: PUSH ESI
// 00525b26: FSTP float ptr [EBX + 0x2434]
// 00525b2c: FSTP float ptr [EBX + 0x2438]
// 00525b32: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00525b37: ADD ESP,0x4
// 00525b3a: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00525b40: PUSH EBX
// 00525b41: MOV EDI,dword ptr [EAX + 0x24]
// 00525b44: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 00525b49: ADD ESP,0x8
// 00525b4c: TEST EAX,EAX
// 00525b4e: JZ 0x00526776
//   XREF to: 00526776 (CONDITIONAL_JUMP)
// 00525b54: MOV EAX,dword ptr [EBX + 0x25b0]
// 00525b5a: CMP EAX,0x2
// 00525b5d: JNC 0x00525da1
//   XREF to: 00525da1 (CONDITIONAL_JUMP)
// 00525b63: CMP EAX,0x1
// 00525b66: JNZ 0x00525dac
//   XREF to: 00525dac (CONDITIONAL_JUMP)
// 00525b6c: PUSH 0x1
//   Label: LAB_00525b6c
// 00525b6e: PUSH 0x1
// 00525b70: LEA EAX,[EBX + 0x158]
//   Label: LAB_00525b70
// 00525b76: PUSH EAX
// 00525b77: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00525b7c: ADD ESP,0xc
//   Label: LAB_00525b7c
// 00525b7f: LEA EAX,[EBX + 0x23ac]
// 00525b85: MOV dword ptr [EAX + 0x8],0x0
// 00525b8c: MOV EDX,dword ptr [EAX + 0x8]
// 00525b8f: MOV dword ptr [EAX + 0x4],EDX
// 00525b92: MOV EDX,dword ptr [EAX + 0x4]
// 00525b95: MOV dword ptr [EAX],EDX
// 00525b97: FLD float ptr [EBX + 0xbe38]
//   Label: caseD_7
// 00525b9d: FLDZ
// 00525b9f: FCOMPP
// 00525ba1: FNSTSW AX
// 00525ba3: SAHF
// 00525ba4: JNC 0x00525bb8
//   XREF to: 00525bb8 (CONDITIONAL_JUMP)
// 00525ba6: FLD float ptr [EBX + 0xbe38]
// 00525bac: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00525bb2: FSTP float ptr [EBX + 0xbe38]
// 00525bb8: CMP dword ptr [EBX + 0xbee0],0x0
//   Label: LAB_00525bb8
// 00525bbf: JNZ 0x00526786
//   XREF to: 00526786 (CONDITIONAL_JUMP)
// 00525bc5: PUSH EBX
// 00525bc6: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 00525bcb: ADD ESP,0x4
// 00525bce: TEST EAX,EAX
// 00525bd0: JZ 0x00525cd1
//   XREF to: 00525cd1 (CONDITIONAL_JUMP)
// 00525bd6: MOV EDI,dword ptr [EBX + 0xbe3c]
// 00525bdc: TEST EDI,EDI
// 00525bde: JZ 0x00525c0a
//   XREF to: 00525c0a (CONDITIONAL_JUMP)
// 00525be0: PUSH EDI
// 00525be1: MOV EDX,dword ptr [EDI + 0x154]
// 00525be7: CALL dword ptr [EDX + 0x108]
// 00525bed: ADD ESP,0x4
// 00525bf0: CMP EAX,EBX
// 00525bf2: JNZ 0x00525c0a
//   XREF to: 00525c0a (CONDITIONAL_JUMP)
// 00525bf4: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00525bfa: PUSH EAX
// 00525bfb: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 00525c01: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00525c02: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 00525c07: ADD ESP,0x8
// 00525c0a: FLD float ptr [EBP + 0x92]
//   Label: LAB_00525c0a
//   XREF to: Stack[0x8] (READ)
// 00525c10: FLD ST0
// 00525c12: FMUL double ptr [0x006398a6]
//   XREF to: 006398a6 (READ)
// 00525c18: FLD float ptr [EBX + 0x242c]
// 00525c1e: FXCH
// 00525c20: FSUBR ST0,ST1
// 00525c22: LEA ESI,[EBX + 0x2428]
// 00525c28: FSTP ST1
// 00525c2a: FSTP float ptr [EBX + 0x242c]
// 00525c30: FLD float ptr [ESI]
// 00525c32: FMUL ST1
// 00525c34: FSTP float ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (WRITE)
// 00525c37: FLD float ptr [ESI + 0x4]
// 00525c3a: FMUL ST1
// 00525c3c: LEA EAX,[EBX + 0x241c]
// 00525c42: FSTP float ptr [EBP + -0x1e]
//   XREF to: Stack[-0xa8] (WRITE)
// 00525c45: FMUL float ptr [ESI + 0x8]
// 00525c48: LEA EDX,[EBX + 0x23ac]
// 00525c4e: FLD float ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (READ)
// 00525c51: FXCH
// 00525c53: FSTP float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (WRITE)
// 00525c56: FADD float ptr [EAX]
// 00525c58: FLD float ptr [EBP + -0x1e]
//   XREF to: Stack[-0xa8] (READ)
// 00525c5b: FXCH
// 00525c5d: FSTP float ptr [EBP + 0xffffff66]
//   XREF to: Stack[-0x124] (WRITE)
// 00525c63: FADD float ptr [EAX + 0x4]
// 00525c66: FLD float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (READ)
// 00525c69: FXCH
// 00525c6b: FSTP float ptr [EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (WRITE)
// 00525c71: FADD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 00525c74: FLD float ptr [EBP + 0xffffff66]
//   XREF to: Stack[-0x124] (READ)
// 00525c7a: FXCH
// 00525c7c: FSTP float ptr [EBP + 0xffffff6e]
//   XREF to: Stack[-0x11c] (WRITE)
// 00525c82: FADD float ptr [EDX]
// 00525c84: FLD float ptr [EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (READ)
// 00525c8a: FXCH
// 00525c8c: FSTP float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (WRITE)
// 00525c8f: FADD float ptr [EDX + 0x4]
// 00525c92: FLD float ptr [EBP + 0xffffff6e]
//   XREF to: Stack[-0x11c] (READ)
// 00525c98: FXCH
// 00525c9a: FSTP float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (WRITE)
// 00525c9d: FADD float ptr [EDX + 0x8]
// 00525ca0: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (WRITE)
// 00525ca3: MOV dword ptr [EAX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 00525caa: MOV ECX,dword ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 00525cad: MOV dword ptr [EAX + 0x4],ECX
// 00525cb0: MOV ECX,dword ptr [EAX + 0x4]
// 00525cb3: MOV dword ptr [EAX],ECX
// 00525cb5: MOV dword ptr [EDX + 0x8],0x0
// 00525cbc: LEA EAX,[EBP + 0xe]
//   XREF to: Stack[-0x7c] (DATA)
// 00525cbf: FLD float ptr [EDX + 0x8]
// 00525cc2: PUSH EAX
// 00525cc3: FST float ptr [EDX + 0x4]
// 00525cc6: PUSH EBX
// 00525cc7: FSTP float ptr [EDX]
// 00525cc9: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 00525cce: ADD ESP,0x8
// 00525cd1: MOV ECX,dword ptr [0x03f95d78]
//   Label: LAB_00525cd1
//   XREF to: 03f95d78 (READ)
// 00525cd7: PUSH ECX
// 00525cd8: MOV ESI,dword ptr [EBX + 0x24f8]
// 00525cde: PUSH ESI
// 00525cdf: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00525ce4: ADD ESP,0x8
// 00525ce7: TEST EAX,EAX
// 00525ce9: JZ 0x00525cfe
//   XREF to: 00525cfe (CONDITIONAL_JUMP)
// 00525ceb: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00525cf1: MOV EDX,dword ptr [EAX + 0x154]
// 00525cf7: PUSH EAX
// 00525cf8: CALL dword ptr [EDX + 0x4]
// 00525cfb: ADD ESP,0x8
// 00525cfe: MOV EDI,dword ptr [0x03f95d78]
//   Label: LAB_00525cfe
//   XREF to: 03f95d78 (READ)
// 00525d04: PUSH EDI
// 00525d05: MOV EAX,dword ptr [EBX + 0x24b4]
// 00525d0b: PUSH EAX
// 00525d0c: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00525d11: ADD ESP,0x8
// 00525d14: TEST EAX,EAX
// 00525d16: JZ 0x00525d2b
//   XREF to: 00525d2b (CONDITIONAL_JUMP)
// 00525d18: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00525d1e: MOV EDX,dword ptr [EAX + 0x154]
// 00525d24: PUSH EAX
// 00525d25: CALL dword ptr [EDX + 0x4]
// 00525d28: ADD ESP,0x8
// 00525d2b: PUSH EBX
//   Label: LAB_00525d2b
// 00525d2c: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 00525d31: ADD ESP,0x4
// 00525d34: LEA EAX,[EBX + 0x158]
// 00525d3a: PUSH EAX
// 00525d3b: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 00525d40: ADD ESP,0x4
// 00525d43: MOV EAX,dword ptr [EBX + 0x154]
// 00525d49: PUSH EBX
// 00525d4a: CALL dword ptr [EAX + 0x120]
// 00525d50: ADD ESP,0x4
// 00525d53: TEST EAX,EAX
// 00525d55: JNZ 0x00525d66
//   XREF to: 00525d66 (CONDITIONAL_JUMP)
// 00525d57: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00525d5d: PUSH EBX
// 00525d5e: CALL core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0
//   XREF to: 005267a0 (UNCONDITIONAL_CALL)
// 00525d63: ADD ESP,0x8
// 00525d66: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_00525d66
//   XREF to: Stack[0x8] (READ)
// 00525d6c: PUSH EBX
// 00525d6d: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 00525d72: ADD ESP,0x8
// 00525d75: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 00525d78: POP EBP
// 00525d79: POP EDI
// 00525d7a: POP ESI
// 00525d7b: POP EBX
// 00525d7c: RET
// 00525d7d: PUSH 0x1
//   Label: LAB_00525d7d
// 00525d7f: PUSH 0x0
// 00525d81: PUSH ESI
// 00525d82: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00525d87: ADD ESP,0xc
// 00525d8a: PUSH EBX
// 00525d8b: PUSH 0x639856
//   XREF to: 00639856 (DATA)
// 00525d90: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 00525d96: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 00525d97: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00525d9c: JMP 0x00525b7c
//   XREF to: 00525b7c (UNCONDITIONAL_JUMP)
// 00525da1: JBE 0x00525b6c
//   Label: LAB_00525da1
//   XREF to: 00525b6c (CONDITIONAL_JUMP)
// 00525da7: CMP EAX,0x3
// 00525daa: JZ 0x00525d7d
//   XREF to: 00525d7d (CONDITIONAL_JUMP)
// 00525dac: PUSH 0x1
//   Label: LAB_00525dac
// 00525dae: PUSH 0x0
// 00525db0: JMP 0x00525b70
//   XREF to: 00525b70 (UNCONDITIONAL_JUMP)
// 00525db5: LEA EAX,[EBP + 0xffffff2a]
//   Label: caseD_9
//   XREF to: Stack[-0x160] (DATA)
// 00525dbb: PUSH EAX
// 00525dbc: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00525dc1: ADD ESP,0x4
// 00525dc4: PUSH 0x41700000
// 00525dc9: PUSH 0x40e00000
// 00525dce: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00525dd3: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00525dd6: MOV dword ptr [EBP + 0xffffff5e],EBX
//   XREF to: Stack[-0x12c] (WRITE)
// 00525ddc: MOV dword ptr [EBP + 0xffffff62],EBX
//   XREF to: Stack[-0x128] (WRITE)
// 00525de2: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00525de5: MOV dword ptr [EBP + 0xffffff2e],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 00525deb: MOV EAX,dword ptr [EBX + 0xbf64]
// 00525df1: MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298]
// 00525df8: ADD ESP,0x8
// 00525dfb: TEST ESI,ESI
// 00525dfd: JZ 0x00525e54
//   XREF to: 00525e54 (CONDITIONAL_JUMP)
// 00525dff: LEA EAX,[EBP + 0xffffff2a]
//   XREF to: Stack[-0x160] (DATA)
// 00525e05: MOV EDX,dword ptr [0x02f37ecc]
//   XREF to: 02f37ecc (READ)
// 00525e0b: PUSH EAX
// 00525e0c: LEA EAX,[EDX*0x4 + 0x0]
// 00525e13: SUB EAX,EDX
// 00525e15: MOV EDX,EAX
// 00525e17: SHL EDX,0x4
// 00525e1a: LEA EAX,[EBX + 0xfd8]
// 00525e20: ADD EAX,EDX
// 00525e22: PUSH 0x3ecccccd
// 00525e27: PUSH EAX
// 00525e28: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00525e2d: LEA EAX,[EBP + 0xffffff72]
//   XREF to: Stack[-0x118] (DATA)
// 00525e33: PUSH EAX
// 00525e34: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00525e39: ADD ESP,0xc
// 00525e3c: PUSH EAX
// 00525e3d: LEA EAX,[EBP + -0x76]
//   XREF to: Stack[-0x100] (DATA)
// 00525e40: PUSH EAX
// 00525e41: PUSH EBX
// 00525e42: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00525e47: ADD ESP,0xc
// 00525e4a: PUSH EAX
// 00525e4b: PUSH EBX
// 00525e4c: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 00525e51: ADD ESP,0x10
// 00525e54: PUSH 0x41700000
//   Label: LAB_00525e54
// 00525e59: PUSH 0x40e00000
// 00525e5e: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00525e63: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00525e66: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00525e69: MOV dword ptr [EBP + 0xffffff2e],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 00525e6f: MOV EAX,dword ptr [EBX + 0xbf6c]
// 00525e75: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298]
// 00525e7c: ADD ESP,0x8
// 00525e7f: TEST EDI,EDI
// 00525e81: JZ 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 00525e87: LEA EAX,[EBP + 0xffffff2a]
//   XREF to: Stack[-0x160] (DATA)
// 00525e8d: MOV EDX,dword ptr [0x02f37ed0]
//   XREF to: 02f37ed0 (READ)
// 00525e93: PUSH EAX
// 00525e94: LEA EAX,[EDX*0x4 + 0x0]
// 00525e9b: SUB EAX,EDX
// 00525e9d: MOV EDX,EAX
// 00525e9f: SHL EDX,0x4
// 00525ea2: LEA EAX,[EBX + 0xfd8]
// 00525ea8: ADD EAX,EDX
// 00525eaa: PUSH 0x3ecccccd
// 00525eaf: PUSH EAX
// 00525eb0: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00525eb5: LEA EAX,[EBP + -0xa]
//   XREF to: Stack[-0x94] (DATA)
// 00525eb8: PUSH EAX
// 00525eb9: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00525ebe: ADD ESP,0xc
// 00525ec1: PUSH EAX
// 00525ec2: LEA EAX,[EBP + -0x52]
//   XREF to: Stack[-0xdc] (DATA)
// 00525ec5: PUSH EAX
// 00525ec6: PUSH EBX
// 00525ec7: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00525ecc: ADD ESP,0xc
// 00525ecf: PUSH EAX
// 00525ed0: PUSH EBX
// 00525ed1: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 00525ed6: ADD ESP,0x10
// 00525ed9: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 00525ede: FLD float ptr [EBX + 0xbed4]
//   Label: caseD_b
// 00525ee4: FLDZ
// 00525ee6: FCOMPP
// 00525ee8: FNSTSW AX
// 00525eea: SAHF
// 00525eeb: JC 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 00525ef1: PUSH EBX
// 00525ef2: CALL core_mobster.cpp_FUN_005271c0
//   XREF to: 005271c0 (UNCONDITIONAL_CALL)
// 00525ef7: ADD ESP,0x4
// 00525efa: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 00525eff: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_6
//   XREF to: Stack[0x8] (READ)
// 00525f05: MOV EAX,dword ptr [EBX + 0x154]
// 00525f0b: PUSH EBX
// 00525f0c: CALL dword ptr [EAX + 0x158]
// 00525f12: MOV ESI,dword ptr [EBX + 0xbe3c]
// 00525f18: ADD ESP,0x8
// 00525f1b: TEST ESI,ESI
// 00525f1d: JNZ 0x00525f97
//   XREF to: 00525f97 (CONDITIONAL_JUMP)
// 00525f1f: FLD float ptr [EBX + 0xbf8c]
//   Label: LAB_00525f1f
// 00525f25: FCOMP double ptr [0x0063988e]
//   XREF to: 0063988e (READ)
// 00525f2b: FNSTSW AX
// 00525f2d: SAHF
// 00525f2e: JNC 0x00526086
//   XREF to: 00526086 (CONDITIONAL_JUMP)
// 00525f34: CMP dword ptr [EBX + 0xbee8],0x0
//   Label: LAB_00525f34
// 00525f3b: JZ 0x0052609e
//   XREF to: 0052609e (CONDITIONAL_JUMP)
// 00525f41: PUSH 0x40a00000
// 00525f46: PUSH 0x40800000
// 00525f4b: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   Label: LAB_00525f4b
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00525f50: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00525f53: ADD ESP,0x8
// 00525f56: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00525f59: MOV dword ptr [EBX + 0xbf90],EAX
// 00525f5f: PUSH 0x1
// 00525f61: PUSH 0x0
// 00525f63: LEA EAX,[EBX + 0x158]
// 00525f69: PUSH EAX
// 00525f6a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00525f6f: ADD ESP,0xc
// 00525f72: PUSH 0x3e99999a
// 00525f77: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00525f7c: ADD ESP,0x4
// 00525f7f: TEST EAX,EAX
// 00525f81: JZ 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 00525f87: PUSH 0x3
// 00525f89: PUSH EBX
// 00525f8a: CALL core_mobster.cpp_FUN_005279f0
//   XREF to: 005279f0 (UNCONDITIONAL_CALL)
// 00525f8f: ADD ESP,0x8
// 00525f92: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 00525f97: MOV EDI,dword ptr [0x03f95d78]
//   Label: LAB_00525f97
//   XREF to: 03f95d78 (READ)
// 00525f9d: PUSH EDI
// 00525f9e: MOV EAX,dword ptr [EBX + 0x24f8]
// 00525fa4: PUSH EAX
// 00525fa5: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00525faa: MOV ESI,EAX
// 00525fac: ADD ESP,0x8
// 00525faf: MOV EDI,EAX
// 00525fb1: TEST EAX,EAX
// 00525fb3: JZ 0x00526004
//   XREF to: 00526004 (CONDITIONAL_JUMP)
// 00525fb5: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 00525fbb: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00525fbc: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 00525fc1: MOV EAX,dword ptr [ESI + 0x568]
// 00525fc7: ADD ESP,0x4
// 00525fca: MOV dword ptr [EBP + 0x56],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00525fcd: PUSH ESI
// 00525fce: MOV EAX,dword ptr [ESI + 0x154]
// 00525fd4: MOV dword ptr [ESI + 0x568],0x64
// 00525fde: CALL dword ptr [EAX + 0xfc]
// 00525fe4: ADD ESP,0x4
// 00525fe7: TEST EAX,EAX
// 00525fe9: JZ 0x00525ffb
//   XREF to: 00525ffb (CONDITIONAL_JUMP)
// 00525feb: PUSH ESI
// 00525fec: MOV EAX,dword ptr [ESI + 0x154]
// 00525ff2: CALL dword ptr [EAX + 0xf8]
// 00525ff8: ADD ESP,0x4
// 00525ffb: MOV EAX,dword ptr [EBP + 0x56]
//   Label: LAB_00525ffb
//   XREF to: Stack[-0x34] (READ)
// 00525ffe: MOV dword ptr [EDI + 0x568],EAX
// 00526004: MOV ECX,dword ptr [0x03f95d78]
//   Label: LAB_00526004
//   XREF to: 03f95d78 (READ)
// 0052600a: PUSH ECX
// 0052600b: MOV ESI,dword ptr [EBX + 0x24b4]
// 00526011: PUSH ESI
// 00526012: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00526017: MOV ESI,EAX
// 00526019: ADD ESP,0x8
// 0052601c: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0052601f: TEST EAX,EAX
// 00526021: JZ 0x00525f1f
//   XREF to: 00525f1f (CONDITIONAL_JUMP)
// 00526027: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 0052602d: PUSH EDI
//   XREF to: 03114278 (DATA)
// 0052602e: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 00526033: ADD ESP,0x4
// 00526036: MOV EAX,dword ptr [ESI + 0x154]
// 0052603c: PUSH ESI
// 0052603d: MOV EDI,dword ptr [ESI + 0x568]
// 00526043: MOV dword ptr [ESI + 0x568],0x64
// 0052604d: CALL dword ptr [EAX + 0xfc]
// 00526053: ADD ESP,0x4
// 00526056: TEST EAX,EAX
// 00526058: JNZ 0x00526068
//   XREF to: 00526068 (CONDITIONAL_JUMP)
// 0052605a: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 0052605d: MOV dword ptr [EAX + 0x568],EDI
// 00526063: JMP 0x00525f1f
//   XREF to: 00525f1f (UNCONDITIONAL_JUMP)
// 00526068: PUSH ESI
//   Label: LAB_00526068
// 00526069: MOV EAX,dword ptr [ESI + 0x154]
// 0052606f: CALL dword ptr [EAX + 0xf8]
// 00526075: ADD ESP,0x4
// 00526078: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 0052607b: MOV dword ptr [EAX + 0x568],EDI
// 00526081: JMP 0x00525f1f
//   XREF to: 00525f1f (UNCONDITIONAL_JUMP)
// 00526086: FLD float ptr [EBX + 0xbf90]
//   Label: LAB_00526086
// 0052608c: FLDZ
// 0052608e: FCOMPP
// 00526090: FNSTSW AX
// 00526092: SAHF
// 00526093: JNC 0x00525f34
//   XREF to: 00525f34 (CONDITIONAL_JUMP)
// 00526099: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 0052609e: PUSH 0x40800000
//   Label: LAB_0052609e
// 005260a3: PUSH 0x40000000
// 005260a8: JMP 0x00525f4b
//   XREF to: 00525f4b (UNCONDITIONAL_JUMP)
// 005260ad: MOV EAX,dword ptr [EBX + 0xbe28]
//   Label: caseD_5
// 005260b3: TEST EAX,EAX
// 005260b5: JNZ 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 005260bb: CMP dword ptr [EBX + 0xdc],0x0
// 005260c2: JNZ 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 005260c8: PUSH EAX
// 005260c9: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x4c] (DATA)
// 005260cc: PUSH EAX
// 005260cd: PUSH ESI
// 005260ce: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005260d3: ADD ESP,0xc
// 005260d6: PUSH EAX
// 005260d7: LEA EAX,[EBP + -0x3a]
//   XREF to: Stack[-0xc4] (DATA)
// 005260da: PUSH EAX
// 005260db: PUSH EBX
// 005260dc: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005260e1: ADD ESP,0xc
// 005260e4: PUSH 0x0
// 005260e6: LEA EAX,[EBP + -0x3a]
//   XREF to: Stack[-0xc4] (DATA)
// 005260e9: PUSH EAX
// 005260ea: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 005260f0: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 005260f1: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 005260f6: ADD ESP,0xc
// 005260f9: MOV dword ptr [EBX + 0xbe28],0x1
// 00526103: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 00526108: CMP dword ptr [EBX + 0xbee8],0x0
//   Label: caseD_0
// 0052610f: JZ 0x00526146
//   XREF to: 00526146 (CONDITIONAL_JUMP)
// 00526111: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00526116: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0052611d: FLD float ptr [EBX + 0xbf8c]
// 00526123: MOV dword ptr [EBX + 0xbe3c],EAX
// 00526129: FCOMP double ptr [0x0063988e]
//   XREF to: 0063988e (READ)
// 0052612f: FNSTSW AX
// 00526131: SAHF
// 00526132: JBE 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 00526138: PUSH EBX
//   Label: LAB_00526138
// 00526139: CALL core_mobster.cpp_FUN_005271c0
//   XREF to: 005271c0 (UNCONDITIONAL_CALL)
// 0052613e: ADD ESP,0x4
// 00526141: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 00526146: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_00526146
//   XREF to: Stack[0x8] (READ)
// 0052614c: MOV EAX,dword ptr [EBX + 0x154]
// 00526152: PUSH EBX
// 00526153: CALL dword ptr [EAX + 0x158]
// 00526159: MOV EDX,dword ptr [EBX + 0xbe3c]
// 0052615f: ADD ESP,0x8
// 00526162: TEST EDX,EDX
// 00526164: JZ 0x00526201
//   XREF to: 00526201 (CONDITIONAL_JUMP)
// 0052616a: MOV ECX,dword ptr [EBX + 0xbedc]
// 00526170: TEST ECX,ECX
// 00526172: JZ 0x005261bc
//   XREF to: 005261bc (CONDITIONAL_JUMP)
// 00526174: CMP dword ptr [EBX + 0xbed8],0x0
// 0052617b: JNZ 0x00526246
//   XREF to: 00526246 (CONDITIONAL_JUMP)
// 00526181: LEA EDX,[EBX + 0x20]
// 00526184: FLD float ptr [EDX]
// 00526186: FSUB float ptr [ECX + 0x20]
// 00526189: FSTP float ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (WRITE)
// 0052618c: FLD float ptr [EDX + 0x4]
// 0052618f: FSUB float ptr [ECX + 0x24]
// 00526192: FST float ptr [EBP + -0x42]
//   XREF to: Stack[-0xcc] (WRITE)
// 00526195: FMUL float ptr [EBP + -0x42]
//   XREF to: Stack[-0xcc] (READ)
// 00526198: FLD float ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (READ)
// 0052619b: FMUL ST0
// 0052619d: FLD float ptr [EDX + 0x8]
// 005261a0: FSUB float ptr [ECX + 0x28]
// 005261a3: FXCH
// 005261a5: FADDP ST2,ST0
// 005261a7: FST float ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc8] (WRITE)
// 005261aa: FMUL float ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc8] (READ)
// 005261ad: FADDP
// 005261af: FSQRT
// 005261b1: FCOMP double ptr [0x0063989e]
//   XREF to: 0063989e (READ)
// 005261b7: FNSTSW AX
// 005261b9: SAHF
// 005261ba: JA 0x0052622a
//   XREF to: 0052622a (CONDITIONAL_JUMP)
// 005261bc: CMP dword ptr [EBX + 0xbee0],0x0
//   Label: LAB_005261bc
// 005261c3: JZ 0x00526255
//   XREF to: 00526255 (CONDITIONAL_JUMP)
// 005261c9: FLD float ptr [EBX + 0xbf8c]
// 005261cf: FCOMP double ptr [0x0063988e]
//   XREF to: 0063988e (READ)
// 005261d5: FNSTSW AX
// 005261d7: SAHF
// 005261d8: JBE 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 005261de: PUSH 0x3e800000
// 005261e3: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005261e8: ADD ESP,0x4
// 005261eb: TEST EAX,EAX
// 005261ed: JZ 0x00526138
//   XREF to: 00526138 (CONDITIONAL_JUMP)
// 005261f3: PUSH EBX
// 005261f4: CALL core_mobster.cpp_FUN_00525720
//   XREF to: 00525720 (UNCONDITIONAL_CALL)
// 005261f9: ADD ESP,0x4
// 005261fc: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 00526201: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_00526201
//   XREF to: Stack[0x8] (READ)
// 00526207: PUSH EBX
// 00526208: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 0052620d: ADD ESP,0x8
// 00526210: TEST EAX,EAX
// 00526212: JZ 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 00526218: PUSH 0x1
// 0052621a: PUSH 0x1
// 0052621c: PUSH ESI
// 0052621d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00526222: ADD ESP,0xc
// 00526225: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 0052622a: PUSH 0x1
//   Label: LAB_0052622a
// 0052622c: PUSH 0x8
// 0052622e: PUSH ESI
// 0052622f: MOV dword ptr [EBX + 0xbed8],0x1
// 00526239: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0052623e: ADD ESP,0xc
// 00526241: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 00526246: MOV dword ptr [EBX + 0xbed8],0x0
//   Label: LAB_00526246
// 00526250: JMP 0x005261bc
//   XREF to: 005261bc (UNCONDITIONAL_JUMP)
// 00526255: MOV EDX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_00526255
// 0052625b: LEA EAX,[EBX + 0x20]
// 0052625e: FLD float ptr [EDX + 0x20]
// 00526261: FSUB float ptr [EAX]
// 00526263: FSTP float ptr [EBP + 0xffffff7e]
//   XREF to: Stack[-0x10c] (WRITE)
// 00526269: FLD float ptr [EDX + 0x24]
// 0052626c: FSUB float ptr [EAX + 0x4]
// 0052626f: FST float ptr [EBP + -0x7e]
//   XREF to: Stack[-0x108] (WRITE)
// 00526272: FMUL float ptr [EBP + -0x7e]
//   XREF to: Stack[-0x108] (READ)
// 00526275: FLD float ptr [EBP + 0xffffff7e]
//   XREF to: Stack[-0x10c] (READ)
// 0052627b: FMUL ST0
// 0052627d: FLD float ptr [EDX + 0x28]
// 00526280: FSUB float ptr [EAX + 0x8]
// 00526283: FXCH
// 00526285: FADDP ST2,ST0
// 00526287: FST float ptr [EBP + -0x7a]
//   XREF to: Stack[-0x104] (WRITE)
// 0052628a: FMUL float ptr [EBP + -0x7a]
//   XREF to: Stack[-0x104] (READ)
// 0052628d: FADDP
// 0052628f: FSQRT
// 00526291: FLD float ptr [0x00661778]
//   XREF to: 00661778 (READ)
// 00526297: FLD1
// 00526299: FADDP
// 0052629b: FXCH
// 0052629d: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (WRITE)
// 005262a0: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 005262a3: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 005262a6: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005262a9: FCOMPP
// 005262ab: FNSTSW AX
// 005262ad: SAHF
// 005262ae: JNC 0x00526316
//   XREF to: 00526316 (CONDITIONAL_JUMP)
// 005262b0: LEA EAX,[EBP + 0xffffff7e]
//   XREF to: Stack[-0x10c] (DATA)
// 005262b6: PUSH EAX
// 005262b7: LEA EAX,[EBP + 0x1a]
//   XREF to: Stack[-0x70] (DATA)
// 005262ba: PUSH EAX
// 005262bb: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005262c0: FLD float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (READ)
// 005262c3: ADD ESP,0x8
// 005262c6: FSUB float ptr [EBX + 0x34]
// 005262c9: SUB ESP,0x4
// 005262cc: FSTP float ptr [ESP]
// 005262cf: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005262d4: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005262d7: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005262da: FABS
// 005262dc: ADD ESP,0x4
// 005262df: FCOMP double ptr [0x00639896]
//   XREF to: 00639896 (READ)
// 005262e5: FNSTSW AX
// 005262e7: SAHF
// 005262e8: JNC 0x00526316
//   XREF to: 00526316 (CONDITIONAL_JUMP)
// 005262ea: FLD float ptr [EBX + 0xbe38]
// 005262f0: FLDZ
// 005262f2: FCOMPP
// 005262f4: FNSTSW AX
// 005262f6: SAHF
// 005262f7: JC 0x00526316
//   XREF to: 00526316 (CONDITIONAL_JUMP)
// 005262f9: PUSH 0x1
// 005262fb: PUSH 0x9
// 005262fd: LEA EAX,[EBX + 0x158]
// 00526303: PUSH EAX
// 00526304: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00526309: ADD ESP,0xc
// 0052630c: MOV dword ptr [EBX + 0xbe38],0x40000000
// 00526316: FLD float ptr [EBP + 0x6a]
//   Label: LAB_00526316
//   XREF to: Stack[-0x20] (READ)
// 00526319: FCOMP float ptr [EBX + 0xbe34]
// 0052631f: FNSTSW AX
// 00526321: SAHF
// 00526322: JNC 0x00526345
//   XREF to: 00526345 (CONDITIONAL_JUMP)
// 00526324: FLD float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00526327: LEA EDX,[EBX + 0x158]
// 0052632d: FCOMP float ptr [0x00661788]
//   XREF to: 00661788 (READ)
// 00526333: FNSTSW AX
// 00526335: SAHF
// 00526336: JNC 0x0052635d
//   XREF to: 0052635d (CONDITIONAL_JUMP)
// 00526338: PUSH 0x1
// 0052633a: PUSH 0x1
// 0052633c: PUSH EDX
//   Label: LAB_0052633c
// 0052633d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00526342: ADD ESP,0xc
// 00526345: CMP dword ptr [EBX + 0xbecc],0x0
//   Label: LAB_00526345
// 0052634c: JZ 0x00526363
//   XREF to: 00526363 (CONDITIONAL_JUMP)
// 0052634e: MOV dword ptr [EBX + 0xbecc],0x1
//   Label: LAB_0052634e
// 00526358: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 0052635d: PUSH 0x1
//   Label: LAB_0052635d
// 0052635f: PUSH 0x8
// 00526361: JMP 0x0052633c
//   XREF to: 0052633c (UNCONDITIONAL_JUMP)
// 00526363: PUSH 0x3f333333
//   Label: LAB_00526363
// 00526368: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 0052636d: ADD ESP,0x4
// 00526370: TEST EAX,EAX
// 00526372: JZ 0x0052634e
//   XREF to: 0052634e (CONDITIONAL_JUMP)
// 00526374: PUSH 0x1
// 00526376: PUSH EBX
// 00526377: CALL core_mobster.cpp_FUN_005279f0
//   XREF to: 005279f0 (UNCONDITIONAL_CALL)
// 0052637c: ADD ESP,0x8
// 0052637f: MOV dword ptr [EBX + 0xbecc],0x1
// 00526389: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 0052638e: PUSH dword ptr [EBP + 0x92]
//   Label: caseD_8
//   XREF to: Stack[0x8] (READ)
// 00526394: MOV EAX,dword ptr [EBX + 0x154]
// 0052639a: PUSH EBX
// 0052639b: CALL dword ptr [EAX + 0x158]
// 005263a1: ADD ESP,0x8
// 005263a4: MOV EDX,dword ptr [EBX + 0xbe3c]
// 005263aa: LEA ESI,[EBX + 0x158]
// 005263b0: TEST EDX,EDX
// 005263b2: JZ 0x0052644b
//   XREF to: 0052644b (CONDITIONAL_JUMP)
// 005263b8: CMP dword ptr [EBX + 0xbed8],0x0
// 005263bf: JZ 0x00526493
//   XREF to: 00526493 (CONDITIONAL_JUMP)
// 005263c5: PUSH 0x3e32b8c2
// 005263ca: LEA EAX,[EBX + 0x23ac]
// 005263d0: PUSH 0x3f000000
// 005263d5: MOV dword ptr [EAX + 0x8],0x0
// 005263dc: XOR ECX,ECX
// 005263de: MOV EDX,dword ptr [EAX + 0x8]
// 005263e1: MOV dword ptr [EAX + 0x4],EDX
// 005263e4: MOV EDX,dword ptr [EAX + 0x4]
// 005263e7: MOV dword ptr [EAX],EDX
// 005263e9: MOV EAX,[0x00661778]
//   XREF to: 00661778 (READ)
// 005263ee: MOV dword ptr [EBP + 0x2],ECX
//   XREF to: Stack[-0x88] (WRITE)
// 005263f1: MOV dword ptr [EBP + 0xa],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005263f4: LEA EAX,[EBP + 0x2]
//   XREF to: Stack[-0x88] (DATA)
// 005263f7: MOV dword ptr [EBP + 0x6],ECX
//   XREF to: Stack[-0x84] (WRITE)
// 005263fa: PUSH EAX
// 005263fb: MOV EAX,dword ptr [EBX + 0xbedc]
// 00526401: PUSH EAX
// 00526402: MOV EDX,dword ptr [EAX + 0x154]
// 00526408: CALL dword ptr [EDX + 0xbc]
// 0052640e: ADD ESP,0x4
// 00526411: PUSH EAX
// 00526412: MOV EAX,dword ptr [EBX + 0xbedc]
// 00526418: ADD EAX,0x20
// 0052641b: PUSH EAX
// 0052641c: PUSH EBX
// 0052641d: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00526422: ADD ESP,0x18
// 00526425: TEST EAX,EAX
// 00526427: JG 0x00526481
//   XREF to: 00526481 (CONDITIONAL_JUMP)
// 00526429: JGE 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 0052642f: PUSH 0x1
// 00526431: PUSH 0x0
// 00526433: PUSH ESI
// 00526434: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00526439: ADD ESP,0xc
// 0052643c: MOV dword ptr [EBX + 0xbedc],0x0
// 00526446: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 0052644b: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_0052644b
//   XREF to: Stack[0x8] (READ)
// 00526451: PUSH EBX
// 00526452: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 00526457: ADD ESP,0x8
// 0052645a: TEST EAX,EAX
// 0052645c: JZ 0x00526470
//   XREF to: 00526470 (CONDITIONAL_JUMP)
// 0052645e: PUSH 0x1
// 00526460: PUSH 0x1
// 00526462: PUSH ESI
// 00526463: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00526468: ADD ESP,0xc
// 0052646b: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 00526470: PUSH 0x1
//   Label: LAB_00526470
// 00526472: PUSH EAX
// 00526473: PUSH ESI
// 00526474: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00526479: ADD ESP,0xc
// 0052647c: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 00526481: PUSH 0x1
//   Label: LAB_00526481
// 00526483: PUSH 0x0
// 00526485: PUSH ESI
// 00526486: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0052648b: ADD ESP,0xc
// 0052648e: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 00526493: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_00526493
//   XREF to: Stack[0x8] (READ)
// 00526499: PUSH EBX
// 0052649a: CALL core_mobster.cpp_FUN_00526d90
//   XREF to: 00526d90 (UNCONDITIONAL_CALL)
// 0052649f: ADD ESP,0x8
// 005264a2: TEST EAX,EAX
// 005264a4: JNZ 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 005264aa: FLD float ptr [0x00661778]
//   XREF to: 00661778 (READ)
// 005264b0: FLD1
// 005264b2: FADDP
// 005264b4: MOV ESI,dword ptr [EBX + 0x24f8]
// 005264ba: FSTP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (WRITE)
// 005264bd: TEST ESI,ESI
// 005264bf: JZ 0x005264c9
//   XREF to: 005264c9 (CONDITIONAL_JUMP)
// 005264c1: MOV EAX,[0x0066177c]
//   XREF to: 0066177c (READ)
// 005264c6: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005264c9: PUSH 0x3e32b8c2
//   Label: LAB_005264c9
// 005264ce: LEA EAX,[EBX + 0x23ac]
// 005264d4: PUSH 0x3f000000
// 005264d9: MOV dword ptr [EAX + 0x8],0x0
// 005264e0: XOR EDI,EDI
// 005264e2: MOV EDX,dword ptr [EAX + 0x8]
// 005264e5: MOV dword ptr [EAX + 0x4],EDX
// 005264e8: MOV EDX,dword ptr [EAX + 0x4]
// 005264eb: MOV dword ptr [EAX],EDX
// 005264ed: MOV EAX,[0x00661778]
//   XREF to: 00661778 (READ)
// 005264f2: MOV dword ptr [EBP + -0x16],EDI
//   XREF to: Stack[-0xa0] (WRITE)
// 005264f5: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005264f8: MOV dword ptr [EBP + -0xe],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005264fb: LEA EAX,[EBP + -0x16]
//   XREF to: Stack[-0xa0] (DATA)
// 005264fe: MOV dword ptr [EBP + -0x12],EDI
//   XREF to: Stack[-0x9c] (WRITE)
// 00526501: PUSH EAX
// 00526502: MOV EAX,dword ptr [EBX + 0xbe3c]
// 00526508: PUSH EAX
// 00526509: MOV EDX,dword ptr [EAX + 0x154]
// 0052650f: CALL dword ptr [EDX + 0xbc]
// 00526515: ADD ESP,0x4
// 00526518: PUSH EAX
// 00526519: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0052651f: ADD EAX,0x20
// 00526522: PUSH EAX
// 00526523: PUSH EBX
// 00526524: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 00526529: ADD ESP,0x18
// 0052652c: TEST EAX,EAX
// 0052652e: JL 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 00526534: LEA EDX,[EBX + 0x20]
// 00526537: MOV EAX,dword ptr [EBX + 0xbe3c]
// 0052653d: FLD float ptr [EDX]
// 0052653f: FSUB float ptr [EAX + 0x20]
// 00526542: FSTP float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (WRITE)
// 00526545: FLD float ptr [EDX + 0x4]
// 00526548: FSUB float ptr [EAX + 0x24]
// 0052654b: FLD float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 0052654e: FXCH
// 00526550: FSTP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (WRITE)
// 00526553: FLD float ptr [EDX + 0x8]
// 00526556: FSUB float ptr [EAX + 0x28]
// 00526559: FXCH
// 0052655b: FMUL float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 0052655e: FXCH
// 00526560: FST float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (WRITE)
// 00526563: FMUL float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 00526566: FADDP
// 00526568: FSQRT
// 0052656a: MOV dword ptr [EBP + 0x2a],EDI
//   XREF to: Stack[-0x60] (WRITE)
// 0052656d: FSTP float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (WRITE)
// 00526570: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00526573: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00526576: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00526579: FCOMP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 0052657c: FNSTSW AX
// 0052657e: SAHF
// 0052657f: JA 0x00526648
//   XREF to: 00526648 (CONDITIONAL_JUMP)
// 00526585: FLD float ptr [EBX + 0xbe38]
// 0052658b: FLDZ
// 0052658d: FCOMPP
// 0052658f: FNSTSW AX
// 00526591: SAHF
// 00526592: JC 0x00526648
//   XREF to: 00526648 (CONDITIONAL_JUMP)
// 00526598: MOV EDI,dword ptr [EBX + 0x24f8]
// 0052659e: LEA ESI,[EBX + 0x158]
// 005265a4: TEST EDI,EDI
// 005265a6: JZ 0x00526709
//   XREF to: 00526709 (CONDITIONAL_JUMP)
// 005265ac: FLD float ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 005265af: FLD1
// 005265b1: FADDP
// 005265b3: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 005265b6: FCOMPP
// 005265b8: FNSTSW AX
// 005265ba: SAHF
// 005265bb: JNC 0x00526672
//   XREF to: 00526672 (CONDITIONAL_JUMP)
// 005265c1: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005265c7: FLD float ptr [EAX + 0x20]
// 005265ca: FSUB float ptr [EDX]
// 005265cc: FSTP float ptr [EBP + -0x5e]
//   XREF to: Stack[-0xe8] (WRITE)
// 005265cf: FLD float ptr [EAX + 0x24]
// 005265d2: FSUB float ptr [EDX + 0x4]
// 005265d5: FSTP float ptr [EBP + -0x5a]
//   XREF to: Stack[-0xe4] (WRITE)
// 005265d8: FLD float ptr [EAX + 0x28]
// 005265db: LEA EAX,[EBP + -0x5e]
//   XREF to: Stack[-0xe8] (DATA)
// 005265de: PUSH EAX
// 005265df: LEA EAX,[EBP + 0x32]
//   XREF to: Stack[-0x58] (DATA)
// 005265e2: FSUB float ptr [EDX + 0x8]
// 005265e5: PUSH EAX
// 005265e6: FSTP float ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (WRITE)
// 005265e9: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005265ee: FLD float ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (READ)
// 005265f1: ADD ESP,0x8
// 005265f4: FSUB float ptr [EBX + 0x34]
// 005265f7: SUB ESP,0x4
// 005265fa: FSTP float ptr [ESP]
// 005265fd: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00526602: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00526605: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00526608: FABS
// 0052660a: ADD ESP,0x4
// 0052660d: FCOMP double ptr [0x00639896]
//   XREF to: 00639896 (READ)
// 00526613: FNSTSW AX
// 00526615: SAHF
// 00526616: JNC 0x0052663e
//   XREF to: 0052663e (CONDITIONAL_JUMP)
// 00526618: FLD float ptr [EBX + 0xbe38]
// 0052661e: FLDZ
// 00526620: FCOMPP
// 00526622: FNSTSW AX
// 00526624: SAHF
// 00526625: JC 0x0052663e
//   XREF to: 0052663e (CONDITIONAL_JUMP)
// 00526627: PUSH 0x1
// 00526629: PUSH 0x9
// 0052662b: PUSH ESI
// 0052662c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00526631: ADD ESP,0xc
// 00526634: MOV dword ptr [EBX + 0xbe38],0x40000000
// 0052663e: MOV dword ptr [EBX + 0xbe38],0x3f800000
//   Label: LAB_0052663e
// 00526648: FLD float ptr [EBP + 0x5a]
//   Label: LAB_00526648
//   XREF to: Stack[-0x30] (READ)
// 0052664b: FCOMP float ptr [EBX + 0xbe34]
// 00526651: FNSTSW AX
// 00526653: SAHF
// 00526654: JBE 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 0052665a: PUSH 0x1
// 0052665c: PUSH 0x0
// 0052665e: LEA EAX,[EBX + 0x158]
// 00526664: PUSH EAX
// 00526665: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0052666a: ADD ESP,0xc
// 0052666d: JMP 0x00525b97
//   XREF to: 00525b97 (UNCONDITIONAL_JUMP)
// 00526672: FLD float ptr [EBX + 0xbf8c]
//   Label: LAB_00526672
// 00526678: FCOMP double ptr [0x0063988e]
//   XREF to: 0063988e (READ)
// 0052667e: FNSTSW AX
// 00526680: SAHF
// 00526681: JBE 0x0052663e
//   XREF to: 0052663e (CONDITIONAL_JUMP)
// 00526683: FLD float ptr [EBX + 0xbf90]
// 00526689: FLDZ
// 0052668b: FCOMPP
// 0052668d: FNSTSW AX
// 0052668f: SAHF
// 00526690: JC 0x0052663e
//   XREF to: 0052663e (CONDITIONAL_JUMP)
// 00526692: PUSH 0x3e99999a
// 00526697: MOV dword ptr [EBX + 0xbed4],0x0
// 005266a1: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005266a6: ADD ESP,0x4
// 005266a9: TEST EAX,EAX
// 005266ab: JZ 0x005266b8
//   XREF to: 005266b8 (CONDITIONAL_JUMP)
// 005266ad: PUSH 0x2
// 005266af: PUSH EBX
// 005266b0: CALL core_mobster.cpp_FUN_005279f0
//   XREF to: 005279f0 (UNCONDITIONAL_CALL)
// 005266b5: ADD ESP,0x8
// 005266b8: FLD float ptr [EBX + 0xbed4]
//   Label: LAB_005266b8
// 005266be: FLDZ
// 005266c0: FCOMPP
// 005266c2: FNSTSW AX
// 005266c4: SAHF
// 005266c5: JNC 0x005266fb
//   XREF to: 005266fb (CONDITIONAL_JUMP)
// 005266c7: MOV EDX,dword ptr [EBX + 0x24b4]
// 005266cd: LEA EAX,[EBX + 0x158]
// 005266d3: TEST EDX,EDX
// 005266d5: JZ 0x005266e9
//   XREF to: 005266e9 (CONDITIONAL_JUMP)
// 005266d7: PUSH 0x1
// 005266d9: PUSH 0xb
// 005266db: PUSH EAX
// 005266dc: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005266e1: ADD ESP,0xc
// 005266e4: JMP 0x0052663e
//   XREF to: 0052663e (UNCONDITIONAL_JUMP)
// 005266e9: PUSH 0x1
//   Label: LAB_005266e9
// 005266eb: PUSH 0xa
// 005266ed: PUSH EAX
// 005266ee: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005266f3: ADD ESP,0xc
// 005266f6: JMP 0x0052663e
//   XREF to: 0052663e (UNCONDITIONAL_JUMP)
// 005266fb: PUSH EBX
//   Label: LAB_005266fb
// 005266fc: CALL core_mobster.cpp_FUN_005271c0
//   XREF to: 005271c0 (UNCONDITIONAL_CALL)
// 00526701: ADD ESP,0x4
// 00526704: JMP 0x0052663e
//   XREF to: 0052663e (UNCONDITIONAL_JUMP)
// 00526709: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_00526709
// 0052670f: FLD float ptr [EAX + 0x20]
// 00526712: FSUB float ptr [EDX]
// 00526714: FSTP float ptr [EBP + -0x2e]
//   XREF to: Stack[-0xb8] (WRITE)
// 00526717: FLD float ptr [EAX + 0x24]
// 0052671a: FSUB float ptr [EDX + 0x4]
// 0052671d: FSTP float ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (WRITE)
// 00526720: FLD float ptr [EAX + 0x28]
// 00526723: LEA EAX,[EBP + -0x2e]
//   XREF to: Stack[-0xb8] (DATA)
// 00526726: PUSH EAX
// 00526727: LEA EAX,[EBP + -0x6a]
//   XREF to: Stack[-0xf4] (DATA)
// 0052672a: FSUB float ptr [EDX + 0x8]
// 0052672d: PUSH EAX
// 0052672e: FSTP float ptr [EBP + -0x26]
//   XREF to: Stack[-0xb0] (WRITE)
// 00526731: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00526736: FLD float ptr [EBP + -0x66]
//   XREF to: Stack[-0xf0] (READ)
// 00526739: ADD ESP,0x8
// 0052673c: FSUB float ptr [EBX + 0x34]
// 0052673f: SUB ESP,0x4
// 00526742: FSTP float ptr [ESP]
// 00526745: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0052674a: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052674d: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00526750: FABS
// 00526752: ADD ESP,0x4
// 00526755: FCOMP double ptr [0x00639896]
//   XREF to: 00639896 (READ)
// 0052675b: FNSTSW AX
// 0052675d: SAHF
// 0052675e: JNC 0x0052663e
//   XREF to: 0052663e (CONDITIONAL_JUMP)
// 00526764: PUSH 0x1
// 00526766: PUSH 0x9
// 00526768: PUSH ESI
// 00526769: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0052676e: ADD ESP,0xc
// 00526771: JMP 0x0052663e
//   XREF to: 0052663e (UNCONDITIONAL_JUMP)
// 00526776: CMP EDI,0xb
//   Label: LAB_00526776
// 00526779: JA 0x00525b97
//   XREF to: 00525b97 (CONDITIONAL_JUMP)
// 0052677f: JMP dword ptr [EDI*0x4 + 0x525810]
//   Label: switchD
//   XREF to: 00526108 (COMPUTED_JUMP)
//   XREF to: 0052638e (COMPUTED_JUMP)
//   XREF to: 00525eff (COMPUTED_JUMP)
//   XREF to: 00525b97 (COMPUTED_JUMP)
//   XREF to: 005260ad (COMPUTED_JUMP)
//   XREF to: 00525db5 (COMPUTED_JUMP)
//   XREF to: 00525ede (COMPUTED_JUMP)
//   XREF to: 00525810 (DATA)
// 00526786: PUSH EBX
//   Label: LAB_00526786
// 00526787: CALL core_mobster.cpp_FUN_00525650
//   XREF to: 00525650 (UNCONDITIONAL_CALL)
// 0052678c: ADD ESP,0x4
// 0052678f: JMP 0x00525cd1
//   XREF to: 00525cd1 (UNCONDITIONAL_JUMP)
