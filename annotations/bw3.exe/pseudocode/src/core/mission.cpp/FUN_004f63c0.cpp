// Name: core_mission.cpp_FUN_004f63c0
// Address: 004f63c0
// Address Range: [[004f63c0, 004f6401]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004f63c0(int param_1)

#include "nocturne.h"

void core_mission_cpp_FUN_004f63c0(int param_1)

{
  char local_104 [260];
  
  makepath
            (local_104,(char *)0x0,(char *)0x0,(char *)(param_1 + 0x133c),&DAT_005c87b2);
  core_script_cpp_FUN_00529410(g_CScriptPtr,local_104);
  return;
}
