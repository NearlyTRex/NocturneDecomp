// Name: FUN_004a8180
// Address: 004a8180
// Address Range: [[004a8180, 004a821d]]
// Convention: unknown
// Signature: undefined4 FUN_004a8180(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a8180(int param_1,int param_2)

{
  if ((((0 < _DAT_01d19ba8) && (0x0000004A <= param_1)) && (0x000001AE <= param_2)) &&
     ((param_1 < 0x0000004A + _DAT_01d19ca8 && (param_2 < 0x000001AE + _DAT_01d19cac)))) {
    return 0xffffffff;
  }
  if (((_DAT_01d19ba8 < _DAT_01d19d68 + -2) && (0x000001F4 <= param_1)) &&
     ((0x000001AE <= param_2 &&
      ((param_1 < 0x000001F4 + _DAT_01d19cbc && (param_2 < _DAT_01d19cc0 + 0x000001AE)))))) {
    return 1;
  }
  return 0;
}
