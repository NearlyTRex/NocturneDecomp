// Name: core_flies.cpp_FUN_004ccaa0
// Address: 004ccaa0
// Address Range: [[004ccaa0, 004ccae0]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004ccaa0()

#include "nocturne.h"

/* Signature: byte actors_other_flies.cpp_FUN_004ccaa0(uint param_1, uint param_2)
    */

void core_flies_cpp_FUN_004ccaa0(void)

{
  int extraout_EAX;
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e220(in_stack_00000008);
  *(uint *)(extraout_EAX + 0x58) = 1;
  return;
}
