// Name: FUN_00433770
// Address: 00433770
// Address Range: [[00433770, 00433790]]
// Convention: unknown
// Signature: void FUN_00433770(undefined4 *param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

void FUN_00433770(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(byte *)param_1 = *(byte *)param_2;
    param_2 = (uint *)((int)param_2 + 1);
    param_1 = (uint *)((int)param_1 + 1);
  }
  return;
}
