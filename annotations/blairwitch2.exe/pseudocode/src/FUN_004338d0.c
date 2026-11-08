// Name: FUN_004338d0
// Address: 004338d0
// Address Range: [[004338d0, 004338ee]]
// Convention: unknown
// Signature: undefined4 FUN_004338d0(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_004338d0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_1[1] = 0;
  *param_1 = 0;
  return uVar1;
}
