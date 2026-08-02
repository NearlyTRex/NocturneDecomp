// Name: crt_unknown.c_FUN_00572e00
// Address: 00572e00
// Address Range: [[00572e00, 00572e5b]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_00572e00(byte *param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00572e00(byte *param_1,byte *param_2)

{
  if (*param_1 != *param_2) {
    return (uint)*param_1 - (uint)*param_2;
  }
  if ((_DAT_02de5c30 != 0) && ((*(byte *)(*param_1 + 0x2de5c41) & 1) != 0)) {
    if (param_1[1] != param_2[1]) {
      return (uint)param_1[1] - (uint)param_2[1];
    }
  }
  return 0;
}
