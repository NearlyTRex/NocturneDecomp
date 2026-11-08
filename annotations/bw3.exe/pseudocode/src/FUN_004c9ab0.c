// Name: FUN_004c9ab0
// Address: 004c9ab0
// Address Range: [[004c9ab0, 004c9b34]]
// Convention: unknown
// Signature: int FUN_004c9ab0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004c9ab0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005e0ba0);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  iVar1 = FUN_00410370(param_1 + 0x385c,0);
  iVar1 = FUN_0043f900(iVar1 + -0x954,0);
  iVar1 = FUN_0054bf80(iVar1 + -0x2db0,0);
  iVar1 = FUN_00408770(iVar1 + -0x158,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
