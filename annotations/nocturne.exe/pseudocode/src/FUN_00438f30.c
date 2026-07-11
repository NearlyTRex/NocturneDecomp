// Name: FUN_00438f30
// Address: 00438f30
// Address Range: [[00438f30, 00438f78]]
// Convention: unknown
// Signature: undefined4 * FUN_00438f30(undefined4 *param_1,uint param_2)

#include "nocturne.h"

uint * FUN_00438f30(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_0056445f(param_1,&DAT_0059b470);
    FUN_00564486(uVar1);
    return param_1;
  }
  *param_1 = &PTR_FUN_0059b3e4;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_00564494(param_1);
  return param_1;
}
