// Name: FUN_00572d50
// Address: 00572d50
// Address Range: [[00572d50, 00572d88]]
// Convention: unknown
// Signature: void FUN_00572d50(byte *param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00572d50(byte *param_1,byte *param_2)

{
  if ((_DAT_02de5c30 != 0) && ((*(byte *)(*param_2 + 0x2de5c41) & 1) != 0)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return;
  }
  *param_1 = *param_2;
  return;
}
