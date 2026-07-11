// Name: FUN_005458d0
// Address: 005458d0
// Address Range: [[005458d0, 00545911]]
// Convention: unknown
// Signature: void FUN_005458d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005458d0(void)

{
  int iVar1;
  
  FUN_00544e50(_DAT_02dd0f84);
  iVar1 = _DAT_02dd0f84;
  if (_DAT_02dd0f84 == 0) {
    _DAT_02dd0f84 = 0;
    return;
  }
  FUN_00544e60(_DAT_02dd0f84);
  FUN_00564494(iVar1);
  _DAT_02dd0f84 = 0;
  return;
}
