// Name: core_asgaya.cpp_FUN_005a1730
// Address: 005a1730
// Address Range: [[005a1730, 005a1759]]
// Convention: unknown
// Signature: void core_asgaya_cpp_FUN_005a1730(CNPC *param_1,int param_2)

#include "nocturne.h"

void core_asgaya_cpp_FUN_005a1730(CNPC *param_1,int param_2)

{
  if (*(int *)&param_1[1].field_0x138e0 != 0) {
    if (param_2 != 0) {
      *(uint *)&param_1->field_0x24fc = 1;
    }
    core_npc_cpp_FUN_00509530(param_1,param_2);
  }
  return;
}
