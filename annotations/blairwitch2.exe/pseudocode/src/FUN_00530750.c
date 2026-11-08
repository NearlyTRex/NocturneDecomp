// Name: FUN_00530750
// Address: 00530750
// Address Range: [[00530750, 0053079e]]
// Convention: unknown
// Signature: void FUN_00530750(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00530750(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = DAT_0060b280;
  if ((*(int *)(0x01D182F0 + 0x1008) == 0) && (_DAT_01fc97b0 < 100)) {
    *(uint *)(_DAT_01fc97b0 * 4 + 0x1fc97b4) = param_2;
    uVar1 = FUN_0046bc80(uVar1);
    *(uint *)(_DAT_01fc97b0 * 4 + 0x1fc9944) = uVar1;
    _DAT_01fc97b0 = _DAT_01fc97b0 + 1;
    return;
  }
  return;
}
