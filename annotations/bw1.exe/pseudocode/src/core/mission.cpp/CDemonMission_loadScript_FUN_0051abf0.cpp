// Name: core_mission.cpp_CDemonMission_loadScript_FUN_0051abf0
// Address: 0051abf0
// Address Range: [[0051abf0, 0051ac31]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_0051abf0(CDemonMission *this_ptr)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_0051abf0(CDemonMission *this_ptr)

{
  int iVar1;
  char local_104 [260];
  
  makepath
            (local_104,(char *)0x0,(char *)0x0,this_ptr->mission_name,"scr");
  iVar1 = core_script_cpp_CScript_loadScript_FUN_00543e00(g_CScriptPtr,local_104);
  return iVar1;
}
