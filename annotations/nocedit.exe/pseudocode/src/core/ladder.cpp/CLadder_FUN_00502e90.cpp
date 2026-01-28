// Name: core_ladder.cpp_CLadder_FUN_00502e90
// Address: 00502e90
// Address Range: [[00502e90, 00502eab]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_FUN_00502e90(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_FUN_00502e90(CLadder *this_ptr)

{
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)this_ptr->master_actor) {
    return;
  }
  this_ptr->master_actor[0] = '\0';
  this_ptr->master_actor[1] = '\0';
  this_ptr->master_actor[2] = '\0';
  this_ptr->master_actor[3] = '\0';
  return;
}
