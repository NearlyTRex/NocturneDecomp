// Name: core_platfrm.cpp_FUN_0054f2a0
// Address: 0054f2a0
// Address Range: [[0054f2a0, 0054f2df]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054f2a0()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054f2a0(uint param_1, uint
   param_2) */

void core_platfrm_cpp_FUN_0054f2a0(void)

{
  int in_stack_00000004;
  FILE *in_stack_00000008;
  FILE *in_stack_0000000c;
  
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),in_stack_00000008);
  if (*(char *)(in_stack_00000004 + 0x2f0) == '\0') {
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_0000000c,"data\\%s\n",in_stack_00000004 + 0x2f0);
  return;
}
