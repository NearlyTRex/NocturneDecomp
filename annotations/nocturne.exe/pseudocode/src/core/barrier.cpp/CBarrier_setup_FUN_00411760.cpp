// Name: core_barrier.cpp_CBarrier_setup_FUN_00411760
// Address: 00411760
// Address Range: [[00411760, 00411787]]
// Convention: unknown
// Signature: void core_barrier_cpp_CBarrier_setup_FUN_00411760(CDemonActor *param_1)

#include "nocturne.h"

void core_barrier_cpp_CBarrier_setup_FUN_00411760(CDemonActor *param_1)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  iVar1 = *(int *)(0x01CC9450 + 4);
  param_1->is_renderable = 0;
  param_1->is_transparent = iVar1;
  return;
}
