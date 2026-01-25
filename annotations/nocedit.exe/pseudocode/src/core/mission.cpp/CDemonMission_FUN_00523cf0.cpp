// Name: core_mission.cpp_CDemonMission_FUN_00523cf0
// Address: 00523cf0
// Address Range: [[00523cf0, 00523e5a]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00523cf0(CDemonMission *this_ptr)

{
  char *pcVar1;
  int iVar2;
  CDemonActor *pCVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  int iVar6;
  
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x335);
  iVar4 = 0;
  iVar5 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar1,iVar5);
  for (pCVar3 = this_ptr->first_actor; pCVar3 != (CDemonActor *)0x0; pCVar3 = pCVar3->next_actor) {
    iVar4 = iVar4 + 1;
  }
  pCVar3 = this_ptr->first_actor;
  iVar5 = 0;
  if (pCVar3 != (CDemonActor *)0x0) {
    iVar2 = iVar4 * 3 >> 0x1f;
    do {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (pCVar3,"..\\core\\mission.cpp",0x33f);
      iVar5 = iVar5 + 1;
      (*((pCVar3->vtable)._ub)->setup)(pCVar3);
      if (iVar5 == (int)((iVar4 + (iVar4 >> 0x1f) * -4) - (uint)((iVar4 >> 0x1f) << 1 < 0)) >> 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar1,iVar6);
      }
      if (iVar5 == unaff_EBP) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar1,iVar6);
      }
      if (iVar5 == (int)((iVar4 * 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) {
        iVar6 = 0;
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar1,iVar6);
      }
      pCVar3 = pCVar3->next_actor;
    } while (pCVar3 != (CDemonActor *)0x0);
  }
  this_ptr->field6_0x54c[0x338] = '\x01';
  this_ptr->field6_0x54c[0x339] = '\0';
  this_ptr->field6_0x54c[0x33a] = '\0';
  this_ptr->field6_0x54c[0x33b] = '\0';
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x350);
  return;
}
