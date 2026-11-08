// Name: FUN_00558d70
// Address: 00558d70
// Address Range: [[00558d70, 00558e0d]]
// Convention: unknown
// Signature: int FUN_00558d70(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00558d70(float param_1)

{
  int iVar1;
  
  iVar1 = FUN_00558e10();
  if (iVar1 != 0) {
    _DAT_02cf340c = param_1;
    if (param_1 < (float)_DAT_005d3c92) {
      _DAT_02cf340c = 0.002;
    }
    _DAT_02cf3410 = 0;
    _DAT_02cf3414 = 0;
    iVar1 = FUN_005819b0(&LAB_00558d20,0);
    if ((iVar1 != 0) && (iVar1 = FUN_005819e0(iVar1,3), iVar1 != 0)) {
      iVar1 = 0;
      do {
        if (_DAT_02cf3410 != 0) {
          return _DAT_02cf3410;
        }
        iVar1 = iVar1 + 1;
        FUN_00581a40(0x47ae147b,0x3f847ae1);
      } while (iVar1 < 100);
      return _DAT_02cf3410;
    }
  }
  return 0;
}
