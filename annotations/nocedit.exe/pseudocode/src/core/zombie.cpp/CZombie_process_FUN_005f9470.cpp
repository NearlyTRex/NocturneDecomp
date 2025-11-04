// Name: core_zombie.cpp_CZombie_process_FUN_005f9470
// Address: 005f9470
// Address Range: [[005f9470, 005f9838] [005f990b, 005fb1eb]]
// Convention: __cdecl
// Signature: void core_zombie.cpp_CZombie_process_FUN_005f9470(CZombie * this_ptr)
// Globals:
//   undefined4 DAT_00002424
//   TerminatedCString s_CHASE_2_006585ad
//   TerminatedCString s_s_picked_up_s_using_hand_006585c5
//   TerminatedCString s_core_zombie_cpp_006585e4
//   TerminatedCString s_WTF_006585f7
//   TerminatedCString s_s_lugging_s_006585fc
//   TerminatedCString s_zom_h0_wav_0065860b
//   TerminatedCString s_core_zombie_cpp_00658617
//   TerminatedCString s_WTF_0065862a
//   TerminatedCString s_s_tossing_s_0065862f
//   TerminatedCString s_zom_h0_wav_0065863e
//   TerminatedCString s_zombie_bang_door_wav_0065864a
//   TerminatedCString s_ghoul_eat_wav_00658660
//   undefined4 s_houl-eat-?.wav_00658661
//   undefined4 s_oul-eat-?.wav_00658662
//   undefined4 s_ul-eat-?.wav_00658663
//   TerminatedCString s_ghoul_dig_wav_00658670
//   undefined4 s_houl-dig-?.wav_00658671
//   TerminatedCString s_fall_wav_00658680
//   TerminatedCString s_s_confused_while_walking_0065868b
//   TerminatedCString s_s_rising_from_the_grave_006586b5
//   TerminatedCString s_pickass_006586cf
//   TerminatedCString s_f_zombie_alert_wav_006586d7
//   TerminatedCString s_zom_a0_wav_006586eb
//   TerminatedCString s_f_zombie_alert_wav_006586f7
//   TerminatedCString s_zom_a0_wav_0065870b
//   TerminatedCString s_s_gave_up_chase_I_m_conf_00658717
//   TerminatedCString s_s_tossing_00658738
//   TerminatedCString s_s_lugging_00658744
//   TerminatedCString s_s_gave_up_swing_00658750
//   TerminatedCString s_s_giving_up_attack_00658762
//   undefined4 DAT_0065877d
//   undefined4 DAT_00658785
//   undefined4 DAT_0065878d
//   undefined4 DAT_00658795
//   undefined4 DAT_0065879d
//   undefined4 DAT_006587a5
//   undefined4 DAT_006587ad
//   undefined4 DAT_006587b5
//   undefined4 DAT_006587bd
//   undefined4 DAT_006587c5
//   undefined4 DAT_006587c9
//   undefined4 DAT_006587d5
//   undefined4 DAT_006587dd
//   undefined4 DAT_006587e5
//   undefined4 DAT_006587ed
//   undefined4 DAT_006587f5
//   undefined4 DAT_006587fd
//   undefined4 DAT_00658805
//   undefined4 DAT_0065880d
//   undefined4 DAT_00658815
//   undefined4 DAT_006659c8
//   CConsole* g_CConsolePtr = 0083b1a4
//   CEventList* g_CEventListPtr = 02d05310
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_00823c50
//   CConsole g_ConsolePtr
//   undefined4 g_CDoorClassInfo.name_hash
//   CEventList g_CEventListInstance
//   undefined4 DAT_02d7a7b8
//   undefined4 DAT_02d81cbc
//   CGore g_CGoreInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_CVector_ctor_FUN_00410340
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
//   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_door.cpp_CDoor_FUN_00480de0
//   core_enemy.cpp_CEnemy_FUN_004a9fd0
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_gore.cpp_FUN_004edbb0
//   core_gore.cpp_FUN_004ede30
//   core_grave.cpp_FUN_004ee790
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052e2b0
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
//   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_zombie.cpp_CZombie_FUN_005fbd00
//   core_zombie.cpp_CZombie_FUN_005fca10
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005faea9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_zombie_cpp_CZombie_process_FUN_005f9470(CZombie *this_ptr)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CDemonActor_vtable *pCVar3;
  float fVar4;
  float fVar5;
  CCharacter *pCVar6;
  CEnemy *pCVar7;
  int iVar8;
  CMotionList *pCVar9;
  uint uVar10;
  float fVar11;
  CVector3f *pCVar12;
  CZombie *pCVar13;
  undefined2 extraout_var;
  int iVar14;
  CBoundingBox3D *pCVar15;
  float *pfVar16;
  CVector3f *pCVar17;
  int extraout_EAX;
  int extraout_EAX_00;
  CDemonActor *pCVar18;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  char *pcVar19;
  int iVar20;
  char *pcVar21;
  char cVar22;
  float10 fVar23;
  float10 fVar24;
  double dVar25;
  float in_stack_00000008;
  undefined4 uVar26;
  char *in_stack_fffffc54;
  SCollisionInfo *in_stack_fffffc58;
  SDamageInfo local_370;
  char local_334 [32];
  undefined1 local_314 [48];
  CBoundingBox3D local_2e4;
  CBoundingBox3D local_2cc;
  CBoundingBox3D local_2b4;
  CVector3f local_29c;
  CVector3f local_290;
  float local_284;
  float local_280;
  float local_27c;
  CVector3f local_278;
  CVector3f local_26c;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  CVector3f local_248;
  float local_23c;
  float local_238;
  float local_234;
  CVector3f local_230;
  float local_224;
  float local_220;
  float local_21c;
  CVector3f local_218;
  CVector3f local_20c;
  undefined4 local_200;
  undefined4 local_1fc;
  float local_1f8;
  CVector3f local_1f4;
  CVector3f local_1e8;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  CVector3f local_1d0;
  CVector3f local_1c4;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198;
  CVector3f local_194;
  CVector3f local_188;
  CVector3f local_17c;
  CVector3f local_170;
  CVector3f local_164;
  CVector3f local_158;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  CVector3f local_140;
  float local_134;
  float local_130;
  float local_12c;
  CVector3f local_128;
  CVector3f local_11c;
  float local_110;
  float local_10c;
  float local_108;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3f local_b0;
  CVector3f local_a4;
  double local_98;
  double local_88;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f *local_68;
  float local_5c;
  CDemonActor *local_58;
  SCollisionInfo *local_54;
  float local_50;
  float local_4c;
  int local_48;
  float local_44;
  int local_40;
  float local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  CLocation *local_24;
  CDeformableModelInstance *local_20;
  float local_1c;
  SCollisionInfo *local_18;
  SCollisionInfo *local_14;
  
  iVar8 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar8 == 0) {
    return;
  }
  local_38 = 0;
  pCVar9 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&(this_ptr->base_enemy).base_character.model.motion_controller);
  iVar8 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(pCVar9);
  if (iVar8 == 0x16) {
    local_38 = 1;
  }
  pCVar18 = (this_ptr->base_enemy).base_character.grabbed_by;
  if (pCVar18 != (CDemonActor *)0x0) {
    pCVar3 = pCVar18->vtable;
    pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (&(this_ptr->base_enemy).base_character.model,&local_1d0,0);
    fVar11 = (*pCVar3[1].cylinderGroundCheck)(pCVar18,(float)this_ptr,pCVar12);
    if (fVar11 != 0.0) {
      return;
    }
    (this_ptr->base_enemy).base_character.grabbed_by = (CDemonActor *)0x0;
    return;
  }
  if (0.0 < *(float *)(this_ptr->field4_0xbf48 + 0x4c)) {
    *(float *)(this_ptr->field4_0xbf48 + 0x4c) =
         *(float *)(this_ptr->field4_0xbf48 + 0x4c) - in_stack_00000008;
  }
  local_20 = &(this_ptr->base_enemy).base_character.model;
  local_7c = in_stack_00000008 * (this_ptr->base_enemy).speed;
