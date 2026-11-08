// Name: FUN_004e1b80
// Address: 004e1b80
// Address Range: [[004e1b80, 004e1baf]]
// Convention: unknown
// Signature: void FUN_004e1b80(undefined4 *param_1)

#include "nocturne.h"

void FUN_004e1b80(uint *param_1)

{
  byte *puVar1;
  
  puVar1 = PTR_DAT_00609ed0;
  param_1[3] = 0;
  FUN_00436710(puVar1,"gLevelIndicator: Used %d calls\n",*param_1);
  FUN_0044e590(0x1d03130);
  return;
}
