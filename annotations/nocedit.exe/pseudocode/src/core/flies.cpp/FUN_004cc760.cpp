// Name: core_flies.cpp_FUN_004cc760
// Address: 004cc760
// Address Range: [[004cc760, 004cc7ee] [004cc808, 004cc819]]
// Convention: unknown
// Signature: void core_flies_cpp_FUN_004cc760(void)

#include "nocturne.h"

/* Signature: byte actors_other_flies.cpp_FUN_004cc760(uint param_1, uint param_2)
    */

void core_flies_cpp_FUN_004cc760(void)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  
  pfVar4 = (float *)(in_stack_00000004 + 0x168 + in_stack_00000008 * 0x34);
  pfVar1 = (float *)core_flies_cpp_FUN_004cc820();
  if (pfVar4 + 1 != pfVar1) {
    pfVar4[1] = *pfVar1;
    pfVar4[2] = pfVar1[1];
    pfVar4[3] = pfVar1[2];
  }
  pfVar5 = pfVar4 + 1;
  pfVar1 = pfVar4 + 4;
  do {
    pfVar2 = (float *)core_flies_cpp_FUN_004cc820();
    if (pfVar1 != pfVar2) {
      *pfVar1 = *pfVar2;
      pfVar1[1] = pfVar2[1];
      pfVar1[2] = pfVar2[2];
    }
    pfVar5 = pfVar5 + 3;
    pfVar1 = pfVar1 + 3;
  } while (pfVar5 != pfVar4 + 10);
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  *pfVar4 = fVar3;
  return;
}
