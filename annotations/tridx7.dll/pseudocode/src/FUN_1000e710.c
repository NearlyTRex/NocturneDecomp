// Name: FUN_1000e710
// Address: 1000e710
// Address Range: [[1000e710, 1000e751]]
// Convention: unknown
// Signature: short FUN_1000e710(ushort param_1)

#include "nocturne.h"

short FUN_1000e710(ushort param_1)

{
  short sVar1;
  
  if ((100 < param_1) && (sVar1 = FUN_1000e760(param_1), sVar1 != 0)) {
    return sVar1;
  }
  if ((ushort)((uint)param_1 % 100) < 0x5b) {
    return *(short *)(&DAT_10017f38 + ((uint)param_1 % 100) * 6);
  }
  return 0;
}
