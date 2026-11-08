// Name: thunk_FUN_00558010
// Address: 0055fcc0
// Address Range: [[0055fcc0, 0055fcc4]]
// Convention: unknown
// Signature: void thunk_FUN_00558010(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00558010(void)

{
  if (0 < _DAT_02ce71ec) {
    return;
  }
  _DAT_02ce71ec = _DAT_02ce71ec + 1;
  FUN_00558250();
  FUN_005587e0();
  FUN_00558ce0();
  FUN_00558ab0();
  FUN_00557800();
  _DAT_02ce71ec = _DAT_02ce71ec + -1;
  return;
}
