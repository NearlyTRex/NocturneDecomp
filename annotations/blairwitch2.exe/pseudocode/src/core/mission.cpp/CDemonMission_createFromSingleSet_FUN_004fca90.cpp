// Name: core_mission.cpp_CDemonMission_createFromSingleSet_FUN_004fca90
// Address: 004fca90
// Address Range: [[004fca90, 004fcafa]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_createFromSingleSet_FUN_004fca90(CDemonMission *this_ptr,char *set_name)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_createFromSingleSet_FUN_004fca90(CDemonMission *this_ptr,char *set_name)

{
  CDemonMission CVar1;
  CDemonMission *pCVar2;
  
  pCVar2 = this_ptr + 8;
  *(uint *)(this_ptr + 4) = 1;
  do {
    CVar1 = (CDemonMission)*set_name;
    *pCVar2 = CVar1;
    if (CVar1 == (CDemonMission)0x0) break;
    CVar1 = *(CDemonMission *)(set_name + 1);
    set_name = set_name + 2;
    pCVar2[1] = CVar1;
    pCVar2 = pCVar2 + 2;
  } while (CVar1 != (CDemonMission)0x0);
  *(uint *)this_ptr = 0;
  core_mission_cpp_CDemonMission_removeAllActors_FUN_004fc640(this_ptr);
  core_script_cpp_FUN_00521630(g_CScriptPtr);
  core_mission_cpp_CDemonMission_prepareAllActors_FUN_004fc350(this_ptr);
  *(uint *)this_ptr = 0xffffffff;
  core_mission_cpp_CDemonMission_loadSet_FUN_004fc6b0(this_ptr,0);
  return;
}
