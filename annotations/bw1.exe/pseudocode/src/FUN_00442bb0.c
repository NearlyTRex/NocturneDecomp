// Name: FUN_00442bb0
// Address: 00442bb0
// Address Range: [[00442bb0, 00442bf8]]
// Convention: unknown
// Signature: undefined4 * FUN_00442bb0(undefined4 *param_1,uint param_2)

#include "nocturne.h"

uint * FUN_00442bb0(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005c030f(param_1,&DAT_005fdaa0);
    FUN_005c0336(uVar1);
    return param_1;
  }
  *param_1 = &PTR_FUN_005fd954;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005c0344(param_1);
  return param_1;
}
