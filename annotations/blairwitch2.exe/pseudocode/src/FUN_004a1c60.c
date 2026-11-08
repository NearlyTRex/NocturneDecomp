// Name: FUN_004a1c60
// Address: 004a1c60
// Address Range: [[004a1c60, 004a1cfd]]
// Convention: unknown
// Signature: undefined4 FUN_004a1c60(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a1c60(int param_1,int param_2)

{
  if ((((0 < _DAT_01caf110) && (0x0000004A <= param_1)) && (0x000001AE <= param_2)) &&
     ((param_1 < 0x0000004A + _DAT_01caf1fc && (param_2 < 0x000001AE + _DAT_01caf200)))) {
    return 0xffffffff;
  }
  if (((_DAT_01caf110 < _DAT_01caf278 + -2) && (0x000001F4 <= param_1)) &&
     ((0x000001AE <= param_2 &&
      ((param_1 < 0x000001F4 + _DAT_01caf210 && (param_2 < _DAT_01caf214 + 0x000001AE)))))) {
    return 1;
  }
  return 0;
}
