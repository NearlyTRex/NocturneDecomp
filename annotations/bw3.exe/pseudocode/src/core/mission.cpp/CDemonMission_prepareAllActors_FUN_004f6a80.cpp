// Name: core_mission.cpp_CDemonMission_prepareAllActors_FUN_004f6a80
// Address: 004f6a80
// Address Range: [[004f6a80, 004f6be5]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_004f6a80(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_004f6a80(CDemonMission *this_ptr)

{
  char *pcVar1;
  int iVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Setting up actors");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar1,uVar6);
  core_skeleton_cpp_clearModelAndSkeletonInUseFlags_FUN_005503c0();
  iVar5 = 0;
  for (pCVar3 = this_ptr->first_actor; pCVar3 != (CDemonActor *)0x0; pCVar3 = pCVar3->next_actor) {
    iVar5 = iVar5 + 1;
    (*((pCVar3->vtable)._ub)->markResourcesInUse)(pCVar3);
  }
  if (this_ptr->is_in_editor == 0) {
    core_skeleton_cpp_freeUnusedModelsAndSkeletons_FUN_005503f0();
  }
  pCVar3 = this_ptr->first_actor;
  iVar4 = 0;
  if (pCVar3 != (CDemonActor *)0x0) {
    iVar2 = iVar5 * 3 >> 0x1f;
    do {
      iVar4 = iVar4 + 1;
      (*((pCVar3->vtable)._ub)->setup)(pCVar3);
      if (iVar4 == (int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)) >> 2) {
        uVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Setting up actors");
        core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar1,uVar6);
      }
      if (iVar4 == iVar5 / 2) {
        uVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Setting up actors");
        core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar1,uVar6);
      }
      if (iVar4 == (int)((iVar5 * 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) {
        uVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Setting up actors");
        core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar1,uVar6);
      }
      pCVar3 = pCVar3->next_actor;
    } while (pCVar3 != (CDemonActor *)0x0);
  }
  this_ptr->prepared_set_index = this_ptr->current_set_index;
  return;
}
