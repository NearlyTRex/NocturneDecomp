// Name: FUN_004da670
// Address: 004da670
// Address Range: [[004da670, 004da75f]]
// Convention: unknown
// Signature: void FUN_004da670(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004da670(int param_1)

{
  float fVar1;
  uint *puVar2;
  uint local_3c;
  uint local_38;
  uint local_34;
  byte local_30 [12];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if (*(int *)(param_1 + 0xbd4c) == 0) {
    local_14 = 0xc0166666;
    local_10 = 0xbfcccccd;
    local_18 = 0x40866666;
    if (&local_24 != &local_18) {
      local_20 = 0xc0166666;
      local_1c = 0xbfcccccd;
      local_24 = 0x40866666;
    }
    fVar1 = *(float *)(*(int *)(param_1 + 0xbd48) + 0x34) + (float)_DAT_0058a2e9;
  }
  else {
    local_38 = 0xc0166666;
    local_34 = 0xbfcccccd;
    local_3c = 0xc0866666;
    if (&local_24 != &local_3c) {
      local_20 = 0xc0166666;
      local_1c = 0xbfcccccd;
      local_24 = 0xc0866666;
    }
    fVar1 = *(float *)(*(int *)(param_1 + 0xbd48) + 0x34) + (float)_DAT_0058a2f1;
  }
  *(float *)(param_1 + 0x34) = fVar1;
  puVar2 = (uint *)FUN_0040a240(*(uint *)(param_1 + 0xbd48),local_30,&local_24);
  *(uint *)(param_1 + 0x20) = *puVar2;
  *(uint *)(param_1 + 0x24) = puVar2[1];
  *(uint *)(param_1 + 0x28) = puVar2[2];
  *(uint *)(param_1 + 0xbd48) = 0;
  FUN_004e16b0(param_1 + 0x150,8,1);
  return;
}
