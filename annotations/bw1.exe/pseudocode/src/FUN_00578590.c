// Name: FUN_00578590
// Address: 00578590
// Address Range: [[00578590, 0057863d]]
// Convention: unknown
// Signature: undefined4 FUN_00578590(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00578590(void)

{
  uint uVar1;
  int iVar2;
  int *piStack_1fc;
  uint *puStack_1f8;
  uint auStack_64 [4];
  int iStack_54;
  
  if (_DAT_02c81d94 == (int *)0x0) {
    uVar1 = 0;
  }
  else if (_DAT_02c81da0 == (int *)0x0) {
    puStack_1f8 = (uint *)0x60;
    piStack_1fc = _DAT_02c81da0;
    FUN_005bfb70(auStack_64);
    puStack_1f8 = auStack_64;
    auStack_64[0] = 0x60;
    piStack_1fc = _DAT_02c81d94;
    iVar2 = (**(code **)(*_DAT_02c81d94 + 0x10))();
    if (iVar2 != 0) {
      uVar1 = FUN_00577500(iVar2);
      FUN_005bfb40(&piStack_1fc,"DirectSux: Unable to %s.  (%s)",
                   "Querry DirectSound capabilities",uVar1);
      FUN_005773f0(&piStack_1fc);
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
