// Name: core_marquee.cpp_FUN_0050c480
// Address: 0050c480
// Address Range: [[0050c480, 0050c4b0]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_FUN_0050c480(void)

#include "nocturne.h"

/* Signature: byte actors_other_marquee.cpp_FUN_0050c480(uint param_1, uint
   param_2) */

void __cdecl core_marquee_cpp_FUN_0050c480(void)

{
  CDemonActor *in_stack_00000004;
  _FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  _fprintf(in_stack_00000008,"DATA\\%s\n",in_stack_00000004 + 1);
  return;
}
