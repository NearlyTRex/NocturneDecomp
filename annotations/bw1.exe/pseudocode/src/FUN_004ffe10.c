// Name: FUN_004ffe10
// Address: 004ffe10
// Address Range: [[004ffe10, 004ffe41]]
// Convention: unknown
// Signature: void FUN_004ffe10(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_004ffe10(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_004ffaf0(*param_2,param_2[1],param_2[2]);
  (&DAT_00629034)[param_1 * 0xc] = uVar1;
  return;
}
