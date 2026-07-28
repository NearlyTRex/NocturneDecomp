// Name: core_mission.cpp_CDemonMission_prepareAllActors_FUN_004d8db0
// Address: 004d8db0
// Address Range: [[004d8db0, 004d8ed5]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(CDemonMission *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Setting up actors");
  core_level_cpp_CLevelLoader_update_FUN_004c59e0((CLevelLoader *)INT_005baca0,pcVar1,iVar5);
  for (iVar5 = *(int *)(this_ptr->set_names[3] + 0xcc); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x144))
  {
    iVar4 = iVar4 + 1;
  }
  iVar5 = *(int *)(this_ptr->set_names[3] + 0xcc);
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar2 = iVar4 * 3 >> 0x1f;
    do {
      iVar3 = iVar3 + 1;
      (*(code *)**(uint **)(iVar5 + 0x14c))(iVar5);
      if (iVar3 == (int)((iVar4 + (iVar4 >> 0x1f) * -4) - (uint)((iVar4 >> 0x1f) << 1 < 0)) >> 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004c59e0((CLevelLoader *)INT_005baca0,pcVar1,iVar6);
      }
      if (iVar3 == iVar4 / 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004c59e0((CLevelLoader *)INT_005baca0,pcVar1,iVar6);
      }
      if (iVar3 == (int)((iVar4 * 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004c59e0((CLevelLoader *)INT_005baca0,pcVar1,iVar6);
      }
      iVar5 = *(int *)(iVar5 + 0x144);
    } while (iVar5 != 0);
  }
  this_ptr->delete_queue_flags[0x57] = 1;
  return;
}
