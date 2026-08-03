// Name: core_mission.cpp_CDemonMission_loadScript_FUN_004d86d0
// Address: 004d86d0
// Address Range: [[004d86d0, 004d8719]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_004d86d0(CDemonMission *this_ptr,int is_loading)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_004d86d0(CDemonMission *this_ptr,int is_loading)

{
  int iVar1;
  char local_104 [260];
  
  makepath
            (local_104,(char *)0x0,(char *)0x0,this_ptr->mission_name,"scr");
  iVar1 = core_script_cpp_FUN_004febd0(0x01E56DA0,local_104,is_loading);
  return iVar1;
}
