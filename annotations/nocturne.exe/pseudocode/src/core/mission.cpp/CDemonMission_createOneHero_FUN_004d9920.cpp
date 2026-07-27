// Name: core_mission.cpp_CDemonMission_createOneHero_FUN_004d9920
// Address: 004d9920
// Address Range: [[004d9920, 004d9a7e]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004d9920(int param_1,int param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004d9920(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  if (_DAT_01cae0d4 <= param_2) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0x5f3;
    core_main_c_FUN_004c8440("CDemonMission::createOneHero - too many heros!");
  }
  if (*(int *)(param_2 * 4 + 0x1cae0d8) != 0) {
    PTR_01cc4800 = "..\\core\\mission.cpp";
    INT_01cc4804 = 0x5f4;
    core_main_c_FUN_004c8440("CDemonMission::createOneHero - hero already created!");
  }
  iVar1 = *(int *)(param_1 + 0x514);
  local_14 = 0;
  do {
    if (iVar1 == 0) {
LAB_004d999a:
      if (local_14 == 0) {
        shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"Can't find hero placeholder for hero %d",param_2);
        return 0;
      }
      *(int *)(param_2 * 4 + 0x1cae0d8) = local_14;
      return 1;
    }
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (iVar1,g_CHeroPlaceholderActorType_01cae128.name_hash);
    if ((iVar2 != 0) && (param_2 == *(int *)(iVar2 + 0x150))) {
      if (param_4 == 0) {
        local_14 = core_hero_cpp_CHeroPlaceholder_createHero_FUN_004b6080(iVar2,param_3);
      }
      else {
        local_14 = param_4;
        (**(code **)(*(int *)(param_4 + 0x14c) + 0x60))(param_4,iVar2 + 0x20,iVar2 + 0x30);
        *(uint *)(param_4 + 0x2c) = *(uint *)(iVar2 + 0x2c);
        core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990(param_4 + 0x150,0,0);
        (**(code **)(*(int *)(param_4 + 0x14c) + 0x128))(param_4,0,0,0);
      }
      core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(0x01CC9450,local_14);
      goto LAB_004d999a;
    }
    iVar1 = *(int *)(iVar1 + 0x144);
  } while( true );
}
