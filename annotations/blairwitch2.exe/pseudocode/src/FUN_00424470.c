// Name: FUN_00424470
// Address: 00424470
// Address Range: [[00424470, 004244aa]]
// Convention: unknown
// Signature: void FUN_00424470(int param_1)

#include "nocturne.h"

void FUN_00424470(int param_1)

{
  uint uStack_14;
  float local_10;
  uint uStack_c;
  
  uStack_14 = *(uint *)(param_1 + 0x30);
  uStack_c = *(uint *)(param_1 + 0x38);
  local_10 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2578);
  *(uint *)(param_1 + 0x2578) = 0;
  FUN_00429d60(param_1,&uStack_14);
  return;
}
