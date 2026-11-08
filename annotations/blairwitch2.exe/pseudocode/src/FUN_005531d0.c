// Name: FUN_005531d0
// Address: 005531d0
// Address Range: [[005531d0, 0055326d]]
// Convention: unknown
// Signature: int FUN_005531d0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005531d0(float param_1)

{
  int iVar1;
  
  iVar1 = FUN_00553270();
  if (iVar1 != 0) {
    _DAT_0264900c = param_1;
    if (param_1 < (float)_DAT_005e919e) {
      _DAT_0264900c = 0.002;
    }
    _DAT_02649010 = 0;
    _DAT_02649014 = 0;
    iVar1 = FUN_0058fd20(&LAB_00553180,0);
    if ((iVar1 != 0) && (iVar1 = FUN_0058fd50(iVar1,3), iVar1 != 0)) {
      iVar1 = 0;
      do {
        if (_DAT_02649010 != 0) {
          return _DAT_02649010;
        }
        iVar1 = iVar1 + 1;
        FUN_0058fd90(0x47ae147b,0x3f847ae1);
      } while (iVar1 < 100);
      return _DAT_02649010;
    }
  }
  return 0;
}
