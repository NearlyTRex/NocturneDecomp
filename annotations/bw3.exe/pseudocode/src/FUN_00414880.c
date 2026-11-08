// Name: FUN_00414880
// Address: 00414880
// Address Range: [[00414880, 0041490b]]
// Convention: unknown
// Signature: int FUN_00414880(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00414880(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005dc100);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x154) = &PTR_FUN_005dbfe4;
  FUN_00414910(param_1,0,0);
  iVar1 = FUN_0041adf0(param_1 + 0xcd0,0);
  iVar1 = FUN_00416dc0(iVar1 + -0x580,0);
  iVar1 = FUN_00408770(iVar1 + -0x750,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
