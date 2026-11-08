// Name: FUN_00405a20
// Address: 00405a20
// Address Range: [[00405a20, 00405abc]]
// Convention: unknown
// Signature: undefined * FUN_00405a20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_00405a20(int param_1)

{
  if (_DAT_01c38b40 == 0) {
    if (DAT_006141c0 == 0x20) {
      _DAT_01c35e6c = FUN_0055d0b3;
    }
    else {
      _DAT_01c35e6c = FUN_0055d2e9;
    }
  }
  else if (DAT_006141c0 == 0x20) {
    _DAT_01c35e6c = (code *)&LAB_0055b3b1;
  }
  else {
    _DAT_01c35e6c = (code *)&LAB_0055bb93;
  }
  _DAT_01c38b58 = 0;
  _DAT_01c38b54 = 1;
  if (DAT_0070ca6c != 0) {
    FUN_004abdd0(param_1 + 0x18,*(uint *)(param_1 + 4));
    return &DAT_0070ca84;
  }
  FUN_00431d90(*(uint *)(param_1 + 4),param_1 + 0x18);
  return &DAT_0070ca84;
}
