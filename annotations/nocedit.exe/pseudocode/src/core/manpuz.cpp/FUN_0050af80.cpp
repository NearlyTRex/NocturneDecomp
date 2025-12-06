// Name: core_manpuz.cpp_FUN_0050af80
// Address: 0050af80
// Address Range: [[0050af80, 0050b037]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050af80()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_0050af80(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_0050af80(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  int in_stack_00000008;
  float local_1c [7];
  
  pfVar3 = (float *)(in_stack_00000004 + 0x1340 + in_stack_00000008 * 0x60);
  pfVar1 = pfVar3 + 6;
  fVar2 = 1.0 - pfVar3[6];
  if (pfVar3 + 7 == local_1c) {
    return;
  }
  pfVar3[7] = *pfVar3 * fVar2 + pfVar3[3] * *pfVar1;
  pfVar3[8] = pfVar3[1] * fVar2 + pfVar3[4] * *pfVar1;
  pfVar3[9] = pfVar3[2] * fVar2 + pfVar3[5] * *pfVar1;
  return;
}
