// Name: FUN_0055b700
// Address: 0055b700
// Address Range: [[0055b700, 0055b7ad]]
// Convention: unknown
// Signature: undefined4 FUN_0055b700(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055b700(void)

{
  uint uVar1;
  int iVar2;
  int *piStack_1fc;
  uint *puStack_1f8;
  uint auStack_64 [4];
  int iStack_54;
  
  if (_DAT_02cf49c4 == (int *)0x0) {
    uVar1 = 0;
  }
  else if (_DAT_02cf49d0 == (int *)0x0) {
    puStack_1f8 = (uint *)0x60;
    piStack_1fc = _DAT_02cf49d0;
    FUN_005a28f0(auStack_64);
    puStack_1f8 = auStack_64;
    auStack_64[0] = 0x60;
    piStack_1fc = _DAT_02cf49c4;
    iVar2 = (**(code **)(*_DAT_02cf49c4 + 0x10))();
    if (iVar2 != 0) {
      uVar1 = FUN_0055a670(iVar2);
      FUN_005a28c0(&piStack_1fc,"DirectSux: Unable to %s.  (%s)",
                   "Querry DirectSound capabilities",uVar1);
      FUN_0055a560(&piStack_1fc);
      return 0;
    }
    uVar1 = 0;
    if (iStack_54 != 0) {
      return 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}
