// Name: FUN_005c0dc0
// Address: 005c0dc0
// Address Range: [[005c0dc0, 005c0dfb]]
// Convention: unknown
// Signature: ushort FUN_005c0dc0(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_005c0dc0(byte *param_1)

{
  if ((_DAT_026807f0 != 0) && ((*(byte *)(*param_1 + 0x2680801) & 1) != 0)) {
    return CONCAT11(*param_1,param_1[1]);
  }
  return (ushort)*param_1;
}
