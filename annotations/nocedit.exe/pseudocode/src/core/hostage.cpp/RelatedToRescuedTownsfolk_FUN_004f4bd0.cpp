// Name: core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0
// Address: 004f4bd0
// Address Range: [[004f4bd0, 004f5fea]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0(void)

#include "nocturne.h"

/* Signature: byte actors_npc_hostage.cpp_RelatedToRescuedTownsfolk(uint param_1,
   uint param_2) */

void __cdecl core_hostage_cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0(void)

{
  CLocation *pCVar1;
  CDeformableModelInstance *pCVar2;
  uint uVar3;
  CCharacter_full_vtable *pCVar4;
  CHero *pCVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  CConsole *pCVar11;
  int iVar12;
  uint uVar13;
  CDoor *pCVar14;
  CSkeleton *this_ptr;
  CVector3f *pCVar15;
  CDemonActor *pCVar16;
  SMotion *pSVar17;
  int iVar18;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  char *pcVar19;
  float local_19c;
  SDamageInfo local_194;
  CVector3f local_158;
  CVector3f local_14c;
  CVector3f local_140;
  CVector3f local_134;
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_11c;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  CVector3f local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  CVector3f local_d4;
  CVector3f local_c8;
  CVector3f local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  uint local_a0;
  float local_9c;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80 [2];
  float local_68;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  CMotionController *local_28;
  CDoor *local_24;
  float local_20;
  float local_18;
  
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
  iVar12 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar12 == 0) {
    return;
  }
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  local_28 = &(in_stack_00000004->model).motion_controller;
  while (0.0 < in_stack_00000008) {
    uVar13 = core_motion_cpp_CMotionController_advance_FUN_0052d610(local_28);
    if (uVar13 < 0xb) {
      if (uVar13 == 6) {
        if (in_stack_00000004->grabbed_by != (CDemonActor *)0x0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s escaping from %s\n");
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_194);
          local_194.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          local_18 = local_194.damage_amount;
          (*(((((CCharacter *)in_stack_00000004->grabbed_by)->base).vtable._uc)->_uc).processDamage)
                    ((CCharacter *)in_stack_00000004->grabbed_by,&local_194);
        }
      }
      else {
        core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
      }
    }
    else if (uVar13 < 0xc) {
      local_24 = (CDoor *)0x0;
      local_140.x = 0.0;
      local_140.y = 0.0;
      local_68 = 1e+30;
      local_140.z = 1.5;
      iVar12 = 0;
      iVar18 = 0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&in_stack_00000004->base,&local_ec,&local_140);
      while (iVar12 < (int)g_CDemonSetPtr->actor_list_ptr) {
        pCVar14 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar18),
                                      g_CDoorClassInfo.name_hash);
        if (pCVar14 == (CDoor *)0x0) {
LAB_004f4dd2:
          iVar12 = iVar12 + 1;
          iVar18 = iVar18 + 4;
        }
        else {
          local_110 = (pCVar14->base).location.position.x - local_ec.x;
          local_10c = (pCVar14->base).location.position.y - local_ec.y;
          local_108 = (pCVar14->base).location.position.z - local_ec.z;
          if ((float)5 < ABS(local_10c)) goto LAB_004f4dd2;
          local_10c = 0.0;
          local_20 = SQRT(local_108 * local_108 + local_110 * local_110);
          if (local_68 <= local_20) goto LAB_004f4dd2;
          iVar12 = iVar12 + 1;
          iVar18 = iVar18 + 4;
          local_68 = local_20;
          local_24 = pCVar14;
        }
      }
      if (local_24 != (CDoor *)0x0) {
        core_door_cpp_CDoor_FUN_00480de0(local_24);
      }
    }
    else if (uVar13 == 0xc) {
      pCVar16 = in_stack_00000004->carry_hands[1].carry_actor;
      if (pCVar16 != (CDemonActor *)0x0) {
        (*(((in_stack_00000004->base).vtable._uc)->_uc).cfunc21)();
        core_inv_cpp_CInventory_addItem_FUN_004fd600
                  (&g_HeroActors[g_LocalHeroIndex]->inventory,pCVar16,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  }
  fVar6 = (float)3.1415926535000001;
  *(float *)(in_stack_00000004->unk1 + 0x28) = (in_stack_00000004->model).accumulated_root_motion.z;
  local_2c = 0;
  *(float *)(in_stack_00000004->unk1 + 0x2c) = in_stack_00000008 * fVar6;
  local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(local_28,10);
  if (0.0 < local_18) {
    local_2c = 1;
  }
  if (in_stack_00000004->hit_points <= 0.0) {
    local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&(in_stack_00000004->model).motion_controller,5);
    if ((local_18 <= 0.0) &&
       (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             (&(in_stack_00000004->model).motion_controller,8), local_18 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,6,1);
    }
    goto switchD_004f5c7d_caseD_5;
  }
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    pCVar2 = &in_stack_00000004->model;
    local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                         (&pCVar2->motion_controller,3);
    if (((local_18 <= 0.0) &&
        (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                              (&pCVar2->motion_controller,5), local_18 <= 0.0)) &&
       (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                             (&pCVar2->motion_controller,8), local_18 <= 0.0)) {
      iVar12 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
      pCVar11 = g_CConsolePtr;
      if (iVar12 == 0) {
        switch(*(uint *)(in_stack_00000004[2].cloth_data + 0x53dc)) {
        case 0:
          iVar12 = core_hostage_cpp_FUN_004f5ff0();
          if (iVar12 == 0) {
            pCVar5 = g_HeroActors[g_LocalHeroIndex];
            local_e0 = (pCVar5->base).base.location.position.x -
                       (in_stack_00000004->base).location.position.x;
            local_dc = (pCVar5->base).base.location.position.y -
                       (in_stack_00000004->base).location.position.y;
            local_d8 = (pCVar5->base).base.location.position.z -
                       (in_stack_00000004->base).location.position.z;
            if (((0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5028)) &&
                (*(float *)(in_stack_00000004[2].cloth_data + 0x5028) <=
                 SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc))) ||
               (iVar12 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                                   (g_CEventListPtr,in_stack_00000004[2].cloth_data + 0x502c),
               pCVar11 = g_CConsolePtr, iVar12 == 0)) goto LAB_004f54c2;
            in_stack_00000004[2].cloth_data[0x53dc] = '\x01';
            in_stack_00000004[2].cloth_data[0x53dd] = '\0';
            in_stack_00000004[2].cloth_data[0x53de] = '\0';
            in_stack_00000004[2].cloth_data[0x53df] = '\0';
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar11,"%s rescued, entering follow mode\n");
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
          }
          break;
        case 1:
          iVar12 = *(int *)(in_stack_00000004[2].cloth_data + 0x53e0);
          if ((iVar12 != 0) &&
             (fVar6 = (in_stack_00000004->base).location.position.x - *(float *)(iVar12 + 0x20),
             fVar7 = (in_stack_00000004->base).location.position.z - *(float *)(iVar12 + 0x28),
             SQRT(fVar7 * fVar7 + fVar6 * fVar6) < (float)40)) {
            iVar12 = core_waypoint_cpp_FUN_005ec320();
            *(int *)(in_stack_00000004[2].cloth_data + 0x53e8) = iVar12;
          }
          pCVar11 = g_CConsolePtr;
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) == 0) {
            iVar12 = core_hostage_cpp_FUN_004f5ff0();
            if (iVar12 == 0) {
              iVar12 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004);
              if (iVar12 == 0) {
                core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
              }
              else {
                *(int *)(in_stack_00000004[2].cloth_data + 0x53d4) = iVar12;
              }
              uVar13 = *(uint *)(in_stack_00000004[2].cloth_data + 0x53d4);
              pCVar2 = &in_stack_00000004->model;
              if (uVar13 < 2) {
                if (uVar13 != 1) goto LAB_004f54c2;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar2->motion_controller,1,1);
              }
              else if (uVar13 < 3) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar2->motion_controller,2,1);
              }
              else {
                if (uVar13 != 3) goto LAB_004f54c2;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          (&pCVar2->motion_controller,0,1);
                pCVar11 = g_CConsolePtr;
                in_stack_00000004[2].cloth_data[0x53dc] = '\x02';
                in_stack_00000004[2].cloth_data[0x53dd] = '\0';
                in_stack_00000004[2].cloth_data[0x53de] = '\0';
                in_stack_00000004[2].cloth_data[0x53df] = '\0';
                engine_console_cpp_CConsole_printf_FUN_00441890(pCVar11,"%s left behind!\n");
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
                      (pCVar11,"%s was led close enough, going home!\n");
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
            in_stack_00000004->cloth_data[0x32c] = '\0';
            in_stack_00000004->cloth_data[0x32d] = '\0';
            in_stack_00000004->cloth_data[0x32e] = '\0';
            in_stack_00000004->cloth_data[0x32f] = '\0';
          }
          break;
        case 2:
          iVar12 = core_hostage_cpp_FUN_004f5ff0();
          if (iVar12 == 0) {
            core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
            uVar13 = *(uint *)(in_stack_00000004[2].cloth_data + 0x53d4);
            local_50 = 0;
            if (uVar13 == 0) {
              iVar12 = 0;
LAB_004f579d:
              in_stack_00000004[2].cloth_data[0x53dc] = '\x01';
              in_stack_00000004[2].cloth_data[0x53dd] = '\0';
              in_stack_00000004[2].cloth_data[0x53de] = '\0';
              in_stack_00000004[2].cloth_data[0x53df] = '\0';
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,iVar12,1);
            }
            else {
              if (uVar13 < 2) {
                iVar12 = 1;
                goto LAB_004f579d;
              }
              if (uVar13 == 2) {
                iVar12 = 2;
                goto LAB_004f579d;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(in_stack_00000004->model).motion_controller,0,1);
              if (local_50 == 0) break;
            }
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"%s was left behind, but now can follow again!\n");
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
          }
          break;
        case 3:
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) == 0) {
            in_stack_00000004[2].cloth_data[0x53dc] = '\x02';
            in_stack_00000004[2].cloth_data[0x53dd] = '\0';
            in_stack_00000004[2].cloth_data[0x53de] = '\0';
            in_stack_00000004[2].cloth_data[0x53df] = '\0';
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (pCVar11,"%s doesn't know next waypoint going home.  Help me!\n");
          }
          else {
            core_charactr_cpp_CCharacter_FUN_0042c5f0(in_stack_00000004);
            switch(*(uint *)(in_stack_00000004[2].cloth_data + 0x53d4)) {
            case 0:
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"%s reached waypoint %s!\n");
              pCVar11 = g_CConsolePtr;
              if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e8) ==
                  *(int *)(in_stack_00000004[2].cloth_data + 0x53e0)) {
                in_stack_00000004[2].cloth_data[0x53dc] = '\x04';
                in_stack_00000004[2].cloth_data[0x53dd] = '\0';
                in_stack_00000004[2].cloth_data[0x53de] = '\0';
                in_stack_00000004[2].cloth_data[0x53df] = '\0';
                engine_console_cpp_CConsole_printf_FUN_00441890
                          (pCVar11,"%s rescued and taken home!\n");
                in_stack_00000004[2].cloth_data[0x53e8] = '\0';
                in_stack_00000004[2].cloth_data[0x53e9] = '\0';
                in_stack_00000004[2].cloth_data[0x53ea] = '\0';
                in_stack_00000004[2].cloth_data[0x53eb] = '\0';
              }
              else {
                iVar12 = core_waypoint_cpp_FUN_005ec320();
                *(int *)(in_stack_00000004[2].cloth_data + 0x53e8) = iVar12;
              }
              break;
            case 1:
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,1,1);
              break;
            case 2:
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,2,1);
              break;
            case 3:
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
              pCVar11 = g_CConsolePtr;
              in_stack_00000004[2].cloth_data[0x53dc] = '\x02';
              in_stack_00000004[2].cloth_data[0x53dd] = '\0';
              in_stack_00000004[2].cloth_data[0x53de] = '\0';
              in_stack_00000004[2].cloth_data[0x53df] = '\0';
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (pCVar11,"%s got confused going home.  Help me!\n");
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,0,1);
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
          local_2c = 1;
          if (*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) != 0) {
            if (*(float *)(in_stack_00000004->unk1 + 0x28) <
                in_stack_00000008 * (float)0.5) {
              *(float *)(in_stack_00000004->unk1 + 0x28) =
                   in_stack_00000008 * (float)0.5;
            }
            pCVar15 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                (&in_stack_00000004->base,&local_8c,
                                 (CVector3f *)
                                 (*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) + 0x20));
            if ((CVector3f *)(in_stack_00000004->unk1 + 0x10) != pCVar15) {
              ((CVector3f *)(in_stack_00000004->unk1 + 0x10))->x = pCVar15->x;
              *(float *)(in_stack_00000004->unk1 + 0x14) = pCVar15->y;
              *(float *)(in_stack_00000004->unk1 + 0x18) = pCVar15->z;
            }
            pcVar19 = in_stack_00000004->unk1 + 0x10;
            local_a4 = *(float *)pcVar19;
            local_9c = *(float *)(in_stack_00000004->unk1 + 0x18);
            fVar6 = SQRT(local_9c * local_9c + local_a4 * local_a4);
            local_a0 = 0;
            if (*(float *)(in_stack_00000004->unk1 + 0x28) < fVar6) {
              local_30 = *(float *)(in_stack_00000004->unk1 + 0x28) / fVar6;
              *(float *)pcVar19 = *(float *)pcVar19 * local_30;
              *(float *)(in_stack_00000004->unk1 + 0x14) =
                   *(float *)(in_stack_00000004->unk1 + 0x14) * local_30;
              *(float *)(in_stack_00000004->unk1 + 0x18) =
                   *(float *)(in_stack_00000004->unk1 + 0x18) * local_30;
            }
            local_34 = fVar6;
            pCVar15 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                (&local_14c,(CVector3f *)(in_stack_00000004->unk1 + 0x10));
            fVar7 = (float)2;
            *(float *)(in_stack_00000004->unk1 + 0xc) = pCVar15->y;
            if (fVar6 * fVar7 < 1.0) {
              local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (*(float *)(*(int *)(in_stack_00000004[2].cloth_data + 0x53e4) +
                                              0x34) - (in_stack_00000004->base).orient.bank);
              local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                   (local_18 - *(float *)(in_stack_00000004->unk1 + 0xc));
              *(float *)(in_stack_00000004->unk1 + 0xc) =
                   (1.0 - fVar6 * fVar7) * local_18 + *(float *)(in_stack_00000004->unk1 + 0xc);
            }
            local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (*(float *)(in_stack_00000004->unk1 + 0xc));
            *(float *)(in_stack_00000004->unk1 + 0xc) = local_18;
            if ((fVar6 < (float)0.01) &&
               (ABS(*(float *)(in_stack_00000004->unk1 + 0xc)) < (float)0.017453292519444399)) {
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
            local_3c = in_stack_00000008 * (float)3.1415926535000001;
            local_40 = -local_3c;
            if (*(float *)(in_stack_00000004->unk1 + 0xc) < local_40) {
              *(float *)(in_stack_00000004->unk1 + 0xc) = local_40;
            }
            if (local_3c < *(float *)(in_stack_00000004->unk1 + 0xc)) {
              *(float *)(in_stack_00000004->unk1 + 0xc) = local_3c;
            }
          }
        }
      }
      else {
        uVar13 = *(uint *)(in_stack_00000004->unk2 + 0x10);
        if (uVar13 < 2) {
          if (uVar13 == 1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,1,1);
          }
          else {
LAB_004f54c2:
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,0,1);
          }
        }
        else if (uVar13 < 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,2,1);
        }
        else {
          if (uVar13 != 3) goto LAB_004f54c2;
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
        }
      }
    }
  }
  else {
    pCVar15 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                        (&in_stack_00000004->base,&local_d4,
                         &(in_stack_00000004->grabbed_by->location).position);
    pCVar15 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_c8,pCVar15);
    local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar15->y);
    local_19c = local_18;
    if (local_18 < (float)-1.57079632675) {
      local_19c = local_18 + 3.141593f;
    }
    if ((float)1.57079632675 < local_19c) {
      local_19c = local_19c + -3.141593f;
    }
    local_38 = in_stack_00000008 * (float)3.1415926535000001;
    local_44 = -local_38;
    if (local_19c < local_44) {
      local_19c = local_44;
    }
    if (local_38 < local_19c) {
      local_19c = local_38;
    }
    (in_stack_00000004->base).orient.bank = (in_stack_00000004->base).orient.bank + local_19c;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base);
    pCVar4 = (in_stack_00000004->grabbed_by->vtable)._uc;
    core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
              (&in_stack_00000004->model,&local_98,0);
    iVar12 = (*(pCVar4->_uc).cfunc15)();
    if (iVar12 == 0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_004f5384:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,0,1);
    }
    else if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_004f5384;
    local_2c = 1;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    (in_stack_00000004->model).accumulated_root_motion.x =
         (in_stack_00000004->model).accumulated_root_motion.y;
  }
