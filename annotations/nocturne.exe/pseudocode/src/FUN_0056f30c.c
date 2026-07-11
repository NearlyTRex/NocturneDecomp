// Name: FUN_0056f30c
// Address: 0056f30c
// Address Range: [[0056f30c, 0056f36a]]
// Convention: unknown
// Signature: undefined4 FUN_0056f30c(LPVOID param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056f30c(LPVOID param_1)

{
  uint uVar1;
  BOOL BVar2;
  
  uVar1 = *(uint *)((int)param_1 + 8);
  BVar2 = VirtualFree(param_1,0,0x8000);
  if (BVar2 != 0) {
    if ((param_1 == (LPVOID)DAT_005c1684) && (DAT_005c1684 = uVar1, uVar1 == 0)) {
      DAT_005c1684 = DAT_005c1680;
      DAT_005c1688 = 0;
    }
    if (param_1 == _DAT_02de4e10) {
      _DAT_02de4e10 = (LPVOID)((uint)param_1 ^ (uint)_DAT_02de4e10);
    }
    return 0;
  }
  return 0xffffffff;
}
