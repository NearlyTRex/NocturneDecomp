// Name: core_emitter.cpp_FUN_004a9390
// Address: 004a9390
// Address Range: [[004a9390, 004a93b1]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_FUN_004a9390(void)

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a9390(uint param_1, uint
   param_2) */

void __cdecl core_emitter_cpp_FUN_004a9390(void)

{
  int in_stack_00000004;
  _FILE *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x158) != 4) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x248),in_stack_00000008);
  return;
}
