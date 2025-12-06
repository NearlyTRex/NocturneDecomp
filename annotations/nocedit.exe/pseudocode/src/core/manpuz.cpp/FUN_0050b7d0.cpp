// Name: core_manpuz.cpp_FUN_0050b7d0
// Address: 0050b7d0
// Address Range: [[0050b7d0, 0050b806]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b7d0()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_0050b7d0(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_0050b7d0(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),in_stack_00000008);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)&in_stack_00000004[2].location.position.y,in_stack_00000008)
  ;
  return;
}
