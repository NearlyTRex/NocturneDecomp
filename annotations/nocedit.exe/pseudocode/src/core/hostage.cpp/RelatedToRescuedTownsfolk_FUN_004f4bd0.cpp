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
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  CDemonActor_vtable *pCVar3;
  CHero *pCVar4;
  double dVar5;
  double dVar6;
  CConsole *pCVar7;
  int iVar8;
  uint uVar9;
  CDemonActor *pCVar10;
  CSkeleton *this_ptr;
  CVector3f *pCVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  SMotion *pSVar15;
  BADSPACEBASE *in_ESP;
  int iVar16;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  char *pcVar17;
  CCharacter *this_ptr_00;
  CMotionController *pCVar18;
  float in_stack_fffffe60;
  double dVar19;
  int in_stack_fffffe64;
  float in_stack_fffffe6c;
  float fStack_188;
  byte local_15c [12];
  uint uStack_150;
  CVector3f local_14c [2];
  CVector3f local_134;
  float local_124;
  float local_120;
  CVector3f local_11c;
  float local_110;
  CVector3f local_100;
  float local_f4;
  float local_f0;
  float local_ec;
  CVector3f local_e8;
  float local_dc;
  CVector3f local_d8;
  CVector3f aCStack_c4 [2];
  float local_a4;
  float local_a0;
  CVector3f local_9c;
  CVector3f CStack_90;
  float fStack_7c;
  CVector3f aCStack_74 [3];
  CMotionController *local_4c;
  int local_48;
  uint local_44;
  CMotionController *local_40;
  CDoor *local_3c;
  CDemonActor *local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  CMotionController *local_20;
  
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
  this_ptr_00 = in_stack_00000004;
  iVar8 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar8 == 0) {
    return;
  }
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  local_40 = &(in_stack_00000004->model).motion_controller;
  fVar12 = in_stack_00000008;
  while (0.0 < fVar12) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_0052d610(local_40);
    if (uVar9 < 0xb) {
      if (uVar9 == 6) {
        if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s escaping from %s\n",in_stack_00000004,
                     in_stack_00000004->grabbed_by);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe5c);
          local_20 = (CMotionController *)core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          (*in_stack_00000004->grabbed_by->vtable[1].playAmbientSoundWithVolume)
                    (in_stack_00000004->grabbed_by,&stack0xfffffe64,(float)this_ptr_00);
        }
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
      }
    }
    else if (uVar9 < 0xc) {
      local_38 = (CDemonActor *)0x0;
      local_15c._8_4_ = 0.0;
      uStack_150 = 0;
      fStack_7c = 1e+30;
      local_14c[0].x = 1.5;
      iVar8 = 0;
      iVar16 = 0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&in_stack_00000004->base_actor,&local_100,(CVector3f *)(local_15c + 8));
      while (iVar8 < (int)g_CDemonSetPtr->actor_list_ptr) {
        pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar16),
                             g_CDoorClassInfo.name_hash);
        if (pCVar10 == (CDemonActor *)0x0) {
LAB_004f4dd2:
          iVar8 = iVar8 + 1;
          iVar16 = iVar16 + 4;
        }
        else {
          local_124 = (pCVar10->location).position.x - local_100.x;
          local_120 = (pCVar10->location).position.y - local_100.y;
          local_11c.x = (pCVar10->location).position.z - local_100.z;
          if ((float)5 < ABS(local_120)) goto LAB_004f4dd2;
          local_120 = 0.0;
          local_34 = SQRT(local_11c.x * local_11c.x + local_124 * local_124);
          if (fStack_7c <= local_34) goto LAB_004f4dd2;
          iVar8 = iVar8 + 1;
          iVar16 = iVar16 + 4;
          fStack_7c = local_34;
          local_38 = pCVar10;
        }
      }
      if (local_3c != (CDoor *)0x0) {
        core_door_cpp_CDoor_FUN_00480de0(local_3c);
      }
    }
    else if (uVar9 == 0xc) {
      pCVar10 = in_stack_00000004->carry_hands[1].carry_actor;
      if (pCVar10 != (CDemonActor *)0x0) {
        (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                  (&in_stack_00000004->base_actor);
        this_ptr_00 = (CCharacter *)&g_HeroActors[g_LocalHeroIndex]->inventory;
        core_inv_cpp_CInventory_addItem_FUN_004fd600((CInventory *)this_ptr_00,pCVar10,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  }
  fVar12 = (float)3.1415926535000001;
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  local_44 = 0;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar12;
  local_2c = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(local_40,10);
  if (0.0 < local_2c) {
    local_40 = (CMotionController *)&DAT_00000001;
  }
  if (in_stack_00000004->hit_points <= 0.0) {
    local_28 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&(in_stack_00000004->model).motion_controller,5);
    if ((local_28 <= 0.0) &&
       (local_24 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             (&(in_stack_00000004->model).motion_controller,8), local_24 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,6,1);
    }
LAB_004f4fc0:
    dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
    goto switchD_004f5c7d_caseD_5;
  }
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    pCVar2 = &in_stack_00000004->model;
    local_28 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,3);
    if (((0.0 < local_28) ||
        (local_24 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                              (&pCVar2->motion_controller,5), 0.0 < local_24)) ||
       (local_20 = (CMotionController *)
                   core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             (&pCVar2->motion_controller,8), 0.0 < (float)local_20))
    goto LAB_004f4fc0;
    iVar8 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
    pCVar7 = g_CConsolePtr;
    if (iVar8 == 0) {
      dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
      switch(*(uint *)(in_stack_00000004[2].cloth_data + 0x53dc)) {
      case 0:
        iVar8 = core_hostage_cpp_FUN_004f5ff0();
        dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
        if (iVar8 == 0) {
          pCVar4 = g_HeroActors[g_LocalHeroIndex];
          local_e8.z = (pCVar4->base_character).base_actor.location.position.x -
                       (in_stack_00000004->base_actor).location.position.x;
          local_dc = (pCVar4->base_character).base_actor.location.position.y -
                     (in_stack_00000004->base_actor).location.position.y;
          local_d8.x = (pCVar4->base_character).base_actor.location.position.z -
                       (in_stack_00000004->base_actor).location.position.z;
          if (((0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5028)) &&
              (*(float *)(in_stack_00000004[2].cloth_data + 0x5028) <=
               SQRT(local_d8.x * local_d8.x + local_e8.z * local_e8.z + local_dc * local_dc))) ||
             (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                (g_CEventListPtr,in_stack_00000004[2].cloth_data + 0x502c),
             pCVar7 = g_CConsolePtr, iVar8 == 0)) goto LAB_004f54c2;
          in_stack_00000004[2].cloth_data[0x53dc] = '\x01';
          in_stack_00000004[2].cloth_data[0x53dd] = '\0';
          in_stack_00000004[2].cloth_data[0x53de] = '\0';
          in_stack_00000004[2].cloth_data[0x53df] = '\0';
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (pCVar7,"%s rescued, entering follow mode\n");
          core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
          dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
        }
        break;
      case 1:
        iVar8 = *(int *)(in_stack_00000004[2].cloth_data + 0x53e0);
        if ((iVar8 != 0) &&
           (fVar12 = (in_stack_00000004->base_actor).location.position.x - *(float *)(iVar8 + 0x20),
           fVar14 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar8 + 0x28),
           SQRT(fVar14 * fVar14 + fVar12 * fVar12) < (float)40)) {
          uVar13 = core_waypoint_cpp_FUN_005ec320();
          *(uint *)(in_stack_00000004[2].cloth_data + 0x53e8) = uVar13;
        }
        pCVar7 = g_CConsolePtr;
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) == 0) {
          iVar8 = core_hostage_cpp_FUN_004f5ff0();
          dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
          if (iVar8 == 0) {
            iVar8 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004);
            if (iVar8 == 0) {
              core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
            }
            else {
              *(int *)(in_stack_00000004[2].cloth_data + 0x53d4) = iVar8;
            }
            uVar9 = *(uint *)(in_stack_00000004[2].cloth_data + 0x53d4);
            pCVar2 = &in_stack_00000004->model;
            if (uVar9 < 2) {
              if (uVar9 != 1) goto LAB_004f54c2;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,1,1);
              dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
            }
            else if (uVar9 < 3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,2,1);
              dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
            }
            else {
              if (uVar9 != 3) goto LAB_004f54c2;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
              pCVar7 = g_CConsolePtr;
              in_stack_00000004[2].cloth_data[0x53dc] = '\x02';
              in_stack_00000004[2].cloth_data[0x53dd] = '\0';
              in_stack_00000004[2].cloth_data[0x53de] = '\0';
              in_stack_00000004[2].cloth_data[0x53df] = '\0';
              engine_console_cpp_CConsole_printf_FUN_00441890(pCVar7,"%s left behind!\n");
              core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
              dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
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
                    (pCVar7,"%s was led close enough, going home!\n",in_stack_00000004);
          core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
          dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
          in_stack_00000004->cloth_data[0x32c] = '\0';
          in_stack_00000004->cloth_data[0x32d] = '\0';
          in_stack_00000004->cloth_data[0x32e] = '\0';
          in_stack_00000004->cloth_data[0x32f] = '\0';
        }
        break;
      case 2:
        iVar8 = core_hostage_cpp_FUN_004f5ff0();
        dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
        if (iVar8 == 0) {
          core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
          uVar9 = *(uint *)(in_stack_00000004[2].cloth_data + 0x53d4);
          local_4c = (CMotionController *)0x0;
          if (uVar9 == 0) {
            iVar8 = 0;
LAB_004f579d:
            in_stack_00000004[2].cloth_data[0x53dc] = '\x01';
            in_stack_00000004[2].cloth_data[0x53dd] = '\0';
            in_stack_00000004[2].cloth_data[0x53de] = '\0';
            in_stack_00000004[2].cloth_data[0x53df] = '\0';
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,iVar8,1);
          }
          else {
            if (uVar9 < 2) {
              iVar8 = 1;
              goto LAB_004f579d;
            }
            if (uVar9 == 2) {
              iVar8 = 2;
              goto LAB_004f579d;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,0,1);
            dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
            if (local_48 == 0) break;
          }
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s was left behind, but now can follow again!\n",in_stack_00000004);
          core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
          dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
        }
        break;
      case 3:
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) == 0) {
          in_stack_00000004[2].cloth_data[0x53dc] = '\x02';
          in_stack_00000004[2].cloth_data[0x53dd] = '\0';
          in_stack_00000004[2].cloth_data[0x53de] = '\0';
          in_stack_00000004[2].cloth_data[0x53df] = '\0';
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (pCVar7,"%s doesn't know next waypoint going home.  Help me!\n",in_stack_00000004);
          dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
        }
        else {
          core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
          dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
          switch(*(uint *)(in_stack_00000004[2].cloth_data + 0x53d4)) {
          case 0:
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s reached waypoint %s!\n",in_stack_00000004,
                       *(uint *)(in_stack_00000004[2].cloth_data + 0x53e8));
            pCVar7 = g_CConsolePtr;
            if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) ==
                *(int *)(in_stack_00000004[2].cloth_data + 0x53e0)) {
              in_stack_00000004[2].cloth_data[0x53dc] = '\x04';
              in_stack_00000004[2].cloth_data[0x53dd] = '\0';
              in_stack_00000004[2].cloth_data[0x53de] = '\0';
              in_stack_00000004[2].cloth_data[0x53df] = '\0';
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (pCVar7,"%s rescued and taken home!\n",in_stack_00000004);
              dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
              in_stack_00000004[2].cloth_data[0x53e8] = '\0';
              in_stack_00000004[2].cloth_data[0x53e9] = '\0';
              in_stack_00000004[2].cloth_data[0x53ea] = '\0';
              in_stack_00000004[2].cloth_data[0x53eb] = '\0';
            }
            else {
              uVar13 = core_waypoint_cpp_FUN_005ec320();
              dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
              *(uint *)(in_stack_00000004[2].cloth_data + 0x53e8) = uVar13;
            }
            break;
          case 1:
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
            dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
            break;
          case 2:
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,2,1);
            dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
            break;
          case 3:
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,0,1);
            pCVar7 = g_CConsolePtr;
            in_stack_00000004[2].cloth_data[0x53dc] = '\x02';
            in_stack_00000004[2].cloth_data[0x53dd] = '\0';
            in_stack_00000004[2].cloth_data[0x53de] = '\0';
            in_stack_00000004[2].cloth_data[0x53df] = '\0';
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar7,"%s got confused going home.  Help me!\n",in_stack_00000004);
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,0,1);
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
            core_event_cpp_CEventList_FUN_004b0330(g_CEventListPtr);
            dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
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
        local_30 = 1.4013e-45;
        dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) != 0) {
          if (*(float *)(in_stack_00000004->field2_0x240c + 0x28) <
              in_stack_00000008 * (float)0.5) {
            *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
                 in_stack_00000008 * (float)0.5;
          }
          pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                              (&in_stack_00000004->base_actor,&CStack_90,
                               (CVector3f *)
                               (*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) + 0x20));
          if ((CVector3f *)(in_stack_00000004->field2_0x240c + 0x10) != pCVar11) {
            ((CVector3f *)(in_stack_00000004->field2_0x240c + 0x10))->x = pCVar11->x;
            *(float *)(in_stack_00000004->field2_0x240c + 0x14) = pCVar11->y;
            *(float *)(in_stack_00000004->field2_0x240c + 0x18) = pCVar11->z;
          }
          pcVar17 = in_stack_00000004->field2_0x240c + 0x10;
          local_a4 = *(float *)pcVar17;
          local_9c.x = *(float *)(in_stack_00000004->field2_0x240c + 0x18);
          fVar12 = SQRT(local_9c.x * local_9c.x + local_a4 * local_a4);
          local_a0 = 0.0;
          if (*(float *)(in_stack_00000004->field2_0x240c + 0x28) < fVar12) {
            local_30 = *(float *)(in_stack_00000004->field2_0x240c + 0x28) / fVar12;
            *(float *)pcVar17 = *(float *)pcVar17 * local_30;
            *(float *)(in_stack_00000004->field2_0x240c + 0x14) =
                 *(float *)(in_stack_00000004->field2_0x240c + 0x14) * local_30;
            *(float *)(in_stack_00000004->field2_0x240c + 0x18) =
                 *(float *)(in_stack_00000004->field2_0x240c + 0x18) * local_30;
          }
          local_34 = fVar12;
          pCVar11 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              (local_14c,(CVector3f *)(in_stack_00000004->field2_0x240c + 0x10));
          fVar14 = (float)2;
          *(float *)(in_stack_00000004->field2_0x240c + 0xc) = pCVar11->y;
          dVar19 = (double)(in_stack_fffffe6c * fVar14);
          if (dVar19 < 1.0) {
            fVar14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (*(float *)(*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) + 0x34
                                          ) - (in_stack_00000004->base_actor).orient.bank);
            fVar14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (fVar14 - *(float *)(in_stack_00000004->field2_0x240c + 0xc));
            *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
                 (1.0 - (float)(double)CONCAT44 /* combine 2-byte values */(fVar12,in_stack_fffffe64)) * fVar14 +
                 *(float *)(in_stack_00000004->field2_0x240c + 0xc);
          }
          fVar12 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (*(float *)(in_stack_00000004->field2_0x240c + 0xc));
          *(float *)(in_stack_00000004->field2_0x240c + 0xc) = fVar12;
          if ((fStack_188 < (float)0.01) &&
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
          local_34 = in_stack_00000008 * (float)3.1415926535000001;
          local_38 = (CDemonActor *)-local_34;
          if (*(float *)(in_stack_00000004->field2_0x240c + 0xc) < (float)local_38) {
            *(CDemonActor **)(in_stack_00000004->field2_0x240c + 0xc) = local_38;
          }
          if (local_34 < *(float *)(in_stack_00000004->field2_0x240c + 0xc)) {
            *(float *)(in_stack_00000004->field2_0x240c + 0xc) = local_34;
          }
        }
      }
    }
    else {
      uVar9 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
      if (uVar9 < 2) {
        if (uVar9 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,1,1);
          dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
        }
        else {
LAB_004f54c2:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
          dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
        }
      }
      else if (uVar9 < 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->model).motion_controller,2,1);
        dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
      }
      else {
        if (uVar9 != 3) goto LAB_004f54c2;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->model).motion_controller,0,1);
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
        dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
      }
    }
  }
  else {
    pCVar11 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (&in_stack_00000004->base_actor,&local_e8,
                         &(in_stack_00000004->grabbed_by->location).position);
    pCVar11 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_d8,pCVar11);
    local_20 = (CMotionController *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar11->y);
    pCVar18 = local_20;
    if ((float)local_20 < (float)-1.57079632675) {
      pCVar18 = (CMotionController *)((float)local_20 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)pCVar18) {
      pCVar18 = (CMotionController *)((float)pCVar18 + -3.141593f);
    }
    local_40 = (CMotionController *)(in_stack_00000008 * (float)3.1415926535000001);
    local_4c = (CMotionController *)-(float)local_40;
    if ((float)pCVar18 < (float)local_4c) {
      pCVar18 = local_4c;
    }
    if ((float)local_40 < (float)pCVar18) {
      pCVar18 = local_40;
    }
    (in_stack_00000004->base_actor).orient.bank =
         (in_stack_00000004->base_actor).orient.bank + (float)pCVar18;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base_actor);
    pCVar10 = in_stack_00000004->grabbed_by;
    pCVar3 = pCVar10->vtable;
    pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (&in_stack_00000004->model,&local_9c,0);
    fVar12 = (*pCVar3[1].cylinderGroundCheck)(pCVar10,(float)in_stack_00000004,pCVar11);
    if (fVar12 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_004f5384:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,0,1);
    }
    else if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_004f5384;
    local_24 = 1.4013e-45;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    (in_stack_00000004->model).accumulated_root_motion.x =
         (in_stack_00000004->model).accumulated_root_motion.y;
    dVar19 = (double)((ulonglong)(uint)in_stack_fffffe60 << 0x20);
  }
