// Name: FUN_004fefa0
// Address: 004fefa0
// Address Range: [[004fefa0, 004fefcf]]
// Convention: unknown
// Signature: void FUN_004fefa0(undefined4 *param_1)

#include "nocturne.h"

void FUN_004fefa0(uint *param_1)

{
  byte *puVar1;
  
  puVar1 = PTR_DAT_00611100;
  param_1[3] = 0;
  FUN_00445430(puVar1,"gLevelIndicator: Used %d calls\n",*param_1);
  FUN_00467160(0x1d1be4c);
  return;
}
