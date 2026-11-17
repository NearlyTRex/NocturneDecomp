// Name: crt_unknown.c_FUN_005c0dc0
// Address: 005c0dc0
// Address Range: [[005c0dc0, 005c0dfb]]
// Convention: unknown
// Signature: ushort crt_unknown_c_FUN_005c0dc0(byte *param_1)

#include "nocturne.h"

ushort FUN_005c0dc0(byte *param_1)

{
  if ((g_INT_026807f0 != 0) && ((g_CHAR_ARRAY_02680801[*param_1] & 1U) != 0)) {
    return CONCAT11(*param_1,param_1[1]);
  }
  return (ushort)*param_1;
}
