// Name: core_manpuz.cpp_FUN_0050b360
// Address: 0050b360
// Address Range: [[0050b360, 0050b3b2]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b360()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_0050b360(uint param_1, uint
   param_2, uint param_3) */

uint core_manpuz_cpp_FUN_0050b360(void)

{
  CDemonActor *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  
  if (*(int *)(in_stack_0000000c + 0xc) != 0) {
    *(uint *)(in_stack_0000000c + 0xc) = 0;
    return 0;
  }
  if (*(int *)(in_stack_0000000c + 0x10) == 0) {
    if (&in_stack_00000004->orient != (COrientation *)in_stack_00000008) {
      (in_stack_00000004->orient).pitch = *in_stack_00000008;
      (in_stack_00000004->orient).bank = in_stack_00000008[1];
      (in_stack_00000004->orient).heading = in_stack_00000008[2];
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
    return 1;
  }
  *(uint *)(in_stack_0000000c + 0x10) = 0;
  return 0;
}
