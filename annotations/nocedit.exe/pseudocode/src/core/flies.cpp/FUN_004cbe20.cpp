// Name: core_flies.cpp_FUN_004cbe20
// Address: 004cbe20
// Address Range: [[004cbe20, 004cbe2b]]
// Convention: unknown
// Signature: void core_flies_cpp_FUN_004cbe20(void)

#include "nocturne.h"

/* Signature: byte actors_other_flies.cpp_FUN_004cbe20(uint param_1) */

void core_flies_cpp_FUN_004cbe20(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  iVar1 = 0;
  if (0 < *(int *)(in_stack_00000004[1].actor_name + 0xc)) {
    do {
      core_flies_cpp_FUN_004cc760();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_00000004[1].actor_name + 0xc));
  }
  in_stack_00000004[0x1f].create_prob = 1.4013e-45;
  return;
}
