// Name: core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0
// Address: 004f4bd0
// Address Range: [[004f4bd0, 004f5fea]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0()
// Globals:
//   undefined4 DAT_00002424
//   void* switchdataD_004f4b90 = 004f4bf4
//   void* switchdataD_004f4ba8 = 004f5844
//   void* switchdataD_004f4bb8 = 004f54e3
//   TerminatedCString s_s_escaping_from_s_0062eeeb
//   TerminatedCString s_s_confused_while_walking_0062ef00
//   TerminatedCString s_s_rescued_entering_follo_0062ef2a
//   TerminatedCString s_s_was_led_close_enough_g_0062ef4c
//   TerminatedCString s_s_left_behind_0062ef72
//   TerminatedCString s_s_was_left_behind_but_no_0062ef83
//   TerminatedCString s_s_doesn_t_know_next_wayp_0062efb2
//   TerminatedCString s_s_reached_waypoint_s_0062efe7
//   TerminatedCString s_s_rescued_and_taken_home_0062f000
//   TerminatedCString s_s_got_confused_going_hom_0062f01c
//   TerminatedCString s_Bip01_L_Forearm_0062f043
//   TerminatedCString s_deputeFireShotgun_0062f053
//   double DOUBLE_0062f06a = 3.14159265350000
//   double DOUBLE_0062f072 = 0.5
//   double DOUBLE_0062f07a = 2
//   double DOUBLE_0062f082 = 0.0100000000000000
//   double DOUBLE_0062f08a = 0.0174532925194444
//   double DOUBLE_0062f092 = 40
//   double DOUBLE_0062f09a = -1.57079632675000
//   float FLOAT_0062f0a2 = 3.141593
//   double DOUBLE_0062f0aa = 1.57079632675000
//   float FLOAT_0062f0b2 = -3.141593
//   float FLOAT_0062f0b6 = 0.2000000
//   double DOUBLE_0062f0ba = 32
//   double DOUBLE_0062f0c2 = 0.600000000000000
//   double DOUBLE_0062f0ca = 0.400000000000000
//   double DOUBLE_0062f0d2 = 0.650000000000000
//   double DOUBLE_0062f0da = 0.350000000000000
//   double DOUBLE_0062f0e2 = 5
//   CConsole* g_CConsolePtr = 0083b1a4
//   CEventList* g_CEventListPtr = 02d05310
//   CGore* g_CGorePtr = 02d83364
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   undefined4 g_CDoorClassInfo.name_hash
//   undefined4 DAT_02d05310
//   CGore g_CGoreInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   undefined4 DAT_02db8888
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408c10
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_FUN_0040cd10
//   core_actor.cpp_FUN_0040cd70
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042c5f0
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_CCharacter_FUN_0042ede0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_door.cpp_CDoor_FUN_00480de0
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_event.cpp_EventChecker_FUN_004b0330
//   core_event.cpp_FUN_004aabe0
//   core_gore.cpp_FUN_004edaa0
//   core_hostage.cpp_FUN_004f5ff0
//   core_inv.cpp_CInventory_addItem_FUN_004fd600
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_FUN_0052e3a0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_UnkSomethingWriteMe2_FUN_0059eb50
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_waypoint.cpp_FUN_005ec320
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hostage.cpp_RelatedToRescuedTownsfolk(undefined4 param_1,
   undefined4 param_2) */

void core_hostage_cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0(void)

