// Name: FUN_0055b620
// Address: 0055b620
// Address Range: [[0055b620, 0055b6f2]]
// Convention: unknown
// Signature: undefined4 FUN_0055b620(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055b620(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piStack_1a8;
  byte *puStack_1a4;
  byte *puStack_1a0;
  uint uStack_14;
  byte auStack_c [4];
  byte auStack_8 [4];
  
  puStack_1a0 = (byte *)0x55b62c;
  iVar1 = FUN_005586d0();
  if (iVar1 < 1) {
    if (_DAT_02cf49cc != (int *)0x0) {
      puStack_1a0 = auStack_c;
      puStack_1a4 = auStack_8;
      piStack_1a8 = _DAT_02cf49cc;
      iVar1 = (**(code **)(*_DAT_02cf49cc + 0x10))();
      if (iVar1 != 0) {
        uVar2 = FUN_0055a670(iVar1);
        FUN_005a28c0(&piStack_1a8,"DirectSux: Unable to %s.  (%s)",
                     "Get position of secondary buffer",uVar2);
        FUN_0055a560(&piStack_1a8);
        return 0;
      }
      uVar3 = uStack_14 / _DAT_02cf49e8;
      if (_DAT_02cf49ec <= (int)uVar3) {
        uVar3 = _DAT_02cf49ec - 1;
      }
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      do {
        if (uVar3 == _DAT_02cf49f0) {
          return 1;
        }
        iVar1 = FUN_0055a820();
      } while (iVar1 != 0);
      return 0;
    }
    uVar2 = 0;
  }
  else {
    puStack_1a0 = (byte *)0x55b64a;
    FUN_0055a0b0();
    uVar2 = 1;
  }
  return uVar2;
}
