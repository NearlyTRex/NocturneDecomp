// Name: crt_unknown.c_FUN_005ac9c0
// Address: 005ac9c0
// Address Range: [[005ac9c0, 005ac9fb]]
// Convention: unknown
// Signature: ushort crt_unknown_c_FUN_005ac9c0(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_005ac9c0(byte *param_1)

{
  if ((_DAT_02d25930 != 0) && ((*(byte *)(*param_1 + 0x2d25941) & 1) != 0)) {
    return CONCAT11(*param_1,param_1[1]);
  }
  return (ushort)*param_1;
}
