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
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Setting up actors");
  core_level_cpp_CLevelLoader_update_FUN_004c59e0(g_CLevelLoader_PTR_005baca0,pcVar1,iVar5);
  for (pCVar3 = this_ptr->first_actor; pCVar3 != (CDemonActor *)0x0; pCVar3 = pCVar3->next_actor) {
    iVar4 = iVar4 + 1;
  }
  pCVar3 = this_ptr->first_actor;
  iVar5 = 0;
  if (pCVar3 != (CDemonActor *)0x0) {
    iVar2 = iVar4 * 3 >> 0x1f;
    do {
      iVar5 = iVar5 + 1;
      (*((pCVar3->vtable)._ub)->setup)(pCVar3);
      if (iVar5 == (int)((iVar4 + (iVar4 >> 0x1f) * -4) - (uint)((iVar4 >> 0x1f) << 1 < 0)) >> 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004c59e0(g_CLevelLoader_PTR_005baca0,pcVar1,iVar6);
      }
      if (iVar5 == iVar4 / 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004c59e0(g_CLevelLoader_PTR_005baca0,pcVar1,iVar6);
      }
      if (iVar5 == (int)((iVar4 * 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004c59e0(g_CLevelLoader_PTR_005baca0,pcVar1,iVar6);
      }
      pCVar3 = pCVar3->next_actor;
    } while (pCVar3 != (CDemonActor *)0x0);
  }
  this_ptr->actors_prepared = 1;
  return;
}
