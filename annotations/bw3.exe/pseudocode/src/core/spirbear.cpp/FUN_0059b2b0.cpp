// Name: core_spirbear.cpp_FUN_0059b2b0
// Address: 0059b2b0
// Address Range: [[0059b2b0, 0059b2d9]]
// Convention: unknown
// Signature: void core_spirbear_cpp_FUN_0059b2b0(CNPC *param_1,int param_2)

#include "nocturne.h"

void core_spirbear_cpp_FUN_0059b2b0(CNPC *param_1,int param_2)

{
  if (*(int *)&param_1[1].field_0x13a9c != 0) {
    if (param_2 != 0) {
      *(uint *)&param_1->field_0x24fc = 1;
    }
    core_npc_cpp_FUN_00509530(param_1,param_2);
  }
  return;
}
