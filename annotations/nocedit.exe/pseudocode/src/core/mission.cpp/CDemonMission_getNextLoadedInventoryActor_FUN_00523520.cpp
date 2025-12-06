// Name: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520
// Address: 00523520
// Address Range: [[00523520, 005235ae]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520(CDemonMission * this_ptr)

#include "nocturne.h"

void __cdecl
core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520(CDemonMission *this_ptr)

{
  int iVar1;
  char *in_stack_0000000c;
  
  if (*(int *)(this_ptr->field6_0x54c + 0x33c) == 0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x186;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::getNextLoadedInventoryActor - no more!");
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                    (*(char **)(this_ptr->field6_0x54c + 0x33c),in_stack_0000000c);
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x18b;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDemonMission::getNextLoadedInventoryActor - requested %s, but next actor was %s!",in_stack_0000000c,
               *(uint *)(this_ptr->field6_0x54c + 0x33c));
  }
  *(uint *)(this_ptr->field6_0x54c + 0x33c) =
       *(uint *)(*(int *)(this_ptr->field6_0x54c + 0x33c) + 0x14c);
  return;
}
