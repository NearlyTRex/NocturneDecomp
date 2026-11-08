// Name: FUN_00557800
// Address: 00557800
// Address Range: [[00557800, 00557855]]
// Convention: unknown
// Signature: void FUN_00557800(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557800(void)

{
  int iVar1;
  uint uVar2;
  int *apiStack_194 [101];
  
  if (_DAT_0264a5d0 != (int *)0x0) {
    apiStack_194[0] = _DAT_0264a5d0;
    iVar1 = (**(code **)(*_DAT_0264a5d0 + 0x44))();
    if (iVar1 != 0) {
      uVar2 = FUN_00554ad0(iVar1);
      FUN_005b7790(apiStack_194,"DirectSux: Unable to %s.  (%s)",
                   "Commit hardware sfx 3d buffer settings",uVar2);
      FUN_005549c0(apiStack_194);
      return;
    }
  }
  return;
}
