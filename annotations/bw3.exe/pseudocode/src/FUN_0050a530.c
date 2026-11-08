// Name: FUN_0050a530
// Address: 0050a530
// Address Range: [[0050a530, 0050a602]]
// Convention: unknown
// Signature: int FUN_0050a530(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0050a530(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005e3130);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x207d0);
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_005e2fe4;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xd0))(iVar1,2);
  }
  iVar1 = FUN_004fa8c0(param_1 + 0x207d4,0);
  iVar1 = FUN_0050ad40(iVar1 + -0x13a08,0);
  iVar1 = FUN_00410370(iVar1 + -0x9570,0);
  iVar1 = FUN_0043f900(iVar1 + -0x954,0);
  iVar1 = FUN_0054bf80(iVar1 + -0x2db0,0);
  iVar1 = FUN_00408770(iVar1 + -0x158,1);
  if ((param_2 & 2) != 0) {
    FUN_005a30c4(iVar1);
    return iVar1;
  }
  return iVar1;
}
