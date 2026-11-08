// Name: FUN_004425e0
// Address: 004425e0
// Address Range: [[004425e0, 004425fe]]
// Convention: unknown
// Signature: undefined4 FUN_004425e0(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_004425e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_1[1] = 0;
  *param_1 = 0;
  return uVar1;
}
