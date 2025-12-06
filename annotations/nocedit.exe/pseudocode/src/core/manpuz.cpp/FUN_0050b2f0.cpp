// Name: core_manpuz.cpp_FUN_0050b2f0
// Address: 0050b2f0
// Address Range: [[0050b2f0, 0050b333]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b2f0()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_0050b2f0(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_0050b2f0(void)

{
  float fVar1;
  CDemonActor *in_stack_00000004;
  SInteractionInfo *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040a030(in_stack_00000004,in_stack_00000008);
  in_stack_00000008->can_interact = 1;
  fVar1 = in_stack_00000008[0x16].yaw_max;
  in_stack_00000008->yaw_min = 6.2831855;
  in_stack_00000008->yaw_max = -6.2831855;
  in_stack_00000008->distance_min = -1.0;
  in_stack_00000008->distance_max = 0.0;
  in_stack_00000008->reference_data = (int)fVar1;
  return;
}
