// Name: core_health.cpp_FUN_004d2090
// Address: 004d2090
// Address Range: [[004d2090, 004d20be]]
// Convention: unknown
// Signature: undefined4 core_health_cpp_FUN_004d2090(int param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_health_cpp_FUN_004d2090(int param_1,CDemonActor *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_actor_cpp_FUN_0040c790(param_2,"CHero");
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x2e0) == 0) {
      return 2;
    }
    uVar2 = 5;
  }
  return uVar2;
}
