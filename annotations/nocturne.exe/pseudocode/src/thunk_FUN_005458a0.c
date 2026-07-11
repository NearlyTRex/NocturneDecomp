// Name: thunk_FUN_005458a0
// Address: 00404480
// Address Range: [[00404480, 00404484]]
// Convention: unknown
// Signature: void thunk_FUN_005458a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_005458a0(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0xd300c);
  if (iVar1 == 0) {
    _DAT_02dd0f84 = iVar1;
    return;
  }
  _DAT_02dd0f84 = FUN_00544de0(iVar1,0x400);
  return;
}
