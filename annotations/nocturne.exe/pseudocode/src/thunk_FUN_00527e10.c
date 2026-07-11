// Name: thunk_FUN_00527e10
// Address: 0052dd80
// Address Range: [[0052dd80, 0052dd84]]
// Convention: unknown
// Signature: void thunk_FUN_00527e10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00527e10(void)

{
  if (0 < _DAT_02dbd34c) {
    return;
  }
  _DAT_02dbd34c = _DAT_02dbd34c + 1;
  FUN_00528080();
  FUN_00527c30();
  _DAT_02dbd34c = _DAT_02dbd34c + -1;
  return;
}
