// Name: FUN_0059bf70
// Address: 0059bf70
// Address Range: [[0059bf70, 0059bfbd]]
// Convention: unknown
// Signature: undefined4 FUN_0059bf70(undefined4 param_1,byte param_2)

#include "nocturne.h"

uint FUN_0059bf70(uint param_1,byte param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_005b7fa7(param_1,0x5fe5b0);
    FUN_005b7fce(uVar1);
    return param_1;
  }
  uVar1 = FUN_0059ab50(param_1,1);
  if ((param_2 & 2) == 0) {
    return uVar1;
  }
  FUN_005b7fdc(uVar1);
  return uVar1;
}
