// Name: core_manpuz.cpp_FUN_0050af00
// Address: 0050af00
// Address Range: [[0050af00, 0050af7d]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050af00()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_manpuz.cpp_FUN_0050af00(uint param_1, uint
   param_2, uint param_3) */

void core_manpuz_cpp_FUN_0050af00(void)

{
  float fVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  
  iVar2 = in_stack_00000004 + 0x1340 + in_stack_00000008 * 0x60;
  if (*(int *)(in_stack_00000004 + 0x5f0 + *(int *)(iVar2 + 0x5c) * 100) == 0) {
    fVar1 = in_stack_0000000c / _DAT_00660d9c + *(float *)(iVar2 + 0x18);
    *(float *)(iVar2 + 0x18) = fVar1;
    if (1.0 < fVar1) {
      *(uint *)(iVar2 + 0x18) = 0x3f800000;
      return;
    }
  }
  else {
    fVar1 = *(float *)(iVar2 + 0x18) - in_stack_0000000c / _DAT_00660d9c;
    *(float *)(iVar2 + 0x18) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(iVar2 + 0x18) = 0;
      return;
    }
  }
  return;
}
