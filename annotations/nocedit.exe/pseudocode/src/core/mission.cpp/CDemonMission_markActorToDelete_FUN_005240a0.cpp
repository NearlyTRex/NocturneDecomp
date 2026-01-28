// Name: core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
// Address: 005240a0
// Address Range: [[005240a0, 0052411b]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  uint in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (in_stack_00000008,"..\\core\\mission.cpp",0x403);
  *(CDemonActor **)(this_ptr->unk4 + *(int *)(this_ptr->unk4 + 0x14) * 4 + 0x18) = in_stack_00000008
  ;
  *(uint *)(this_ptr->unk4 + *(int *)(this_ptr->unk4 + 0x14) * 4 + 0x1a8) = in_stack_0000000c;
  iVar1 = *(int *)(this_ptr->unk4 + 0x14) + 1;
  *(int *)(this_ptr->unk4 + 0x14) = iVar1;
  if (iVar1 < 100) {
    return;
  }
  g_CurrentFilename = "..\\core\\mission.cpp";
  g_CurrentLineNumber = 0x408;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::markActorToDelete - Too many of them!");
  return;
}
