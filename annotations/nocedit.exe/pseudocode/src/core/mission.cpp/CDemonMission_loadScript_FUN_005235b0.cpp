// Name: core_mission.cpp_CDemonMission_loadScript_FUN_005235b0
// Address: 005235b0
// Address Range: [[005235b0, 005235f9]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_005235b0(CDemonMission *this_ptr,int is_loading)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_005235b0(CDemonMission *this_ptr,int is_loading)

{
  int iVar1;
  char local_104 [260];
  
  makepath
            (local_104,(char *)0x0,(char *)0x0,this_ptr->mission_name,"scr");
  iVar1 = core_script_cpp_CScript_loadScript_FUN_00559f80(g_CScriptPtr,local_104,is_loading);
  return iVar1;
}
