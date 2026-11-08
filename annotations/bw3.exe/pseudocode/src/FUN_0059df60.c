// Name: FUN_0059df60
// Address: 0059df60
// Address Range: [[0059df60, 0059e004]]
// Convention: unknown
// Signature: int FUN_0059df60(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0059df60(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005e84a0);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  iVar1 = FUN_004fa8c0(param_1 + 0x47b98,0);
  iVar1 = FUN_0043c280(iVar1 + -0x3ab44,0);
  iVar1 = FUN_00410370(iVar1 + -0x97f8,0);
  iVar1 = FUN_0043f900(iVar1 + -0x954,0);
  iVar1 = FUN_0054bf80(iVar1 + -0x2db0,0);
  iVar1 = FUN_00408770(iVar1 + -0x158,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
