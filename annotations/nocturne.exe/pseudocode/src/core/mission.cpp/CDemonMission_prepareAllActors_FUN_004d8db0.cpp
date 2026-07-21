// Name: core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0
// Address: 004d8db0
// Address Range: [[004d8db0, 004d8ed5]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(int param_1)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Setting up actors",0);
  core_level_cpp_CLevelLoader_update_FUN_004c59e0(0x01CC3160,uVar1);
  for (iVar3 = *(int *)(param_1 + 0x514); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x144)) {
    iVar5 = iVar5 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x514);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar5 * 3 >> 0x1f;
    do {
      iVar4 = iVar4 + 1;
      (*(code *)**(uint **)(iVar3 + 0x14c))(iVar3);
      if (iVar4 == (int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)) >> 2) {
        uVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Setting up actors",0);
        core_level_cpp_CLevelLoader_update_FUN_004c59e0(0x01CC3160,uVar1);
      }
      if (iVar4 == iVar5 / 2) {
        uVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Setting up actors",0);
        core_level_cpp_CLevelLoader_update_FUN_004c59e0(0x01CC3160,uVar1);
      }
      if (iVar4 == (int)((iVar5 * 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) {
        uVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Setting up actors",0);
        core_level_cpp_CLevelLoader_update_FUN_004c59e0(0x01CC3160,uVar1);
      }
      iVar3 = *(int *)(iVar3 + 0x144);
    } while (iVar3 != 0);
  }
  *(uint *)(param_1 + 0x850) = 1;
  return;
}
