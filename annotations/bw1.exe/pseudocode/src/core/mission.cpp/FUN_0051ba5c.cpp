// Name: core_mission.cpp_FUN_0051ba5c
// Address: 0051ba5c
// Address Range: [[0051ba5c, 0051baca]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_0051ba5c(CDemonMission *param_1,CDemonMission *param_2)

#include "nocturne.h"

void core_mission_cpp_FUN_0051ba5c(CDemonMission *param_1,CDemonMission *param_2)

{
  CDemonMission CVar1;
  CDemonMission *pCVar2;
  
  pCVar2 = param_1 + 8;
  *(uint *)(param_1 + 4) = 1;
  do {
    CVar1 = *param_2;
    *pCVar2 = CVar1;
    if (CVar1 == (CDemonMission)0x0) break;
    CVar1 = param_2[1];
    param_2 = param_2 + 2;
    pCVar2[1] = CVar1;
    pCVar2 = pCVar2 + 2;
  } while (CVar1 != (CDemonMission)0x0);
  *(uint *)param_1 = 0;
  core_mission_cpp_FUN_0051b5a0(param_1);
  core_script_cpp_FUN_00543740(g_CScriptPtr);
  core_mission_cpp_FUN_0051b2b0(param_1);
  *(uint *)param_1 = 0xffffffff;
  core_mission_cpp_FUN_0051b610(param_1,0);
  return;
}
