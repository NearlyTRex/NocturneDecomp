// Name: FUN_00404090
// Address: 00404090
// Address Range: [[00404090, 00404112]]
// Convention: unknown
// Signature: void FUN_00404090(int param_1,int param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404090(int param_1,int param_2,uint param_3)

{
  _DAT_01c039b0 = param_2;
  _DAT_01c039b4 = param_3;
  _DAT_01c039ac = param_1;
  _DAT_01c039a8 = param_1 << 0x10 | param_2 << 8 | param_3;
  if ((DAT_005b7624 != 0x10) && (DAT_005b7624 == 0x20)) {
    _DAT_01c039a8 =
         param_3 << (DAT_01c0063c & 0x1f) |
         param_1 << (DAT_01c00624 & 0x1f) | param_2 << (DAT_01c00630 & 0x1f);
  }
  if (_DAT_01c02594 == 0) {
    return;
  }
  FUN_00532af0(param_1,param_2,param_3);
  return;
}
