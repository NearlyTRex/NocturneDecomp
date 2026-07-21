// Name: FUN_004b6d80
// Address: 004b6d80
// Address Range: [[004b6d80, 004b819a]]
// Convention: unknown
// Signature: void FUN_004b6d80(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6d80(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  uint *puVar12;
  bool bVar13;
  int iVar14;
  float local_1a0;
  float local_19c;
  float local_198;
  byte local_194 [4];
  uint local_190;
  int local_160;
  int local_15c;
  byte local_158 [12];
  byte local_14c [12];
  uint local_140;
  uint local_13c;
  uint local_138;
  byte local_134 [12];
  float local_128;
  float local_124;
  float local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  byte local_d4 [12];
  byte local_c8 [12];
  byte local_bc [12];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  uint local_a0;
  float local_9c;
  byte local_98 [12];
  byte local_8c [12];
  byte local_80 [24];
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
  int local_28;
  int local_24;
  float local_20;
  float local_18;
  
  switch(*(uint *)(param_1 + 0x1f924)) {
  case 0:
  case 4:
    *(uint *)(param_1 + 0x2de0) = 0x42480000;
    *(uint *)(param_1 + 0x2ddc) = 0x41a00000;
    break;
  case 1:
  case 2:
    *(uint *)(param_1 + 0x2de0) = 0x42960000;
    *(uint *)(param_1 + 0x2ddc) = 0x42200000;
    break;
  case 3:
  case 5:
    *(uint *)(param_1 + 0x2de0) = 0x47c34f80;
    *(uint *)(param_1 + 0x2ddc) = 0x47c34f80;
  }
  if (*(float *)(param_1 + 0x2434) <= 0.0) {
    *(uint *)(param_1 + 0x2de0) = 0x47c34f80;
    *(uint *)(param_1 + 0x2ddc) = 0x47c34f80;
  }
  iVar7 = FUN_004259f0(param_1,param_2);
  if (iVar7 == 0) {
    return;
  }
  local_1a0 = param_2;
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_28 = param_1 + 0x150;
  while (0.0 < local_1a0) {
    uVar8 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(local_28,&local_1a0);
    if (uVar8 < 0xb) {
      if (uVar8 == 6) {
        if (*(int *)(param_1 + 0x2590) != 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s escaping from %s\n",param_1,
                     *(int *)(param_1 + 0x2590));
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_194);
          local_190 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41200000,0x41700000);
          local_160 = param_1;
          local_15c = param_1;
          local_18 = (float)local_190;
          (**(code **)(*(int *)(*(int *)(param_1 + 0x2590) + 0x14c) + 0x100))
                    (*(int *)(param_1 + 0x2590),local_194);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar8);
      }
    }
    else if (uVar8 < 0xc) {
      local_24 = 0;
      local_140 = 0;
      local_13c = 0;
      local_68 = 1e+30;
      local_138 = 0x3fc00000;
      iVar7 = 0;
      iVar14 = 0;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_ec,&local_140);
      while (iVar7 < *(int *)(0x01E57284 + 0x14cd6c)) {
        iVar9 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iVar14 + 0x14cd70 + 0x01E57284),_DAT_01af4ed4);
        if (iVar9 == 0) {
LAB_004b6f82:
          iVar7 = iVar7 + 1;
          iVar14 = iVar14 + 4;
        }
        else {
          local_110 = *(float *)(iVar9 + 0x20) - local_ec;
          local_10c = *(float *)(iVar9 + 0x24) - local_e8;
          local_108 = *(float *)(iVar9 + 0x28) - local_e4;
          if ((float)_DAT_00585ca2 < ABS(local_10c)) goto LAB_004b6f82;
          local_10c = 0.0;
          local_20 = SQRT(local_108 * local_108 + local_110 * local_110);
          if (local_68 <= local_20) goto LAB_004b6f82;
          iVar7 = iVar7 + 1;
          iVar14 = iVar14 + 4;
          local_68 = local_20;
          local_24 = iVar9;
        }
      }
      if (local_24 != 0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00456220(local_24,0x3dcccccd);
      }
    }
    else if (uVar8 == 0xc) {
      iVar7 = *(int *)(param_1 + 0x24f0);
      if (iVar7 != 0) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
        core_inv_cpp_CInventory_addItem_FUN_004bf360
                  (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x1f5a0,iVar7,1);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar8);
    }
  }
  fVar1 = (float)_DAT_00585c2a;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  local_2c = 0;
  *(float *)(param_1 + 0x2430) = param_2 * fVar1;
  local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(local_28,10);
  bVar13 = 0.0 < local_18;
  if (bVar13) {
    local_2c = 1;
  }
  if (*(float *)(param_1 + 0x2434) <= 0.0) {
    local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                (param_1 + 0x150,5);
    if ((local_18 <= 0.0) &&
       (local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                    (param_1 + 0x150,8), local_18 <= 0.0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,6,1);
    }
LAB_004b7170:
    bVar13 = true;
    goto switchD_004b7b39_default;
  }
  if (*(int *)(param_1 + 0x2590) == 0) {
    iVar7 = param_1 + 0x150;
    local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(iVar7,3);
    if (((0.0 < local_18) ||
        (local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                     (iVar7,5), 0.0 < local_18)) ||
       (local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                    (iVar7,8), 0.0 < local_18)) goto LAB_004b7170;
    iVar14 = FUN_00428c00(param_1,param_2);
    puVar6 = PTR_DAT_005ad350;
    if (iVar14 == 0) {
      switch(*(uint *)(param_1 + 0x1f924)) {
      case 0:
        iVar7 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(param_1,param_2);
        if (iVar7 == 0) {
          iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          local_e0 = *(float *)(iVar7 + 0x20) - *(float *)(param_1 + 0x20);
          local_dc = *(float *)(iVar7 + 0x24) - *(float *)(param_1 + 0x24);
          local_d8 = *(float *)(iVar7 + 0x28) - *(float *)(param_1 + 0x28);
          if (((0.0 < *(float *)(param_1 + 0x1f570)) &&
              (*(float *)(param_1 + 0x1f570) <=
               SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc))) ||
             (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                                (0x01C03A10,param_1 + 0x1f574), puVar6 = PTR_DAT_005ad350,
             iVar7 == 0)) goto LAB_004b7672;
          *(uint *)(param_1 + 0x1f924) = 1;
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (puVar6,"%s rescued, entering follow mode\n",param_1);
          core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x1f5f8);
        }
        break;
      case 1:
        iVar7 = *(int *)(param_1 + 0x1f928);
        if ((iVar7 != 0) &&
           (fVar1 = *(float *)(param_1 + 0x20) - *(float *)(iVar7 + 0x20),
           fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iVar7 + 0x28),
           SQRT(fVar2 * fVar2 + fVar1 * fVar1) < (float)_DAT_00585c52)) {
          uVar10 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680
                             (param_1 + 0x20,iVar7);
          *(uint *)(param_1 + 0x1f930) = uVar10;
        }
        puVar6 = PTR_DAT_005ad350;
        if (*(int *)(param_1 + 0x1f930) == 0) {
          iVar7 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(param_1,param_2);
          if (iVar7 == 0) {
            iVar7 = FUN_0042af70(param_1,param_2);
            if (iVar7 == 0) {
              core_charactr_cpp_CCharacter_followActor_FUN_00428780
                        (param_1,*(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8),0x40a00000,
                         0x41200000,param_1 + 0x1f91c);
            }
            else {
              *(int *)(param_1 + 0x1f91c) = iVar7;
            }
            uVar8 = *(uint *)(param_1 + 0x1f91c);
            iVar7 = param_1 + 0x150;
            if (uVar8 < 2) {
              if (uVar8 != 1) goto LAB_004b7672;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar7,1,1);
            }
            else if (uVar8 < 3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar7,2,1);
            }
            else {
              if (uVar8 != 3) goto LAB_004b7672;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar7,0,1);
              puVar6 = PTR_DAT_005ad350;
              *(uint *)(param_1 + 0x1f924) = 2;
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (puVar6,"%s left behind!\n",param_1);
              core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x1f65c)
              ;
              *(uint *)(param_1 + 0x2dbc) = 0;
            }
          }
        }
        else {
          *(uint *)(param_1 + 0x1f924) = 3;
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (puVar6,"%s was led close enough, going home!\n",param_1);
          core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x1f788);
          *(uint *)(param_1 + 0x2dbc) = 0;
        }
        break;
      case 2:
        iVar14 = core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(param_1,param_2);
        if (iVar14 == 0) {
          core_charactr_cpp_CCharacter_followActor_FUN_00428780
                    (param_1,*(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8),0x40800000,0x41200000,
                     param_1 + 0x1f91c);
          uVar8 = *(uint *)(param_1 + 0x1f91c);
          local_50 = 0;
          if (uVar8 == 0) {
            uVar10 = 0;
LAB_004b794d:
            *(uint *)(param_1 + 0x1f924) = 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar7,uVar10,1);
          }
          else {
            if (uVar8 < 2) {
              uVar10 = 1;
              goto LAB_004b794d;
            }
            if (uVar8 == 2) {
              uVar10 = 2;
              goto LAB_004b794d;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
            if (local_50 == 0) break;
          }
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s was left behind, but now can follow again!\n",param_1);
          core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x1f6c0);
        }
        break;
      case 3:
        if (*(int *)(param_1 + 0x1f930) == 0) {
          *(uint *)(param_1 + 0x1f924) = 2;
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (puVar6,"%s doesn't know next waypoint going home.  Help me!\n",param_1);
        }
        else {
          core_charactr_cpp_CCharacter_followActor_FUN_00428780
                    (param_1,*(uint *)(param_1 + 0x1f930),0x3f800000,0xbf800000,
                     param_1 + 0x1f91c);
          switch(*(uint *)(param_1 + 0x1f91c)) {
          case 0:
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"%s reached waypoint %s!\n",param_1,
                       *(uint *)(param_1 + 0x1f930));
            puVar6 = PTR_DAT_005ad350;
            if (*(int *)(param_1 + 0x1f930) == *(int *)(param_1 + 0x1f928)) {
              *(uint *)(param_1 + 0x1f924) = 4;
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (puVar6,"%s rescued and taken home!\n",param_1);
              *(uint *)(param_1 + 0x1f930) = 0;
            }
            else {
              uVar10 = core_waypoint_cpp_CWayPoint_findNearestReachable_FUN_00552680
                                 (param_1 + 0x20,*(int *)(param_1 + 0x1f928));
              *(uint *)(param_1 + 0x1f930) = uVar10;
            }
            break;
          case 1:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar7,1,1);
            break;
          case 2:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar7,2,1);
            break;
          case 3:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar7,0,1);
            puVar6 = PTR_DAT_005ad350;
            *(uint *)(param_1 + 0x1f924) = 2;
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (puVar6,"%s got confused going home.  Help me!\n",param_1);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar7,0,1);
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x1f7ec);
            core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
                      (0x01C03A10,param_1 + 0x1f5d8,1);
            *(uint *)(param_1 + 0x1f924) = 4;
            *(uint *)(param_1 + 0x1f930) = 0;
          }
        }
        break;
      case 4:
        local_2c = 1;
        if (*(int *)(param_1 + 0x1f92c) != 0) {
          if (*(float *)(param_1 + 0x242c) < param_2 * (float)_DAT_00585c32) {
            *(float *)(param_1 + 0x242c) = param_2 * (float)_DAT_00585c32;
          }
          puVar12 = (uint *)
                    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                              (param_1,local_8c,*(int *)(param_1 + 0x1f92c) + 0x20);
          if ((uint *)(param_1 + 0x2414) != puVar12) {
            *(uint *)(param_1 + 0x2414) = *puVar12;
            *(uint *)(param_1 + 0x2418) = puVar12[1];
            *(uint *)(param_1 + 0x241c) = puVar12[2];
          }
          pfVar11 = (float *)(param_1 + 0x2414);
          local_a4 = *pfVar11;
          local_9c = *(float *)(param_1 + 0x241c);
          local_198 = SQRT(local_9c * local_9c + local_a4 * local_a4);
          local_a0 = 0;
          if (*(float *)(param_1 + 0x242c) < local_198) {
            local_30 = *(float *)(param_1 + 0x242c) / local_198;
            *pfVar11 = *pfVar11 * local_30;
            *(float *)(param_1 + 0x2418) = *(float *)(param_1 + 0x2418) * local_30;
            *(float *)(param_1 + 0x241c) = *(float *)(param_1 + 0x241c) * local_30;
          }
          local_34 = local_198;
          iVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                            (local_14c,param_1 + 0x2414);
          fVar1 = local_198 * (float)_DAT_00585c3a;
          *(uint *)(param_1 + 0x2410) = *(uint *)(iVar7 + 4);
          if (fVar1 < 1.0) {
            local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                        (*(float *)(*(int *)(param_1 + 0x1f92c) + 0x34) -
                                         *(float *)(param_1 + 0x34));
            local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                        (local_18 - *(float *)(param_1 + 0x2410));
            *(float *)(param_1 + 0x2410) = (1.0 - fVar1) * local_18 + *(float *)(param_1 + 0x2410);
          }
          local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                      (*(uint *)(param_1 + 0x2410));
          *(float *)(param_1 + 0x2410) = local_18;
          if ((local_198 < (float)_DAT_00585c42) &&
             (ABS(*(float *)(param_1 + 0x2410)) < (float)_DAT_00585c4a)) {
            if ((*(int *)(param_1 + 0x1f920) == 0) || (*(int *)(param_1 + 0x1f920) == 4)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
              *(uint *)(param_1 + 0x1f924) = 5;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,10,1);
            }
            core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x1f7ec);
            core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
                      (0x01C03A10,param_1 + 0x1f5d8,1);
            *(uint *)(param_1 + 0x1f92c) = 0;
          }
          local_3c = param_2 * (float)_DAT_00585c2a;
          local_40 = -local_3c;
          if (*(float *)(param_1 + 0x2410) < local_40) {
            *(float *)(param_1 + 0x2410) = local_40;
          }
          if (local_3c < *(float *)(param_1 + 0x2410)) {
            *(float *)(param_1 + 0x2410) = local_3c;
          }
        }
      }
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x25a8);
      if (uVar8 < 2) {
        if (uVar8 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
        }
        else {
LAB_004b7672:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
        }
      }
      else if (uVar8 < 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,2,1);
      }
      else {
        if (uVar8 != 3) goto LAB_004b7672;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
      }
    }
  }
  else {
    uVar10 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       (param_1,local_d4,*(int *)(param_1 + 0x2590) + 0x20);
    iVar7 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_c8,uVar10);
    local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar7 + 4));
    local_19c = local_18;
    if (local_18 < (float)_DAT_00585c5a) {
      local_19c = local_18 + _DAT_00585c62;
    }
    if ((float)_DAT_00585c6a < local_19c) {
      local_19c = local_19c + _DAT_00585c72;
    }
    local_38 = param_2 * (float)_DAT_00585c2a;
    local_44 = -local_38;
    if (local_19c < local_44) {
      local_19c = local_44;
    }
    if (local_38 < local_19c) {
      local_19c = local_38;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_19c;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
    iVar7 = *(int *)(param_1 + 0x2590);
    iVar14 = *(int *)(iVar7 + 0x14c);
    uVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                       (param_1 + 0x150,local_98,0);
    iVar7 = (**(code **)(iVar14 + 0x108))(iVar7,param_1,uVar10);
    if (iVar7 == 0) {
      *(uint *)(param_1 + 0x2590) = 0;
LAB_004b7534:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
    }
    else if (*(int *)(param_1 + 0x2590) == 0) goto LAB_004b7534;
    bVar13 = true;
    local_2c = 1;
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  }
switchD_004b7b39_default:
  if (((0.0 < *(float *)(param_1 + 0x2434)) && (*(int *)(param_1 + 0x1f920) == 1)) &&
     (iVar7 = core_actor_cpp_randomChance_FUN_0040dea0(param_2 * _DAT_00585c76), iVar7 != 0)) {
    uVar10 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                       (param_1 + 0x150,"Bip01 L Forearm",0);
    iVar7 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(uVar10);
    if (-1 < iVar7) {
      uVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                         (param_1 + 0x150,local_bc,iVar7);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_158,uVar10);
      local_11c = 0x40400000;
      local_118 = 0;
      local_114 = 0;
      core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,local_134,&local_11c);
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0(0x01C78C7C,local_158,local_134,0);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  if (local_2c == 0) {
    iVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    iVar7 = *(int *)(iVar7 + 0x24);
    if ((((iVar7 == 8) || (iVar7 == 0)) || ((iVar7 == 0xd || (iVar7 == 10)))) &&
       (*(int *)(param_1 + 0xdc) == 0)) {
      *(uint *)(param_1 + 0x2dcc) = 0;
      goto LAB_004b72a1;
    }
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)_DAT_00585c7a;
    local_104 = *(float *)(param_1 + 0x2420) * param_2;
    local_100 = *(float *)(param_1 + 0x2424) * param_2;
    local_fc = *(float *)(param_1 + 0x2428) * param_2;
    local_128 = local_104 + *(float *)(param_1 + 0x2414);
    local_124 = local_100 + *(float *)(param_1 + 0x2418);
    local_120 = local_fc + *(float *)(param_1 + 0x241c);
    local_b0 = local_128 + *(float *)(param_1 + 0x23a4);
    local_ac = local_124 + *(float *)(param_1 + 0x23a8);
    local_a8 = local_120 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    local_f8 = *(float *)(param_1 + 0x20);
    local_f4 = *(float *)(param_1 + 0x24);
    local_f0 = *(float *)(param_1 + 0x28);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_b0);
    *(float *)(param_1 + 0x2dcc) = *(float *)(param_1 + 0x2dcc) + param_2;
    if (((double)param_2 * _DAT_00585c82 <=
         SQRT((double)local_a8 * (double)local_a8 +
              (double)local_b0 * (double)local_b0 + (double)local_ac * (double)local_ac)) &&
       (dVar3 = (double)*(float *)(param_1 + 0x20) - (double)local_f8,
       dVar4 = (double)*(float *)(param_1 + 0x24) - (double)local_f4,
       dVar5 = (double)*(float *)(param_1 + 0x28) - (double)local_f0,
       SQRT(dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3) <= (double)param_2 * _DAT_00585c8a))
    goto LAB_004b72a1;
  }
  else {
    pfVar11 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                 (param_1,local_80,param_1 + 0x2414);
    *(float *)(param_1 + 0x20) = *pfVar11 + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = pfVar11[1] + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = pfVar11[2] + *(float *)(param_1 + 0x28);
  }
  *(uint *)(param_1 + 0x2dcc) = 0;
