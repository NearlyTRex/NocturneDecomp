// Name: thunk_FUN_00552470
// Address: 0055a160
// Address Range: [[0055a160, 0055a164]]
// Convention: unknown
// Signature: void thunk_FUN_00552470(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00552470(void)

{
  if (0 < _DAT_0263ceec) {
    return;
  }
  _DAT_0263ceec = _DAT_0263ceec + 1;
  FUN_005526b0();
  FUN_00552c40();
  FUN_00553140();
  FUN_00552f10();
  FUN_00551c70();
  _DAT_0263ceec = _DAT_0263ceec + -1;
  return;
}
