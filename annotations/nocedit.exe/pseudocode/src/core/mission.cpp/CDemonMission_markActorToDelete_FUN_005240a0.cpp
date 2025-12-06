// Name: core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
// Address: 005240a0
// Address Range: [[005240a0, 0052411b]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (in_stack_00000008,"..\\core\\mission.cpp",0x403);
  *(uint *)(this_ptr->field6_0x54c + *(int *)(this_ptr->field6_0x54c + 0x14) * 4 + 0x18) =
       in_stack_0000000c;
  *(uint *)(this_ptr->field6_0x54c + *(int *)(this_ptr->field6_0x54c + 0x14) * 4 + 0x1a8) =
       in_stack_00000010;
  iVar1 = *(int *)(this_ptr->field6_0x54c + 0x14) + 1;
  *(int *)(this_ptr->field6_0x54c + 0x14) = iVar1;
  if (iVar1 < 100) {
    return;
  }
  g_CurrentFilename = "..\\core\\mission.cpp";
  g_CurrentLineNumber = 0x408;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::markActorToDelete - Too many of them!");
  return;
}
