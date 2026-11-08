// Name: FUN_00553580
// Address: 00553580
// Address Range: [[00553580, 005535f6]]
// Convention: unknown
// Signature: void FUN_00553580(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00553580(void)

{
  int iVar1;
  
  if (_DAT_02648e80 != (int *)0x0) {
    iVar1 = FUN_0058fcc0(_DAT_02649018,(double)(_DAT_0264900c * _DAT_005e926a));
    if (iVar1 != 0) {
      _DAT_0264901c = _DAT_0264901c + 1;
      (**(code **)(*_DAT_02648e80 + 0x10))(_DAT_02648e80);
      FUN_00554610(0);
      _DAT_0264901c = _DAT_0264901c + -1;
      FUN_0058fd00(_DAT_02649018);
      return;
    }
  }
  return;
}
