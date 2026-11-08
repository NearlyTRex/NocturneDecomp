// Name: FUN_005aca00
// Address: 005aca00
// Address Range: [[005aca00, 005aca2d]]
// Convention: unknown
// Signature: byte * FUN_005aca00(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005aca00(byte *param_1)

{
  if (((_DAT_02d25930 != 0) && ((*(byte *)(*param_1 + 0x2d25941) & 1) != 0)) && (param_1[1] != 0)) {
    return param_1 + 2;
  }
  return param_1 + 1;
}
