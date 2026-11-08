// Name: FUN_004e0ed0
// Address: 004e0ed0
// Address Range: [[004e0ed0, 004e0f01]]
// Convention: unknown
// Signature: void FUN_004e0ed0(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_004e0ed0(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_004e0bb0(*param_2,param_2[1],param_2[2]);
  (&DAT_0060b034)[param_1 * 0xc] = uVar1;
  return;
}
