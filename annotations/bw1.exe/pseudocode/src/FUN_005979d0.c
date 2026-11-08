// Name: FUN_005979d0
// Address: 005979d0
// Address Range: [[005979d0, 00597a11]]
// Convention: unknown
// Signature: void FUN_005979d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005979d0(void)

{
  int iVar1;
  
  FUN_005965c0(_DAT_02c8a680);
  iVar1 = _DAT_02c8a680;
  if (_DAT_02c8a680 == 0) {
    _DAT_02c8a680 = 0;
    return;
  }
  FUN_005965d0(_DAT_02c8a680);
  FUN_005c0344(iVar1);
  _DAT_02c8a680 = 0;
  return;
}
