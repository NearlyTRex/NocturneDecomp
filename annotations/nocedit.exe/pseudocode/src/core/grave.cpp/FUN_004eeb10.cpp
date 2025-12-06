// Name: core_grave.cpp_FUN_004eeb10
// Address: 004eeb10
// Address Range: [[004eeb10, 004eeb3b]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004eeb10()

#include "nocturne.h"

/* Signature: byte actors_other_grave.cpp_FUN_004eeb10(uint param_1, uint param_2)
    */

void core_grave_cpp_FUN_004eeb10(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  FILE *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)&in_stack_00000008[0xc]._link,in_stack_0000000c);
  return;
}
