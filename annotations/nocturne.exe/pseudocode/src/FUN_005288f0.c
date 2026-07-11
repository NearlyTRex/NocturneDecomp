// Name: FUN_005288f0
// Address: 005288f0
// Address Range: [[005288f0, 00528966]]
// Convention: unknown
// Signature: void FUN_005288f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005288f0(void)

{
  int iVar1;
  
  if (_DAT_02dc8318 != (int *)0x0) {
    iVar1 = FUN_00559bf0(_DAT_02dc84b8,_DAT_02dc84a8 * _DAT_005939b6);
    if (iVar1 != 0) {
      _DAT_02dc84bc = _DAT_02dc84bc + 1;
      (**(code **)(*_DAT_02dc8318 + 0x10))(_DAT_02dc8318);
      FUN_005298f0(0);
      _DAT_02dc84bc = _DAT_02dc84bc + -1;
      FUN_00559c30(_DAT_02dc84b8);
      return;
    }
  }
  return;
}
