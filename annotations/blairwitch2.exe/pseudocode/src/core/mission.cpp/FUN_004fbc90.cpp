// Name: core_mission.cpp_FUN_004fbc90
// Address: 004fbc90
// Address Range: [[004fbc90, 004fbcd1]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004fbc90(int param_1)

#include "nocturne.h"

void core_mission_cpp_FUN_004fbc90(int param_1)

{
  char local_104 [260];
  
  makepath
            (local_104,(char *)0x0,(char *)0x0,(char *)(param_1 + 0x1014),&DAT_005de46d);
  core_script_cpp_FUN_00521cf0(g_CScriptPtr,local_104);
  return;
}
