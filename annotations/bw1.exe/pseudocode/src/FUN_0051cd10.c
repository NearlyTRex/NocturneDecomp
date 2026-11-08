// Name: FUN_0051cd10
// Address: 0051cd10
// Address Range: [[0051cd10, 0051ce0d]]
// Convention: unknown
// Signature: void FUN_0051cd10(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051cd10(int param_1)

{
  float fVar1;
  byte bVar2;
  uint auStackY_1024 [1012];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0xc290) == 0) {
    local_20 = 0xc0166666;
    local_1c = 0xbfcccccd;
    local_24 = 0x40866666;
    if (&stack0xffffffd0 != &stack0xffffffdc) {
      local_2c = 0xc0166666;
      local_28 = 0xbfcccccd;
      local_30 = 0x40866666;
    }
    fVar1 = *(float *)(*(int *)(param_1 + 0xc28c) + 0x34) + _DAT_005e9dba;
  }
  else {
    local_44 = 0xc0166666;
    local_40 = 0xbfcccccd;
    local_48 = 0xc0866666;
    if (&stack0xffffffd0 != &stack0xffffffb8) {
      local_2c = 0xc0166666;
      local_28 = 0xbfcccccd;
      local_30 = 0xc0866666;
    }
    fVar1 = *(float *)(*(int *)(param_1 + 0xc28c) + 0x34) + _DAT_005e9dbe;
  }
  *(float *)(param_1 + 0x34) = fVar1;
  FUN_00408b40(*(uint *)(param_1 + 0xc28c),&stack0xffffffd0);
  local_3c = local_18;
  (&stack0xffffffc8)[(uint)bVar2 * 0xfffffffe] =
       *(uint *)((int)&stack0xffffffec + (uint)bVar2 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)(param_1 + 0x20) = local_3c;
  *(uint *)(param_1 + 0x24) = local_38;
  *(uint *)(param_1 + 0x28) = local_34;
  *(uint *)(param_1 + 0xc28c) = 0;
  FUN_005247c0(param_1 + 0x158,8,1);
  return;
}