LAB_004b72a1:
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  if (*(int *)(param_1 + 0x1f920) == 1) {
    local_48 = 0.5;
    local_54 = 0.75;
    iVar7 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(param_1 + 0x24f0),_DAT_02ddf9a8);
    local_4c = 0;
    if (((iVar7 != 0) &&
        (local_18 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                     (param_1 + 0x150,0x10), local_18 <= 0.0)) || (local_4c != 0)) {
      fVar1 = param_2 / local_48 + *(float *)(param_1 + 0x1f94c);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x1f94c) - param_2 / local_48;
    }
    *(float *)(param_1 + 0x1f94c) = fVar1;
    if (0.0 < *(float *)(param_1 + 0x1f94c)) {
      if (1.0 < *(float *)(param_1 + 0x1f94c)) {
        *(uint *)(param_1 + 0x1f94c) = 0x3f800000;
      }
      iVar7 = param_1 + 0x150;
      local_58 = (float)core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                                  (iVar7,_DAT_01cae1a0,
                                   *(float *)(param_1 + 0x1f948) * (float)_DAT_00585c92 +
                                   (float)_DAT_00585c9a);
      local_18 = local_58;
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                (iVar7,_DAT_01cae1a0,local_58,*(uint *)(param_1 + 0x1f94c),
                 *(uint *)(param_1 + 0x1f934),&LAB_0051b650);
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
                (iVar7,_DAT_01cae1a0,local_58,*(uint *)(param_1 + 0x1f94c),
                 *(uint *)(param_1 + 0x1f938),&LAB_0051b650);
      if (((1.0 <= *(float *)(param_1 + 0x1f94c)) && (0.0 < *(float *)(param_1 + 0x1f948))) &&
         (fVar1 = param_2 / local_54 + *(float *)(param_1 + 0x1f948),
         *(float *)(param_1 + 0x1f948) = fVar1, 1.0 < fVar1)) {
        *(uint *)(param_1 + 0x1f948) = 0x3f800000;
      }
    }
    else {
      *(uint *)(param_1 + 0x1f948) = 0;
      *(uint *)(param_1 + 0x1f94c) = 0;
    }
  }
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429730(param_1,param_2,bVar13);
  FUN_0042a150(param_1,param_2);
  if ((1.0 <= *(float *)(param_1 + 0x1f948)) &&
     (iVar7 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(param_1 + 0x24f0),_DAT_02ddf9a8), iVar7 != 0)) {
    uVar10 = *(uint *)(iVar7 + 0x564);
    *(uint *)(iVar7 + 0x564) = 6;
    (**(code **)(*(int *)(iVar7 + 0x14c) + 0xdc))(iVar7);
    *(uint *)(iVar7 + 0x564) = uVar10;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xc,1);
    *(uint *)(param_1 + 0x1f94c) = 0;
    *(uint *)(param_1 + 0x1f948) = 0;
  }
  if (((*(int *)(param_1 + 0x1f920) == 1) &&
      (iVar7 = core_actor_cpp_castToClassHash_FUN_0040d890
                         (*(uint *)(param_1 + 0x24f0),_DAT_02ddf9a8), iVar7 != 0)) &&
     (iVar7 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,"deputeFireShotgun"), iVar7 != 0)) {
    *(uint *)(param_1 + 0x1f948) = 0x3c23d70a;
    return;
  }
  return;
}
