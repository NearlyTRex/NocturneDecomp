// Name: core_mission.cpp_FUN_0051abf0
// Address: 0051abf0
// Address Range: [[0051abf0, 0051ac31]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_0051abf0(int param_1)

#include "nocturne.h"

void core_mission_cpp_FUN_0051abf0(int param_1)

{
  char local_104 [260];
  
  makepath
            (local_104,(char *)0x0,(char *)0x0,(char *)(param_1 + 0x1018),&DAT_005e94b0);
  core_script_cpp_FUN_00543e00(g_CScriptPtr,local_104);
  return;
}
