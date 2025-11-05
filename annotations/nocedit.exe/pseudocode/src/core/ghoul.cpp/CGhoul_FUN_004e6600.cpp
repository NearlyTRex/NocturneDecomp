// Name: core_ghoul.cpp_CGhoul_FUN_004e6600
// Address: 004e6600
// Address Range: [[004e6600, 004e818c]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_CGhoul_FUN_004e6600()
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_004e6580 = 004e6a50
//   void* switchdataD_004e65b8 = 004e7477
//   TerminatedCString s_ghoul_eat_wav_0062dc66
//   TerminatedCString s_ghoul_dig_wav_1_3_0062dc76
//   TerminatedCString s_ghoul_eat_wav_1_3_0062dc8b
//   TerminatedCString s_ghoul_eat_wav_1_3_0062dca0
//   undefined4 s_houl-eat-?.wav_@1.3_0062dca1
//   TerminatedCString s_ghoul_dig_wav_1_3_0062dcb5
//   undefined4 s_houl-dig-?.wav_@1.3_0062dcb6
//   undefined4 s_oul-dig-?.wav_@1.3_0062dcb7
//   undefined4 s_ul-dig-?.wav_@1.3_0062dcb8
//   TerminatedCString s_s_confused_while_walking_0062dcca
//   TerminatedCString s_ghoul_alert_wav_0062dcf4
//   TerminatedCString s_ghoul_scream_wav_0062dd06
//   TerminatedCString s_gh_hits_wav_0062dd1b
//   TerminatedCString s_gh_hits_wav_0062dd28
//   TerminatedCString s_burp_1_2_wav_0062dd35
//   TerminatedCString s_ghoul_walk_wav_f_0062dd43
//   double DOUBLE_0062dd5a = 3
//   double DOUBLE_0062dd62 = 1.57079632675000
//   double DOUBLE_0062dd6a = 8
//   double DOUBLE_0062dd72 = 65536
//   double DOUBLE_0062dd7a = 2
//   double DOUBLE_0062dd82 = 0.5
//   float FLOAT_0062dd8a = 65536
//   double DOUBLE_0062dd92 = 25
//   double DOUBLE_0062dd9a = 0.300000000000000
//   double DOUBLE_0062dda2 = 0.400000000000000
//   double DOUBLE_0062ddaa = 4
//   double DOUBLE_0062ddb2 = 100
//   double DOUBLE_0062ddba = 0.25
//   double DOUBLE_0062ddc2 = 0.700000000000000
//   double DOUBLE_0062ddca = 2.5
//   double DOUBLE_0062ddd2 = 6.28318530700000
//   double DOUBLE_0062ddda = 0.0500000000000000
//   double DOUBLE_0062dde2 = 10
//   double DOUBLE_0062ddea = 32
//   double DOUBLE_0062ddf2 = 0.0100000000000000
//   undefined4 DAT_0065ed18
//   undefined4 DAT_0065ed1c
//   undefined4 DAT_0065ed20
//   undefined4 DAT_0065ed24
//   undefined4 DAT_0065ed28
//   undefined4 DAT_0065ed2c
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   CConsole g_ConsolePtr
//   int g_GlobalDeltaTimeInt
//   undefined4 DAT_02d7a7b8
//   undefined4 DAT_02d81cbc
//   undefined4 DAT_02d832a8
//   undefined4 DAT_02d832b4
//   undefined4 DAT_02d832fc
//   undefined4 DAT_02d83300
//   undefined4 DAT_02d83304
//   undefined4 DAT_02d83308
//   undefined4 DAT_02d8330c
//   undefined4 DAT_02d83310
//   undefined4 DAT_02d83314
//   undefined4 DAT_02d83320
//   undefined4 DAT_02d83324
//   CGore g_CGoreInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonSet g_CDemonSetInstance
//   CSound g_CSoundInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_004297e0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042b670
//   core_charactr.cpp_CCharacter_FUN_0042b760
//   core_charactr.cpp_CCharacter_FUN_0042b810
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_enemy.cpp_FUN_004a9880
//   core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0
//   core_gore.cpp_FUN_004edbb0
//   core_gore.cpp_FUN_004ede30
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_FUN_0052e2b0
//   core_motion.cpp_CMotionController_FUN_0052e3a0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_sound.cpp_FUN_005b3b80
//   core_sound.cpp_FUN_005b3b90
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_ghoul.cpp_CGhoul_FUN_004e6600(undefined4 param_1, undefined4
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
  int iVar11;
  CEnemy *pCVar12;
  undefined2 extraout_var;
  CVector3f *pCVar13;
  int extraout_EAX;
  float fVar14;
  int extraout_EAX_00;
  undefined4 uVar15;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  CLocation *pCVar16;
  BADSPACEBASE *in_ESP;
  char *pcVar17;
  char *pcVar18;
  char cVar19;
  float10 fVar20;
  float10 fVar21;
  double dVar22;
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
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  float local_118;
  CVector3f local_114;
  CVector3f local_108;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  CVector3f local_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
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
  undefined4 local_2c;
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
        fVar14 = local_1c8.x - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x20);
        fVar3 = local_1c8.z - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x28);
        bVar7 = SQRT(fVar3 * fVar3 + fVar14 * fVar14) <= 1.0;
        if (((ABS(local_1c8.y - *(float *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x24))
              <= (float)DOUBLE_0062ddaa) &&
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
        pCVar12 = (CEnemy *)
                  (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                              0x108))();
        if (pCVar12 == in_stack_00000004) {
          iVar10 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                               0x120))();
          if (iVar10 == 0) {
            (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0x14))()
            ;
            iVar10 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
            local_168.x = *(float *)(iVar10 + 0x20);
            local_168.z = *(float *)(iVar10 + 0x28);
            local_168.y = (local_230 - local_23c) * (float)DOUBLE_0062ddc2 +
                          *(float *)(iVar10 + 0x24);
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_29c);
            local_29c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
            local_14 = local_29c.damage_amount;
            pCVar13 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                (*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4),&local_f0,
                                 &local_168);
            if (&local_29c.impact_direction != pCVar13) {
              local_29c.impact_direction.x = pCVar13->x;
              local_29c.impact_direction.y = pCVar13->y;
              local_29c.impact_direction.z = pCVar13->z;
            }
            local_29c.attacker = (CDemonActor *)in_stack_00000004;
            local_29c.wielder = (CDemonActor *)in_stack_00000004;
            (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0x11c))
                      ();
            local_ac = (double)local_29c.damage_amount;
            if (0.0 < local_ac) {
              fVar20 = (float10)local_29c.damage_amount * (float10)DOUBLE_0062ddca *
                       (float10)DOUBLE_0062ddba;
              crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44(extraout_EDX,
                                          CONCAT22(extraout_var,
                                                   (ushort)(0.0 < local_ac) << 8 |
                                                   (ushort)NAN(local_ac) << 10 |
                                                   (ushort)(local_ac == 0.0) << 0xe)));
              local_70 = (int)ROUND(fVar20);
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
      iVar11 = DAT_02d83300;
      if (iVar10 == 0xc) {
        iVar11 = DAT_02d83304;
      }
      pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (local_18,&local_1e0,iVar11);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_1d4,pCVar13);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      fVar20 = (float10)local_14 * (float10)DOUBLE_0062ddba;
      dVar22 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,local_14));
      local_58 = (int)ROUND(fVar20);
      core_gore_cpp_FUN_004edbb0
                (&local_1d4,(int)((ulonglong)dVar22 >> 0x20),in_stack_00000004,local_58,g_CGorePtr,
                 &local_1d4,0,local_58);
      (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                ((CDemonActor *)in_stack_00000004,"ghoul-dig-?.wav @1.3");
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
      pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar1,&local_1b0,DAT_02d832fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_228,pCVar13);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      fVar20 = (float10)local_14 * (float10)DOUBLE_0062ddba;
      dVar22 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_01,local_14));
      local_54 = (int)ROUND(fVar20);
      core_gore_cpp_FUN_004edbb0
                (&local_228,(int)((ulonglong)dVar22 >> 0x20),in_stack_00000004,local_54,g_CGorePtr,
                 &local_228,0,local_54);
      (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                ((CDemonActor *)in_stack_00000004,"ghoul-eat-?.wav @1.3");
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
      pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (pCVar1,&local_1ec,DAT_02d832fc);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                ((CDemonActor *)in_stack_00000004,&local_15c,pCVar13);
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(8.0,12.0);
      fVar20 = (float10)local_14 * (float10)DOUBLE_0062ddba;
      dVar22 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_02,local_14));
      local_84 = (int)ROUND(fVar20);
      core_gore_cpp_FUN_004edbb0
                (&local_15c,(int)((ulonglong)dVar22 >> 0x20),in_stack_00000004,local_84,g_CGorePtr,
                 &local_15c,0,local_84);
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      if (iVar10 == 0) {
        pcVar17 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar17 = "ghoul-eat-?.wav @1.3";
      }
      pcVar18 = local_260;
      do {
        cVar19 = *pcVar17;
        *pcVar18 = cVar19;
        if (cVar19 == '\0') break;
        cVar19 = pcVar17[1];
        pcVar17 = pcVar17 + 2;
        pcVar18[1] = cVar19;
        pcVar18 = pcVar18 + 2;
      } while (cVar19 != '\0');
      (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                ((CDemonActor *)in_stack_00000004,local_260);
    }
    goto switchD_004e6f9a_caseD_e;
  }
  local_14 = core_motion_cpp_CMotionController_FUN_0052dd20(&local_18->motion_controller);
  local_8c = (double)in_stack_00000008;
  fVar14 = in_stack_00000004->speed;
  fVar3 = (float)DOUBLE_0062dd62;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
       in_stack_00000004->speed * local_14 * (float)DOUBLE_0062dd5a * in_stack_00000008;
  *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar3 * fVar14;
  iVar10 = core_motion_cpp_CMotionController_FUN_0052dab0(&local_18->motion_controller);
  iVar10 = *(int *)(iVar10 + 0x24);
  if (iVar10 == 0x11) {
    fVar14 = in_stack_00000004->speed;
    fVar20 = (float10)DOUBLE_0062dd6a;
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x2c) =
         (float)(fVar20 * (float10)*(float *)((in_stack_00000004->base_character).field2_0x240c +
                                             0x2c));
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x28) =
         (float)((float10)local_8c * fVar20 * (float10)fVar14);
  }
  iVar11 = core_charactr_cpp_CCharacter_FUN_0042ca70(&in_stack_00000004->base_character);
  if (iVar11 == 0) {
    local_20 = -1.0;
    pCVar1 = &(in_stack_00000004->base_character).model;
    iVar11 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar1->motion_controller);
    switch(*(undefined4 *)(iVar11 + 0x24)) {
    case 0:
      if ((float)in_stack_00000004[1].base_character.base_actor.health <= 0.0) {
        iVar11 = in_stack_00000004[1].base_character.base_actor.field6_0x68;
        if (iVar11 == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
          if (extraout_EAX != 0) goto LAB_004e7576;
          (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                    ((CDemonActor *)in_stack_00000004);
          if (*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->base_character).model.motion_controller,1,1);
            iVar11 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
            if ((iVar11 == 0) ||
               (iVar11 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660(), iVar11 == 0)) {
              fVar14 = (float)(*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                                        ((CDemonActor *)in_stack_00000004,"ghoul-alert-?.wav"
                                        );
              in_stack_00000004[1].base_character.base_actor.orient_matrix.m[2].y = fVar14;
            }
          }
        }
        else {
          local_180 = *(float *)(iVar11 + 0x20) -
                      (in_stack_00000004->base_character).base_actor.location.position.x;
          local_17c = *(float *)(iVar11 + 0x24) -
                      (in_stack_00000004->base_character).base_actor.location.position.y;
          local_178 = *(float *)(iVar11 + 0x28) -
                      (in_stack_00000004->base_character).base_actor.location.position.z;
          if (SQRT(local_178 * local_178 + local_180 * local_180 + local_17c * local_17c) <
              (float)DOUBLE_0062ddaa) {
            fVar14 = (in_stack_00000004->base_character).hit_points + in_stack_00000008;
            in_stack_00000004[1].base_character.base_actor.field7_0x6c =
                 (int)((float)in_stack_00000004[1].base_character.base_actor.field7_0x6c -
                      in_stack_00000008);
            (in_stack_00000004->base_character).hit_points = fVar14;
            if ((float)DOUBLE_0062ddb2 < fVar14) {
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
        cVar19 = (in_stack_00000004->base_character).model.part_visibility_flags
                 [(int)in_stack_00000004[1].base_character.base_actor.orient.pitch] != 0;
        if ((in_stack_00000004->base_character).model.part_visibility_flags
            [(int)in_stack_00000004[1].base_character.base_actor.orient.heading] != 0) {
          cVar19 = cVar19 + '\x01';
        }
        iVar11 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                   hasCollision)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffc88);
        pCVar9 = g_CGamePtr;
        if (iVar11 == 0) {
          (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                    ((CDemonActor *)in_stack_00000004);
          iVar11 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
          if (iVar11 == 0) {
            core_enemy_cpp_CEnemy_FUN_004a9fd0(in_stack_00000004);
            if (extraout_EAX_00 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base_character).model.motion_controller,0,1);
            }
          }
          else {
            local_1f8 = *(float *)(iVar11 + 0x20) -
                        (in_stack_00000004->base_character).base_actor.location.position.x;
            local_1f0 = *(float *)(iVar11 + 0x28) -
                        (in_stack_00000004->base_character).base_actor.location.position.z;
            local_1f4 = 0.0;
            if ((((in_stack_00000004->base_character).hit_points < (float)DOUBLE_0062dd92) &&
                (cVar19 != '\0')) &&
               (in_stack_00000004[1].base_character.base_actor.field6_0x68 == 0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0();
            }
            local_30 = &(in_stack_00000004->base_character).model.motion_controller;
            iVar11 = in_stack_00000004[1].base_character.base_actor.field6_0x68;
            if (iVar11 == 0) {
              local_fc = 0;
              local_f4 = DAT_0065ed18;
              local_f8 = 0;
              (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) + 0xbc))
                        ();
              iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                 (&in_stack_00000004->base_character);
              if (iVar11 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0,1);
              }
              else if (((0 < iVar11) && (cVar19 != '\0')) &&
                      ((*(float *)in_stack_00000004->field6_0xbe38 <= 0.0 &&
                       ((iVar11 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 +
                                                                4) + 0x154) + 0x108))(), iVar11 == 0
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
                             (float)DOUBLE_0062dd9a;
                }
                if ((in_stack_00000004->base_character).model.part_visibility_flags
                    [(int)in_stack_00000004[1].base_character.base_actor.orient.pitch] != 0) {
                  local_40 = (1.0 - ABS(local_48 - DAT_0065ed20) / DAT_0065ed20) *
                             (float)DOUBLE_0062dda2;
                }
                local_44 = local_48;
                iVar11 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) +
                                              0x154) + 0xfc))();
                if (iVar11 != 0) {
                  local_38 = (1.0 - ABS(local_48 - DAT_0065ed18) / DAT_0065ed18) *
                             (float)DOUBLE_0062dd9a;
                }
                local_3c = local_24 + local_40;
                local_34 = local_3c + local_38;
                if (0.0 < local_34) {
                  local_28 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,local_34);
                  if (local_24 <= local_28) {
                    if (local_3c <= local_28) {
                      iVar11 = 0xb;
                    }
                    else {
                      iVar11 = 0xc;
                    }
                  }
                  else {
                    iVar11 = 2;
                  }
                  local_14 = local_28;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                            (&(in_stack_00000004->base_character).model.motion_controller,iVar11,1);
                  builtin_strncpy(in_stack_00000004->field6_0xbe38,"333?",4);
                }
              }
            }
            else {
              (**(code **)(*(int *)(iVar11 + 0x154) + 0xbc))();
              iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                 (&in_stack_00000004->base_character);
              if (0 < iVar11) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_30,0,1);
                local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,30.0);
                in_stack_00000004[1].base_character.base_actor.field7_0x6c = (int)local_14;
              }
              if (iVar11 < 0) {
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
            cVar19 = (in_stack_00000004->base_character).model.part_visibility_flags
                     [(int)in_stack_00000004[1].base_character.base_actor.orient.pitch] != 0;
            if ((in_stack_00000004->base_character).model.part_visibility_flags
                [(int)in_stack_00000004[1].base_character.base_actor.orient.heading] != 0) {
              cVar19 = cVar19 + '\x01';
            }
            if (cVar19 != '\0') {
              if (cVar19 == '\x01') {
                pCVar8 = &in_stack_00000004[1].base_character;
                (pCVar8->base_actor).actor_name[0x18] = '\x0e';
                (pCVar8->base_actor).actor_name[0x19] = '\0';
                (pCVar8->base_actor).actor_name[0x1a] = '\0';
                (pCVar8->base_actor).actor_name[0x1b] = '\0';
                pCVar9->field73_0x220 = 1;
              }
              else {
                iVar11 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
                *(uint *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x18) =
                     (iVar11 == 0) + 0xd;
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
              pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                                  (&(g_HeroActors[g_LocalHeroIndex]->base_character).model,
                                   &local_198,0);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],&local_150,pCVar13);
              iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                                 (&in_stack_00000004->base_character);
              if (((0 < iVar11) &&
                  (iVar11 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                              hasCollision)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],
                                            in_stack_fffffc94), iVar11 == 2)) &&
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
        iVar11 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                             0x108))();
        if (iVar11 == 0) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
          fVar14 = in_stack_00000004[1].base_character.base_actor.orient.heading;
          *(float *)in_stack_00000004->field6_0xbe38 = local_14;
          if ((in_stack_00000004->base_character).model.part_visibility_flags[(int)fVar14] != 0) {
            local_50 = (float)core_motion_cpp_CMotionController_FUN_0052e2b0();
            local_9c = (double)local_50;
            local_14 = local_50;
            if ((local_50 <= (float)DOUBLE_0062dd7a) && (local_20 = DAT_0065ed1c, 1.0 <= local_9c))
            {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_2d8);
              local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
              local_2d8.damage_amount = local_14;
              if (in_stack_00000004[1].base_character.base_actor.was_created != 0) {
                local_2d8.damage_amount = local_14 * (float)DOUBLE_0062dd7a;
              }
              local_2d8.attacker = (CDemonActor *)in_stack_00000004;
              local_2d8.wielder = (CDemonActor *)in_stack_00000004;
              pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                  (&local_114,(CVector3f *)&DAT_02d832b4,
                                   (CMatrix3x4f *)
                                   (in_stack_00000004->base_character).model.bone_transform.
                                   bone_world_matrices[DAT_02d83304].m);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                        ((CDemonActor *)in_stack_00000004,&local_1bc,pCVar13);
              iVar11 = core_enemy_cpp_FUN_004a9880();
              if (iVar11 != 0) {
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
        pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar1,&local_12c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)in_stack_00000004,&local_108,pCVar13);
        core_gore_cpp_FUN_004ede30();
        in_stack_00000004->pool_me = 1;
      }
      fVar14 = in_stack_00000004[1].base_character.base_actor.location.position.z;
      in_stack_00000004[1].base_character.base_actor.was_created = 0;
      if (((0 < (int)fVar14) ||
          (0 < (int)in_stack_00000004[1].base_character.base_actor.location.position.y)) &&
         (iVar11 = *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) -
                   g_GlobalDeltaTimeInt,
         *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) = iVar11,
         iVar11 < 1)) {
        if ((int)in_stack_00000004[1].base_character.base_actor.location.position.y < 1) {
          pfVar2 = &in_stack_00000004[1].base_character.base_actor.location.position.z;
          *pfVar2 = (float)((int)*pfVar2 + -1);
        }
        if ((0 < (int)in_stack_00000004[1].base_character.base_actor.location.position.z) ||
           (0 < (int)in_stack_00000004[1].base_character.base_actor.location.position.y)) {
          local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,12.0);
          fVar20 = (float10)local_14 * (float10)DOUBLE_0062dd72;
          force_immediate = 1;
          iVar11 = 0xf;
          dVar22 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44(extraout_EDX_03,
                                               &(in_stack_00000004->base_character).model));
          *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x10) =
               (int)ROUND(fVar20);
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (SUB84(dVar22,0),iVar11,force_immediate);
        }
      }
      if (0 < (int)in_stack_00000004[1].base_character.base_actor.location.position.y) {
        if (*(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) < 1) {
          iVar11 = *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) +
                   g_GlobalDeltaTimeInt;
          *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) = iVar11;
          if (iVar11 < 0) {
            (*(in_stack_00000004->base_character).base_actor.vtable[1].getAllowedMeleeAttackTypes)
                      ((CDemonActor *)in_stack_00000004);
            iVar11 = *(int *)(in_stack_00000004->field6_0xbe38 + 4);
            if (iVar11 != 0) {
              local_120 = (in_stack_00000004->base_character).base_actor.location.position.x -
                          *(float *)(iVar11 + 0x20);
              local_11c = (in_stack_00000004->base_character).base_actor.location.position.y -
                          *(float *)(iVar11 + 0x24);
              local_118 = (in_stack_00000004->base_character).base_actor.location.position.z -
                          *(float *)(iVar11 + 0x28);
              if (&local_c0 != &local_120) {
                local_c0 = local_120;
                local_bc = local_11c;
                local_b8 = local_118;
              }
              local_7c = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
              local_78 = (float)(((int)local_7c >> 1) + DAT_02d7a7b8);
              if (local_78 < (float)DOUBLE_0062dd6a) goto LAB_004e7243;
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
                         (float)DOUBLE_0062dd82;
            }
            iVar11 = 0;
            do {
              local_68 = (float)iVar11 * (float)DOUBLE_0062ddd2 * (float)DOUBLE_0062ddba;
              local_14 = (float)iVar11;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,(CDemonActor *)in_stack_00000004);
              fVar20 = (float10)fcos((float10)local_68);
              fVar21 = (float10)fsin((float10)local_68);
              local_6c = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                                   (g_CDemonSetPtr,
                                    (in_stack_00000004->base_character).base_actor.location.position
                                    .x,(in_stack_00000004->base_character).base_actor.location.
                                       position.z,(float)(fVar21 * (float10)DOUBLE_0062ddda),
                                    (float)(fVar20 * (float10)DOUBLE_0062ddda),
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
              iVar11 = iVar11 + 1;
            } while (iVar11 < 4);
            if (iVar11 < 4) {
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
                                   (10.0,(float)(int)local_14 * (float)DOUBLE_0062dde2);
              (in_stack_00000004->base_character).hit_points = local_14;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->base_character).model.motion_controller,0x10,1);
            }
          }
        }
        else {
          iVar11 = *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) -
                   g_GlobalDeltaTimeInt;
          *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) = iVar11;
          if (iVar11 < 1) {
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,30.0);
            fVar20 = -(float10)local_14 * (float10)FLOAT_0062dd8a;
            crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_04,local_14));
            *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x14) =
                 (int)ROUND(fVar20);
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
        iVar11 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                             0x108))();
        if (iVar11 == 0) {
          local_20 = DAT_0065ed18;
        }
        else {
          pCVar12 = (CEnemy *)
                    (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                                0x108))();
          if (pCVar12 != in_stack_00000004) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar1->motion_controller,1,1);
          }
        }
      }
      break;
    case 0xc:
      if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) == 0) ||
         (iVar11 = (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                               0x108))(), iVar11 != 0)) goto LAB_004e7d9a;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.2,0.5);
      fVar14 = in_stack_00000004[1].base_character.base_actor.orient.pitch;
      *(float *)in_stack_00000004->field6_0xbe38 = local_14;
      if ((in_stack_00000004->base_character).model.part_visibility_flags[(int)fVar14] != 0) {
        local_4c = (float)core_motion_cpp_CMotionController_FUN_0052e2b0();
        local_a4 = (double)local_4c;
        local_14 = local_4c;
        if (local_4c <= (float)DOUBLE_0062dd7a) {
          local_20 = DAT_0065ed20;
          if (1.0 <= local_a4) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_314);
            local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(7.0,15.0);
            local_314.damage_amount = local_14;
            if (in_stack_00000004[1].base_character.base_actor.was_created != 0) {
              local_314.damage_amount = local_14 * (float)DOUBLE_0062dd7a;
            }
            local_314.attacker = (CDemonActor *)in_stack_00000004;
            local_314.wielder = (CDemonActor *)in_stack_00000004;
            pCVar13 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                (local_210,(CVector3f *)&DAT_02d832a8,
                                 (CMatrix3x4f *)
                                 (in_stack_00000004->base_character).model.bone_transform.
                                 bone_world_matrices[DAT_02d83300].m);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)in_stack_00000004,&local_21c,pCVar13);
            iVar11 = core_enemy_cpp_FUN_004a9880();
            if (iVar11 != 0) {
              (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                        ((CDemonActor *)in_stack_00000004,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar11 = *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) -
               g_GlobalDeltaTimeInt;
      *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) = iVar11;
      if (iVar11 < 1) {
        (*((in_stack_00000004->base_character).base_actor.vtable)->playSound)
                  ((CDemonActor *)in_stack_00000004,"burp[1,2].wav");
        local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,30.0);
        fVar20 = (float10)local_14 * (float10)DOUBLE_0062dd72;
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_05,local_14));
        *(int *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc) =
             (int)ROUND(fVar20);
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
      pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          ((CDeformableModelInstance *)
                           (*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x158),&local_1a4,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4),&local_144,pCVar13);
      iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                         (&in_stack_00000004->base_character);
      if (iVar11 != 1) {
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
      iVar11 = 1;
    }
    else {
LAB_004e6fdc:
      iVar11 = 0;
    }