switchD_004f5c7d_caseD_5:
  if (((0.0 < in_stack_00000004->hit_points) &&
      (*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 1)) &&
     (iVar12 = core_actor_cpp_randomChance_FUN_0040cd10(in_stack_00000008 * 0.2f),
     iVar12 != 0)) {
    pcVar19 = "Bip01 L Forearm";
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                         (&in_stack_00000004->model);
    iVar12 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,pcVar19);
    if (-1 < iVar12) {
      pCVar15 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                          (&in_stack_00000004->model,&local_bc,iVar12);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&in_stack_00000004->base,&local_158,pCVar15);
      local_11c.x = 3.0;
      local_11c.y = 0.0;
      local_11c.z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                (&in_stack_00000004->base,&local_134,&local_11c);
      core_gore_cpp_FUN_004edaa0();
    }
  }
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  if (local_2c == 0) {
    pSVar17 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                        (&(in_stack_00000004->model).motion_controller);
    iVar12 = pSVar17->state_index;
    if ((((iVar12 == 8) || (iVar12 == 0)) || ((iVar12 == 0xd || (iVar12 == 10)))) &&
       ((in_stack_00000004->base).unk2 == 0)) {
      in_stack_00000004->cloth_data[0x33c] = '\0';
      in_stack_00000004->cloth_data[0x33d] = '\0';
      in_stack_00000004->cloth_data[0x33e] = '\0';
      in_stack_00000004->cloth_data[0x33f] = '\0';
      goto LAB_004f50f1;
    }
    *(float *)(in_stack_00000004->unk1 + 0x20) =
         *(float *)(in_stack_00000004->unk1 + 0x20) - in_stack_00000008 * (float)32;
    local_104 = *(float *)(in_stack_00000004->unk1 + 0x1c) * in_stack_00000008;
    local_100 = *(float *)(in_stack_00000004->unk1 + 0x20) * in_stack_00000008;
    local_fc = *(float *)(in_stack_00000004->unk1 + 0x24) * in_stack_00000008;
    pCVar15 = &(in_stack_00000004->model).accumulated_root_motion;
    local_128 = local_104 + *(float *)(in_stack_00000004->unk1 + 0x10);
    local_124 = local_100 + *(float *)(in_stack_00000004->unk1 + 0x14);
    local_120 = local_fc + *(float *)(in_stack_00000004->unk1 + 0x18);
    local_b0 = local_128 + pCVar15->x;
    local_ac = local_124 + (in_stack_00000004->model).accumulated_root_motion.y;
    local_a8 = local_120 + (in_stack_00000004->model).accumulated_root_motion.z;
    in_stack_00000004->unk1[0x18] = '\0';
    in_stack_00000004->unk1[0x19] = '\0';
    in_stack_00000004->unk1[0x1a] = '\0';
    in_stack_00000004->unk1[0x1b] = '\0';
    *(uint *)(in_stack_00000004->unk1 + 0x14) =
         *(uint *)(in_stack_00000004->unk1 + 0x18);
    *(float *)(in_stack_00000004->unk1 + 0x10) = *(float *)(in_stack_00000004->unk1 + 0x14);
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    pCVar1 = &(in_stack_00000004->base).location;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar15->x = (in_stack_00000004->model).accumulated_root_motion.y;
    local_f8 = (pCVar1->position).x;
    local_f4 = (in_stack_00000004->base).location.position.y;
    local_f0 = (in_stack_00000004->base).location.position.z;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
    *(float *)(in_stack_00000004->cloth_data + 0x33c) =
         *(float *)(in_stack_00000004->cloth_data + 0x33c) + in_stack_00000008;
    if (((double)in_stack_00000008 * 0.59999999999999998 <=
         SQRT((double)local_a8 * (double)local_a8 +
              (double)local_b0 * (double)local_b0 + (double)local_ac * (double)local_ac)) &&
       (dVar8 = (double)(pCVar1->position).x - (double)local_f8,
       dVar9 = (double)(in_stack_00000004->base).location.position.y - (double)local_f4,
       dVar10 = (double)(in_stack_00000004->base).location.position.z - (double)local_f0,
       SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8) <=
       (double)in_stack_00000008 * 0.40000000000000002)) goto LAB_004f50f1;
  }
  else {
    pCVar15 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (&in_stack_00000004->base,local_80,
                         (CVector3f *)(in_stack_00000004->unk1 + 0x10));
    pCVar1 = &(in_stack_00000004->base).location;
    (pCVar1->position).x = pCVar15->x + (pCVar1->position).x;
    (in_stack_00000004->base).location.position.y =
         pCVar15->y + (in_stack_00000004->base).location.position.y;
    (in_stack_00000004->base).location.position.z =
         pCVar15->z + (in_stack_00000004->base).location.position.z;
  }
  in_stack_00000004->cloth_data[0x33c] = '\0';
  in_stack_00000004->cloth_data[0x33d] = '\0';
  in_stack_00000004->cloth_data[0x33e] = '\0';
  in_stack_00000004->cloth_data[0x33f] = '\0';
