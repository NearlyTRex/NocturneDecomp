// Name: crt_unknown.c_FUN_005c90c0
// Address: 005c90c0
// Address Range: [[005c90c0, 005c90ed]]
// Convention: unknown
// Signature: byte * crt_unknown_c_FUN_005c90c0(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005c90c0(byte *param_1)

{
  if (((_DAT_02c9f6e0 != 0) && ((*(byte *)(*param_1 + 0x2c9f6f1) & 1) != 0)) && (param_1[1] != 0)) {
    return param_1 + 2;
  }
  return param_1 + 1;
}
