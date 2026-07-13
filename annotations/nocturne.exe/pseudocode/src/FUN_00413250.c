// Name: FUN_00413250
// Address: 00413250
// Address Range: [[00413250, 0041329f]]
// Convention: unknown
// Signature: undefined4 FUN_00413250(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_00413250(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_14 [12];
  
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_14,DAT_0076459c);
  if (param_2 == puVar1) {
    return 1;
  }
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return 1;
}
