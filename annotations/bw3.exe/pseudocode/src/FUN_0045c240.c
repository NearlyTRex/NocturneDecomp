// Name: FUN_0045c240
// Address: 0045c240
// Address Range: [[0045c240, 0045c29d]]
// Convention: unknown
// Signature: int FUN_0045c240(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0045c240(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005de530);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x3c) = &PTR_FUN_005de514;
  FUN_0045c380(param_1);
  iVar1 = FUN_00448c40(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
