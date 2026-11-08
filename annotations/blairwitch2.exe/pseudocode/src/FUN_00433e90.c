// Name: FUN_00433e90
// Address: 00433e90
// Address Range: [[00433e90, 00433ed8]]
// Convention: unknown
// Signature: undefined4 * FUN_00433e90(undefined4 *param_1,uint param_2)

#include "nocturne.h"

uint * FUN_00433e90(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,&DAT_005f4370);
    FUN_005b7fce(uVar1);
    return param_1;
  }
  *param_1 = &PTR_FUN_005f4224;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_005b7fdc(param_1);
  return param_1;
}