LAB_004e672d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->base_character).model.motion_controller,iVar11,1);
  }
  else {
    if (uVar5 < 3) {
      iVar11 = 0x11;
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
  iVar11 = core_charactr_cpp_CCharacter_FUN_004297e0(&in_stack_00000004->base_character);
  if (iVar11 != 0) {
    if ((*(int *)(in_stack_00000004->field6_0xbe38 + 4) != 0) &&
       (pCVar12 = (CEnemy *)
                  (**(code **)(*(int *)(*(int *)(in_stack_00000004->field6_0xbe38 + 4) + 0x154) +
                              0x108))(), pCVar12 == in_stack_00000004)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field6_0xbe38 + 4));
    }
    *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) =
         *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) -
         in_stack_00000008 * (float)DOUBLE_0062ddea;
    local_cc = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x1c) *
               in_stack_00000008;
    local_c8 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x20) *
               in_stack_00000008;
    pcVar17 = (in_stack_00000004->base_character).field2_0x240c + 0x10;
    local_c4 = in_stack_00000008 *
               *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x24);
    pCVar13 = &(in_stack_00000004->base_character).model.accumulated_root_motion;
    local_d8 = local_cc + *(float *)pcVar17;
    local_d4 = local_c8 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    local_d0 = local_c4 + *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    local_18c = local_d8 + pCVar13->x;
    local_188 = local_d4 + (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    local_184 = local_d0 + (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    (in_stack_00000004->base_character).field2_0x240c[0x18] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x19] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1a] = '\0';
    (in_stack_00000004->base_character).field2_0x240c[0x1b] = '\0';
    *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x14) =
         *(undefined4 *)((in_stack_00000004->base_character).field2_0x240c + 0x18);
    *(float *)pcVar17 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14);
    (in_stack_00000004->base_character).model.accumulated_root_motion.z = 0.0;
    (in_stack_00000004->base_character).model.accumulated_root_motion.y =
         (in_stack_00000004->base_character).model.accumulated_root_motion.z;
    pCVar13->x = (in_stack_00000004->base_character).model.accumulated_root_motion.y;
    core_charactr_cpp_CCharacter_FUN_00428f40(&in_stack_00000004->base_character);
  }
  pCVar1 = &(in_stack_00000004->base_character).model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCVar1);
  local_b4 = (double)*(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c);
  if (0.0 < local_b4) {
    local_60 = (float)core_motion_cpp_CMotionController_FUN_0052e3a0();
    fVar14 = 1.0 - *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c);
    local_5c = 1.0 - fVar14 * fVar14 * fVar14;
    local_14 = local_60;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (pCVar1,(int)in_stack_00000004[1].base_character.base_actor.location.position.x,
               local_60,local_5c,DAT_02d83320,core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    fVar14 = *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) -
             in_stack_00000008 / _DAT_0065ed2c;
    *(float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0x1c) = fVar14;
    if (fVar14 < 0.0) {
      pCVar8 = &in_stack_00000004[1].base_character;
      (pCVar8->base_actor).actor_name[0x1c] = '\0';
      (pCVar8->base_actor).actor_name[0x1d] = '\0';
      (pCVar8->base_actor).actor_name[0x1e] = '\0';
      (pCVar8->base_actor).actor_name[0x1f] = '\0';
    }
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(&in_stack_00000004->base_character);
  if (((float)DOUBLE_0062ddf2 <
       ABS(*(float *)((in_stack_00000004->base_character).field2_0x240c + 0xc))) ||
     (fVar14 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x14),
     fVar3 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x10),
     fVar4 = *(float *)((in_stack_00000004->base_character).field2_0x240c + 0x18),
     (float)DOUBLE_0062ddf2 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar14 * fVar14))) {
    iVar11 = core_sound_cpp_FUN_005b3b80();
    if (iVar11 == 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffc88,"ghoul-walk-?.wav *%f",(double)in_stack_00000004->speed);
      uVar15 = (*((in_stack_00000004->base_character).base_actor.vtable)->playAmbientSound)
                         ((CDemonActor *)in_stack_00000004,&stack0xfffffc88);
      *(undefined4 *)(in_stack_00000004[1].base_character.base_actor.actor_name + 8) = uVar15;
    }
  }
  else {
    core_sound_cpp_FUN_005b3b90();
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
    fVar14 = (in_stack_00000004->base_character).base_actor.location.position.x -
             *(float *)in_stack_00000004[1].base_character.base_actor.create_event;
    fVar3 = (in_stack_00000004->base_character).base_actor.location.position.z -
            *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 8);
    if (in_stack_00000008 * (float)DOUBLE_0062dd82 <= SQRT(fVar3 * fVar3 + fVar14 * fVar14)) {
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
  pcVar17 = in_stack_00000004[1].base_character.base_actor.create_event;
  pCVar16 = &(in_stack_00000004->base_character).base_actor.location;
  if ((CLocation *)pcVar17 == pCVar16) {
    return;
  }
  *(float *)pcVar17 = (pCVar16->position).x;
  *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 4) =
       (in_stack_00000004->base_character).base_actor.location.position.y;
  *(float *)(in_stack_00000004[1].base_character.base_actor.create_event + 8) =
       (in_stack_00000004->base_character).base_actor.location.position.z;
  return;
}


