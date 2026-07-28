// Name: core_flies.cpp_CFlies_setup_FUN_0048efb0
// Address: 0048efb0
// Address Range: [[0048efb0, 0048efec]]
// Convention: unknown
// Signature: void core_flies_cpp_CFlies_setup_FUN_0048efb0(CFlies *param_1)

#include "nocturne.h"

void core_flies_cpp_CFlies_setup_FUN_0048efb0(CFlies *param_1)

{
  int fly_index;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&param_1->base);
  fly_index = 0;
  if (0 < param_1->fly_count) {
    do {
      core_flies_cpp_CFlies_initFly_FUN_0048f8f0(param_1,fly_index);
      fly_index = fly_index + 1;
    } while (fly_index < param_1->fly_count);
  }
  param_1->is_visible = 1;
  return;
}
