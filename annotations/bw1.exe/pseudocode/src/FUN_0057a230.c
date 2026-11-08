// Name: FUN_0057a230
// Address: 0057a230
// Address Range: [[0057a230, 0057a285]]
// Convention: unknown
// Signature: void FUN_0057a230(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057a230(void)

{
  int iVar1;
  uint uVar2;
  int *apiStack_194 [101];
  
  if (_DAT_02c81da0 != (int *)0x0) {
    apiStack_194[0] = _DAT_02c81da0;
    iVar1 = (**(code **)(*_DAT_02c81da0 + 0x44))();
    if (iVar1 != 0) {
      uVar2 = FUN_00577500(iVar1);
      FUN_005bfb40(apiStack_194,"DirectSux: Unable to %s.  (%s)",
                   "Commit hardware sfx 3d buffer settings",uVar2);
      FUN_005773f0(apiStack_194);
      return;
    }
  }
  return;
}
