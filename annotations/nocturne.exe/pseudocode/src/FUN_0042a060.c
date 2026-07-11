// Name: FUN_0042a060
// Address: 0042a060
// Address Range: [[0042a060, 0042a11c]]
// Convention: unknown
// Signature: void FUN_0042a060(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_0042a060(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_38 [12];
  byte local_2c [12];
  byte local_20 [12];
  byte local_14 [12];
  
  FUN_0040a200(param_1,local_20,param_1 + 0x23a4);
  FUN_0040a200(param_1,local_14,param_1 + 0x2414);
  if ((uint *)(param_1 + 0x30) != param_2) {
    *(uint *)(param_1 + 0x30) = *param_2;
    *(uint *)(param_1 + 0x34) = param_2[1];
    *(uint *)(param_1 + 0x38) = param_2[2];
  }
  FUN_0040a000(param_1);
  puVar1 = (uint *)FUN_0040a220(param_1,local_38,local_20);
  if ((uint *)(param_1 + 0x23a4) != puVar1) {
    *(uint *)(param_1 + 0x23a4) = *puVar1;
    *(uint *)(param_1 + 0x23a8) = puVar1[1];
    *(uint *)(param_1 + 0x23ac) = puVar1[2];
  }
  puVar1 = (uint *)FUN_0040a220(param_1,local_2c,local_14);
  if ((uint *)(param_1 + 0x2414) == puVar1) {
    return;
  }
  *(uint *)(param_1 + 0x2414) = *puVar1;
  *(uint *)(param_1 + 0x2418) = puVar1[1];
  *(uint *)(param_1 + 0x241c) = puVar1[2];
  return;
}
