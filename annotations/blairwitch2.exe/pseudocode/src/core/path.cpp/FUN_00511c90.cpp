// Name: FUN_00511c90
// Address: 00511c90
// Address Range: [[00511c90, 00511d09]]
// Convention: unknown
// Signature: int FUN_00511c90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00511c90(int param_1)

{
  *(uint *)(param_1 + 0x138b8) = 0x7fffffff;
  *(uint *)(param_1 + 0x138b4) = *(uint *)(param_1 + 0x138b8);
  *(uint *)(param_1 + 0x138b0) = *(uint *)(param_1 + 0x138b8);
  FUN_00513eb0(param_1);
  if (199 < _DAT_01e4fed8) {
    _DAT_01d046a0 = "..\\core\\path.cpp";
    _DAT_01d046a4 = 0x123;
    FUN_004e4500("Too many pathmaps!");
  }
  *(int *)(_DAT_01e4fed8 * 4 + 0x1e4fedc) = param_1;
  _DAT_01e4fed8 = _DAT_01e4fed8 + 1;
  return param_1;
}
