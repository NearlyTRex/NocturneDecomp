// Name: FUN_004e2980
// Address: 004e2980
// Address Range: [[004e2980, 004e29b1]]
// Convention: unknown
// Signature: void FUN_004e2980(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_004e2980(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_004e2660(*param_2,param_2[1],param_2[2]);
  (&DAT_00622034)[param_1 * 0xc] = uVar1;
  return;
}
