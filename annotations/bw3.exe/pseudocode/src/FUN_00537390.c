// Name: FUN_00537390
// Address: 00537390
// Address Range: [[00537390, 005373de]]
// Convention: unknown
// Signature: void FUN_00537390(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00537390(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = DAT_005f2afc;
  if ((*(int *)(0x01D81080 + 0x1008) == 0) && (_DAT_0203aec4 < 100)) {
    *(uint *)(_DAT_0203aec4 * 4 + 0x203aec8) = param_2;
    uVar1 = FUN_0046d860(uVar1);
    *(uint *)(_DAT_0203aec4 * 4 + 0x203b058) = uVar1;
    _DAT_0203aec4 = _DAT_0203aec4 + 1;
    return;
  }
  return;
}
