// Name: core_barrier.cpp_CBarrier_setup_FUN_00411760
// Address: 00411760
// Address Range: [[00411760, 00411787]]
// Convention: unknown
// Signature: void core_barrier_cpp_CBarrier_setup_FUN_00411760(int param_1)

#include "nocturne.h"

void core_barrier_cpp_CBarrier_setup_FUN_00411760(int param_1)

{
  uint uVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  uVar1 = *(uint *)(0x01CC9450 + 4);
  *(uint *)(param_1 + 0xf8) = 0;
  *(uint *)(param_1 + 0xfc) = uVar1;
  return;
}
