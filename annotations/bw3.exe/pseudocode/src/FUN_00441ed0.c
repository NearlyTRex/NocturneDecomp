// Name: FUN_00441ed0
// Address: 00441ed0
// Address Range: [[00441ed0, 00441f2e]]
// Convention: unknown
// Signature: int FUN_00441ed0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00441ed0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005dd680);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  iVar1 = FUN_00440bf0(param_1 + 4,0);
  iVar1 = FUN_00440810(iVar1 + -4,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