{
  CLocation *pCVar1;
  char *pcVar2;
  CDemonActor_vtable *pCVar3;
  CHero *pCVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  CConsole *pCVar8;
  int iVar9;
  uint uVar10;
  CDemonActor *pCVar11;
  float fVar12;
  CVector3f *pCVar13;
  undefined4 uVar14;
  float fVar15;
  BADSPACEBASE *in_ESP;
  int iVar16;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_fffffe54;
  int in_stack_fffffe80;
  float fStack_178;
  float in_stack_fffffe90;
  float in_stack_fffffe94;
  CVector3f aCStack_130 [3];
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float fStack_c4;
  CVector3f CStack_c0;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float fStack_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float local_34;
  float local_28;
  CDeformableModelInstance *local_24;
  CDoor *local_20;
  CDemonActor *pCStack_1c;
  float local_18;
  float fStack_14;
  
  switch(*(undefined4 *)(in_stack_00000004[2].cloth_data + 0x53dc)) {
  case 0:
  case 4:
    in_stack_00000004->cloth_data[0x350] = '\0';
    in_stack_00000004->cloth_data[0x351] = '\0';
    in_stack_00000004->cloth_data[0x352] = 'H';
    in_stack_00000004->cloth_data[0x353] = 'B';
    in_stack_00000004->cloth_data[0x34c] = '\0';
    in_stack_00000004->cloth_data[0x34d] = '\0';
    in_stack_00000004->cloth_data[0x34e] = -0x60;
    in_stack_00000004->cloth_data[0x34f] = 'A';
    break;
  case 1:
  case 2:
    in_stack_00000004->cloth_data[0x350] = '\0';
    in_stack_00000004->cloth_data[0x351] = '\0';
    in_stack_00000004->cloth_data[0x352] = -0x6a;
    in_stack_00000004->cloth_data[0x353] = 'B';
    in_stack_00000004->cloth_data[0x34c] = '\0';
    in_stack_00000004->cloth_data[0x34d] = '\0';
    in_stack_00000004->cloth_data[0x34e] = ' ';
    in_stack_00000004->cloth_data[0x34f] = 'B';
    break;
  case 3:
  case 5:
    in_stack_00000004->cloth_data[0x350] = -0x80;
    in_stack_00000004->cloth_data[0x351] = 'O';
    in_stack_00000004->cloth_data[0x352] = -0x3d;
    in_stack_00000004->cloth_data[0x353] = 'G';
    in_stack_00000004->cloth_data[0x34c] = -0x80;
    in_stack_00000004->cloth_data[0x34d] = 'O';
    in_stack_00000004->cloth_data[0x34e] = -0x3d;
    in_stack_00000004->cloth_data[0x34f] = 'G';
  }
  if (in_stack_00000004->hit_points <= 0.0) {
    in_stack_00000004->cloth_data[0x350] = -0x80;
    in_stack_00000004->cloth_data[0x351] = 'O';
    in_stack_00000004->cloth_data[0x352] = -0x3d;
    in_stack_00000004->cloth_data[0x353] = 'G';
    in_stack_00000004->cloth_data[0x34c] = -0x80;
    in_stack_00000004->cloth_data[0x34d] = 'O';
    in_stack_00000004->cloth_data[0x34e] = -0x3d;
    in_stack_00000004->cloth_data[0x34f] = 'G';
  }
  iVar9 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar9 == 0) {
    return;
  }
  (in_stack_00000004->model).padding_0x0[0x225c] = '\0';
  (in_stack_00000004->model).padding_0x0[0x225d] = '\0';
  (in_stack_00000004->model).padding_0x0[0x225e] = '\0';
  (in_stack_00000004->model).padding_0x0[0x225f] = '\0';
  *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2258) =
       *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x225c);
  *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2254) =
       *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2258);
  local_24 = &in_stack_00000004->model;
  fVar12 = in_stack_00000008;
  while (0.0 < fVar12) {
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_0052d610();
    if (uVar10 < 0xb) {
      if (uVar10 == 6) {
        if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s escaping from %s\n",in_stack_00000004,
                     in_stack_00000004->grabbed_by);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe78);
          core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          (*(in_stack_00000004->grabbed_by->metadata).vtable[1].playAmbientSoundWithVolume)
                    (in_stack_00000004->grabbed_by,&stack0xfffffe80,in_stack_fffffe54);
        }
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
      }
    }
    else if (uVar10 < 0xc) {
      pCStack_1c = (CDemonActor *)0x0;
      fStack_60 = 1e+30;
      aCStack_130[0].x = 1.5;
      iVar9 = 0;
      iVar16 = 0;
      core_actor_cpp_CDemonActor_FUN_00408ec0(&in_stack_00000004->base_actor);
      while (iVar9 < (int)g_CDemonSetPtr->actor_list_ptr) {
        pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar16),
                             g_CDoorClassInfo.name_hash);
        if (pCVar11 == (CDemonActor *)0x0) {
LAB_004f4dd2:
          iVar9 = iVar9 + 1;
          iVar16 = iVar16 + 4;
        }
        else {
          local_108 = (pCVar11->location).position.x - local_e4;
          local_104 = (pCVar11->location).position.y - local_e0;
          local_100 = (pCVar11->location).position.z - local_dc;
          if ((float)DOUBLE_0062f0e2 < ABS(local_104)) goto LAB_004f4dd2;
          local_104 = 0.0;
          local_18 = SQRT(local_100 * local_100 + local_108 * local_108);
          if (fStack_60 <= local_18) goto LAB_004f4dd2;
          iVar9 = iVar9 + 1;
          iVar16 = iVar16 + 4;
          fStack_60 = local_18;
          pCStack_1c = pCVar11;
        }
      }
      if (local_20 != (CDoor *)0x0) {
        core_door_cpp_CDoor_FUN_00480de0(local_20);
      }
    }
    else if (uVar10 == 0xc) {
      pCVar11 = in_stack_00000004->carry_hands[1].carry_actor;
      if (pCVar11 != (CDemonActor *)0x0) {
        (*(in_stack_00000004->base_actor).metadata.vtable[1].renderTargetPoints)
                  (&in_stack_00000004->base_actor);
        core_inv_cpp_CInventory_addItem_FUN_004fd600
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,pCVar11,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  }
  fVar12 = (float)DOUBLE_0062f06a;
  *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x28) =
       *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x225c);
  local_28 = 0.0;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar12;
  fVar12 = (float)core_motion_cpp_CMotionController_FUN_0052dd20();
  if (0.0 < fVar12) {
    local_24 = (CDeformableModelInstance *)&DAT_00000001;
  }
  if (in_stack_00000004->hit_points <= 0.0) {
    fVar12 = (float)core_motion_cpp_CMotionController_FUN_0052dd20();
    if ((fVar12 <= 0.0) &&
       (fVar12 = (float)core_motion_cpp_CMotionController_FUN_0052dd20(), fVar12 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    }
  }
  else if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    fVar12 = (float)core_motion_cpp_CMotionController_FUN_0052dd20();
    if (((fVar12 <= 0.0) &&
        (fVar12 = (float)core_motion_cpp_CMotionController_FUN_0052dd20(), fVar12 <= 0.0)) &&
       (fVar12 = (float)core_motion_cpp_CMotionController_FUN_0052dd20(), fVar12 <= 0.0)) {
      iVar9 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
      pCVar8 = g_CConsolePtr;
      if (iVar9 == 0) {
        switch(*(undefined4 *)(in_stack_00000004[2].cloth_data + 0x53dc)) {
        case 0:
          iVar9 = core_hostage_cpp_FUN_004f5ff0();
          if (iVar9 == 0) {
            pCVar4 = g_HeroActors[g_LocalHeroIndex];
            fStack_c4 = (pCVar4->base_character).base_actor.location.position.x -
                        (in_stack_00000004->base_actor).location.position.x;
            CStack_c0.x = (pCVar4->base_character).base_actor.location.position.y -
                          (in_stack_00000004->base_actor).location.position.y;
            CStack_c0.y = (pCVar4->base_character).base_actor.location.position.z -
                          (in_stack_00000004->base_actor).location.position.z;
            if (((0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5028)) &&
                (*(float *)(in_stack_00000004[2].cloth_data + 0x5028) <=
                 SQRT(CStack_c0.y * CStack_c0.y + fStack_c4 * fStack_c4 + CStack_c0.x * CStack_c0.x)
                )) || (iVar9 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                                         (g_CEventListPtr,in_stack_00000004[2].cloth_data + 0x502c),
                      pCVar8 = g_CConsolePtr, iVar9 == 0)) goto LAB_004f54c2;
            in_stack_00000004[2].cloth_data[0x53dc] = '\x01';
            in_stack_00000004[2].cloth_data[0x53dd] = '\0';
            in_stack_00000004[2].cloth_data[0x53de] = '\0';
            in_stack_00000004[2].cloth_data[0x53df] = '\0';
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar8,"%s rescued, entering follow mode\n");
            core_event_cpp_FUN_004aabe0();
          }
          break;
        case 1:
          iVar9 = *(int *)(in_stack_00000004[2].cloth_data + 0x53e0);
          if ((iVar9 != 0) &&
             (fVar12 = (in_stack_00000004->base_actor).location.position.x -
                       *(float *)(iVar9 + 0x20),
             fVar15 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar9 + 0x28)
             , SQRT(fVar15 * fVar15 + fVar12 * fVar12) < (float)DOUBLE_0062f092)) {
            uVar14 = core_waypoint_cpp_FUN_005ec320();
            *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x53e8) = uVar14;
          }
          pCVar8 = g_CConsolePtr;
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) == 0) {
            iVar9 = core_hostage_cpp_FUN_004f5ff0();
            if (iVar9 == 0) {
              iVar9 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004);
              if (iVar9 == 0) {
                core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
              }
              else {
                *(int *)(in_stack_00000004[2].cloth_data + 0x53d4) = iVar9;
              }
              uVar10 = *(uint *)(in_stack_00000004[2].cloth_data + 0x53d4);
              if (uVar10 < 2) {
                if (uVar10 != 1) goto LAB_004f54c2;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
              }
              else if (uVar10 < 3) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
              }
              else {
                if (uVar10 != 3) goto LAB_004f54c2;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
                pCVar8 = g_CConsolePtr;
                in_stack_00000004[2].cloth_data[0x53dc] = '\x02';
                in_stack_00000004[2].cloth_data[0x53dd] = '\0';
                in_stack_00000004[2].cloth_data[0x53de] = '\0';
                in_stack_00000004[2].cloth_data[0x53df] = '\0';
                engine_console_cpp_CConsole_printf_FUN_00441890(pCVar8,"%s left behind!\n");
                core_event_cpp_FUN_004aabe0();
                in_stack_00000004->cloth_data[0x32c] = '\0';
                in_stack_00000004->cloth_data[0x32d] = '\0';
                in_stack_00000004->cloth_data[0x32e] = '\0';
                in_stack_00000004->cloth_data[0x32f] = '\0';
              }
            }
          }
          else {
            in_stack_00000004[2].cloth_data[0x53dc] = '\x03';
            in_stack_00000004[2].cloth_data[0x53dd] = '\0';
            in_stack_00000004[2].cloth_data[0x53de] = '\0';
            in_stack_00000004[2].cloth_data[0x53df] = '\0';
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar8,"%s was led close enough, going home!\n");
            core_event_cpp_FUN_004aabe0();
            in_stack_00000004->cloth_data[0x32c] = '\0';
            in_stack_00000004->cloth_data[0x32d] = '\0';
            in_stack_00000004->cloth_data[0x32e] = '\0';
            in_stack_00000004->cloth_data[0x32f] = '\0';
          }
          break;
        case 2:
          iVar9 = core_hostage_cpp_FUN_004f5ff0();
          if (iVar9 == 0) {
            core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
            uVar10 = *(uint *)(in_stack_00000004[2].cloth_data + 0x53d4);
            pCStack_1c = (CDemonActor *)0x0;
            if (((uVar10 == 0) || (uVar10 < 2)) || (uVar10 == 2)) {
              in_stack_00000004[2].cloth_data[0x53dc] = '\x01';
              in_stack_00000004[2].cloth_data[0x53dd] = '\0';
              in_stack_00000004[2].cloth_data[0x53de] = '\0';
              in_stack_00000004[2].cloth_data[0x53df] = '\0';
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
              if (local_18 == 0.0) break;
            }
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s was left behind, but now can follow again!\n");
            core_event_cpp_FUN_004aabe0();
          }
          break;
        case 3:
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) == 0) {
            in_stack_00000004[2].cloth_data[0x53dc] = '\x02';
            in_stack_00000004[2].cloth_data[0x53dd] = '\0';
            in_stack_00000004[2].cloth_data[0x53de] = '\0';
            in_stack_00000004[2].cloth_data[0x53df] = '\0';
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar8,"%s doesn't know next waypoint going home.  Help me!\n",in_stack_00000004);
          }
          else {
            core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
            switch(*(undefined4 *)(in_stack_00000004[2].cloth_data + 0x53d4)) {
            case 0:
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s reached waypoint %s!\n");
              pCVar8 = g_CConsolePtr;
              if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) ==
                  *(int *)(in_stack_00000004[2].cloth_data + 0x53e0)) {
                in_stack_00000004[2].cloth_data[0x53dc] = '\x04';
                in_stack_00000004[2].cloth_data[0x53dd] = '\0';
                in_stack_00000004[2].cloth_data[0x53de] = '\0';
                in_stack_00000004[2].cloth_data[0x53df] = '\0';
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (pCVar8,"%s rescued and taken home!\n");
                in_stack_00000004[2].cloth_data[0x53e8] = '\0';
                in_stack_00000004[2].cloth_data[0x53e9] = '\0';
                in_stack_00000004[2].cloth_data[0x53ea] = '\0';
                in_stack_00000004[2].cloth_data[0x53eb] = '\0';
              }
              else {
                uVar14 = core_waypoint_cpp_FUN_005ec320();
                *(undefined4 *)(in_stack_00000004[2].cloth_data + 0x53e8) = uVar14;
              }
              break;
            case 1:
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
              break;
            case 2:
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
              break;
            case 3:
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
              pCVar8 = g_CConsolePtr;
              in_stack_00000004[2].cloth_data[0x53dc] = '\x02';
              in_stack_00000004[2].cloth_data[0x53dd] = '\0';
              in_stack_00000004[2].cloth_data[0x53de] = '\0';
              in_stack_00000004[2].cloth_data[0x53df] = '\0';
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (pCVar8,"%s got confused going home.  Help me!\n");
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
              core_event_cpp_FUN_004aabe0();
              core_event_cpp_EventChecker_FUN_004b0330();
              in_stack_00000004[2].cloth_data[0x53dc] = '\x04';
              in_stack_00000004[2].cloth_data[0x53dd] = '\0';
              in_stack_00000004[2].cloth_data[0x53de] = '\0';
              in_stack_00000004[2].cloth_data[0x53df] = '\0';
              in_stack_00000004[2].cloth_data[0x53e8] = '\0';
              in_stack_00000004[2].cloth_data[0x53e9] = '\0';
              in_stack_00000004[2].cloth_data[0x53ea] = '\0';
              in_stack_00000004[2].cloth_data[0x53eb] = '\0';
            }
          }
          break;
        case 4:
          fStack_14 = 1.4013e-45;
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) != 0) {
            if (*(float *)(in_stack_00000004->field2_0x240c + 0x28) <
                in_stack_00000008 * (float)DOUBLE_0062f072) {
              *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
                   in_stack_00000008 * (float)DOUBLE_0062f072;
            }
            pCVar13 = core_actor_cpp_CDemonActor_FUN_00408f10(&in_stack_00000004->base_actor);
            if ((CVector3f *)(in_stack_00000004->field2_0x240c + 0x10) != pCVar13) {
              ((CVector3f *)(in_stack_00000004->field2_0x240c + 0x10))->x = pCVar13->x;
              *(float *)(in_stack_00000004->field2_0x240c + 0x14) = pCVar13->y;
              *(float *)(in_stack_00000004->field2_0x240c + 0x18) = pCVar13->z;
            }
            pcVar2 = in_stack_00000004->field2_0x240c + 0x10;
            fStack_88 = *(float *)pcVar2;
            local_80 = *(float *)(in_stack_00000004->field2_0x240c + 0x18);
            fVar12 = SQRT(local_80 * local_80 + fStack_88 * fStack_88);
            uStack_84 = 0;
            if (*(float *)(in_stack_00000004->field2_0x240c + 0x28) < fVar12) {
              fStack_14 = *(float *)(in_stack_00000004->field2_0x240c + 0x28) / fVar12;
              *(float *)pcVar2 = *(float *)pcVar2 * fStack_14;
              *(float *)(in_stack_00000004->field2_0x240c + 0x14) =
                   *(float *)(in_stack_00000004->field2_0x240c + 0x14) * fStack_14;
              *(float *)(in_stack_00000004->field2_0x240c + 0x18) =
                   *(float *)(in_stack_00000004->field2_0x240c + 0x18) * fStack_14;
            }
            local_18 = fVar12;
            pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (aCStack_130,(CVector3f *)(in_stack_00000004->field2_0x240c + 0x10))
            ;
            fVar15 = (float)DOUBLE_0062f07a;
            *(float *)(in_stack_00000004->field2_0x240c + 0xc) = pCVar13->y;
            if (fStack_178 * fVar15 < 1.0) {
              fVar15 = core_actor_cpp_FUN_0040cd70
                                 (*(float *)(*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) +
                                            0x34) - (in_stack_00000004->base_actor).orient.bank);
              in_stack_00000010 =
                   core_actor_cpp_FUN_0040cd70
                             (fVar15 - *(float *)(in_stack_00000004->field2_0x240c + 0xc));
              *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
                   (1.0 - (float)(double)CONCAT44(fVar12,in_stack_fffffe80)) * in_stack_00000010 +
                   *(float *)(in_stack_00000004->field2_0x240c + 0xc);
            }
            fVar12 = core_actor_cpp_FUN_0040cd70(*(float *)(in_stack_00000004->field2_0x240c + 0xc))
            ;
            *(float *)(in_stack_00000004->field2_0x240c + 0xc) = fVar12;
            if ((in_stack_fffffe94 < (float)DOUBLE_0062f082) &&
               (ABS(*(float *)(in_stack_00000004->field2_0x240c + 0xc)) < (float)DOUBLE_0062f08a)) {
              if ((*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 0) ||
                 (*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 4)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
                in_stack_00000004[2].cloth_data[0x53dc] = '\x05';
                in_stack_00000004[2].cloth_data[0x53dd] = '\0';
                in_stack_00000004[2].cloth_data[0x53de] = '\0';
                in_stack_00000004[2].cloth_data[0x53df] = '\0';
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
              }
              core_event_cpp_FUN_004aabe0();
              core_event_cpp_EventChecker_FUN_004b0330();
              in_stack_00000004[2].cloth_data[0x53e4] = '\0';
              in_stack_00000004[2].cloth_data[0x53e5] = '\0';
              in_stack_00000004[2].cloth_data[0x53e6] = '\0';
              in_stack_00000004[2].cloth_data[0x53e7] = '\0';
            }
            fVar12 = in_stack_00000008 * (float)DOUBLE_0062f06a;
            if (*(float *)(in_stack_00000004->field2_0x240c + 0xc) < -fVar12) {
              *(float *)(in_stack_00000004->field2_0x240c + 0xc) = -fVar12;
            }
            if (fVar12 < *(float *)(in_stack_00000004->field2_0x240c + 0xc)) {
              *(float *)(in_stack_00000004->field2_0x240c + 0xc) = fVar12;
            }
          }
        }
      }
      else {
        uVar10 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
        if (uVar10 < 2) {
          if (uVar10 == 1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          }
          else {
LAB_004f54c2:
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          }
        }
        else if (uVar10 < 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
        }
        else {
          if (uVar10 != 3) goto LAB_004f54c2;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
        }
      }
    }
  }
  else {
    pCVar13 = core_actor_cpp_CDemonActor_FUN_00408f10(&in_stack_00000004->base_actor);
    pCVar13 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_c0,pCVar13);
    fVar12 = core_actor_cpp_FUN_0040cd70(pCVar13->y);
    if (fVar12 < (float)DOUBLE_0062f09a) {
      fVar12 = fVar12 + FLOAT_0062f0a2;
    }
    if ((float)DOUBLE_0062f0aa < fVar12) {
      fVar12 = fVar12 + FLOAT_0062f0b2;
    }
    local_28 = in_stack_00000008 * (float)DOUBLE_0062f06a;
    local_34 = -local_28;
    if (fVar12 < local_34) {
      fVar12 = local_34;
    }
    if (local_28 < fVar12) {
      fVar12 = local_28;
    }
    (in_stack_00000004->base_actor).orient.bank =
         (in_stack_00000004->base_actor).orient.bank + fVar12;
    core_actor_cpp_CDemonActor_FUN_00408c10(&in_stack_00000004->base_actor);
    pCVar11 = in_stack_00000004->grabbed_by;
    pCVar3 = (pCVar11->metadata).vtable;
    pCVar13 = (CVector3f *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
    fVar12 = (*pCVar3[1].cylinderGroundCheck)(pCVar11,(float)in_stack_00000004,pCVar13);
    if (fVar12 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_004f5384:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    }
    else if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_004f5384;
    (in_stack_00000004->model).padding_0x0[0x225c] = '\0';
    (in_stack_00000004->model).padding_0x0[0x225d] = '\0';
    (in_stack_00000004->model).padding_0x0[0x225e] = '\0';
    (in_stack_00000004->model).padding_0x0[0x225f] = '\0';
    *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2258) =
         *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x225c);
    *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2254) =
         *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2258);
  }
  if (((0.0 < in_stack_00000004->hit_points) &&
      (*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 1)) &&
     (iVar9 = core_actor_cpp_FUN_0040cd10(), iVar9 != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
    iVar9 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
    if (-1 < iVar9) {
      core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
      core_actor_cpp_CDemonActor_FUN_00408ec0(&in_stack_00000004->base_actor);
      local_ec = 0x40400000;
      local_e8 = 0.0;
      local_e4 = 0.0;
      core_actor_cpp_CDemonActor_FUN_00408e80(&in_stack_00000004->base_actor);
      core_gore_cpp_FUN_004edaa0();
    }
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  if (in_stack_00000010 == 0.0) {
    iVar9 = core_motion_cpp_CMotionController_FUN_0052dab0();
    iVar9 = *(int *)(iVar9 + 0x24);
    if ((((iVar9 == 8) || (iVar9 == 0)) || ((iVar9 == 0xd || (iVar9 == 10)))) &&
       ((in_stack_00000004->base_actor).field11_0xdc == 0)) {
      in_stack_00000004->cloth_data[0x33c] = '\0';
      in_stack_00000004->cloth_data[0x33d] = '\0';
      in_stack_00000004->cloth_data[0x33e] = '\0';
      in_stack_00000004->cloth_data[0x33f] = '\0';
      goto LAB_004f50f1;
    }
    fVar12 = (float)((ulonglong)(double)in_stack_00000008 >> 0x20);
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)DOUBLE_0062f0ba;
    fStack_c4 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    CStack_c0.x = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    CStack_c0.y = *(float *)(in_stack_00000004->field2_0x240c + 0x24) * in_stack_00000008;
    pcVar2 = (in_stack_00000004->model).padding_0x0 + 0x2254;
    local_e8 = fStack_c4 + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    local_e4 = CStack_c0.x + *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    local_e0 = CStack_c0.y + *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    fStack_70 = local_e8 + *(float *)pcVar2;
    fStack_6c = local_e4 + *(float *)((in_stack_00000004->model).padding_0x0 + 0x2258);
    local_68 = local_e0 + *(float *)((in_stack_00000004->model).padding_0x0 + 0x225c);
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    (in_stack_00000004->model).padding_0x0[0x225c] = '\0';
    (in_stack_00000004->model).padding_0x0[0x225d] = '\0';
    (in_stack_00000004->model).padding_0x0[0x225e] = '\0';
    (in_stack_00000004->model).padding_0x0[0x225f] = '\0';
    pCVar1 = &(in_stack_00000004->base_actor).location;
    *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2258) =
         *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x225c);
    *(float *)pcVar2 = *(float *)((in_stack_00000004->model).padding_0x0 + 0x2258);
    CStack_c0.z = (pCVar1->position).x;
    fStack_b4 = (in_stack_00000004->base_actor).location.position.y;
    local_b0 = (in_stack_00000004->base_actor).location.position.z;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    *(float *)(in_stack_00000004->cloth_data + 0x33c) =
         *(float *)(in_stack_00000004->cloth_data + 0x33c) + in_stack_00000008;
    if (((double)CONCAT44(in_stack_fffffe90,fVar12) * DOUBLE_0062f0c2 <=
         SQRT((double)fStack_64 * (double)fStack_64 +
              (double)fStack_6c * (double)fStack_6c + (double)local_68 * (double)local_68)) &&
       (dVar5 = (double)(pCVar1->position).x - (double)fStack_b4,
       dVar6 = (double)(in_stack_00000004->base_actor).location.position.y - (double)local_b0,
       dVar7 = (double)(in_stack_00000004->base_actor).location.position.z - (double)local_ac,
       SQRT(dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5) <=
       (double)CONCAT44(in_stack_fffffe90,fVar12) * DOUBLE_0062f0ca)) goto LAB_004f50f1;
  }
  else {
    pCVar13 = core_actor_cpp_CDemonActor_FUN_00408e80(&in_stack_00000004->base_actor);
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (pCVar1->position).x = pCVar13->x + (pCVar1->position).x;
    (in_stack_00000004->base_actor).location.position.y =
         pCVar13->y + (in_stack_00000004->base_actor).location.position.y;
    (in_stack_00000004->base_actor).location.position.z =
         pCVar13->z + (in_stack_00000004->base_actor).location.position.z;
  }
  in_stack_00000004->cloth_data[0x33c] = '\0';
  in_stack_00000004->cloth_data[0x33d] = '\0';
  in_stack_00000004->cloth_data[0x33e] = '\0';
  in_stack_00000004->cloth_data[0x33f] = '\0';
