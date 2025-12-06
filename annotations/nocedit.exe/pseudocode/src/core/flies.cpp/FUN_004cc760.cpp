// Name: core_flies.cpp_FUN_004cc760
// Address: 004cc760
// Address Range: [[004cc760, 004cc7ee] [004cc808, 004cc819]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cc760()

#include "nocturne.h"

/* Signature: byte actors_other_flies.cpp_FUN_004cc760(uint param_1, uint param_2)
    */

void core_flies_cpp_FUN_004cc760(void)

{
  uint *puVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  float *unaff_EDI;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_14;
  
  iVar4 = in_stack_00000004 + 0x168 + in_stack_00000008 * 0x34;
  puVar1 = (uint *)core_flies_cpp_FUN_004cc820();
  if ((uint *)(iVar4 + 4) != puVar1) {
    *(uint *)(iVar4 + 4) = *puVar1;
    *(uint *)(iVar4 + 8) = puVar1[1];
    *(uint *)(iVar4 + 0xc) = puVar1[2];
  }
  iVar4 = local_14 + 4;
  puVar1 = (uint *)(local_14 + 0x10);
  do {
    puVar2 = (uint *)core_flies_cpp_FUN_004cc820();
    if (puVar1 != puVar2) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
    }
    iVar4 = iVar4 + 0xc;
    puVar1 = puVar1 + 3;
  } while (iVar4 != local_14 + 0x28);
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  *unaff_EDI = fVar3;
  return;
}
