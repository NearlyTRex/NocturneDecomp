// Name: thunk_FUN_0056a9c0
// Address: 004037a0
// Address Range: [[004037a0, 004037a4]]
// Convention: unknown
// Signature: void thunk_FUN_0056a9c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0056a9c0(void)

{
  int iVar1;
  
  FUN_005695b0(_DAT_02cfd0d0);
  iVar1 = _DAT_02cfd0d0;
  if (_DAT_02cfd0d0 == 0) {
    _DAT_02cfd0d0 = 0;
    return;
  }
  FUN_005695c0(_DAT_02cfd0d0);
  FUN_005a30c4(iVar1);
  _DAT_02cfd0d0 = 0;
  return;
}
