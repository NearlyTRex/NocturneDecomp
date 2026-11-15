// Name: core_mission.cpp_CDemonMission_loadScript_FUN_004f63c0
// Address: 004f63c0
// Address Range: [[004f63c0, 004f6401]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_004f63c0(CDemonMission *this_ptr)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_004f63c0(CDemonMission *this_ptr)

{
  int iVar1;
  char local_104 [260];
  
  makepath
            (local_104,(char *)0x0,(char *)0x0,this_ptr->mission_name,&DAT_005c87b2);
  iVar1 = core_script_cpp_CScript_loadScript_FUN_00529410(g_CScriptPtr,local_104);
  return iVar1;
}
