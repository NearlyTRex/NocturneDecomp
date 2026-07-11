// Name: FUN_00574710
// Address: 00574710
// Address Range: [[00574710, 00574754]]
// Convention: unknown
// Signature: byte FUN_00574710(uint param_1)

#include "nocturne.h"

byte FUN_00574710(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00574760(param_1);
  if (iVar1 == 0) {
    return (&DAT_005c168c)[(byte)((char)param_1 + 1)] & 0x80;
  }
  if ((0x8280 < param_1) && (param_1 < 0x829b)) {
    return 1;
  }
  return 0;
}
