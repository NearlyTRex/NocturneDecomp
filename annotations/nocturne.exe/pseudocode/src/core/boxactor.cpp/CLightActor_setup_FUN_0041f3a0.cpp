// Name: core_boxactor.cpp_CLightActor_setup_FUN_0041f3a0
// Address: 0041f3a0
// Address Range: [[0041f3a0, 0041f3c7]]
// Convention: unknown
// Signature: void core_boxactor_cpp_CLightActor_setup_FUN_0041f3a0(CBoxActor *param_1)

#include "nocturne.h"

void core_boxactor_cpp_CLightActor_setup_FUN_0041f3a0(CBoxActor *param_1)

{
  core_boxactor_cpp_FUN_0041f6e0(param_1);
  core_boxactor_cpp_CBoxActor_setup_FUN_0041e430(param_1);
  core_dlight_cpp_CDemonLight_init_FUN_0044e1e0((CDemonLight *)(param_1[1].base.actor_name + 4));
  return;
}
