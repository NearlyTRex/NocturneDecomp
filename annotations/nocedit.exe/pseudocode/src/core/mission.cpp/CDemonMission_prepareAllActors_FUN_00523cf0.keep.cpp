// Name: core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0
// Address: 00523cf0
// MANUAL RECONSTRUCTION
// Address Range: [[00523cf0, 00523e5a]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  char *pcVar1;
  char *pcVar2;
  CDemonActor *pCVar3;
  int iVar3;
  int iVar4;
  int iVar7;
  int iVar6;
  int iVar5;
  
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x335);
  iVar4 = 0;
  iVar5 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar1,iVar5);
  for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0; pCVar1 = pCVar1->next_actor) {
    iVar4 = iVar4 + 1;
  }
  pCVar3 = this_ptr->first_actor;
  iVar3 = 0;
  if (pCVar3 != (CDemonActor *)0x0) {
    do {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (pCVar3,"..\\core\\mission.cpp",0x33f);
      iVar3 = iVar3 + 1;
      (*((pCVar3->vtable)._ub)->setup)(pCVar3);
      if (iVar3 == iVar4 / 4) {
        iVar6 = 0;
        pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar2,iVar6);
      }
      if (iVar3 == iVar4 / 2) {
        iVar7 = 0;
        pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar2,iVar7);
      }
      if (iVar3 == iVar4 * 3 / 4) {
        iVar7 = 0;
        pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar2,iVar7);
      }
      pCVar3 = pCVar3->next_actor;
    } while (pCVar3 != (CDemonActor *)0x0);
  }
  this_ptr->actors_prepared = 1;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x350);
  return;
}
