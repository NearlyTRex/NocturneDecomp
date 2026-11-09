// Name: core_spirindi.cpp_FUN_0059a730
// Address: 0059a730
// Address Range: [[0059a730, 0059a759]]
// Convention: unknown
// Signature: void core_spirindi_cpp_FUN_0059a730(CNPC *param_1,int param_2)

#include "nocturne.h"

void core_spirindi_cpp_FUN_0059a730(CNPC *param_1,int param_2)

{
  if (*(int *)&param_1[1].field_0x13a9c != 0) {
    if (param_2 != 0) {
      *(uint *)&param_1->field_0x24fc = 1;
    }
    core_npc_cpp_FUN_00509530(param_1,param_2);
  }
  return;
}