LAB_005f9504:
  pCVar2 = local_20;
  if (0.0 < local_7c) {
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_20->motion_controller);
    if (uVar10 < 0xb) {
      if (uVar10 < 5) {
        if (uVar10 == 2) {
          iVar8 = *(int *)(this_ptr->field1_0xbeb4 + 0x18);
          if (iVar8 != 0) {
            this_ptr->field1_0xbeb4[0x18] = '\0';
            this_ptr->field1_0xbeb4[0x19] = '\0';
            this_ptr->field1_0xbeb4[0x1a] = '\0';
            this_ptr->field1_0xbeb4[0x1b] = '\0';
            iVar14 = core_zombie_cpp_CZombie_FUN_005fbd00();
            if (-1 < iVar14) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0((CCharacter *)this_ptr);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",this_ptr,iVar8,iVar14);
            }
          }
        }
        else {
LAB_005f9541:
          core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
        }
        goto LAB_005f9504;
      }
      if (uVar10 < 6) {
        if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0) {
          local_74 = DAT_006659c8;
          local_290.x = 0.0;
          local_290.y = 0.0;
          local_290.z = DAT_006659c8;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    ((CDemonActor *)this_ptr,&local_26c,&local_290);
          iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
          local_1a0 = local_26c.x - *(float *)(iVar8 + 0x20);
          local_198 = local_26c.z - *(float *)(iVar8 + 0x28);
          local_19c = 0;
          if (SQRT(local_198 * local_198 + local_1a0 * local_1a0) <= 1.0) {
            local_188.y = 4.0;
            local_188.x = 0.0;
            local_188.z = 0.0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&local_230,&local_188);
            iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
            local_158.x = *(float *)(iVar8 + 0x20);
            local_158.z = *(float *)(iVar8 + 0x28);
            local_158.y = local_230.y;
            core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                      (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4));
            iVar8 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                              (g_CDemonSetPtr,&local_230,&local_158);
            core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
            if ((iVar8 != 0) ||
               (iVar14 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) +
                                              0x154) + 0x100))(), iVar14 != 0)) {
              if (iVar8 != 0) {
                core_zombie_cpp_CZombie_FUN_005fca10();
              }
              goto LAB_005f9504;
            }
          }
        }
        core_zombie_cpp_CZombie_FUN_005fca10();
        goto LAB_005f9504;
      }
      if (uVar10 != 10) {
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
        goto LAB_005f9504;
      }
      if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (local_20,&local_29c,*(int *)(this_ptr->field4_0xbf48 + 4));
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_248,pCVar12);
        if (*(int *)(this_ptr->field4_0xbf48 + 0x40) < 0) {
          iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
          fVar11 = local_248.x - *(float *)(iVar8 + 0x20);
          fVar4 = local_248.z - *(float *)(iVar8 + 0x28);
          if ((float)_DAT_0065880d < SQRT(fVar4 * fVar4 + fVar11 * fVar11)) {
            core_zombie_cpp_CZombie_FUN_005fca10();
            goto LAB_005f9504;
          }
        }
        else {
          pCVar13 = (CZombie *)
                    (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154
                                         ) + 0x108))();
          if (pCVar13 != this_ptr) {
            core_zombie_cpp_CZombie_FUN_005fca10();
            goto LAB_005f9504;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffc54);
        in_stack_fffffc58 = (SCollisionInfo *)core_actor_cpp_getRandomFloat_FUN_0040cc10(15.0,25.0);
        local_14 = in_stack_fffffc58;
        (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0x11c))
                  ();
        local_98 = (double)(float)in_stack_fffffc58;
        if (0.0 < local_98) {
          fVar23 = (float10)(float)in_stack_fffffc58 * (float10)_DAT_006587cd *
                   (float10)_DAT_006587d5;
          uVar26 = 0;
          dVar25 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44(extraout_EDX,
                                               CONCAT22(extraout_var,
                                                        (ushort)(0.0 < local_98) << 8 |
                                                        (ushort)NAN(local_98) << 10 |
                                                        (ushort)(local_98 == 0.0) << 0xe)));
          local_80 = (int)ROUND(fVar23);
          core_gore_cpp_FUN_004edbb0
                    (&local_248,(int)((ulonglong)dVar25 >> 0x20),this_ptr,local_80,g_CGorePtr,
                     &local_248,0,local_80,uVar26);
        }
        iVar8 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) +
                            0x120))();
        if (0 < iVar8) {
          (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0x104)
          )();
          core_zombie_cpp_CZombie_FUN_005fca10();
        }
        (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                  ((CDemonActor *)this_ptr,"ghoul-eat-?.wav");
        goto LAB_005f9504;
      }
      core_zombie_cpp_CZombie_FUN_005fca10();
    }
    else if (uVar10 < 0xc) {
      iVar8 = core_zombie_cpp_CZombie_FUN_005fbd00();
      if (iVar8 < 0) {
        g_CurrentFilename = "..\\core\\zombie.cpp";
        g_CurrentLineNumber = 0x1ee;
        core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
      }
      pCVar18 = (this_ptr->base_enemy).base_character.carry_hands[iVar8].carry_actor;
      if (pCVar18 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s lugging %s\n",this_ptr,pCVar18);
        local_14c = 0;
        local_148 = 0x40c00000;
        local_144 = 0x41880000;
        (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].renderTargetPoints)
                  ((CDemonActor *)this_ptr);
        in_stack_fffffc54 = "zom-h0?.wav";
        (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar10 < 0xd) {
      iVar8 = core_zombie_cpp_CZombie_FUN_005fbd00();
      if (iVar8 < 0) {
        g_CurrentFilename = "..\\core\\zombie.cpp";
        g_CurrentLineNumber = 0x205;
        core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
      }
      pCVar18 = (this_ptr->base_enemy).base_character.carry_hands[iVar8].carry_actor;
      if (pCVar18 != (CDemonActor *)0x0) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s tossing %s\n",this_ptr,pCVar18);
        local_23c = 0.0;
        local_238 = 0.0;
        local_234 = 1.0;
        if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0) {
          pCVar18 = (this_ptr->base_enemy).base_character.carry_hands[iVar8].carry_actor;
          pCVar15 = (*pCVar18->vtable->getBoundingBox)(pCVar18,&local_2e4);
          local_224 = (pCVar15->min).x + (pCVar15->max).x;
          local_220 = (pCVar15->min).y + (pCVar15->max).y;
          local_ec.x = local_224 * _DAT_006587c5;
          local_21c = (pCVar15->min).z + (pCVar15->max).z;
          local_ec.y = local_220 * _DAT_006587c5;
          local_ec.z = local_21c * _DAT_006587c5;
          pCVar12 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              ((this_ptr->base_enemy).base_character.carry_hands[iVar8].carry_actor,
                               &local_c8,&local_ec);
          in_stack_fffffc58 = (SCollisionInfo *)local_314;
          pfVar16 = (float *)(**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4
                                                           ) + 0x154) + 0x14))();
          local_1dc = *pfVar16 + pfVar16[3];
          local_1d8 = pfVar16[1] + pfVar16[4];
          local_f8.x = local_1dc * _DAT_006587c5;
          local_1d4 = pfVar16[2] + pfVar16[5];
          local_f8.y = local_1d8 * _DAT_006587c5;
          local_f8.z = local_1d4 * _DAT_006587c5;
          pCVar17 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                              (*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4),&local_b0
                               ,&local_f8);
          local_1e8.x = pCVar17->x - pCVar12->x;
          local_1e8.y = pCVar17->y - pCVar12->y;
          local_1e8.z = pCVar17->z - pCVar12->z;
          local_2c = SQRT(local_1e8.z * local_1e8.z +
                          local_1e8.x * local_1e8.x + local_1e8.y * local_1e8.y);
          if (0.0 < local_2c) {
            pCVar12 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                                ((CDemonActor *)this_ptr,&local_278,&local_1e8);
            local_cc = 1.0 / local_2c;
            local_d4 = pCVar12->x * local_cc;
            local_d0 = pCVar12->y * local_cc;
            local_cc = local_cc * pCVar12->z;
            if (&local_23c != &local_d4) {
              local_23c = local_d4;
              local_238 = local_d0;
              local_234 = local_cc;
            }
          }
        }
        local_23c = local_23c * _DAT_006587c9;
        local_234 = local_234 * _DAT_006587c9;
        local_238 = local_238 * _DAT_006587c9 + _DAT_00658805;
        (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].renderTargetPoints)
                  ((CDemonActor *)this_ptr);
        in_stack_fffffc54 = "zom-h0?.wav";
        (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                  ((CDemonActor *)this_ptr,"zom-h0?.wav");
      }
    }
    else if (uVar10 < 0xe) {
      if (*(CDoor **)(this_ptr->field1_0xbeb4 + 0x24) != (CDoor *)0x0) {
        core_door_cpp_CDoor_FUN_00480de0(*(CDoor **)(this_ptr->field1_0xbeb4 + 0x24));
        (**(code **)(*(int *)(*(int *)(this_ptr->field1_0xbeb4 + 0x24) + 0x154) + 0x24))();
        this_ptr->field1_0xbeb4[0x24] = '\0';
        this_ptr->field1_0xbeb4[0x25] = '\0';
        this_ptr->field1_0xbeb4[0x26] = '\0';
        this_ptr->field1_0xbeb4[0x27] = '\0';
      }
    }
    else {
      if (uVar10 < 0x65) goto LAB_005f9541;
      if (uVar10 < 0x66) {
        (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                  ((CDemonActor *)this_ptr,"fall-?.wav");
      }
      else if (uVar10 == 0x29a) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_11c,*(int *)(this_ptr->field4_0xbf48 + 4));
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_104,pCVar12);
        core_gore_cpp_FUN_004edbb0();
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar8 == 0) {
          pcVar19 = "ghoul-dig-?.wav";
        }
        else {
          pcVar19 = "ghoul-eat-?.wav";
        }
        pcVar21 = local_334;
        do {
          cVar22 = *pcVar19;
          *pcVar21 = cVar22;
          if (cVar22 == '\0') break;
          cVar22 = pcVar19[1];
          pcVar19 = pcVar19 + 2;
          pcVar21[1] = cVar22;
          pcVar21 = pcVar21 + 2;
        } while (cVar22 != '\0');
        (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                  ((CDemonActor *)this_ptr,local_334);
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40((CCharacter *)this_ptr);
      }
    }
    goto LAB_005f9504;
  }
  fVar11 = (this_ptr->base_enemy).speed;
  fVar5 = (float)_DAT_0065877d;
  fVar4 = (float)_DAT_00658785;
  iVar8 = *(int *)(this_ptr->field4_0xbf48 + 0x3c);
  *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
       *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
  *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
       in_stack_00000008 * fVar5 * fVar11 * fVar4;
  if (((((this_ptr->base_enemy).base_character.model.part_visibility_flags[iVar8] == 0) &&
       ((this_ptr->base_enemy).base_character.model.part_visibility_flags
        [*(int *)(this_ptr->field4_0xbf48 + 0x34)] == 0)) ||
      ((this_ptr->base_enemy).base_character.model.part_visibility_flags
       [*(int *)(this_ptr->field4_0xbf48 + 0x48)] == 0)) &&
     ((0.0 <= *(float *)(this_ptr->field4_0xbf48 + 0x50) &&
      (fVar11 = *(float *)(this_ptr->field4_0xbf48 + 0x50) + in_stack_00000008,
      *(float *)(this_ptr->field4_0xbf48 + 0x50) = fVar11, (float)_DAT_0065878d <= fVar11)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_370);
    local_370.damage_amount = 9999.9;
    local_370.attacker = (CDemonActor *)this_ptr;
    local_370.wielder = (CDemonActor *)this_ptr;
    (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].playAmbientSoundWithVolume)
              ((CDemonActor *)this_ptr,(char *)&local_370,(float)in_stack_fffffc54);
    this_ptr->field4_0xbf48[0x50] = '\0';
    this_ptr->field4_0xbf48[0x51] = '\0';
    this_ptr->field4_0xbf48[0x52] = -0x80;
    this_ptr->field4_0xbf48[0x53] = -0x41;
  }
  pCVar2 = &(this_ptr->base_enemy).base_character.model;
  iVar8 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar2->motion_controller);
  iVar8 = *(int *)(iVar8 + 0x24);
  local_48 = 0;
  iVar14 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar14 == 0) {
    local_34 = -1.0;
    local_4c = 0.3;
    iVar8 = core_motion_cpp_CMotionController_FUN_0052dab0(&pCVar2->motion_controller);
    uVar10 = *(uint *)(iVar8 + 0x24);
    if (uVar10 < 8) {
      if (uVar10 == 0) {
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(in_stack_00000008 * (float)_DAT_006587bd);
        if (iVar8 != 0) {
          pCVar9 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                             (&(this_ptr->base_enemy).base_character.model.motion_controller);
          iVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar9);
          if (-1 < iVar8) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base_enemy).base_character.model.motion_controller,0x10,1);
            goto LAB_005fa18b;
          }
        }
        core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
        if (extraout_EAX != 0) {
          core_zombie_cpp_CZombie_FUN_005fca10();
        }
        (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                  ((CDemonActor *)this_ptr);
        if ((*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) && (local_38 != 0)) {
          iVar8 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                    hasCollision)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffc58);
          if (iVar8 == 0) goto LAB_005fa18b;
          g_CGamePtr->field73_0x220 = 1;
          *(CHero **)((this_ptr->base_enemy).field6_0xbe38 + 4) = g_HeroActors[g_LocalHeroIndex];
        }
        if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0) {
          core_zombie_cpp_CZombie_FUN_005fca10();
          iVar8 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
          if (iVar8 == 0) {
            if (*(int *)this_ptr->field4_0xbf48 == 0) {
              uVar26 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                                 ((CDemonActor *)this_ptr,"zom-a0?.wav");
              *(undefined4 *)(this_ptr->field4_0xbf48 + 0x58) = uVar26;
            }
            else {
              uVar26 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                                 ((CDemonActor *)this_ptr,"f-zombie-alert?.wav");
              *(undefined4 *)(this_ptr->field4_0xbf48 + 0x58) = uVar26;
            }
          }
        }
      }
      else if (uVar10 < 2) {
        iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                  ((CDemonActor *)this_ptr);
        if (((*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) && (local_38 != 0)) &&
           (iVar14 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].
                       hasCollision)((CDemonActor *)g_HeroActors[g_LocalHeroIndex],in_stack_fffffc58
                                    ), iVar14 != 0)) {
          g_CGamePtr->field73_0x220 = 1;
          *(CHero **)((this_ptr->base_enemy).field6_0xbe38 + 4) = g_HeroActors[g_LocalHeroIndex];
        }
        if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) {
          core_enemy_cpp_CEnemy_FUN_004a9fd0(&this_ptr->base_enemy);
          if (extraout_EAX_00 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
          }
        }
        else if (iVar8 == 0) {
          iVar8 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
          if (iVar8 == 0) {
            if (*(int *)this_ptr->field4_0xbf48 == 0) {
              pcVar19 = "zom-a0?.wav";
            }
            else {
              pcVar19 = "f-zombie-alert?.wav";
            }
            uVar26 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
                               ((CDemonActor *)this_ptr,pcVar19);
            *(undefined4 *)(this_ptr->field4_0xbf48 + 0x58) = uVar26;
          }
LAB_005fa85e:
          core_zombie_cpp_CZombie_FUN_005fca10();
        }
        else {
          cVar22 = (this_ptr->base_enemy).base_character.model.part_visibility_flags
                   [*(int *)(this_ptr->field4_0xbf48 + 0x34)] != 0;
          if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
              [*(int *)(this_ptr->field4_0xbf48 + 0x3c)] != 0) {
            cVar22 = cVar22 + '\x01';
          }
          pCVar6 = &(this_ptr->base_enemy).base_character;
          (pCVar6->model).field17_0x2254[8] = '\0';
          (pCVar6->model).field17_0x2254[9] = '\0';
          (pCVar6->model).field17_0x2254[10] = '\0';
          (pCVar6->model).field17_0x2254[0xb] = '\0';
          *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4) =
               *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
          *(undefined4 *)(this_ptr->base_enemy).base_character.model.field17_0x2254 =
               *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4);
          iVar8 = core_zombie_cpp_CZombie_PickupSomethingPossibly_FUN_005fb530();
          if (iVar8 == 0) {
            local_50 = DAT_006659c8;
            local_40 = core_zombie_cpp_CZombie_FUN_005fbd00();
            if (((-1 < local_40) &&
                (pCVar18 = (this_ptr->base_enemy).base_character.carry_hands[local_40].carry_actor,
                pCVar18 != (CDemonActor *)0x0)) && (*(int *)(this_ptr->field1_0xbeb4 + 0x1c) == 1))
            {
              local_44 = 1.0;
              if (pCVar18 != (CDemonActor *)0x0) {
                pCVar15 = (*pCVar18->vtable->getBoundingBox)(pCVar18,&local_2cc);
                local_14 = (SCollisionInfo *)&pCVar15->max;
                core_actor_cpp_CVector_ctor_FUN_00410340(&local_194);
                local_194.x = (float)local_14->ray_type - (pCVar15->min).x;
                local_194.y = local_14->field1_0x4 - (pCVar15->min).y;
                local_194.z = local_14->field2_0x8 - (pCVar15->min).z;
                local_44 = local_194.z * (float)_DAT_00658785 + 1.0;
              }
              local_50 = local_44;
            }
            local_200 = 0;
            local_1f8 = local_50;
            local_1fc = 0;
            (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0xbc
                        ))();
            iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
            pCVar2 = &(this_ptr->base_enemy).base_character.model;
            if (iVar8 < 0) {
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
            }
            else if (iVar8 < 1) {
              iVar14 = core_zombie_cpp_CZombie_FUN_005fbd00();
              iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
              local_1ac = (this_ptr->base_enemy).base_character.base_actor.location.position.x -
                          *(float *)(iVar8 + 0x20);
              local_1a8 = (this_ptr->base_enemy).base_character.base_actor.location.position.y -
                          *(float *)(iVar8 + 0x24);
              local_1a4 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                          *(float *)(iVar8 + 0x28);
              if (SQRT(local_1a4 * local_1a4 + local_1ac * local_1ac + local_1a8 * local_1a8) <
                  (float)_DAT_006587ad) {
                pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                    ((CDemonActor *)this_ptr,&local_20c,
                                     (CVector3f *)
                                     (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x20));
                pCVar12 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                    (&local_218,pCVar12);
                if (((ABS(pCVar12->y) < (float)_DAT_006587b5) && (-1 < iVar14)) &&
                   (uVar10 = *(uint *)(this_ptr->field1_0xbeb4 + 0x1c), 1 < uVar10)) {
                  if (uVar10 < 3) {
                    if ((this_ptr->base_enemy).base_character.carry_hands[iVar14].carry_actor !=
                        (CDemonActor *)0x0) {
                      engine_console_cpp_CConsole_printf_FUN_00441890
                                (g_CConsolePtr,"%s lugging\n",this_ptr);
                      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                                (&pCVar2->motion_controller,0xd,1);
                    }
                  }
                  else if ((uVar10 == 3) &&
                          ((this_ptr->base_enemy).base_character.carry_hands[iVar14].carry_actor !=
                           (CDemonActor *)0x0)) {
                    engine_console_cpp_CConsole_printf_FUN_00441890
                              (g_CConsolePtr,"%s tossing\n",this_ptr);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                              (&pCVar2->motion_controller,0xb,1);
                  }
                }
              }
            }
            else if (((cVar22 != '\0') && (*(float *)(this_ptr->base_enemy).field6_0xbe38 <= 0.0))
                    && (iVar8 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38
                                                              + 4) + 0x154) + 0x108))(), iVar8 == 0)
                    ) {
              if ((local_40 < 0) ||
                 ((this_ptr->base_enemy).base_character.carry_hands[local_40].carry_actor ==
                  (CDemonActor *)0x0)) {
                if ((local_38 == 0) ||
                   (iVar8 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4)
                                                 + 0x154) + 0x120))(), iVar8 == 0)) {
                  iVar8 = 3;
                }
                else {
                  iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
                  if (iVar8 == 0) {
                    iVar8 = 0x19;
                  }
                  else {
                    iVar8 = 0x18;
                  }
                }
              }
              else {
                iVar8 = 2;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base_enemy).base_character.model.motion_controller,iVar8,1);
              (this_ptr->base_enemy).field6_0xbe38[0] = -0x33;
              (this_ptr->base_enemy).field6_0xbe38[1] = -0x34;
              (this_ptr->base_enemy).field6_0xbe38[2] = 'L';
              (this_ptr->base_enemy).field6_0xbe38[3] = '?';
            }
          }
        }
      }
      else if (uVar10 < 3) {
        if (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) == 0) {
LAB_005fac96:
          core_zombie_cpp_CZombie_FUN_005fca10();
        }
        else {
          iVar8 = core_zombie_cpp_CZombie_FUN_005fbd00();
          if ((((iVar8 < 0) ||
               (iVar14 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) +
                                              0x154) + 0x120))(), 0 < iVar14)) ||
              ((this_ptr->base_enemy).base_character.carry_hands[iVar8].carry_actor ==
               (CDemonActor *)0x0)) ||
             (iVar14 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) +
                                            0x154) + 0x108))(), iVar14 != 0)) {
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s gave up swing\n",this_ptr);
            core_zombie_cpp_CZombie_FUN_005fca10();
          }
          else {
            pCVar18 = (this_ptr->base_enemy).base_character.carry_hands[iVar8].carry_actor;
            local_3c = 1.0;
            if (pCVar18 != (CDemonActor *)0x0) {
              pCVar15 = (*pCVar18->vtable->getBoundingBox)
                                  (pCVar18,(CBoundingBox3D *)(local_314 + 0x18));
              local_68 = &local_1f4;
              core_actor_cpp_CVector_ctor_FUN_00410340(local_68);
              local_1f4.x = (pCVar15->max).x - (pCVar15->min).x;
              local_1f4.y = (pCVar15->max).y - (pCVar15->min).y;
              local_1f4.z = (pCVar15->max).z - (pCVar15->min).z;
              local_3c = local_68->z * (float)_DAT_00658785 + local_3c;
            }
            local_34 = local_3c;
            local_54 = (SCollisionInfo *)core_motion_cpp_CMotionController_FUN_0052e2b0();
            local_88 = (double)(float)local_54;
            local_14 = local_54;
            if ((1.0 <= local_88) && (local_88 <= _DAT_006587a5)) {
              local_48 = 1;
            }
          }
        }
      }
      else if (uVar10 == 3) {
        iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if ((iVar8 == 0) || (iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x120))(), 0 < iVar8))
        goto LAB_005fa85e;
        pCVar13 = (CZombie *)
                  (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154)
                              + 0x108))();
        if (pCVar13 == (CZombie *)0x0) {
          local_34 = DAT_006659c8;
          local_4c = 3.0;
        }
        else if (pCVar13 != this_ptr) goto LAB_005fac96;
      }
    }
    else if (uVar10 < 9) {
      if (((this_ptr->base_enemy).pool_me == 0) &&
         ((this_ptr->base_enemy).base_character.base_actor.field11_0xdc == 0)) {
        pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                            (pCVar2,&local_a4,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                  ((CDemonActor *)this_ptr,&local_1c4,pCVar12);
        core_gore_cpp_FUN_004ede30();
        (this_ptr->base_enemy).pool_me = 1;
      }
    }
    else {
      pCVar1 = &(this_ptr->base_enemy).base_character.base_actor.location;
      if (uVar10 < 0x18) {
        if (0xd < uVar10) {
          if (uVar10 < 0xf) {
            iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                              (g_CEventListPtr,this_ptr->field1_0xbeb4 + 0x28);
            if ((iVar8 != 0) &&
               (fVar11 = *(float *)(this_ptr->field4_0xbf48 + 0x5c) - in_stack_00000008,
               *(float *)(this_ptr->field4_0xbf48 + 0x5c) = fVar11, fVar11 < 0.0)) {
              iVar8 = 0;
              local_28 = 0;
              *(float *)(this_ptr->field4_0xbf48 + 0x5c) =
                   *(float *)(this_ptr->field4_0xbf48 + 0x5c) + 1.0;
              local_24 = pCVar1;
              for (; local_28 < g_CDemonSetPtr->damage_listener_count; local_28 = local_28 + 1) {
                iVar14 = *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar8 + -4);
                iVar20 = (**(code **)(*(int *)(iVar14 + 0x154) + 0xf8))();
                if (iVar20 != 0) {
                  local_1b8 = *(float *)(iVar14 + 0x20) - (local_24->position).x;
                  local_1b4 = *(float *)(iVar14 + 0x24) - (local_24->position).y;
                  local_1b0 = *(float *)(iVar14 + 0x28) - (local_24->position).z;
                  if ((ABS(local_1b4) <= (float)_DAT_00658815) &&
                     (local_1b4 = 0.0,
                     SQRT(local_1b0 * local_1b0 + local_1b8 * local_1b8) <=
                     (this_ptr->base_enemy).guard_distance)) {
                    engine_console_cpp_CConsole_printf_FUN_00441890
                              (g_CConsolePtr,"%s rising from the grave\n",this_ptr);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                              (&(this_ptr->base_enemy).base_character.model.motion_controller,0xf,1)
                    ;
                    if (*(int *)(this_ptr->field1_0xbeb4 + 0x20) != 0) {
                      core_grave_cpp_FUN_004ee790();
                      this_ptr->field1_0xbeb4[0x20] = '\0';
                      this_ptr->field1_0xbeb4[0x21] = '\0';
                      this_ptr->field1_0xbeb4[0x22] = '\0';
                      this_ptr->field1_0xbeb4[0x23] = '\0';
                    }
                    (this_ptr->base_enemy).guard_distance = 100.0;
                    break;
                  }
                }
                iVar8 = iVar8 + 4;
              }
            }
          }
          else if (uVar10 == 0x14) {
            (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                      ((CDemonActor *)this_ptr);
            iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
            if (((iVar8 != 0) &&
                (fVar11 = (pCVar1->position).x - *(float *)(iVar8 + 0x20),
                fVar4 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                        *(float *)(iVar8 + 0x28),
                SQRT(fVar4 * fVar4 + fVar11 * fVar11) <= (float)_DAT_0065879d)) &&
               (ABS((this_ptr->base_enemy).base_character.base_actor.location.position.y -
                    *(float *)(iVar8 + 0x24)) <= (float)_DAT_006587a5)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
            }
          }
        }
      }
      else if ((uVar10 < 0x19) || (uVar10 < 0x1a)) {
        iVar8 = (*(g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable[1].hasCollision
                )((CDemonActor *)g_HeroActors[g_LocalHeroIndex],(SCollisionInfo *)in_stack_fffffc54)
        ;
        if ((iVar8 == 0) &&
           ((*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                      ((CDemonActor *)this_ptr),
           *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0)) {
LAB_005fa279:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
        }
      }
      else if ((uVar10 == 0x1c) &&
              (fVar11 = *(float *)(this_ptr->field4_0xbf48 + 0x60) - in_stack_00000008,
              *(float *)(this_ptr->field4_0xbf48 + 0x60) = fVar11, fVar11 <= 0.0)) {
        pCVar3 = (this_ptr->base_enemy).base_character.base_actor.vtable;
        this_ptr->field4_0xbf48[0x60] = '\0';
        this_ptr->field4_0xbf48[0x61] = '\0';
        this_ptr->field4_0xbf48[0x62] = '\0';
        this_ptr->field4_0xbf48[99] = '\0';
        (*pCVar3[1].getAllowedMeleeAttackTypes)((CDemonActor *)this_ptr);
        iVar8 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if (iVar8 != 0) {
          local_254 = (pCVar1->position).x - *(float *)(iVar8 + 0x20);
          local_250 = (this_ptr->base_enemy).base_character.base_actor.location.position.y -
                      *(float *)(iVar8 + 0x24);
          local_24c = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                      *(float *)(iVar8 + 0x28);
          if (&local_134 != &local_254) {
            local_134 = local_254;
            local_130 = local_250;
            local_12c = local_24c;
          }
          local_1c = local_12c * local_12c + local_134 * local_134 + local_130 * local_130;
          local_5c = (float)(((int)local_1c >> 1) + DAT_02d7a7b8);
          if (local_5c <= (float)_DAT_00658795) {
            local_30 = *(float *)((this_ptr->base_enemy).base_character.cloth_data + 0x358);
            if (local_30 < *(float *)((this_ptr->base_enemy).base_character.cloth_data + 0x354)) {
              local_30 = *(float *)((this_ptr->base_enemy).base_character.model.field15_0x2238 +
                                   0x10);
            }
            if (local_30 < *(float *)((this_ptr->base_enemy).base_character.cloth_data + 0x354)) {
              local_30 = *(float *)((this_ptr->base_enemy).base_character.cloth_data + 0x354) +
                         (float)_DAT_00658785;
            }
            iVar8 = 0;
            do {
              local_78 = (float)iVar8 * (float)_DAT_006587dd * (float)_DAT_006587d5;
              local_14 = (SCollisionInfo *)iVar8;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar23 = (float10)fcos((float10)local_78);
              fVar24 = (float10)fsin((float10)local_78);
              local_18 = (SCollisionInfo *)
                         core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                                   (g_CDemonSetPtr,
                                    (this_ptr->base_enemy).base_character.base_actor.location.
                                    position.x,
                                    (this_ptr->base_enemy).base_character.base_actor.location.
                                    position.z,(float)(fVar24 * (float10)_DAT_006587e5),
                                    (float)(fVar23 * (float10)_DAT_006587e5),
                                    *(float *)((this_ptr->base_enemy).base_character.cloth_data +
                                              0x348),
                                    (void *)((this_ptr->base_enemy).base_character.base_actor.
                                             location.position.y +
                                            *(float *)((this_ptr->base_enemy).base_character.
                                                       cloth_data + 0x354)),
                                    (void *)((this_ptr->base_enemy).base_character.base_actor.
                                             location.position.y + local_30));
              local_14 = local_18;
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              if ((float)local_18 < 1.0) break;
              iVar8 = iVar8 + 1;
            } while (iVar8 < 4);
            if (3 < iVar8) goto LAB_005fa279;
            this_ptr->field4_0xbf48[0x60] = '\0';
            this_ptr->field4_0xbf48[0x61] = '\0';
            this_ptr->field4_0xbf48[0x62] = '@';
            this_ptr->field4_0xbf48[99] = '@';
            (this_ptr->base_enemy).field6_0xbe38[4] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[5] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[6] = '\0';
            (this_ptr->base_enemy).field6_0xbe38[7] = '\0';
          }
        }
      }
    }
LAB_005fa18b:
    if ((0.0 <= local_34) && (*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0)) {
      fVar11 = (this_ptr->base_enemy).speed;
      fVar4 = (float)_DAT_006587ed;
      *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x28) =
           local_4c * (this_ptr->base_enemy).speed * in_stack_00000008;
      *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x2c) =
           in_stack_00000008 * fVar11 * fVar4;
      local_e0 = 0;
      local_d8 = local_34;
      local_dc = 0;
      (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0xbc))();
      iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
      if (iVar8 != 1) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s giving up attack\n",this_ptr);
        core_zombie_cpp_CZombie_FUN_005fca10();
        pCVar7 = &this_ptr->base_enemy;
        (pCVar7->base_character).field2_0x240c[0xc] = '\0';
        (pCVar7->base_character).field2_0x240c[0xd] = '\0';
        (pCVar7->base_character).field2_0x240c[0xe] = '\0';
        (pCVar7->base_character).field2_0x240c[0xf] = '\0';
      }
    }
  }
  else {
    uVar10 = *(uint *)((this_ptr->base_enemy).base_character.field11_0x25a0 + 0x10);
    if (uVar10 < 2) {
      if (uVar10 == 1) {
LAB_005f9ea6:
        if (iVar8 != 1) {
          core_zombie_cpp_CZombie_FUN_005fca10();
        }
      }
      else {
LAB_005fa14f:
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
      }
    }
    else {
      if (uVar10 < 3) goto LAB_005f9ea6;
      if (uVar10 != 3) goto LAB_005fa14f;
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base_enemy).base_character.model.motion_controller,0,1);
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
    }
    pCVar6 = &(this_ptr->base_enemy).base_character;
    (pCVar6->model).field17_0x2254[8] = '\0';
    (pCVar6->model).field17_0x2254[9] = '\0';
    (pCVar6->model).field17_0x2254[10] = '\0';
    (pCVar6->model).field17_0x2254[0xb] = '\0';
    *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4) =
         *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
    *(undefined4 *)(this_ptr->base_enemy).base_character.model.field17_0x2254 =
         *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4);
  }
  if (0.0 < *(float *)(this_ptr->base_enemy).field6_0xbe38) {
    *(float *)(this_ptr->base_enemy).field6_0xbe38 =
         *(float *)(this_ptr->base_enemy).field6_0xbe38 - in_stack_00000008;
  }
  iVar8 = core_motion_cpp_CMotionController_FUN_0052dab0
                    (&(this_ptr->base_enemy).base_character.model.motion_controller);
  pcVar19 = (this_ptr->base_enemy).base_character.model.field17_0x2254;
  iVar8 = *(int *)(iVar8 + 0x24);
  if (iVar8 == 0xe) {
    pCVar6 = &(this_ptr->base_enemy).base_character;
    (pCVar6->model).field17_0x2254[8] = '\0';
    (pCVar6->model).field17_0x2254[9] = '\0';
    (pCVar6->model).field17_0x2254[10] = '\0';
    (pCVar6->model).field17_0x2254[0xb] = '\0';
  }
  else {
    if (iVar8 != 0xf) {
      iVar14 = core_charactr_cpp_CCharacter_FUN_004297e0((CCharacter *)this_ptr);
      if (iVar14 != 0) {
        iVar14 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if ((iVar14 != 0) &&
           (pCVar13 = (CZombie *)(**(code **)(*(int *)(iVar14 + 0x154) + 0x108))(),
           pCVar13 == this_ptr)) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                    (g_CDemonSetPtr,*(CDemonActor **)((this_ptr->base_enemy).field6_0xbe38 + 4));
        }
        *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) =
             *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) -
             in_stack_00000008 * (float)_DAT_006587f5;
        local_260 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x1c) *
                    in_stack_00000008;
        local_25c = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x20) *
                    in_stack_00000008;
        pcVar19 = (this_ptr->base_enemy).base_character.field2_0x240c + 0x10;
        local_258 = in_stack_00000008 *
                    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x24);
        pcVar21 = (this_ptr->base_enemy).base_character.model.field17_0x2254;
        local_110 = local_260 + *(float *)pcVar19;
        local_10c = local_25c +
                    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
        local_108 = local_258 +
                    *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
        local_284 = local_110 + *(float *)pcVar21;
        local_280 = local_10c +
                    *(float *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4);
        local_27c = local_108 +
                    *(float *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
        pCVar7 = &this_ptr->base_enemy;
        (pCVar7->base_character).field2_0x240c[0x18] = '\0';
        (pCVar7->base_character).field2_0x240c[0x19] = '\0';
        (pCVar7->base_character).field2_0x240c[0x1a] = '\0';
        (pCVar7->base_character).field2_0x240c[0x1b] = '\0';
        *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14) =
             *(undefined4 *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x18);
        *(float *)pcVar19 = *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0x14);
        pCVar6 = &(this_ptr->base_enemy).base_character;
        (pCVar6->model).field17_0x2254[8] = '\0';
        (pCVar6->model).field17_0x2254[9] = '\0';
        (pCVar6->model).field17_0x2254[10] = '\0';
        (pCVar6->model).field17_0x2254[0xb] = '\0';
        uVar26 = *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
        *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4) = uVar26;
        *(undefined4 *)pcVar21 = uVar26;
        core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
        if ((iVar8 == 1) &&
           (pCVar18 = core_actor_cpp_castToClassHash_FUN_0040c790
                                (DAT_00823c50,g_CDoorClassInfo.name_hash), local_58 = pCVar18,
           pCVar18 != (CDemonActor *)0x0)) {
          pCVar15 = (*pCVar18->vtable->getBoundingBox)(pCVar18,&local_2b4);
          local_bc = (pCVar15->min).x + (pCVar15->max).x;
          local_b8 = (pCVar15->min).y + (pCVar15->max).y;
          local_164.x = local_bc * _DAT_006587c5;
          local_164.y = local_b8 * _DAT_006587c5;
          local_b4 = (pCVar15->min).z + (pCVar15->max).z;
          local_164.z = local_b4 * _DAT_006587c5;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar18,&local_17c,&local_164);
          pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                              ((CDemonActor *)this_ptr,&local_140,&local_17c);
          pCVar12 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (&local_128,pCVar12);
          if (ABS(pCVar12->y) < (float)_DAT_006587fd) {
            iVar14 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
            iVar20 = 0x12;
            if (iVar14 != 0) {
              iVar20 = 0x13;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(this_ptr->base_enemy).base_character.model.motion_controller,iVar20,1);
            *(CDemonActor **)(this_ptr->field1_0xbeb4 + 0x24) = local_58;
          }
        }
      }
      goto LAB_005f9f22;
    }
    pCVar12 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        ((CDemonActor *)this_ptr,&local_170,(CVector3f *)pcVar19);
    pCVar1 = &(this_ptr->base_enemy).base_character.base_actor.location;
    (pCVar1->position).x = pCVar12->x + (pCVar1->position).x;
    (this_ptr->base_enemy).base_character.base_actor.location.position.y =
         pCVar12->y + (this_ptr->base_enemy).base_character.base_actor.location.position.y;
    (this_ptr->base_enemy).base_character.base_actor.location.position.z =
         pCVar12->z + (this_ptr->base_enemy).base_character.base_actor.location.position.z;
    pCVar6 = &(this_ptr->base_enemy).base_character;
    (pCVar6->model).field17_0x2254[8] = '\0';
    (pCVar6->model).field17_0x2254[9] = '\0';
    (pCVar6->model).field17_0x2254[10] = '\0';
    (pCVar6->model).field17_0x2254[0xb] = '\0';
  }
  *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4) =
       *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 8);
  *(undefined4 *)pcVar19 =
       *(undefined4 *)((this_ptr->base_enemy).base_character.model.field17_0x2254 + 4);
