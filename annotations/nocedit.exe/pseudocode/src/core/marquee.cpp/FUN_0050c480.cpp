// Name: core_marquee.cpp_FUN_0050c480
// Address: 0050c480
// Address Range: [[0050c480, 0050c4b0]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050c480()

#include "nocturne.h"

/* Signature: byte actors_other_marquee.cpp_FUN_0050c480(uint param_1, uint
   param_2) */

void core_marquee_cpp_FUN_0050c480(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  FILE *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_0000000c,"DATA\\%s\n",&in_stack_00000008[0xc]._link);
  return;
}
