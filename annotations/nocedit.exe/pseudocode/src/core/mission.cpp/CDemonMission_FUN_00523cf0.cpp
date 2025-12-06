// Name: core_mission.cpp_CDemonMission_FUN_00523cf0
// Address: 00523cf0
// Address Range: [[00523cf0, 00523e5a]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00523cf0(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00523cf0(CDemonMission *this_ptr)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  CDemonActor *this_ptr_00;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  int in_stack_00000010;
  
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x335);
  iVar5 = 0;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar1,unaff_EBP);
  for (iVar4 = *(int *)(in_stack_00000010 + 0x548); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14c)) {
    iVar5 = iVar5 + 1;
  }
  this_ptr_00 = *(CDemonActor **)(in_stack_00000010 + 0x548);
  iVar4 = 0;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    iVar3 = iVar5 * 3 >> 0x1f;
    do {
      pcVar1 = "..\\core\\mission.cpp";
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (this_ptr_00,"..\\core\\mission.cpp",0x33f);
      iVar4 = iVar4 + 1;
      (*this_ptr_00->vtable->setup)(this_ptr_00);
      if (iVar4 == (int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)) >> 2) {
        pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar2,(int)pcVar1);
      }
      if (iVar4 == iVar5 / 2) {
        pcVar2 = "Setting up actors";
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar1,(int)pcVar2);
      }
      if (iVar4 == (int)((iVar5 * 3 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2) {
        pcVar2 = "Setting up actors";
        pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Setting up actors");
        core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar1,(int)pcVar2);
      }
      this_ptr_00 = this_ptr_00->next_actor;
    } while (this_ptr_00 != (CDemonActor *)0x0);
  }
  *(uint *)(in_stack_00000010 + 0x884) = 1;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x350);
  return;
}
