// Name: FUN_00408b40
// Address: 00408b40
// Address Range: [[00408b40, 00408ba9]]
// Convention: unknown
// Signature: void FUN_00408b40(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00408b40(int param_1,uint param_2)

{
  float *unaff_ESI;
  byte bVar1;
  float afStackY_1014 [1016];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_14;
  float local_10;
  float local_c;
  
  bVar1 = 0;
  FUN_0045f690(param_1 + 0x3c,param_2);
  local_2c = local_20;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  local_14 = local_2c + *(float *)(param_1 + 0x20);
  local_10 = local_28 + *(float *)(param_1 + 0x24);
  local_c = local_24 + *(float *)(param_1 + 0x28);
  *unaff_ESI = local_14;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(float *)((int)&stack0xfffffff0 + (uint)bVar1 * -8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(float *)((int)&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
