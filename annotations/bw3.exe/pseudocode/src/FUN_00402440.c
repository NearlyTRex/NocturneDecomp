// Name: FUN_00402440
// Address: 00402440
// Address Range: [[00402440, 004024a1]]
// Convention: unknown
// Signature: void FUN_00402440(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402440(uint param_1,uint param_2,uint param_3)

{
  if (DAT_005f076c != 0) {
    FUN_00401ec0(param_1,param_2,param_3,_DAT_01c6b5b0,_DAT_01c6b5b4,DAT_005f0770);
    return;
  }
  FUN_00401f50(param_1,param_2,param_3,_DAT_01c6b5b0,_DAT_01c6b5b4,DAT_005f0770);
  return;
}