LAB_004f50f1:
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 1) {
    pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (in_stack_00000004->carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash)
    ;
    if (((pCVar11 != (CDemonActor *)0x0) &&
        (fVar12 = (float)core_motion_cpp_CMotionController_FUN_0052dd20(), fVar12 <= 0.0)) ||
       (in_stack_00000004 != (CCharacter *)0x0)) {
      fVar12 = in_stack_00000008 / in_stack_00000008 +
               *(float *)(in_stack_00000004[2].cloth_data + 0x5404);
    }
    else {
      fVar12 = fRam0001fae4 - in_stack_00000008 / in_stack_00000008;
    }
    *(float *)(in_stack_00000004[2].cloth_data + 0x5404) = fVar12;
    if (0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) {
      if (1.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) {
        in_stack_00000004[2].cloth_data[0x5404] = '\0';
        in_stack_00000004[2].cloth_data[0x5405] = '\0';
        in_stack_00000004[2].cloth_data[0x5406] = -0x80;
        in_stack_00000004[2].cloth_data[0x5407] = '?';
      }
      core_motion_cpp_CMotionController_FUN_0052e3a0();
      core_skeleton_cpp_CDeformableModelInstance_UnkSomethingWriteMe2_FUN_0059eb50();
      core_skeleton_cpp_CDeformableModelInstance_UnkSomethingWriteMe2_FUN_0059eb50();
      if (((1.0 <= *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) &&
          (0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5400))) &&
         (fVar12 = in_stack_00000008 / in_stack_00000008 +
                   *(float *)(in_stack_00000004[2].cloth_data + 0x5400),
         *(float *)(in_stack_00000004[2].cloth_data + 0x5400) = fVar12, 1.0 < fVar12)) {
        in_stack_00000004[2].cloth_data[0x5400] = '\0';
        in_stack_00000004[2].cloth_data[0x5401] = '\0';
        in_stack_00000004[2].cloth_data[0x5402] = -0x80;
        in_stack_00000004[2].cloth_data[0x5403] = '?';
      }
    }
    else {
      in_stack_00000004[2].cloth_data[0x5400] = '\0';
      in_stack_00000004[2].cloth_data[0x5401] = '\0';
      in_stack_00000004[2].cloth_data[0x5402] = '\0';
      in_stack_00000004[2].cloth_data[0x5403] = '\0';
      in_stack_00000004[2].cloth_data[0x5404] = '\0';
      in_stack_00000004[2].cloth_data[0x5405] = '\0';
      in_stack_00000004[2].cloth_data[0x5406] = '\0';
      in_stack_00000004[2].cloth_data[0x5407] = '\0';
    }
  }
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0(in_stack_00000004);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  if ((1.0 <= *(float *)(in_stack_00000004[2].cloth_data + 0x5400)) &&
     (pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (in_stack_00000004->carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash), pCVar11 != (CDemonActor *)0x0)) {
    uVar14 = *(undefined4 *)(pCVar11[4].actor_name + 0xc);
    pCVar11[4].actor_name[0xc] = '\x06';
    pCVar11[4].actor_name[0xd] = '\0';
    pCVar11[4].actor_name[0xe] = '\0';
    pCVar11[4].actor_name[0xf] = '\0';
    (*(pCVar11->metadata).vtable[1].renderTransparent)(pCVar11);
    *(undefined4 *)(pCVar11[4].actor_name + 0xc) = uVar14;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    in_stack_00000004[2].cloth_data[0x5404] = '\0';
    in_stack_00000004[2].cloth_data[0x5405] = '\0';
    in_stack_00000004[2].cloth_data[0x5406] = '\0';
    in_stack_00000004[2].cloth_data[0x5407] = '\0';
    in_stack_00000004[2].cloth_data[0x5400] = '\0';
    in_stack_00000004[2].cloth_data[0x5401] = '\0';
    in_stack_00000004[2].cloth_data[0x5402] = '\0';
    in_stack_00000004[2].cloth_data[0x5403] = '\0';
  }
  if (((*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 1) &&
      (pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (in_stack_00000004->carry_hands[1].carry_actor,
                            g_CWeaponClassInfo.name_hash), pCVar11 != (CDemonActor *)0x0)) &&
     (iVar9 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                        (g_CEventListPtr,"deputeFireShotgun"), iVar9 != 0)) {
    in_stack_00000004[2].cloth_data[0x5400] = '\n';
    in_stack_00000004[2].cloth_data[0x5401] = -0x29;
    in_stack_00000004[2].cloth_data[0x5402] = '#';
    in_stack_00000004[2].cloth_data[0x5403] = '<';
    return;
  }
  return;
}


