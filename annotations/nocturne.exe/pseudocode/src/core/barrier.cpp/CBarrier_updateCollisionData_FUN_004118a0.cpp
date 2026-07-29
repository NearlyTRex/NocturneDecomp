// Name: core_barrier.cpp_CBarrier_updateCollisionData_FUN_004118a0
// Address: 004118a0
// Address Range: [[004118a0, 004118be]]
// Convention: unknown
// Signature: void core_barrier_cpp_CBarrier_updateCollisionData_FUN_004118a0(CDemonActor *param_1)

#include "nocturne.h"

void core_barrier_cpp_CBarrier_updateCollisionData_FUN_004118a0(CDemonActor *param_1)

{
  if (*(int *)(param_1[1].actor_name + 0xc) == 0) {
    return;
  }
  core_setcolid_cpp_FUN_00511a10(0x01E57284,param_1);
  return;
}
