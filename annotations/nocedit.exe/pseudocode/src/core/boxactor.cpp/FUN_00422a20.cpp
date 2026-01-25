// Name: core_boxactor.cpp_FUN_00422a20
// Address: 00422a20
// Address Range: [[00422a20, 00422a47]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422a20()

#include "nocturne.h"

void core_boxactor_cpp_FUN_00422a20(void)

{
  CBoxActor *in_stack_00000004;
  
  core_boxactor_cpp_FUN_00422d60();
  core_boxactor_cpp_CBoxActor_setup_FUN_00421830(in_stack_00000004);
  core_dlight_cpp_CDemonLight_init_FUN_004727c0
            ((CDemonLight *)(in_stack_00000004[1].base_actor.actor_name + 4));
  return;
}
