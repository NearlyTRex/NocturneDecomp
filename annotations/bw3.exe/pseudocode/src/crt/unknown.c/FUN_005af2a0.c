// Name: crt_unknown.c_FUN_005af2a0
// Address: 005af2a0
// Address Range: [[005af2a0, 005af2d9]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005af2a0(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005af2a0(byte *param_1)

{
  if (*param_1 == 0) {
    return 1;
  }
  if (((_DAT_02d25930 != 0) && ((*(byte *)(*param_1 + 0x2d25941) & 1) != 0)) && (param_1[1] == 0)) {
    return 2;
  }
  return 0;
}
