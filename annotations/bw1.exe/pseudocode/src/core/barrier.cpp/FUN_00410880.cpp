// Name: core_barrier.cpp_FUN_00410880
// Address: 00410880
// Address Range: [[00410880, 004108aa]]
// Convention: unknown
// Signature: void core_barrier_cpp_FUN_00410880(CDemonActor *param_1)

#include "nocturne.h"

void core_barrier_cpp_FUN_00410880(CDemonActor *param_1)

{
  uint uVar1;
  
  core_actor_cpp_FUN_00408850(param_1);
  uVar1 = *(uint *)(0x01D2C900 + 0x1008);
  *(uint *)&param_1->field_0xf8 = 0;
  *(uint *)&param_1->field_0xfc = uVar1;
  return;
}
