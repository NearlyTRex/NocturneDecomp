// Name: core_mission.cpp_CDemonMission_prepareAllActors_FUN_004fc350
// Address: 004fc350
// Address Range: [[004fc350, 004fc4b6]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_004fc350(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_004fc350(CDemonMission *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Setting up actors");
  core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,pcVar1,iVar5);
  core_skeleton_cpp_FUN_00549180();
  iVar4 = 0;
  for (iVar5 = *(int *)(this_ptr + 0x1114); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14c)) {
    iVar4 = iVar4 + 1;
    (**(code **)(*(int *)(iVar5 + 0x2b0) + 0xc))(iVar5);
  }
  if (*(int *)(this_ptr + 0x1008) == 0) {
    core_skeleton_cpp_FUN_005491b0();
  }
  iVar5 = *(int *)(this_ptr + 0x1114);
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar2 = iVar4 * 3 >> 0x1f;
    do {
      iVar3 = iVar3 + 1;
      (**(code **)(*(int *)(iVar5 + 0x2b0) + 8))(iVar5);
      if (iVar3 == (int)((iVar4 + (iVar4 >> 0x1f) * -4) - (uint)((iVar4 >> 0x1f) << 1 < 0)) >> 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,pcVar1,iVar6);
      }
      if (iVar3 == iVar4 / 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,pcVar1,iVar6);
      }
      if (iVar3 == (int)((iVar4 * 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,pcVar1,iVar6);
      }
      iVar5 = *(int *)(iVar5 + 0x14c);
    } while (iVar5 != 0);
  }
  *(uint *)(this_ptr + 0x1450) = *(uint *)this_ptr;
  return;
}
