// Name: FUN_00581fa0
// Address: 00581fa0
// Address Range: [[00581fa0, 00581fd8]]
// Convention: unknown
// Signature: undefined4 FUN_00581fa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00581fa0(int param_1)

{
  uint uVar1;
  
  if (_DAT_02c834d0 != 0) {
    DAT_0061b4a0 = _DAT_02c834cc;
    _DAT_01c50948 = 1;
    if (param_1 != 0) {
      _DAT_02c834d0 = 0;
    }
    uVar1 = (*_DAT_02c833ac)();
    return uVar1;
  }
  return 0;
}
