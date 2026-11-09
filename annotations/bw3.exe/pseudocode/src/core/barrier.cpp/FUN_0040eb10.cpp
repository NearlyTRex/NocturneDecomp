// Name: core_barrier.cpp_FUN_0040eb10
// Address: 0040eb10
// Address Range: [[0040eb10, 0040eb3a]]
// Convention: unknown
// Signature: void core_barrier_cpp_FUN_0040eb10(CDemonActor *param_1)

#include "nocturne.h"

void core_barrier_cpp_FUN_0040eb10(CDemonActor *param_1)

{
  uint uVar1;
  
  core_actor_cpp_FUN_00408890(param_1);
  uVar1 = *(uint *)(0x01D81080 + 0x1008);
  *(uint *)&param_1->field_0xf8 = 0;
  *(uint *)&param_1->field_0xfc = uVar1;
  return;
}
