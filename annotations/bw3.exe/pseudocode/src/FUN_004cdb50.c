// Name: FUN_004cdb50
// Address: 004cdb50
// Address Range: [[004cdb50, 004cdbd5]]
// Convention: unknown
// Signature: void FUN_004cdb50(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004cdb50(int param_1,uint param_2)

{
  FUN_005a3230(param_2,"%f,%f,%f,%d\n",param_1 + 4,param_1 + 8,param_1 + 0xc,param_1 + 0x10);
  FUN_005a3230(param_2,"%d,%d,%d\n",param_1 + 0x14,param_1 + 0x18,param_1);
  FUN_005a3230(param_2,"%f,%f,%f\n",param_1 + 0x1c,param_1 + 0x24,param_1 + 0x20);
  FUN_005a3230(param_2,"%d,%d,%d,%d,%d,%d,%d\n",param_1 + 0x2c,param_1 + 0x30,param_1 + 0x34,
               param_1 + 0x38,param_1 + 0x3c,param_1 + 0x40,param_1 + 0x44);
  return;
}