// Assembly code:
// 004e6600: PUSH EBX
//   Label: core_ghoul.cpp_CGhoul_FUN_004e6600
// 004e6601: PUSH ESI
// 004e6602: PUSH EDI
// 004e6603: PUSH EBP
// 004e6604: MOV EBP,ESP
// 004e6606: SUB ESP,0x368
// 004e660c: SUB EBP,0x7a
// 004e660f: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 004e6615: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e661b: PUSH EBX
// 004e661c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 004e6621: ADD ESP,0x8
// 004e6624: TEST EAX,EAX
// 004e6626: JZ 0x004e6a48
//   XREF to: 004e6a48 (CONDITIONAL_JUMP)
// 004e662c: LEA EAX,[EBX + 0x23ac]
// 004e6632: MOV dword ptr [EAX + 0x8],0x0
// 004e6639: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e663f: MOV EDX,dword ptr [EAX + 0x8]
// 004e6642: MOV dword ptr [EAX + 0x4],EDX
// 004e6645: MOV EDX,dword ptr [EAX + 0x4]
// 004e6648: MOV dword ptr [EAX],EDX
// 004e664a: FMUL float ptr [EBX + 0xbe24]
// 004e6650: LEA EAX,[EBX + 0x158]
// 004e6656: FSTP float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (WRITE)
// 004e6659: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004e665c: FLD float ptr [EBP + 0x26]
//   Label: caseD_e
//   XREF to: Stack[-0x64] (READ)
// 004e665f: FLDZ
// 004e6661: FCOMPP
// 004e6663: FNSTSW AX
// 004e6665: SAHF
// 004e6666: JC 0x004e6f80
//   XREF to: 004e6f80 (CONDITIONAL_JUMP)
// 004e666c: PUSH 0x1
// 004e666e: MOV EDX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004e6671: PUSH EDX
// 004e6672: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004e6677: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e667a: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e667d: FMUL double ptr [0x0062dd5a]
//   XREF to: 0062dd5a (READ)
// 004e6683: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e6689: FSTP double ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (WRITE)
// 004e668c: FMUL double ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (READ)
// 004e668f: FLD float ptr [EBX + 0xbe24]
// 004e6695: FLD double ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (READ)
// 004e6698: FMUL double ptr [0x0062dd62]
//   XREF to: 0062dd62 (READ)
// 004e669e: FLD float ptr [EBX + 0xbe24]
// 004e66a4: FMULP ST3
// 004e66a6: MOV ECX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004e66a9: ADD ESP,0x8
// 004e66ac: FMULP
// 004e66ae: PUSH ECX
// 004e66af: FXCH
// 004e66b1: FSTP float ptr [EBX + 0x2434]
// 004e66b7: FSTP float ptr [EBX + 0x2438]
// 004e66bd: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004e66c2: MOV EAX,dword ptr [EAX + 0x24]
// 004e66c5: ADD ESP,0x4
// 004e66c8: MOV EDI,EAX
// 004e66ca: CMP EAX,0x11
// 004e66cd: JNZ 0x004e66fc
//   XREF to: 004e66fc (CONDITIONAL_JUMP)
// 004e66cf: FLD float ptr [EBX + 0xbe24]
// 004e66d5: FLD double ptr [0x0062dd6a]
//   XREF to: 0062dd6a (READ)
// 004e66db: FLD double ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (READ)
// 004e66de: FMUL ST1
// 004e66e0: FLD float ptr [EBX + 0x2438]
// 004e66e6: FMUL ST2
// 004e66e8: FXCH
// 004e66ea: FMULP ST3
// 004e66ec: FXCH
// 004e66ee: FSTP ST1
// 004e66f0: FSTP float ptr [EBX + 0x2438]
// 004e66f6: FSTP float ptr [EBX + 0x2434]
// 004e66fc: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004e66fc
//   XREF to: Stack[0x8] (READ)
// 004e6702: PUSH EBX
// 004e6703: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 004e6708: ADD ESP,0x8
// 004e670b: TEST EAX,EAX
// 004e670d: JZ 0x004e7fd7
//   XREF to: 004e7fd7 (CONDITIONAL_JUMP)
// 004e6713: MOV EAX,dword ptr [EBX + 0x25b0]
// 004e6719: CMP EAX,0x2
// 004e671c: JNC 0x004e6fd5
//   XREF to: 004e6fd5 (CONDITIONAL_JUMP)
// 004e6722: CMP EAX,0x1
// 004e6725: JNZ 0x004e6fdc
//   XREF to: 004e6fdc (CONDITIONAL_JUMP)
// 004e672b: PUSH EAX
// 004e672c: PUSH EAX
// 004e672d: LEA EAX,[EBX + 0x158]
//   Label: LAB_004e672d
// 004e6733: PUSH EAX
// 004e6734: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e6739: ADD ESP,0xc
//   Label: LAB_004e6739
// 004e673c: LEA EAX,[EBX + 0x23ac]
// 004e6742: MOV dword ptr [EAX + 0x8],0x0
// 004e6749: MOV EDX,dword ptr [EAX + 0x8]
// 004e674c: MOV dword ptr [EAX + 0x4],EDX
// 004e674f: MOV EDX,dword ptr [EAX + 0x4]
// 004e6752: MOV dword ptr [EAX],EDX
// 004e6754: FLD float ptr [EBX + 0xbe38]
//   Label: LAB_004e6754
// 004e675a: FLDZ
// 004e675c: FCOMPP
// 004e675e: FNSTSW AX
// 004e6760: SAHF
// 004e6761: JNC 0x004e6775
//   XREF to: 004e6775 (CONDITIONAL_JUMP)
// 004e6763: FLD float ptr [EBX + 0xbe38]
// 004e6769: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e676f: FSTP float ptr [EBX + 0xbe38]
// 004e6775: PUSH EBX
//   Label: LAB_004e6775
// 004e6776: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 004e677b: ADD ESP,0x4
// 004e677e: PUSH EBX
// 004e677f: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 004e6784: ADD ESP,0x4
// 004e6787: TEST EAX,EAX
// 004e6789: JZ 0x004e6887
//   XREF to: 004e6887 (CONDITIONAL_JUMP)
// 004e678f: MOV ESI,dword ptr [EBX + 0xbe3c]
// 004e6795: TEST ESI,ESI
// 004e6797: JZ 0x004e67c3
//   XREF to: 004e67c3 (CONDITIONAL_JUMP)
// 004e6799: PUSH ESI
// 004e679a: MOV EDX,dword ptr [ESI + 0x154]
// 004e67a0: CALL dword ptr [EDX + 0x108]
// 004e67a6: ADD ESP,0x4
// 004e67a9: CMP EAX,EBX
// 004e67ab: JNZ 0x004e67c3
//   XREF to: 004e67c3 (CONDITIONAL_JUMP)
// 004e67ad: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e67b3: PUSH EAX
// 004e67b4: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004e67ba: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004e67bb: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004e67c0: ADD ESP,0x8
// 004e67c3: FLD float ptr [EBP + 0x92]
//   Label: LAB_004e67c3
//   XREF to: Stack[0x8] (READ)
// 004e67c9: FLD ST0
// 004e67cb: FMUL double ptr [0x0062ddea]
//   XREF to: 0062ddea (READ)
// 004e67d1: FLD float ptr [EBX + 0x242c]
// 004e67d7: FXCH
// 004e67d9: FSUBR ST0,ST1
// 004e67db: LEA ESI,[EBX + 0x2428]
// 004e67e1: FSTP ST1
// 004e67e3: FSTP float ptr [EBX + 0x242c]
// 004e67e9: FLD float ptr [ESI]
// 004e67eb: FMUL ST1
// 004e67ed: FSTP float ptr [EBP + -0x42]
//   XREF to: Stack[-0xcc] (WRITE)
// 004e67f0: FLD float ptr [ESI + 0x4]
// 004e67f3: FMUL ST1
// 004e67f5: LEA EDX,[EBX + 0x241c]
// 004e67fb: FSTP float ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc8] (WRITE)
// 004e67fe: FMUL float ptr [ESI + 0x8]
// 004e6801: LEA EAX,[EBX + 0x23ac]
// 004e6807: FLD float ptr [EBP + -0x42]
//   XREF to: Stack[-0xcc] (READ)
// 004e680a: FXCH
// 004e680c: FSTP float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (WRITE)
// 004e680f: FADD float ptr [EDX]
// 004e6811: FLD float ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc8] (READ)
// 004e6814: FXCH
// 004e6816: FSTP float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (WRITE)
// 004e6819: FADD float ptr [EDX + 0x4]
// 004e681c: FLD float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (READ)
// 004e681f: FXCH
// 004e6821: FSTP float ptr [EBP + -0x4a]
//   XREF to: Stack[-0xd4] (WRITE)
// 004e6824: FADD float ptr [EDX + 0x8]
//   XREF to: 00002424 (DATA)
// 004e6827: FLD float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (READ)
// 004e682a: FXCH
// 004e682c: FSTP float ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (WRITE)
// 004e682f: FADD float ptr [EAX]
// 004e6831: FLD float ptr [EBP + -0x4a]
//   XREF to: Stack[-0xd4] (READ)
// 004e6834: FXCH
// 004e6836: FSTP float ptr [EBP + 0xfffffefe]
//   XREF to: Stack[-0x18c] (WRITE)
// 004e683c: FADD float ptr [EAX + 0x4]
// 004e683f: FLD float ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (READ)
// 004e6842: FXCH
// 004e6844: FSTP float ptr [EBP + 0xffffff02]
//   XREF to: Stack[-0x188] (WRITE)
// 004e684a: FADD float ptr [EAX + 0x8]
// 004e684d: FSTP float ptr [EBP + 0xffffff06]
//   XREF to: Stack[-0x184] (WRITE)
// 004e6853: MOV dword ptr [EDX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 004e685a: MOV ECX,dword ptr [EDX + 0x8]
//   XREF to: 00002424 (DATA)
// 004e685d: MOV dword ptr [EDX + 0x4],ECX
// 004e6860: MOV ECX,dword ptr [EDX + 0x4]
// 004e6863: MOV dword ptr [EDX],ECX
// 004e6865: MOV dword ptr [EAX + 0x8],0x0
// 004e686c: MOV EDX,dword ptr [EAX + 0x8]
// 004e686f: MOV dword ptr [EAX + 0x4],EDX
// 004e6872: MOV EDX,dword ptr [EAX + 0x4]
// 004e6875: MOV dword ptr [EAX],EDX
// 004e6877: LEA EAX,[EBP + 0xfffffefe]
//   XREF to: Stack[-0x18c] (DATA)
// 004e687d: PUSH EAX
// 004e687e: PUSH EBX
// 004e687f: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 004e6884: ADD ESP,0x8
// 004e6887: LEA ESI,[EBX + 0x158]
//   Label: LAB_004e6887
// 004e688d: PUSH ESI
// 004e688e: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004e6893: FLDZ
// 004e6895: FLD float ptr [EBX + 0xbed0]
// 004e689b: ADD ESP,0x4
// 004e689e: FSTP double ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (WRITE)
// 004e68a1: FCOMP double ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (READ)
// 004e68a4: FNSTSW AX
// 004e68a6: SAHF
// 004e68a7: JNC 0x004e6939
//   XREF to: 004e6939 (CONDITIONAL_JUMP)
// 004e68ad: FLD1
// 004e68af: FSUB double ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (READ)
// 004e68b2: SUB ESP,0x4
// 004e68b5: FSTP float ptr [ESP]
// 004e68b8: MOV ECX,dword ptr [EBX + 0xbed4]
// 004e68be: PUSH ECX
// 004e68bf: PUSH ESI
// 004e68c0: CALL core_motion.cpp_CMotionController_FUN_0052e3a0
//   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)
// 004e68c5: FLD float ptr [EBX + 0xbed0]
// 004e68cb: FLD1
// 004e68cd: FSUBRP
// 004e68cf: FST float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (WRITE)
// 004e68d2: FMUL float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 004e68d5: FMUL float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 004e68d8: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e68db: ADD ESP,0xc
// 004e68de: MOV EDX,dword ptr [EBX + 0xbed4]
// 004e68e4: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e68e7: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 004e68ec: MOV EAX,[0x02d83320]
//   XREF to: 02d83320 (READ)
// 004e68f1: FLD1
// 004e68f3: FSUBRP ST2,ST0
// 004e68f5: PUSH EAX
// 004e68f6: FXCH
// 004e68f8: FSTP float ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (WRITE)
// 004e68fb: PUSH dword ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 004e68fe: FSTP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (WRITE)
// 004e6901: PUSH dword ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 004e6904: PUSH EDX
// 004e6905: PUSH ESI
// 004e6906: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 004e690b: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e6911: FDIV float ptr [0x0065ed2c]
//   XREF to: 0065ed2c (READ)
// 004e6917: FSUBR float ptr [EBX + 0xbed0]
// 004e691d: ADD ESP,0x18
// 004e6920: FST float ptr [EBX + 0xbed0]
// 004e6926: FLDZ
// 004e6928: FCOMPP
// 004e692a: FNSTSW AX
// 004e692c: SAHF
// 004e692d: JBE 0x004e6939
//   XREF to: 004e6939 (CONDITIONAL_JUMP)
// 004e692f: MOV dword ptr [EBX + 0xbed0],0x0
// 004e6939: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004e6939
//   XREF to: Stack[0x8] (READ)
// 004e693f: PUSH EBX
// 004e6940: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 004e6945: FLD float ptr [EBX + 0x2418]
// 004e694b: FABS
// 004e694d: ADD ESP,0x8
// 004e6950: FCOMP double ptr [0x0062ddf2]
//   XREF to: 0062ddf2 (READ)
// 004e6956: FNSTSW AX
// 004e6958: SAHF
// 004e6959: JBE 0x004e8000
//   XREF to: 004e8000 (CONDITIONAL_JUMP)
// 004e695f: MOV EAX,dword ptr [EBX + 0xbebc]
//   Label: LAB_004e695f
// 004e6965: PUSH EAX
// 004e6966: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
//   XREF to: 03f6af64 (PARAM)
// 004e696c: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004e696d: CALL core_sound.cpp_FUN_005b3b80
//   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
// 004e6972: ADD ESP,0x8
// 004e6975: TEST EAX,EAX
// 004e6977: JZ 0x004e8044
//   XREF to: 004e8044 (CONDITIONAL_JUMP)
// 004e697d: CMP dword ptr [EBX + 0xbe28],0x0
//   Label: LAB_004e697d
// 004e6984: JZ 0x004e8083
//   XREF to: 004e8083 (CONDITIONAL_JUMP)
// 004e698a: CMP dword ptr [EBX + 0xbf1c],0x0
//   Label: LAB_004e698a
// 004e6991: JZ 0x004e6a37
//   XREF to: 004e6a37 (CONDITIONAL_JUMP)
// 004e6997: CMP EDI,0x11
// 004e699a: JNZ 0x004e6a37
//   XREF to: 004e6a37 (CONDITIONAL_JUMP)
// 004e69a0: LEA EDX,[EBX + 0x20]
// 004e69a3: LEA EAX,[EBX + 0xbf2c]
// 004e69a9: FLD float ptr [EDX]
// 004e69ab: FSUB float ptr [EAX]
// 004e69ad: FSTP float ptr [EBP + 0xfffffe86]
//   XREF to: Stack[-0x204] (WRITE)
// 004e69b3: FLD float ptr [EDX + 0x4]
// 004e69b6: FSUB float ptr [EAX + 0x4]
// 004e69b9: FLD float ptr [EBP + 0xfffffe86]
//   XREF to: Stack[-0x204] (READ)
// 004e69bf: FXCH
// 004e69c1: FSTP float ptr [EBP + 0xfffffe8a]
//   XREF to: Stack[-0x200] (WRITE)
// 004e69c7: FLD float ptr [EDX + 0x8]
// 004e69ca: FSUB float ptr [EAX + 0x8]
// 004e69cd: FXCH
// 004e69cf: FMUL float ptr [EBP + 0xfffffe86]
//   XREF to: Stack[-0x204] (READ)
// 004e69d5: FXCH
// 004e69d7: FST float ptr [EBP + 0xfffffe8e]
//   XREF to: Stack[-0x1fc] (WRITE)
// 004e69dd: FMUL float ptr [EBP + 0xfffffe8e]
//   XREF to: Stack[-0x1fc] (READ)
// 004e69e3: FADDP
// 004e69e5: FSQRT
// 004e69e7: XOR EDI,EDI
// 004e69e9: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e69ef: FMUL double ptr [0x0062dd82]
//   XREF to: 0062dd82 (READ)
// 004e69f5: MOV dword ptr [EBP + 0xfffffe8a],EDI
//   XREF to: Stack[-0x200] (WRITE)
// 004e69fb: FCOMPP
// 004e69fd: FNSTSW AX
// 004e69ff: SAHF
// 004e6a00: JBE 0x004e8166
//   XREF to: 004e8166 (CONDITIONAL_JUMP)
// 004e6a06: FLD float ptr [EBX + 0xbf28]
// 004e6a0c: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e6a12: FST float ptr [EBX + 0xbf28]
// 004e6a18: FLDZ
// 004e6a1a: FCOMPP
// 004e6a1c: FNSTSW AX
// 004e6a1e: SAHF
// 004e6a1f: JBE 0x004e6a37
//   XREF to: 004e6a37 (CONDITIONAL_JUMP)
// 004e6a21: MOV dword ptr [EBX + 0xbf20],0x41f00000
// 004e6a2b: MOV dword ptr [EBX + 0xbf1c],EDI
// 004e6a31: MOV dword ptr [EBX + 0xbf24],EDI
// 004e6a37: LEA EAX,[EBX + 0xbf2c]
//   Label: LAB_004e6a37
// 004e6a3d: ADD EBX,0x20
// 004e6a40: CMP EAX,EBX
// 004e6a42: JNZ 0x004e8175
//   XREF to: 004e8175 (CONDITIONAL_JUMP)
// 004e6a48: LEA ESP,[EBP + 0x7a]
//   Label: LAB_004e6a48
//   XREF to: Stack[-0x10] (DATA)
// 004e6a4b: POP EBP
// 004e6a4c: POP EDI
// 004e6a4d: POP ESI
// 004e6a4e: POP EBX
// 004e6a4f: RET
// 004e6a50: MOV ECX,dword ptr [EBX + 0xbe3c]
//   Label: caseD_5
// 004e6a56: MOV ESI,0x1
// 004e6a5b: TEST ECX,ECX
// 004e6a5d: JNZ 0x004e6a74
//   XREF to: 004e6a74 (CONDITIONAL_JUMP)
// 004e6a5f: PUSH 0x1
//   Label: LAB_004e6a5f
// 004e6a61: PUSH 0x1
// 004e6a63: MOV EDX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004e6a66: PUSH EDX
// 004e6a67: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e6a6c: ADD ESP,0xc
// 004e6a6f: JMP 0x004e665c
//   XREF to: 004e665c (UNCONDITIONAL_JUMP)
// 004e6a74: PUSH ECX
//   Label: LAB_004e6a74
// 004e6a75: MOV EDX,dword ptr [ECX + 0x154]
// 004e6a7b: CALL dword ptr [EDX + 0x120]
// 004e6a81: ADD ESP,0x4
// 004e6a84: TEST EAX,EAX
// 004e6a86: JNZ 0x004e6a5f
//   XREF to: 004e6a5f (CONDITIONAL_JUMP)
// 004e6a88: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e6a8e: PUSH EAX
// 004e6a8f: MOV EDX,dword ptr [EAX + 0x154]
// 004e6a95: CALL dword ptr [EDX + 0x108]
// 004e6a9b: ADD ESP,0x4
// 004e6a9e: TEST EAX,EAX
// 004e6aa0: JNZ 0x004e6a5f
//   XREF to: 004e6a5f (CONDITIONAL_JUMP)
// 004e6aa2: PUSH 0x0
// 004e6aa4: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e6aaa: PUSH EBX
// 004e6aab: MOV EDX,dword ptr [EAX + 0x154]
// 004e6ab1: PUSH EAX
// 004e6ab2: CALL dword ptr [EDX + 0xfc]
// 004e6ab8: ADD ESP,0xc
// 004e6abb: TEST EAX,EAX
// 004e6abd: JZ 0x004e6a5f
//   XREF to: 004e6a5f (CONDITIONAL_JUMP)
// 004e6abf: MOV EAX,[0x0065ed18]
//   XREF to: 0065ed18 (READ)
// 004e6ac4: MOV dword ptr [EBP + 0xffffff1e],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 004e6aca: LEA EAX,[EBP + 0xffffff16]
//   XREF to: Stack[-0x174] (DATA)
// 004e6ad0: PUSH EAX
// 004e6ad1: LEA EAX,[EBP + 0xfffffec2]
//   XREF to: Stack[-0x1c8] (DATA)
// 004e6ad7: PUSH EAX
// 004e6ad8: XOR EDI,EDI
// 004e6ada: PUSH EBX
// 004e6adb: MOV dword ptr [EBP + 0xffffff16],EDI
//   XREF to: Stack[-0x174] (WRITE)
// 004e6ae1: MOV dword ptr [EBP + 0xffffff1a],EDI
//   XREF to: Stack[-0x170] (WRITE)
// 004e6ae7: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e6aec: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e6af2: FLD float ptr [EBP + 0xfffffec2]
//   XREF to: Stack[-0x1c8] (READ)
// 004e6af8: FSUB float ptr [EAX + 0x20]
// 004e6afb: FMUL ST0
// 004e6afd: FLD float ptr [EBP + 0xfffffeca]
//   XREF to: Stack[-0x1c0] (READ)
// 004e6b03: FSUB float ptr [EAX + 0x28]
// 004e6b06: FMUL ST0
// 004e6b08: FADDP
// 004e6b0a: FSQRT
// 004e6b0c: ADD ESP,0xc
// 004e6b0f: FLD1
// 004e6b11: FCOMPP
// 004e6b13: FNSTSW AX
// 004e6b15: SAHF
// 004e6b16: JNC 0x004e6b1a
//   XREF to: 004e6b1a (CONDITIONAL_JUMP)
// 004e6b18: XOR ESI,ESI
// 004e6b1a: MOV EDX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_004e6b1a
// 004e6b20: FLD float ptr [EBP + 0xfffffec6]
//   XREF to: Stack[-0x1c4] (READ)
// 004e6b26: FSUB float ptr [EDX + 0x24]
// 004e6b29: FABS
// 004e6b2b: FCOMP double ptr [0x0062ddaa]
//   XREF to: 0062ddaa (READ)
// 004e6b31: FNSTSW AX
// 004e6b33: SAHF
// 004e6b34: JA 0x004e6a5f
//   XREF to: 004e6a5f (CONDITIONAL_JUMP)
// 004e6b3a: TEST ESI,ESI
// 004e6b3c: JNZ 0x004e6b4b
//   XREF to: 004e6b4b (CONDITIONAL_JUMP)
// 004e6b3e: TEST ESI,ESI
//   Label: LAB_004e6b3e
// 004e6b40: JNZ 0x004e665c
//   XREF to: 004e665c (CONDITIONAL_JUMP)
// 004e6b46: JMP 0x004e6a5f
//   XREF to: 004e6a5f (UNCONDITIONAL_JUMP)
// 004e6b4b: PUSH 0x0
//   Label: LAB_004e6b4b
// 004e6b4d: PUSH EBX
// 004e6b4e: MOV EAX,dword ptr [EDX + 0x154]
// 004e6b54: PUSH EDX
// 004e6b55: CALL dword ptr [EAX + 0x100]
// 004e6b5b: ADD ESP,0xc
// 004e6b5e: TEST EAX,EAX
// 004e6b60: JNZ 0x004e6b3e
//   XREF to: 004e6b3e (CONDITIONAL_JUMP)
// 004e6b62: JMP 0x004e6a5f
//   XREF to: 004e6a5f (UNCONDITIONAL_JUMP)
// 004e6b67: MOV EDI,dword ptr [EBX + 0xbe3c]
//   Label: caseD_a
// 004e6b6d: TEST EDI,EDI
// 004e6b6f: JNZ 0x004e6b83
//   XREF to: 004e6b83 (CONDITIONAL_JUMP)
// 004e6b71: PUSH 0x1
// 004e6b73: PUSH 0x1
// 004e6b75: PUSH ESI
// 004e6b76: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e6b7b: ADD ESP,0xc
// 004e6b7e: JMP 0x004e665c
//   XREF to: 004e665c (UNCONDITIONAL_JUMP)
// 004e6b83: PUSH EDI
//   Label: LAB_004e6b83
// 004e6b84: MOV EDX,dword ptr [EDI + 0x154]
// 004e6b8a: CALL dword ptr [EDX + 0x108]
// 004e6b90: ADD ESP,0x4
// 004e6b93: CMP EAX,EBX
// 004e6b95: JZ 0x004e6ba9
//   XREF to: 004e6ba9 (CONDITIONAL_JUMP)
// 004e6b97: PUSH 0x1
// 004e6b99: PUSH 0x1
// 004e6b9b: PUSH ESI
// 004e6b9c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e6ba1: ADD ESP,0xc
// 004e6ba4: JMP 0x004e665c
//   XREF to: 004e665c (UNCONDITIONAL_JUMP)
// 004e6ba9: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_004e6ba9
// 004e6baf: PUSH EAX
// 004e6bb0: MOV EDX,dword ptr [EAX + 0x154]
// 004e6bb6: CALL dword ptr [EDX + 0x120]
// 004e6bbc: ADD ESP,0x4
// 004e6bbf: TEST EAX,EAX
// 004e6bc1: JNZ 0x004e6d59
//   XREF to: 004e6d59 (CONDITIONAL_JUMP)
// 004e6bc7: LEA EDX,[EBP + 0xfffffe4a]
//   XREF to: Stack[-0x240] (DATA)
// 004e6bcd: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e6bd3: PUSH EDX
// 004e6bd4: MOV ESI,dword ptr [EAX + 0x154]
// 004e6bda: PUSH EAX
// 004e6bdb: CALL dword ptr [ESI + 0x14]
// 004e6bde: MOV EDX,dword ptr [EBX + 0xbe3c]
// 004e6be4: FLD float ptr [EBP + 0xfffffe5a]
//   XREF to: Stack[-0x230] (READ)
// 004e6bea: MOV EAX,dword ptr [EDX + 0x20]
// 004e6bed: ADD EDX,0x20
// 004e6bf0: FSUB float ptr [EBP + 0xfffffe4e]
//   XREF to: Stack[-0x23c] (READ)
// 004e6bf6: MOV dword ptr [EBP + 0xffffff22],EAX
//   XREF to: Stack[-0x168] (WRITE)
// 004e6bfc: LEA EAX,[EDX + 0x4]
// 004e6bff: FMUL double ptr [0x0062ddc2]
//   XREF to: 0062ddc2 (READ)
// 004e6c05: MOV EAX,dword ptr [EAX]
// 004e6c07: ADD ESP,0x8
// 004e6c0a: MOV dword ptr [EBP + 0xffffff26],EAX
//   XREF to: Stack[-0x164] (WRITE)
// 004e6c10: LEA EAX,[EDX + 0x8]
// 004e6c13: FLD float ptr [EBP + 0xffffff26]
//   XREF to: Stack[-0x164] (READ)
// 004e6c19: MOV EAX,dword ptr [EAX]
// 004e6c1b: FXCH
// 004e6c1d: FADD ST0,ST1
// 004e6c1f: MOV dword ptr [EBP + 0xffffff2a],EAX
//   XREF to: Stack[-0x160] (WRITE)
// 004e6c25: LEA EAX,[EBP + 0xfffffdee]
//   XREF to: Stack[-0x29c] (DATA)
// 004e6c2b: FSTP ST1
// 004e6c2d: PUSH EAX
// 004e6c2e: FSTP float ptr [EBP + 0xffffff26]
//   XREF to: Stack[-0x164] (WRITE)
// 004e6c34: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004e6c39: ADD ESP,0x4
// 004e6c3c: PUSH 0x41c80000
// 004e6c41: PUSH 0x41700000
// 004e6c46: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e6c4b: ADD ESP,0x8
// 004e6c4e: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e6c51: LEA EAX,[EBP + 0xffffff22]
//   XREF to: Stack[-0x168] (DATA)
// 004e6c57: PUSH EAX
// 004e6c58: LEA EAX,[EBP + -0x66]
//   XREF to: Stack[-0xf0] (DATA)
// 004e6c5b: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e6c5e: PUSH EAX
// 004e6c5f: FSTP float ptr [EBP + 0xfffffdf2]
//   XREF to: Stack[-0x298] (WRITE)
// 004e6c65: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e6c6b: PUSH EAX
// 004e6c6c: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004e6c71: MOV EDX,EAX
// 004e6c73: LEA EAX,[EBP + 0xfffffe0a]
//   XREF to: Stack[-0x280] (DATA)
// 004e6c79: ADD ESP,0xc
// 004e6c7c: CMP EAX,EDX
// 004e6c7e: JZ 0x004e6c9a
//   XREF to: 004e6c9a (CONDITIONAL_JUMP)
// 004e6c80: MOV EAX,dword ptr [EDX]
// 004e6c82: MOV dword ptr [EBP + 0xfffffe0a],EAX
//   XREF to: Stack[-0x280] (WRITE)
// 004e6c88: MOV EAX,dword ptr [EDX + 0x4]
// 004e6c8b: MOV dword ptr [EBP + 0xfffffe0e],EAX
//   XREF to: Stack[-0x27c] (WRITE)
// 004e6c91: MOV EAX,dword ptr [EDX + 0x8]
// 004e6c94: MOV dword ptr [EBP + 0xfffffe12],EAX
//   XREF to: Stack[-0x278] (WRITE)
// 004e6c9a: LEA ESI,[EBP + 0xfffffdee]
//   Label: LAB_004e6c9a
//   XREF to: Stack[-0x29c] (DATA)
// 004e6ca0: MOV dword ptr [EBP + 0xfffffe22],EBX
//   XREF to: Stack[-0x268] (WRITE)
// 004e6ca6: MOV dword ptr [EBP + 0xfffffe26],EBX
//   XREF to: Stack[-0x264] (WRITE)
// 004e6cac: PUSH ESI
// 004e6cad: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e6cb3: PUSH EAX
// 004e6cb4: MOV EDX,dword ptr [EAX + 0x154]
// 004e6cba: CALL dword ptr [EDX + 0x11c]
// 004e6cc0: FLD float ptr [EBP + 0xfffffdf2]
//   XREF to: Stack[-0x298] (READ)
// 004e6cc6: FLDZ
// 004e6cc8: ADD ESP,0x8
// 004e6ccb: FXCH
// 004e6ccd: FSTP double ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (WRITE)
// 004e6cd0: FCOMP double ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (READ)
// 004e6cd3: FNSTSW AX
// 004e6cd5: SAHF
// 004e6cd6: JNC 0x004e6d0d
//   XREF to: 004e6d0d (CONDITIONAL_JUMP)
// 004e6cd8: FLD double ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (READ)
// 004e6cdb: FMUL double ptr [0x0062ddca]
//   XREF to: 0062ddca (READ)
// 004e6ce1: FMUL double ptr [0x0062ddba]
//   XREF to: 0062ddba (READ)
// 004e6ce7: PUSH 0x0
// 004e6ce9: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e6cee: FISTP dword ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (WRITE)
// 004e6cf1: MOV EDX,dword ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (READ)
// 004e6cf4: PUSH EDX
// 004e6cf5: PUSH 0x0
// 004e6cf7: LEA EAX,[EBP + 0xffffff22]
//   XREF to: Stack[-0x168] (DATA)
// 004e6cfd: PUSH EAX
// 004e6cfe: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 004e6d04: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 004e6d05: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 004e6d0a: ADD ESP,0x14
// 004e6d0d: MOV EDX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_004e6d0d
// 004e6d13: FLD float ptr [EDX + 0x243c]
// 004e6d19: FLDZ
// 004e6d1b: FCOMPP
// 004e6d1d: FNSTSW AX
// 004e6d1f: SAHF
// 004e6d20: JC 0x004e6d42
//   XREF to: 004e6d42 (CONDITIONAL_JUMP)
// 004e6d22: PUSH EDX
// 004e6d23: MOV EAX,dword ptr [EDX + 0x154]
// 004e6d29: CALL dword ptr [EAX + 0x104]
// 004e6d2f: ADD ESP,0x4
// 004e6d32: PUSH 0x1
// 004e6d34: PUSH 0x1
// 004e6d36: MOV ESI,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004e6d39: PUSH ESI
// 004e6d3a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e6d3f: ADD ESP,0xc
// 004e6d42: PUSH 0x62dc66
//   Label: LAB_004e6d42
//   XREF to: 0062dc66 (DATA)
// 004e6d47: MOV EAX,dword ptr [EBX + 0x154]
// 004e6d4d: PUSH EBX
// 004e6d4e: CALL dword ptr [EAX + 0x24]
// 004e6d51: ADD ESP,0x8
// 004e6d54: JMP 0x004e665c
//   XREF to: 004e665c (UNCONDITIONAL_JUMP)
// 004e6d59: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_004e6d59
// 004e6d5f: PUSH EAX
// 004e6d60: MOV EDX,dword ptr [EAX + 0x154]
// 004e6d66: CALL dword ptr [EDX + 0x104]
// 004e6d6c: ADD ESP,0x4
// 004e6d6f: PUSH 0x1
// 004e6d71: PUSH 0x1
// 004e6d73: PUSH ESI
// 004e6d74: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e6d79: ADD ESP,0xc
// 004e6d7c: JMP 0x004e665c
//   XREF to: 004e665c (UNCONDITIONAL_JUMP)
// 004e6d81: MOV EAX,dword ptr [EBP + 0x72]
//   Label: caseD_b
//   XREF to: Stack[-0x18] (READ)
// 004e6d84: PUSH EAX
// 004e6d85: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004e6d8a: MOV EAX,[0x02d83300]
//   XREF to: 02d83300 (READ)
// 004e6d8f: ADD ESP,0x4
// 004e6d92: CMP EDI,0xc
// 004e6d95: JNZ 0x004e6d9c
//   XREF to: 004e6d9c (CONDITIONAL_JUMP)
// 004e6d97: MOV EAX,[0x02d83304]
//   XREF to: 02d83304 (READ)
// 004e6d9c: PUSH EAX
//   Label: LAB_004e6d9c
// 004e6d9d: LEA EAX,[EBP + 0xfffffeaa]
//   XREF to: Stack[-0x1e0] (DATA)
// 004e6da3: PUSH EAX
// 004e6da4: MOV EDX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004e6da7: PUSH EDX
// 004e6da8: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004e6dad: ADD ESP,0xc
// 004e6db0: PUSH EAX
// 004e6db1: LEA EAX,[EBP + 0xfffffeb6]
//   XREF to: Stack[-0x1d4] (DATA)
// 004e6db7: PUSH EAX
// 004e6db8: PUSH EBX
// 004e6db9: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e6dbe: ADD ESP,0xc
// 004e6dc1: PUSH 0x41400000
// 004e6dc6: PUSH 0x41000000
// 004e6dcb: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e6dd0: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e6dd3: ADD ESP,0x8
// 004e6dd6: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e6dd9: FMUL double ptr [0x0062ddba]
//   XREF to: 0062ddba (READ)
// 004e6ddf: PUSH 0x0
// 004e6de1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e6de6: FISTP dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (WRITE)
// 004e6de9: MOV ECX,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (READ)
// 004e6dec: PUSH ECX
// 004e6ded: PUSH 0x0
// 004e6def: LEA EAX,[EBP + 0xfffffeb6]
//   XREF to: Stack[-0x1d4] (DATA)
// 004e6df5: PUSH EAX
// 004e6df6: MOV ESI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 004e6dfc: PUSH ESI
//   XREF to: 02d83364 (DATA)
// 004e6dfd: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 004e6e02: ADD ESP,0x14
// 004e6e05: PUSH 0x62dc76
//   XREF to: 0062dc76 (DATA)
// 004e6e0a: MOV EAX,dword ptr [EBX + 0x154]
// 004e6e10: PUSH EBX
// 004e6e11: CALL dword ptr [EAX + 0x24]
// 004e6e14: ADD ESP,0x8
// 004e6e17: JMP 0x004e665c
//   XREF to: 004e665c (UNCONDITIONAL_JUMP)
// 004e6e1c: PUSH ESI
//   Label: caseD_d
// 004e6e1d: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004e6e22: ADD ESP,0x4
// 004e6e25: MOV EAX,[0x02d832fc]
//   XREF to: 02d832fc (READ)
// 004e6e2a: PUSH EAX
// 004e6e2b: LEA EAX,[EBP + 0xfffffeda]
//   XREF to: Stack[-0x1b0] (DATA)
// 004e6e31: PUSH EAX
// 004e6e32: PUSH ESI
// 004e6e33: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004e6e38: ADD ESP,0xc
// 004e6e3b: PUSH EAX
// 004e6e3c: LEA EAX,[EBP + 0xfffffe62]
//   XREF to: Stack[-0x228] (DATA)
// 004e6e42: PUSH EAX
// 004e6e43: PUSH EBX
// 004e6e44: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e6e49: ADD ESP,0xc
// 004e6e4c: PUSH 0x41400000
// 004e6e51: PUSH 0x41000000
// 004e6e56: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e6e5b: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e6e5e: ADD ESP,0x8
// 004e6e61: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e6e64: FMUL double ptr [0x0062ddba]
//   XREF to: 0062ddba (READ)
// 004e6e6a: PUSH 0x0
// 004e6e6c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e6e71: FISTP dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (WRITE)
// 004e6e74: MOV ECX,dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (READ)
// 004e6e77: PUSH ECX
// 004e6e78: PUSH 0x0
// 004e6e7a: LEA EAX,[EBP + 0xfffffe62]
//   XREF to: Stack[-0x228] (DATA)
// 004e6e80: PUSH EAX
// 004e6e81: MOV ESI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 004e6e87: PUSH ESI
//   XREF to: 02d83364 (DATA)
// 004e6e88: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 004e6e8d: ADD ESP,0x14
// 004e6e90: PUSH 0x62dc8b
//   XREF to: 0062dc8b (DATA)
// 004e6e95: MOV EAX,dword ptr [EBX + 0x154]
// 004e6e9b: PUSH EBX
// 004e6e9c: CALL dword ptr [EAX + 0x24]
// 004e6e9f: ADD ESP,0x8
// 004e6ea2: JMP 0x004e665c
//   XREF to: 004e665c (UNCONDITIONAL_JUMP)
// 004e6ea7: PUSH ESI
//   Label: caseD_10
// 004e6ea8: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004e6ead: ADD ESP,0x4
// 004e6eb0: MOV EAX,[0x02d832fc]
//   XREF to: 02d832fc (READ)
// 004e6eb5: PUSH EAX
// 004e6eb6: LEA EAX,[EBP + 0xfffffe9e]
//   XREF to: Stack[-0x1ec] (DATA)
// 004e6ebc: PUSH EAX
// 004e6ebd: PUSH ESI
// 004e6ebe: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004e6ec3: ADD ESP,0xc
// 004e6ec6: PUSH EAX
// 004e6ec7: LEA EAX,[EBP + 0xffffff2e]
//   XREF to: Stack[-0x15c] (DATA)
// 004e6ecd: PUSH EAX
// 004e6ece: PUSH EBX
// 004e6ecf: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e6ed4: ADD ESP,0xc
// 004e6ed7: PUSH 0x41400000
// 004e6edc: PUSH 0x41000000
// 004e6ee1: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e6ee6: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e6ee9: ADD ESP,0x8
// 004e6eec: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e6eef: FMUL double ptr [0x0062ddba]
//   XREF to: 0062ddba (READ)
// 004e6ef5: PUSH 0x0
// 004e6ef7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e6efc: FISTP dword ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (WRITE)
// 004e6eff: MOV ECX,dword ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (READ)
// 004e6f02: PUSH ECX
// 004e6f03: PUSH 0x0
// 004e6f05: LEA EAX,[EBP + 0xffffff2e]
//   XREF to: Stack[-0x15c] (DATA)
// 004e6f0b: PUSH EAX
// 004e6f0c: MOV ESI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 004e6f12: PUSH ESI
//   XREF to: 02d83364 (DATA)
// 004e6f13: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 004e6f18: ADD ESP,0x14
// 004e6f1b: PUSH 0x3f000000
// 004e6f20: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004e6f25: ADD ESP,0x4
// 004e6f28: TEST EAX,EAX
// 004e6f2a: JNZ 0x004e6f6a
//   XREF to: 004e6f6a (CONDITIONAL_JUMP)
// 004e6f2c: MOV ESI,0x62dcb5
//   XREF to: 0062dcb5 (DATA)
// 004e6f31: LEA EDI,[EBP + 0xfffffe2a]
//   Label: LAB_004e6f31
//   XREF to: Stack[-0x260] (DATA)
// 004e6f37: PUSH EDI
// 004e6f38: MOV AL,byte ptr [ESI]
//   Label: LAB_004e6f38
//   XREF to: 0062dcb5 (READ)
//   XREF to: 0062dcb7 (READ)
//   XREF to: 0062dca0 (READ)
// 004e6f3a: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x260] (DATA)
// 004e6f3c: CMP AL,0x0
// 004e6f3e: JZ 0x004e6f50
//   XREF to: 004e6f50 (CONDITIONAL_JUMP)
// 004e6f40: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062dcb6 (READ)
//   XREF to: 0062dcb8 (READ)
//   XREF to: 0062dca1 (READ)
// 004e6f43: ADD ESI,0x2
// 004e6f46: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x25f] (WRITE)
// 004e6f49: ADD EDI,0x2
// 004e6f4c: CMP AL,0x0
// 004e6f4e: JNZ 0x004e6f38
//   XREF to: 004e6f38 (CONDITIONAL_JUMP)
// 004e6f50: POP EDI
//   Label: LAB_004e6f50
// 004e6f51: LEA EDX,[EBP + 0xfffffe2a]
//   XREF to: Stack[-0x260] (DATA)
// 004e6f57: PUSH EDX
// 004e6f58: MOV EAX,dword ptr [EBX + 0x154]
// 004e6f5e: PUSH EBX
// 004e6f5f: CALL dword ptr [EAX + 0x24]
// 004e6f62: ADD ESP,0x8
// 004e6f65: JMP 0x004e665c
//   XREF to: 004e665c (UNCONDITIONAL_JUMP)
// 004e6f6a: MOV ESI,0x62dca0
//   Label: LAB_004e6f6a
//   XREF to: 0062dca0 (DATA)
// 004e6f6f: JMP 0x004e6f31
//   XREF to: 004e6f31 (UNCONDITIONAL_JUMP)
// 004e6f71: PUSH EDI
//   Label: caseD_6
// 004e6f72: PUSH EBX
// 004e6f73: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 004e6f78: ADD ESP,0x8
// 004e6f7b: JMP 0x004e665c
//   XREF to: 004e665c (UNCONDITIONAL_JUMP)
// 004e6f80: LEA EAX,[EBP + 0x26]
//   Label: LAB_004e6f80
//   XREF to: Stack[-0x64] (DATA)
// 004e6f83: PUSH EAX
// 004e6f84: MOV ESI,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004e6f87: PUSH ESI
// 004e6f88: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 004e6f8d: MOV EDI,EAX
// 004e6f8f: SUB EAX,0x5
// 004e6f92: ADD ESP,0x8
// 004e6f95: CMP EAX,0xd
// 004e6f98: JA 0x004e6f71
//   XREF to: 004e6f71 (CONDITIONAL_JUMP)
// 004e6f9a: JMP dword ptr [EAX*0x4 + 0x4e6580]
//   Label: switchD
//   XREF to: 004e6a50 (COMPUTED_JUMP)
//   XREF to: 004e6f71 (COMPUTED_JUMP)
//   XREF to: 004e6b67 (COMPUTED_JUMP)
//   XREF to: 004e6d81 (COMPUTED_JUMP)
//   XREF to: 004e6e1c (COMPUTED_JUMP)
//   XREF to: 004e665c (COMPUTED_JUMP)
//   XREF to: 004e6ea7 (COMPUTED_JUMP)
//   XREF to: 004e6580 (DATA)
// 004e6fa1: PUSH 0x1
//   Label: LAB_004e6fa1
// 004e6fa3: PUSH 0x0
// 004e6fa5: LEA EAX,[EBX + 0x158]
// 004e6fab: PUSH EAX
// 004e6fac: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e6fb1: ADD ESP,0xc
// 004e6fb4: PUSH EBX
// 004e6fb5: MOV EAX,0x62dcca
//   XREF to: 0062dcca (DATA)
// 004e6fba: PUSH EAX
//   XREF to: 0062dcca (DATA)
// 004e6fbb: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004e6fc1: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004e6fc2: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004e6fc7: JMP 0x004e6739
//   XREF to: 004e6739 (UNCONDITIONAL_JUMP)
// 004e6fcc: PUSH 0x1
//   Label: LAB_004e6fcc
// 004e6fce: PUSH 0x11
// 004e6fd0: JMP 0x004e672d
//   XREF to: 004e672d (UNCONDITIONAL_JUMP)
// 004e6fd5: JBE 0x004e6fcc
//   Label: LAB_004e6fd5
//   XREF to: 004e6fcc (CONDITIONAL_JUMP)
// 004e6fd7: CMP EAX,0x3
// 004e6fda: JZ 0x004e6fa1
//   XREF to: 004e6fa1 (CONDITIONAL_JUMP)
// 004e6fdc: PUSH 0x1
//   Label: LAB_004e6fdc
// 004e6fde: PUSH 0x0
// 004e6fe0: JMP 0x004e672d
//   XREF to: 004e672d (UNCONDITIONAL_JUMP)
// 004e6fe5: MOV EDX,dword ptr [EBX + 0xbe28]
//   Label: caseD_a
// 004e6feb: TEST EDX,EDX
// 004e6fed: JNZ 0x004e703f
//   XREF to: 004e703f (CONDITIONAL_JUMP)
// 004e6fef: CMP dword ptr [EBX + 0xbed8],0x1
// 004e6ff6: JGE 0x004e703f
//   XREF to: 004e703f (CONDITIONAL_JUMP)
// 004e6ff8: CMP dword ptr [EBX + 0xdc],0x0
// 004e6fff: JNZ 0x004e703f
//   XREF to: 004e703f (CONDITIONAL_JUMP)
// 004e7001: PUSH EDX
// 004e7002: LEA EAX,[EBP + 0xffffff5e]
//   XREF to: Stack[-0x12c] (DATA)
// 004e7008: PUSH EAX
// 004e7009: PUSH ESI
// 004e700a: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004e700f: ADD ESP,0xc
// 004e7012: PUSH EAX
// 004e7013: LEA EAX,[EBP + -0x7e]
//   XREF to: Stack[-0x108] (DATA)
// 004e7016: PUSH EAX
// 004e7017: PUSH EBX
// 004e7018: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e701d: ADD ESP,0xc
// 004e7020: PUSH 0x0
// 004e7022: LEA EAX,[EBP + -0x7e]
//   XREF to: Stack[-0x108] (DATA)
// 004e7025: PUSH EAX
// 004e7026: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 004e702c: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 004e702d: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 004e7032: ADD ESP,0xc
// 004e7035: MOV dword ptr [EBX + 0xbe28],0x1
// 004e703f: MOV ECX,dword ptr [EBX + 0xbedc]
//   Label: LAB_004e703f
// 004e7045: MOV dword ptr [EBX + 0xbf24],0x0
// 004e704f: TEST ECX,ECX
// 004e7051: JLE 0x004e717b
//   XREF to: 004e717b (CONDITIONAL_JUMP)
// 004e7057: MOV EAX,[0x02cf6a80]
//   Label: LAB_004e7057
//   XREF to: 02cf6a80 (READ)
// 004e705c: MOV EDX,dword ptr [EBX + 0xbec4]
// 004e7062: SUB EDX,EAX
// 004e7064: MOV dword ptr [EBX + 0xbec4],EDX
// 004e706a: TEST EDX,EDX
// 004e706c: JLE 0x004e718d
//   XREF to: 004e718d (CONDITIONAL_JUMP)
// 004e7072: CMP dword ptr [EBX + 0xbed8],0x0
//   Label: LAB_004e7072
// 004e7079: JLE 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e707b: CMP dword ptr [EBX + 0xbec8],0x0
// 004e7082: JLE 0x004e7220
//   XREF to: 004e7220 (CONDITIONAL_JUMP)
// 004e7088: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004e708d: MOV ECX,dword ptr [EBX + 0xbec8]
// 004e7093: SUB ECX,EAX
// 004e7095: MOV dword ptr [EBX + 0xbec8],ECX
// 004e709b: TEST ECX,ECX
// 004e709d: JLE 0x004e71f3
//   XREF to: 004e71f3 (CONDITIONAL_JUMP)
// 004e70a3: FLD float ptr [EBP + 0x6a]
//   Label: caseD_3
//   XREF to: Stack[-0x20] (READ)
// 004e70a6: FLDZ
// 004e70a8: FCOMPP
// 004e70aa: FNSTSW AX
// 004e70ac: SAHF
// 004e70ad: JA 0x004e6754
//   XREF to: 004e6754 (CONDITIONAL_JUMP)
// 004e70b3: FLD float ptr [EBX + 0xbed0]
// 004e70b9: FLDZ
// 004e70bb: FCOMPP
// 004e70bd: FNSTSW AX
// 004e70bf: SAHF
// 004e70c0: JC 0x004e6754
//   XREF to: 004e6754 (CONDITIONAL_JUMP)
// 004e70c6: CMP dword ptr [EBX + 0xbe3c],0x0
// 004e70cd: JZ 0x004e6754
//   XREF to: 004e6754 (CONDITIONAL_JUMP)
// 004e70d3: XOR EAX,EAX
// 004e70d5: MOV dword ptr [EBP + 0xffffff52],EAX
//   XREF to: Stack[-0x138] (WRITE)
// 004e70db: MOV dword ptr [EBP + 0xffffff56],EAX
//   XREF to: Stack[-0x134] (WRITE)
// 004e70e1: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 004e70e4: PUSH 0x3f060a92
// 004e70e9: MOV dword ptr [EBP + 0xffffff5a],EAX
//   XREF to: Stack[-0x130] (WRITE)
// 004e70ef: LEA EAX,[EBP + 0xffffff52]
//   XREF to: Stack[-0x138] (DATA)
// 004e70f5: PUSH 0x40400000
// 004e70fa: PUSH EAX
// 004e70fb: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e7101: PUSH EAX
// 004e7102: MOV EDX,dword ptr [EAX + 0x154]
// 004e7108: CALL dword ptr [EDX + 0xbc]
// 004e710e: ADD ESP,0x4
// 004e7111: PUSH EAX
// 004e7112: PUSH 0x0
// 004e7114: LEA EAX,[EBP + 0xfffffee6]
//   XREF to: Stack[-0x1a4] (DATA)
// 004e711a: PUSH EAX
// 004e711b: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e7121: ADD EAX,0x158
// 004e7126: PUSH EAX
// 004e7127: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004e712c: ADD ESP,0xc
// 004e712f: PUSH EAX
// 004e7130: LEA EAX,[EBP + 0xffffff46]
//   XREF to: Stack[-0x144] (DATA)
// 004e7136: PUSH EAX
// 004e7137: MOV ECX,dword ptr [EBX + 0xbe3c]
// 004e713d: PUSH ECX
// 004e713e: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e7143: ADD ESP,0xc
// 004e7146: PUSH EAX
// 004e7147: PUSH EBX
// 004e7148: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 004e714d: ADD ESP,0x18
// 004e7150: CMP EAX,0x1
// 004e7153: JZ 0x004e6754
//   XREF to: 004e6754 (CONDITIONAL_JUMP)
// 004e7159: PUSH 0x1
// 004e715b: PUSH 0x1
// 004e715d: LEA EAX,[EBX + 0x158]
// 004e7163: PUSH EAX
// 004e7164: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e7169: ADD ESP,0xc
// 004e716c: MOV dword ptr [EBX + 0x2418],0x0
// 004e7176: JMP 0x004e6754
//   XREF to: 004e6754 (UNCONDITIONAL_JUMP)
// 004e717b: CMP dword ptr [EBX + 0xbed8],0x0
//   Label: LAB_004e717b
// 004e7182: JG 0x004e7057
//   XREF to: 004e7057 (CONDITIONAL_JUMP)
// 004e7188: JMP 0x004e7072
//   XREF to: 004e7072 (UNCONDITIONAL_JUMP)
// 004e718d: CMP dword ptr [EBX + 0xbed8],0x1
//   Label: LAB_004e718d
// 004e7194: JGE 0x004e719c
//   XREF to: 004e719c (CONDITIONAL_JUMP)
// 004e7196: DEC dword ptr [EBX + 0xbedc]
// 004e719c: CMP dword ptr [EBX + 0xbedc],0x0
//   Label: LAB_004e719c
// 004e71a3: JG 0x004e71b2
//   XREF to: 004e71b2 (CONDITIONAL_JUMP)
// 004e71a5: CMP dword ptr [EBX + 0xbed8],0x0
// 004e71ac: JLE 0x004e7072
//   XREF to: 004e7072 (CONDITIONAL_JUMP)
// 004e71b2: PUSH 0x41400000
//   Label: LAB_004e71b2
// 004e71b7: PUSH 0x3f800000
// 004e71bc: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e71c1: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e71c4: ADD ESP,0x8
// 004e71c7: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e71ca: FMUL double ptr [0x0062dd72]
//   XREF to: 0062dd72 (READ)
// 004e71d0: PUSH 0x1
// 004e71d2: LEA EAX,[EBX + 0x158]
// 004e71d8: PUSH 0xf
// 004e71da: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e71df: PUSH EAX
// 004e71e0: FISTP dword ptr [EBX + 0xbec4]
// 004e71e6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e71eb: ADD ESP,0xc
// 004e71ee: JMP 0x004e7072
//   XREF to: 004e7072 (UNCONDITIONAL_JUMP)
// 004e71f3: PUSH 0x41f00000
//   Label: LAB_004e71f3
// 004e71f8: PUSH 0x0
// 004e71fa: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e71ff: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e7202: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e7205: FCHS
// 004e7207: FMUL float ptr [0x0062dd8a]
//   XREF to: 0062dd8a (READ)
// 004e720d: ADD ESP,0x8
// 004e7210: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e7215: FISTP dword ptr [EBX + 0xbec8]
// 004e721b: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7220: MOV EAX,[0x02cf6a80]
//   Label: LAB_004e7220
//   XREF to: 02cf6a80 (READ)
// 004e7225: MOV EDX,dword ptr [EBX + 0xbec8]
// 004e722b: ADD EDX,EAX
// 004e722d: XOR ESI,ESI
// 004e722f: MOV dword ptr [EBX + 0xbec8],EDX
// 004e7235: TEST EDX,EDX
// 004e7237: JL 0x004e7353
//   XREF to: 004e7353 (CONDITIONAL_JUMP)
// 004e723d: MOV dword ptr [EBX + 0xbec8],ESI
// 004e7243: MOV EAX,dword ptr [EBX + 0x2df0]
//   Label: LAB_004e7243
// 004e7249: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004e724c: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 004e724f: FCOMP float ptr [EBX + 0x2dec]
// 004e7255: FNSTSW AX
// 004e7257: SAHF
// 004e7258: JNC 0x004e7263
//   XREF to: 004e7263 (CONDITIONAL_JUMP)
// 004e725a: MOV EAX,dword ptr [EBX + 0x23a0]
// 004e7260: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004e7263: FLD float ptr [EBP + 0x6e]
//   Label: LAB_004e7263
//   XREF to: Stack[-0x1c] (READ)
// 004e7266: FCOMP float ptr [EBX + 0x2dec]
// 004e726c: FNSTSW AX
// 004e726e: SAHF
// 004e726f: JC 0x004e740a
//   XREF to: 004e740a (CONDITIONAL_JUMP)
// 004e7275: XOR ESI,ESI
//   Label: LAB_004e7275
// 004e7277: MOV dword ptr [EBP + 0x76],ESI
//   Label: LAB_004e7277
//   XREF to: Stack[-0x14] (WRITE)
// 004e727a: FILD dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e727d: FMUL double ptr [0x0062ddd2]
//   XREF to: 0062ddd2 (READ)
// 004e7283: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004e7289: FMUL double ptr [0x0062ddba]
//   XREF to: 0062ddba (READ)
// 004e728f: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004e7290: FSTP float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (WRITE)
// 004e7293: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004e7298: ADD ESP,0x4
// 004e729b: PUSH EBX
// 004e729c: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004e72a1: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004e72a2: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004e72a7: FLD float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (READ)
// 004e72aa: FLD ST0
// 004e72ac: FCOS
// 004e72ae: FXCH
// 004e72b0: FSIN
// 004e72b2: FXCH
// 004e72b4: FLD double ptr [0x0062ddda]
//   XREF to: 0062ddda (READ)
// 004e72ba: FXCH
// 004e72bc: FMUL ST1
// 004e72be: FXCH ST2
// 004e72c0: FMULP
// 004e72c2: FLD float ptr [EBX + 0x24]
// 004e72c5: ADD ESP,0x8
// 004e72c8: FADD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 004e72cb: SUB ESP,0x4
// 004e72ce: FSTP float ptr [ESP]
//   XREF to: Stack[-0x37c] (DATA)
// 004e72d1: FLD float ptr [EBX + 0x24]
// 004e72d4: FADD float ptr [EBX + 0x2dec]
// 004e72da: SUB ESP,0x4
// 004e72dd: FSTP float ptr [ESP]
//   XREF to: Stack[-0x380] (DATA)
// 004e72e0: PUSH dword ptr [EBX + 0x2de0]
// 004e72e6: SUB ESP,0x4
// 004e72e9: FXCH
// 004e72eb: FSTP float ptr [ESP]
//   XREF to: Stack[-0x388] (DATA)
// 004e72ee: SUB ESP,0x4
// 004e72f1: FSTP float ptr [ESP]
//   XREF to: Stack[-0x38c] (DATA)
// 004e72f4: PUSH dword ptr [EBX + 0x28]
// 004e72f7: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004e72fd: PUSH dword ptr [EBX + 0x20]
// 004e7300: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004e7301: CALL core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
//   XREF to: 00573470 (UNCONDITIONAL_CALL)
// 004e7306: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004e730c: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e730f: ADD ESP,0x20
// 004e7312: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e7315: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004e7316: FSTP float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (WRITE)
// 004e7319: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004e731e: FLD float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (READ)
// 004e7321: FLD1
// 004e7323: ADD ESP,0x4
// 004e7326: FCOMPP
// 004e7328: FNSTSW AX
// 004e732a: SAHF
// 004e732b: JBE 0x004e741e
//   XREF to: 004e741e (CONDITIONAL_JUMP)
// 004e7331: CMP ESI,0x4
//   Label: LAB_004e7331
// 004e7334: JGE 0x004e742d
//   XREF to: 004e742d (CONDITIONAL_JUMP)
// 004e733a: MOV dword ptr [EBX + 0xbec8],0x3
// 004e7344: MOV dword ptr [EBX + 0xbe3c],0x0
// 004e734e: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7353: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004e7353
//   XREF to: Stack[0x8] (READ)
// 004e7359: MOV EAX,dword ptr [EBX + 0x154]
// 004e735f: PUSH EBX
// 004e7360: CALL dword ptr [EAX + 0x158]
// 004e7366: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e736c: ADD ESP,0x8
// 004e736f: TEST EAX,EAX
// 004e7371: JZ 0x004e73fd
//   XREF to: 004e73fd (CONDITIONAL_JUMP)
// 004e7377: LEA EDX,[EBX + 0x20]
// 004e737a: FLD float ptr [EDX]
// 004e737c: FSUB float ptr [EAX + 0x20]
// 004e737f: FSTP float ptr [EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (WRITE)
// 004e7385: FLD float ptr [EDX + 0x4]
// 004e7388: FSUB float ptr [EAX + 0x24]
// 004e738b: FSTP float ptr [EBP + 0xffffff6e]
//   XREF to: Stack[-0x11c] (WRITE)
// 004e7391: FLD float ptr [EDX + 0x8]
// 004e7394: LEA EDX,[EBP + -0x36]
//   XREF to: Stack[-0xc0] (DATA)
// 004e7397: FSUB float ptr [EAX + 0x28]
// 004e739a: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 004e73a0: FSTP float ptr [EBP + 0xffffff72]
//   XREF to: Stack[-0x118] (WRITE)
// 004e73a6: CMP EDX,EAX
// 004e73a8: JZ 0x004e73c5
//   XREF to: 004e73c5 (CONDITIONAL_JUMP)
// 004e73aa: MOV EAX,dword ptr [EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 004e73b0: MOV dword ptr [EBP + -0x36],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 004e73b3: MOV EAX,dword ptr [EBP + 0xffffff6e]
//   XREF to: Stack[-0x11c] (READ)
// 004e73b9: MOV dword ptr [EBP + -0x32],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 004e73bc: MOV EAX,dword ptr [EBP + 0xffffff72]
//   XREF to: Stack[-0x118] (READ)
// 004e73c2: MOV dword ptr [EBP + -0x2e],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 004e73c5: FLD float ptr [EBP + -0x32]
//   Label: LAB_004e73c5
//   XREF to: Stack[-0xbc] (READ)
// 004e73c8: FMUL ST0
// 004e73ca: FLD float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (READ)
// 004e73cd: FMUL ST0
// 004e73cf: FADDP
// 004e73d1: FLD float ptr [EBP + -0x2e]
//   XREF to: Stack[-0xb8] (READ)
// 004e73d4: FMUL ST0
// 004e73d6: FADDP
// 004e73d8: FSTP float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (WRITE)
// 004e73db: MOV EAX,dword ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (READ)
// 004e73de: MOV EDX,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 004e73e4: SAR EAX,0x1
// 004e73e6: ADD EAX,EDX
// 004e73e8: MOV dword ptr [EBP + 0x12],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004e73eb: FLD float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (READ)
// 004e73ee: FCOMP double ptr [0x0062dd6a]
//   XREF to: 0062dd6a (READ)
// 004e73f4: FNSTSW AX
// 004e73f6: SAHF
// 004e73f7: JC 0x004e7243
//   XREF to: 004e7243 (CONDITIONAL_JUMP)
// 004e73fd: TEST ESI,ESI
//   Label: LAB_004e73fd
// 004e73ff: JNZ 0x004e7243
//   XREF to: 004e7243 (CONDITIONAL_JUMP)
// 004e7405: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e740a: FLD float ptr [EBX + 0x2dec]
//   Label: LAB_004e740a
// 004e7410: FADD double ptr [0x0062dd82]
//   XREF to: 0062dd82 (READ)
// 004e7416: FSTP float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (WRITE)
// 004e7419: JMP 0x004e7275
//   XREF to: 004e7275 (UNCONDITIONAL_JUMP)
// 004e741e: INC ESI
//   Label: LAB_004e741e
// 004e741f: CMP ESI,0x4
// 004e7422: JL 0x004e7277
//   XREF to: 004e7277 (CONDITIONAL_JUMP)
// 004e7428: JMP 0x004e7331
//   XREF to: 004e7331 (UNCONDITIONAL_JUMP)
// 004e742d: MOV EAX,dword ptr [EBX + 0xbed8]
//   Label: LAB_004e742d
// 004e7433: INC EAX
// 004e7434: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e7437: FILD dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e743a: FMUL double ptr [0x0062dde2]
//   XREF to: 0062dde2 (READ)
// 004e7440: SUB ESP,0x4
// 004e7443: FSTP float ptr [ESP]
//   XREF to: Stack[-0x37c] (DATA)
// 004e7446: PUSH 0x41200000
// 004e744b: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e7450: ADD ESP,0x8
// 004e7453: PUSH 0x1
// 004e7455: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e7458: LEA EAX,[EBX + 0x158]
// 004e745e: PUSH 0x10
// 004e7460: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e7463: PUSH EAX
// 004e7464: FSTP float ptr [EBX + 0x243c]
// 004e746a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e746f: ADD ESP,0xc
// 004e7472: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7477: FLD float ptr [EBX + 0xbf18]
//   Label: caseD_0
// 004e747d: FLDZ
// 004e747f: FCOMPP
// 004e7481: FNSTSW AX
// 004e7483: SAHF
// 004e7484: JNC 0x004e749d
//   XREF to: 004e749d (CONDITIONAL_JUMP)
// 004e7486: FLD float ptr [EBX + 0xbf18]
// 004e748c: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e7492: FSTP float ptr [EBX + 0xbf18]
// 004e7498: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e749d: MOV ECX,dword ptr [EBX + 0xbf1c]
//   Label: LAB_004e749d
// 004e74a3: TEST ECX,ECX
// 004e74a5: JZ 0x004e7563
//   XREF to: 004e7563 (CONDITIONAL_JUMP)
// 004e74ab: MOV EDX,ECX
// 004e74ad: LEA EAX,[EBX + 0x20]
// 004e74b0: FLD float ptr [EDX + 0x20]
// 004e74b3: FSUB float ptr [EAX]
// 004e74b5: FSTP float ptr [EBP + 0xffffff0a]
//   XREF to: Stack[-0x180] (WRITE)
// 004e74bb: FLD float ptr [EDX + 0x24]
// 004e74be: FSUB float ptr [EAX + 0x4]
// 004e74c1: FSTP float ptr [EBP + 0xffffff0e]
//   XREF to: Stack[-0x17c] (WRITE)
// 004e74c7: FLD float ptr [EDX + 0x28]
// 004e74ca: FSUB float ptr [EAX + 0x8]
// 004e74cd: LEA EAX,[EBP + 0xffffff0a]
//   XREF to: Stack[-0x180] (DATA)
// 004e74d3: FSTP float ptr [EBP + 0xffffff12]
//   XREF to: Stack[-0x178] (WRITE)
// 004e74d9: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x17c] (READ)
// 004e74dc: FMUL ST0
// 004e74de: FLD float ptr [EAX]
//   XREF to: Stack[-0x180] (DATA)
// 004e74e0: FMUL ST0
// 004e74e2: FADDP
// 004e74e4: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x178] (READ)
// 004e74e7: FMUL ST0
// 004e74e9: FADDP
// 004e74eb: FSQRT
// 004e74ed: FCOMP double ptr [0x0062ddaa]
//   XREF to: 0062ddaa (READ)
// 004e74f3: FNSTSW AX
// 004e74f5: SAHF
// 004e74f6: JNC 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e74fc: FLD float ptr [EBX + 0x243c]
// 004e7502: FLD float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e7508: FLD float ptr [EBX + 0xbf20]
// 004e750e: FSUB ST0,ST1
// 004e7510: FXCH ST2
// 004e7512: FADDP
// 004e7514: FXCH
// 004e7516: FSTP float ptr [EBX + 0xbf20]
// 004e751c: FST float ptr [EBX + 0x243c]
// 004e7522: FCOMP double ptr [0x0062ddb2]
//   XREF to: 0062ddb2 (READ)
// 004e7528: FNSTSW AX
// 004e752a: SAHF
// 004e752b: JBE 0x004e7537
//   XREF to: 004e7537 (CONDITIONAL_JUMP)
// 004e752d: MOV dword ptr [EBX + 0x243c],0x42c80000
// 004e7537: FLD float ptr [EBX + 0xbf20]
//   Label: LAB_004e7537
// 004e753d: FLDZ
// 004e753f: FCOMPP
// 004e7541: FNSTSW AX
// 004e7543: SAHF
// 004e7544: JBE 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e754a: MOV dword ptr [EBX + 0xbf20],0x0
// 004e7554: MOV dword ptr [EBX + 0xbf1c],0x0
// 004e755e: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7563: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004e7563
//   XREF to: Stack[0x8] (READ)
// 004e7569: PUSH EBX
// 004e756a: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 004e756f: ADD ESP,0x8
// 004e7572: TEST EAX,EAX
// 004e7574: JZ 0x004e758e
//   XREF to: 004e758e (CONDITIONAL_JUMP)
// 004e7576: PUSH 0x1
//   Label: LAB_004e7576
// 004e7578: PUSH 0x1
// 004e757a: LEA EAX,[EBX + 0x158]
// 004e7580: PUSH EAX
// 004e7581: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e7586: ADD ESP,0xc
// 004e7589: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e758e: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004e758e
//   XREF to: Stack[0x8] (READ)
// 004e7594: MOV EDX,dword ptr [EBX + 0x154]
// 004e759a: PUSH EBX
// 004e759b: CALL dword ptr [EDX + 0x158]
// 004e75a1: MOV ESI,dword ptr [EBX + 0xbe3c]
// 004e75a7: ADD ESP,0x8
// 004e75aa: TEST ESI,ESI
// 004e75ac: JZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e75b2: PUSH 0x1
// 004e75b4: PUSH 0x1
// 004e75b6: LEA EAX,[EBX + 0x158]
// 004e75bc: PUSH EAX
// 004e75bd: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e75c2: ADD ESP,0xc
// 004e75c5: MOV EAX,dword ptr [EBX + 0xbf0c]
// 004e75cb: PUSH EAX
// 004e75cc: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004e75d1: ADD ESP,0x4
// 004e75d4: TEST EAX,EAX
// 004e75d6: JZ 0x004e75ef
//   XREF to: 004e75ef (CONDITIONAL_JUMP)
// 004e75d8: MOV EDX,dword ptr [EBX + 0xbf10]
// 004e75de: PUSH EDX
// 004e75df: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004e75e4: ADD ESP,0x4
// 004e75e7: TEST EAX,EAX
// 004e75e9: JNZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e75ef: PUSH 0x62dcf4
//   Label: LAB_004e75ef
//   XREF to: 0062dcf4 (DATA)
// 004e75f4: MOV EAX,dword ptr [EBX + 0x154]
// 004e75fa: PUSH EBX
// 004e75fb: CALL dword ptr [EAX + 0x24]
// 004e75fe: ADD ESP,0x8
// 004e7601: MOV dword ptr [EBX + 0xbf0c],EAX
// 004e7607: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e760c: CMP dword ptr [EBX + 0xbf24],0x0
//   Label: caseD_1
// 004e7613: JZ 0x004e762c
//   XREF to: 004e762c (CONDITIONAL_JUMP)
// 004e7615: CMP EDI,0x1
// 004e7618: JNZ 0x004e762c
//   XREF to: 004e762c (CONDITIONAL_JUMP)
// 004e761a: PUSH EDI
// 004e761b: PUSH 0x11
// 004e761d: LEA EAX,[EBX + 0x158]
// 004e7623: PUSH EAX
// 004e7624: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e7629: ADD ESP,0xc
// 004e762c: FLD float ptr [EBX + 0xbf18]
//   Label: LAB_004e762c
// 004e7632: FLDZ
// 004e7634: FCOMPP
// 004e7636: FNSTSW AX
// 004e7638: SAHF
// 004e7639: JC 0x004e77c4
//   XREF to: 004e77c4 (CONDITIONAL_JUMP)
// 004e763f: LEA EAX,[EBX + 0x23ac]
// 004e7645: MOV dword ptr [EAX + 0x8],0x0
// 004e764c: MOV EDX,dword ptr [EAX + 0x8]
// 004e764f: MOV dword ptr [EAX + 0x4],EDX
// 004e7652: MOV EDX,dword ptr [EAX + 0x4]
// 004e7655: MOV dword ptr [EAX],EDX
// 004e7657: MOV EAX,dword ptr [EBX + 0xbee4]
// 004e765d: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 004e7664: XOR ESI,ESI
// 004e7666: TEST EDX,EDX
// 004e7668: JZ 0x004e766f
//   XREF to: 004e766f (CONDITIONAL_JUMP)
// 004e766a: MOV ESI,0x1
// 004e766f: MOV EAX,dword ptr [EBX + 0xbeec]
//   Label: LAB_004e766f
// 004e7675: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 004e767d: JZ 0x004e7680
//   XREF to: 004e7680 (CONDITIONAL_JUMP)
// 004e767f: INC ESI
// 004e7680: MOV EAX,[0x02db87d0]
//   Label: LAB_004e7680
//   XREF to: 02db87d0 (READ)
// 004e7685: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004e768c: PUSH EAX
// 004e768d: MOV EDX,dword ptr [EAX + 0x154]
// 004e7693: CALL dword ptr [EDX + 0x120]
// 004e7699: ADD ESP,0x4
// 004e769c: TEST EAX,EAX
// 004e769e: JNZ 0x004e7a26
//   XREF to: 004e7a26 (CONDITIONAL_JUMP)
// 004e76a4: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e76aa: MOV EAX,dword ptr [EBX + 0x154]
// 004e76b0: PUSH EBX
// 004e76b1: CALL dword ptr [EAX + 0x158]
// 004e76b7: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e76bd: ADD ESP,0x8
// 004e76c0: TEST EAX,EAX
// 004e76c2: JZ 0x004e77ee
//   XREF to: 004e77ee (CONDITIONAL_JUMP)
// 004e76c8: MOV EDX,EAX
// 004e76ca: LEA EAX,[EBX + 0x20]
// 004e76cd: FLD float ptr [EDX + 0x20]
// 004e76d0: FSUB float ptr [EAX]
// 004e76d2: FSTP float ptr [EBP + 0xfffffe92]
//   XREF to: Stack[-0x1f8] (WRITE)
// 004e76d8: FLD float ptr [EDX + 0x24]
// 004e76db: FSUB float ptr [EAX + 0x4]
// 004e76de: FSTP float ptr [EBP + 0xfffffe96]
//   XREF to: Stack[-0x1f4] (WRITE)
// 004e76e4: FLD float ptr [EDX + 0x28]
// 004e76e7: XOR EDX,EDX
// 004e76e9: FSUB float ptr [EAX + 0x8]
// 004e76ec: MOV dword ptr [EBP + 0xfffffe96],EDX
//   XREF to: Stack[-0x1f4] (WRITE)
// 004e76f2: FSTP float ptr [EBP + 0xfffffe9a]
//   XREF to: Stack[-0x1f0] (WRITE)
// 004e76f8: FLD float ptr [EBX + 0x243c]
// 004e76fe: FCOMP double ptr [0x0062dd92]
//   XREF to: 0062dd92 (READ)
// 004e7704: FNSTSW AX
// 004e7706: SAHF
// 004e7707: JNC 0x004e7725
//   XREF to: 004e7725 (CONDITIONAL_JUMP)
// 004e7709: TEST ESI,ESI
// 004e770b: JLE 0x004e7725
//   XREF to: 004e7725 (CONDITIONAL_JUMP)
// 004e770d: CMP dword ptr [EBX + 0xbf1c],0x0
// 004e7714: JNZ 0x004e7725
//   XREF to: 004e7725 (CONDITIONAL_JUMP)
// 004e7716: PUSH dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e771c: PUSH EBX
// 004e771d: CALL core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0
//   XREF to: 004e63d0 (UNCONDITIONAL_CALL)
// 004e7722: ADD ESP,0x8
// 004e7725: LEA EAX,[EBX + 0x158]
//   Label: LAB_004e7725
// 004e772b: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004e772e: MOV EAX,dword ptr [EBX + 0xbf1c]
// 004e7734: TEST EAX,EAX
// 004e7736: JZ 0x004e7835
//   XREF to: 004e7835 (CONDITIONAL_JUMP)
// 004e773c: PUSH 0x0
// 004e773e: PUSH 0x40400000
// 004e7743: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004e7748: MOV EDX,dword ptr [EAX + 0x154]
// 004e774e: PUSH EAX
// 004e774f: CALL dword ptr [EDX + 0xbc]
// 004e7755: ADD ESP,0x4
// 004e7758: PUSH EAX
// 004e7759: MOV EAX,dword ptr [EBX + 0xbf1c]
// 004e775f: ADD EAX,0x20
// 004e7762: PUSH EAX
// 004e7763: PUSH EBX
// 004e7764: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 004e7769: ADD ESP,0x18
// 004e776c: MOV ESI,EAX
// 004e776e: TEST EAX,EAX
// 004e7770: JLE 0x004e77a0
//   XREF to: 004e77a0 (CONDITIONAL_JUMP)
// 004e7772: PUSH 0x1
// 004e7774: PUSH 0x0
// 004e7776: MOV EDX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (READ)
// 004e7779: PUSH EDX
// 004e777a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e777f: ADD ESP,0xc
// 004e7782: PUSH 0x41f00000
// 004e7787: PUSH 0x41200000
// 004e778c: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e7791: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e7794: ADD ESP,0x8
// 004e7797: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e779a: MOV dword ptr [EBX + 0xbf20],EAX
// 004e77a0: TEST ESI,ESI
//   Label: LAB_004e77a0
// 004e77a2: JL 0x004e781c
//   XREF to: 004e781c (CONDITIONAL_JUMP)
// 004e77a4: CMP EDI,0x1
//   Label: LAB_004e77a4
// 004e77a7: JNZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e77ad: PUSH EDI
// 004e77ae: PUSH 0x11
// 004e77b0: LEA EAX,[EBX + 0x158]
// 004e77b6: PUSH EAX
// 004e77b7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e77bc: ADD ESP,0xc
// 004e77bf: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e77c4: PUSH 0x1
//   Label: LAB_004e77c4
// 004e77c6: FLD float ptr [EBX + 0xbf18]
// 004e77cc: LEA EAX,[EBX + 0x158]
// 004e77d2: PUSH 0x0
// 004e77d4: FSUB float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004e77da: PUSH EAX
// 004e77db: FSTP float ptr [EBX + 0xbf18]
// 004e77e1: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e77e6: ADD ESP,0xc
// 004e77e9: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e77ee: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004e77ee
//   XREF to: Stack[0x8] (READ)
// 004e77f4: PUSH EBX
// 004e77f5: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 004e77fa: ADD ESP,0x8
// 004e77fd: TEST EAX,EAX
// 004e77ff: JNZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7805: PUSH 0x1
// 004e7807: PUSH EAX
// 004e7808: LEA EAX,[EBX + 0x158]
// 004e780e: PUSH EAX
// 004e780f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e7814: ADD ESP,0xc
// 004e7817: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e781c: MOV dword ptr [EBX + 0xbf20],0x41f00000
//   Label: LAB_004e781c
// 004e7826: MOV dword ptr [EBX + 0xbf1c],0x0
// 004e7830: JMP 0x004e77a4
//   XREF to: 004e77a4 (UNCONDITIONAL_JUMP)
// 004e7835: PUSH 0x3e32b8c2
//   Label: LAB_004e7835
// 004e783a: PUSH 0x3f800000
// 004e783f: MOV EAX,[0x0065ed18]
//   XREF to: 0065ed18 (READ)
// 004e7844: XOR EDX,EDX
// 004e7846: MOV dword ptr [EBP + -0x72],EDX
//   XREF to: Stack[-0xfc] (WRITE)
// 004e7849: MOV dword ptr [EBP + -0x6a],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 004e784c: LEA EAX,[EBP + -0x72]
//   XREF to: Stack[-0xfc] (DATA)
// 004e784f: MOV dword ptr [EBP + -0x6e],EDX
//   XREF to: Stack[-0xf8] (WRITE)
// 004e7852: PUSH EAX
// 004e7853: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e7859: PUSH EAX
// 004e785a: MOV EDX,dword ptr [EAX + 0x154]
// 004e7860: CALL dword ptr [EDX + 0xbc]
// 004e7866: ADD ESP,0x4
// 004e7869: PUSH EAX
// 004e786a: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e7870: ADD EAX,0x20
// 004e7873: PUSH EAX
// 004e7874: PUSH EBX
// 004e7875: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 004e787a: ADD ESP,0x18
// 004e787d: TEST EAX,EAX
// 004e787f: JL 0x004e79fa
//   XREF to: 004e79fa (CONDITIONAL_JUMP)
// 004e7885: JLE 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e788b: TEST ESI,ESI
// 004e788d: JLE 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7893: FLD float ptr [EBX + 0xbe38]
// 004e7899: FLDZ
// 004e789b: FCOMPP
// 004e789d: FNSTSW AX
// 004e789f: SAHF
// 004e78a0: JC 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e78a6: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e78ac: PUSH EAX
// 004e78ad: MOV EDX,dword ptr [EAX + 0x154]
// 004e78b3: CALL dword ptr [EDX + 0x108]
// 004e78b9: ADD ESP,0x4
// 004e78bc: TEST EAX,EAX
// 004e78be: JNZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e78c4: FLD float ptr [EBX + 0xbed0]
// 004e78ca: FLDZ
// 004e78cc: FCOMPP
// 004e78ce: FNSTSW AX
// 004e78d0: SAHF
// 004e78d1: JC 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e78d7: FLD float ptr [EBP + 0xfffffe96]
//   XREF to: Stack[-0x1f4] (READ)
// 004e78dd: FMUL ST0
// 004e78df: FLD float ptr [EBP + 0xfffffe92]
//   XREF to: Stack[-0x1f8] (READ)
// 004e78e5: FMUL ST0
// 004e78e7: FADDP
// 004e78e9: FLD float ptr [EBP + 0xfffffe9a]
//   XREF to: Stack[-0x1f0] (READ)
// 004e78ef: FMUL ST0
// 004e78f1: FADDP
// 004e78f3: FSQRT
// 004e78f5: FSTP float ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (WRITE)
// 004e78f8: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 004e78fb: XOR ESI,ESI
// 004e78fd: MOV dword ptr [EBP + 0x42],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004e7900: MOV EAX,dword ptr [EBX + 0xbeec]
// 004e7906: MOV dword ptr [EBP + 0x66],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 004e7909: MOV dword ptr [EBP + 0x4a],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 004e790c: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 004e7913: MOV dword ptr [EBP + 0x52],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 004e7916: TEST ECX,ECX
// 004e7918: JZ 0x004e7936
//   XREF to: 004e7936 (CONDITIONAL_JUMP)
// 004e791a: FLD float ptr [0x0065ed1c]
//   XREF to: 0065ed1c (READ)
// 004e7920: FLD float ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 004e7923: FSUB ST0,ST1
// 004e7925: FABS
// 004e7927: FDIVRP
// 004e7929: FLD1
// 004e792b: FSUBRP
// 004e792d: FMUL double ptr [0x0062dd9a]
//   XREF to: 0062dd9a (READ)
// 004e7933: FSTP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (WRITE)
// 004e7936: MOV EAX,dword ptr [EBX + 0xbee4]
//   Label: LAB_004e7936
// 004e793c: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 004e7944: JZ 0x004e7962
//   XREF to: 004e7962 (CONDITIONAL_JUMP)
// 004e7946: FLD float ptr [0x0065ed20]
//   XREF to: 0065ed20 (READ)
// 004e794c: FLD float ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (READ)
// 004e794f: FSUB ST0,ST1
// 004e7951: FABS
// 004e7953: FDIVRP
// 004e7955: FLD1
// 004e7957: FSUBRP
// 004e7959: FMUL double ptr [0x0062dda2]
//   XREF to: 0062dda2 (READ)
// 004e795f: FSTP float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x40] (WRITE)
// 004e7962: PUSH 0x0
//   Label: LAB_004e7962
// 004e7964: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004e796a: PUSH EBX
// 004e796b: MOV EDX,dword ptr [EAX + 0x154]
// 004e7971: PUSH EAX
// 004e7972: CALL dword ptr [EDX + 0xfc]
// 004e7978: ADD ESP,0xc
// 004e797b: TEST EAX,EAX
// 004e797d: JZ 0x004e799b
//   XREF to: 004e799b (CONDITIONAL_JUMP)
// 004e797f: FLD float ptr [0x0065ed18]
//   XREF to: 0065ed18 (READ)
// 004e7985: FLD float ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (READ)
// 004e7988: FSUB ST0,ST1
// 004e798a: FABS
// 004e798c: FDIVRP
// 004e798e: FLD1
// 004e7990: FSUBRP
// 004e7992: FMUL double ptr [0x0062dd9a]
//   XREF to: 0062dd9a (READ)
// 004e7998: FSTP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (WRITE)
// 004e799b: FLD float ptr [EBP + 0x66]
//   Label: LAB_004e799b
//   XREF to: Stack[-0x24] (READ)
// 004e799e: FADD float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x40] (READ)
// 004e79a1: FST float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (WRITE)
// 004e79a4: FADD float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (READ)
// 004e79a7: FST float ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (WRITE)
// 004e79aa: FLDZ
// 004e79ac: FCOMPP
// 004e79ae: FNSTSW AX
// 004e79b0: SAHF
// 004e79b1: JNC 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e79b7: PUSH dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (READ)
// 004e79ba: PUSH 0x0
// 004e79bc: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e79c1: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e79c4: LEA EDX,[EBX + 0x158]
// 004e79ca: ADD ESP,0x8
// 004e79cd: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e79d0: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004e79d3: FLD float ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 004e79d6: FCOMP float ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 004e79d9: FNSTSW AX
// 004e79db: SAHF
// 004e79dc: JNC 0x004e7a0f
//   XREF to: 004e7a0f (CONDITIONAL_JUMP)
// 004e79de: PUSH 0x1
// 004e79e0: PUSH 0x2
// 004e79e2: PUSH EDX
//   Label: LAB_004e79e2
// 004e79e3: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e79e8: ADD ESP,0xc
// 004e79eb: MOV dword ptr [EBX + 0xbe38],0x3f333333
// 004e79f5: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e79fa: PUSH 0x1
//   Label: LAB_004e79fa
// 004e79fc: PUSH 0x0
// 004e79fe: MOV EAX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x30] (READ)
// 004e7a01: PUSH EAX
// 004e7a02: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e7a07: ADD ESP,0xc
// 004e7a0a: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7a0f: FLD float ptr [EBP + 0x62]
//   Label: LAB_004e7a0f
//   XREF to: Stack[-0x28] (READ)
// 004e7a12: FCOMP float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (READ)
// 004e7a15: FNSTSW AX
// 004e7a17: SAHF
// 004e7a18: JNC 0x004e7a20
//   XREF to: 004e7a20 (CONDITIONAL_JUMP)
// 004e7a1a: PUSH 0x1
// 004e7a1c: PUSH 0xc
// 004e7a1e: JMP 0x004e79e2
//   XREF to: 004e79e2 (UNCONDITIONAL_JUMP)
// 004e7a20: PUSH 0x1
//   Label: LAB_004e7a20
// 004e7a22: PUSH 0xb
// 004e7a24: JMP 0x004e79e2
//   XREF to: 004e79e2 (UNCONDITIONAL_JUMP)
// 004e7a26: CMP dword ptr [EBX + 0xbecc],0x0
//   Label: LAB_004e7a26
// 004e7a2d: JL 0x004e7b68
//   XREF to: 004e7b68 (CONDITIONAL_JUMP)
// 004e7a33: CMP dword ptr [EBX + 0xbecc],0x0
//   Label: LAB_004e7a33
// 004e7a3a: JZ 0x004e7b9b
//   XREF to: 004e7b9b (CONDITIONAL_JUMP)
// 004e7a40: MOV EAX,[0x0065ed24]
//   XREF to: 0065ed24 (READ)
// 004e7a45: MOV EDX,dword ptr [EBX + 0xbecc]
// 004e7a4b: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004e7a4e: CMP EDX,0xe
// 004e7a51: JNZ 0x004e7a5b
//   XREF to: 004e7a5b (CONDITIONAL_JUMP)
// 004e7a53: MOV EAX,[0x0065ed28]
//   XREF to: 0065ed28 (READ)
// 004e7a58: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004e7a5b: PUSH 0x3db2b8c2
//   Label: LAB_004e7a5b
// 004e7a60: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 004e7a63: PUSH 0x3f000000
// 004e7a68: MOV dword ptr [EBP + -0x52],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 004e7a6b: LEA EAX,[EBP + -0x5a]
//   XREF to: Stack[-0xe4] (DATA)
// 004e7a6e: XOR ECX,ECX
// 004e7a70: PUSH EAX
// 004e7a71: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004e7a76: MOV dword ptr [EBP + -0x5a],ECX
//   XREF to: Stack[-0xe4] (WRITE)
// 004e7a79: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004e7a80: MOV dword ptr [EBP + -0x56],ECX
//   XREF to: Stack[-0xe0] (WRITE)
// 004e7a83: PUSH EAX
// 004e7a84: MOV EDX,dword ptr [EAX + 0x154]
// 004e7a8a: CALL dword ptr [EDX + 0xbc]
// 004e7a90: ADD ESP,0x4
// 004e7a93: PUSH EAX
// 004e7a94: XOR ESI,ESI
// 004e7a96: PUSH ESI
// 004e7a97: LEA EAX,[EBP + 0xfffffef2]
//   XREF to: Stack[-0x198] (DATA)
// 004e7a9d: PUSH EAX
// 004e7a9e: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004e7aa3: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004e7aaa: ADD EAX,0x158
// 004e7aaf: PUSH EAX
// 004e7ab0: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004e7ab5: ADD ESP,0xc
// 004e7ab8: PUSH EAX
// 004e7ab9: LEA EAX,[EBP + 0xffffff3a]
//   XREF to: Stack[-0x150] (DATA)
// 004e7abf: PUSH EAX
// 004e7ac0: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004e7ac5: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004e7acc: PUSH EDX
// 004e7acd: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e7ad2: ADD ESP,0xc
// 004e7ad5: PUSH EAX
// 004e7ad6: PUSH EBX
// 004e7ad7: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 004e7adc: ADD ESP,0x18
// 004e7adf: TEST EAX,EAX
// 004e7ae1: JLE 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7ae7: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004e7aec: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004e7af3: PUSH EAX
// 004e7af4: MOV EDX,dword ptr [EAX + 0x154]
// 004e7afa: CALL dword ptr [EDX + 0x120]
// 004e7b00: ADD ESP,0x4
// 004e7b03: CMP EAX,0x2
// 004e7b06: JNZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7b0c: PUSH 0x1
// 004e7b0e: MOV ECX,dword ptr [EBX + 0xbecc]
// 004e7b14: PUSH ECX
// 004e7b15: LEA EAX,[EBX + 0x158]
// 004e7b1b: PUSH EAX
// 004e7b1c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e7b21: MOV ESI,dword ptr [EBX + 0xbecc]
// 004e7b27: ADD ESP,0xc
// 004e7b2a: CMP ESI,0xd
// 004e7b2d: JNZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7b33: PUSH 0x3f99999a
// 004e7b38: PUSH 0x3f000000
// 004e7b3d: MOV ESI,dword ptr [EBX + 0x154]
// 004e7b43: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e7b48: ADD ESP,0x8
// 004e7b4b: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e7b4e: SUB ESP,0x4
// 004e7b51: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e7b54: MOV dword ptr [ESP],EAX
// 004e7b57: PUSH 0x62dd06
//   XREF to: 0062dd06 (DATA)
// 004e7b5c: PUSH EBX
// 004e7b5d: CALL dword ptr [ESI + 0x2c]
// 004e7b60: ADD ESP,0xc
// 004e7b63: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7b68: MOV EDX,dword ptr [EBX + 0xbee4]
//   Label: LAB_004e7b68
// 004e7b6e: MOV ECX,dword ptr [EBX + EDX*0x4 + 0x2298]
// 004e7b75: XOR EAX,EAX
// 004e7b77: TEST ECX,ECX
// 004e7b79: JZ 0x004e7b80
//   XREF to: 004e7b80 (CONDITIONAL_JUMP)
// 004e7b7b: MOV EAX,0x1
// 004e7b80: MOV EDX,dword ptr [EBX + 0xbeec]
//   Label: LAB_004e7b80
// 004e7b86: CMP dword ptr [EBX + EDX*0x4 + 0x2298],0x0
// 004e7b8e: JZ 0x004e7b91
//   XREF to: 004e7b91 (CONDITIONAL_JUMP)
// 004e7b90: INC EAX
// 004e7b91: TEST EAX,EAX
//   Label: LAB_004e7b91
// 004e7b93: JNZ 0x004e7bb3
//   XREF to: 004e7bb3 (CONDITIONAL_JUMP)
// 004e7b95: MOV dword ptr [EBX + 0xbecc],EAX
// 004e7b9b: PUSH 0x1
//   Label: LAB_004e7b9b
// 004e7b9d: PUSH 0x0
// 004e7b9f: LEA EAX,[EBX + 0x158]
// 004e7ba5: PUSH EAX
// 004e7ba6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e7bab: ADD ESP,0xc
// 004e7bae: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7bb3: CMP EAX,0x1
//   Label: LAB_004e7bb3
// 004e7bb6: JNZ 0x004e7bd6
//   XREF to: 004e7bd6 (CONDITIONAL_JUMP)
// 004e7bb8: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004e7bbd: MOV dword ptr [EBX + 0xbecc],0xe
// 004e7bc7: MOV dword ptr [EAX + 0x220],0x1
//   XREF to: 02d81cbc (WRITE)
// 004e7bd1: JMP 0x004e7a33
//   XREF to: 004e7a33 (UNCONDITIONAL_JUMP)
// 004e7bd6: PUSH 0x3f000000
//   Label: LAB_004e7bd6
// 004e7bdb: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004e7be0: ADD ESP,0x4
// 004e7be3: TEST EAX,EAX
// 004e7be5: SETZ AL
// 004e7be8: AND EAX,0xff
// 004e7bed: ADD EAX,0xd
// 004e7bf0: MOV dword ptr [EBX + 0xbecc],EAX
// 004e7bf6: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004e7bfb: MOV dword ptr [EAX + 0x220],0x1
//   XREF to: 02d81cbc (WRITE)
// 004e7c05: JMP 0x004e7a33
//   XREF to: 004e7a33 (UNCONDITIONAL_JUMP)
// 004e7c0a: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: caseD_2
// 004e7c10: TEST EAX,EAX
// 004e7c12: JZ 0x004e7576
//   XREF to: 004e7576 (CONDITIONAL_JUMP)
// 004e7c18: PUSH EAX
// 004e7c19: MOV EDX,dword ptr [EAX + 0x154]
// 004e7c1f: CALL dword ptr [EDX + 0x108]
// 004e7c25: ADD ESP,0x4
// 004e7c28: TEST EAX,EAX
// 004e7c2a: JZ 0x004e7c3e
//   XREF to: 004e7c3e (CONDITIONAL_JUMP)
// 004e7c2c: PUSH 0x1
// 004e7c2e: PUSH 0x1
// 004e7c30: PUSH ESI
// 004e7c31: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e7c36: ADD ESP,0xc
// 004e7c39: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7c3e: PUSH 0x3f000000
//   Label: LAB_004e7c3e
// 004e7c43: PUSH 0x3e4ccccd
// 004e7c48: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e7c4d: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e7c50: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e7c53: MOV EAX,dword ptr [EBX + 0xbeec]
// 004e7c59: FSTP float ptr [EBX + 0xbe38]
// 004e7c5f: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 004e7c66: ADD ESP,0x8
// 004e7c69: TEST EDX,EDX
// 004e7c6b: JZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7c71: PUSH ESI
// 004e7c72: CALL core_motion.cpp_CMotionController_FUN_0052e2b0
//   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)
// 004e7c77: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e7c7a: ADD ESP,0x4
// 004e7c7d: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e7c80: MOV dword ptr [EBP + 0x3a],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004e7c83: FLD float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (READ)
// 004e7c86: FST double ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (WRITE)
// 004e7c89: FCOMP double ptr [0x0062dd7a]
//   XREF to: 0062dd7a (READ)
// 004e7c8f: FNSTSW AX
// 004e7c91: SAHF
// 004e7c92: JA 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7c98: MOV EAX,[0x0065ed1c]
//   XREF to: 0065ed1c (READ)
// 004e7c9d: FLD1
// 004e7c9f: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004e7ca2: FCOMP double ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (READ)
// 004e7ca5: FNSTSW AX
// 004e7ca7: SAHF
// 004e7ca8: JA 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7cae: LEA EAX,[EBP + 0xfffffdb2]
//   XREF to: Stack[-0x2d8] (DATA)
// 004e7cb4: PUSH EAX
// 004e7cb5: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004e7cba: ADD ESP,0x4
// 004e7cbd: PUSH 0x41700000
// 004e7cc2: PUSH 0x40e00000
// 004e7cc7: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e7ccc: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e7ccf: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e7cd2: MOV dword ptr [EBP + 0xfffffdb6],EAX
//   XREF to: Stack[-0x2d4] (WRITE)
// 004e7cd8: MOV ECX,dword ptr [EBX + 0xbf24]
// 004e7cde: ADD ESP,0x8
// 004e7ce1: TEST ECX,ECX
// 004e7ce3: JZ 0x004e7cfb
//   XREF to: 004e7cfb (CONDITIONAL_JUMP)
// 004e7ce5: FLD float ptr [EBP + 0xfffffdb6]
//   XREF to: Stack[-0x2d4] (READ)
// 004e7ceb: FLD ST0
// 004e7ced: FMUL double ptr [0x0062dd7a]
//   XREF to: 0062dd7a (READ)
// 004e7cf3: FSTP ST1
// 004e7cf5: FSTP float ptr [EBP + 0xfffffdb6]
//   XREF to: Stack[-0x2d4] (WRITE)
// 004e7cfb: LEA EAX,[EBP + 0xfffffdb2]
//   Label: LAB_004e7cfb
//   XREF to: Stack[-0x2d8] (DATA)
// 004e7d01: MOV EDX,dword ptr [0x02d83304]
//   XREF to: 02d83304 (READ)
// 004e7d07: PUSH EAX
// 004e7d08: LEA EAX,[EDX*0x4 + 0x0]
// 004e7d0f: MOV dword ptr [EBP + 0xfffffde6],EBX
//   XREF to: Stack[-0x2a4] (WRITE)
// 004e7d15: SUB EAX,EDX
// 004e7d17: MOV dword ptr [EBP + 0xfffffdea],EBX
//   XREF to: Stack[-0x2a0] (WRITE)
// 004e7d1d: SHL EAX,0x4
// 004e7d20: LEA EDX,[EBX + 0xfd8]
// 004e7d26: ADD EAX,EDX
// 004e7d28: PUSH 0x3e4ccccd
// 004e7d2d: PUSH EAX
// 004e7d2e: PUSH 0x2d832b4
//   XREF to: 02d832b4 (DATA)
// 004e7d33: LEA EAX,[EBP + 0xffffff76]
//   XREF to: Stack[-0x114] (DATA)
// 004e7d39: PUSH EAX
// 004e7d3a: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 004e7d3f: ADD ESP,0xc
// 004e7d42: PUSH EAX
// 004e7d43: LEA EAX,[EBP + 0xfffffece]
//   XREF to: Stack[-0x1bc] (DATA)
// 004e7d49: PUSH EAX
// 004e7d4a: PUSH EBX
// 004e7d4b: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e7d50: ADD ESP,0xc
// 004e7d53: PUSH EAX
// 004e7d54: PUSH EBX
// 004e7d55: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 004e7d5a: ADD ESP,0x10
// 004e7d5d: TEST EAX,EAX
// 004e7d5f: JZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7d65: PUSH 0x62dd1b
//   XREF to: 0062dd1b (DATA)
// 004e7d6a: MOV EAX,dword ptr [EBX + 0x154]
// 004e7d70: PUSH EBX
// 004e7d71: CALL dword ptr [EAX + 0x24]
// 004e7d74: ADD ESP,0x8
// 004e7d77: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7d7c: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: caseD_c
// 004e7d82: TEST EAX,EAX
// 004e7d84: JZ 0x004e7d9a
//   XREF to: 004e7d9a (CONDITIONAL_JUMP)
// 004e7d86: PUSH EAX
// 004e7d87: MOV EDX,dword ptr [EAX + 0x154]
// 004e7d8d: CALL dword ptr [EDX + 0x108]
// 004e7d93: ADD ESP,0x4
// 004e7d96: TEST EAX,EAX
// 004e7d98: JZ 0x004e7dac
//   XREF to: 004e7dac (CONDITIONAL_JUMP)
// 004e7d9a: PUSH 0x1
//   Label: LAB_004e7d9a
// 004e7d9c: PUSH 0x1
// 004e7d9e: PUSH ESI
// 004e7d9f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e7da4: ADD ESP,0xc
// 004e7da7: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7dac: PUSH 0x3f000000
//   Label: LAB_004e7dac
// 004e7db1: PUSH 0x3e4ccccd
// 004e7db6: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e7dbb: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e7dbe: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e7dc1: MOV EAX,dword ptr [EBX + 0xbee4]
// 004e7dc7: FSTP float ptr [EBX + 0xbe38]
// 004e7dcd: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 004e7dd4: ADD ESP,0x8
// 004e7dd7: TEST EDX,EDX
// 004e7dd9: JZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7ddf: PUSH ESI
// 004e7de0: CALL core_motion.cpp_CMotionController_FUN_0052e2b0
//   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)
// 004e7de5: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e7de8: ADD ESP,0x4
// 004e7deb: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e7dee: MOV dword ptr [EBP + 0x3e],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004e7df1: FLD float ptr [EBP + 0x3e]
//   XREF to: Stack[-0x4c] (READ)
// 004e7df4: FST double ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (WRITE)
// 004e7df7: FCOMP double ptr [0x0062dd7a]
//   XREF to: 0062dd7a (READ)
// 004e7dfd: FNSTSW AX
// 004e7dff: SAHF
// 004e7e00: JA 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7e06: MOV EAX,[0x0065ed20]
//   XREF to: 0065ed20 (READ)
// 004e7e0b: FLD1
// 004e7e0d: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004e7e10: FCOMP double ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (READ)
// 004e7e13: FNSTSW AX
// 004e7e15: SAHF
// 004e7e16: JA 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7e1c: LEA EAX,[EBP + 0xfffffd76]
//   XREF to: Stack[-0x314] (DATA)
// 004e7e22: PUSH EAX
// 004e7e23: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004e7e28: ADD ESP,0x4
// 004e7e2b: PUSH 0x41700000
// 004e7e30: PUSH 0x40e00000
// 004e7e35: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e7e3a: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e7e3d: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e7e40: MOV dword ptr [EBP + 0xfffffd7a],EAX
//   XREF to: Stack[-0x310] (WRITE)
// 004e7e46: MOV ECX,dword ptr [EBX + 0xbf24]
// 004e7e4c: ADD ESP,0x8
// 004e7e4f: TEST ECX,ECX
// 004e7e51: JZ 0x004e7e69
//   XREF to: 004e7e69 (CONDITIONAL_JUMP)
// 004e7e53: FLD float ptr [EBP + 0xfffffd7a]
//   XREF to: Stack[-0x310] (READ)
// 004e7e59: FLD ST0
// 004e7e5b: FMUL double ptr [0x0062dd7a]
//   XREF to: 0062dd7a (READ)
// 004e7e61: FSTP ST1
// 004e7e63: FSTP float ptr [EBP + 0xfffffd7a]
//   XREF to: Stack[-0x310] (WRITE)
// 004e7e69: LEA EAX,[EBP + 0xfffffd76]
//   Label: LAB_004e7e69
//   XREF to: Stack[-0x314] (DATA)
// 004e7e6f: MOV EDX,dword ptr [0x02d83300]
//   XREF to: 02d83300 (READ)
// 004e7e75: PUSH EAX
// 004e7e76: LEA EAX,[EDX*0x4 + 0x0]
// 004e7e7d: MOV dword ptr [EBP + 0xfffffdaa],EBX
//   XREF to: Stack[-0x2e0] (WRITE)
// 004e7e83: SUB EAX,EDX
// 004e7e85: MOV dword ptr [EBP + 0xfffffdae],EBX
//   XREF to: Stack[-0x2dc] (WRITE)
// 004e7e8b: SHL EAX,0x4
// 004e7e8e: LEA EDX,[EBX + 0xfd8]
// 004e7e94: ADD EAX,EDX
// 004e7e96: PUSH 0x3ecccccd
// 004e7e9b: PUSH EAX
// 004e7e9c: PUSH 0x2d832a8
//   XREF to: 02d832a8 (DATA)
// 004e7ea1: LEA EAX,[EBP + 0xfffffe7a]
//   XREF to: Stack[-0x210] (DATA)
// 004e7ea7: PUSH EAX
// 004e7ea8: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 004e7ead: ADD ESP,0xc
// 004e7eb0: PUSH EAX
// 004e7eb1: LEA EAX,[EBP + 0xfffffe6e]
//   XREF to: Stack[-0x21c] (DATA)
// 004e7eb7: PUSH EAX
// 004e7eb8: PUSH EBX
// 004e7eb9: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004e7ebe: ADD ESP,0xc
// 004e7ec1: PUSH EAX
// 004e7ec2: PUSH EBX
// 004e7ec3: CALL core_enemy.cpp_FUN_004a9880
//   XREF to: 004a9880 (UNCONDITIONAL_CALL)
// 004e7ec8: ADD ESP,0x10
// 004e7ecb: TEST EAX,EAX
// 004e7ecd: JZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7ed3: PUSH 0x62dd28
//   XREF to: 0062dd28 (DATA)
// 004e7ed8: MOV EAX,dword ptr [EBX + 0x154]
// 004e7ede: PUSH EBX
// 004e7edf: CALL dword ptr [EAX + 0x24]
// 004e7ee2: ADD ESP,0x8
// 004e7ee5: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7eea: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: caseD_b
// 004e7ef0: TEST EAX,EAX
// 004e7ef2: JZ 0x004e7d9a
//   XREF to: 004e7d9a (CONDITIONAL_JUMP)
// 004e7ef8: PUSH EAX
// 004e7ef9: MOV EDX,dword ptr [EAX + 0x154]
// 004e7eff: CALL dword ptr [EDX + 0x108]
// 004e7f05: ADD ESP,0x4
// 004e7f08: TEST EAX,EAX
// 004e7f0a: JNZ 0x004e7f19
//   XREF to: 004e7f19 (CONDITIONAL_JUMP)
// 004e7f0c: MOV EAX,[0x0065ed18]
//   XREF to: 0065ed18 (READ)
// 004e7f11: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004e7f14: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7f19: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_004e7f19
// 004e7f1f: PUSH EAX
// 004e7f20: MOV EDX,dword ptr [EAX + 0x154]
// 004e7f26: CALL dword ptr [EDX + 0x108]
// 004e7f2c: ADD ESP,0x4
// 004e7f2f: CMP EAX,EBX
// 004e7f31: JZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7f37: PUSH 0x1
// 004e7f39: PUSH 0x1
// 004e7f3b: PUSH ESI
// 004e7f3c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e7f41: ADD ESP,0xc
// 004e7f44: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7f49: MOV EAX,[0x02cf6a80]
//   Label: caseD_d
//   XREF to: 02cf6a80 (READ)
// 004e7f4e: MOV EDX,dword ptr [EBX + 0xbec0]
// 004e7f54: SUB EDX,EAX
// 004e7f56: MOV dword ptr [EBX + 0xbec0],EDX
// 004e7f5c: TEST EDX,EDX
// 004e7f5e: JG 0x004e7f9b
//   XREF to: 004e7f9b (CONDITIONAL_JUMP)
// 004e7f60: PUSH 0x62dd35
//   XREF to: 0062dd35 (DATA)
// 004e7f65: MOV EAX,dword ptr [EBX + 0x154]
// 004e7f6b: PUSH EBX
// 004e7f6c: CALL dword ptr [EAX + 0x24]
// 004e7f6f: ADD ESP,0x8
// 004e7f72: PUSH 0x41f00000
// 004e7f77: PUSH 0x41700000
// 004e7f7c: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004e7f81: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e7f84: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004e7f87: FMUL double ptr [0x0062dd72]
//   XREF to: 0062dd72 (READ)
// 004e7f8d: ADD ESP,0x8
// 004e7f90: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e7f95: FISTP dword ptr [EBX + 0xbec0]
// 004e7f9b: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_004e7f9b
//   XREF to: Stack[0x8] (READ)
// 004e7fa1: MOV EAX,dword ptr [EBX + 0x154]
// 004e7fa7: PUSH EBX
// 004e7fa8: CALL dword ptr [EAX + 0x158]
// 004e7fae: MOV ESI,dword ptr [EBX + 0xbe3c]
// 004e7fb4: ADD ESP,0x8
// 004e7fb7: TEST ESI,ESI
// 004e7fb9: JZ 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7fbf: PUSH 0x1
// 004e7fc1: PUSH 0x0
// 004e7fc3: LEA EAX,[EBX + 0x158]
// 004e7fc9: PUSH EAX
// 004e7fca: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004e7fcf: ADD ESP,0xc
// 004e7fd2: JMP 0x004e70a3
//   XREF to: 004e70a3 (UNCONDITIONAL_JUMP)
// 004e7fd7: MOV dword ptr [EBP + 0x6a],0xbf800000
//   Label: LAB_004e7fd7
//   XREF to: Stack[-0x20] (WRITE)
// 004e7fde: LEA ESI,[EBX + 0x158]
// 004e7fe4: PUSH ESI
// 004e7fe5: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004e7fea: MOV EAX,dword ptr [EAX + 0x24]
// 004e7fed: ADD ESP,0x4
// 004e7ff0: CMP EAX,0x11
// 004e7ff3: JA 0x004e70a3
//   XREF to: 004e70a3 (CONDITIONAL_JUMP)
// 004e7ff9: JMP dword ptr [EAX*0x4 + 0x4e65b8]
//   Label: switchD
//   XREF to: 004e7477 (COMPUTED_JUMP)
//   XREF to: 004e760c (COMPUTED_JUMP)
//   XREF to: 004e7c0a (COMPUTED_JUMP)
//   XREF to: 004e70a3 (COMPUTED_JUMP)
//   XREF to: 004e6fe5 (COMPUTED_JUMP)
//   XREF to: 004e7eea (COMPUTED_JUMP)
//   XREF to: 004e7d7c (COMPUTED_JUMP)
//   XREF to: 004e7f49 (COMPUTED_JUMP)
//   XREF to: 004e65b8 (DATA)
// 004e8000: LEA EAX,[EBX + 0x241c]
//   Label: LAB_004e8000
// 004e8006: FLD float ptr [EAX + 0x4]
// 004e8009: FMUL ST0
// 004e800b: FLD float ptr [EAX]
// 004e800d: FMUL ST0
// 004e800f: FADDP
// 004e8011: FLD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 004e8014: FMUL ST0
// 004e8016: FADDP
// 004e8018: FSQRT
// 004e801a: FCOMP double ptr [0x0062ddf2]
//   XREF to: 0062ddf2 (READ)
// 004e8020: FNSTSW AX
// 004e8022: SAHF
// 004e8023: JA 0x004e695f
//   XREF to: 004e695f (CONDITIONAL_JUMP)
// 004e8029: MOV ECX,dword ptr [EBX + 0xbebc]
// 004e802f: PUSH ECX
// 004e8030: MOV ESI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 004e8036: PUSH ESI
//   XREF to: 03f6af64 (DATA)
// 004e8037: CALL core_sound.cpp_FUN_005b3b90
//   XREF to: 005b3b90 (UNCONDITIONAL_CALL)
// 004e803c: ADD ESP,0x8
// 004e803f: JMP 0x004e697d
//   XREF to: 004e697d (UNCONDITIONAL_JUMP)
// 004e8044: SUB ESP,0x8
//   Label: LAB_004e8044
// 004e8047: FLD float ptr [EBX + 0xbe24]
// 004e804d: FSTP double ptr [ESP]
// 004e8050: PUSH 0x62dd43
//   XREF to: 0062dd43 (DATA)
// 004e8055: LEA EAX,[EBP + 0xfffffd12]
//   XREF to: Stack[-0x378] (DATA)
// 004e805b: PUSH EAX
// 004e805c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004e8061: ADD ESP,0x10
// 004e8064: LEA EAX,[EBP + 0xfffffd12]
//   XREF to: Stack[-0x378] (DATA)
// 004e806a: PUSH EAX
// 004e806b: MOV EDX,dword ptr [EBX + 0x154]
// 004e8071: PUSH EBX
// 004e8072: CALL dword ptr [EDX + 0x28]
// 004e8075: ADD ESP,0x8
// 004e8078: MOV dword ptr [EBX + 0xbebc],EAX
// 004e807e: JMP 0x004e697d
//   XREF to: 004e697d (UNCONDITIONAL_JUMP)
// 004e8083: MOV EAX,dword ptr [EBX + 0xbf04]
//   Label: LAB_004e8083
// 004e8089: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 004e8091: JZ 0x004e8152
//   XREF to: 004e8152 (CONDITIONAL_JUMP)
// 004e8097: MOV ECX,dword ptr [0x02d83310]
//   XREF to: 02d83310 (READ)
// 004e809d: PUSH 0x3e4ccccd
// 004e80a2: PUSH ECX
// 004e80a3: MOV ESI,dword ptr [EBX + 0xbee0]
// 004e80a9: PUSH ESI
// 004e80aa: PUSH EBX
// 004e80ab: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 004e80b0: MOV EAX,dword ptr [EBX + 0xbee0]
// 004e80b6: MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 004e80bd: ADD ESP,0x10
// 004e80c0: TEST EDX,EDX
// 004e80c2: JZ 0x004e80e0
//   XREF to: 004e80e0 (CONDITIONAL_JUMP)
// 004e80c4: MOV ECX,dword ptr [0x02d83308]
//   XREF to: 02d83308 (READ)
// 004e80ca: PUSH 0x3e4ccccd
// 004e80cf: PUSH ECX
// 004e80d0: MOV ESI,dword ptr [EBX + 0xbee4]
// 004e80d6: PUSH ESI
// 004e80d7: PUSH EBX
// 004e80d8: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 004e80dd: ADD ESP,0x10
// 004e80e0: MOV EAX,[0x02d83314]
//   Label: LAB_004e80e0
//   XREF to: 02d83314 (READ)
// 004e80e5: PUSH 0x3e4ccccd
// 004e80ea: PUSH EAX
// 004e80eb: MOV EDX,dword ptr [EBX + 0xbee8]
// 004e80f1: PUSH EDX
// 004e80f2: PUSH EBX
// 004e80f3: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 004e80f8: MOV EAX,dword ptr [EBX + 0xbee8]
// 004e80fe: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 004e8105: ADD ESP,0x10
// 004e8108: TEST ECX,ECX
// 004e810a: JZ 0x004e8128
//   XREF to: 004e8128 (CONDITIONAL_JUMP)
// 004e810c: MOV ESI,dword ptr [0x02d8330c]
//   XREF to: 02d8330c (READ)
// 004e8112: PUSH 0x3e4ccccd
// 004e8117: PUSH ESI
// 004e8118: MOV EAX,dword ptr [EBX + 0xbeec]
// 004e811e: PUSH EAX
// 004e811f: PUSH EBX
// 004e8120: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 004e8125: ADD ESP,0x10
// 004e8128: MOV EDX,dword ptr [0x02d832fc]
//   Label: LAB_004e8128
//   XREF to: 02d832fc (READ)
// 004e812e: PUSH 0x3f333333
// 004e8133: PUSH EDX
// 004e8134: MOV ECX,dword ptr [EBX + 0xbf08]
// 004e813a: PUSH ECX
// 004e813b: PUSH EBX
//   Label: LAB_004e813b
// 004e813c: CALL core_charactr.cpp_CCharacter_FUN_0042b810
//   XREF to: 0042b810 (UNCONDITIONAL_CALL)
// 004e8141: ADD ESP,0x10
// 004e8144: PUSH EBX
// 004e8145: CALL core_charactr.cpp_CCharacter_FUN_0042b670
//   XREF to: 0042b670 (UNCONDITIONAL_CALL)
// 004e814a: ADD ESP,0x4
// 004e814d: JMP 0x004e698a
//   XREF to: 004e698a (UNCONDITIONAL_JUMP)
// 004e8152: MOV EAX,[0x02d83324]
//   Label: LAB_004e8152
//   XREF to: 02d83324 (READ)
// 004e8157: PUSH 0x3f000000
// 004e815c: PUSH EAX
// 004e815d: MOV EDX,dword ptr [EBX + 0xbf04]
// 004e8163: PUSH EDX
// 004e8164: JMP 0x004e813b
//   XREF to: 004e813b (UNCONDITIONAL_JUMP)
// 004e8166: MOV dword ptr [EBX + 0xbf28],0x3f800000
//   Label: LAB_004e8166
// 004e8170: JMP 0x004e6a37
//   XREF to: 004e6a37 (UNCONDITIONAL_JUMP)
// 004e8175: MOV EDX,dword ptr [EBX]
//   Label: LAB_004e8175
// 004e8177: MOV dword ptr [EAX],EDX
// 004e8179: MOV EDX,dword ptr [EBX + 0x4]
// 004e817c: MOV dword ptr [EAX + 0x4],EDX
// 004e817f: MOV EDX,dword ptr [EBX + 0x8]
// 004e8182: MOV dword ptr [EAX + 0x8],EDX
// 004e8185: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 004e8188: POP EBP
// 004e8189: POP EDI
// 004e818a: POP ESI
// 004e818b: POP EBX
// 004e818c: RET
