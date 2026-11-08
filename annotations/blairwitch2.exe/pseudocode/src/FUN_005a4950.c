// Name: FUN_005a4950
// Address: 005a4950
// Address Range: [[005a4950, 005a497b]]
// Convention: unknown
// Signature: uint FUN_005a4950(uint param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a4950(uint param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == param_1) {
    return param_2 ^ param_1;
  }
  iVar1 = FUN_0040c8f0(param_2,_DAT_02668600);
  if (iVar1 != 0) {
    return 0;
  }
  return 1;
}
