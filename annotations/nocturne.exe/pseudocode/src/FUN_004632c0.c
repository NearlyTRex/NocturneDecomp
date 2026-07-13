// Name: FUN_004632c0
// Address: 004632c0
// Address Range: [[004632c0, 00463308]]
// Convention: unknown
// Signature: undefined4 FUN_004632c0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_004632c0(int param_1,uint *param_2)

{
  uint *puVar1;
  byte local_10 [12];
  
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_10,0);
  if (param_2 == puVar1) {
    return 1;
  }
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return 1;
}
