// Name: FUN_004ba540
// Address: 004ba540
// Address Range: [[004ba540, 004ba5dd]]
// Convention: unknown
// Signature: undefined4 FUN_004ba540(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ba540(int param_1,int param_2)

{
  if ((((0 < _DAT_01cc7b90) && (0x0000004A <= param_1)) && (0x000001AE <= param_2)) &&
     ((param_1 < 0x0000004A + _DAT_01cc7c90 && (param_2 < 0x000001AE + _DAT_01cc7c94)))) {
    return 0xffffffff;
  }
  if (((_DAT_01cc7b90 < _DAT_01cc7d0c + -2) && (0x000001F4 <= param_1)) &&
     ((0x000001AE <= param_2 &&
      ((param_1 < 0x000001F4 + _DAT_01cc7ca4 && (param_2 < _DAT_01cc7ca8 + 0x000001AE)))))) {
    return 1;
  }
  return 0;
}