LAB_004f50f1:
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x53d8) == 1) {
    local_48 = 0.5;
    local_54 = 0.75;
    pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c790
                        (in_stack_00000004->carry_hands[1].carry_actor,g_CWeaponClassInfo.name_hash)
    ;
    local_4c = 0;
    if (((pCVar16 != (CDemonActor *)0x0) &&
        (local_18 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                              (&(in_stack_00000004->model).motion_controller,0x10), local_18 <= 0.0)
        ) || (local_4c != 0)) {
      fVar6 = in_stack_00000008 / local_48 + *(float *)(in_stack_00000004[2].cloth_data + 0x5404);
    }
    else {
      fVar6 = *(float *)(in_stack_00000004[2].cloth_data + 0x5404) - in_stack_00000008 / local_48;
    }
    *(float *)(in_stack_00000004[2].cloth_data + 0x5404) = fVar6;
    if (0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) {
      if (1.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) {
        in_stack_00000004[2].cloth_data[0x5404] = '\0';
        in_stack_00000004[2].cloth_data[0x5405] = '\0';
        in_stack_00000004[2].cloth_data[0x5406] = -0x80;
        in_stack_00000004[2].cloth_data[0x5407] = '?';
      }
      pCVar2 = &in_stack_00000004->model;
      local_58 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                           (&pCVar2->motion_controller,DAT_02db8888,
                            *(float *)(in_stack_00000004[2].cloth_data + 0x5400) *
                            (float)0.65000000000000002 + (float)0.34999999999999998);
      local_18 = local_58;
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar2,DAT_02db8888,local_58,*(float *)(in_stack_00000004[2].cloth_data + 0x5404),
                 *(int *)(in_stack_00000004[2].cloth_data + 0x53ec),
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
                (pCVar2,DAT_02db8888,local_58,*(float *)(in_stack_00000004[2].cloth_data + 0x5404),
                 *(int *)(in_stack_00000004[2].cloth_data + 0x53f0),
                 core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
      if (((1.0 <= *(float *)(in_stack_00000004[2].cloth_data + 0x5404)) &&
          (0.0 < *(float *)(in_stack_00000004[2].cloth_data + 0x5400))) &&
         (fVar6 = in_stack_00000008 / local_54 +
                  *(float *)(in_stack_00000004[2].cloth_data + 0x5400),
         *(float *)(in_stack_00000004[2].cloth_data + 0x5400) = fVar6, 1.0 < fVar6)) {
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
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  if ((1.0 <= *(float *)(in_stack_00000004[2].cloth_data + 0x5400)) &&
     (pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c790
                          (in_stack_00000004->carry_hands[1].carry_actor,
                           g_CWeaponClassInfo.name_hash), pCVar16 != (CDemonActor *)0x0)) {
    uVar3 = *(uint *)(pCVar16[4].actor_name + 0xc);
    pCVar16[4].actor_name[0xc] = '\x06';
    pCVar16[4].actor_name[0xd] = '\0';
    pCVar16[4].actor_name[0xe] = '\0';
    pCVar16[4].actor_name[0xf] = '\0';
    (*(((pCVar16->vtable)._uc)->_uc).cfunc4)();
    *(uint *)(pCVar16[4].actor_name + 0xc) = uVar3;
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
      (pCVar16 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (in_stack_00000004->carry_hands[1].carry_actor,
                            g_CWeaponClassInfo.name_hash), pCVar16 != (CDemonActor *)0x0)) &&
     (iVar12 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                         (g_CEventListPtr,"deputeFireShotgun"), iVar12 != 0)) {
    in_stack_00000004[2].cloth_data[0x5400] = '\n';
    in_stack_00000004[2].cloth_data[0x5401] = -0x29;
    in_stack_00000004[2].cloth_data[0x5402] = '#';
    in_stack_00000004[2].cloth_data[0x5403] = '<';
    return;
  }
  return;
}
