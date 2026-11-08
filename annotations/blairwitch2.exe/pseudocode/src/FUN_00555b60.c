// Name: FUN_00555b60
// Address: 00555b60
// Address Range: [[00555b60, 00555c0d]]
// Convention: unknown
// Signature: undefined4 FUN_00555b60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00555b60(void)

{
  uint uVar1;
  int iVar2;
  int *piStack_1fc;
  uint *puStack_1f8;
  uint auStack_64 [4];
  int iStack_54;
  
  if (_DAT_0264a5c4 == (int *)0x0) {
    uVar1 = 0;
  }
  else if (_DAT_0264a5d0 == (int *)0x0) {
    puStack_1f8 = (uint *)0x60;
    piStack_1fc = _DAT_0264a5d0;
    FUN_005b77c0(auStack_64);
    puStack_1f8 = auStack_64;
    auStack_64[0] = 0x60;
    piStack_1fc = _DAT_0264a5c4;
    iVar2 = (**(code **)(*_DAT_0264a5c4 + 0x10))();
    if (iVar2 != 0) {
      uVar1 = FUN_00554ad0(iVar2);
      FUN_005b7790(&piStack_1fc,"DirectSux: Unable to %s.  (%s)",
                   "Querry DirectSound capabilities",uVar1);
      FUN_005549c0(&piStack_1fc);
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
