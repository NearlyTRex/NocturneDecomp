// Name: FUN_00429420
// Address: 00429420
// Address Range: [[00429420, 00429492]]
// Convention: unknown
// Signature: void FUN_00429420(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00429420(int param_1)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStackY_1018 [1016];
  uint uStack_30;
  uint uStack_24;
  uint uStack_18;
  
  bVar1 = 0;
  FUN_00583260(&DAT_02cfd900,*(int *)(param_1 + 0x168) * 0x30 + *(int *)(param_1 + 0x164) + 0xfd8);
  uStack_24 = uStack_18;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  FUN_00408b80(*(uint *)(param_1 + 0x164),&stack0xffffffdc);
  *unaff_ESI = uStack_30;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
