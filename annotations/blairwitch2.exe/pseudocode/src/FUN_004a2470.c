// Name: FUN_004a2470
// Address: 004a2470
// Address Range: [[004a2470, 004a24ed]]
// Convention: unknown
// Signature: int FUN_004a2470(int param_1,byte param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a2470(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_01cab780;
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f7000);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x14) = &PTR_FUN_005f6f04;
  if (param_1 == iVar1) {
    _DAT_01cab780 = 0;
  }
  iVar1 = FUN_004a66f0(param_1 + 0xd8,0);
  iVar1 = FUN_004a1e90(iVar1 + -0xd8,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
