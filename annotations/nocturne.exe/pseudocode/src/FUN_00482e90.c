// Name: FUN_00482e90
// Address: 00482e90
// Address Range: [[00482e90, 00482ece]]
// Convention: unknown
// Signature: void FUN_00482e90(undefined4 *param_1)

#include "nocturne.h"

void FUN_00482e90(uint *param_1)

{
  uint *puVar1;
  byte local_10 [12];
  
  if (param_1[4] != 0) {
    puVar1 = (uint *)FUN_0040a240(param_1[4],local_10,param_1 + 9);
    if (param_1 != puVar1) {
      *param_1 = *puVar1;
      param_1[1] = puVar1[1];
      param_1[2] = puVar1[2];
      return;
    }
  }
  return;
}
