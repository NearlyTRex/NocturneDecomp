// Name: core_flies.cpp_FUN_004a6b50
// Address: 004a6b50
// Address Range: [[004a6b50, 004a6b8c]]
// Convention: unknown
// Signature: void core_flies_cpp_FUN_004a6b50(CFlies *param_1)

#include "nocturne.h"

void core_flies_cpp_FUN_004a6b50(CFlies *param_1)

{
  int fly_index;
  
  core_actor_cpp_FUN_00408a80((CDemonActor *)param_1);
  fly_index = 0;
  if (0 < *(int *)&param_1->field_0x2c0) {
    do {
      core_flies_cpp_FUN_004a7560(param_1,fly_index);
      fly_index = fly_index + 1;
    } while (fly_index < *(int *)&param_1->field_0x2c0);
  }
  *(uint *)&param_1->field_0x2b78 = 1;
  return;
}
