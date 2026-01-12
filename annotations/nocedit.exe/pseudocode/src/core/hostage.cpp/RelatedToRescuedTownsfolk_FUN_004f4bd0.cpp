// Name: core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0
// Address: 004f4bd0
// Address Range: [[004f4bd0, 004f5fea]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0()

#include "nocturne.h"

/* Signature: byte actors_npc_hostage.cpp_RelatedToRescuedTownsfolk(uint param_1,
   uint param_2) */

void core_hostage_cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0(void)

{
  CDeformableModelInstance *pCVar1;
  char *pcVar2;
  CDemonActor_vtable *pCVar3;
  CHero *pCVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  CConsole *pCVar9;
  int iVar10;
  uint uVar11;
  CDoor *pCVar12;
  float fVar13;
  CSkeleton *this_ptr;
  CVector3f *pCVar14;
  CDemonActor *pCVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  SMotion *pSVar19;
  BADSPACEBASE *in_ESP;
  int iVar20;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_fffffe44;
  CLocation *pCVar21;
  CLocation *pCVar22;
  float local_198;
  SDamageInfo local_190;
  CVector3f CStack_154;
  CVector3f CStack_148;
  CVector3f local_13c;
  CVector3f CStack_130;
  float local_124;
  float local_120;
  float local_11c;
  CVector3f local_118;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  CVector3f local_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  byte auStack_cc [20];
  CVector3f CStack_b8;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  uint local_9c;
  float local_98;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f aCStack_7c [2];
  float fStack_64;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  CMotionController *local_24;
  CDoor *local_20;
  float fStack_1c;
  
  switch(*(uint *)(in_stack_00000004[2].cloth_data + 0x53dc)) {
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
  iVar10 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar10 == 0) {
    return;
  }
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  local_24 = &(in_stack_00000004->model).motion_controller;
  while (0.0 < in_stack_00000008) {
    uVar11 = core_motion_cpp_CMotionController_advance_FUN_0052d610(local_24);
    if (uVar11 < 0xb) {
      if (uVar11 == 6) {
        if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s escaping from %s\n",in_stack_00000004,
                     in_stack_00000004->grabbed_by);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_190);
          local_190.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          local_190.attacker = &in_stack_00000004->base_actor;
          local_190.wielder = &in_stack_00000004->base_actor;
          (*in_stack_00000004->grabbed_by->vtable[1].playAmbientSoundWithVolume)
                    (in_stack_00000004->grabbed_by,(char *)&local_190,in_stack_fffffe44);
        }
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
      }
    }
    else if (uVar11 < 0xc) {
      local_20 = (CDoor *)0x0;
      local_13c.x = 0.0;
      local_13c.y = 0.0;
      fStack_64 = 1e+30;
      local_13c.z = 1.5;
      iVar10 = 0;
      iVar20 = 0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&in_stack_00000004->base_actor,&local_e8,&local_13c);
      while (iVar10 < (int)g_CDemonSetPtr->actor_list_ptr) {
        pCVar12 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar20),
                                      g_CDoorClassInfo.name_hash);
        if (pCVar12 == (CDoor *)0x0) {
LAB_004f4dd2:
          iVar10 = iVar10 + 1;
          iVar20 = iVar20 + 4;
        }
        else {
          local_10c = (pCVar12->base_actor).location.position.x - local_e8.x;
          local_108 = (pCVar12->base_actor).location.position.y - local_e8.y;
          local_104 = (pCVar12->base_actor).location.position.z - local_e8.z;
          if ((float)5 < ABS(local_108)) goto LAB_004f4dd2;
          local_108 = 0.0;
          fStack_1c = SQRT(local_104 * local_104 + local_10c * local_10c);
          if (fStack_64 <= fStack_1c) goto LAB_004f4dd2;
          iVar10 = iVar10 + 1;
          iVar20 = iVar20 + 4;
          fStack_64 = fStack_1c;
          local_20 = pCVar12;
        }
      }
      if (local_20 != (CDoor *)0x0) {
        core_door_cpp_CDoor_FUN_00480de0(local_20);
      }
    }
    else if (uVar11 == 0xc) {
      pCVar15 = in_stack_00000004->carry_hands[1].carry_actor;
      if (pCVar15 != (CDemonActor *)0x0) {
        (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                  (&in_stack_00000004->base_actor);
        core_inv_cpp_CInventory_addItem_FUN_004fd600
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,pCVar15,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  }
  fVar13 = (float)3.1415926535000001;
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  local_28 = 0;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar13;
  fVar13 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(local_24,10);
  if (0.0 < fVar13) {
    local_24 = (CMotionController *)&DAT_00000001;
  }
  if (in_stack_00000004->hit_points <= 0.0) {
    pCVar22 = (CLocation *)0x5;
    fVar13 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&(in_stack_00000004->model).motion_controller,5);
    if ((fVar13 <= 0.0) &&
       (fVar13 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&(in_stack_00000004->model).motion_controller,8), fVar13 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,6,1);
    }
    goto switchD_004f5c7d_caseD_5;
  }
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    pCVar21 = (CLocation *)0x3;
    pCVar1 = &in_stack_00000004->model;
    fVar13 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                       (&pCVar1->motion_controller,3);
    pCVar22 = pCVar21;
    if (((fVar13 <= 0.0) &&
        (fVar13 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                            (&pCVar1->motion_controller,5), fVar13 <= 0.0)) &&
       (fVar13 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                           (&pCVar1->motion_controller,8), fVar13 <= 0.0)) {
      iVar10 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
      pCVar9 = g_CConsolePtr;
      if (iVar10 == 0) {
        pCVar22 = (CLocation *)0x3;
        switch(*(uint *)(in_stack_00000004[2].cloth_data + 0x53dc)) {
        case 0:
          iVar10 = core_hostage_cpp_FUN_004f5ff0();
          pCVar22 = (CLocation *)0x3;
          if (iVar10 == 0) {
            pCVar4 = g_HeroActors[g_LocalHeroIndex];
            local_dc = (pCVar4->base_character).base_actor.location.position.x -
                       (in_stack_00000004->base_actor).location.position.x;
            local_d8 = (pCVar4->base_character).base_actor.location.position.y -
                       (in_stack_00000004->base_actor).location.position.y;
            local_d4 = (pCVar4->base_character).base_actor.location.position.z -
                       (in_stack_00000004->base_actor).location.position.z;
            if (((0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5028)) &&
                (*(float *)(in_stack_00000004[2].cloth_data + 0x5028) <=
                 SQRT(local_d4 * local_d4 + local_dc * local_dc + local_d8 * local_d8))) ||
               (iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                   (g_CEventListPtr,in_stack_00000004[2].cloth_data + 0x502c),
               pCVar9 = g_CConsolePtr, iVar10 == 0)) goto LAB_004f54c2;
            in_stack_00000004[2].cloth_data[0x53dc] = '\x01';
            in_stack_00000004[2].cloth_data[0x53dd] = '\0';
            in_stack_00000004[2].cloth_data[0x53de] = '\0';
            in_stack_00000004[2].cloth_data[0x53df] = '\0';
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar9,"%s rescued, entering follow mode\n",in_stack_00000004);
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
            pCVar22 = (CLocation *)0x3;
          }
          break;
        case 1:
          iVar10 = *(int *)(in_stack_00000004[2].cloth_data + 0x53e0);
          if ((iVar10 != 0) &&
             (fVar13 = (in_stack_00000004->base_actor).location.position.x -
                       *(float *)(iVar10 + 0x20),
             fVar5 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar10 + 0x28)
             , SQRT(fVar5 * fVar5 + fVar13 * fVar13) < (float)40)) {
            uVar16 = core_waypoint_cpp_FUN_005ec320();
            *(uint *)(in_stack_00000004[2].cloth_data + 0x53e8) = uVar16;
          }
          pCVar9 = g_CConsolePtr;
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) == 0) {
            iVar10 = core_hostage_cpp_FUN_004f5ff0();
            pCVar22 = pCVar21;
            if (iVar10 == 0) {
              iVar10 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004);
              if (iVar10 == 0) {
                core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
              }
              else {
                *(int *)(in_stack_00000004[2].cloth_data + 0x53d4) = iVar10;
              }
              uVar11 = *(uint *)(in_stack_00000004[2].cloth_data + 0x53d4);
              pCVar1 = &in_stack_00000004->model;
              if (uVar11 < 2) {
                if (uVar11 != 1) goto LAB_004f54c2;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,1,1);
              }
              else if (uVar11 < 3) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,2,1);
              }
              else {
                if (uVar11 != 3) goto LAB_004f54c2;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar1->motion_controller,0,1);
                pCVar9 = g_CConsolePtr;
                in_stack_00000004[2].cloth_data[0x53dc] = '\x02';
                in_stack_00000004[2].cloth_data[0x53dd] = '\0';
                in_stack_00000004[2].cloth_data[0x53de] = '\0';
                in_stack_00000004[2].cloth_data[0x53df] = '\0';
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (pCVar9,"%s left behind!\n",in_stack_00000004);
                core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
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
                      (pCVar9,"%s was led close enough, going home!\n",in_stack_00000004);
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
            in_stack_00000004->cloth_data[0x32c] = '\0';
            in_stack_00000004->cloth_data[0x32d] = '\0';
            in_stack_00000004->cloth_data[0x32e] = '\0';
            in_stack_00000004->cloth_data[0x32f] = '\0';
            pCVar22 = pCVar21;
          }
          break;
        case 2:
          iVar10 = core_hostage_cpp_FUN_004f5ff0();
          pCVar22 = (CLocation *)0x3;
          if (iVar10 == 0) {
            core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
            uVar11 = *(uint *)(in_stack_00000004[2].cloth_data + 0x53d4);
            local_4c = 0;
            if (uVar11 == 0) {
              iVar10 = 0;
LAB_004f579d:
              in_stack_00000004[2].cloth_data[0x53dc] = '\x01';
              in_stack_00000004[2].cloth_data[0x53dd] = '\0';
              in_stack_00000004[2].cloth_data[0x53de] = '\0';
              in_stack_00000004[2].cloth_data[0x53df] = '\0';
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,iVar10,1);
            }
            else {
              if (uVar11 < 2) {
                iVar10 = 1;
                goto LAB_004f579d;
              }
              if (uVar11 == 2) {
                iVar10 = 2;
                goto LAB_004f579d;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->model).motion_controller,0,1);
              pCVar22 = (CLocation *)0x3;
              if (local_4c == 0) break;
            }
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s was left behind, but now can follow again!\n",in_stack_00000004);
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
            pCVar22 = pCVar21;
          }
          break;
        case 3:
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) == 0) {
            in_stack_00000004[2].cloth_data[0x53dc] = '\x02';
            in_stack_00000004[2].cloth_data[0x53dd] = '\0';
            in_stack_00000004[2].cloth_data[0x53de] = '\0';
            in_stack_00000004[2].cloth_data[0x53df] = '\0';
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar9,"%s doesn't know next waypoint going home.  Help me!\n",in_stack_00000004);
            pCVar22 = (CLocation *)0x3;
          }
          else {
            core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
            pCVar22 = (CLocation *)0x3;
            switch(*(uint *)(in_stack_00000004[2].cloth_data + 0x53d4)) {
            case 0:
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s reached waypoint %s!\n",in_stack_00000004,
                         *(uint *)(in_stack_00000004[2].cloth_data + 0x53e8));
              pCVar9 = g_CConsolePtr;
              if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) ==
                  *(int *)(in_stack_00000004[2].cloth_data + 0x53e0)) {
                in_stack_00000004[2].cloth_data[0x53dc] = '\x04';
                in_stack_00000004[2].cloth_data[0x53dd] = '\0';
                in_stack_00000004[2].cloth_data[0x53de] = '\0';
                in_stack_00000004[2].cloth_data[0x53df] = '\0';
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (pCVar9,"%s rescued and taken home!\n",in_stack_00000004);
                in_stack_00000004[2].cloth_data[0x53e8] = '\0';
                in_stack_00000004[2].cloth_data[0x53e9] = '\0';
                in_stack_00000004[2].cloth_data[0x53ea] = '\0';
                in_stack_00000004[2].cloth_data[0x53eb] = '\0';
              }
              else {
                uVar16 = core_waypoint_cpp_FUN_005ec320();
                *(uint *)(in_stack_00000004[2].cloth_data + 0x53e8) = uVar16;
              }
              break;
            case 1:
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,1,1);
              break;
            case 2:
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,2,1);
              break;
            case 3:
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,0,1);
              pCVar9 = g_CConsolePtr;
              in_stack_00000004[2].cloth_data[0x53dc] = '\x02';
              in_stack_00000004[2].cloth_data[0x53dd] = '\0';
              in_stack_00000004[2].cloth_data[0x53de] = '\0';
              in_stack_00000004[2].cloth_data[0x53df] = '\0';
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (pCVar9,"%s got confused going home.  Help me!\n",in_stack_00000004);
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar1->motion_controller,0,1);
              core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
              core_event_cpp_CEventList_FUN_004b0330(g_CEventListPtr);
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
          local_28 = 1;
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) != 0) {
            fVar13 = in_stack_00000008 * (float)0.5;
            if (*(float *)(in_stack_00000004->field2_0x240c + 0x28) < fVar13) {
              *(float *)(in_stack_00000004->field2_0x240c + 0x28) = fVar13;
            }
            pCVar14 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                (&in_stack_00000004->base_actor,&CStack_88,
                                 (CVector3f *)
                                 (*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) + 0x20));
            if ((CVector3f *)(in_stack_00000004->field2_0x240c + 0x10) != pCVar14) {
              ((CVector3f *)(in_stack_00000004->field2_0x240c + 0x10))->x = pCVar14->x;
              *(float *)(in_stack_00000004->field2_0x240c + 0x14) = pCVar14->y;
              *(float *)(in_stack_00000004->field2_0x240c + 0x18) = pCVar14->z;
            }
            pcVar2 = in_stack_00000004->field2_0x240c + 0x10;
            local_a0 = *(float *)pcVar2;
            local_98 = *(float *)(in_stack_00000004->field2_0x240c + 0x18);
            fVar5 = SQRT(local_98 * local_98 + local_a0 * local_a0);
            local_9c = 0;
            if (*(float *)(in_stack_00000004->field2_0x240c + 0x28) < fVar5) {
              local_2c = *(float *)(in_stack_00000004->field2_0x240c + 0x28) / fVar5;
              *(float *)pcVar2 = *(float *)pcVar2 * local_2c;
              *(float *)(in_stack_00000004->field2_0x240c + 0x14) =
                   *(float *)(in_stack_00000004->field2_0x240c + 0x14) * local_2c;
              *(float *)(in_stack_00000004->field2_0x240c + 0x18) =
                   *(float *)(in_stack_00000004->field2_0x240c + 0x18) * local_2c;
            }
            local_30 = fVar5;
            pCVar14 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&CStack_148,(CVector3f *)(in_stack_00000004->field2_0x240c + 0x10))
            ;
            fVar18 = (float)2;
            *(float *)(in_stack_00000004->field2_0x240c + 0xc) = pCVar14->y;
            if (fVar5 * fVar18 < 1.0) {
              fVar17 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (*(float *)(*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) +
                                            0x34) - (in_stack_00000004->base_actor).orient.bank);
              fVar17 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (fVar17 - *(float *)(in_stack_00000004->field2_0x240c + 0xc));
              *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
                   (1.0 - fVar5 * fVar18) * fVar17 +
                   *(float *)(in_stack_00000004->field2_0x240c + 0xc);
            }
            fVar18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (*(float *)(in_stack_00000004->field2_0x240c + 0xc));
            *(float *)(in_stack_00000004->field2_0x240c + 0xc) = fVar18;
            if ((fVar5 < (float)0.01) &&
               (ABS(*(float *)(in_stack_00000004->field2_0x240c + 0xc)) < (float)0.017453292519444399)) {
              if ((*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 0) ||
                 (*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 4)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(in_stack_00000004->model).motion_controller,0,1);
                in_stack_00000004[2].cloth_data[0x53dc] = '\x05';
                in_stack_00000004[2].cloth_data[0x53dd] = '\0';
                in_stack_00000004[2].cloth_data[0x53de] = '\0';
                in_stack_00000004[2].cloth_data[0x53df] = '\0';
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&(in_stack_00000004->model).motion_controller,10,1);
              }
              core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
              core_event_cpp_CEventList_FUN_004b0330(g_CEventListPtr);
              in_stack_00000004[2].cloth_data[0x53e4] = '\0';
              in_stack_00000004[2].cloth_data[0x53e5] = '\0';
              in_stack_00000004[2].cloth_data[0x53e6] = '\0';
              in_stack_00000004[2].cloth_data[0x53e7] = '\0';
            }
            local_38 = in_stack_00000008 * (float)3.1415926535000001;
            local_3c = -local_38;
            if (*(float *)(in_stack_00000004->field2_0x240c + 0xc) < local_3c) {
              *(float *)(in_stack_00000004->field2_0x240c + 0xc) = local_3c;
            }
            pCVar22 = SUB84 /* extract 2-byte value */((double)fVar13,0);
            if (local_38 < *(float *)(in_stack_00000004->field2_0x240c + 0xc)) {
              *(float *)(in_stack_00000004->field2_0x240c + 0xc) = local_38;
            }
          }
        }
      }
      else {
        uVar11 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
        if (uVar11 < 2) {
          if (uVar11 == 1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,1,1);
            pCVar22 = (CLocation *)0x3;
          }
          else {
LAB_004f54c2:
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,0,1);
            pCVar22 = pCVar21;
          }
        }
        else if (uVar11 < 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,2,1);
          pCVar22 = (CLocation *)0x3;
        }
        else {
          if (uVar11 != 3) goto LAB_004f54c2;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
          pCVar22 = (CLocation *)0x3;
        }
      }
    }
  }
  else {
    pCVar22 = &in_stack_00000004->grabbed_by->location;
    pCVar14 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (&in_stack_00000004->base_actor,(CVector3f *)auStack_cc,&pCVar22->position);
    pCVar14 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                        ((CVector3f *)(auStack_cc + 8),pCVar14);
    local_198 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar14->y);
    if (local_198 < (float)-1.57079632675) {
      local_198 = local_198 + 3.141593f;
    }
    if ((float)1.57079632675 < local_198) {
      local_198 = local_198 + -3.141593f;
    }
    local_34 = in_stack_00000008 * (float)3.1415926535000001;
    local_40 = -local_34;
    if (local_198 < local_40) {
      local_198 = local_40;
    }
    if (local_34 < local_198) {
      local_198 = local_34;
    }
    (in_stack_00000004->base_actor).orient.bank =
         (in_stack_00000004->base_actor).orient.bank + local_198;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base_actor);
    pCVar15 = in_stack_00000004->grabbed_by;
    pCVar3 = pCVar15->vtable;
    pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (&in_stack_00000004->model,&CStack_94,0);
    fVar13 = (*pCVar3[1].cylinderGroundCheck)(pCVar15,(float)in_stack_00000004,pCVar14);
    if (fVar13 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_004f5384:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,0,1);
    }
    else if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_004f5384;
    local_28 = 1;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    (in_stack_00000004->model).accumulated_root_motion.x =
         (in_stack_00000004->model).accumulated_root_motion.y;
  }
