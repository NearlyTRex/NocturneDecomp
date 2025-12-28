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
  float fVar10;
  CDemonActor *pCVar11;
  CSkeleton *this_ptr;
  CVector3f *pCVar12;
  float fVar13;
  uint uVar14;
  SMotion *pSVar15;
  BADSPACEBASE *in_ESP;
  int iVar16;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  char *pcVar17;
  float in_stack_fffffe4c;
  double dVar18;
  uint in_stack_fffffe68;
  CMotionController *pCVar19;
  double dVar20;
  int in_stack_fffffe70;
  ulonglong uStack_188;
  float fStack_17c;
  CVector3f CStack_154;
  byte auStack_148 [28];
  CVector3f CStack_12c;
  float local_118;
  CVector3f local_114;
  float local_108;
  CVector3f local_f4;
  float local_e8;
  float local_e4;
  float local_e0;
  CVector3f local_dc;
  float fStack_d0;
  CVector3f CStack_cc;
  CVector3f local_bc [3];
  float local_98;
  float fStack_94;
  CVector3f CStack_90;
  CVector3f CStack_84;
  float fStack_70;
  CVector3f aCStack_6c [3];
  CMotionController *local_40;
  int local_3c;
  uint local_38;
  CMotionController *local_34;
  CDoor *local_30;
  CDemonActor *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float local_18;
  CMotionController *pCStack_14;
  
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
  iVar8 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar8 == 0) {
    return;
  }
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  local_34 = &(in_stack_00000004->model).motion_controller;
  fVar13 = in_stack_00000008;
  while (0.0 < fVar13) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_0052d610(local_34);
    if (uVar9 < 0xb) {
      if (uVar9 == 6) {
        if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s escaping from %s\n",in_stack_00000004,
                     in_stack_00000004->grabbed_by);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe70);
          fVar10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          CStack_154.x = (float)in_stack_00000004;
          CStack_154.y = (float)in_stack_00000004;
          uStack_188 = (double)CONCAT44 /* combine 2-byte values */(fVar10,(float)uStack_188);
          (*in_stack_00000004->grabbed_by->vtable[1].playAmbientSoundWithVolume)
                    (in_stack_00000004->grabbed_by,(char *)&uStack_188,in_stack_fffffe4c);
        }
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
      }
    }
    else if (uVar9 < 0xc) {
      local_2c = (CDemonActor *)0x0;
      auStack_148._0_4_ = 0.0;
      auStack_148._4_4_ = 0.0;
      fStack_70 = 1e+30;
      auStack_148._8_4_ = 1.5;
      iVar8 = 0;
      iVar16 = 0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&in_stack_00000004->base_actor,&local_f4,(CVector3f *)auStack_148);
      while (iVar8 < (int)g_CDemonSetPtr->actor_list_ptr) {
        pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar16),
                             g_CDoorClassInfo.name_hash);
        if (pCVar11 == (CDemonActor *)0x0) {
LAB_004f4dd2:
          iVar8 = iVar8 + 1;
          iVar16 = iVar16 + 4;
        }
        else {
          local_118 = (pCVar11->location).position.x - local_f4.x;
          local_114.x = (pCVar11->location).position.y - local_f4.y;
          local_114.y = (pCVar11->location).position.z - local_f4.z;
          if ((float)5 < ABS(local_114.x)) goto LAB_004f4dd2;
          local_114.x = 0.0;
          local_28 = SQRT(local_114.y * local_114.y + local_118 * local_118);
          if (fStack_70 <= local_28) goto LAB_004f4dd2;
          iVar8 = iVar8 + 1;
          iVar16 = iVar16 + 4;
          fStack_70 = local_28;
          local_2c = pCVar11;
        }
      }
      if (local_30 != (CDoor *)0x0) {
        core_door_cpp_CDoor_FUN_00480de0(local_30);
      }
    }
    else if (uVar9 == 0xc) {
      pCVar11 = in_stack_00000004->carry_hands[1].carry_actor;
      if (pCVar11 != (CDemonActor *)0x0) {
        (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                  (&in_stack_00000004->base_actor);
        core_inv_cpp_CInventory_addItem_FUN_004fd600
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,pCVar11,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  }
  fVar13 = (float)3.1415926535000001;
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  local_38 = 0;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar13;
  local_20 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(local_34,10);
  if (0.0 < local_20) {
    local_34 = (CMotionController *)&DAT_00000001;
  }
  if (in_stack_00000004->hit_points <= 0.0) {
    fStack_1c = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                          (&(in_stack_00000004->model).motion_controller,5);
    if ((fStack_1c <= 0.0) &&
       (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             (&(in_stack_00000004->model).motion_controller,8), local_18 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,6,1);
    }
LAB_004f4fc0:
    dVar20 = (double)(ulonglong)in_stack_fffffe68;
    goto switchD_004f5c7d_caseD_5;
  }
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    pCVar2 = &in_stack_00000004->model;
    fStack_1c = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                          (&pCVar2->motion_controller,3);
    if (((0.0 < fStack_1c) ||
        (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                              (&pCVar2->motion_controller,5), 0.0 < local_18)) ||
       (pCStack_14 = (CMotionController *)
                     core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                               (&pCVar2->motion_controller,8), 0.0 < (float)pCStack_14))
    goto LAB_004f4fc0;
    iVar8 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
    pCVar7 = g_CConsolePtr;
    if (iVar8 == 0) {
      dVar20 = (double)(ulonglong)in_stack_fffffe68;
      switch(*(uint *)(in_stack_00000004[2].cloth_data + 0x53dc)) {
      case 0:
        iVar8 = core_hostage_cpp_FUN_004f5ff0();
        dVar20 = (double)(ulonglong)in_stack_fffffe68;
        if (iVar8 == 0) {
          pCVar4 = g_HeroActors[g_LocalHeroIndex];
          local_dc.z = (pCVar4->base_character).base_actor.location.position.x -
                       (in_stack_00000004->base_actor).location.position.x;
          fStack_d0 = (pCVar4->base_character).base_actor.location.position.y -
                      (in_stack_00000004->base_actor).location.position.y;
          CStack_cc.x = (pCVar4->base_character).base_actor.location.position.z -
                        (in_stack_00000004->base_actor).location.position.z;
          if (((0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5028)) &&
              (*(float *)(in_stack_00000004[2].cloth_data + 0x5028) <=
               SQRT(CStack_cc.x * CStack_cc.x + local_dc.z * local_dc.z + fStack_d0 * fStack_d0)))
             || (iVar8 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                   (g_CEventListPtr,in_stack_00000004[2].cloth_data + 0x502c),
                pCVar7 = g_CConsolePtr, iVar8 == 0)) goto LAB_004f54c2;
          in_stack_00000004[2].cloth_data[0x53dc] = '\x01';
          in_stack_00000004[2].cloth_data[0x53dd] = '\0';
          in_stack_00000004[2].cloth_data[0x53de] = '\0';
          in_stack_00000004[2].cloth_data[0x53df] = '\0';
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (pCVar7,"%s rescued, entering follow mode\n");
          core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
          dVar20 = (double)(ulonglong)in_stack_fffffe68;
        }
        break;
      case 1:
        iVar8 = *(int *)(in_stack_00000004[2].cloth_data + 0x53e0);
        if ((iVar8 != 0) &&
           (fVar13 = (in_stack_00000004->base_actor).location.position.x - *(float *)(iVar8 + 0x20),
           fVar10 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar8 + 0x28),
           SQRT(fVar10 * fVar10 + fVar13 * fVar13) < (float)40)) {
          uVar14 = core_waypoint_cpp_FUN_005ec320();
          *(uint *)(in_stack_00000004[2].cloth_data + 0x53e8) = uVar14;
        }
        pCVar7 = g_CConsolePtr;
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) == 0) {
          iVar8 = core_hostage_cpp_FUN_004f5ff0();
          dVar20 = (double)(ulonglong)in_stack_fffffe68;
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
              dVar20 = (double)(ulonglong)in_stack_fffffe68;
            }
            else if (uVar9 < 3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,2,1);
              dVar20 = (double)(ulonglong)in_stack_fffffe68;
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
              dVar20 = (double)(ulonglong)in_stack_fffffe68;
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
          dVar20 = (double)(ulonglong)in_stack_fffffe68;
          in_stack_00000004->cloth_data[0x32c] = '\0';
          in_stack_00000004->cloth_data[0x32d] = '\0';
          in_stack_00000004->cloth_data[0x32e] = '\0';
          in_stack_00000004->cloth_data[0x32f] = '\0';
        }
        break;
      case 2:
        iVar8 = core_hostage_cpp_FUN_004f5ff0();
        dVar20 = (double)(ulonglong)in_stack_fffffe68;
        if (iVar8 == 0) {
          core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
          uVar9 = *(uint *)(in_stack_00000004[2].cloth_data + 0x53d4);
          local_40 = (CMotionController *)0x0;
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
            dVar20 = (double)(ulonglong)in_stack_fffffe68;
            if (local_3c == 0) break;
          }
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s was left behind, but now can follow again!\n",in_stack_00000004);
          core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
          dVar20 = (double)(ulonglong)in_stack_fffffe68;
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
          dVar20 = (double)(ulonglong)in_stack_fffffe68;
        }
        else {
          core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
          dVar20 = (double)(ulonglong)in_stack_fffffe68;
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
              dVar20 = (double)(ulonglong)in_stack_fffffe68;
              in_stack_00000004[2].cloth_data[0x53e8] = '\0';
              in_stack_00000004[2].cloth_data[0x53e9] = '\0';
              in_stack_00000004[2].cloth_data[0x53ea] = '\0';
              in_stack_00000004[2].cloth_data[0x53eb] = '\0';
            }
            else {
              uVar14 = core_waypoint_cpp_FUN_005ec320();
              dVar20 = (double)(ulonglong)in_stack_fffffe68;
              *(uint *)(in_stack_00000004[2].cloth_data + 0x53e8) = uVar14;
            }
            break;
          case 1:
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,1,1);
            dVar20 = (double)(ulonglong)in_stack_fffffe68;
            break;
          case 2:
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&pCVar2->motion_controller,2,1);
            dVar20 = (double)(ulonglong)in_stack_fffffe68;
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
            dVar20 = (double)(ulonglong)in_stack_fffffe68;
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
        local_24 = 1.4013e-45;
        dVar20 = (double)(ulonglong)in_stack_fffffe68;
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) != 0) {
          if (*(float *)(in_stack_00000004->field2_0x240c + 0x28) <
              in_stack_00000008 * (float)0.5) {
            *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
                 in_stack_00000008 * (float)0.5;
          }
          pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                              (&in_stack_00000004->base_actor,&CStack_84,
                               (CVector3f *)
                               (*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) + 0x20));
          if ((CVector3f *)(in_stack_00000004->field2_0x240c + 0x10) != pCVar12) {
            ((CVector3f *)(in_stack_00000004->field2_0x240c + 0x10))->x = pCVar12->x;
            *(float *)(in_stack_00000004->field2_0x240c + 0x14) = pCVar12->y;
            *(float *)(in_stack_00000004->field2_0x240c + 0x18) = pCVar12->z;
          }
          pcVar17 = in_stack_00000004->field2_0x240c + 0x10;
          local_98 = *(float *)pcVar17;
          CStack_90.x = *(float *)(in_stack_00000004->field2_0x240c + 0x18);
          fVar13 = SQRT(CStack_90.x * CStack_90.x + local_98 * local_98);
          fStack_94 = 0.0;
          if (*(float *)(in_stack_00000004->field2_0x240c + 0x28) < fVar13) {
            local_24 = *(float *)(in_stack_00000004->field2_0x240c + 0x28) / fVar13;
            *(float *)pcVar17 = *(float *)pcVar17 * local_24;
            *(float *)(in_stack_00000004->field2_0x240c + 0x14) =
                 *(float *)(in_stack_00000004->field2_0x240c + 0x14) * local_24;
            *(float *)(in_stack_00000004->field2_0x240c + 0x18) =
                 *(float *)(in_stack_00000004->field2_0x240c + 0x18) * local_24;
          }
          local_28 = fVar13;
          pCVar12 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                              ((CVector3f *)(auStack_148 + 8),
                               (CVector3f *)(in_stack_00000004->field2_0x240c + 0x10));
          fVar10 = (float)2;
          *(float *)(in_stack_00000004->field2_0x240c + 0xc) = pCVar12->y;
          dVar20 = (double)((float)uStack_188 * fVar10);
          if (dVar20 < 1.0) {
            fVar10 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (*(float *)(*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) + 0x34
                                          ) - (in_stack_00000004->base_actor).orient.bank);
            fVar10 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                               (fVar10 - *(float *)(in_stack_00000004->field2_0x240c + 0xc));
            *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
                 (1.0 - (float)(double)CONCAT44 /* combine 2-byte values */(fVar13,in_stack_fffffe70)) * fVar10 +
                 *(float *)(in_stack_00000004->field2_0x240c + 0xc);
          }
          fVar13 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (*(float *)(in_stack_00000004->field2_0x240c + 0xc));
          *(float *)(in_stack_00000004->field2_0x240c + 0xc) = fVar13;
          if ((fStack_17c < (float)0.01) &&
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
          local_2c = (CDemonActor *)(in_stack_00000008 * (float)3.1415926535000001);
          local_30 = (CDoor *)-(float)local_2c;
          if (*(float *)(in_stack_00000004->field2_0x240c + 0xc) < (float)local_30) {
            *(CDoor **)(in_stack_00000004->field2_0x240c + 0xc) = local_30;
          }
          if ((float)local_2c < *(float *)(in_stack_00000004->field2_0x240c + 0xc)) {
            *(CDemonActor **)(in_stack_00000004->field2_0x240c + 0xc) = local_2c;
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
          dVar20 = (double)(ulonglong)in_stack_fffffe68;
        }
        else {
LAB_004f54c2:
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
          dVar20 = (double)(ulonglong)in_stack_fffffe68;
        }
      }
      else if (uVar9 < 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->model).motion_controller,2,1);
        dVar20 = (double)(ulonglong)in_stack_fffffe68;
      }
      else {
        if (uVar9 != 3) goto LAB_004f54c2;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->model).motion_controller,0,1);
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
        dVar20 = (double)(ulonglong)in_stack_fffffe68;
      }
    }
  }
  else {
    pCVar12 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (&in_stack_00000004->base_actor,&local_dc,
                         &(in_stack_00000004->grabbed_by->location).position);
    pCVar12 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_cc,pCVar12);
    pCStack_14 = (CMotionController *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar12->y);
    pCVar19 = pCStack_14;
    if ((float)pCStack_14 < (float)-1.57079632675) {
      pCVar19 = (CMotionController *)((float)pCStack_14 + 3.141593f);
    }
    if ((float)1.57079632675 < (float)pCVar19) {
      pCVar19 = (CMotionController *)((float)pCVar19 + -3.141593f);
    }
    local_34 = (CMotionController *)(in_stack_00000008 * (float)3.1415926535000001);
    local_40 = (CMotionController *)-(float)local_34;
    if ((float)pCVar19 < (float)local_40) {
      pCVar19 = local_40;
    }
    if ((float)local_34 < (float)pCVar19) {
      pCVar19 = local_34;
    }
    (in_stack_00000004->base_actor).orient.bank =
         (in_stack_00000004->base_actor).orient.bank + (float)pCVar19;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base_actor);
    pCVar11 = in_stack_00000004->grabbed_by;
    pCVar3 = pCVar11->vtable;
    pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                        (&in_stack_00000004->model,&CStack_90,0);
    fVar13 = (*pCVar3[1].cylinderGroundCheck)(pCVar11,(float)in_stack_00000004,pCVar12);
    if (fVar13 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_004f5384:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,0,1);
    }
    else if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_004f5384;
    fStack_1c = 1.4013e-45;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    (in_stack_00000004->model).accumulated_root_motion.x =
         (in_stack_00000004->model).accumulated_root_motion.y;
    dVar20 = (double)ZEXT48(pCVar19);
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
      pCVar12 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (&in_stack_00000004->model,local_bc,iVar8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&in_stack_00000004->base_actor,&CStack_154,pCVar12);
      local_114.x = 3.0;
      local_114.y = 0.0;
      local_114.z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                (&in_stack_00000004->base_actor,&CStack_12c,&local_114);
      core_gore_cpp_FUN_004edaa0();
    }
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  if (local_18 == 0.0) {
    pSVar15 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(in_stack_00000004->model).motion_controller);
    iVar8 = pSVar15->state_index;
    if ((((iVar8 == 8) || (iVar8 == 0)) || ((iVar8 == 0xd || (iVar8 == 10)))) &&
       ((in_stack_00000004->base_actor).field11_0xdc == 0)) {
      in_stack_00000004->cloth_data[0x33c] = '\0';
      in_stack_00000004->cloth_data[0x33d] = '\0';
      in_stack_00000004->cloth_data[0x33e] = '\0';
      in_stack_00000004->cloth_data[0x33f] = '\0';
      goto LAB_004f50f1;
    }
    dVar18 = (double)in_stack_00000008;
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)32;
    local_f4.z = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_e8 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_e4 = *(float *)(in_stack_00000004->field2_0x240c + 0x24) * in_stack_00000008;
    pCVar12 = &(in_stack_00000004->model).accumulated_root_motion;
    local_114.y = local_f4.z + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    local_114.z = local_e8 + *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    local_108 = local_e4 + *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    local_98 = local_114.y + pCVar12->x;
    fStack_94 = local_114.z + (in_stack_00000004->model).accumulated_root_motion.y;
    CStack_90.x = local_108 + (in_stack_00000004->model).accumulated_root_motion.z;
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
    pCVar12->x = (in_stack_00000004->model).accumulated_root_motion.y;
    local_e0 = (pCVar1->position).x;
    local_dc.x = (in_stack_00000004->base_actor).location.position.y;
    local_dc.y = (in_stack_00000004->base_actor).location.position.z;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    uVar14 = (uint)((ulonglong)dVar18 >> 0x20);
    *(float *)(in_stack_00000004->cloth_data + 0x33c) =
         *(float *)(in_stack_00000004->cloth_data + 0x33c) + in_stack_00000008;
    if (((double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(dVar20,0),uVar14) * 0.59999999999999998 <=
         SQRT((double)CStack_90.y * (double)CStack_90.y +
              (double)fStack_94 * (double)fStack_94 + (double)CStack_90.x * (double)CStack_90.x)) &&
       (dVar18 = (double)(pCVar1->position).x - (double)local_dc.x,
       dVar5 = (double)(in_stack_00000004->base_actor).location.position.y - (double)local_dc.y,
       dVar6 = (double)(in_stack_00000004->base_actor).location.position.z - (double)local_dc.z,
       SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar18 * dVar18) <=
       (double)CONCAT44 /* combine 2-byte values */(SUB84 /* extract 2-byte value */(dVar20,0),uVar14) * 0.40000000000000002)) goto LAB_004f50f1;
  }
  else {
    pCVar12 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (&in_stack_00000004->base_actor,aCStack_6c,
                         (CVector3f *)(in_stack_00000004->field2_0x240c + 0x10));
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (pCVar1->position).x = pCVar12->x + (pCVar1->position).x;
    (in_stack_00000004->base_actor).location.position.y =
         pCVar12->y + (in_stack_00000004->base_actor).location.position.y;
    (in_stack_00000004->base_actor).location.position.z =
         pCVar12->z + (in_stack_00000004->base_actor).location.position.z;
  }
  in_stack_00000004->cloth_data[0x33c] = '\0';
  in_stack_00000004->cloth_data[0x33d] = '\0';
  in_stack_00000004->cloth_data[0x33e] = '\0';
  in_stack_00000004->cloth_data[0x33f] = '\0';
