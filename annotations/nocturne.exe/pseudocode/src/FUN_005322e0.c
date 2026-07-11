// Name: FUN_005322e0
// Address: 005322e0
// Address Range: [[005322e0, 00532317]]
// Convention: unknown
// Signature: undefined4 FUN_005322e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005322e0(void)

{
  int iVar1;
  
  if ((_DAT_01c02594 != 0) && (iVar1 = (*_DAT_02dc9d94)(), iVar1 != 0)) {
    _DAT_02dc9e20 = DAT_005b7624;
    _DAT_02dc9e24 = 1;
    DAT_005b7624 = _DAT_02dc9e1c;
    return 1;
  }
  return 0;
}
