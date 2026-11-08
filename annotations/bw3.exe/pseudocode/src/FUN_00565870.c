// Name: FUN_00565870
// Address: 00565870
// Address Range: [[00565870, 005658a8]]
// Convention: unknown
// Signature: undefined4 FUN_00565870(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00565870(int param_1)

{
  uint uVar1;
  
  if (_DAT_02cf612c != 0) {
    DAT_005fba20 = _DAT_02cf6128;
    _DAT_01c6cee8 = 1;
    if (param_1 != 0) {
      _DAT_02cf612c = 0;
    }
    uVar1 = (*_DAT_02cf6008)();
    return uVar1;
  }
  return 0;
}