LAB_004f50f1:
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 1) {
    local_28 = 0.5;
    local_34 = (CMotionController *)0x3f400000;
    pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (in_stack_00000004->carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash)
    ;
    local_28 = 0.0;
    if (((pCVar11 != (CDemonActor *)0x0) &&
        (fVar13 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                            (&(in_stack_00000004->model).motion_controller,0x10), fVar13 <= 0.0)) ||
       (local_24 != 0.0)) {
      fVar13 = in_stack_00000008 / local_20 + *(float *)(in_stack_00000004[2].cloth_data + 0x5404);
    }
    else {
      fVar13 = *(float *)(in_stack_00000004[2].cloth_data + 0x5404) - in_stack_00000008 / local_20;
    }
    *(float *)(in_stack_00000004[2].cloth_data + 0x5404) = fVar13;
    uStack_188 = (double)*(float *)(in_stack_00000004[2].cloth_data + 0x5404);
    if (0.0 < uStack_188) {
      if (1.0 < uStack_188) {
        in_stack_00000004[2].cloth_data[0x5404] = '\0';
        in_stack_00000004[2].cloth_data[0x5405] = '\0';
        in_stack_00000004[2].cloth_data[0x5406] = -0x80;
        in_stack_00000004[2].cloth_data[0x5407] = '?';
      }
      pCVar2 = &in_stack_00000004->model;
      local_2c = (CDemonActor *)
                 core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                           (&pCVar2->motion_controller,DAT_02db8888,
                            *(float *)(in_stack_00000004[2].cloth_data + 0x5400) *
                            (float)0.65000000000000002 + (float)0.34999999999999998);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar2,DAT_02db8888,(float)local_2c,
                 *(float *)(in_stack_00000004[2].cloth_data + 0x5404),
                 *(int *)(in_stack_00000004[2].cloth_data + 0x53ec),
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar2,DAT_02db8888,local_28,*(float *)(in_stack_00000004[2].cloth_data + 0x5404),
                 *(int *)(in_stack_00000004[2].cloth_data + 0x53f0),
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      if (((1.0 <= *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) &&
          (0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5400))) &&
         (fVar13 = in_stack_00000008 / local_20 +
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
     (pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (in_stack_00000004->carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash), pCVar11 != (CDemonActor *)0x0)) {
    uVar14 = *(uint *)(pCVar11[4].actor_name + 0xc);
    pCVar11[4].actor_name[0xc] = '\x06';
    pCVar11[4].actor_name[0xd] = '\0';
    pCVar11[4].actor_name[0xe] = '\0';
    pCVar11[4].actor_name[0xf] = '\0';
    (*pCVar11->vtable[1].renderTransparent)(pCVar11);
    *(uint *)(pCVar11[4].actor_name + 0xc) = uVar14;
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
      (pCVar11 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (in_stack_00000004->carry_hands[1].carry_actor,
                            g_CWeaponClassInfo.name_hash), pCVar11 != (CDemonActor *)0x0)) &&
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
