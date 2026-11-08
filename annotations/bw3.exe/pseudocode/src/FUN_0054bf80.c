// Name: FUN_0054bf80
// Address: 0054bf80
// Address Range: [[0054bf80, 0054bfdd]]
// Convention: unknown
// Signature: int FUN_0054bf80(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0054bf80(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005dfcf0);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x50) = &PTR_FUN_005e4784;
  FUN_0054c060(param_1);
  iVar1 = FUN_004fbb00(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
