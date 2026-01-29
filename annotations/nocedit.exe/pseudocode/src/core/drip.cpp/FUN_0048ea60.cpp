// Name: core_drip.cpp_FUN_0048ea60
// Address: 0048ea60
// Address Range: [[0048ea60, 0048ea8b]]
// Convention: unknown
// Signature: void core_drip_cpp_FUN_0048ea60(void)

#include "nocturne.h"

/* Signature: byte actors_other_drip.cpp_FUN_0048ea60(uint param_1, uint param_2)
    */

void core_drip_cpp_FUN_0048ea60(void)

{
  CDemonActor *in_stack_00000004;
  _FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),in_stack_00000008);
  return;
}
