// Name: core_mission.cpp_CDemonMission_loadScript_FUN_004d86d0
// Address: 004d86d0
// Address Range: [[004d86d0, 004d8719]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_004d86d0(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_loadScript_FUN_004d86d0(int param_1,uint param_2)

{
  byte local_104 [260];
  
  makepath(local_104,0,0,param_1 + 0x10,"scr");
  FUN_004febd0(0x01E56DA0,local_104,param_2);
  return;
}
