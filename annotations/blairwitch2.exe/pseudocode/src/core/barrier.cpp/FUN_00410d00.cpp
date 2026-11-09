// Name: core_barrier.cpp_FUN_00410d00
// Address: 00410d00
// Address Range: [[00410d00, 00410d23]]
// Convention: unknown
// Signature: void core_barrier_cpp_FUN_00410d00(CDemonActor *param_1)

#include "nocturne.h"

void core_barrier_cpp_FUN_00410d00(CDemonActor *param_1)

{
  core_actor_cpp_FUN_00408a80(param_1);
  *(uint *)&param_1->field_0xfc = 1;
  *(uint *)&param_1->field_0xf8 = 1;
  return;
}