LAB_005f9f22:
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  if (iVar8 != 0xe) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base_enemy).base_character.model);
    core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  }
  if ((this_ptr->base_enemy).pool_me == 0) {
    if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
        [*(int *)(this_ptr->field4_0xbf48 + 0x44)] != 0) {
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
          [*(int *)(this_ptr->field4_0xbf48 + 0x30)] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      }
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
          [*(int *)(this_ptr->field4_0xbf48 + 0x38)] != 0) {
        core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      }
    }
    core_charactr_cpp_CCharacter_FUN_0042b810((CCharacter *)this_ptr);
    if ((*(int *)(this_ptr->field4_0xbf48 + 0x40) < 0) &&
       ((this_ptr->base_enemy).base_character.model.part_visibility_flags
        [*(int *)(this_ptr->field4_0xbf48 + 0x44)] != 0)) {
      (this_ptr->base_enemy).base_character.model.part_visibility_flags
      [*(int *)(this_ptr->field4_0xbf48 + 0x44)] = 0;
      core_charactr_cpp_CCharacter_FUN_0042b760((CCharacter *)this_ptr);
      (this_ptr->base_enemy).base_character.model.part_visibility_flags
      [*(int *)(this_ptr->field4_0xbf48 + 0x44)] = 1;
    }
    core_charactr_cpp_CCharacter_FUN_0042b670((CCharacter *)this_ptr);
  }
  iVar8 = core_zombie_cpp_CZombie_FUN_005fbd00();
  if (((local_48 != 0) && (-1 < iVar8)) &&
     (pCVar18 = (this_ptr->base_enemy).base_character.carry_hands[iVar8].carry_actor,
     pCVar18 != (CDemonActor *)0x0)) {
    (*pCVar18->vtable->processMeleeHit)(pCVar18,2);
    return;
  }
  return;
}


