// Name: core_mission.cpp_CDemonMission_prepareAllActors_FUN_0051b2b0
// Address: 0051b2b0
// Address Range: [[0051b2b0, 0051b415]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_0051b2b0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_0051b2b0(CDemonMission *this_ptr)

{
  char *pcVar1;
  int iVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Setting up actors");
  core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,pcVar1,iVar5);
  core_skeleton_cpp_FUN_0056b830();
  iVar5 = 0;
  for (pCVar3 = this_ptr->first_actor; pCVar3 != (CDemonActor *)0x0; pCVar3 = pCVar3->next_actor) {
    iVar5 = iVar5 + 1;
    (*((pCVar3->vtable)._ub)->markResourcesInUse)(pCVar3);
  }
  if (this_ptr->is_in_editor == 0) {
    core_skeleton_cpp_FUN_0056b860();
  }
  pCVar3 = this_ptr->first_actor;
  iVar4 = 0;
  if (pCVar3 != (CDemonActor *)0x0) {
    iVar2 = iVar5 * 3 >> 0x1f;
    do {
      iVar4 = iVar4 + 1;
      (*((pCVar3->vtable)._ub)->setup)(pCVar3);
      if (iVar4 == (int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)) >> 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,pcVar1,iVar6);
      }
      if (iVar4 == iVar5 / 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,pcVar1,iVar6);
      }
      if (iVar4 == (int)((iVar5 * 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,pcVar1,iVar6);
      }
      pCVar3 = pCVar3->next_actor;
    } while (pCVar3 != (CDemonActor *)0x0);
  }
  this_ptr->prepared_set_index = this_ptr->current_set_index;
  return;
}
