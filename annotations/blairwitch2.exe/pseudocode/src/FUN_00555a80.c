// Name: FUN_00555a80
// Address: 00555a80
// Address Range: [[00555a80, 00555b52]]
// Convention: unknown
// Signature: undefined4 FUN_00555a80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00555a80(void)

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
  
  puStack_1a0 = (byte *)0x555a8c;
  iVar1 = FUN_00552b30();
  if (iVar1 < 1) {
    if (_DAT_0264a5cc != (int *)0x0) {
      puStack_1a0 = auStack_c;
      puStack_1a4 = auStack_8;
      piStack_1a8 = _DAT_0264a5cc;
      iVar1 = (**(code **)(*_DAT_0264a5cc + 0x10))();
      if (iVar1 != 0) {
        uVar2 = FUN_00554ad0(iVar1);
        FUN_005b7790(&piStack_1a8,"DirectSux: Unable to %s.  (%s)",
                     "Get position of secondary buffer",uVar2);
        FUN_005549c0(&piStack_1a8);
        return 0;
      }
      uVar3 = uStack_14 / _DAT_0264a5e8;
      if (_DAT_0264a5ec <= (int)uVar3) {
        uVar3 = _DAT_0264a5ec - 1;
      }
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      do {
        if (uVar3 == _DAT_0264a5f0) {
          return 1;
        }
        iVar1 = FUN_00554c80();
      } while (iVar1 != 0);
      return 0;
    }
    uVar2 = 0;
  }
  else {
    puStack_1a0 = (byte *)0x555aaa;
    FUN_00554510();
    uVar2 = 1;
  }
  return uVar2;
}
