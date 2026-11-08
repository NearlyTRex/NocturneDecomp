// Name: FUN_00551a00
// Address: 00551a00
// Address Range: [[00551a00, 00551a4e]]
// Convention: unknown
// Signature: void FUN_00551a00(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551a00(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = DAT_00612560;
  if ((*(int *)(0x01D2C900 + 0x1008) == 0) && (_DAT_01fe5764 < 100)) {
    *(uint *)(_DAT_01fe5764 * 4 + 0x1fe5768) = param_2;
    uVar1 = FUN_00484180(uVar1);
    *(uint *)(_DAT_01fe5764 * 4 + 0x1fe58f8) = uVar1;
    _DAT_01fe5764 = _DAT_01fe5764 + 1;
    return;
  }
  return;
}
