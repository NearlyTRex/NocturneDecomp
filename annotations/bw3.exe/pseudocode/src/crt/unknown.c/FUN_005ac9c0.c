// Name: crt_unknown.c_FUN_005ac9c0
// Address: 005ac9c0
// Address Range: [[005ac9c0, 005ac9fb]]
// Convention: unknown
// Signature: ushort crt_unknown_c_FUN_005ac9c0(byte *param_1)

#include "nocturne.h"

ushort FUN_005ac9c0(byte *param_1)

{
  if ((g_INT_02d25930 != 0) && ((g_CHAR_ARRAY_02d25941[*param_1] & 1U) != 0)) {
    return CONCAT11(*param_1,param_1[1]);
  }
  return (ushort)*param_1;
}