switchD_004f5c7d_caseD_5:
  if (((0.0 < in_stack_00000004->hit_points) &&
      (*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 1)) &&
     (iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(in_stack_00000008 * 0.2f),
     iVar8 != 0)) {
    pcVar17 = (char *)0x0;
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                         (&in_stack_00000004->model);
    iVar8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,pcVar17);
    if (-1 < iVar8) {
      pCVar11 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (&in_stack_00000004->model,aCStack_c4,iVar8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&in_stack_00000004->base_actor,(CVector3f *)local_15c,pCVar11);
      local_11c.x = 3.0;
      local_11c.y = 0.0;
      local_11c.z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                (&in_stack_00000004->base_actor,&local_134,&local_11c);
      core_gore_cpp_FUN_004edaa0();
    }
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  if (local_20 == (CMotionController *)0x0) {
    pSVar15 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(in_stack_00000004->model).motion_controller);
    fVar12 = (float)((ulonglong)dVar19 >> 0x20);
    iVar8 = pSVar15->state_index;
    if ((((iVar8 == 8) || (iVar8 == 0)) || ((iVar8 == 0xd || (iVar8 == 10)))) &&
       ((in_stack_00000004->base_actor).field11_0xdc == 0)) {
      in_stack_00000004->cloth_data[0x33c] = '\0';
      in_stack_00000004->cloth_data[0x33d] = '\0';
      in_stack_00000004->cloth_data[0x33e] = '\0';
      in_stack_00000004->cloth_data[0x33f] = '\0';
      goto LAB_004f50f1;
    }
    dVar19 = (double)in_stack_00000008;
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_f4 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_f0 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_ec = *(float *)(in_stack_00000004->field2_0x240c + 0x24) * in_stack_00000008;
    pCVar11 = &(in_stack_00000004->model).accumulated_root_motion;
    local_11c.y = local_f4 + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    local_11c.z = local_f0 + *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    local_110 = local_ec + *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    local_a0 = local_11c.y + pCVar11->x;
    local_9c.x = local_11c.z + (in_stack_00000004->model).accumulated_root_motion.y;
    local_9c.y = local_110 + (in_stack_00000004->model).accumulated_root_motion.z;
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(uint *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(uint *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar11->x = (in_stack_00000004->model).accumulated_root_motion.y;
    local_e8.x = (pCVar1->position).x;
    local_e8.y = (in_stack_00000004->base_actor).location.position.y;
    local_e8.z = (in_stack_00000004->base_actor).location.position.z;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    iVar8 = (int)((ulonglong)dVar19 >> 0x20);
    *(float *)(in_stack_00000004->cloth_data + 0x33c) =
         *(float *)(in_stack_00000004->cloth_data + 0x33c) + in_stack_00000008;
    if (((double)CONCAT44 /* combine 2-byte values */(fVar12,iVar8) * 0.59999999999999998 <=
         SQRT((double)local_9c.z * (double)local_9c.z +
              (double)local_9c.x * (double)local_9c.x + (double)local_9c.y * (double)local_9c.y)) &&
       (dVar19 = (double)(pCVar1->position).x - (double)local_e8.y,
       dVar5 = (double)(in_stack_00000004->base_actor).location.position.y - (double)local_e8.z,
       dVar6 = (double)(in_stack_00000004->base_actor).location.position.z - (double)local_dc,
       SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar19 * dVar19) <=
       (double)CONCAT44 /* combine 2-byte values */(fVar12,iVar8) * 0.40000000000000002)) goto LAB_004f50f1;
  }
  else {
    pCVar11 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (&in_stack_00000004->base_actor,aCStack_74,
                         (CVector3f *)(in_stack_00000004->field2_0x240c + 0x10));
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (pCVar1->position).x = pCVar11->x + (pCVar1->position).x;
    (in_stack_00000004->base_actor).location.position.y =
         pCVar11->y + (in_stack_00000004->base_actor).location.position.y;
    (in_stack_00000004->base_actor).location.position.z =
         pCVar11->z + (in_stack_00000004->base_actor).location.position.z;
  }
  in_stack_00000004->cloth_data[0x33c] = '\0';
  in_stack_00000004->cloth_data[0x33d] = '\0';
  in_stack_00000004->cloth_data[0x33e] = '\0';
  in_stack_00000004->cloth_data[0x33f] = '\0';