// Assembly code:
// 005f9470: PUSH EBX
//   Label: core_zombie.cpp_CZombie_process_FUN_005f9470
// 005f9471: PUSH ESI
// 005f9472: PUSH EDI
// 005f9473: PUSH EBP
// 005f9474: MOV EBP,ESP
// 005f9476: SUB ESP,0x39c
// 005f947c: SUB EBP,0x7a
// 005f947f: MOV EBX,dword ptr [EBP + 0x8e]
// 005f9485: PUSH dword ptr [EBP + 0x92]
// 005f948b: PUSH EBX
// 005f948c: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 005f9491: ADD ESP,0x8
// 005f9494: TEST EAX,EAX
// 005f9496: JNZ 0x005f94a0
//   XREF to: 005f94a0 (CONDITIONAL_JUMP)
// 005f9498: LEA ESP,[EBP + 0x7a]
//   Label: LAB_005f9498
// 005f949b: POP EBP
// 005f949c: POP EDI
// 005f949d: POP ESI
// 005f949e: POP EBX
// 005f949f: RET
// 005f94a0: XOR EDX,EDX
//   Label: LAB_005f94a0
// 005f94a2: PUSH EDX
// 005f94a3: PUSH 0x6585ad
//   XREF to: 006585ad (DATA)
// 005f94a8: LEA EAX,[EBX + 0x158]
// 005f94ae: PUSH EAX
// 005f94af: MOV dword ptr [EBP + 0x52],EDX
// 005f94b2: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 005f94b7: ADD ESP,0x4
// 005f94ba: PUSH EAX
// 005f94bb: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 005f94c0: ADD ESP,0xc
// 005f94c3: CMP EAX,0x16
// 005f94c6: JNZ 0x005f94cf
//   XREF to: 005f94cf (CONDITIONAL_JUMP)
// 005f94c8: MOV dword ptr [EBP + 0x52],0x1
// 005f94cf: MOV ESI,dword ptr [EBX + 0x2598]
//   Label: LAB_005f94cf
// 005f94d5: TEST ESI,ESI
// 005f94d7: JNZ 0x005f954d
//   XREF to: 005f954d (CONDITIONAL_JUMP)
// 005f94d9: FLD float ptr [EBX + 0xbf94]
// 005f94df: FLDZ
// 005f94e1: FCOMPP
// 005f94e3: FNSTSW AX
// 005f94e5: SAHF
// 005f94e6: JC 0x005f958d
//   XREF to: 005f958d (CONDITIONAL_JUMP)
// 005f94ec: FLD float ptr [EBP + 0x92]
//   Label: LAB_005f94ec
// 005f94f2: LEA EAX,[EBX + 0x158]
// 005f94f8: FMUL float ptr [EBX + 0xbe24]
// 005f94fe: MOV dword ptr [EBP + 0x6a],EAX
// 005f9501: FSTP float ptr [EBP + 0xe]
// 005f9504: FLD float ptr [EBP + 0xe]
//   Label: LAB_005f9504
// 005f9507: FLDZ
// 005f9509: FCOMPP
// 005f950b: FNSTSW AX
// 005f950d: SAHF
// 005f950e: JNC 0x005f9e0c
//   XREF to: 005f9e0c (CONDITIONAL_JUMP)
// 005f9514: LEA EAX,[EBP + 0xe]
// 005f9517: PUSH EAX
// 005f9518: MOV ESI,dword ptr [EBP + 0x6a]
// 005f951b: PUSH ESI
// 005f951c: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005f9521: ADD ESP,0x8
// 005f9524: MOV EDX,EAX
// 005f9526: CMP EAX,0xb
// 005f9529: JNC 0x005f9db4
//   XREF to: 005f9db4 (CONDITIONAL_JUMP)
// 005f952f: CMP EAX,0x5
// 005f9532: JNC 0x005f9dee
//   XREF to: 005f9dee (CONDITIONAL_JUMP)
// 005f9538: CMP EAX,0x2
// 005f953b: JZ 0x005f990b
//   XREF to: 005f990b (CONDITIONAL_JUMP)
// 005f9541: PUSH EDX
//   Label: LAB_005f9541
// 005f9542: PUSH EBX
// 005f9543: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005f9548: ADD ESP,0x8
// 005f954b: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f954d: PUSH 0x0
//   Label: LAB_005f954d
// 005f954f: LEA EAX,[EBP + 0xfffffeba]
// 005f9555: PUSH EAX
// 005f9556: LEA EAX,[EBX + 0x158]
// 005f955c: PUSH EAX
// 005f955d: MOV EDI,dword ptr [ESI + 0x154]
// 005f9563: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005f9568: ADD ESP,0xc
// 005f956b: PUSH EAX
// 005f956c: PUSH EBX
// 005f956d: PUSH ESI
// 005f956e: CALL dword ptr [EDI + 0x124]
// 005f9574: ADD ESP,0xc
// 005f9577: TEST EAX,EAX
// 005f9579: JNZ 0x005f9498
//   XREF to: 005f9498 (CONDITIONAL_JUMP)
// 005f957f: MOV dword ptr [EBX + 0x2598],EAX
// 005f9585: LEA ESP,[EBP + 0x7a]
// 005f9588: POP EBP
// 005f9589: POP EDI
// 005f958a: POP ESI
// 005f958b: POP EBX
// 005f958c: RET
// 005f958d: FLD float ptr [EBX + 0xbf94]
//   Label: LAB_005f958d
// 005f9593: FSUB float ptr [EBP + 0x92]
// 005f9599: FSTP float ptr [EBX + 0xbf94]
// 005f959f: JMP 0x005f94ec
//   XREF to: 005f94ec (UNCONDITIONAL_JUMP)
// 005f95a4: MOV EDI,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005f95a4
// 005f95aa: MOV ESI,0x1
// 005f95af: TEST EDI,EDI
// 005f95b1: JNZ 0x005f95c1
//   XREF to: 005f95c1 (CONDITIONAL_JUMP)
// 005f95b3: PUSH EBX
//   Label: LAB_005f95b3
// 005f95b4: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005f95b9: ADD ESP,0x4
// 005f95bc: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f95c1: MOV EAX,[0x006659c8]
//   Label: LAB_005f95c1
//   XREF to: 006659c8 (READ)
// 005f95c6: MOV dword ptr [EBP + 0x16],EAX
// 005f95c9: XOR EAX,EAX
// 005f95cb: MOV dword ptr [EBP + 0xfffffdfa],EAX
// 005f95d1: MOV dword ptr [EBP + 0xfffffdfe],EAX
// 005f95d7: MOV EAX,dword ptr [EBP + 0x16]
// 005f95da: MOV dword ptr [EBP + 0xfffffe02],EAX
// 005f95e0: LEA EAX,[EBP + 0xfffffdfa]
// 005f95e6: PUSH EAX
// 005f95e7: LEA EAX,[EBP + 0xfffffe1e]
// 005f95ed: PUSH EAX
// 005f95ee: PUSH EBX
// 005f95ef: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005f95f4: FLD float ptr [EBP + 0xfffffe1e]
// 005f95fa: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005f9600: FLD float ptr [EBP + 0xfffffe22]
// 005f9606: FXCH
// 005f9608: FSUB float ptr [EAX + 0x20]
// 005f960b: FLD float ptr [EBP + 0xfffffe26]
// 005f9611: FXCH
// 005f9613: FSTP float ptr [EBP + 0xfffffeea]
// 005f9619: FXCH
// 005f961b: FSUB float ptr [EAX + 0x24]
// 005f961e: FLD float ptr [EBP + 0xfffffeea]
// 005f9624: FXCH
// 005f9626: FSTP float ptr [EBP + 0xfffffeee]
// 005f962c: FXCH
// 005f962e: FSUB float ptr [EAX + 0x28]
// 005f9631: FXCH
// 005f9633: FMUL float ptr [EBP + 0xfffffeea]
// 005f9639: FXCH
// 005f963b: FST float ptr [EBP + 0xfffffef2]
// 005f9641: FMUL float ptr [EBP + 0xfffffef2]
// 005f9647: FADDP
// 005f9649: FSQRT
// 005f964b: XOR ECX,ECX
// 005f964d: ADD ESP,0xc
// 005f9650: MOV dword ptr [EBP + 0xfffffeee],ECX
// 005f9656: FLD1
// 005f9658: FCOMPP
// 005f965a: FNSTSW AX
// 005f965c: SAHF
// 005f965d: JC 0x005f95b3
//   XREF to: 005f95b3 (CONDITIONAL_JUMP)
// 005f9663: TEST ESI,ESI
// 005f9665: JZ 0x005f9733
//   XREF to: 005f9733 (CONDITIONAL_JUMP)
// 005f966b: MOV dword ptr [EBP + 0xffffff06],0x40800000
// 005f9675: LEA EAX,[EBP + 0xffffff02]
// 005f967b: PUSH EAX
// 005f967c: LEA EAX,[EBP + 0xfffffe5a]
// 005f9682: PUSH EAX
// 005f9683: PUSH EBX
// 005f9684: MOV dword ptr [EBP + 0xffffff02],ECX
// 005f968a: MOV dword ptr [EBP + 0xffffff0a],ECX
// 005f9690: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005f9695: MOV EDX,dword ptr [EBX + 0xbe3c]
// 005f969b: MOV EAX,dword ptr [EDX + 0x20]
// 005f969e: ADD EDX,0x20
// 005f96a1: MOV dword ptr [EBP + 0xffffff32],EAX
// 005f96a7: LEA EAX,[EDX + 0x4]
// 005f96aa: MOV EAX,dword ptr [EAX]
// 005f96ac: MOV dword ptr [EBP + 0xffffff36],EAX
// 005f96b2: LEA EAX,[EDX + 0x8]
// 005f96b5: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005f96bb: MOV EAX,dword ptr [EAX]
// 005f96bd: ADD ESP,0xc
// 005f96c0: MOV dword ptr [EBP + 0xffffff3a],EAX
// 005f96c6: MOV EAX,dword ptr [EBP + 0xfffffe5e]
// 005f96cc: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005f96cd: MOV dword ptr [EBP + 0xffffff36],EAX
// 005f96d3: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005f96d8: ADD ESP,0x4
// 005f96db: PUSH EBX
// 005f96dc: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005f96e2: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005f96e3: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005f96e8: ADD ESP,0x8
// 005f96eb: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005f96f1: PUSH EAX
// 005f96f2: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005f96f8: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005f96f9: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005f96fe: ADD ESP,0x8
// 005f9701: LEA EAX,[EBP + 0xffffff32]
// 005f9707: PUSH EAX
// 005f9708: LEA EAX,[EBP + 0xfffffe5a]
// 005f970e: PUSH EAX
// 005f970f: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005f9715: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005f9716: CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
//   XREF to: 00572460 (UNCONDITIONAL_CALL)
// 005f971b: ADD ESP,0xc
// 005f971e: TEST EAX,EAX
// 005f9720: JZ 0x005f9724
//   XREF to: 005f9724 (CONDITIONAL_JUMP)
// 005f9722: XOR ESI,ESI
// 005f9724: MOV EDI,dword ptr [0x006810c8]
//   Label: LAB_005f9724
//   XREF to: 006810c8 (READ)
// 005f972a: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005f972b: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005f9730: ADD ESP,0x4
// 005f9733: TEST ESI,ESI
//   Label: LAB_005f9733
// 005f9735: JZ 0x005f9758
//   XREF to: 005f9758 (CONDITIONAL_JUMP)
// 005f9737: PUSH 0x0
// 005f9739: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005f973f: PUSH EBX
// 005f9740: MOV EDX,dword ptr [EAX + 0x154]
// 005f9746: PUSH EAX
// 005f9747: CALL dword ptr [EDX + 0x100]
// 005f974d: ADD ESP,0xc
// 005f9750: TEST EAX,EAX
// 005f9752: JZ 0x005f95b3
//   XREF to: 005f95b3 (CONDITIONAL_JUMP)
// 005f9758: TEST ESI,ESI
//   Label: LAB_005f9758
// 005f975a: JNZ 0x005f9504
//   XREF to: 005f9504 (CONDITIONAL_JUMP)
// 005f9760: PUSH EBX
// 005f9761: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005f9766: ADD ESP,0x4
// 005f9769: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f976e: CMP dword ptr [EBX + 0xbe3c],0x0
//   Label: LAB_005f976e
// 005f9775: JNZ 0x005f9785
//   XREF to: 005f9785 (CONDITIONAL_JUMP)
// 005f9777: PUSH EBX
// 005f9778: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005f977d: ADD ESP,0x4
// 005f9780: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f9785: MOV EDI,dword ptr [EBX + 0xbf4c]
//   Label: LAB_005f9785
// 005f978b: PUSH EDI
// 005f978c: LEA EAX,[EBP + 0xfffffdee]
// 005f9792: PUSH EAX
// 005f9793: MOV EAX,dword ptr [EBP + 0x6a]
// 005f9796: PUSH EAX
// 005f9797: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005f979c: ADD ESP,0xc
// 005f979f: PUSH EAX
// 005f97a0: LEA EAX,[EBP + 0xfffffe42]
// 005f97a6: PUSH EAX
// 005f97a7: PUSH EBX
// 005f97a8: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005f97ad: MOV EDX,dword ptr [EBX + 0xbf88]
// 005f97b3: ADD ESP,0xc
// 005f97b6: TEST EDX,EDX
// 005f97b8: JL 0x005f97e2
//   XREF to: 005f97e2 (CONDITIONAL_JUMP)
// 005f97ba: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005f97c0: PUSH EAX
// 005f97c1: MOV EDX,dword ptr [EAX + 0x154]
// 005f97c7: CALL dword ptr [EDX + 0x108]
// 005f97cd: ADD ESP,0x4
// 005f97d0: CMP EAX,EBX
// 005f97d2: JZ 0x005f981b
//   XREF to: 005f981b (CONDITIONAL_JUMP)
// 005f97d4: PUSH EBX
// 005f97d5: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005f97da: ADD ESP,0x4
// 005f97dd: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f97e2: MOV EAX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005f97e2
// 005f97e8: FLD float ptr [EBP + 0xfffffe42]
// 005f97ee: FSUB float ptr [EAX + 0x20]
// 005f97f1: FMUL ST0
// 005f97f3: FLD float ptr [EBP + 0xfffffe4a]
// 005f97f9: FSUB float ptr [EAX + 0x28]
// 005f97fc: FMUL ST0
// 005f97fe: FADDP
// 005f9800: FSQRT
// 005f9802: FCOMP double ptr [0x0065880d]
//   XREF to: 0065880d (READ)
// 005f9808: FNSTSW AX
// 005f980a: SAHF
// 005f980b: JBE 0x005f981b
//   XREF to: 005f981b (CONDITIONAL_JUMP)
// 005f980d: PUSH EBX
// 005f980e: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005f9813: ADD ESP,0x4
// 005f9816: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f981b: LEA EAX,[EBP + 0xfffffcde]
//   Label: LAB_005f981b
// 005f9821: PUSH EAX
// 005f9822: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005f9827: ADD ESP,0x4
// 005f982a: PUSH 0x41c80000
// 005f982f: PUSH 0x41700000
// 005f9834: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005f990b: MOV EAX,dword ptr [EBX + 0xbecc]
//   Label: LAB_005f990b
// 005f9911: TEST EAX,EAX
// 005f9913: JZ 0x005f9504
//   XREF to: 005f9504 (CONDITIONAL_JUMP)
// 005f9919: MOV EDX,dword ptr [EBX + 0xbed0]
// 005f991f: PUSH EDX
// 005f9920: PUSH EBX
// 005f9921: MOV EDI,EAX
// 005f9923: MOV dword ptr [EBX + 0xbecc],0x0
// 005f992d: CALL core_zombie.cpp_CZombie_FUN_005fbd00
//   XREF to: 005fbd00 (UNCONDITIONAL_CALL)
// 005f9932: ADD ESP,0x8
// 005f9935: MOV ESI,EAX
// 005f9937: TEST EAX,EAX
// 005f9939: JL 0x005f9504
//   XREF to: 005f9504 (CONDITIONAL_JUMP)
// 005f993f: PUSH 0x3e4ccccd
// 005f9944: PUSH EDI
// 005f9945: PUSH EAX
// 005f9946: PUSH EBX
// 005f9947: CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)
// 005f994c: ADD ESP,0x10
// 005f994f: PUSH ESI
// 005f9950: PUSH EDI
// 005f9951: PUSH EBX
// 005f9952: MOV EAX,0x6585c5
//   XREF to: 006585c5 (DATA)
// 005f9957: PUSH EAX
//   XREF to: 006585c5 (DATA)
// 005f9958: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005f995e: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005f995f: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005f9964: ADD ESP,0x14
// 005f9967: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f996c: PUSH 0x2
//   Label: LAB_005f996c
// 005f996e: PUSH EBX
// 005f996f: CALL core_zombie.cpp_CZombie_FUN_005fbd00
//   XREF to: 005fbd00 (UNCONDITIONAL_CALL)
// 005f9974: ADD ESP,0x8
// 005f9977: MOV ESI,EAX
// 005f9979: TEST EAX,EAX
// 005f997b: JL 0x005f99f3
//   XREF to: 005f99f3 (CONDITIONAL_JUMP)
// 005f997d: IMUL EAX,ESI,0x44
//   Label: LAB_005f997d
// 005f9980: ADD EAX,EBX
// 005f9982: MOV EDX,dword ptr [EAX + 0x24b4]
// 005f9988: TEST EDX,EDX
// 005f998a: JZ 0x005f9504
//   XREF to: 005f9504 (CONDITIONAL_JUMP)
// 005f9990: PUSH EDX
// 005f9991: PUSH EBX
// 005f9992: PUSH 0x6585fc
//   XREF to: 006585fc (DATA)
// 005f9997: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005f999d: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 005f999e: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005f99a3: MOV EDX,0x40c00000
// 005f99a8: XOR EAX,EAX
// 005f99aa: ADD ESP,0x10
// 005f99ad: MOV dword ptr [EBP + 0xffffff3e],EAX
// 005f99b3: LEA EAX,[EBP + 0xffffff3e]
// 005f99b9: MOV ECX,0x41880000
// 005f99be: PUSH EAX
// 005f99bf: MOV dword ptr [EBP + 0xffffff42],EDX
// 005f99c5: MOV dword ptr [EBP + 0xffffff46],ECX
// 005f99cb: PUSH ESI
// 005f99cc: MOV EDX,dword ptr [EBX + 0x154]
// 005f99d2: PUSH EBX
// 005f99d3: CALL dword ptr [EDX + 0x13c]
// 005f99d9: ADD ESP,0xc
// 005f99dc: PUSH 0x65860b
//   XREF to: 0065860b (DATA)
// 005f99e1: MOV EAX,dword ptr [EBX + 0x154]
// 005f99e7: PUSH EBX
// 005f99e8: CALL dword ptr [EAX + 0x24]
// 005f99eb: ADD ESP,0x8
// 005f99ee: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f99f3: MOV ECX,0x6585e4
//   Label: LAB_005f99f3
//   XREF to: 006585e4 (DATA)
// 005f99f8: MOV EDI,0x1ee
// 005f99fd: PUSH 0x6585f7
//   XREF to: 006585f7 (DATA)
// 005f9a02: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005f9a08: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005f9a0e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005f9a13: ADD ESP,0x4
// 005f9a16: JMP 0x005f997d
//   XREF to: 005f997d (UNCONDITIONAL_JUMP)
// 005f9a1b: PUSH 0x3
//   Label: LAB_005f9a1b
// 005f9a1d: PUSH EBX
// 005f9a1e: CALL core_zombie.cpp_CZombie_FUN_005fbd00
//   XREF to: 005fbd00 (UNCONDITIONAL_CALL)
// 005f9a23: ADD ESP,0x8
// 005f9a26: MOV EDI,EAX
// 005f9a28: TEST EAX,EAX
// 005f9a2a: JL 0x005f9af3
//   XREF to: 005f9af3 (CONDITIONAL_JUMP)
// 005f9a30: IMUL ESI,EDI,0x44
//   Label: LAB_005f9a30
// 005f9a33: ADD ESI,EBX
// 005f9a35: MOV ECX,dword ptr [ESI + 0x24b4]
// 005f9a3b: TEST ECX,ECX
// 005f9a3d: JZ 0x005f9504
//   XREF to: 005f9504 (CONDITIONAL_JUMP)
// 005f9a43: PUSH ECX
// 005f9a44: PUSH EBX
// 005f9a45: PUSH 0x65862f
//   XREF to: 0065862f (DATA)
// 005f9a4a: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005f9a50: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005f9a51: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005f9a56: XOR ECX,ECX
// 005f9a58: MOV EDX,0x3f800000
// 005f9a5d: MOV dword ptr [EBP + 0xfffffe4e],ECX
// 005f9a63: MOV dword ptr [EBP + 0xfffffe52],ECX
// 005f9a69: MOV dword ptr [EBP + 0xfffffe56],EDX
// 005f9a6f: MOV ECX,dword ptr [EBX + 0xbe3c]
// 005f9a75: ADD ESP,0x10
// 005f9a78: TEST ECX,ECX
// 005f9a7a: JNZ 0x005f9b1a
//   XREF to: 005f9b1a (CONDITIONAL_JUMP)
// 005f9a80: FLD float ptr [0x006587c9]
//   Label: LAB_005f9a80
//   XREF to: 006587c9 (READ)
// 005f9a86: FLD float ptr [EBP + 0xfffffe4e]
// 005f9a8c: FMUL ST1
// 005f9a8e: FLD float ptr [EBP + 0xfffffe52]
// 005f9a94: FMUL ST2
// 005f9a96: FLD float ptr [EBP + 0xfffffe56]
// 005f9a9c: LEA EAX,[EBP + 0xfffffe4e]
// 005f9aa2: FMULP ST3
// 005f9aa4: PUSH EAX
// 005f9aa5: FXCH
// 005f9aa7: FSTP float ptr [EBP + 0xfffffe4e]
// 005f9aad: FSTP float ptr [EBP + 0xfffffe52]
// 005f9ab3: FSTP float ptr [EBP + 0xfffffe56]
// 005f9ab9: FLD float ptr [EBP + 0xfffffe52]
// 005f9abf: PUSH EDI
// 005f9ac0: FADD float ptr [0x00658805]
//   XREF to: 00658805 (READ)
// 005f9ac6: PUSH EBX
// 005f9ac7: FSTP float ptr [EBP + 0xfffffe52]
// 005f9acd: MOV EDX,dword ptr [EBX + 0x154]
// 005f9ad3: CALL dword ptr [EDX + 0x13c]
// 005f9ad9: ADD ESP,0xc
// 005f9adc: PUSH 0x65863e
//   XREF to: 0065863e (DATA)
// 005f9ae1: MOV EAX,dword ptr [EBX + 0x154]
// 005f9ae7: PUSH EBX
// 005f9ae8: CALL dword ptr [EAX + 0x24]
// 005f9aeb: ADD ESP,0x8
// 005f9aee: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f9af3: MOV EAX,0x658617
//   Label: LAB_005f9af3
//   XREF to: 00658617 (DATA)
// 005f9af8: MOV EDX,0x205
// 005f9afd: PUSH 0x65862a
//   XREF to: 0065862a (DATA)
// 005f9b02: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005f9b07: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005f9b0d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005f9b12: ADD ESP,0x4
// 005f9b15: JMP 0x005f9a30
//   XREF to: 005f9a30 (UNCONDITIONAL_JUMP)
// 005f9b1a: LEA EDX,[EBP + 0xfffffda6]
//   Label: LAB_005f9b1a
// 005f9b20: MOV EAX,dword ptr [ESI + 0x24b4]
// 005f9b26: PUSH EDX
// 005f9b27: MOV ECX,dword ptr [EAX + 0x154]
// 005f9b2d: PUSH EAX
// 005f9b2e: CALL dword ptr [ECX + 0x14]
// 005f9b31: LEA EDX,[EAX + 0xc]
// 005f9b34: FLD float ptr [EAX]
// 005f9b36: FADD float ptr [EDX]
// 005f9b38: FST float ptr [EBP + 0xfffffe66]
// 005f9b3e: FLD float ptr [EAX + 0x4]
// 005f9b41: FADD float ptr [EDX + 0x4]
// 005f9b44: FXCH
// 005f9b46: FMUL float ptr [0x006587c5]
//   XREF to: 006587c5 (READ)
// 005f9b4c: FXCH
// 005f9b4e: FST float ptr [EBP + 0xfffffe6a]
// 005f9b54: FLD float ptr [EAX + 0x8]
// 005f9b57: FADD float ptr [EDX + 0x8]
// 005f9b5a: FXCH
// 005f9b5c: FMUL float ptr [0x006587c5]
//   XREF to: 006587c5 (READ)
// 005f9b62: FXCH
// 005f9b64: FST float ptr [EBP + 0xfffffe6e]
// 005f9b6a: FMUL float ptr [0x006587c5]
//   XREF to: 006587c5 (READ)
// 005f9b70: ADD ESP,0x8
// 005f9b73: LEA EAX,[EBP + -0x62]
// 005f9b76: FXCH ST2
// 005f9b78: FSTP float ptr [EBP + -0x62]
// 005f9b7b: PUSH EAX
// 005f9b7c: LEA EAX,[EBP + -0x3e]
// 005f9b7f: FSTP float ptr [EBP + -0x5e]
// 005f9b82: PUSH EAX
// 005f9b83: FSTP float ptr [EBP + -0x5a]
// 005f9b86: MOV EAX,dword ptr [ESI + 0x24b4]
// 005f9b8c: PUSH EAX
// 005f9b8d: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005f9b92: ADD ESP,0xc
// 005f9b95: LEA EDX,[EBP + 0xfffffd76]
// 005f9b9b: PUSH EDX
// 005f9b9c: MOV ESI,EAX
// 005f9b9e: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005f9ba4: PUSH EAX
// 005f9ba5: MOV ECX,dword ptr [EAX + 0x154]
// 005f9bab: CALL dword ptr [ECX + 0x14]
// 005f9bae: LEA EDX,[EAX + 0xc]
// 005f9bb1: FLD float ptr [EAX]
// 005f9bb3: FADD float ptr [EDX]
// 005f9bb5: FST float ptr [EBP + 0xfffffeae]
// 005f9bbb: FLD float ptr [EAX + 0x4]
// 005f9bbe: FADD float ptr [EDX + 0x4]
// 005f9bc1: FXCH
// 005f9bc3: FMUL float ptr [0x006587c5]
//   XREF to: 006587c5 (READ)
// 005f9bc9: FXCH
// 005f9bcb: FST float ptr [EBP + 0xfffffeb2]
// 005f9bd1: FLD float ptr [EAX + 0x8]
// 005f9bd4: FADD float ptr [EDX + 0x8]
// 005f9bd7: FXCH
// 005f9bd9: FMUL float ptr [0x006587c5]
//   XREF to: 006587c5 (READ)
// 005f9bdf: FXCH
// 005f9be1: FST float ptr [EBP + 0xfffffeb6]
// 005f9be7: FMUL float ptr [0x006587c5]
//   XREF to: 006587c5 (READ)
// 005f9bed: ADD ESP,0x8
// 005f9bf0: LEA EAX,[EBP + -0x6e]
// 005f9bf3: FXCH ST2
// 005f9bf5: FSTP float ptr [EBP + -0x6e]
// 005f9bf8: PUSH EAX
// 005f9bf9: LEA EAX,[EBP + -0x26]
// 005f9bfc: FSTP float ptr [EBP + -0x6a]
// 005f9bff: PUSH EAX
// 005f9c00: FSTP float ptr [EBP + -0x66]
// 005f9c03: MOV EDX,dword ptr [EBX + 0xbe3c]
// 005f9c09: PUSH EDX
// 005f9c0a: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005f9c0f: FLD float ptr [EAX]
// 005f9c11: FSUB float ptr [ESI]
// 005f9c13: FSTP float ptr [EBP + 0xfffffea2]
// 005f9c19: FLD float ptr [EAX + 0x4]
// 005f9c1c: FSUB float ptr [ESI + 0x4]
// 005f9c1f: FST float ptr [EBP + 0xfffffea6]
// 005f9c25: FMUL float ptr [EBP + 0xfffffea6]
// 005f9c2b: FLD float ptr [EBP + 0xfffffea2]
// 005f9c31: FMUL ST0
// 005f9c33: FLD float ptr [EAX + 0x8]
// 005f9c36: FSUB float ptr [ESI + 0x8]
// 005f9c39: FXCH
// 005f9c3b: FADDP ST2,ST0
// 005f9c3d: FST float ptr [EBP + 0xfffffeaa]
// 005f9c43: FMUL float ptr [EBP + 0xfffffeaa]
// 005f9c49: FADDP
// 005f9c4b: FSQRT
// 005f9c4d: ADD ESP,0xc
// 005f9c50: FST float ptr [EBP + 0x5e]
// 005f9c53: FLDZ
// 005f9c55: FCOMPP
// 005f9c57: FNSTSW AX
// 005f9c59: SAHF
// 005f9c5a: JNC 0x005f9a80
//   XREF to: 005f9a80 (CONDITIONAL_JUMP)
// 005f9c60: LEA EAX,[EBP + 0xfffffea2]
// 005f9c66: PUSH EAX
// 005f9c67: LEA EAX,[EBP + 0xfffffe12]
// 005f9c6d: PUSH EAX
// 005f9c6e: PUSH EBX
// 005f9c6f: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 005f9c74: FLD1
// 005f9c76: FLD float ptr [EAX]
// 005f9c78: FXCH
// 005f9c7a: FDIV float ptr [EBP + 0x5e]
// 005f9c7d: FXCH
// 005f9c7f: FMUL ST1
// 005f9c81: FSTP float ptr [EBP + -0x4a]
// 005f9c84: FLD float ptr [EAX + 0x4]
// 005f9c87: FMUL ST1
// 005f9c89: FSTP float ptr [EBP + -0x46]
// 005f9c8c: FMUL float ptr [EAX + 0x8]
// 005f9c8f: LEA EDX,[EBP + -0x4a]
// 005f9c92: ADD ESP,0xc
// 005f9c95: LEA EAX,[EBP + 0xfffffe4e]
// 005f9c9b: FSTP float ptr [EBP + -0x42]
// 005f9c9e: CMP EAX,EDX
// 005f9ca0: JZ 0x005f9a80
//   XREF to: 005f9a80 (CONDITIONAL_JUMP)
// 005f9ca6: MOV EAX,dword ptr [EBP + -0x4a]
// 005f9ca9: MOV dword ptr [EBP + 0xfffffe4e],EAX
// 005f9caf: MOV EAX,dword ptr [EBP + -0x46]
// 005f9cb2: MOV dword ptr [EBP + 0xfffffe52],EAX
// 005f9cb8: MOV EAX,dword ptr [EBP + -0x42]
// 005f9cbb: MOV dword ptr [EBP + 0xfffffe56],EAX
// 005f9cc1: JMP 0x005f9a80
//   XREF to: 005f9a80 (UNCONDITIONAL_JUMP)
// 005f9cc6: MOV ECX,dword ptr [EBX + 0xbed8]
//   Label: LAB_005f9cc6
// 005f9ccc: TEST ECX,ECX
// 005f9cce: JZ 0x005f9504
//   XREF to: 005f9504 (CONDITIONAL_JUMP)
// 005f9cd4: PUSH 0x3e99999a
// 005f9cd9: PUSH ECX
// 005f9cda: CALL core_door.cpp_CDoor_FUN_00480de0
//   XREF to: 00480de0 (UNCONDITIONAL_CALL)
// 005f9cdf: ADD ESP,0x8
// 005f9ce2: MOV EAX,dword ptr [EBX + 0xbed8]
// 005f9ce8: PUSH 0x65864a
//   XREF to: 0065864a (DATA)
// 005f9ced: MOV EDX,dword ptr [EAX + 0x154]
// 005f9cf3: PUSH EAX
// 005f9cf4: CALL dword ptr [EDX + 0x24]
// 005f9cf7: ADD ESP,0x8
// 005f9cfa: MOV dword ptr [EBX + 0xbed8],0x0
// 005f9d04: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f9d09: MOV EDI,dword ptr [EBX + 0xbf4c]
//   Label: LAB_005f9d09
// 005f9d0f: PUSH EDI
// 005f9d10: LEA EAX,[EBP + 0xffffff6e]
// 005f9d16: PUSH EAX
// 005f9d17: PUSH ESI
// 005f9d18: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005f9d1d: ADD ESP,0xc
// 005f9d20: PUSH EAX
// 005f9d21: LEA EAX,[EBP + -0x7a]
// 005f9d24: PUSH EAX
// 005f9d25: PUSH EBX
// 005f9d26: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005f9d2b: ADD ESP,0xc
// 005f9d2e: PUSH 0x0
// 005f9d30: PUSH 0x3
// 005f9d32: PUSH 0x0
// 005f9d34: LEA EAX,[EBP + -0x7a]
// 005f9d37: PUSH EAX
// 005f9d38: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 005f9d3e: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 005f9d3f: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 005f9d44: ADD ESP,0x14
// 005f9d47: PUSH 0x3f000000
// 005f9d4c: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005f9d51: ADD ESP,0x4
// 005f9d54: TEST EAX,EAX
// 005f9d56: JZ 0x005f9d96
//   XREF to: 005f9d96 (CONDITIONAL_JUMP)
// 005f9d58: MOV ESI,0x658660
//   XREF to: 00658660 (DATA)
// 005f9d5d: LEA EDI,[EBP + 0xfffffd56]
//   Label: LAB_005f9d5d
// 005f9d63: PUSH EDI
// 005f9d64: MOV AL,byte ptr [ESI]
//   Label: LAB_005f9d64
//   XREF to: 00658660 (READ)
//   XREF to: 00658662 (READ)
//   XREF to: 00658670 (READ)
// 005f9d66: MOV byte ptr [EDI],AL
// 005f9d68: CMP AL,0x0
// 005f9d6a: JZ 0x005f9d7c
//   XREF to: 005f9d7c (CONDITIONAL_JUMP)
// 005f9d6c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00658661 (READ)
//   XREF to: 00658663 (READ)
//   XREF to: 00658671 (READ)
// 005f9d6f: ADD ESI,0x2
// 005f9d72: MOV byte ptr [EDI + 0x1],AL
// 005f9d75: ADD EDI,0x2
// 005f9d78: CMP AL,0x0
// 005f9d7a: JNZ 0x005f9d64
//   XREF to: 005f9d64 (CONDITIONAL_JUMP)
// 005f9d7c: POP EDI
//   Label: LAB_005f9d7c
// 005f9d7d: LEA EDX,[EBP + 0xfffffd56]
// 005f9d83: PUSH EDX
// 005f9d84: MOV EAX,dword ptr [EBX + 0x154]
// 005f9d8a: PUSH EBX
// 005f9d8b: CALL dword ptr [EAX + 0x24]
// 005f9d8e: ADD ESP,0x8
// 005f9d91: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f9d96: MOV ESI,0x658670
//   Label: LAB_005f9d96
//   XREF to: 00658670 (DATA)
// 005f9d9b: JMP 0x005f9d5d
//   XREF to: 005f9d5d (UNCONDITIONAL_JUMP)
// 005f9d9d: PUSH 0x658680
//   Label: LAB_005f9d9d
//   XREF to: 00658680 (DATA)
// 005f9da2: MOV EAX,dword ptr [EBX + 0x154]
// 005f9da8: PUSH EBX
// 005f9da9: CALL dword ptr [EAX + 0x24]
// 005f9dac: ADD ESP,0x8
// 005f9daf: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f9db4: JBE 0x005f996c
//   Label: LAB_005f9db4
//   XREF to: 005f996c (CONDITIONAL_JUMP)
// 005f9dba: CMP EAX,0xd
// 005f9dbd: JC 0x005f9a1b
//   XREF to: 005f9a1b (CONDITIONAL_JUMP)
// 005f9dc3: JBE 0x005f9cc6
//   XREF to: 005f9cc6 (CONDITIONAL_JUMP)
// 005f9dc9: CMP EAX,0x65
// 005f9dcc: JC 0x005f9541
//   XREF to: 005f9541 (CONDITIONAL_JUMP)
// 005f9dd2: JBE 0x005f9d9d
//   XREF to: 005f9d9d (CONDITIONAL_JUMP)
// 005f9dd4: CMP EAX,0x29a
// 005f9dd9: JZ 0x005f9d09
//   XREF to: 005f9d09 (CONDITIONAL_JUMP)
// 005f9ddf: PUSH EDX
// 005f9de0: PUSH EBX
// 005f9de1: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005f9de6: ADD ESP,0x8
// 005f9de9: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f9dee: JBE 0x005f95a4
//   Label: LAB_005f9dee
//   XREF to: 005f95a4 (CONDITIONAL_JUMP)
// 005f9df4: CMP EAX,0xa
// 005f9df7: JZ 0x005f976e
//   XREF to: 005f976e (CONDITIONAL_JUMP)
// 005f9dfd: PUSH EDX
// 005f9dfe: PUSH EBX
// 005f9dff: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005f9e04: ADD ESP,0x8
// 005f9e07: JMP 0x005f9504
//   XREF to: 005f9504 (UNCONDITIONAL_JUMP)
// 005f9e0c: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_005f9e0c
// 005f9e12: FLD float ptr [EBP + 0x92]
// 005f9e18: FMUL double ptr [0x0065877d]
//   XREF to: 0065877d (READ)
// 005f9e1e: FMULP
// 005f9e20: FMUL double ptr [0x00658785]
//   XREF to: 00658785 (READ)
// 005f9e26: FLD float ptr [EBX + 0x23b4]
// 005f9e2c: MOV EAX,dword ptr [EBX + 0xbf84]
// 005f9e32: FSTP float ptr [EBX + 0x2434]
// 005f9e38: FSTP float ptr [EBX + 0x2438]
// 005f9e3e: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005f9e46: JZ 0x005fa082
//   XREF to: 005fa082 (CONDITIONAL_JUMP)
// 005f9e4c: MOV EAX,dword ptr [EBX + 0xbf90]
//   Label: LAB_005f9e4c
// 005f9e52: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005f9e5a: JZ 0x005fa096
//   XREF to: 005fa096 (CONDITIONAL_JUMP)
// 005f9e60: LEA EDI,[EBX + 0x158]
//   Label: LAB_005f9e60
// 005f9e66: PUSH EDI
// 005f9e67: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005f9e6c: ADD ESP,0x4
// 005f9e6f: MOV ESI,dword ptr [EAX + 0x24]
// 005f9e72: PUSH dword ptr [EBP + 0x92]
// 005f9e78: XOR EAX,EAX
// 005f9e7a: PUSH EBX
// 005f9e7b: MOV dword ptr [EBP + 0x42],EAX
// 005f9e7e: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 005f9e83: ADD ESP,0x8
// 005f9e86: TEST EAX,EAX
// 005f9e88: JZ 0x005fae7b
//   XREF to: 005fae7b (CONDITIONAL_JUMP)
// 005f9e8e: MOV EAX,dword ptr [EBX + 0x25b0]
// 005f9e94: CMP EAX,0x2
// 005f9e97: JNC 0x005fa144
//   XREF to: 005fa144 (CONDITIONAL_JUMP)
// 005f9e9d: CMP EAX,0x1
// 005f9ea0: JNZ 0x005fa14f
//   XREF to: 005fa14f (CONDITIONAL_JUMP)
// 005f9ea6: CMP ESI,0x1
//   Label: LAB_005f9ea6
// 005f9ea9: JZ 0x005f9eb4
//   XREF to: 005f9eb4 (CONDITIONAL_JUMP)
// 005f9eab: PUSH EBX
// 005f9eac: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005f9eb1: ADD ESP,0x4
// 005f9eb4: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_005f9eb4
// 005f9eba: MOV dword ptr [EAX + 0x8],0x0
// 005f9ec1: MOV EDX,dword ptr [EAX + 0x8]
// 005f9ec4: MOV dword ptr [EAX + 0x4],EDX
// 005f9ec7: MOV EDX,dword ptr [EAX + 0x4]
// 005f9eca: MOV dword ptr [EAX],EDX
// 005f9ecc: FLD float ptr [EBX + 0xbe38]
//   Label: LAB_005f9ecc
// 005f9ed2: FLDZ
// 005f9ed4: FCOMPP
// 005f9ed6: FNSTSW AX
// 005f9ed8: SAHF
// 005f9ed9: JNC 0x005f9eed
//   XREF to: 005f9eed (CONDITIONAL_JUMP)
// 005f9edb: FLD float ptr [EBX + 0xbe38]
// 005f9ee1: FSUB float ptr [EBP + 0x92]
// 005f9ee7: FSTP float ptr [EBX + 0xbe38]
// 005f9eed: LEA EAX,[EBX + 0x158]
//   Label: LAB_005f9eed
// 005f9ef3: PUSH EAX
// 005f9ef4: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005f9ef9: LEA ESI,[EBX + 0x23ac]
// 005f9eff: MOV EAX,dword ptr [EAX + 0x24]
// 005f9f02: ADD ESP,0x4
// 005f9f05: MOV EDI,EAX
// 005f9f07: CMP EAX,0xe
// 005f9f0a: JNZ 0x005faf13
//   XREF to: 005faf13 (CONDITIONAL_JUMP)
// 005f9f10: MOV dword ptr [ESI + 0x8],0x0
// 005f9f17: MOV EAX,dword ptr [ESI + 0x8]
//   Label: LAB_005f9f17
// 005f9f1a: MOV dword ptr [ESI + 0x4],EAX
// 005f9f1d: MOV EAX,dword ptr [ESI + 0x4]
// 005f9f20: MOV dword ptr [ESI],EAX
// 005f9f22: PUSH EBX
//   Label: LAB_005f9f22
// 005f9f23: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 005f9f28: ADD ESP,0x4
// 005f9f2b: CMP EDI,0xe
// 005f9f2e: JZ 0x005f9f4e
//   XREF to: 005f9f4e (CONDITIONAL_JUMP)
// 005f9f30: LEA EAX,[EBX + 0x158]
// 005f9f36: PUSH EAX
// 005f9f37: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 005f9f3c: ADD ESP,0x4
// 005f9f3f: PUSH dword ptr [EBP + 0x92]
// 005f9f45: PUSH EBX
// 005f9f46: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 005f9f4b: ADD ESP,0x8
// 005f9f4e: CMP dword ptr [EBX + 0xbe28],0x0
//   Label: LAB_005f9f4e
// 005f9f55: JNZ 0x005fa033
//   XREF to: 005fa033 (CONDITIONAL_JUMP)
// 005f9f5b: MOV EAX,dword ptr [EBX + 0xbf8c]
// 005f9f61: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005f9f69: JZ 0x005fb186
//   XREF to: 005fb186 (CONDITIONAL_JUMP)
// 005f9f6f: MOV EAX,dword ptr [EBX + 0xbf60]
// 005f9f75: PUSH 0x3e4ccccd
// 005f9f7a: PUSH EAX
// 005f9f7b: MOV EDX,dword ptr [EBX + 0xbf78]
// 005f9f81: PUSH EDX
// 005f9f82: PUSH EBX
// 005f9f83: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 005f9f88: MOV EAX,dword ptr [EBX + 0xbf78]
// 005f9f8e: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 005f9f95: ADD ESP,0x10
// 005f9f98: TEST ECX,ECX
// 005f9f9a: JZ 0x005f9fb8
//   XREF to: 005f9fb8 (CONDITIONAL_JUMP)
// 005f9f9c: MOV ESI,dword ptr [EBX + 0xbf58]
// 005f9fa2: PUSH 0x3e4ccccd
// 005f9fa7: PUSH ESI
// 005f9fa8: MOV EDI,dword ptr [EBX + 0xbf7c]
// 005f9fae: PUSH EDI
// 005f9faf: PUSH EBX
// 005f9fb0: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 005f9fb5: ADD ESP,0x10
// 005f9fb8: MOV EAX,dword ptr [EBX + 0xbf64]
//   Label: LAB_005f9fb8
// 005f9fbe: PUSH 0x3e4ccccd
// 005f9fc3: PUSH EAX
// 005f9fc4: MOV EDX,dword ptr [EBX + 0xbf80]
// 005f9fca: PUSH EDX
// 005f9fcb: PUSH EBX
// 005f9fcc: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 005f9fd1: MOV EAX,dword ptr [EBX + 0xbf80]
// 005f9fd7: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298]
// 005f9fde: ADD ESP,0x10
// 005f9fe1: TEST ECX,ECX
// 005f9fe3: JZ 0x005fa001
//   XREF to: 005fa001 (CONDITIONAL_JUMP)
// 005f9fe5: MOV ESI,dword ptr [EBX + 0xbf5c]
// 005f9feb: PUSH 0x3e4ccccd
// 005f9ff0: PUSH ESI
// 005f9ff1: MOV EDI,dword ptr [EBX + 0xbf84]
// 005f9ff7: PUSH EDI
// 005f9ff8: PUSH EBX
// 005f9ff9: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 005f9ffe: ADD ESP,0x10
// 005fa001: MOV EAX,dword ptr [EBX + 0xbf4c]
//   Label: LAB_005fa001
// 005fa007: PUSH 0x3f333333
// 005fa00c: PUSH EAX
// 005fa00d: MOV EDX,dword ptr [EBX + 0xbf90]
// 005fa013: PUSH EDX
// 005fa014: PUSH EBX
//   Label: LAB_005fa014
// 005fa015: CALL core_charactr.cpp_CCharacter_FUN_0042b810
//   XREF to: 0042b810 (UNCONDITIONAL_CALL)
// 005fa01a: ADD ESP,0x10
// 005fa01d: CMP dword ptr [EBX + 0xbf88],0x0
// 005fa024: JL 0x005fb198
//   XREF to: 005fb198 (CONDITIONAL_JUMP)
// 005fa02a: PUSH EBX
//   Label: LAB_005fa02a
// 005fa02b: CALL core_charactr.cpp_CCharacter_FUN_0042b670
//   XREF to: 0042b670 (UNCONDITIONAL_CALL)
// 005fa030: ADD ESP,0x4
// 005fa033: PUSH 0x1
//   Label: LAB_005fa033
// 005fa035: PUSH EBX
// 005fa036: CALL core_zombie.cpp_CZombie_FUN_005fbd00
//   XREF to: 005fbd00 (UNCONDITIONAL_CALL)
// 005fa03b: MOV EDX,dword ptr [EBP + 0x42]
// 005fa03e: ADD ESP,0x8
// 005fa041: TEST EDX,EDX
// 005fa043: JZ 0x005f9498
//   XREF to: 005f9498 (CONDITIONAL_JUMP)
// 005fa049: TEST EAX,EAX
// 005fa04b: JL 0x005f9498
//   XREF to: 005f9498 (CONDITIONAL_JUMP)
// 005fa051: MOV EDX,EAX
// 005fa053: SHL EAX,0x4
// 005fa056: ADD EAX,EDX
// 005fa058: SHL EAX,0x2
// 005fa05b: ADD EAX,EBX
// 005fa05d: MOV ECX,dword ptr [EAX + 0x24b4]
// 005fa063: TEST ECX,ECX
// 005fa065: JZ 0x005f9498
//   XREF to: 005f9498 (CONDITIONAL_JUMP)
// 005fa06b: PUSH 0x2
// 005fa06d: MOV EDX,dword ptr [ECX + 0x154]
// 005fa073: PUSH ECX
// 005fa074: CALL dword ptr [EDX + 0x70]
// 005fa077: ADD ESP,0x8
// 005fa07a: LEA ESP,[EBP + 0x7a]
// 005fa07d: POP EBP
// 005fa07e: POP EDI
// 005fa07f: POP ESI
// 005fa080: POP EBX
// 005fa081: RET
// 005fa082: MOV EAX,dword ptr [EBX + 0xbf7c]
//   Label: LAB_005fa082
// 005fa088: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005fa090: JNZ 0x005f9e4c
//   XREF to: 005f9e4c (CONDITIONAL_JUMP)
// 005fa096: FLD float ptr [EBX + 0xbf98]
//   Label: LAB_005fa096
// 005fa09c: FLDZ
// 005fa09e: FCOMPP
// 005fa0a0: FNSTSW AX
// 005fa0a2: SAHF
// 005fa0a3: JA 0x005f9e60
//   XREF to: 005f9e60 (CONDITIONAL_JUMP)
// 005fa0a9: FLD float ptr [EBX + 0xbf98]
// 005fa0af: FADD float ptr [EBP + 0x92]
// 005fa0b5: FST float ptr [EBX + 0xbf98]
// 005fa0bb: FCOMP double ptr [0x0065878d]
//   XREF to: 0065878d (READ)
// 005fa0c1: FNSTSW AX
// 005fa0c3: SAHF
// 005fa0c4: JC 0x005f9e60
//   XREF to: 005f9e60 (CONDITIONAL_JUMP)
// 005fa0ca: LEA EAX,[EBP + 0xfffffd1a]
// 005fa0d0: PUSH EAX
// 005fa0d1: MOV ESI,0x461c3f9a
// 005fa0d6: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005fa0db: LEA EDX,[EBP + 0xfffffd1a]
// 005fa0e1: ADD ESP,0x4
// 005fa0e4: MOV dword ptr [EBP + 0xfffffd1e],ESI
// 005fa0ea: MOV dword ptr [EBP + 0xfffffd4e],EBX
// 005fa0f0: MOV dword ptr [EBP + 0xfffffd52],EBX
// 005fa0f6: PUSH EDX
// 005fa0f7: MOV EAX,dword ptr [EBX + 0x154]
// 005fa0fd: PUSH EBX
// 005fa0fe: CALL dword ptr [EAX + 0x11c]
// 005fa104: ADD ESP,0x8
// 005fa107: MOV dword ptr [EBX + 0xbf98],0xbf800000
// 005fa111: JMP 0x005f9e60
//   XREF to: 005f9e60 (UNCONDITIONAL_JUMP)
// 005fa116: PUSH 0x1
//   Label: LAB_005fa116
// 005fa118: PUSH 0x0
// 005fa11a: LEA EAX,[EBX + 0x158]
// 005fa120: PUSH EAX
// 005fa121: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fa126: ADD ESP,0xc
// 005fa129: PUSH EBX
// 005fa12a: MOV EAX,0x65868b
//   XREF to: 0065868b (DATA)
// 005fa12f: PUSH EAX
//   XREF to: 0065868b (DATA)
// 005fa130: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005fa136: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005fa137: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005fa13c: ADD ESP,0xc
// 005fa13f: JMP 0x005f9eb4
//   XREF to: 005f9eb4 (UNCONDITIONAL_JUMP)
// 005fa144: JBE 0x005f9ea6
//   Label: LAB_005fa144
//   XREF to: 005f9ea6 (CONDITIONAL_JUMP)
// 005fa14a: CMP EAX,0x3
// 005fa14d: JZ 0x005fa116
//   XREF to: 005fa116 (CONDITIONAL_JUMP)
// 005fa14f: PUSH 0x1
//   Label: LAB_005fa14f
// 005fa151: PUSH 0x0
// 005fa153: LEA EAX,[EBX + 0x158]
// 005fa159: PUSH EAX
// 005fa15a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fa15f: ADD ESP,0xc
// 005fa162: JMP 0x005f9eb4
//   XREF to: 005f9eb4 (UNCONDITIONAL_JUMP)
// 005fa167: MOV EAX,[0x02db87d0]
//   Label: LAB_005fa167
//   XREF to: 02db87d0 (READ)
// 005fa16c: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005fa173: PUSH EAX
// 005fa174: MOV EDX,dword ptr [EAX + 0x154]
// 005fa17a: CALL dword ptr [EDX + 0x120]
// 005fa180: ADD ESP,0x4
// 005fa183: TEST EAX,EAX
// 005fa185: JZ 0x005fa255
//   XREF to: 005fa255 (CONDITIONAL_JUMP)
// 005fa18b: FLD float ptr [EBP + 0x56]
//   Label: LAB_005fa18b
// 005fa18e: FLDZ
// 005fa190: FCOMPP
// 005fa192: FNSTSW AX
// 005fa194: SAHF
// 005fa195: JA 0x005f9ecc
//   XREF to: 005f9ecc (CONDITIONAL_JUMP)
// 005fa19b: CMP dword ptr [EBX + 0xbe3c],0x0
// 005fa1a2: JZ 0x005f9ecc
//   XREF to: 005f9ecc (CONDITIONAL_JUMP)
// 005fa1a8: FLD float ptr [EBP + 0x3e]
// 005fa1ab: FMUL float ptr [EBX + 0xbe24]
// 005fa1b1: FLD float ptr [EBX + 0xbe24]
// 005fa1b7: FMUL double ptr [0x006587ed]
//   XREF to: 006587ed (READ)
// 005fa1bd: FXCH
// 005fa1bf: FLD float ptr [EBP + 0x92]
// 005fa1c5: FXCH
// 005fa1c7: FMUL ST1
// 005fa1c9: FXCH
// 005fa1cb: FMULP ST2
// 005fa1cd: PUSH 0x3f490fdb
// 005fa1d2: PUSH 0x40400000
// 005fa1d7: MOV EAX,dword ptr [EBP + 0x56]
// 005fa1da: XOR ECX,ECX
// 005fa1dc: FSTP float ptr [EBX + 0x2434]
// 005fa1e2: FSTP float ptr [EBX + 0x2438]
// 005fa1e8: MOV dword ptr [EBP + -0x56],ECX
// 005fa1eb: MOV dword ptr [EBP + -0x4e],EAX
// 005fa1ee: LEA EAX,[EBP + -0x56]
// 005fa1f1: MOV dword ptr [EBP + -0x52],ECX
// 005fa1f4: PUSH EAX
// 005fa1f5: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005fa1fb: PUSH EAX
// 005fa1fc: MOV EDX,dword ptr [EAX + 0x154]
// 005fa202: CALL dword ptr [EDX + 0xbc]
// 005fa208: ADD ESP,0x4
// 005fa20b: PUSH EAX
// 005fa20c: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005fa212: ADD EAX,0x20
// 005fa215: PUSH EAX
// 005fa216: PUSH EBX
// 005fa217: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 005fa21c: ADD ESP,0x18
// 005fa21f: CMP EAX,0x1
// 005fa222: JZ 0x005f9ecc
//   XREF to: 005f9ecc (CONDITIONAL_JUMP)
// 005fa228: PUSH EBX
// 005fa229: PUSH 0x658762
//   XREF to: 00658762 (DATA)
// 005fa22e: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005fa234: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 005fa235: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005fa23a: ADD ESP,0xc
// 005fa23d: PUSH EBX
// 005fa23e: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005fa243: ADD ESP,0x4
// 005fa246: MOV dword ptr [EBX + 0x2418],0x0
// 005fa250: JMP 0x005f9ecc
//   XREF to: 005f9ecc (UNCONDITIONAL_JUMP)
// 005fa255: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005fa255
// 005fa25b: MOV EAX,dword ptr [EBX + 0x154]
// 005fa261: PUSH EBX
// 005fa262: CALL dword ptr [EAX + 0x158]
// 005fa268: MOV ECX,dword ptr [EBX + 0xbe3c]
// 005fa26e: ADD ESP,0x8
// 005fa271: TEST ECX,ECX
// 005fa273: JZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa279: PUSH 0x1
//   Label: LAB_005fa279
// 005fa27b: PUSH 0x0
// 005fa27d: LEA EAX,[EBX + 0x158]
// 005fa283: PUSH EAX
// 005fa284: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fa289: ADD ESP,0xc
// 005fa28c: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fa291: FLD float ptr [EBX + 0xbfa8]
//   Label: LAB_005fa291
// 005fa297: FSUB float ptr [EBP + 0x92]
// 005fa29d: FST float ptr [EBX + 0xbfa8]
// 005fa2a3: FLDZ
// 005fa2a5: FCOMPP
// 005fa2a7: FNSTSW AX
// 005fa2a9: SAHF
// 005fa2aa: JC 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa2b0: PUSH dword ptr [EBP + 0x92]
// 005fa2b6: MOV EAX,dword ptr [EBX + 0x154]
// 005fa2bc: PUSH EBX
// 005fa2bd: MOV dword ptr [EBX + 0xbfa8],0x0
// 005fa2c7: CALL dword ptr [EAX + 0x158]
// 005fa2cd: MOV EDI,dword ptr [EBX + 0xbe3c]
// 005fa2d3: ADD ESP,0x8
// 005fa2d6: TEST EDI,EDI
// 005fa2d8: JZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa2de: FLD float ptr [ESI]
// 005fa2e0: FSUB float ptr [EDI + 0x20]
// 005fa2e3: FSTP float ptr [EBP + 0xfffffe36]
// 005fa2e9: FLD float ptr [ESI + 0x4]
// 005fa2ec: FSUB float ptr [EDI + 0x24]
// 005fa2ef: LEA EAX,[EBP + 0xfffffe36]
// 005fa2f5: FSTP float ptr [EBP + 0xfffffe3a]
// 005fa2fb: FLD float ptr [ESI + 0x8]
// 005fa2fe: FSUB float ptr [EDI + 0x28]
// 005fa301: LEA EDX,[EBP + 0xffffff56]
// 005fa307: FSTP float ptr [EBP + 0xfffffe3e]
// 005fa30d: CMP EDX,EAX
// 005fa30f: JNZ 0x005fa462
//   XREF to: 005fa462 (CONDITIONAL_JUMP)
// 005fa315: FLD float ptr [EBP + 0xffffff5a]
//   Label: LAB_005fa315
// 005fa31b: FMUL ST0
// 005fa31d: FLD float ptr [EBP + 0xffffff56]
// 005fa323: FMUL ST0
// 005fa325: FADDP
// 005fa327: FLD float ptr [EBP + 0xffffff5e]
// 005fa32d: FMUL ST0
// 005fa32f: FADDP
// 005fa331: FSTP float ptr [EBP + 0x6e]
// 005fa334: MOV EAX,dword ptr [EBP + 0x6e]
// 005fa337: MOV EDX,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 005fa33d: SAR EAX,0x1
// 005fa33f: ADD EAX,EDX
// 005fa341: MOV dword ptr [EBP + 0x2e],EAX
// 005fa344: FLD float ptr [EBP + 0x2e]
// 005fa347: FCOMP double ptr [0x00658795]
//   XREF to: 00658795 (READ)
// 005fa34d: FNSTSW AX
// 005fa34f: SAHF
// 005fa350: JA 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa356: MOV EAX,dword ptr [EBX + 0x2df0]
// 005fa35c: MOV dword ptr [EBP + 0x5a],EAX
// 005fa35f: FLD float ptr [EBP + 0x5a]
// 005fa362: FCOMP float ptr [EBX + 0x2dec]
// 005fa368: FNSTSW AX
// 005fa36a: SAHF
// 005fa36b: JNC 0x005fa376
//   XREF to: 005fa376 (CONDITIONAL_JUMP)
// 005fa36d: MOV EAX,dword ptr [EBX + 0x23a0]
// 005fa373: MOV dword ptr [EBP + 0x5a],EAX
// 005fa376: FLD float ptr [EBP + 0x5a]
//   Label: LAB_005fa376
// 005fa379: FCOMP float ptr [EBX + 0x2dec]
// 005fa37f: FNSTSW AX
// 005fa381: SAHF
// 005fa382: JC 0x005fa48b
//   XREF to: 005fa48b (CONDITIONAL_JUMP)
// 005fa388: XOR ESI,ESI
//   Label: LAB_005fa388
// 005fa38a: MOV dword ptr [EBP + 0x76],ESI
//   Label: LAB_005fa38a
// 005fa38d: FILD dword ptr [EBP + 0x76]
// 005fa390: FMUL double ptr [0x006587dd]
//   XREF to: 006587dd (READ)
// 005fa396: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 005fa39c: FMUL double ptr [0x006587d5]
//   XREF to: 006587d5 (READ)
// 005fa3a2: PUSH EDI
//   XREF to: 03114278 (DATA)
// 005fa3a3: FSTP float ptr [EBP + 0x12]
// 005fa3a6: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005fa3ab: ADD ESP,0x4
// 005fa3ae: PUSH EBX
// 005fa3af: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005fa3b4: PUSH EAX
//   XREF to: 03114278 (DATA)
// 005fa3b5: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005fa3ba: FLD float ptr [EBP + 0x12]
// 005fa3bd: FLD ST0
// 005fa3bf: FCOS
// 005fa3c1: FXCH
// 005fa3c3: FSIN
// 005fa3c5: FXCH
// 005fa3c7: FLD double ptr [0x006587e5]
//   XREF to: 006587e5 (READ)
// 005fa3cd: FXCH
// 005fa3cf: FMUL ST1
// 005fa3d1: FXCH ST2
// 005fa3d3: FMULP
// 005fa3d5: FLD float ptr [EBX + 0x24]
// 005fa3d8: ADD ESP,0x8
// 005fa3db: FADD float ptr [EBP + 0x5a]
// 005fa3de: SUB ESP,0x4
// 005fa3e1: FSTP float ptr [ESP]
// 005fa3e4: FLD float ptr [EBX + 0x24]
// 005fa3e7: FADD float ptr [EBX + 0x2dec]
// 005fa3ed: SUB ESP,0x4
// 005fa3f0: FSTP float ptr [ESP]
// 005fa3f3: PUSH dword ptr [EBX + 0x2de0]
// 005fa3f9: SUB ESP,0x4
// 005fa3fc: FXCH
// 005fa3fe: FSTP float ptr [ESP]
// 005fa401: SUB ESP,0x4
// 005fa404: FSTP float ptr [ESP]
// 005fa407: PUSH dword ptr [EBX + 0x28]
// 005fa40a: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005fa410: PUSH dword ptr [EBX + 0x20]
// 005fa413: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005fa414: CALL core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
//   XREF to: 00573470 (UNCONDITIONAL_CALL)
// 005fa419: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005fa41f: MOV dword ptr [EBP + 0x76],EAX
// 005fa422: ADD ESP,0x20
// 005fa425: FLD float ptr [EBP + 0x76]
// 005fa428: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005fa429: FSTP float ptr [EBP + 0x72]
// 005fa42c: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 005fa431: FLD float ptr [EBP + 0x72]
// 005fa434: FLD1
// 005fa436: ADD ESP,0x4
// 005fa439: FCOMPP
// 005fa43b: FNSTSW AX
// 005fa43d: SAHF
// 005fa43e: JBE 0x005fa49f
//   XREF to: 005fa49f (CONDITIONAL_JUMP)
// 005fa440: CMP ESI,0x4
//   Label: LAB_005fa440
// 005fa443: JGE 0x005fa279
//   XREF to: 005fa279 (CONDITIONAL_JUMP)
// 005fa449: MOV dword ptr [EBX + 0xbfa8],0x40400000
// 005fa453: MOV dword ptr [EBX + 0xbe3c],0x0
// 005fa45d: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fa462: MOV EAX,dword ptr [EBP + 0xfffffe36]
//   Label: LAB_005fa462
// 005fa468: MOV dword ptr [EBP + 0xffffff56],EAX
// 005fa46e: MOV EAX,dword ptr [EBP + 0xfffffe3a]
// 005fa474: MOV dword ptr [EBP + 0xffffff5a],EAX
// 005fa47a: MOV EAX,dword ptr [EBP + 0xfffffe3e]
// 005fa480: MOV dword ptr [EBP + 0xffffff5e],EAX
// 005fa486: JMP 0x005fa315
//   XREF to: 005fa315 (UNCONDITIONAL_JUMP)
// 005fa48b: FLD float ptr [EBX + 0x2dec]
//   Label: LAB_005fa48b
// 005fa491: FADD double ptr [0x00658785]
//   XREF to: 00658785 (READ)
// 005fa497: FSTP float ptr [EBP + 0x5a]
// 005fa49a: JMP 0x005fa388
//   XREF to: 005fa388 (UNCONDITIONAL_JUMP)
// 005fa49f: INC ESI
//   Label: LAB_005fa49f
// 005fa4a0: CMP ESI,0x4
// 005fa4a3: JL 0x005fa38a
//   XREF to: 005fa38a (CONDITIONAL_JUMP)
// 005fa4a9: JMP 0x005fa440
//   XREF to: 005fa440 (UNCONDITIONAL_JUMP)
// 005fa4ab: LEA EAX,[EBX + 0xbedc]
//   Label: LAB_005fa4ab
// 005fa4b1: PUSH EAX
// 005fa4b2: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005fa4b8: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 005fa4b9: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 005fa4be: ADD ESP,0x8
// 005fa4c1: TEST EAX,EAX
// 005fa4c3: JZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa4c9: FLD float ptr [EBX + 0xbfa4]
// 005fa4cf: FSUB float ptr [EBP + 0x92]
// 005fa4d5: FST float ptr [EBX + 0xbfa4]
// 005fa4db: FLDZ
// 005fa4dd: FCOMPP
// 005fa4df: FNSTSW AX
// 005fa4e1: SAHF
// 005fa4e2: JBE 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa4e8: FLD1
// 005fa4ea: MOV dword ptr [EBP + 0x66],ESI
// 005fa4ed: XOR ECX,ECX
// 005fa4ef: XOR EDI,EDI
// 005fa4f1: FADD float ptr [EBX + 0xbfa4]
// 005fa4f7: MOV dword ptr [EBP + 0x62],ECX
// 005fa4fa: FSTP float ptr [EBX + 0xbfa4]
// 005fa500: MOV EAX,[0x006810c8]
//   Label: LAB_005fa500
//   XREF to: 006810c8 (READ)
// 005fa505: MOV EDX,dword ptr [EBP + 0x62]
// 005fa508: CMP EDX,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 005fa50e: JGE 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa514: PUSH EBX
// 005fa515: MOV ESI,dword ptr [EDI + EAX*0x1 + 0x14f09c]
//   XREF to: 03263314 (READ)
//   XREF to: 03263318 (READ)
// 005fa51c: PUSH ESI
// 005fa51d: MOV EAX,dword ptr [ESI + 0x154]
// 005fa523: CALL dword ptr [EAX + 0xf8]
// 005fa529: ADD ESP,0x8
// 005fa52c: TEST EAX,EAX
// 005fa52e: JNZ 0x005fa53c
//   XREF to: 005fa53c (CONDITIONAL_JUMP)
// 005fa530: MOV EAX,dword ptr [EBP + 0x62]
//   Label: LAB_005fa530
// 005fa533: INC EAX
// 005fa534: ADD EDI,0x4
// 005fa537: MOV dword ptr [EBP + 0x62],EAX
// 005fa53a: JMP 0x005fa500
//   XREF to: 005fa500 (UNCONDITIONAL_JUMP)
// 005fa53c: MOV EAX,dword ptr [EBP + 0x66]
//   Label: LAB_005fa53c
// 005fa53f: FLD float ptr [ESI + 0x20]
// 005fa542: FSUB float ptr [EAX]
// 005fa544: FSTP float ptr [EBP + 0xfffffed2]
// 005fa54a: FLD float ptr [ESI + 0x24]
// 005fa54d: FSUB float ptr [EAX + 0x4]
// 005fa550: FST float ptr [EBP + 0xfffffed6]
// 005fa556: FLD float ptr [ESI + 0x28]
// 005fa559: FSUB float ptr [EAX + 0x8]
// 005fa55c: FXCH
// 005fa55e: FABS
// 005fa560: FXCH
// 005fa562: FSTP float ptr [EBP + 0xfffffeda]
// 005fa568: FCOMP double ptr [0x00658815]
//   XREF to: 00658815 (READ)
// 005fa56e: FNSTSW AX
// 005fa570: SAHF
// 005fa571: JA 0x005fa530
//   XREF to: 005fa530 (CONDITIONAL_JUMP)
// 005fa573: FLD float ptr [EBP + 0xfffffed2]
// 005fa579: FMUL ST0
// 005fa57b: FLD float ptr [EBP + 0xfffffeda]
// 005fa581: FMUL ST0
// 005fa583: XOR EAX,EAX
// 005fa585: FADDP
// 005fa587: MOV dword ptr [EBP + 0xfffffed6],EAX
// 005fa58d: FSQRT
// 005fa58f: FCOMP float ptr [EBX + 0xbe34]
// 005fa595: FNSTSW AX
// 005fa597: SAHF
// 005fa598: JA 0x005fa530
//   XREF to: 005fa530 (CONDITIONAL_JUMP)
// 005fa59a: PUSH EBX
// 005fa59b: PUSH 0x6586b5
//   XREF to: 006586b5 (DATA)
// 005fa5a0: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005fa5a6: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005fa5a7: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005fa5ac: ADD ESP,0xc
// 005fa5af: PUSH 0x1
// 005fa5b1: PUSH 0xf
// 005fa5b3: LEA EAX,[EBX + 0x158]
// 005fa5b9: PUSH EAX
// 005fa5ba: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fa5bf: MOV ECX,dword ptr [EBX + 0xbed4]
// 005fa5c5: ADD ESP,0xc
// 005fa5c8: TEST ECX,ECX
// 005fa5ca: JZ 0x005fa5df
//   XREF to: 005fa5df (CONDITIONAL_JUMP)
// 005fa5cc: PUSH ECX
// 005fa5cd: CALL core_grave.cpp_FUN_004ee790
//   XREF to: 004ee790 (UNCONDITIONAL_CALL)
// 005fa5d2: ADD ESP,0x4
// 005fa5d5: MOV dword ptr [EBX + 0xbed4],0x0
// 005fa5df: MOV dword ptr [EBX + 0xbe34],0x42c80000
//   Label: LAB_005fa5df
// 005fa5e9: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fa5ee: MOV ESI,dword ptr [EBX + 0xbe28]
//   Label: LAB_005fa5ee
// 005fa5f4: TEST ESI,ESI
// 005fa5f6: JNZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa5fc: CMP dword ptr [EBX + 0xdc],0x0
// 005fa603: JNZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa609: PUSH ESI
// 005fa60a: LEA EAX,[EBP + -0x1a]
// 005fa60d: PUSH EAX
// 005fa60e: PUSH EDI
// 005fa60f: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005fa614: ADD ESP,0xc
// 005fa617: PUSH EAX
// 005fa618: LEA EAX,[EBP + 0xfffffec6]
// 005fa61e: PUSH EAX
// 005fa61f: PUSH EBX
// 005fa620: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005fa625: ADD ESP,0xc
// 005fa628: PUSH ESI
// 005fa629: LEA EAX,[EBP + 0xfffffec6]
// 005fa62f: PUSH EAX
// 005fa630: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 005fa636: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 005fa637: CALL core_gore.cpp_FUN_004ede30
//   XREF to: 004ede30 (UNCONDITIONAL_CALL)
// 005fa63c: ADD ESP,0xc
// 005fa63f: MOV dword ptr [EBX + 0xbe28],0x1
// 005fa649: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fa64e: FLD float ptr [EBP + 0x92]
//   Label: LAB_005fa64e
// 005fa654: FMUL double ptr [0x006587bd]
//   XREF to: 006587bd (READ)
// 005fa65a: SUB ESP,0x4
// 005fa65d: FSTP float ptr [ESP]
// 005fa660: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005fa665: ADD ESP,0x4
// 005fa668: TEST EAX,EAX
// 005fa66a: JZ 0x005fa694
//   XREF to: 005fa694 (CONDITIONAL_JUMP)
// 005fa66c: PUSH 0x0
// 005fa66e: MOV EAX,0x6586cf
//   XREF to: 006586cf (DATA)
// 005fa673: PUSH EAX
//   XREF to: 006586cf (DATA)
// 005fa674: LEA EAX,[EBX + 0x158]
// 005fa67a: PUSH EAX
// 005fa67b: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 005fa680: ADD ESP,0x4
// 005fa683: PUSH EAX
// 005fa684: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 005fa689: ADD ESP,0xc
// 005fa68c: TEST EAX,EAX
// 005fa68e: JGE 0x005fa72d
//   XREF to: 005fa72d (CONDITIONAL_JUMP)
// 005fa694: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005fa694
// 005fa69a: PUSH EBX
// 005fa69b: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 005fa6a0: ADD ESP,0x8
// 005fa6a3: TEST EAX,EAX
// 005fa6a5: JZ 0x005fa6b0
//   XREF to: 005fa6b0 (CONDITIONAL_JUMP)
// 005fa6a7: PUSH EBX
// 005fa6a8: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005fa6ad: ADD ESP,0x4
// 005fa6b0: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005fa6b0
// 005fa6b6: MOV EAX,dword ptr [EBX + 0x154]
// 005fa6bc: PUSH EBX
// 005fa6bd: CALL dword ptr [EAX + 0x158]
// 005fa6c3: MOV ECX,dword ptr [EBX + 0xbe3c]
// 005fa6c9: ADD ESP,0x8
// 005fa6cc: TEST ECX,ECX
// 005fa6ce: JNZ 0x005fa6d6
//   XREF to: 005fa6d6 (CONDITIONAL_JUMP)
// 005fa6d0: CMP dword ptr [EBP + 0x52],0x0
// 005fa6d4: JNZ 0x005fa745
//   XREF to: 005fa745 (CONDITIONAL_JUMP)
// 005fa6d6: CMP dword ptr [EBX + 0xbe3c],0x0
//   Label: LAB_005fa6d6
// 005fa6dd: JZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa6e3: PUSH EBX
// 005fa6e4: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005fa6e9: ADD ESP,0x4
// 005fa6ec: MOV EAX,dword ptr [EBX + 0xbfa0]
// 005fa6f2: PUSH EAX
// 005fa6f3: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005fa6f8: ADD ESP,0x4
// 005fa6fb: TEST EAX,EAX
// 005fa6fd: JNZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa703: CMP dword ptr [EBX + 0xbf48],0x0
// 005fa70a: JZ 0x005fa78f
//   XREF to: 005fa78f (CONDITIONAL_JUMP)
// 005fa710: PUSH 0x6586d7
//   XREF to: 006586d7 (DATA)
// 005fa715: MOV EAX,dword ptr [EBX + 0x154]
// 005fa71b: PUSH EBX
// 005fa71c: CALL dword ptr [EAX + 0x24]
// 005fa71f: ADD ESP,0x8
// 005fa722: MOV dword ptr [EBX + 0xbfa0],EAX
// 005fa728: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fa72d: PUSH 0x1
//   Label: LAB_005fa72d
// 005fa72f: PUSH 0x10
// 005fa731: LEA EAX,[EBX + 0x158]
// 005fa737: PUSH EAX
// 005fa738: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fa73d: ADD ESP,0xc
// 005fa740: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fa745: MOV EAX,[0x02db87d0]
//   Label: LAB_005fa745
//   XREF to: 02db87d0 (READ)
// 005fa74a: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005fa751: PUSH EAX
// 005fa752: MOV EDX,dword ptr [EAX + 0x154]
// 005fa758: CALL dword ptr [EDX + 0x120]
// 005fa75e: ADD ESP,0x4
// 005fa761: TEST EAX,EAX
// 005fa763: JZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa769: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005fa76e: MOV dword ptr [EAX + 0x220],0x1
//   XREF to: 02d81cbc (WRITE)
// 005fa778: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005fa77d: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005fa784: MOV dword ptr [EBX + 0xbe3c],EAX
// 005fa78a: JMP 0x005fa6d6
//   XREF to: 005fa6d6 (UNCONDITIONAL_JUMP)
// 005fa78f: PUSH 0x6586eb
//   Label: LAB_005fa78f
//   XREF to: 006586eb (DATA)
// 005fa794: MOV EAX,dword ptr [EBX + 0x154]
// 005fa79a: PUSH EBX
// 005fa79b: CALL dword ptr [EAX + 0x24]
// 005fa79e: ADD ESP,0x8
// 005fa7a1: MOV dword ptr [EBX + 0xbfa0],EAX
// 005fa7a7: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fa7ac: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005fa7ac
// 005fa7b2: MOV EAX,dword ptr [EBX + 0x154]
// 005fa7b8: PUSH EBX
// 005fa7b9: MOV ESI,dword ptr [EBX + 0xbe3c]
// 005fa7bf: CALL dword ptr [EAX + 0x158]
// 005fa7c5: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005fa7cb: ADD ESP,0x8
// 005fa7ce: TEST EAX,EAX
// 005fa7d0: JNZ 0x005fa819
//   XREF to: 005fa819 (CONDITIONAL_JUMP)
// 005fa7d2: CMP dword ptr [EBP + 0x52],0x0
// 005fa7d6: JZ 0x005fa819
//   XREF to: 005fa819 (CONDITIONAL_JUMP)
// 005fa7d8: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005fa7dd: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005fa7e4: PUSH EAX
// 005fa7e5: MOV EDX,dword ptr [EAX + 0x154]
// 005fa7eb: CALL dword ptr [EDX + 0x120]
// 005fa7f1: ADD ESP,0x4
// 005fa7f4: TEST EAX,EAX
// 005fa7f6: JZ 0x005fa819
//   XREF to: 005fa819 (CONDITIONAL_JUMP)
// 005fa7f8: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005fa7fd: MOV dword ptr [EAX + 0x220],0x1
//   XREF to: 02d81cbc (WRITE)
// 005fa807: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005fa80c: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005fa813: MOV dword ptr [EBX + 0xbe3c],EAX
// 005fa819: CMP dword ptr [EBX + 0xbe3c],0x0
//   Label: LAB_005fa819
// 005fa820: JZ 0x005fa86c
//   XREF to: 005fa86c (CONDITIONAL_JUMP)
// 005fa822: TEST ESI,ESI
// 005fa824: JNZ 0x005fa8a1
//   XREF to: 005fa8a1 (CONDITIONAL_JUMP)
// 005fa82a: MOV EAX,dword ptr [EBX + 0xbfa0]
// 005fa830: PUSH EAX
// 005fa831: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005fa836: ADD ESP,0x4
// 005fa839: TEST EAX,EAX
// 005fa83b: JNZ 0x005fa85e
//   XREF to: 005fa85e (CONDITIONAL_JUMP)
// 005fa83d: CMP dword ptr [EBX + 0xbf48],0x0
// 005fa844: JZ 0x005fa89a
//   XREF to: 005fa89a (CONDITIONAL_JUMP)
// 005fa846: PUSH 0x6586f7
//   XREF to: 006586f7 (DATA)
// 005fa84b: MOV EAX,dword ptr [EBX + 0x154]
//   Label: LAB_005fa84b
// 005fa851: PUSH EBX
// 005fa852: CALL dword ptr [EAX + 0x24]
// 005fa855: ADD ESP,0x8
// 005fa858: MOV dword ptr [EBX + 0xbfa0],EAX
// 005fa85e: PUSH EBX
//   Label: LAB_005fa85e
// 005fa85f: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005fa864: ADD ESP,0x4
// 005fa867: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fa86c: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005fa86c
// 005fa872: PUSH EBX
// 005fa873: CALL core_enemy.cpp_CEnemy_FUN_004a9fd0
//   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)
// 005fa878: ADD ESP,0x8
// 005fa87b: TEST EAX,EAX
// 005fa87d: JNZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa883: PUSH 0x1
// 005fa885: PUSH EAX
// 005fa886: LEA EAX,[EBX + 0x158]
// 005fa88c: PUSH EAX
// 005fa88d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fa892: ADD ESP,0xc
// 005fa895: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fa89a: PUSH 0x65870b
//   Label: LAB_005fa89a
//   XREF to: 0065870b (DATA)
// 005fa89f: JMP 0x005fa84b
//   XREF to: 005fa84b (UNCONDITIONAL_JUMP)
// 005fa8a1: MOV EAX,dword ptr [EBX + 0xbf7c]
//   Label: LAB_005fa8a1
// 005fa8a7: MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298]
// 005fa8ae: XOR EDI,EDI
// 005fa8b0: TEST ESI,ESI
// 005fa8b2: JZ 0x005fa8b9
//   XREF to: 005fa8b9 (CONDITIONAL_JUMP)
// 005fa8b4: MOV EDI,0x1
// 005fa8b9: MOV EAX,dword ptr [EBX + 0xbf84]
//   Label: LAB_005fa8b9
// 005fa8bf: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 005fa8c7: JZ 0x005fa8ca
//   XREF to: 005fa8ca (CONDITIONAL_JUMP)
// 005fa8c9: INC EDI
// 005fa8ca: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_005fa8ca
// 005fa8d0: PUSH dword ptr [EBP + 0x92]
// 005fa8d6: MOV dword ptr [EAX + 0x8],0x0
// 005fa8dd: PUSH EBX
// 005fa8de: MOV EDX,dword ptr [EAX + 0x8]
// 005fa8e1: MOV dword ptr [EAX + 0x4],EDX
// 005fa8e4: MOV EDX,dword ptr [EAX + 0x4]
// 005fa8e7: MOV dword ptr [EAX],EDX
// 005fa8e9: CALL core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530
//   XREF to: 005fb530 (UNCONDITIONAL_CALL)
// 005fa8ee: ADD ESP,0x8
// 005fa8f1: TEST EAX,EAX
// 005fa8f3: JNZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fa8f9: PUSH 0x1
// 005fa8fb: MOV EAX,[0x006659c8]
//   XREF to: 006659c8 (READ)
// 005fa900: PUSH EBX
// 005fa901: MOV dword ptr [EBP + 0x3a],EAX
// 005fa904: CALL core_zombie.cpp_CZombie_FUN_005fbd00
//   XREF to: 005fbd00 (UNCONDITIONAL_CALL)
// 005fa909: ADD ESP,0x8
// 005fa90c: MOV dword ptr [EBP + 0x4a],EAX
// 005fa90f: TEST EAX,EAX
// 005fa911: JL 0x005fa9ab
//   XREF to: 005fa9ab (CONDITIONAL_JUMP)
// 005fa917: MOV EDX,EAX
// 005fa919: SHL EAX,0x4
// 005fa91c: ADD EAX,EDX
// 005fa91e: SHL EAX,0x2
// 005fa921: ADD EAX,EBX
// 005fa923: MOV ECX,dword ptr [EAX + 0x24b4]
// 005fa929: TEST ECX,ECX
// 005fa92b: JZ 0x005fa9ab
//   XREF to: 005fa9ab (CONDITIONAL_JUMP)
// 005fa931: CMP dword ptr [EBX + 0xbed0],0x1
// 005fa938: JNZ 0x005fa9ab
//   XREF to: 005fa9ab (CONDITIONAL_JUMP)
// 005fa93a: MOV EDX,0x3f800000
// 005fa93f: MOV EAX,ECX
// 005fa941: MOV dword ptr [EBP + 0x46],EDX
// 005fa944: TEST ECX,ECX
// 005fa946: JZ 0x005fa9a5
//   XREF to: 005fa9a5 (CONDITIONAL_JUMP)
// 005fa948: LEA EDX,[EBP + 0xfffffdbe]
// 005fa94e: PUSH EDX
// 005fa94f: MOV ECX,dword ptr [ECX + 0x154]
// 005fa955: PUSH EAX
// 005fa956: CALL dword ptr [ECX + 0x14]
// 005fa959: MOV ESI,EAX
// 005fa95b: ADD EAX,0xc
// 005fa95e: ADD ESP,0x8
// 005fa961: MOV dword ptr [EBP + 0x76],EAX
// 005fa964: LEA EAX,[EBP + 0xfffffef6]
// 005fa96a: PUSH EAX
// 005fa96b: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 005fa970: MOV EAX,dword ptr [EBP + 0x76]
// 005fa973: FLD float ptr [EAX]
// 005fa975: FSUB float ptr [ESI]
// 005fa977: FSTP float ptr [EBP + 0xfffffef6]
// 005fa97d: FLD float ptr [EAX + 0x4]
// 005fa980: FSUB float ptr [ESI + 0x4]
// 005fa983: FSTP float ptr [EBP + 0xfffffefa]
// 005fa989: FLD float ptr [EAX + 0x8]
// 005fa98c: FSUB float ptr [ESI + 0x8]
// 005fa98f: FST float ptr [EBP + 0xfffffefe]
// 005fa995: FMUL double ptr [0x00658785]
//   XREF to: 00658785 (READ)
// 005fa99b: FLD1
// 005fa99d: FADDP
// 005fa99f: ADD ESP,0x4
// 005fa9a2: FSTP float ptr [EBP + 0x46]
// 005fa9a5: MOV EAX,dword ptr [EBP + 0x46]
//   Label: LAB_005fa9a5
// 005fa9a8: MOV dword ptr [EBP + 0x3a],EAX
// 005fa9ab: PUSH 0x3eb2b8c2
//   Label: LAB_005fa9ab
// 005fa9b0: PUSH 0x3f8ccccd
// 005fa9b5: XOR ECX,ECX
// 005fa9b7: MOV EAX,dword ptr [EBP + 0x3a]
// 005fa9ba: MOV dword ptr [EBP + 0xfffffe8a],ECX
// 005fa9c0: MOV dword ptr [EBP + 0xfffffe92],EAX
// 005fa9c6: LEA EAX,[EBP + 0xfffffe8a]
// 005fa9cc: MOV dword ptr [EBP + 0xfffffe8e],ECX
// 005fa9d2: PUSH EAX
// 005fa9d3: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005fa9d9: PUSH EAX
// 005fa9da: MOV EDX,dword ptr [EAX + 0x154]
// 005fa9e0: CALL dword ptr [EDX + 0xbc]
// 005fa9e6: ADD ESP,0x4
// 005fa9e9: PUSH EAX
// 005fa9ea: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005fa9f0: ADD EAX,0x20
// 005fa9f3: PUSH EAX
// 005fa9f4: PUSH EBX
// 005fa9f5: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 005fa9fa: ADD ESP,0x18
// 005fa9fd: LEA ESI,[EBX + 0x158]
// 005faa03: TEST EAX,EAX
// 005faa05: JL 0x005faa7a
//   XREF to: 005faa7a (CONDITIONAL_JUMP)
// 005faa07: JLE 0x005faaf9
//   XREF to: 005faaf9 (CONDITIONAL_JUMP)
// 005faa0d: TEST EDI,EDI
// 005faa0f: JLE 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005faa15: FLD float ptr [EBX + 0xbe38]
// 005faa1b: FLDZ
// 005faa1d: FCOMPP
// 005faa1f: FNSTSW AX
// 005faa21: SAHF
// 005faa22: JC 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005faa28: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005faa2e: PUSH EAX
// 005faa2f: MOV EDX,dword ptr [EAX + 0x154]
// 005faa35: CALL dword ptr [EDX + 0x108]
// 005faa3b: ADD ESP,0x4
// 005faa3e: TEST EAX,EAX
// 005faa40: JNZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005faa46: MOV EDX,dword ptr [EBP + 0x4a]
// 005faa49: TEST EDX,EDX
// 005faa4b: JL 0x005faaa1
//   XREF to: 005faaa1 (CONDITIONAL_JUMP)
// 005faa4d: MOV EAX,EDX
// 005faa4f: SHL EAX,0x4
// 005faa52: ADD EAX,EDX
// 005faa54: CMP dword ptr [EBX + EAX*0x4 + 0x24b4],0x0
// 005faa5c: JZ 0x005faaa1
//   XREF to: 005faaa1 (CONDITIONAL_JUMP)
// 005faa5e: PUSH 0x1
// 005faa60: PUSH 0x2
// 005faa62: PUSH ESI
// 005faa63: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_005faa63
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005faa68: ADD ESP,0xc
// 005faa6b: MOV dword ptr [EBX + 0xbe38],0x3f4ccccd
// 005faa75: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005faa7a: PUSH EBX
//   Label: LAB_005faa7a
// 005faa7b: PUSH 0x658717
//   XREF to: 00658717 (DATA)
// 005faa80: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005faa86: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 005faa87: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005faa8c: ADD ESP,0xc
// 005faa8f: PUSH 0x1
// 005faa91: PUSH 0x0
// 005faa93: PUSH ESI
// 005faa94: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005faa99: ADD ESP,0xc
// 005faa9c: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005faaa1: CMP dword ptr [EBP + 0x52],0x0
//   Label: LAB_005faaa1
// 005faaa5: JZ 0x005faae9
//   XREF to: 005faae9 (CONDITIONAL_JUMP)
// 005faaa7: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005faaad: PUSH EAX
// 005faaae: MOV EDX,dword ptr [EAX + 0x154]
// 005faab4: CALL dword ptr [EDX + 0x120]
// 005faaba: ADD ESP,0x4
// 005faabd: TEST EAX,EAX
// 005faabf: JZ 0x005faae9
//   XREF to: 005faae9 (CONDITIONAL_JUMP)
// 005faac1: PUSH 0x3f000000
// 005faac6: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005faacb: ADD ESP,0x4
// 005faace: LEA EDX,[EBX + 0x158]
// 005faad4: TEST EAX,EAX
// 005faad6: JZ 0x005faadf
//   XREF to: 005faadf (CONDITIONAL_JUMP)
// 005faad8: PUSH 0x1
// 005faada: PUSH 0x18
// 005faadc: PUSH EDX
// 005faadd: JMP 0x005faa63
//   XREF to: 005faa63 (UNCONDITIONAL_JUMP)
// 005faadf: PUSH 0x1
//   Label: LAB_005faadf
// 005faae1: PUSH 0x19
// 005faae3: PUSH EDX
// 005faae4: JMP 0x005faa63
//   XREF to: 005faa63 (UNCONDITIONAL_JUMP)
// 005faae9: PUSH 0x1
//   Label: LAB_005faae9
// 005faaeb: PUSH 0x3
// 005faaed: LEA EAX,[EBX + 0x158]
// 005faaf3: PUSH EAX
// 005faaf4: JMP 0x005faa63
//   XREF to: 005faa63 (UNCONDITIONAL_JUMP)
// 005faaf9: MOV EDI,dword ptr [EBX + 0xbed0]
//   Label: LAB_005faaf9
// 005faaff: PUSH EDI
// 005fab00: PUSH EBX
// 005fab01: CALL core_zombie.cpp_CZombie_FUN_005fbd00
//   XREF to: 005fbd00 (UNCONDITIONAL_CALL)
// 005fab06: LEA EDX,[EBX + 0x20]
// 005fab09: MOV EDI,EAX
// 005fab0b: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005fab11: FLD float ptr [EDX]
// 005fab13: FSUB float ptr [EAX + 0x20]
// 005fab16: FSTP float ptr [EBP + 0xfffffede]
// 005fab1c: FLD float ptr [EDX + 0x4]
// 005fab1f: FSUB float ptr [EAX + 0x24]
// 005fab22: FST float ptr [EBP + 0xfffffee2]
// 005fab28: FMUL float ptr [EBP + 0xfffffee2]
// 005fab2e: FLD float ptr [EBP + 0xfffffede]
// 005fab34: FMUL ST0
// 005fab36: FLD float ptr [EDX + 0x8]
// 005fab39: FSUB float ptr [EAX + 0x28]
// 005fab3c: FXCH
// 005fab3e: FADDP ST2,ST0
// 005fab40: FST float ptr [EBP + 0xfffffee6]
// 005fab46: FMUL float ptr [EBP + 0xfffffee6]
// 005fab4c: FADDP
// 005fab4e: FSQRT
// 005fab50: ADD ESP,0x8
// 005fab53: FCOMP double ptr [0x006587ad]
//   XREF to: 006587ad (READ)
// 005fab59: FNSTSW AX
// 005fab5b: SAHF
// 005fab5c: JNC 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fab62: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005fab68: ADD EAX,0x20
// 005fab6b: PUSH EAX
// 005fab6c: LEA EAX,[EBP + 0xfffffe7e]
// 005fab72: PUSH EAX
// 005fab73: PUSH EBX
// 005fab74: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005fab79: ADD ESP,0xc
// 005fab7c: PUSH EAX
// 005fab7d: LEA EAX,[EBP + 0xfffffe72]
// 005fab83: PUSH EAX
// 005fab84: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005fab89: FLD float ptr [EAX + 0x4]
// 005fab8c: FABS
// 005fab8e: ADD ESP,0x8
// 005fab91: FCOMP double ptr [0x006587b5]
//   XREF to: 006587b5 (READ)
// 005fab97: FNSTSW AX
// 005fab99: SAHF
// 005fab9a: JNC 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005faba0: TEST EDI,EDI
// 005faba2: JL 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005faba8: MOV EDX,dword ptr [EBX + 0xbed0]
// 005fabae: CMP EDX,0x2
// 005fabb1: JC 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fabb7: MOV EAX,EDI
// 005fabb9: SHL EAX,0x4
// 005fabbc: ADD EAX,EDI
// 005fabbe: SHL EAX,0x2
// 005fabc1: ADD EAX,EBX
// 005fabc3: CMP EDX,0x2
// 005fabc6: JA 0x005fac2f
//   XREF to: 005fac2f (CONDITIONAL_JUMP)
// 005fabc8: CMP dword ptr [EAX + 0x24b4],0x0
// 005fabcf: JZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fabd5: PUSH EBX
// 005fabd6: PUSH 0x658744
//   XREF to: 00658744 (DATA)
// 005fabdb: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005fabe0: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005fabe1: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005fabe6: ADD ESP,0xc
// 005fabe9: PUSH 0x1
// 005fabeb: PUSH 0xd
// 005fabed: PUSH ESI
// 005fabee: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fabf3: ADD ESP,0xc
// 005fabf6: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fabfb: CMP dword ptr [EAX + 0x24b4],0x0
//   Label: LAB_005fabfb
// 005fac02: JZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fac08: PUSH EBX
// 005fac09: PUSH 0x658738
//   XREF to: 00658738 (DATA)
// 005fac0e: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005fac14: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005fac15: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005fac1a: ADD ESP,0xc
// 005fac1d: PUSH 0x1
// 005fac1f: PUSH 0xb
// 005fac21: PUSH ESI
// 005fac22: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fac27: ADD ESP,0xc
// 005fac2a: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fac2f: CMP EDX,0x3
//   Label: LAB_005fac2f
// 005fac32: JZ 0x005fabfb
//   XREF to: 005fabfb (CONDITIONAL_JUMP)
// 005fac34: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fac39: MOV ECX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005fac39
// 005fac3f: TEST ECX,ECX
// 005fac41: JZ 0x005fa85e
//   XREF to: 005fa85e (CONDITIONAL_JUMP)
// 005fac47: PUSH ECX
// 005fac48: MOV EDX,dword ptr [ECX + 0x154]
// 005fac4e: CALL dword ptr [EDX + 0x120]
// 005fac54: ADD ESP,0x4
// 005fac57: TEST EAX,EAX
// 005fac59: JG 0x005fa85e
//   XREF to: 005fa85e (CONDITIONAL_JUMP)
// 005fac5f: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005fac65: PUSH EAX
// 005fac66: MOV EDX,dword ptr [EAX + 0x154]
// 005fac6c: CALL dword ptr [EDX + 0x108]
// 005fac72: ADD ESP,0x4
// 005fac75: TEST EAX,EAX
// 005fac77: JNZ 0x005fac8e
//   XREF to: 005fac8e (CONDITIONAL_JUMP)
// 005fac79: MOV ESI,0x40400000
// 005fac7e: MOV EAX,[0x006659c8]
//   XREF to: 006659c8 (READ)
// 005fac83: MOV dword ptr [EBP + 0x3e],ESI
// 005fac86: MOV dword ptr [EBP + 0x56],EAX
// 005fac89: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fac8e: CMP EAX,EBX
//   Label: LAB_005fac8e
// 005fac90: JZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fac96: PUSH EBX
//   Label: LAB_005fac96
// 005fac97: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005fac9c: ADD ESP,0x4
// 005fac9f: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005faca4: CMP dword ptr [EBX + 0xbe3c],0x0
//   Label: LAB_005faca4
// 005facab: JZ 0x005fac96
//   XREF to: 005fac96 (CONDITIONAL_JUMP)
// 005facad: PUSH 0x1
// 005facaf: PUSH EBX
// 005facb0: CALL core_zombie.cpp_CZombie_FUN_005fbd00
//   XREF to: 005fbd00 (UNCONDITIONAL_CALL)
// 005facb5: ADD ESP,0x8
// 005facb8: MOV ESI,EAX
// 005facba: TEST EAX,EAX
// 005facbc: JL 0x005fade4
//   XREF to: 005fade4 (CONDITIONAL_JUMP)
// 005facc2: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005facc8: PUSH EAX
// 005facc9: MOV EDX,dword ptr [EAX + 0x154]
// 005faccf: CALL dword ptr [EDX + 0x120]
// 005facd5: ADD ESP,0x4
// 005facd8: TEST EAX,EAX
// 005facda: JG 0x005fade4
//   XREF to: 005fade4 (CONDITIONAL_JUMP)
// 005face0: MOV EDX,ESI
// 005face2: MOV EAX,EDX
// 005face4: SHL EAX,0x4
// 005face7: ADD EAX,EDX
// 005face9: CMP dword ptr [EBX + EAX*0x4 + 0x24b4],0x0
// 005facf1: JZ 0x005fade4
//   XREF to: 005fade4 (CONDITIONAL_JUMP)
// 005facf7: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005facfd: PUSH EAX
// 005facfe: MOV EDX,dword ptr [EAX + 0x154]
// 005fad04: CALL dword ptr [EDX + 0x108]
// 005fad0a: ADD ESP,0x4
// 005fad0d: TEST EAX,EAX
// 005fad0f: JNZ 0x005fade4
//   XREF to: 005fade4 (CONDITIONAL_JUMP)
// 005fad15: MOV EAX,ESI
// 005fad17: SHL EAX,0x4
// 005fad1a: ADD EAX,ESI
// 005fad1c: MOV ECX,0x3f800000
// 005fad21: MOV EAX,dword ptr [EBX + EAX*0x4 + 0x24b4]
// 005fad28: MOV dword ptr [EBP + 0x4e],ECX
// 005fad2b: TEST EAX,EAX
// 005fad2d: JZ 0x005fad94
//   XREF to: 005fad94 (CONDITIONAL_JUMP)
// 005fad2f: LEA EDX,[EBP + 0xfffffd8e]
// 005fad35: PUSH EDX
// 005fad36: MOV ECX,dword ptr [EAX + 0x154]
// 005fad3c: PUSH EAX
// 005fad3d: CALL dword ptr [ECX + 0x14]
// 005fad40: ADD ESP,0x8
// 005fad43: MOV ESI,EAX
// 005fad45: LEA EAX,[EBP + 0xfffffe96]
// 005fad4b: PUSH EAX
// 005fad4c: LEA EDI,[ESI + 0xc]
// 005fad4f: MOV dword ptr [EBP + 0x22],EAX
// 005fad52: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 005fad57: FLD float ptr [EDI]
// 005fad59: FSUB float ptr [ESI]
// 005fad5b: FSTP float ptr [EBP + 0xfffffe96]
// 005fad61: FLD float ptr [EDI + 0x4]
// 005fad64: FSUB float ptr [ESI + 0x4]
// 005fad67: FSTP float ptr [EBP + 0xfffffe9a]
// 005fad6d: FLD float ptr [EDI + 0x8]
// 005fad70: FSUB float ptr [ESI + 0x8]
// 005fad73: MOV EAX,dword ptr [EBP + 0x22]
// 005fad76: FSTP float ptr [EBP + 0xfffffe9e]
// 005fad7c: FLD float ptr [EAX + 0x8]
// 005fad7f: FMUL double ptr [0x00658785]
//   XREF to: 00658785 (READ)
// 005fad85: FLD float ptr [EBP + 0x4e]
// 005fad88: FXCH
// 005fad8a: FADD ST0,ST1
// 005fad8c: ADD ESP,0x4
// 005fad8f: FSTP ST1
// 005fad91: FSTP float ptr [EBP + 0x4e]
// 005fad94: MOV EAX,dword ptr [EBP + 0x4e]
//   Label: LAB_005fad94
// 005fad97: MOV dword ptr [EBP + 0x56],EAX
// 005fad9a: LEA EAX,[EBX + 0x158]
// 005fada0: PUSH EAX
// 005fada1: CALL core_motion.cpp_CMotionController_FUN_0052e2b0
//   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)
// 005fada6: FLD1
// 005fada8: MOV dword ptr [EBP + 0x76],EAX
// 005fadab: ADD ESP,0x4
// 005fadae: MOV EAX,dword ptr [EBP + 0x76]
// 005fadb1: MOV dword ptr [EBP + 0x36],EAX
// 005fadb4: FLD float ptr [EBP + 0x36]
// 005fadb7: FSTP double ptr [EBP + 0x2]
// 005fadba: FCOMP double ptr [EBP + 0x2]
// 005fadbd: FNSTSW AX
// 005fadbf: SAHF
// 005fadc0: JA 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fadc6: FLD double ptr [EBP + 0x2]
// 005fadc9: FCOMP double ptr [0x006587a5]
//   XREF to: 006587a5 (READ)
// 005fadcf: FNSTSW AX
// 005fadd1: SAHF
// 005fadd2: JA 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fadd8: MOV dword ptr [EBP + 0x42],0x1
// 005faddf: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fade4: PUSH EBX
//   Label: LAB_005fade4
// 005fade5: PUSH 0x658750
//   XREF to: 00658750 (DATA)
// 005fadea: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005fadf0: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 005fadf1: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005fadf6: ADD ESP,0xc
// 005fadf9: PUSH EBX
// 005fadfa: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005fadff: ADD ESP,0x4
// 005fae02: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fae07: PUSH dword ptr [EBP + 0x92]
//   Label: LAB_005fae07
// 005fae0d: MOV EAX,dword ptr [EBX + 0x154]
// 005fae13: PUSH EBX
// 005fae14: CALL dword ptr [EAX + 0x158]
// 005fae1a: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005fae20: ADD ESP,0x8
// 005fae23: TEST EAX,EAX
// 005fae25: JZ 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fae2b: FLD float ptr [ESI]
// 005fae2d: FSUB float ptr [EAX + 0x20]
// 005fae30: FMUL ST0
// 005fae32: FLD float ptr [ESI + 0x8]
// 005fae35: FSUB float ptr [EAX + 0x28]
// 005fae38: FMUL ST0
// 005fae3a: MOV EDX,EAX
// 005fae3c: FADDP
// 005fae3e: ADD EAX,0x20
// 005fae41: FSQRT
// 005fae43: FCOMP double ptr [0x0065879d]
//   XREF to: 0065879d (READ)
// 005fae49: FNSTSW AX
// 005fae4b: SAHF
// 005fae4c: JA 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fae52: FLD float ptr [EBX + 0x24]
// 005fae55: FSUB float ptr [EDX + 0x24]
// 005fae58: FABS
// 005fae5a: FCOMP double ptr [0x006587a5]
//   XREF to: 006587a5 (READ)
// 005fae60: FNSTSW AX
// 005fae62: SAHF
// 005fae63: JA 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005fae69: PUSH 0x1
// 005fae6b: PUSH 0x0
// 005fae6d: PUSH EDI
// 005fae6e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fae73: ADD ESP,0xc
// 005fae76: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005fae7b: MOV EDX,0xbf800000
//   Label: LAB_005fae7b
// 005fae80: MOV ECX,0x3e99999a
// 005fae85: PUSH EDI
// 005fae86: MOV dword ptr [EBP + 0x56],EDX
// 005fae89: MOV dword ptr [EBP + 0x3e],ECX
// 005fae8c: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005fae91: MOV EAX,dword ptr [EAX + 0x24]
// 005fae94: ADD ESP,0x4
// 005fae97: CMP EAX,0x8
// 005fae9a: JNC 0x005faeae
//   XREF to: 005faeae (CONDITIONAL_JUMP)
// 005fae9c: CMP EAX,0x1
// 005fae9f: JNC 0x005faef6
//   XREF to: 005faef6 (CONDITIONAL_JUMP)
// 005faea1: TEST EAX,EAX
// 005faea3: JZ 0x005fa64e
//   XREF to: 005fa64e (CONDITIONAL_JUMP)
// 005faea9: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005faeae: JBE 0x005fa5ee
//   Label: LAB_005faeae
//   XREF to: 005fa5ee (CONDITIONAL_JUMP)
// 005faeb4: LEA ESI,[EBX + 0x20]
// 005faeb7: CMP EAX,0x18
// 005faeba: JNC 0x005faed9
//   XREF to: 005faed9 (CONDITIONAL_JUMP)
// 005faebc: CMP EAX,0xe
// 005faebf: JC 0x005fa18b
//   XREF to: 005fa18b (CONDITIONAL_JUMP)
// 005faec5: JBE 0x005fa4ab
//   XREF to: 005fa4ab (CONDITIONAL_JUMP)
// 005faecb: CMP EAX,0x14
// 005faece: JZ 0x005fae07
//   XREF to: 005fae07 (CONDITIONAL_JUMP)
// 005faed4: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005faed9: JBE 0x005fa167
//   Label: LAB_005faed9
//   XREF to: 005fa167 (CONDITIONAL_JUMP)
// 005faedf: CMP EAX,0x19
// 005faee2: JBE 0x005fa167
//   XREF to: 005fa167 (CONDITIONAL_JUMP)
// 005faee8: CMP EAX,0x1c
// 005faeeb: JZ 0x005fa291
//   XREF to: 005fa291 (CONDITIONAL_JUMP)
// 005faef1: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005faef6: JBE 0x005fa7ac
//   Label: LAB_005faef6
//   XREF to: 005fa7ac (CONDITIONAL_JUMP)
// 005faefc: CMP EAX,0x2
// 005faeff: JBE 0x005faca4
//   XREF to: 005faca4 (CONDITIONAL_JUMP)
// 005faf05: CMP EAX,0x3
// 005faf08: JZ 0x005fac39
//   XREF to: 005fac39 (CONDITIONAL_JUMP)
// 005faf0e: JMP 0x005fa18b
//   XREF to: 005fa18b (UNCONDITIONAL_JUMP)
// 005faf13: CMP EAX,0xf
//   Label: LAB_005faf13
// 005faf16: JNZ 0x005faf52
//   XREF to: 005faf52 (CONDITIONAL_JUMP)
// 005faf18: PUSH ESI
// 005faf19: LEA EAX,[EBP + 0xffffff1a]
// 005faf1f: PUSH EAX
// 005faf20: PUSH EBX
// 005faf21: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 005faf26: MOV EDX,EAX
// 005faf28: LEA EAX,[EBX + 0x20]
// 005faf2b: FLD float ptr [EDX]
// 005faf2d: FADD float ptr [EAX]
// 005faf2f: FSTP float ptr [EAX]
// 005faf31: FLD float ptr [EDX + 0x4]
// 005faf34: FADD float ptr [EAX + 0x4]
// 005faf37: FSTP float ptr [EAX + 0x4]
// 005faf3a: FLD float ptr [EDX + 0x8]
// 005faf3d: FADD float ptr [EAX + 0x8]
// 005faf40: FSTP float ptr [EAX + 0x8]
// 005faf43: MOV dword ptr [ESI + 0x8],0x0
// 005faf4a: ADD ESP,0xc
// 005faf4d: JMP 0x005f9f17
//   XREF to: 005f9f17 (UNCONDITIONAL_JUMP)
// 005faf52: PUSH EBX
//   Label: LAB_005faf52
// 005faf53: CALL core_charactr.cpp_CCharacter_FUN_004297e0
//   XREF to: 004297e0 (UNCONDITIONAL_CALL)
// 005faf58: ADD ESP,0x4
// 005faf5b: TEST EAX,EAX
// 005faf5d: JZ 0x005f9f22
//   XREF to: 005f9f22 (CONDITIONAL_JUMP)
// 005faf63: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005faf69: TEST EAX,EAX
// 005faf6b: JZ 0x005faf97
//   XREF to: 005faf97 (CONDITIONAL_JUMP)
// 005faf6d: PUSH EAX
// 005faf6e: MOV EDX,dword ptr [EAX + 0x154]
// 005faf74: CALL dword ptr [EDX + 0x108]
// 005faf7a: ADD ESP,0x4
// 005faf7d: CMP EAX,EBX
// 005faf7f: JNZ 0x005faf97
//   XREF to: 005faf97 (CONDITIONAL_JUMP)
// 005faf81: MOV EDX,dword ptr [EBX + 0xbe3c]
// 005faf87: PUSH EDX
// 005faf88: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005faf8e: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005faf8f: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 005faf94: ADD ESP,0x8
// 005faf97: FLD float ptr [EBP + 0x92]
//   Label: LAB_005faf97
// 005faf9d: FLD ST0
// 005faf9f: FMUL double ptr [0x006587f5]
//   XREF to: 006587f5 (READ)
// 005fafa5: FLD float ptr [EBX + 0x242c]
// 005fafab: FXCH
// 005fafad: FSUBR ST0,ST1
// 005fafaf: LEA ECX,[EBX + 0x2428]
// 005fafb5: FSTP ST1
// 005fafb7: FSTP float ptr [EBX + 0x242c]
// 005fafbd: FLD float ptr [ECX]
// 005fafbf: FMUL ST1
// 005fafc1: FSTP float ptr [EBP + 0xfffffe2a]
// 005fafc7: FLD float ptr [ECX + 0x4]
// 005fafca: FMUL ST1
// 005fafcc: LEA EAX,[EBX + 0x241c]
// 005fafd2: FSTP float ptr [EBP + 0xfffffe2e]
// 005fafd8: FMUL float ptr [ECX + 0x8]
// 005fafdb: LEA EDX,[EBX + 0x23ac]
// 005fafe1: FLD float ptr [EBP + 0xfffffe2a]
// 005fafe7: FXCH
// 005fafe9: FSTP float ptr [EBP + 0xfffffe32]
// 005fafef: FADD float ptr [EAX]
// 005faff1: FLD float ptr [EBP + 0xfffffe2e]
// 005faff7: FXCH
// 005faff9: FSTP float ptr [EBP + 0xffffff7a]
// 005fafff: FADD float ptr [EAX + 0x4]
// 005fb002: FLD float ptr [EBP + 0xfffffe32]
// 005fb008: FXCH
// 005fb00a: FSTP float ptr [EBP + 0xffffff7e]
// 005fb010: FADD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 005fb013: FLD float ptr [EBP + 0xffffff7a]
// 005fb019: FXCH
// 005fb01b: FSTP float ptr [EBP + -0x7e]
// 005fb01e: FADD float ptr [EDX]
// 005fb020: FLD float ptr [EBP + 0xffffff7e]
// 005fb026: FXCH
// 005fb028: FSTP float ptr [EBP + 0xfffffe06]
// 005fb02e: FADD float ptr [EDX + 0x4]
// 005fb031: FLD float ptr [EBP + -0x7e]
// 005fb034: FXCH
// 005fb036: FSTP float ptr [EBP + 0xfffffe0a]
// 005fb03c: FADD float ptr [EDX + 0x8]
// 005fb03f: FSTP float ptr [EBP + 0xfffffe0e]
// 005fb045: MOV dword ptr [EAX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 005fb04c: MOV ECX,dword ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 005fb04f: MOV dword ptr [EAX + 0x4],ECX
// 005fb052: MOV ECX,dword ptr [EAX + 0x4]
// 005fb055: MOV dword ptr [EAX],ECX
// 005fb057: MOV dword ptr [EDX + 0x8],0x0
// 005fb05e: LEA EAX,[EBP + 0xfffffe06]
// 005fb064: FLD float ptr [EDX + 0x8]
// 005fb067: PUSH EAX
// 005fb068: FST float ptr [EDX + 0x4]
// 005fb06b: PUSH EBX
// 005fb06c: FSTP float ptr [EDX]
// 005fb06e: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 005fb073: ADD ESP,0x8
// 005fb076: CMP EDI,0x1
// 005fb079: JNZ 0x005f9f22
//   XREF to: 005f9f22 (CONDITIONAL_JUMP)
// 005fb07f: MOV ESI,dword ptr [0x02c14d14]
//   XREF to: 02c14d14 (READ)
// 005fb085: PUSH ESI
// 005fb086: MOV EAX,[0x00823c50]
//   XREF to: 00823c50 (READ)
// 005fb08b: PUSH EAX
// 005fb08c: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005fb091: MOV ESI,EAX
// 005fb093: ADD ESP,0x8
// 005fb096: MOV dword ptr [EBP + 0x32],EAX
// 005fb099: TEST EAX,EAX
// 005fb09b: JZ 0x005f9f22
//   XREF to: 005f9f22 (CONDITIONAL_JUMP)
// 005fb0a1: LEA EDX,[EBP + 0xfffffdd6]
// 005fb0a7: PUSH EDX
// 005fb0a8: MOV EAX,dword ptr [EAX + 0x154]
// 005fb0ae: PUSH ESI
// 005fb0af: CALL dword ptr [EAX + 0x14]
// 005fb0b2: LEA EDX,[EAX + 0xc]
// 005fb0b5: FLD float ptr [EAX]
// 005fb0b7: FADD float ptr [EDX]
// 005fb0b9: FST float ptr [EBP + -0x32]
// 005fb0bc: FLD float ptr [EAX + 0x4]
// 005fb0bf: FADD float ptr [EDX + 0x4]
// 005fb0c2: FXCH
// 005fb0c4: FLD float ptr [0x006587c5]
//   XREF to: 006587c5 (READ)
// 005fb0ca: FXCH
// 005fb0cc: FMUL ST1
// 005fb0ce: FXCH ST2
// 005fb0d0: FST float ptr [EBP + -0x2e]
// 005fb0d3: FMUL ST1
// 005fb0d5: ADD ESP,0x8
// 005fb0d8: FLD float ptr [EAX + 0x8]
// 005fb0db: FADD float ptr [EDX + 0x8]
// 005fb0de: LEA EAX,[EBP + 0xffffff26]
// 005fb0e4: FST float ptr [EBP + -0x2a]
// 005fb0e7: FMULP ST2
// 005fb0e9: PUSH EAX
// 005fb0ea: LEA EAX,[EBP + 0xffffff0e]
// 005fb0f0: FXCH ST2
// 005fb0f2: FSTP float ptr [EBP + 0xffffff26]
// 005fb0f8: PUSH EAX
// 005fb0f9: FXCH
// 005fb0fb: FSTP float ptr [EBP + 0xffffff2a]
// 005fb101: PUSH ESI
// 005fb102: FSTP float ptr [EBP + 0xffffff2e]
// 005fb108: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005fb10d: ADD ESP,0xc
// 005fb110: LEA EAX,[EBP + 0xffffff0e]
// 005fb116: PUSH EAX
// 005fb117: LEA EAX,[EBP + 0xffffff4a]
// 005fb11d: PUSH EAX
// 005fb11e: PUSH EBX
// 005fb11f: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005fb124: ADD ESP,0xc
// 005fb127: PUSH EAX
// 005fb128: LEA EAX,[EBP + 0xffffff62]
// 005fb12e: PUSH EAX
// 005fb12f: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005fb134: FLD float ptr [EAX + 0x4]
// 005fb137: FABS
// 005fb139: ADD ESP,0x8
// 005fb13c: FCOMP double ptr [0x006587fd]
//   XREF to: 006587fd (READ)
// 005fb142: FNSTSW AX
// 005fb144: SAHF
// 005fb145: JNC 0x005f9f22
//   XREF to: 005f9f22 (CONDITIONAL_JUMP)
// 005fb14b: PUSH 0x3f000000
// 005fb150: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005fb155: MOV ESI,0x12
// 005fb15a: ADD ESP,0x4
// 005fb15d: TEST EAX,EAX
// 005fb15f: JZ 0x005fb166
//   XREF to: 005fb166 (CONDITIONAL_JUMP)
// 005fb161: MOV ESI,0x13
// 005fb166: PUSH 0x1
//   Label: LAB_005fb166
// 005fb168: PUSH ESI
// 005fb169: LEA EAX,[EBX + 0x158]
// 005fb16f: PUSH EAX
// 005fb170: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fb175: MOV EAX,dword ptr [EBP + 0x32]
// 005fb178: ADD ESP,0xc
// 005fb17b: MOV dword ptr [EBX + 0xbed8],EAX
// 005fb181: JMP 0x005f9f22
//   XREF to: 005f9f22 (UNCONDITIONAL_JUMP)
// 005fb186: MOV ESI,dword ptr [EBX + 0xbf74]
//   Label: LAB_005fb186
// 005fb18c: PUSH 0x3f000000
// 005fb191: PUSH ESI
// 005fb192: PUSH EAX
// 005fb193: JMP 0x005fa014
//   XREF to: 005fa014 (UNCONDITIONAL_JUMP)
// 005fb198: MOV EAX,dword ptr [EBX + 0xbf8c]
//   Label: LAB_005fb198
// 005fb19e: SHL EAX,0x2
// 005fb1a1: ADD EAX,EBX
// 005fb1a3: CMP dword ptr [EAX + 0x2298],0x0
// 005fb1aa: JZ 0x005fa02a
//   XREF to: 005fa02a (CONDITIONAL_JUMP)
// 005fb1b0: MOV dword ptr [EAX + 0x2298],0x0
// 005fb1ba: MOV EDI,dword ptr [EBX + 0xbf74]
// 005fb1c0: PUSH 0x3e4ccccd
// 005fb1c5: PUSH EDI
// 005fb1c6: MOV EAX,dword ptr [EBX + 0xbf8c]
// 005fb1cc: PUSH EAX
// 005fb1cd: PUSH EBX
// 005fb1ce: CALL core_charactr.cpp_CCharacter_FUN_0042b760
//   XREF to: 0042b760 (UNCONDITIONAL_CALL)
// 005fb1d3: MOV EAX,dword ptr [EBX + 0xbf8c]
// 005fb1d9: ADD ESP,0x10
// 005fb1dc: MOV dword ptr [EBX + EAX*0x4 + 0x2298],0x1
// 005fb1e7: JMP 0x005fa02a
//   XREF to: 005fa02a (UNCONDITIONAL_JUMP)
