// Name: FUN_0055d360
// Address: 0055d360
// Address Range: [[0055d360, 0055d3b5]]
// Convention: unknown
// Signature: void FUN_0055d360(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055d360(void)

{
  int iVar1;
  uint uVar2;
  int *apiStack_194 [101];
  
  if (_DAT_02cf49d0 != (int *)0x0) {
    apiStack_194[0] = _DAT_02cf49d0;
    iVar1 = (**(code **)(*_DAT_02cf49d0 + 0x44))();
    if (iVar1 != 0) {
      uVar2 = FUN_0055a670(iVar1);
      FUN_005a28c0(apiStack_194,"DirectSux: Unable to %s.  (%s)",
                   "Commit hardware sfx 3d buffer settings",uVar2);
      FUN_0055a560(apiStack_194);
      return;
    }
  }
  return;
}
