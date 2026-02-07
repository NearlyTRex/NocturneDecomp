// Name: core_mission.cpp_CDemonMission_loadScript_FUN_005235b0
// Address: 005235b0
// Address Range: [[005235b0, 005235f9]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_005235b0(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl
core_mission_cpp_CDemonMission_loadScript_FUN_005235b0(CDemonMission *this_ptr,int param_2)

{
  char local_104 [260];
  
  makepath
            (local_104,(char *)0x0,(char *)0x0,this_ptr->mission_name,"scr");
  core_script_cpp_CScript_FUN_00559f80(g_CScriptPtr,local_104,param_2);
  return;
}
