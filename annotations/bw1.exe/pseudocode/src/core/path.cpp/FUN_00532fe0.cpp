// Name: FUN_00532fe0
// Address: 00532fe0
// Address Range: [[00532fe0, 00533059]]
// Convention: unknown
// Signature: int FUN_00532fe0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00532fe0(int param_1)

{
  *(uint *)(param_1 + 0x138b8) = 0x7fffffff;
  *(uint *)(param_1 + 0x138b4) = *(uint *)(param_1 + 0x138b8);
  *(uint *)(param_1 + 0x138b0) = *(uint *)(param_1 + 0x138b8);
  FUN_00535200(param_1);
  if (199 < _DAT_01e6be48) {
    _DAT_01d1d400 = "..\\core\\path.cpp";
    _DAT_01d1d404 = 0x123;
    FUN_005030e0("Too many pathmaps!");
  }
  *(int *)(_DAT_01e6be48 * 4 + 0x1e6be4c) = param_1;
  _DAT_01e6be48 = _DAT_01e6be48 + 1;
  return param_1;
}
