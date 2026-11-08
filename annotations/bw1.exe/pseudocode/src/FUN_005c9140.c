// Name: FUN_005c9140
// Address: 005c9140
// Address Range: [[005c9140, 005c91c2]]
// Convention: unknown
// Signature: byte * FUN_005c9140(byte *param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005c9140(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  
  if (param_1 < param_2) {
    pbVar1 = param_2 + -1;
    if ((_DAT_02c9f6e0 != 0) && ((*(byte *)(*pbVar1 + 0x2c9f6f1) & 1) != 0)) {
      return param_2 + -2;
    }
    while (pbVar1 = pbVar1 + -1, param_1 <= pbVar1) {
      if ((_DAT_02c9f6e0 == 0) || ((*(byte *)(*pbVar1 + 0x2c9f6f1) & 1) == 0)) break;
    }
    param_2 = param_2 + (-1 - ((int)param_2 - (int)pbVar1) % 2);
  }
  else {
    param_2 = (byte *)0x0;
  }
  return param_2;
}
