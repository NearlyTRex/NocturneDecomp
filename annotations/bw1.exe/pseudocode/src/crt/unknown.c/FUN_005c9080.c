// Name: crt_unknown.c_FUN_005c9080
// Address: 005c9080
// Address Range: [[005c9080, 005c90bb]]
// Convention: unknown
// Signature: ushort crt_unknown_c_FUN_005c9080(byte *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_005c9080(byte *param_1)

{
  if ((_DAT_02c9f6e0 != 0) && ((*(byte *)(*param_1 + 0x2c9f6f1) & 1) != 0)) {
    return CONCAT11(*param_1,param_1[1]);
  }
  return (ushort)*param_1;
}
