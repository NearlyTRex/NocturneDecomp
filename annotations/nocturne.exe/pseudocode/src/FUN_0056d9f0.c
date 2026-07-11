// Name: FUN_0056d9f0
// Address: 0056d9f0
// Address Range: [[0056d9f0, 0056da2b]]
// Convention: unknown
// Signature: ushort FUN_0056d9f0(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_0056d9f0(byte *param_1)

{
  if ((_DAT_02de5c30 != 0) && ((*(byte *)(*param_1 + 0x2de5c41) & 1) != 0)) {
    return CONCAT11(*param_1,param_1[1]);
  }
  return (ushort)*param_1;
}
