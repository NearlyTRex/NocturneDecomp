// Name: FUN_0056dab0
// Address: 0056dab0
// Address Range: [[0056dab0, 0056db32]]
// Convention: unknown
// Signature: byte * FUN_0056dab0(byte *param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0056dab0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  
  if (param_1 < param_2) {
    pbVar1 = param_2 + -1;
    if ((_DAT_02de5c30 != 0) && ((*(byte *)(*pbVar1 + 0x2de5c41) & 1) != 0)) {
      return param_2 + -2;
    }
    while (pbVar1 = pbVar1 + -1, param_1 <= pbVar1) {
      if ((_DAT_02de5c30 == 0) || ((*(byte *)(*pbVar1 + 0x2de5c41) & 1) == 0)) break;
    }
    param_2 = param_2 + (-1 - ((int)param_2 - (int)pbVar1) % 2);
  }
  else {
    param_2 = (byte *)0x0;
  }
  return param_2;
}
