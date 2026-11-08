// Name: FUN_0055f550
// Address: 0055f550
// Address Range: [[0055f550, 0055f588]]
// Convention: unknown
// Signature: undefined4 FUN_0055f550(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055f550(int param_1)

{
  uint uVar1;
  
  if (_DAT_0264bd00 != 0) {
    DAT_006141c0 = _DAT_0264bcfc;
    _DAT_01c37788 = 1;
    if (param_1 != 0) {
      _DAT_0264bd00 = 0;
    }
    uVar1 = (*_DAT_0264bbdc)();
    return uVar1;
  }
  return 0;
}