LAB_004f50f1:
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 1) {
    local_30 = 0.5;
    local_3c = (CDoor *)0x3f400000;
    pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (in_stack_00000004->carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash)
    ;
    local_30 = 0.0;
    if (((pCVar10 != (CDemonActor *)0x0) &&
        (in_stack_00000008 =
              core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                        (&(in_stack_00000004->model).motion_controller,0x10),
        in_stack_00000008 <= 0.0)) || (local_2c != 0.0)) {
      fVar12 = in_stack_00000008 / local_28 + *(float *)(in_stack_00000004[2].cloth_data + 0x5404);
    }
    else {
      fVar12 = *(float *)(in_stack_00000004[2].cloth_data + 0x5404) - in_stack_00000008 / local_28;
    }
    *(float *)(in_stack_00000004[2].cloth_data + 0x5404) = fVar12;
    if (0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) {
      if (1.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) {
        in_stack_00000004[2].cloth_data[0x5404] = '\0';
        in_stack_00000004[2].cloth_data[0x5405] = '\0';
        in_stack_00000004[2].cloth_data[0x5406] = -0x80;
        in_stack_00000004[2].cloth_data[0x5407] = '?';
      }
      pCVar2 = &in_stack_00000004->model;
      local_34 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                           (&pCVar2->motion_controller,DAT_02db8888,
                            *(float *)(in_stack_00000004[2].cloth_data + 0x5400) *
                            (float)0.65000000000000002 + (float)0.34999999999999998);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar2,DAT_02db8888,local_34,*(float *)(in_stack_00000004[2].cloth_data + 0x5404),
                 *(int *)(in_stack_00000004[2].cloth_data + 0x53ec),
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar2,DAT_02db8888,local_30,*(float *)(in_stack_00000004[2].cloth_data + 0x5404),
                 *(int *)(in_stack_00000004[2].cloth_data + 0x53f0),
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      if (((1.0 <= *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) &&
          (0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5400))) &&
         (fVar12 = in_stack_00000008 / local_28 +
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
     (pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (in_stack_00000004->carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash), pCVar10 != (CDemonActor *)0x0)) {
    uVar13 = *(uint *)(pCVar10[4].actor_name + 0xc);
    pCVar10[4].actor_name[0xc] = '\x06';
    pCVar10[4].actor_name[0xd] = '\0';
    pCVar10[4].actor_name[0xe] = '\0';
    pCVar10[4].actor_name[0xf] = '\0';
    (*pCVar10->vtable[1].renderTransparent)(pCVar10);
    *(uint *)(pCVar10[4].actor_name + 0xc) = uVar13;
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
      (pCVar10 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (in_stack_00000004->carry_hands[1].carry_actor,
                            g_CWeaponClassInfo.name_hash), pCVar10 != (CDemonActor *)0x0)) &&
     (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,"deputeFireShotgun"), iVar8 != 0)) {
    in_stack_00000004[2].cloth_data[0x5400] = '\n';
    in_stack_00000004[2].cloth_data[0x5401] = -0x29;
    in_stack_00000004[2].cloth_data[0x5402] = '#';
    in_stack_00000004[2].cloth_data[0x5403] = '<';
    return;
  }
  return;
}
