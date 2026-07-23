// Name: core_stranger.cpp_CStranger_processMotionEvents_FUN_00537cd0
// Address: 00537cd0
// Address Range: [[00537cd0, 005383d8]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processMotionEvents_FUN_00537cd0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_processMotionEvents_FUN_00537cd0(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  float10 fVar7;
  byte local_b0 [4];
  float local_ac;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_7c;
  int local_78;
  byte local_74 [12];
  byte auStack_68 [12];
  byte local_5c [12];
  byte local_50 [12];
  byte local_44 [8];
  byte auStack_3c [4];
  byte local_38 [12];
  byte auStack_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  iVar1 = param_1 + 0x150;
  local_1c = param_1 + 0x1fa2c;
  local_20 = param_1 + 0x1fa20;
  do {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar1,&param_2);
    if (uVar2 < 0x12) {
      if (uVar2 < 6) {
        if (uVar2 < 2) {
          if (uVar2 == 1) {
LAB_00537d35:
            uVar3 = _DAT_02dc9f6c;
            if (uVar2 == 7) {
              uVar3 = _DAT_02dc9f70;
            }
            core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                      (iVar1,local_5c,uVar3);
            iVar4 = *(int *)(param_1 + 0x1fa14);
            if (iVar4 == 0) {
              if (*(int *)(param_1 + 0x1fa90) == 0) {
                if (*(int *)(param_1 + 0x2408) != 0) {
                  local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                              (iVar1,3);
                  if ((float)0.40000000000000002 < local_14) {
                    (**(code **)(*(int *)(param_1 + 0x14c) + 0x1c))(param_1,local_5c,0x3fd9999a);
                  }
                  else {
                    local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                                (iVar1,1);
                    if (local_14 <= (float)0.40000000000000002) {
                      local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                                  (iVar1,2);
                      if ((float)0.40000000000000002 < local_14) {
                        (**(code **)(*(int *)(param_1 + 0x14c) + 0x1c))(param_1,local_5c,0x3f800000)
                        ;
                      }
                    }
                    else {
                      (**(code **)(*(int *)(param_1 + 0x14c) + 0x1c))(param_1,local_5c,0x3f800000);
                    }
                  }
                }
              }
              else {
                iVar4 = *(int *)(param_1 + 0x14c);
                uVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1fa90) + 0x14c) + 0x3c))
                                  (*(int *)(param_1 + 0x1fa90),0x3f800000);
                uVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                  (param_1,auStack_2c,local_5c,uVar3);
                (**(code **)(iVar4 + 0x20))(param_1,uVar3);
              }
            }
            else {
              local_14 = *(float *)(param_1 + 0x14c);
              uVar3 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x3c))(iVar4,0x3f800000);
              uVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                (param_1,auStack_68,local_5c,uVar3);
              (**(code **)((int)local_14 + 0x20))(param_1,uVar3);
            }
          }
          else {
LAB_005383ca:
            core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar2);
          }
        }
        else if (uVar2 < 3) {
          if (*(int *)(param_1 + 0x1faa0) == 4) {
            *(uint *)(param_1 + 0x1faa0) = 0;
          }
          else {
            FUN_0046fb40(0x01BCD074,"actionPending = %d\nstranger.cpp line %d",
                         *(int *)(param_1 + 0x1faa0),0x77c);
          }
          iVar4 = *(int *)(param_1 + 0x1fa08);
          if (iVar4 == 0) {
            FUN_0046fb40(0x01BCD074,"Object to pick up is now NULL\nstranger.cpp line %d",0x782);
          }
          else {
            iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x7c))(iVar4,param_1);
            if (iVar4 == 0) {
              *(uint *)(param_1 + 0x1fa08) = 0;
            }
            else {
              iVar5 = *(int *)(param_1 + 0x1fa08);
              if ((iVar5 != 0) &&
                 (iVar5 = (**(code **)(*(int *)(iVar5 + 0x14c) + 0x7c))(iVar5,param_1), iVar5 == 4))
              {
                *(uint *)(param_1 + 0x2a88) = 0;
                *(uint *)(param_1 + 0x2a84) = 0xe;
              }
              if (iVar4 == 2) {
                if (*(int *)(param_1 + 0x1faa0) != 0) {
                  FUN_0046fb40(0x01BCD074,"actionPending = %d\nstranger.cpp line %d",
                               *(int *)(param_1 + 0x1faa0),0x7a0);
                }
                *(uint *)(param_1 + 0x1faa0) = 1;
              }
              core_hero_cpp_CHero_executeObjectPickup_FUN_004b5c30(param_1,1);
            }
          }
        }
        else {
          if (uVar2 != 3) goto LAB_005383ca;
          iVar4 = *(int *)(param_1 + 0x24f0);
          core_stranger_cpp_CStranger_dropRightHandObject_FUN_0053bf30(param_1);
          iVar5 = *(int *)(param_1 + 0x1faa0);
          if (iVar5 == 2) {
            if (iVar4 != 0) {
              (**(code **)(*(int *)(iVar4 + 0x14c) + 0x60))(iVar4,local_20,local_1c);
            }
LAB_00537df4:
            *(uint *)(param_1 + 0x1faa0) = 0;
          }
          else {
            if (iVar5 == 6) goto LAB_00537df4;
            FUN_0046fb40(0x01BCD074,"actionPending = %d\nstranger.cpp line %d",iVar5,0x75e);
          }
          *(uint *)(param_1 + 0x1fa1c) = 0;
          if (*(int *)(param_1 + 0x2a84) == 0xe) {
            *(uint *)(param_1 + 0x2a88) = 0;
            *(uint *)(param_1 + 0x2a84) = 0;
          }
          if (iVar4 == *(int *)(param_1 + 0x1fa94)) {
            *(uint *)(param_1 + 0x1fa94) = 0;
          }
        }
      }
      else if (uVar2 < 7) {
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(param_1 + 0x2590),_DAT_01bcdef4);
        local_18 = iVar4;
        if (iVar4 != 0) {
          uVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                            (iVar1,local_44,_DAT_02dc9f80);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_38,uVar3);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_b0);
          local_ac = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0x41200000,0x41700000);
          local_14 = local_ac;
          puVar6 = (uint *)
                   core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                             (iVar4,local_50,local_38);
          if (&local_94 != puVar6) {
            local_94 = *puVar6;
            local_90 = puVar6[1];
            local_8c = puVar6[2];
          }
          local_7c = param_1;
          local_78 = param_1;
          (**(code **)(*(int *)(local_18 + 0x14c) + 0x100))(local_18,local_b0);
          if (0.0 < local_ac) {
            uVar3 = 0x5381d5;
            fVar7 = (float10)round
                                       ((float10)local_ac * (float10)0.20000000000000001);
            local_18 = (int)ROUND(fVar7);
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                      (0x01C78C7C,auStack_3c,0,local_18 + 1,0,uVar3);
            (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"kick1.wav");
          }
        }
        *(uint *)(param_1 + 0x2590) = 0;
      }
      else if (uVar2 < 0xf) {
        if (uVar2 == 7) goto LAB_00537d35;
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar2);
      }
      else if (uVar2 < 0x10) {
        if ((*(int *)(param_1 + 0x2590) != 0) &&
           (iVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                              (param_1,local_74,*(int *)(param_1 + 0x2590) + 0x20),
           0.0 < *(float *)(iVar4 + 8))) {
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"hit-gh[4,7].wav");
        }
      }
      else if (uVar2 == 0x11) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"fall-1.wav");
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar2);
      }
    }
    else if (0x12 < uVar2) {
      if (uVar2 < 0x17) {
        if (uVar2 < 0x15) {
          if (uVar2 != 0x13) goto LAB_005383ca;
          core_stranger_cpp_CStranger_processPickupComplete_FUN_0053beb0(param_1);
        }
        else if (uVar2 < 0x16) {
          if (*(int *)(param_1 + 0x24f0) == *(int *)(param_1 + 0x1fa94)) {
            *(uint *)(param_1 + 0x1fa94) = 0;
          }
          core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004b5c70(param_1,1);
          if (*(int *)(param_1 + 0x1faa0) == 1) {
            *(uint *)(param_1 + 0x1faa0) = 0;
          }
          else {
            FUN_0046fb40(0x01BCD074,"actionPending = %d\nstranger.cpp line %d",
                         *(int *)(param_1 + 0x1faa0),0x7c0);
          }
        }
        else {
          if (*(int *)(param_1 + 0x1faa0) == 5) {
            *(uint *)(param_1 + 0x1faa0) = 0;
          }
          else {
            FUN_0046fb40(0x01BCD074,"actionPending = %d\nstranger.cpp line %d",
                         *(int *)(param_1 + 0x1faa0),0x813);
          }
          if (*(int *)(param_1 + 0x1fa04) == 0) {
            FUN_0046fb40(0x01BCD074,"doorToOpen == NULL\nstranger.cpp line %d",0x819);
          }
          iVar4 = FUN_004b5270(param_1);
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar1,0,1);
          }
        }
      }
      else if (uVar2 < 0x18) {
        core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(param_1);
      }
      else if (uVar2 < 0x29a) {
        if (uVar2 != 0x18) goto LAB_005383ca;
      }
      else if (uVar2 < 0x29b) {
        *(float *)(param_1 + 0x2424) = 10.0f;
      }
      else {
        if (uVar2 != 0x29b) goto LAB_005383ca;
        *(float *)(param_1 + 0x2424) = 8.0f;
      }
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
