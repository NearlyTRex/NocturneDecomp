// Name: crt_unknown.c_FUN_005c9080
// Address: 005c9080
// Address Range: [[005c9080, 005c90bb]]
// Convention: unknown
// Signature: ushort crt_unknown_c_FUN_005c9080(byte *param_1)

#include "nocturne.h"

ushort FUN_005c9080(byte *param_1)

{
  if ((g_INT_02c9f6e0 != 0) && ((g_CHAR_ARRAY_02c9f6f1[*param_1] & 1U) != 0)) {
    return CONCAT11(*param_1,param_1[1]);
  }
  return (ushort)*param_1;
}
