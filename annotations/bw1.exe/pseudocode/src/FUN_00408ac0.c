// Name: FUN_00408ac0
// Address: 00408ac0
// Address Range: [[00408ac0, 00408af0]]
// Convention: unknown
// Signature: void FUN_00408ac0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00408ac0(int param_1,uint param_2)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStackY_ffc [1016];
  uint local_14;
  
  bVar1 = 0;
  FUN_0045f690(param_1 + 0x3c,param_2);
  *unaff_ESI = local_14;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
