// Name: FUN_0042e160
// Address: 0042e160
// Address Range: [[0042e160, 0042e19a]]
// Convention: unknown
// Signature: void FUN_0042e160(int param_1)

#include "nocturne.h"

void FUN_0042e160(int param_1)

{
  uint uStack_14;
  float local_10;
  uint uStack_c;
  
  uStack_14 = *(uint *)(param_1 + 0x30);
  uStack_c = *(uint *)(param_1 + 0x38);
  local_10 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2508);
  *(uint *)(param_1 + 0x2508) = 0;
  FUN_00433d50(param_1,&uStack_14);
  return;
}
