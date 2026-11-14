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
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  float in_stack_ffffffec;
  
  iVar5 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Setting up actors");
  core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,pcVar1,iVar5);
  core_skeleton_cpp_clearModelAndSkeletonInUseFlags_FUN_00549180();
  iVar5 = 0;
  for (pCVar3 = this_ptr->first_actor; pCVar3 != (CDemonActor *)0x0; pCVar3 = pCVar3->next_actor) {
    iVar5 = iVar5 + 1;
    (*((pCVar3->vtable)._ub)->process)(pCVar3,in_stack_ffffffec);
  }
  if (this_ptr->is_in_editor == 0) {
    core_skeleton_cpp_freeUnusedModelsAndSkeletons_FUN_005491b0();
  }
  pCVar3 = this_ptr->first_actor;
  iVar4 = 0;
  if (pCVar3 != (CDemonActor *)0x0) {
    iVar2 = iVar5 * 3 >> 0x1f;
    iVar2 = (int)((iVar5 * 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    do {
      iVar4 = iVar4 + 1;
      (*((pCVar3->vtable)._ub)->setup)(pCVar3);
      if (iVar4 == (int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)) >> 2) {
        iVar2 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,pcVar1,iVar2);
      }
      if (iVar4 == iVar5 / 2) {
        iVar2 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,pcVar1,iVar2);
      }
      if (iVar4 == iVar2) {
        iVar2 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,pcVar1,iVar2);
      }
      pCVar3 = pCVar3->next_actor;
    } while (pCVar3 != (CDemonActor *)0x0);
  }
  this_ptr->prepared_set_index = this_ptr->current_set_index;
  return;
}
