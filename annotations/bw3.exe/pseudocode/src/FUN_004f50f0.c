// Name: FUN_004f50f0
// Address: 004f50f0
// Address Range: [[004f50f0, 004f5120]]
// Convention: unknown
// Signature: void FUN_004f50f0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004f50f0(int param_1,uint param_2)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStackY_ffc [1016];
  uint local_14;
  
  bVar1 = 0;
  FUN_00583260(param_2,param_1 + 0x30);
  *unaff_ESI = local_14;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