// Assembly code:
// 004f4bd0: PUSH EBX
//   Label: core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0
// 004f4bd1: PUSH ESI
// 004f4bd2: PUSH EDI
// 004f4bd3: PUSH EBP
// 004f4bd4: MOV EBP,ESP
// 004f4bd6: SUB ESP,0x1ac
// 004f4bdc: AND ESP,0xfffffff8
// 004f4bdf: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f4be2: MOV EAX,dword ptr [EBX + 0x1fabc]
// 004f4be8: CMP EAX,0x5
// 004f4beb: JA 0x004f4c08
//   XREF to: 004f4c08 (CONDITIONAL_JUMP)
// 004f4bed: JMP dword ptr [EAX*0x4 + 0x4f4b90]
//   Label: switchD
//   XREF to: 004f4bf4 (COMPUTED_JUMP)
//   XREF to: 004f4cad (COMPUTED_JUMP)
//   XREF to: 004f4cc6 (COMPUTED_JUMP)
//   XREF to: 004f4b90 (DATA)
// 004f4bf4: MOV dword ptr [EBX + 0x2de8],0x42480000
//   Label: caseD_4
// 004f4bfe: MOV dword ptr [EBX + 0x2de4],0x41a00000
// 004f4c08: FLD float ptr [EBX + 0x243c]
//   Label: default
// 004f4c0e: FLDZ
// 004f4c10: FCOMPP
// 004f4c12: FNSTSW AX
// 004f4c14: SAHF
// 004f4c15: JC 0x004f4c2b
//   XREF to: 004f4c2b (CONDITIONAL_JUMP)
// 004f4c17: MOV dword ptr [EBX + 0x2de8],0x47c34f80
// 004f4c21: MOV dword ptr [EBX + 0x2de4],0x47c34f80
// 004f4c2b: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_004f4c2b
//   XREF to: Stack[0x8] (READ)
// 004f4c2e: PUSH EBX
// 004f4c2f: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 004f4c34: ADD ESP,0x8
// 004f4c37: TEST EAX,EAX
// 004f4c39: JZ 0x004f5254
//   XREF to: 004f5254 (CONDITIONAL_JUMP)
// 004f4c3f: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f4c42: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 004f4c46: LEA EAX,[EBX + 0x23ac]
// 004f4c4c: MOV dword ptr [EAX + 0x8],0x0
// 004f4c53: MOV EDX,dword ptr [EAX + 0x8]
// 004f4c56: MOV dword ptr [EAX + 0x4],EDX
// 004f4c59: MOV EDX,dword ptr [EAX + 0x4]
// 004f4c5c: MOV dword ptr [EAX],EDX
// 004f4c5e: LEA EAX,[EBX + 0x158]
// 004f4c64: MOV dword ptr [ESP + 0x198],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004f4c6b: FLD float ptr [ESP + 0x20]
//   Label: LAB_004f4c6b
//   XREF to: Stack[-0x1a0] (READ)
// 004f4c6f: FLDZ
// 004f4c71: FCOMPP
// 004f4c73: FNSTSW AX
// 004f4c75: SAHF
// 004f4c76: JNC 0x004f4eef
//   XREF to: 004f4eef (CONDITIONAL_JUMP)
// 004f4c7c: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x1a0] (DATA)
// 004f4c80: PUSH EAX
// 004f4c81: MOV ESI,dword ptr [ESP + 0x19c]
//   XREF to: Stack[-0x28] (READ)
// 004f4c88: PUSH ESI
// 004f4c89: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 004f4c8e: ADD ESP,0x8
// 004f4c91: MOV ESI,EAX
// 004f4c93: CMP EAX,0xb
// 004f4c96: JNC 0x004f4ed5
//   XREF to: 004f4ed5 (CONDITIONAL_JUMP)
// 004f4c9c: CMP EAX,0x6
// 004f4c9f: JZ 0x004f4cdf
//   XREF to: 004f4cdf (CONDITIONAL_JUMP)
// 004f4ca1: PUSH ESI
// 004f4ca2: PUSH EBX
// 004f4ca3: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 004f4ca8: ADD ESP,0x8
// 004f4cab: JMP 0x004f4c6b
//   XREF to: 004f4c6b (UNCONDITIONAL_JUMP)
// 004f4cad: MOV dword ptr [EBX + 0x2de8],0x42960000
//   Label: caseD_2
// 004f4cb7: MOV dword ptr [EBX + 0x2de4],0x42200000
// 004f4cc1: JMP 0x004f4c08
//   XREF to: 004f4c08 (UNCONDITIONAL_JUMP)
// 004f4cc6: MOV dword ptr [EBX + 0x2de8],0x47c34f80
//   Label: caseD_5
// 004f4cd0: MOV dword ptr [EBX + 0x2de4],0x47c34f80
// 004f4cda: JMP 0x004f4c08
//   XREF to: 004f4c08 (UNCONDITIONAL_JUMP)
// 004f4cdf: MOV EDI,dword ptr [EBX + 0x2598]
//   Label: LAB_004f4cdf
// 004f4ce5: TEST EDI,EDI
// 004f4ce7: JZ 0x004f4c6b
//   XREF to: 004f4c6b (CONDITIONAL_JUMP)
// 004f4ce9: PUSH EDI
// 004f4cea: PUSH EBX
// 004f4ceb: PUSH 0x62eeeb
//   XREF to: 0062eeeb (DATA)
// 004f4cf0: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004f4cf6: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 004f4cf7: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f4cfc: ADD ESP,0x10
// 004f4cff: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x194] (DATA)
// 004f4d03: PUSH EAX
// 004f4d04: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004f4d09: ADD ESP,0x4
// 004f4d0c: PUSH 0x41700000
// 004f4d11: PUSH 0x41200000
// 004f4d16: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004f4d1b: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f4d22: FLD float ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x18] (READ)
// 004f4d29: ADD ESP,0x8
// 004f4d2c: LEA ESI,[ESP + 0x2c]
//   XREF to: Stack[-0x194] (DATA)
// 004f4d30: MOV dword ptr [ESP + 0x60],EBX
//   XREF to: Stack[-0x160] (WRITE)
// 004f4d34: MOV dword ptr [ESP + 0x64],EBX
//   XREF to: Stack[-0x15c] (WRITE)
// 004f4d38: PUSH ESI
// 004f4d39: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x190] (WRITE)
// 004f4d3d: MOV EAX,dword ptr [EBX + 0x2598]
// 004f4d43: PUSH EAX
// 004f4d44: MOV EDX,dword ptr [EAX + 0x154]
// 004f4d4a: CALL dword ptr [EDX + 0x11c]
// 004f4d50: ADD ESP,0x8
// 004f4d53: JMP 0x004f4c6b
//   XREF to: 004f4c6b (UNCONDITIONAL_JUMP)
// 004f4d58: XOR EAX,EAX
//   Label: LAB_004f4d58
// 004f4d5a: MOV dword ptr [ESP + 0x19c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004f4d61: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x140] (WRITE)
// 004f4d68: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 004f4d6f: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x140] (DATA)
// 004f4d76: MOV EDI,0x7149f2ca
// 004f4d7b: PUSH EAX
// 004f4d7c: LEA EAX,[ESP + 0xd8]
//   XREF to: Stack[-0xec] (DATA)
// 004f4d83: MOV ESI,0x3fc00000
// 004f4d88: PUSH EAX
// 004f4d89: MOV dword ptr [ESP + 0x160],EDI
//   XREF to: Stack[-0x68] (WRITE)
// 004f4d90: MOV dword ptr [ESP + 0x90],ESI
//   XREF to: Stack[-0x138] (WRITE)
// 004f4d97: PUSH EBX
// 004f4d98: XOR ESI,ESI
// 004f4d9a: XOR EDI,EDI
// 004f4d9c: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f4da1: ADD ESP,0xc
// 004f4da4: MOV EAX,[0x006810c8]
//   Label: LAB_004f4da4
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004f4da9: CMP ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004f4daf: JGE 0x004f4e6f
//   XREF to: 004f4e6f (CONDITIONAL_JUMP)
// 004f4db5: MOV EDX,dword ptr [0x02c14d14]
//   XREF to: 02c14d14 (READ)
// 004f4dbb: PUSH EDX
// 004f4dbc: MOV ECX,dword ptr [EDI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
// 004f4dc3: PUSH ECX
// 004f4dc4: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f4dc9: MOV EDX,EAX
// 004f4dcb: ADD ESP,0x8
// 004f4dce: TEST EAX,EAX
// 004f4dd0: JNZ 0x004f4dd8
//   XREF to: 004f4dd8 (CONDITIONAL_JUMP)
// 004f4dd2: INC ESI
//   Label: LAB_004f4dd2
// 004f4dd3: ADD EDI,0x4
// 004f4dd6: JMP 0x004f4da4
//   XREF to: 004f4da4 (UNCONDITIONAL_JUMP)
// 004f4dd8: FLD float ptr [EAX + 0x20]
//   Label: LAB_004f4dd8
// 004f4ddb: FSUB float ptr [ESP + 0xd4]
//   XREF to: Stack[-0xec] (READ)
// 004f4de2: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x110] (WRITE)
// 004f4de9: FLD float ptr [EAX + 0x24]
// 004f4dec: FSUB float ptr [ESP + 0xd8]
//   XREF to: Stack[-0xe8] (READ)
// 004f4df3: ADD EAX,0x20
// 004f4df6: FST float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x10c] (WRITE)
// 004f4dfd: FLD float ptr [EAX + 0x8]
// 004f4e00: FXCH
// 004f4e02: FABS
// 004f4e04: FXCH
// 004f4e06: FSUB float ptr [ESP + 0xdc]
//   XREF to: Stack[-0xe4] (READ)
// 004f4e0d: FSTP float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x108] (WRITE)
// 004f4e14: FCOMP double ptr [0x0062f0e2]
//   XREF to: 0062f0e2 (READ)
// 004f4e1a: FNSTSW AX
// 004f4e1c: SAHF
// 004f4e1d: JA 0x004f4dd2
//   XREF to: 004f4dd2 (CONDITIONAL_JUMP)
// 004f4e1f: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x110] (READ)
// 004f4e26: FMUL ST0
// 004f4e28: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x108] (READ)
// 004f4e2f: FMUL ST0
// 004f4e31: XOR EAX,EAX
// 004f4e33: FADDP
// 004f4e35: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x10c] (WRITE)
// 004f4e3c: FSQRT
// 004f4e3e: FST float ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x20] (WRITE)
// 004f4e45: FCOMP float ptr [ESP + 0x158]
//   XREF to: Stack[-0x68] (READ)
// 004f4e4c: FNSTSW AX
// 004f4e4e: SAHF
// 004f4e4f: JNC 0x004f4dd2
//   XREF to: 004f4dd2 (CONDITIONAL_JUMP)
// 004f4e51: MOV EAX,dword ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x20] (READ)
// 004f4e58: MOV dword ptr [ESP + 0x19c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004f4e5f: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004f4e66: INC ESI
// 004f4e67: ADD EDI,0x4
// 004f4e6a: JMP 0x004f4da4
//   XREF to: 004f4da4 (UNCONDITIONAL_JUMP)
// 004f4e6f: MOV ESI,dword ptr [ESP + 0x19c]
//   Label: LAB_004f4e6f
//   XREF to: Stack[-0x24] (READ)
// 004f4e76: TEST ESI,ESI
// 004f4e78: JZ 0x004f4c6b
//   XREF to: 004f4c6b (CONDITIONAL_JUMP)
// 004f4e7e: PUSH 0x3dcccccd
// 004f4e83: PUSH ESI
// 004f4e84: CALL core_door.cpp_CDoor_FUN_00480de0
//   XREF to: 00480de0 (UNCONDITIONAL_CALL)
// 004f4e89: ADD ESP,0x8
// 004f4e8c: JMP 0x004f4c6b
//   XREF to: 004f4c6b (UNCONDITIONAL_JUMP)
// 004f4e91: MOV ESI,dword ptr [EBX + 0x24f8]
//   Label: LAB_004f4e91
// 004f4e97: TEST ESI,ESI
// 004f4e99: JZ 0x004f4c6b
//   XREF to: 004f4c6b (CONDITIONAL_JUMP)
// 004f4e9f: PUSH 0x0
// 004f4ea1: PUSH 0x1
// 004f4ea3: MOV EAX,dword ptr [EBX + 0x154]
// 004f4ea9: PUSH EBX
// 004f4eaa: CALL dword ptr [EAX + 0x13c]
// 004f4eb0: ADD ESP,0xc
// 004f4eb3: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f4eb8: PUSH 0x1
// 004f4eba: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f4ec1: PUSH ESI
// 004f4ec2: ADD EAX,0x1f738
// 004f4ec7: PUSH EAX
// 004f4ec8: CALL core_inv.cpp_CInventory_addItem_FUN_004fd600
//   XREF to: 004fd600 (UNCONDITIONAL_CALL)
// 004f4ecd: ADD ESP,0xc
// 004f4ed0: JMP 0x004f4c6b
//   XREF to: 004f4c6b (UNCONDITIONAL_JUMP)
// 004f4ed5: JBE 0x004f4d58
//   Label: LAB_004f4ed5
//   XREF to: 004f4d58 (CONDITIONAL_JUMP)
// 004f4edb: CMP EAX,0xc
// 004f4ede: JZ 0x004f4e91
//   XREF to: 004f4e91 (CONDITIONAL_JUMP)
// 004f4ee0: PUSH ESI
// 004f4ee1: PUSH EBX
// 004f4ee2: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 004f4ee7: ADD ESP,0x8
// 004f4eea: JMP 0x004f4c6b
//   XREF to: 004f4c6b (UNCONDITIONAL_JUMP)
// 004f4eef: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f4eef
//   XREF to: Stack[0x8] (READ)
// 004f4ef2: FMUL double ptr [0x0062f06a]
//   XREF to: 0062f06a (READ)
// 004f4ef8: FLD float ptr [EBX + 0x23b4]
// 004f4efe: PUSH 0xa
// 004f4f00: MOV ECX,dword ptr [ESP + 0x19c]
//   XREF to: Stack[-0x28] (READ)
// 004f4f07: XOR EDX,EDX
// 004f4f09: FSTP float ptr [EBX + 0x2434]
// 004f4f0f: MOV dword ptr [ESP + 0x198],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004f4f16: PUSH ECX
// 004f4f17: FSTP float ptr [EBX + 0x2438]
// 004f4f1d: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004f4f22: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f4f29: XOR EDI,EDI
// 004f4f2b: FLD float ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x18] (READ)
// 004f4f32: FLDZ
// 004f4f34: ADD ESP,0x8
// 004f4f37: FCOMPP
// 004f4f39: FNSTSW AX
// 004f4f3b: SAHF
// 004f4f3c: JNC 0x004f4f4a
//   XREF to: 004f4f4a (CONDITIONAL_JUMP)
// 004f4f3e: MOV EDI,0x1
// 004f4f43: MOV dword ptr [ESP + 0x194],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 004f4f4a: FLD float ptr [EBX + 0x243c]
//   Label: LAB_004f4f4a
// 004f4f50: FLDZ
// 004f4f52: FCOMPP
// 004f4f54: FNSTSW AX
// 004f4f56: SAHF
// 004f4f57: JC 0x004f525b
//   XREF to: 004f525b (CONDITIONAL_JUMP)
// 004f4f5d: PUSH 0x5
// 004f4f5f: LEA EAX,[EBX + 0x158]
// 004f4f65: PUSH EAX
// 004f4f66: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004f4f6b: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f4f72: FLD float ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x18] (READ)
// 004f4f79: FLDZ
// 004f4f7b: ADD ESP,0x8
// 004f4f7e: FCOMPP
// 004f4f80: FNSTSW AX
// 004f4f82: SAHF
// 004f4f83: JC 0x004f4fc0
//   XREF to: 004f4fc0 (CONDITIONAL_JUMP)
// 004f4f85: PUSH 0x8
// 004f4f87: LEA EAX,[EBX + 0x158]
// 004f4f8d: PUSH EAX
// 004f4f8e: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004f4f93: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f4f9a: FLD float ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x18] (READ)
// 004f4fa1: FLDZ
// 004f4fa3: ADD ESP,0x8
// 004f4fa6: FCOMPP
// 004f4fa8: FNSTSW AX
// 004f4faa: SAHF
// 004f4fab: JC 0x004f4fc0
//   XREF to: 004f4fc0 (CONDITIONAL_JUMP)
// 004f4fad: PUSH 0x1
// 004f4faf: PUSH 0x6
// 004f4fb1: LEA EAX,[EBX + 0x158]
// 004f4fb7: PUSH EAX
// 004f4fb8: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f4fbd: ADD ESP,0xc
// 004f4fc0: MOV EDI,0x1
//   Label: LAB_004f4fc0
// 004f4fc5: FLD float ptr [EBX + 0x243c]
//   Label: caseD_5
// 004f4fcb: FLDZ
// 004f4fcd: FCOMPP
// 004f4fcf: FNSTSW AX
// 004f4fd1: SAHF
// 004f4fd2: JNC 0x004f509b
//   XREF to: 004f509b (CONDITIONAL_JUMP)
// 004f4fd8: CMP dword ptr [EBX + 0x1fab8],0x1
// 004f4fdf: JNZ 0x004f509b
//   XREF to: 004f509b (CONDITIONAL_JUMP)
// 004f4fe5: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f4fe8: FMUL float ptr [0x0062f0b6]
//   XREF to: 0062f0b6 (READ)
// 004f4fee: SUB ESP,0x4
// 004f4ff1: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c4] (DATA)
// 004f4ff4: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004f4ff9: ADD ESP,0x4
// 004f4ffc: TEST EAX,EAX
// 004f4ffe: JZ 0x004f509b
//   XREF to: 004f509b (CONDITIONAL_JUMP)
// 004f5004: PUSH 0x0
// 004f5006: PUSH 0x62f043
//   XREF to: 0062f043 (DATA)
// 004f500b: LEA ESI,[EBX + 0x158]
// 004f5011: PUSH ESI
// 004f5012: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 004f5017: ADD ESP,0x4
// 004f501a: PUSH EAX
// 004f501b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f5020: ADD ESP,0xc
// 004f5023: TEST EAX,EAX
// 004f5025: JL 0x004f509b
//   XREF to: 004f509b (CONDITIONAL_JUMP)
// 004f5027: PUSH EAX
// 004f5028: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0xbc] (DATA)
// 004f502f: PUSH EAX
// 004f5030: PUSH ESI
// 004f5031: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 004f5036: ADD ESP,0xc
// 004f5039: PUSH EAX
// 004f503a: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x158] (DATA)
// 004f503e: PUSH EAX
// 004f503f: PUSH EBX
// 004f5040: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f5045: ADD ESP,0xc
// 004f5048: LEA EAX,[ESP + 0xa4]
//   XREF to: Stack[-0x11c] (DATA)
// 004f504f: PUSH EAX
// 004f5050: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x134] (DATA)
// 004f5057: MOV EDX,0x40400000
// 004f505c: PUSH EAX
// 004f505d: XOR ECX,ECX
// 004f505f: MOV dword ptr [ESP + 0xac],EDX
//   XREF to: Stack[-0x11c] (WRITE)
// 004f5066: PUSH EBX
// 004f5067: MOV dword ptr [ESP + 0xb4],ECX
//   XREF to: Stack[-0x118] (WRITE)
// 004f506e: MOV dword ptr [ESP + 0xb8],ECX
//   XREF to: Stack[-0x114] (WRITE)
// 004f5075: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 004f507a: ADD ESP,0xc
// 004f507d: XOR ESI,ESI
// 004f507f: PUSH ESI
// 004f5080: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x134] (DATA)
// 004f5087: PUSH EAX
// 004f5088: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x158] (DATA)
// 004f508c: PUSH EAX
// 004f508d: MOV EAX,[0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 004f5092: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 004f5093: CALL core_gore.cpp_FUN_004edaa0
//   XREF to: 004edaa0 (UNCONDITIONAL_CALL)
// 004f5098: ADD ESP,0x10
// 004f509b: PUSH EBX
//   Label: LAB_004f509b
// 004f509c: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 004f50a1: ADD ESP,0x4
// 004f50a4: CMP dword ptr [ESP + 0x194],0x0
//   XREF to: Stack[-0x2c] (READ)
// 004f50ac: JZ 0x004f5c84
//   XREF to: 004f5c84 (CONDITIONAL_JUMP)
// 004f50b2: LEA EAX,[EBX + 0x241c]
// 004f50b8: PUSH EAX
// 004f50b9: LEA EAX,[ESP + 0x144]
//   XREF to: Stack[-0x80] (DATA)
// 004f50c0: PUSH EAX
// 004f50c1: PUSH EBX
// 004f50c2: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 004f50c7: MOV EDX,EAX
// 004f50c9: LEA EAX,[EBX + 0x20]
// 004f50cc: FLD float ptr [EDX]
// 004f50ce: FADD float ptr [EAX]
// 004f50d0: FSTP float ptr [EAX]
// 004f50d2: FLD float ptr [EDX + 0x4]
// 004f50d5: FADD float ptr [EAX + 0x4]
// 004f50d8: FSTP float ptr [EAX + 0x4]
// 004f50db: FLD float ptr [EDX + 0x8]
// 004f50de: FADD float ptr [EAX + 0x8]
// 004f50e1: ADD ESP,0xc
// 004f50e4: FSTP float ptr [EAX + 0x8]
// 004f50e7: MOV dword ptr [EBX + 0x2dd4],0x0
//   Label: LAB_004f50e7
// 004f50f1: LEA ESI,[EBX + 0x158]
//   Label: LAB_004f50f1
// 004f50f7: PUSH ESI
// 004f50f8: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004f50fd: MOV EAX,dword ptr [EBX + 0x1fab8]
// 004f5103: ADD ESP,0x4
// 004f5106: CMP EAX,0x1
// 004f5109: JNZ 0x004f51b6
//   XREF to: 004f51b6 (CONDITIONAL_JUMP)
// 004f510f: MOV EDX,0x3f000000
// 004f5114: MOV EAX,[0x03f95d78]
//   XREF to: 03f95d78 (READ)
// 004f5119: MOV dword ptr [ESP + 0x178],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 004f5120: PUSH EAX
// 004f5121: MOV EDX,dword ptr [EBX + 0x24f8]
// 004f5127: MOV ECX,0x3f400000
// 004f512c: PUSH EDX
// 004f512d: MOV dword ptr [ESP + 0x174],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 004f5134: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f5139: ADD ESP,0x8
// 004f513c: XOR ECX,ECX
// 004f513e: MOV dword ptr [ESP + 0x174],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 004f5145: TEST EAX,EAX
// 004f5147: JZ 0x004f5e7d
//   XREF to: 004f5e7d (CONDITIONAL_JUMP)
// 004f514d: PUSH 0x10
// 004f514f: PUSH ESI
// 004f5150: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004f5155: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f515c: FLD float ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x18] (READ)
// 004f5163: FLDZ
// 004f5165: ADD ESP,0x8
// 004f5168: FCOMPP
// 004f516a: FNSTSW AX
// 004f516c: SAHF
// 004f516d: JC 0x004f5e7d
//   XREF to: 004f5e7d (CONDITIONAL_JUMP)
// 004f5173: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f5173
//   XREF to: Stack[0x8] (READ)
// 004f5176: FDIV float ptr [ESP + 0x178]
//   XREF to: Stack[-0x48] (READ)
// 004f517d: FADD float ptr [EBX + 0x1fae4]
// 004f5183: FSTP float ptr [EBX + 0x1fae4]
//   Label: LAB_004f5183
// 004f5189: FLDZ
// 004f518b: FLD float ptr [EBX + 0x1fae4]
// 004f5191: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x1b0] (WRITE)
// 004f5195: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x1b0] (READ)
// 004f5199: FNSTSW AX
// 004f519b: SAHF
// 004f519c: JC 0x004f5ea0
//   XREF to: 004f5ea0 (CONDITIONAL_JUMP)
// 004f51a2: MOV dword ptr [EBX + 0x1fae0],0x0
// 004f51ac: MOV dword ptr [EBX + 0x1fae4],0x0
// 004f51b6: PUSH EDI
//   Label: LAB_004f51b6
// 004f51b7: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f51ba: PUSH EBX
// 004f51bb: CALL core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
//   XREF to: 0042d5a0 (UNCONDITIONAL_CALL)
// 004f51c0: ADD ESP,0xc
// 004f51c3: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f51c6: PUSH EBX
// 004f51c7: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 004f51cc: FLD float ptr [EBX + 0x1fae0]
// 004f51d2: FLD1
// 004f51d4: ADD ESP,0x8
// 004f51d7: FCOMPP
// 004f51d9: FNSTSW AX
// 004f51db: SAHF
// 004f51dc: JA 0x004f5247
//   XREF to: 004f5247 (CONDITIONAL_JUMP)
// 004f51de: MOV ECX,dword ptr [0x03f95d78]
//   XREF to: 03f95d78 (READ)
// 004f51e4: PUSH ECX
// 004f51e5: MOV ESI,dword ptr [EBX + 0x24f8]
// 004f51eb: PUSH ESI
// 004f51ec: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f51f1: MOV ESI,EAX
// 004f51f3: ADD ESP,0x8
// 004f51f6: TEST EAX,EAX
// 004f51f8: JZ 0x004f5247
//   XREF to: 004f5247 (CONDITIONAL_JUMP)
// 004f51fa: MOV EDI,dword ptr [EAX + 0x56c]
// 004f5200: MOV dword ptr [EAX + 0x56c],0x6
// 004f520a: PUSH ESI
// 004f520b: MOV EAX,dword ptr [EAX + 0x154]
// 004f5211: CALL dword ptr [EAX + 0xf8]
// 004f5217: ADD ESP,0x4
// 004f521a: PUSH 0x1
// 004f521c: PUSH 0xc
// 004f521e: LEA EAX,[EBX + 0x158]
// 004f5224: PUSH EAX
// 004f5225: MOV dword ptr [ESI + 0x56c],EDI
// 004f522b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f5230: MOV dword ptr [EBX + 0x1fae4],0x0
// 004f523a: ADD ESP,0xc
// 004f523d: MOV dword ptr [EBX + 0x1fae0],0x0
// 004f5247: CMP dword ptr [EBX + 0x1fab8],0x1
//   Label: LAB_004f5247
// 004f524e: JZ 0x004f5fa1
//   XREF to: 004f5fa1 (CONDITIONAL_JUMP)
// 004f5254: MOV ESP,EBP
//   Label: LAB_004f5254
// 004f5256: POP EBP
// 004f5257: POP EDI
// 004f5258: POP ESI
// 004f5259: POP EBX
// 004f525a: RET
// 004f525b: MOV EAX,dword ptr [EBX + 0x2598]
//   Label: LAB_004f525b
// 004f5261: TEST EAX,EAX
// 004f5263: JZ 0x004f53ca
//   XREF to: 004f53ca (CONDITIONAL_JUMP)
// 004f5269: ADD EAX,0x20
// 004f526c: PUSH EAX
// 004f526d: LEA EAX,[ESP + 0xf0]
//   XREF to: Stack[-0xd4] (DATA)
// 004f5274: PUSH EAX
// 004f5275: PUSH EBX
// 004f5276: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004f527b: ADD ESP,0xc
// 004f527e: PUSH EAX
// 004f527f: LEA EAX,[ESP + 0xfc]
//   XREF to: Stack[-0xc8] (DATA)
// 004f5286: PUSH EAX
// 004f5287: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f528c: ADD ESP,0x8
// 004f528f: PUSH dword ptr [EAX + 0x4]
// 004f5292: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f5297: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f529e: FLD float ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x18] (READ)
// 004f52a5: ADD ESP,0x4
// 004f52a8: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x19c] (WRITE)
// 004f52ac: FCOMP double ptr [0x0062f09a]
//   XREF to: 0062f09a (READ)
// 004f52b2: FNSTSW AX
// 004f52b4: SAHF
// 004f52b5: JNC 0x004f52c5
//   XREF to: 004f52c5 (CONDITIONAL_JUMP)
// 004f52b7: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x19c] (READ)
// 004f52bb: FADD float ptr [0x0062f0a2]
//   XREF to: 0062f0a2 (READ)
// 004f52c1: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x19c] (WRITE)
// 004f52c5: FLD float ptr [ESP + 0x24]
//   Label: LAB_004f52c5
//   XREF to: Stack[-0x19c] (READ)
// 004f52c9: FCOMP double ptr [0x0062f0aa]
//   XREF to: 0062f0aa (READ)
// 004f52cf: FNSTSW AX
// 004f52d1: SAHF
// 004f52d2: JBE 0x004f52e2
//   XREF to: 004f52e2 (CONDITIONAL_JUMP)
// 004f52d4: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x19c] (READ)
// 004f52d8: FADD float ptr [0x0062f0b2]
//   XREF to: 0062f0b2 (READ)
// 004f52de: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x19c] (WRITE)
// 004f52e2: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f52e2
//   XREF to: Stack[0x8] (READ)
// 004f52e5: FMUL double ptr [0x0062f06a]
//   XREF to: 0062f06a (READ)
// 004f52eb: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x19c] (READ)
// 004f52ef: FXCH
// 004f52f1: FST float ptr [ESP + 0x188]
//   XREF to: Stack[-0x38] (WRITE)
// 004f52f8: FCHS
// 004f52fa: FSTP float ptr [ESP + 0x17c]
//   XREF to: Stack[-0x44] (WRITE)
// 004f5301: FCOMP float ptr [ESP + 0x17c]
//   XREF to: Stack[-0x44] (READ)
// 004f5308: FNSTSW AX
// 004f530a: SAHF
// 004f530b: JNC 0x004f5318
//   XREF to: 004f5318 (CONDITIONAL_JUMP)
// 004f530d: MOV EAX,dword ptr [ESP + 0x17c]
//   XREF to: Stack[-0x44] (READ)
// 004f5314: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 004f5318: FLD float ptr [ESP + 0x24]
//   Label: LAB_004f5318
//   XREF to: Stack[-0x19c] (READ)
// 004f531c: FCOMP float ptr [ESP + 0x188]
//   XREF to: Stack[-0x38] (READ)
// 004f5323: FNSTSW AX
// 004f5325: SAHF
// 004f5326: JBE 0x004f5333
//   XREF to: 004f5333 (CONDITIONAL_JUMP)
// 004f5328: MOV EAX,dword ptr [ESP + 0x188]
//   XREF to: Stack[-0x38] (READ)
// 004f532f: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 004f5333: FLD float ptr [EBX + 0x34]
//   Label: LAB_004f5333
// 004f5336: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x19c] (READ)
// 004f533a: PUSH EBX
// 004f533b: FSTP float ptr [EBX + 0x34]
// 004f533e: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004f5343: ADD ESP,0x4
// 004f5346: PUSH 0x0
// 004f5348: LEA EAX,[ESP + 0x12c]
//   XREF to: Stack[-0x98] (DATA)
// 004f534f: PUSH EAX
// 004f5350: LEA EAX,[EBX + 0x158]
// 004f5356: MOV ESI,dword ptr [EBX + 0x2598]
// 004f535c: PUSH EAX
// 004f535d: MOV EDI,dword ptr [ESI + 0x154]
// 004f5363: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004f5368: ADD ESP,0xc
// 004f536b: PUSH EAX
// 004f536c: PUSH EBX
// 004f536d: PUSH ESI
// 004f536e: CALL dword ptr [EDI + 0x124]
// 004f5374: ADD ESP,0xc
// 004f5377: TEST EAX,EAX
// 004f5379: JZ 0x004f53c2
//   XREF to: 004f53c2 (CONDITIONAL_JUMP)
// 004f537b: CMP dword ptr [EBX + 0x2598],0x0
// 004f5382: JNZ 0x004f5397
//   XREF to: 004f5397 (CONDITIONAL_JUMP)
// 004f5384: PUSH 0x1
//   Label: LAB_004f5384
// 004f5386: PUSH 0x0
// 004f5388: LEA EAX,[EBX + 0x158]
// 004f538e: PUSH EAX
// 004f538f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f5394: ADD ESP,0xc
// 004f5397: MOV ESI,0x1
//   Label: LAB_004f5397
// 004f539c: LEA EAX,[EBX + 0x23ac]
// 004f53a2: MOV dword ptr [ESP + 0x194],ESI
// 004f53a9: MOV dword ptr [EAX + 0x8],0x0
// 004f53b0: MOV EDI,ESI
// 004f53b2: MOV EDX,dword ptr [EAX + 0x8]
// 004f53b5: MOV dword ptr [EAX + 0x4],EDX
// 004f53b8: MOV EDX,dword ptr [EAX + 0x4]
// 004f53bb: MOV dword ptr [EAX],EDX
// 004f53bd: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f53c2: MOV dword ptr [EBX + 0x2598],EAX
//   Label: LAB_004f53c2
// 004f53c8: JMP 0x004f5384
//   XREF to: 004f5384 (UNCONDITIONAL_JUMP)
// 004f53ca: PUSH 0x3
//   Label: LAB_004f53ca
// 004f53cc: LEA ESI,[EBX + 0x158]
// 004f53d2: PUSH ESI
// 004f53d3: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004f53d8: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f53df: FLD float ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x18] (READ)
// 004f53e6: FLDZ
// 004f53e8: ADD ESP,0x8
// 004f53eb: FCOMPP
// 004f53ed: FNSTSW AX
// 004f53ef: SAHF
// 004f53f0: JC 0x004f4fc0
//   XREF to: 004f4fc0 (CONDITIONAL_JUMP)
// 004f53f6: PUSH 0x5
// 004f53f8: PUSH ESI
// 004f53f9: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004f53fe: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f5405: FLD float ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x18] (READ)
// 004f540c: FLDZ
// 004f540e: ADD ESP,0x8
// 004f5411: FCOMPP
// 004f5413: FNSTSW AX
// 004f5415: SAHF
// 004f5416: JC 0x004f4fc0
//   XREF to: 004f4fc0 (CONDITIONAL_JUMP)
// 004f541c: PUSH 0x8
// 004f541e: PUSH ESI
// 004f541f: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 004f5424: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f542b: FLD float ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x18] (READ)
// 004f5432: FLDZ
// 004f5434: ADD ESP,0x8
// 004f5437: FCOMPP
// 004f5439: FNSTSW AX
// 004f543b: SAHF
// 004f543c: JC 0x004f4fc0
//   XREF to: 004f4fc0 (CONDITIONAL_JUMP)
// 004f5442: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f5445: PUSH EBX
// 004f5446: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 004f544b: ADD ESP,0x8
// 004f544e: TEST EAX,EAX
// 004f5450: JZ 0x004f5c6e
//   XREF to: 004f5c6e (CONDITIONAL_JUMP)
// 004f5456: MOV EAX,dword ptr [EBX + 0x25b0]
// 004f545c: CMP EAX,0x2
// 004f545f: JNC 0x004f54da
//   XREF to: 004f54da (CONDITIONAL_JUMP)
// 004f5461: CMP EAX,0x1
// 004f5464: JNZ 0x004f54c2
//   XREF to: 004f54c2 (CONDITIONAL_JUMP)
// 004f5466: PUSH EAX
// 004f5467: PUSH EAX
// 004f5468: LEA EAX,[EBX + 0x158]
// 004f546e: PUSH EAX
// 004f546f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f5474: ADD ESP,0xc
// 004f5477: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f547c: PUSH 0x1
//   Label: LAB_004f547c
// 004f547e: PUSH 0x0
// 004f5480: LEA EAX,[EBX + 0x158]
// 004f5486: PUSH EAX
// 004f5487: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f548c: ADD ESP,0xc
// 004f548f: PUSH EBX
// 004f5490: MOV EAX,0x62ef00
//   XREF to: 0062ef00 (DATA)
// 004f5495: PUSH EAX
//   XREF to: 0062ef00 (DATA)
// 004f5496: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004f549c: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 004f549d: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f54a2: ADD ESP,0xc
// 004f54a5: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f54aa: PUSH 0x1
//   Label: LAB_004f54aa
// 004f54ac: PUSH 0x2
// 004f54ae: LEA EAX,[EBX + 0x158]
// 004f54b4: PUSH EAX
// 004f54b5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f54ba: ADD ESP,0xc
// 004f54bd: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f54c2: PUSH 0x1
//   Label: LAB_004f54c2
// 004f54c4: PUSH 0x0
// 004f54c6: LEA EAX,[EBX + 0x158]
// 004f54cc: PUSH EAX
// 004f54cd: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f54d2: ADD ESP,0xc
// 004f54d5: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f54da: JBE 0x004f54aa
//   Label: LAB_004f54da
//   XREF to: 004f54aa (CONDITIONAL_JUMP)
// 004f54dc: CMP EAX,0x3
// 004f54df: JZ 0x004f547c
//   XREF to: 004f547c (CONDITIONAL_JUMP)
// 004f54e1: JMP 0x004f54c2
//   XREF to: 004f54c2 (UNCONDITIONAL_JUMP)
// 004f54e3: PUSH dword ptr [EBP + 0x18]
//   Label: caseD_0
//   XREF to: Stack[0x8] (READ)
// 004f54e6: PUSH EBX
// 004f54e7: CALL core_hostage.cpp_FUN_004f5ff0
//   XREF to: 004f5ff0 (UNCONDITIONAL_CALL)
// 004f54ec: ADD ESP,0x8
// 004f54ef: TEST EAX,EAX
// 004f54f1: JNZ 0x004f4fc5
//   XREF to: 004f4fc5 (CONDITIONAL_JUMP)
// 004f54f7: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f54fc: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f5503: LEA EDX,[EAX + 0x20]
// 004f5506: LEA EAX,[EBX + 0x20]
// 004f5509: FLD float ptr [EDX]
// 004f550b: FSUB float ptr [EAX]
// 004f550d: FSTP float ptr [ESP + 0xe0]
//   XREF to: Stack[-0xe0] (WRITE)
// 004f5514: FLD float ptr [EDX + 0x4]
// 004f5517: FSUB float ptr [EAX + 0x4]
// 004f551a: FSTP float ptr [ESP + 0xe4]
//   XREF to: Stack[-0xdc] (WRITE)
// 004f5521: FLD float ptr [EDX + 0x8]
// 004f5524: FSUB float ptr [EAX + 0x8]
// 004f5527: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0xd8] (WRITE)
// 004f552e: FLD float ptr [EBX + 0x1f708]
// 004f5534: FLDZ
// 004f5536: FCOMPP
// 004f5538: FNSTSW AX
// 004f553a: SAHF
// 004f553b: JNC 0x004f556d
//   XREF to: 004f556d (CONDITIONAL_JUMP)
// 004f553d: FLD float ptr [ESP + 0xe4]
//   XREF to: Stack[-0xdc] (READ)
// 004f5544: FMUL ST0
// 004f5546: FLD float ptr [ESP + 0xe0]
//   XREF to: Stack[-0xe0] (READ)
// 004f554d: FMUL ST0
// 004f554f: FADDP
// 004f5551: FLD float ptr [ESP + 0xe8]
//   XREF to: Stack[-0xd8] (READ)
// 004f5558: FMUL ST0
// 004f555a: FADDP
// 004f555c: FSQRT
// 004f555e: FCOMP float ptr [EBX + 0x1f708]
// 004f5564: FNSTSW AX
// 004f5566: SAHF
// 004f5567: JNC 0x004f54c2
//   XREF to: 004f54c2 (CONDITIONAL_JUMP)
// 004f556d: LEA EAX,[EBX + 0x1f70c]
//   Label: LAB_004f556d
// 004f5573: PUSH EAX
// 004f5574: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004f557a: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004f557b: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004f5580: ADD ESP,0x8
// 004f5583: TEST EAX,EAX
// 004f5585: JZ 0x004f54c2
//   XREF to: 004f54c2 (CONDITIONAL_JUMP)
// 004f558b: PUSH EBX
// 004f558c: PUSH 0x62ef2a
//   XREF to: 0062ef2a (DATA)
// 004f5591: MOV ESI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004f5597: PUSH ESI
//   XREF to: 0083b1a4 (DATA)
// 004f5598: MOV dword ptr [EBX + 0x1fabc],0x1
// 004f55a2: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f55a7: ADD ESP,0xc
// 004f55aa: LEA EAX,[EBX + 0x1f790]
// 004f55b0: PUSH EAX
// 004f55b1: MOV EAX,[0x006793d0]
//   XREF to: 006793d0 (READ)
//   XREF to: 02d05310 (PARAM)
// 004f55b6: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 004f55b7: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004f55bc: ADD ESP,0x8
// 004f55bf: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f55c4: MOV ECX,dword ptr [EBX + 0x1fac0]
//   Label: caseD_1
// 004f55ca: TEST ECX,ECX
// 004f55cc: JNZ 0x004f561e
//   XREF to: 004f561e (CONDITIONAL_JUMP)
// 004f55ce: CMP dword ptr [EBX + 0x1fac8],0x0
//   Label: LAB_004f55ce
// 004f55d5: JZ 0x004f5657
//   XREF to: 004f5657 (CONDITIONAL_JUMP)
// 004f55db: PUSH EBX
// 004f55dc: PUSH 0x62ef4c
//   XREF to: 0062ef4c (DATA)
// 004f55e1: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004f55e6: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 004f55e7: MOV dword ptr [EBX + 0x1fabc],0x3
// 004f55f1: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f55f6: ADD ESP,0xc
// 004f55f9: LEA EAX,[EBX + 0x1f920]
// 004f55ff: PUSH EAX
// 004f5600: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
//   XREF to: 02d05310 (PARAM)
// 004f5606: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 004f5607: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004f560c: ADD ESP,0x8
// 004f560f: MOV dword ptr [EBX + 0x2dc4],0x0
// 004f5619: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f561e: LEA EDX,[EBX + 0x20]
//   Label: LAB_004f561e
// 004f5621: FLD float ptr [EDX]
// 004f5623: FSUB float ptr [ECX + 0x20]
// 004f5626: FMUL ST0
// 004f5628: FLD float ptr [EDX + 0x8]
// 004f562b: FSUB float ptr [ECX + 0x28]
// 004f562e: FMUL ST0
// 004f5630: FADDP
// 004f5632: FSQRT
// 004f5634: FCOMP double ptr [0x0062f092]
//   XREF to: 0062f092 (READ)
// 004f563a: FNSTSW AX
// 004f563c: SAHF
// 004f563d: JNC 0x004f55ce
//   XREF to: 004f55ce (CONDITIONAL_JUMP)
// 004f563f: PUSH ECX
// 004f5640: LEA EAX,[EBX + 0x20]
// 004f5643: PUSH EAX
// 004f5644: CALL core_waypoint.cpp_FUN_005ec320
//   XREF to: 005ec320 (UNCONDITIONAL_CALL)
// 004f5649: ADD ESP,0x8
// 004f564c: MOV dword ptr [EBX + 0x1fac8],EAX
// 004f5652: JMP 0x004f55ce
//   XREF to: 004f55ce (UNCONDITIONAL_JUMP)
// 004f5657: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_004f5657
//   XREF to: Stack[0x8] (READ)
// 004f565a: PUSH EBX
// 004f565b: CALL core_hostage.cpp_FUN_004f5ff0
//   XREF to: 004f5ff0 (UNCONDITIONAL_CALL)
// 004f5660: ADD ESP,0x8
// 004f5663: TEST EAX,EAX
// 004f5665: JNZ 0x004f4fc5
//   XREF to: 004f4fc5 (CONDITIONAL_JUMP)
// 004f566b: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f566e: PUSH EBX
// 004f566f: CALL core_charactr.cpp_CCharacter_FUN_0042ede0
//   XREF to: 0042ede0 (UNCONDITIONAL_CALL)
// 004f5674: ADD ESP,0x8
// 004f5677: TEST EAX,EAX
// 004f5679: JNZ 0x004f56d0
//   XREF to: 004f56d0 (CONDITIONAL_JUMP)
// 004f567b: LEA EAX,[EBX + 0x1fab4]
// 004f5681: PUSH EAX
// 004f5682: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f5687: PUSH 0x41200000
// 004f568c: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f5693: PUSH 0x40a00000
// 004f5698: PUSH EDX
// 004f5699: PUSH EBX
// 004f569a: CALL core_charactr.cpp_CCharacter_FUN_0042c5f0
//   XREF to: 0042c5f0 (UNCONDITIONAL_CALL)
// 004f569f: ADD ESP,0x14
// 004f56a2: MOV EAX,dword ptr [EBX + 0x1fab4]
//   Label: LAB_004f56a2
// 004f56a8: LEA EDX,[EBX + 0x158]
// 004f56ae: CMP EAX,0x2
// 004f56b1: JNC 0x004f573b
//   XREF to: 004f573b (CONDITIONAL_JUMP)
// 004f56b7: CMP EAX,0x1
// 004f56ba: JNZ 0x004f54c2
//   XREF to: 004f54c2 (CONDITIONAL_JUMP)
// 004f56c0: PUSH EAX
// 004f56c1: PUSH EAX
// 004f56c2: PUSH EDX
// 004f56c3: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f56c8: ADD ESP,0xc
// 004f56cb: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f56d0: MOV dword ptr [EBX + 0x1fab4],EAX
//   Label: LAB_004f56d0
// 004f56d6: JMP 0x004f56a2
//   XREF to: 004f56a2 (UNCONDITIONAL_JUMP)
// 004f56d8: PUSH 0x1
//   Label: LAB_004f56d8
// 004f56da: PUSH 0x0
// 004f56dc: PUSH EDX
// 004f56dd: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f56e2: ADD ESP,0xc
// 004f56e5: PUSH EBX
// 004f56e6: PUSH 0x62ef72
//   XREF to: 0062ef72 (DATA)
// 004f56eb: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004f56f1: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004f56f2: MOV dword ptr [EBX + 0x1fabc],0x2
// 004f56fc: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f5701: ADD ESP,0xc
// 004f5704: LEA EAX,[EBX + 0x1f7f4]
// 004f570a: PUSH EAX
// 004f570b: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004f5711: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 004f5712: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004f5717: ADD ESP,0x8
// 004f571a: MOV dword ptr [EBX + 0x2dc4],0x0
// 004f5724: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f5729: PUSH 0x1
//   Label: LAB_004f5729
// 004f572b: PUSH 0x2
// 004f572d: PUSH EDX
// 004f572e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f5733: ADD ESP,0xc
// 004f5736: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f573b: JBE 0x004f5729
//   Label: LAB_004f573b
//   XREF to: 004f5729 (CONDITIONAL_JUMP)
// 004f573d: CMP EAX,0x3
// 004f5740: JZ 0x004f56d8
//   XREF to: 004f56d8 (CONDITIONAL_JUMP)
// 004f5742: JMP 0x004f54c2
//   XREF to: 004f54c2 (UNCONDITIONAL_JUMP)
// 004f5747: PUSH dword ptr [EBP + 0x18]
//   Label: caseD_2
//   XREF to: Stack[0x8] (READ)
// 004f574a: PUSH EBX
// 004f574b: CALL core_hostage.cpp_FUN_004f5ff0
//   XREF to: 004f5ff0 (UNCONDITIONAL_CALL)
// 004f5750: ADD ESP,0x8
// 004f5753: TEST EAX,EAX
// 004f5755: JNZ 0x004f4fc5
//   XREF to: 004f4fc5 (CONDITIONAL_JUMP)
// 004f575b: LEA EAX,[EBX + 0x1fab4]
// 004f5761: PUSH EAX
// 004f5762: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004f5767: PUSH 0x41200000
// 004f576c: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004f5773: PUSH 0x40800000
// 004f5778: PUSH EDX
// 004f5779: PUSH EBX
// 004f577a: CALL core_charactr.cpp_CCharacter_FUN_0042c5f0
//   XREF to: 0042c5f0 (UNCONDITIONAL_CALL)
// 004f577f: ADD ESP,0x14
// 004f5782: XOR ECX,ECX
// 004f5784: MOV EAX,dword ptr [EBX + 0x1fab4]
// 004f578a: MOV dword ptr [ESP + 0x170],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 004f5791: CMP EAX,0x1
// 004f5794: JNC 0x004f57ea
//   XREF to: 004f57ea (CONDITIONAL_JUMP)
// 004f5796: TEST EAX,EAX
// 004f5798: JNZ 0x004f57f1
//   XREF to: 004f57f1 (CONDITIONAL_JUMP)
// 004f579a: PUSH 0x1
// 004f579c: PUSH ECX
// 004f579d: PUSH ESI
//   Label: LAB_004f579d
// 004f579e: MOV dword ptr [EBX + 0x1fabc],0x1
// 004f57a8: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f57ad: ADD ESP,0xc
// 004f57b0: PUSH EBX
//   Label: LAB_004f57b0
// 004f57b1: PUSH 0x62ef83
//   XREF to: 0062ef83 (DATA)
// 004f57b6: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004f57bb: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 004f57bc: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f57c1: ADD ESP,0xc
// 004f57c4: LEA EAX,[EBX + 0x1f858]
// 004f57ca: PUSH EAX
// 004f57cb: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
//   XREF to: 02d05310 (PARAM)
// 004f57d1: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 004f57d2: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004f57d7: ADD ESP,0x8
// 004f57da: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f57df: PUSH 0x1
//   Label: LAB_004f57df
// 004f57e1: PUSH 0x1
// 004f57e3: JMP 0x004f579d
//   XREF to: 004f579d (UNCONDITIONAL_JUMP)
// 004f57e5: PUSH 0x1
//   Label: LAB_004f57e5
// 004f57e7: PUSH EAX
// 004f57e8: JMP 0x004f579d
//   XREF to: 004f579d (UNCONDITIONAL_JUMP)
// 004f57ea: JBE 0x004f57df
//   Label: LAB_004f57ea
//   XREF to: 004f57df (CONDITIONAL_JUMP)
// 004f57ec: CMP EAX,0x2
// 004f57ef: JZ 0x004f57e5
//   XREF to: 004f57e5 (CONDITIONAL_JUMP)
// 004f57f1: PUSH 0x1
//   Label: LAB_004f57f1
// 004f57f3: PUSH 0x0
// 004f57f5: LEA EAX,[EBX + 0x158]
// 004f57fb: PUSH EAX
// 004f57fc: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f5801: ADD ESP,0xc
// 004f5804: CMP dword ptr [ESP + 0x170],0x0
//   XREF to: Stack[-0x50] (READ)
// 004f580c: JNZ 0x004f57b0
//   XREF to: 004f57b0 (CONDITIONAL_JUMP)
// 004f580e: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f5813: CMP dword ptr [EBX + 0x1fac8],0x0
//   Label: caseD_3
// 004f581a: JNZ 0x004f5959
//   XREF to: 004f5959 (CONDITIONAL_JUMP)
// 004f5820: PUSH EBX
// 004f5821: PUSH 0x62efb2
//   XREF to: 0062efb2 (DATA)
// 004f5826: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004f582c: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004f582d: MOV dword ptr [EBX + 0x1fabc],0x2
// 004f5837: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f583c: ADD ESP,0xc
// 004f583f: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f5844: MOV EDX,dword ptr [EBX + 0x1fac8]
//   Label: caseD_0
// 004f584a: PUSH EDX
// 004f584b: PUSH EBX
// 004f584c: PUSH 0x62efe7
//   XREF to: 0062efe7 (DATA)
// 004f5851: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004f5857: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004f5858: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f585d: MOV EAX,dword ptr [EBX + 0x1fac8]
// 004f5863: MOV ESI,dword ptr [EBX + 0x1fac0]
// 004f5869: ADD ESP,0x10
// 004f586c: CMP EAX,ESI
// 004f586e: JNZ 0x004f589e
//   XREF to: 004f589e (CONDITIONAL_JUMP)
// 004f5870: PUSH EBX
// 004f5871: PUSH 0x62f000
//   XREF to: 0062f000 (DATA)
// 004f5876: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004f587c: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 004f587d: MOV dword ptr [EBX + 0x1fabc],0x4
// 004f5887: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f588c: ADD ESP,0xc
// 004f588f: MOV dword ptr [EBX + 0x1fac8],0x0
// 004f5899: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f589e: PUSH ESI
//   Label: LAB_004f589e
// 004f589f: LEA EAX,[EBX + 0x20]
// 004f58a2: PUSH EAX
// 004f58a3: CALL core_waypoint.cpp_FUN_005ec320
//   XREF to: 005ec320 (UNCONDITIONAL_CALL)
// 004f58a8: ADD ESP,0x8
// 004f58ab: MOV dword ptr [EBX + 0x1fac8],EAX
// 004f58b1: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f58b6: PUSH 0x1
//   Label: caseD_3
// 004f58b8: PUSH 0x0
// 004f58ba: PUSH ESI
// 004f58bb: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f58c0: ADD ESP,0xc
// 004f58c3: PUSH EBX
// 004f58c4: PUSH 0x62f01c
//   XREF to: 0062f01c (DATA)
// 004f58c9: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004f58cf: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 004f58d0: MOV dword ptr [EBX + 0x1fabc],0x2
// 004f58da: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f58df: ADD ESP,0xc
// 004f58e2: PUSH 0x1
// 004f58e4: PUSH 0x0
// 004f58e6: PUSH ESI
// 004f58e7: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f58ec: ADD ESP,0xc
// 004f58ef: LEA EAX,[EBX + 0x1f984]
// 004f58f5: PUSH EAX
// 004f58f6: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004f58fc: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 004f58fd: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004f5902: ADD ESP,0x8
// 004f5905: PUSH 0x1
// 004f5907: LEA EAX,[EBX + 0x1f770]
// 004f590d: PUSH EAX
// 004f590e: MOV EAX,[0x006793d0]
//   XREF to: 006793d0 (READ)
//   XREF to: 02d05310 (PARAM)
// 004f5913: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 004f5914: CALL core_event.cpp_EventChecker_FUN_004b0330
//   XREF to: 004b0330 (UNCONDITIONAL_CALL)
// 004f5919: MOV dword ptr [EBX + 0x1fabc],0x4
// 004f5923: ADD ESP,0xc
// 004f5926: MOV dword ptr [EBX + 0x1fac8],0x0
// 004f5930: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f5935: PUSH 0x1
//   Label: caseD_1
// 004f5937: PUSH 0x1
// 004f5939: PUSH ESI
// 004f593a: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f593f: ADD ESP,0xc
// 004f5942: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f5947: PUSH 0x1
//   Label: caseD_2
// 004f5949: PUSH 0x2
// 004f594b: PUSH ESI
// 004f594c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f5951: ADD ESP,0xc
// 004f5954: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f5959: LEA EAX,[EBX + 0x1fab4]
//   Label: LAB_004f5959
// 004f595f: PUSH EAX
// 004f5960: PUSH 0xbf800000
// 004f5965: MOV EDX,dword ptr [EBX + 0x1fac8]
// 004f596b: PUSH 0x3f800000
// 004f5970: PUSH EDX
// 004f5971: PUSH EBX
// 004f5972: CALL core_charactr.cpp_CCharacter_FUN_0042c5f0
//   XREF to: 0042c5f0 (UNCONDITIONAL_CALL)
// 004f5977: MOV EAX,dword ptr [EBX + 0x1fab4]
// 004f597d: ADD ESP,0x14
// 004f5980: CMP EAX,0x3
// 004f5983: JA 0x004f4fc5
//   XREF to: 004f4fc5 (CONDITIONAL_JUMP)
// 004f5989: JMP dword ptr [EAX*0x4 + 0x4f4ba8]
//   Label: switchD
//   XREF to: 004f5844 (COMPUTED_JUMP)
//   XREF to: 004f5935 (COMPUTED_JUMP)
//   XREF to: 004f5947 (COMPUTED_JUMP)
//   XREF to: 004f58b6 (COMPUTED_JUMP)
//   XREF to: 004f4ba8 (DATA)
// 004f5990: MOV EDX,0x1
//   Label: caseD_4
// 004f5995: MOV ECX,dword ptr [EBX + 0x1fac4]
// 004f599b: MOV dword ptr [ESP + 0x194],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004f59a2: TEST ECX,ECX
// 004f59a4: JZ 0x004f4fc5
//   XREF to: 004f4fc5 (CONDITIONAL_JUMP)
// 004f59aa: FLD float ptr [EBX + 0x2434]
// 004f59b0: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f59b3: FMUL double ptr [0x0062f072]
//   XREF to: 0062f072 (READ)
// 004f59b9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c0] (DATA)
// 004f59bc: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x1c0] (DATA)
// 004f59bf: FNSTSW AX
// 004f59c1: SAHF
// 004f59c2: JNC 0x004f59cd
//   XREF to: 004f59cd (CONDITIONAL_JUMP)
// 004f59c4: FLD double ptr [ESP]
//   XREF to: Stack[-0x1c0] (DATA)
// 004f59c7: FSTP float ptr [EBX + 0x2434]
// 004f59cd: MOV EAX,dword ptr [EBX + 0x1fac4]
//   Label: LAB_004f59cd
// 004f59d3: ADD EAX,0x20
// 004f59d6: PUSH EAX
// 004f59d7: LEA EAX,[ESP + 0x138]
//   XREF to: Stack[-0x8c] (DATA)
// 004f59de: PUSH EAX
// 004f59df: PUSH EBX
// 004f59e0: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004f59e5: LEA EDX,[EBX + 0x241c]
// 004f59eb: ADD ESP,0xc
// 004f59ee: CMP EDX,EAX
// 004f59f0: JZ 0x004f5a02
//   XREF to: 004f5a02 (CONDITIONAL_JUMP)
// 004f59f2: MOV ECX,dword ptr [EAX]
// 004f59f4: MOV dword ptr [EDX],ECX
// 004f59f6: MOV ECX,dword ptr [EAX + 0x4]
// 004f59f9: MOV dword ptr [EDX + 0x4],ECX
// 004f59fc: MOV ECX,dword ptr [EAX + 0x8]
// 004f59ff: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 00002424 (DATA)
// 004f5a02: LEA EDX,[EBX + 0x241c]
//   Label: LAB_004f5a02
// 004f5a08: MOV EAX,dword ptr [EDX]
// 004f5a0a: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 004f5a11: LEA EAX,[EDX + 0x4]
// 004f5a14: MOV EAX,dword ptr [EAX]
// 004f5a16: FLD float ptr [ESP + 0x11c]
//   XREF to: Stack[-0xa4] (READ)
// 004f5a1d: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 004f5a24: LEA EAX,[EDX + 0x8]
// 004f5a27: FMUL float ptr [ESP + 0x11c]
//   XREF to: Stack[-0xa4] (READ)
// 004f5a2e: MOV EAX,dword ptr [EAX]
//   XREF to: 00002424 (DATA)
// 004f5a30: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 004f5a37: FLD float ptr [ESP + 0x124]
//   XREF to: Stack[-0x9c] (READ)
// 004f5a3e: FMUL ST0
// 004f5a40: FADDP
// 004f5a42: FSQRT
// 004f5a44: XOR ESI,ESI
// 004f5a46: MOV dword ptr [ESP + 0x120],ESI
//   XREF to: Stack[-0xa0] (WRITE)
// 004f5a4d: FSTP float ptr [ESP + 0x18c]
//   XREF to: Stack[-0x34] (WRITE)
// 004f5a54: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[-0x34] (READ)
// 004f5a5b: FLD float ptr [ESP + 0x18c]
//   XREF to: Stack[-0x34] (READ)
// 004f5a62: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 004f5a66: FCOMP float ptr [EBX + 0x2434]
// 004f5a6c: FNSTSW AX
// 004f5a6e: SAHF
// 004f5a6f: JBE 0x004f5aae
//   XREF to: 004f5aae (CONDITIONAL_JUMP)
// 004f5a71: FLD float ptr [EBX + 0x2434]
// 004f5a77: FDIV float ptr [ESP + 0x18c]
//   XREF to: Stack[-0x34] (READ)
// 004f5a7e: FLD float ptr [EDX]
// 004f5a80: FXCH
// 004f5a82: FSTP float ptr [ESP + 0x190]
//   XREF to: Stack[-0x30] (WRITE)
// 004f5a89: FMUL float ptr [ESP + 0x190]
//   XREF to: Stack[-0x30] (READ)
// 004f5a90: FLD float ptr [EDX + 0x4]
// 004f5a93: FMUL float ptr [ESP + 0x190]
//   XREF to: Stack[-0x30] (READ)
// 004f5a9a: FLD float ptr [EDX + 0x8]
//   XREF to: 00002424 (DATA)
// 004f5a9d: FMUL float ptr [ESP + 0x190]
//   XREF to: Stack[-0x30] (READ)
// 004f5aa4: FXCH ST2
// 004f5aa6: FSTP float ptr [EDX]
// 004f5aa8: FSTP float ptr [EDX + 0x4]
// 004f5aab: FSTP float ptr [EDX + 0x8]
//   XREF to: 00002424 (DATA)
// 004f5aae: LEA EAX,[EBX + 0x241c]
//   Label: LAB_004f5aae
// 004f5ab4: PUSH EAX
// 004f5ab5: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x14c] (DATA)
// 004f5ab9: PUSH EAX
// 004f5aba: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f5abf: ADD ESP,0x8
// 004f5ac2: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x198] (READ)
// 004f5ac6: FMUL double ptr [0x0062f07a]
//   XREF to: 0062f07a (READ)
// 004f5acc: FLD1
// 004f5ace: MOV EDX,dword ptr [EAX + 0x4]
// 004f5ad1: MOV dword ptr [EBX + 0x2418],EDX
// 004f5ad7: FXCH
// 004f5ad9: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x1a8] (WRITE)
// 004f5add: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x1a8] (READ)
// 004f5ae1: FNSTSW AX
// 004f5ae3: SAHF
// 004f5ae4: JBE 0x004f5b44
//   XREF to: 004f5b44 (CONDITIONAL_JUMP)
// 004f5ae6: MOV EAX,dword ptr [EBX + 0x1fac4]
// 004f5aec: FLD float ptr [EAX + 0x34]
// 004f5aef: FSUB float ptr [EBX + 0x34]
// 004f5af2: SUB ESP,0x4
// 004f5af5: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c4] (DATA)
// 004f5af8: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f5afd: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f5b04: FLD float ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x18] (READ)
// 004f5b0b: ADD ESP,0x4
// 004f5b0e: FSUB float ptr [EBX + 0x2418]
// 004f5b14: SUB ESP,0x4
// 004f5b17: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c4] (DATA)
// 004f5b1a: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f5b1f: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f5b26: FLD float ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x18] (READ)
// 004f5b2d: ADD ESP,0x4
// 004f5b30: FLD1
// 004f5b32: FSUB double ptr [ESP + 0x18]
//   XREF to: Stack[-0x1a8] (READ)
// 004f5b36: FMULP
// 004f5b38: FADD float ptr [EBX + 0x2418]
// 004f5b3e: FSTP float ptr [EBX + 0x2418]
// 004f5b44: PUSH dword ptr [EBX + 0x2418]
//   Label: LAB_004f5b44
// 004f5b4a: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f5b4f: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f5b56: FLD float ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x18] (READ)
// 004f5b5d: ADD ESP,0x4
// 004f5b60: FSTP float ptr [EBX + 0x2418]
// 004f5b66: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x198] (READ)
// 004f5b6a: FCOMP double ptr [0x0062f082]
//   XREF to: 0062f082 (READ)
// 004f5b70: FNSTSW AX
// 004f5b72: SAHF
// 004f5b73: JNC 0x004f5beb
//   XREF to: 004f5beb (CONDITIONAL_JUMP)
// 004f5b75: FLD float ptr [EBX + 0x2418]
// 004f5b7b: FABS
// 004f5b7d: FCOMP double ptr [0x0062f08a]
//   XREF to: 0062f08a (READ)
// 004f5b83: FNSTSW AX
// 004f5b85: SAHF
// 004f5b86: JNC 0x004f5beb
//   XREF to: 004f5beb (CONDITIONAL_JUMP)
// 004f5b88: MOV EAX,dword ptr [EBX + 0x1fab8]
// 004f5b8e: TEST EAX,EAX
// 004f5b90: JNZ 0x004f5c4d
//   XREF to: 004f5c4d (CONDITIONAL_JUMP)
// 004f5b96: PUSH 0x1
//   Label: LAB_004f5b96
// 004f5b98: PUSH 0x0
// 004f5b9a: LEA EAX,[EBX + 0x158]
// 004f5ba0: PUSH EAX
// 004f5ba1: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f5ba6: ADD ESP,0xc
// 004f5ba9: MOV dword ptr [EBX + 0x1fabc],0x5
// 004f5bb3: LEA EAX,[EBX + 0x1f984]
//   Label: LAB_004f5bb3
// 004f5bb9: PUSH EAX
// 004f5bba: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
//   XREF to: 02d05310 (PARAM)
// 004f5bc0: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004f5bc1: CALL core_event.cpp_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004f5bc6: ADD ESP,0x8
// 004f5bc9: PUSH 0x1
// 004f5bcb: LEA EAX,[EBX + 0x1f770]
// 004f5bd1: PUSH EAX
// 004f5bd2: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004f5bd8: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 004f5bd9: CALL core_event.cpp_EventChecker_FUN_004b0330
//   XREF to: 004b0330 (UNCONDITIONAL_CALL)
// 004f5bde: ADD ESP,0xc
// 004f5be1: MOV dword ptr [EBX + 0x1fac4],0x0
// 004f5beb: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f5beb
//   XREF to: Stack[0x8] (READ)
// 004f5bee: FMUL double ptr [0x0062f06a]
//   XREF to: 0062f06a (READ)
// 004f5bf4: FLD float ptr [EBX + 0x2418]
// 004f5bfa: FXCH
// 004f5bfc: FST float ptr [ESP + 0x184]
//   XREF to: Stack[-0x3c] (WRITE)
// 004f5c03: FCHS
// 004f5c05: FSTP float ptr [ESP + 0x180]
//   XREF to: Stack[-0x40] (WRITE)
// 004f5c0c: FCOMP float ptr [ESP + 0x180]
//   XREF to: Stack[-0x40] (READ)
// 004f5c13: FNSTSW AX
// 004f5c15: SAHF
// 004f5c16: JNC 0x004f5c25
//   XREF to: 004f5c25 (CONDITIONAL_JUMP)
// 004f5c18: MOV EAX,dword ptr [ESP + 0x180]
//   XREF to: Stack[-0x40] (READ)
// 004f5c1f: MOV dword ptr [EBX + 0x2418],EAX
// 004f5c25: FLD float ptr [EBX + 0x2418]
//   Label: LAB_004f5c25
// 004f5c2b: FCOMP float ptr [ESP + 0x184]
//   XREF to: Stack[-0x3c] (READ)
// 004f5c32: FNSTSW AX
// 004f5c34: SAHF
// 004f5c35: JBE 0x004f4fc5
//   XREF to: 004f4fc5 (CONDITIONAL_JUMP)
// 004f5c3b: MOV EAX,dword ptr [ESP + 0x184]
//   XREF to: Stack[-0x3c] (READ)
// 004f5c42: MOV dword ptr [EBX + 0x2418],EAX
// 004f5c48: JMP 0x004f4fc5
//   XREF to: 004f4fc5 (UNCONDITIONAL_JUMP)
// 004f5c4d: CMP EAX,0x4
//   Label: LAB_004f5c4d
// 004f5c50: JZ 0x004f5b96
//   XREF to: 004f5b96 (CONDITIONAL_JUMP)
// 004f5c56: PUSH 0x1
// 004f5c58: PUSH 0xa
// 004f5c5a: LEA EAX,[EBX + 0x158]
// 004f5c60: PUSH EAX
// 004f5c61: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f5c66: ADD ESP,0xc
// 004f5c69: JMP 0x004f5bb3
//   XREF to: 004f5bb3 (UNCONDITIONAL_JUMP)
// 004f5c6e: MOV EAX,dword ptr [EBX + 0x1fabc]
//   Label: LAB_004f5c6e
// 004f5c74: CMP EAX,0x5
// 004f5c77: JA 0x004f4fc5
//   XREF to: 004f4fc5 (CONDITIONAL_JUMP)
// 004f5c7d: JMP dword ptr [EAX*0x4 + 0x4f4bb8]
//   Label: switchD
//   XREF to: 004f54e3 (COMPUTED_JUMP)
//   XREF to: 004f55c4 (COMPUTED_JUMP)
//   XREF to: 004f5747 (COMPUTED_JUMP)
//   XREF to: 004f5813 (COMPUTED_JUMP)
//   XREF to: 004f5990 (COMPUTED_JUMP)
//   XREF to: 004f4fc5 (COMPUTED_JUMP)
//   XREF to: 004f4bb8 (DATA)
// 004f5c84: LEA EAX,[EBX + 0x158]
//   Label: LAB_004f5c84
// 004f5c8a: PUSH EAX
// 004f5c8b: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f5c90: MOV EAX,dword ptr [EAX + 0x24]
// 004f5c93: ADD ESP,0x4
// 004f5c96: CMP EAX,0x8
// 004f5c99: JZ 0x004f5e1f
//   XREF to: 004f5e1f (CONDITIONAL_JUMP)
// 004f5c9f: TEST EAX,EAX
// 004f5ca1: JZ 0x004f5e1f
//   XREF to: 004f5e1f (CONDITIONAL_JUMP)
// 004f5ca7: CMP EAX,0xd
// 004f5caa: JZ 0x004f5e1f
//   XREF to: 004f5e1f (CONDITIONAL_JUMP)
// 004f5cb0: CMP EAX,0xa
// 004f5cb3: JZ 0x004f5e1f
//   XREF to: 004f5e1f (CONDITIONAL_JUMP)
// 004f5cb9: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f5cb9
//   XREF to: Stack[0x8] (READ)
// 004f5cbc: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1b8] (WRITE)
// 004f5cc0: FMUL double ptr [0x0062f0ba]
//   XREF to: 0062f0ba (READ)
// 004f5cc6: FLD float ptr [EBX + 0x242c]
// 004f5ccc: FXCH
// 004f5cce: FSUBR ST0,ST1
// 004f5cd0: LEA ESI,[EBX + 0x2428]
// 004f5cd6: FSTP ST1
// 004f5cd8: FSTP float ptr [EBX + 0x242c]
// 004f5cde: FLD float ptr [ESI]
// 004f5ce0: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f5ce3: FSTP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x104] (WRITE)
// 004f5cea: FLD float ptr [ESI + 0x4]
// 004f5ced: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f5cf0: LEA EAX,[EBX + 0x241c]
// 004f5cf6: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x100] (WRITE)
// 004f5cfd: FLD float ptr [ESI + 0x8]
// 004f5d00: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f5d03: LEA EDX,[EBX + 0x23ac]
// 004f5d09: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x104] (READ)
// 004f5d10: FXCH
// 004f5d12: FSTP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0xfc] (WRITE)
// 004f5d19: FADD float ptr [EAX]
// 004f5d1b: FLD float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x100] (READ)
// 004f5d22: FXCH
// 004f5d24: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x128] (WRITE)
// 004f5d2b: FADD float ptr [EAX + 0x4]
// 004f5d2e: FLD float ptr [ESP + 0xc4]
//   XREF to: Stack[-0xfc] (READ)
// 004f5d35: FXCH
// 004f5d37: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x124] (WRITE)
// 004f5d3e: FADD float ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 004f5d41: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x128] (READ)
// 004f5d48: FXCH
// 004f5d4a: FSTP float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x120] (WRITE)
// 004f5d51: FADD float ptr [EDX]
// 004f5d53: FLD float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x124] (READ)
// 004f5d5a: FXCH
// 004f5d5c: FSTP float ptr [ESP + 0x110]
//   XREF to: Stack[-0xb0] (WRITE)
// 004f5d63: FADD float ptr [EDX + 0x4]
// 004f5d66: FLD float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x120] (READ)
// 004f5d6d: FXCH
// 004f5d6f: FSTP float ptr [ESP + 0x114]
//   XREF to: Stack[-0xac] (WRITE)
// 004f5d76: FADD float ptr [EDX + 0x8]
// 004f5d79: FSTP float ptr [ESP + 0x118]
//   XREF to: Stack[-0xa8] (WRITE)
// 004f5d80: MOV dword ptr [EAX + 0x8],0x0
//   XREF to: 00002424 (DATA)
// 004f5d87: MOV ECX,dword ptr [EAX + 0x8]
//   XREF to: 00002424 (DATA)
// 004f5d8a: MOV dword ptr [EAX + 0x4],ECX
// 004f5d8d: MOV ECX,dword ptr [EAX + 0x4]
// 004f5d90: MOV dword ptr [EAX],ECX
// 004f5d92: MOV dword ptr [EDX + 0x8],0x0
// 004f5d99: LEA ESI,[EBX + 0x20]
// 004f5d9c: MOV EAX,dword ptr [EDX + 0x8]
// 004f5d9f: MOV dword ptr [EDX + 0x4],EAX
// 004f5da2: MOV EAX,dword ptr [EDX + 0x4]
// 004f5da5: MOV dword ptr [EDX],EAX
// 004f5da7: MOV EAX,dword ptr [ESI]
// 004f5da9: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 004f5db0: LEA EAX,[ESI + 0x4]
// 004f5db3: MOV EAX,dword ptr [EAX]
// 004f5db5: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0xf4] (WRITE)
// 004f5dbc: LEA EAX,[ESI + 0x8]
// 004f5dbf: MOV EAX,dword ptr [EAX]
// 004f5dc1: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 004f5dc8: LEA EAX,[ESP + 0x110]
//   XREF to: Stack[-0xb0] (DATA)
// 004f5dcf: PUSH EAX
// 004f5dd0: PUSH EBX
// 004f5dd1: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 004f5dd6: ADD ESP,0x8
// 004f5dd9: FLD float ptr [EBX + 0x2dd4]
// 004f5ddf: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f5de2: FSTP float ptr [EBX + 0x2dd4]
// 004f5de8: FLD float ptr [ESP + 0x114]
//   XREF to: Stack[-0xac] (READ)
// 004f5def: FMUL ST0
// 004f5df1: FLD float ptr [ESP + 0x110]
//   XREF to: Stack[-0xb0] (READ)
// 004f5df8: FMUL ST0
// 004f5dfa: FADDP
// 004f5dfc: FLD float ptr [ESP + 0x118]
//   XREF to: Stack[-0xa8] (READ)
// 004f5e03: FMUL ST0
// 004f5e05: FADDP
// 004f5e07: FSQRT
// 004f5e09: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1b8] (READ)
// 004f5e0d: FMUL double ptr [0x0062f0c2]
//   XREF to: 0062f0c2 (READ)
// 004f5e13: FCOMPP
// 004f5e15: FNSTSW AX
// 004f5e17: SAHF
// 004f5e18: JBE 0x004f5e38
//   XREF to: 004f5e38 (CONDITIONAL_JUMP)
// 004f5e1a: JMP 0x004f50e7
//   XREF to: 004f50e7 (UNCONDITIONAL_JUMP)
// 004f5e1f: MOV ECX,dword ptr [EBX + 0xdc]
//   Label: LAB_004f5e1f
// 004f5e25: TEST ECX,ECX
// 004f5e27: JNZ 0x004f5cb9
//   XREF to: 004f5cb9 (CONDITIONAL_JUMP)
// 004f5e2d: MOV dword ptr [EBX + 0x2dd4],ECX
// 004f5e33: JMP 0x004f50f1
//   XREF to: 004f50f1 (UNCONDITIONAL_JUMP)
// 004f5e38: FLD float ptr [ESI]
//   Label: LAB_004f5e38
// 004f5e3a: FSUB float ptr [ESP + 0xc8]
//   XREF to: Stack[-0xf8] (READ)
// 004f5e41: FMUL ST0
// 004f5e43: FLD float ptr [ESI + 0x4]
// 004f5e46: FSUB float ptr [ESP + 0xcc]
//   XREF to: Stack[-0xf4] (READ)
// 004f5e4d: FMUL ST0
// 004f5e4f: FLD float ptr [ESI + 0x8]
// 004f5e52: FXCH
// 004f5e54: FADDP ST2,ST0
// 004f5e56: FSUB float ptr [ESP + 0xd0]
//   XREF to: Stack[-0xf0] (READ)
// 004f5e5d: FMUL ST0
// 004f5e5f: FADDP
// 004f5e61: FSQRT
// 004f5e63: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1b8] (READ)
// 004f5e67: FMUL double ptr [0x0062f0ca]
//   XREF to: 0062f0ca (READ)
// 004f5e6d: FCOMPP
// 004f5e6f: FNSTSW AX
// 004f5e71: SAHF
// 004f5e72: JC 0x004f50e7
//   XREF to: 004f50e7 (CONDITIONAL_JUMP)
// 004f5e78: JMP 0x004f50f1
//   XREF to: 004f50f1 (UNCONDITIONAL_JUMP)
// 004f5e7d: CMP dword ptr [ESP + 0x174],0x0
//   Label: LAB_004f5e7d
//   XREF to: Stack[-0x4c] (READ)
// 004f5e85: JNZ 0x004f5173
//   XREF to: 004f5173 (CONDITIONAL_JUMP)
// 004f5e8b: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f5e8e: FDIV float ptr [ESP + 0x178]
//   XREF to: Stack[-0x48] (READ)
// 004f5e95: FSUBR float ptr [EBX + 0x1fae4]
// 004f5e9b: JMP 0x004f5183
//   XREF to: 004f5183 (UNCONDITIONAL_JUMP)
// 004f5ea0: FLD1
//   Label: LAB_004f5ea0
// 004f5ea2: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x1b0] (READ)
// 004f5ea6: FNSTSW AX
// 004f5ea8: SAHF
// 004f5ea9: JNC 0x004f5eb5
//   XREF to: 004f5eb5 (CONDITIONAL_JUMP)
// 004f5eab: MOV dword ptr [EBX + 0x1fae4],0x3f800000
// 004f5eb5: FLD float ptr [EBX + 0x1fae0]
//   Label: LAB_004f5eb5
// 004f5ebb: FMUL double ptr [0x0062f0d2]
//   XREF to: 0062f0d2 (READ)
// 004f5ec1: SUB ESP,0x4
// 004f5ec4: FADD double ptr [0x0062f0da]
//   XREF to: 0062f0da (READ)
// 004f5eca: MOV EAX,[0x02db8888]
//   XREF to: 02db8888 (READ)
// 004f5ecf: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c4] (DATA)
// 004f5ed2: PUSH EAX
// 004f5ed3: LEA ESI,[EBX + 0x158]
// 004f5ed9: PUSH ESI
// 004f5eda: CALL core_motion.cpp_CMotionController_FUN_0052e3a0
//   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)
// 004f5edf: MOV dword ptr [ESP + 0x1b4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f5ee6: FLD float ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x18] (READ)
// 004f5eed: ADD ESP,0xc
// 004f5ef0: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 004f5ef5: MOV EDX,dword ptr [EBX + 0x1facc]
// 004f5efb: PUSH EDX
// 004f5efc: MOV ECX,dword ptr [0x02db8888]
//   XREF to: 02db8888 (READ)
// 004f5f02: PUSH dword ptr [EBX + 0x1fae4]
// 004f5f08: FSTP float ptr [ESP + 0x174]
//   XREF to: Stack[-0x58] (WRITE)
// 004f5f0f: PUSH dword ptr [ESP + 0x174]
//   XREF to: Stack[-0x58] (READ)
// 004f5f16: PUSH ECX
// 004f5f17: PUSH ESI
// 004f5f18: CALL core_skeleton.cpp_CDeformableModelInstance_UnkSomethingWriteMe2_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 004f5f1d: ADD ESP,0x18
// 004f5f20: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 004f5f25: MOV EAX,dword ptr [EBX + 0x1fad0]
// 004f5f2b: PUSH EAX
// 004f5f2c: PUSH dword ptr [EBX + 0x1fae4]
// 004f5f32: MOV EDX,dword ptr [0x02db8888]
//   XREF to: 02db8888 (READ)
// 004f5f38: PUSH dword ptr [ESP + 0x174]
//   XREF to: Stack[-0x58] (READ)
// 004f5f3f: PUSH EDX
// 004f5f40: PUSH ESI
// 004f5f41: CALL core_skeleton.cpp_CDeformableModelInstance_UnkSomethingWriteMe2_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 004f5f46: FLD float ptr [EBX + 0x1fae4]
// 004f5f4c: FLD1
// 004f5f4e: ADD ESP,0x18
// 004f5f51: FCOMPP
// 004f5f53: FNSTSW AX
// 004f5f55: SAHF
// 004f5f56: JA 0x004f51b6
//   XREF to: 004f51b6 (CONDITIONAL_JUMP)
// 004f5f5c: FLD float ptr [EBX + 0x1fae0]
// 004f5f62: FLDZ
// 004f5f64: FCOMPP
// 004f5f66: FNSTSW AX
// 004f5f68: SAHF
// 004f5f69: JNC 0x004f51b6
//   XREF to: 004f51b6 (CONDITIONAL_JUMP)
// 004f5f6f: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f5f72: FDIV float ptr [ESP + 0x16c]
//   XREF to: Stack[-0x54] (READ)
// 004f5f79: FADD float ptr [EBX + 0x1fae0]
// 004f5f7f: FST float ptr [EBX + 0x1fae0]
// 004f5f85: FLD1
// 004f5f87: FCOMPP
// 004f5f89: FNSTSW AX
// 004f5f8b: SAHF
// 004f5f8c: JNC 0x004f51b6
//   XREF to: 004f51b6 (CONDITIONAL_JUMP)
// 004f5f92: MOV dword ptr [EBX + 0x1fae0],0x3f800000
// 004f5f9c: JMP 0x004f51b6
//   XREF to: 004f51b6 (UNCONDITIONAL_JUMP)
// 004f5fa1: MOV EAX,[0x03f95d78]
//   Label: LAB_004f5fa1
//   XREF to: 03f95d78 (READ)
// 004f5fa6: PUSH EAX
// 004f5fa7: MOV EDX,dword ptr [EBX + 0x24f8]
// 004f5fad: PUSH EDX
// 004f5fae: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f5fb3: ADD ESP,0x8
// 004f5fb6: TEST EAX,EAX
// 004f5fb8: JZ 0x004f5254
//   XREF to: 004f5254 (CONDITIONAL_JUMP)
// 004f5fbe: PUSH 0x62f053
//   XREF to: 0062f053 (DATA)
// 004f5fc3: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004f5fc9: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 004f5fca: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004f5fcf: ADD ESP,0x8
// 004f5fd2: TEST EAX,EAX
// 004f5fd4: JZ 0x004f5254
//   XREF to: 004f5254 (CONDITIONAL_JUMP)
// 004f5fda: MOV dword ptr [EBX + 0x1fae0],0x3c23d70a
// 004f5fe4: MOV ESP,EBP
// 004f5fe6: POP EBP
// 004f5fe7: POP EDI
// 004f5fe8: POP ESI
// 004f5fe9: POP EBX
// 004f5fea: RET
