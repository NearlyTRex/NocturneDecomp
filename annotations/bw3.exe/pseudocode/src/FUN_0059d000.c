// Name: FUN_0059d000
// Address: 0059d000
// Address Range: [[0059d000, 0059d110]]
// Convention: unknown
// Signature: bool FUN_0059d000(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0059d000(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_102c [1016];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  iVar4 = 0;
  local_18 = 100.0;
  for (iVar3 = 0; iVar3 < *(int *)(0x01ED78C8 + 0x14d164); iVar3 = iVar3 + 1) {
    iVar2 = FUN_0040c840(*(uint *)(0x01ED78C8 + 0x14d168 + iVar4),_DAT_02d0bcd8);
    if (iVar2 != 0) {
      iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      local_44 = *(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 0x20);
      local_40 = *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24);
      local_3c = *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28);
      local_2c = local_44;
      (&stack0xffffffd8)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (&stack0xffffffc8 != &stack0xffffffd4) {
        local_38 = local_2c;
        local_34 = local_28;
        local_30 = local_24;
      }
      local_20 = local_30 * local_30 + local_38 * local_38 + local_34 * local_34;
      local_14 = (float)(((int)local_20 >> 1) + _DAT_01d1a0a4);
      if (local_14 < local_18) {
        local_1c = iVar2;
        local_18 = local_14;
      }
    }
    iVar4 = iVar4 + 4;
  }
  iVar3 = FUN_005a4010(local_1c,"@Platform" + 1);
  return iVar3 != 0;
}
