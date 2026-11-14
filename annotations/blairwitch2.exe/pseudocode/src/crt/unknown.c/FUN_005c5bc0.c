// Name: crt_unknown.c_FUN_005c5bc0
// Address: 005c5bc0
// Address Range: [[005c5bc0, 005c5bf8]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c5bc0(byte *param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c5bc0(byte *param_1,byte *param_2)

{
  if ((_DAT_026807f0 != 0) && ((*(byte *)(*param_2 + 0x2680801) & 1) != 0)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return;
  }
  *param_1 = *param_2;
  return;
}