switchD_004f5c7d_caseD_5:
  if (((0.0 < in_stack_00000004->hit_points) &&
      (*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 1)) &&
     (iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(in_stack_00000008 * 0.2f),
     iVar10 != 0)) {
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                         (&in_stack_00000004->model);
    iVar10 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,(char *)pCVar22);
    if (-1 < iVar10) {
      pCVar14 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (&in_stack_00000004->model,&CStack_b8,iVar10);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&in_stack_00000004->base_actor,&CStack_154,pCVar14);
      local_118.x = 3.0;
      local_118.y = 0.0;
      local_118.z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                (&in_stack_00000004->base_actor,&CStack_130,&local_118);
      core_gore_cpp_FUN_004edaa0();
    }
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  if (local_28 == 0) {
    pSVar19 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(in_stack_00000004->model).motion_controller);
    iVar10 = pSVar19->state_index;
    if ((((iVar10 == 8) || (iVar10 == 0)) || ((iVar10 == 0xd || (iVar10 == 10)))) &&
       ((in_stack_00000004->base_actor).field11_0xdc == 0)) {
      in_stack_00000004->cloth_data[0x33c] = '\0';
      in_stack_00000004->cloth_data[0x33d] = '\0';
      in_stack_00000004->cloth_data[0x33e] = '\0';
      in_stack_00000004->cloth_data[0x33f] = '\0';
      goto LAB_004f50f1;
    }
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_100 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_fc = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_f8 = *(float *)(in_stack_00000004->field2_0x240c + 0x24) * in_stack_00000008;
    pCVar14 = &(in_stack_00000004->model).accumulated_root_motion;
    local_124 = local_100 + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    local_120 = local_fc + *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    local_11c = local_f8 + *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    local_ac = local_124 + pCVar14->x;
    local_a8 = local_120 + (in_stack_00000004->model).accumulated_root_motion.y;
    local_a4 = local_11c + (in_stack_00000004->model).accumulated_root_motion.z;
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(uint *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(uint *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    pCVar22 = &(in_stack_00000004->base_actor).location;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar14->x = (in_stack_00000004->model).accumulated_root_motion.y;
    local_f4 = (pCVar22->position).x;
    local_f0 = (in_stack_00000004->base_actor).location.position.y;
    local_ec = (in_stack_00000004->base_actor).location.position.z;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    *(float *)(in_stack_00000004->cloth_data + 0x33c) =
         *(float *)(in_stack_00000004->cloth_data + 0x33c) + in_stack_00000008;
    if (((double)in_stack_00000008 * 0.59999999999999998 <=
         SQRT((double)local_a4 * (double)local_a4 +
              (double)local_ac * (double)local_ac + (double)local_a8 * (double)local_a8)) &&
       (dVar6 = (double)(pCVar22->position).x - (double)local_f4,
       dVar7 = (double)(in_stack_00000004->base_actor).location.position.y - (double)local_f0,
       dVar8 = (double)(in_stack_00000004->base_actor).location.position.z - (double)local_ec,
       SQRT(dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6) <=
       (double)in_stack_00000008 * 0.40000000000000002)) goto LAB_004f50f1;
  }
  else {
    pCVar14 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (&in_stack_00000004->base_actor,aCStack_7c,
                         (CVector3f *)(in_stack_00000004->field2_0x240c + 0x10));
    pCVar22 = &(in_stack_00000004->base_actor).location;
    (pCVar22->position).x = pCVar14->x + (pCVar22->position).x;
    (in_stack_00000004->base_actor).location.position.y =
         pCVar14->y + (in_stack_00000004->base_actor).location.position.y;
    (in_stack_00000004->base_actor).location.position.z =
         pCVar14->z + (in_stack_00000004->base_actor).location.position.z;
  }
  in_stack_00000004->cloth_data[0x33c] = '\0';
  in_stack_00000004->cloth_data[0x33d] = '\0';
  in_stack_00000004->cloth_data[0x33e] = '\0';
  in_stack_00000004->cloth_data[0x33f] = '\0';
LAB_004f50f1:
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 1) {
    local_44 = 0.5;
    local_50 = 0.75;
    pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (in_stack_00000004->carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash)
    ;
    local_48 = 0;
    if (((pCVar15 != (CDemonActor *)0x0) &&
        (fVar13 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                            (&(in_stack_00000004->model).motion_controller,0x10), fVar13 <= 0.0)) ||
       (local_48 != 0)) {
      fVar13 = in_stack_00000008 / local_44 + *(float *)(in_stack_00000004[2].cloth_data + 0x5404);
    }
    else {
      fVar13 = *(float *)(in_stack_00000004[2].cloth_data + 0x5404) - in_stack_00000008 / local_44;
    }
    *(float *)(in_stack_00000004[2].cloth_data + 0x5404) = fVar13;
    if (0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) {
      if (1.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) {
        in_stack_00000004[2].cloth_data[0x5404] = '\0';
        in_stack_00000004[2].cloth_data[0x5405] = '\0';
        in_stack_00000004[2].cloth_data[0x5406] = -0x80;
        in_stack_00000004[2].cloth_data[0x5407] = '?';
      }
      pCVar1 = &in_stack_00000004->model;
      local_54 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                           (&pCVar1->motion_controller,DAT_02db8888,
                            *(float *)(in_stack_00000004[2].cloth_data + 0x5400) *
                            (float)0.65000000000000002 + (float)0.34999999999999998);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar1,DAT_02db8888,local_54,*(float *)(in_stack_00000004[2].cloth_data + 0x5404),
                 *(int *)(in_stack_00000004[2].cloth_data + 0x53ec),
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar1,DAT_02db8888,local_54,*(float *)(in_stack_00000004[2].cloth_data + 0x5404),
                 *(int *)(in_stack_00000004[2].cloth_data + 0x53f0),
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      if (((1.0 <= *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) &&
          (0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5400))) &&
         (fVar13 = in_stack_00000008 / local_50 +
                   *(float *)(in_stack_00000004[2].cloth_data + 0x5400),
         *(float *)(in_stack_00000004[2].cloth_data + 0x5400) = fVar13, 1.0 < fVar13)) {
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
     (pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (in_stack_00000004->carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash), pCVar15 != (CDemonActor *)0x0)) {
    uVar16 = *(uint *)(pCVar15[4].actor_name + 0xc);
    pCVar15[4].actor_name[0xc] = '\x06';
    pCVar15[4].actor_name[0xd] = '\0';
    pCVar15[4].actor_name[0xe] = '\0';
    pCVar15[4].actor_name[0xf] = '\0';
    (*pCVar15->vtable[1].renderTransparent)(pCVar15);
    *(uint *)(pCVar15[4].actor_name + 0xc) = uVar16;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,0xc,1);
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
      (pCVar15 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (in_stack_00000004->carry_hands[1].carry_actor,
                            g_CWeaponClassInfo.name_hash), pCVar15 != (CDemonActor *)0x0)) &&
     (iVar10 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (g_CEventListPtr,"deputeFireShotgun"), iVar10 != 0)) {
    in_stack_00000004[2].cloth_data[0x5400] = '\n';
    in_stack_00000004[2].cloth_data[0x5401] = -0x29;
    in_stack_00000004[2].cloth_data[0x5402] = '#';
    in_stack_00000004[2].cloth_data[0x5403] = '<';
    return;
  }
  return;
}
