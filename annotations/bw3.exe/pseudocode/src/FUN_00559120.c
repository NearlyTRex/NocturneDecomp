// Name: FUN_00559120
// Address: 00559120
// Address Range: [[00559120, 00559196]]
// Convention: unknown
// Signature: void FUN_00559120(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00559120(void)

{
  int iVar1;
  
  if (_DAT_02cf3280 != (int *)0x0) {
    iVar1 = FUN_00581950(_DAT_02cf3418,(double)(_DAT_02cf340c * _DAT_005d3d5e));
    if (iVar1 != 0) {
      _DAT_02cf341c = _DAT_02cf341c + 1;
      (**(code **)(*_DAT_02cf3280 + 0x10))(_DAT_02cf3280);
      FUN_0055a1b0(0);
      _DAT_02cf341c = _DAT_02cf341c + -1;
      FUN_00581990(_DAT_02cf3418);
      return;
    }
  }
  return;
}
