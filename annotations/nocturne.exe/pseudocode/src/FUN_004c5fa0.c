// Name: FUN_004c5fa0
// Address: 004c5fa0
// Address Range: [[004c5fa0, 004c5fcf]]
// Convention: unknown
// Signature: void FUN_004c5fa0(undefined4 *param_1)

#include "nocturne.h"

void FUN_004c5fa0(uint *param_1)

{
  byte *puVar1;
  
  puVar1 = PTR_DAT_005ad350;
  param_1[3] = 0;
  FUN_0043ac60(puVar1,"gLevelIndicator: Used %d calls\n",*param_1);
  FUN_00452f10(0x1cc3290);
  return;
}
