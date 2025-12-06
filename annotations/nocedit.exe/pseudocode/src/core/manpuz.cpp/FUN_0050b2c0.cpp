// Name: core_manpuz.cpp_FUN_0050b2c0
// Address: 0050b2c0
// Address Range: [[0050b2c0, 0050b2eb]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b2c0()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_0050b2c0(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_0050b2c0(void)

{
  CDemonActor *in_stack_00000004;
  SSurfaceInfo *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(in_stack_00000004,in_stack_00000008);
  if ((in_stack_00000008->hit_position).z <= (float)-0.01) {
    return;
  }
  in_stack_00000008->alpha_or_wetness = 1.0;
  return;
}
