// Name: FUN_005b2080
// Address: 005b2080
// Address Range: [[005b2080, 005b20c4]]
// Convention: unknown
// Signature: byte FUN_005b2080(uint param_1)

#include "nocturne.h"

byte FUN_005b2080(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005b20d0(param_1);
  if (iVar1 == 0) {
    return (&DAT_006074b8)[(byte)((char)param_1 + 1)] & 0x80;
  }
  if ((0x8280 < param_1) && (param_1 < 0x829b)) {
    return 1;
  }
  return 0;
}
