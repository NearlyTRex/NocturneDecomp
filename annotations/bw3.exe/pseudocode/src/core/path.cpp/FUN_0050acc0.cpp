// Name: FUN_0050acc0
// Address: 0050acc0
// Address Range: [[0050acc0, 0050ad39]]
// Convention: unknown
// Signature: int FUN_0050acc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0050acc0(int param_1)

{
  *(uint *)(param_1 + 0x138b8) = 0x7fffffff;
  *(uint *)(param_1 + 0x138b4) = *(uint *)(param_1 + 0x138b8);
  *(uint *)(param_1 + 0x138b0) = *(uint *)(param_1 + 0x138b8);
  FUN_0050cee0(param_1);
  if (199 < _DAT_01ec1518) {
    _DAT_01d71de0 = "..\\core\\path.cpp";
    _DAT_01d71de4 = 0x123;
    FUN_004e4330("Too many pathmaps!");
  }
  *(int *)(_DAT_01ec1518 * 4 + 0x1ec151c) = param_1;
  _DAT_01ec1518 = _DAT_01ec1518 + 1;
  return param_1;
}
