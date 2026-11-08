// Name: FUN_0042cd30
// Address: 0042cd30
// Address Range: [[0042cd30, 0042cd6a]]
// Convention: unknown
// Signature: void FUN_0042cd30(int param_1)

#include "nocturne.h"

void FUN_0042cd30(int param_1)

{
  uint uStack_14;
  float local_10;
  uint uStack_c;
  
  uStack_14 = *(uint *)(param_1 + 0x30);
  uStack_c = *(uint *)(param_1 + 0x38);
  local_10 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2508);
  *(uint *)(param_1 + 0x2508) = 0;
  FUN_00433220(param_1,&uStack_14);
  return;
}
