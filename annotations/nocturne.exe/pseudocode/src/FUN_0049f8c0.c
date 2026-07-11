// Name: FUN_0049f8c0
// Address: 0049f8c0
// Address Range: [[0049f8c0, 0049f92e]]
// Convention: unknown
// Signature: void FUN_0049f8c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049f8c0(void)

{
  uint uVar1;
  
  uVar1 = FUN_004eda40(0x01CEA280,0,0x2c);
  FUN_00563cc0(uVar1);
  FUN_00563cc0(&DAT_01c781c0,0,600);
  _DAT_01c78418 = 0;
  FUN_00558d60(DAT_005b761c / 2,DAT_005b7620 / 2);
  _DAT_01c7841c = *(uint *)(0x01E57284 + 0x15aabc);
  return;
}
