// Name: FUN_0059bec0
// Address: 0059bec0
// Address Range: [[0059bec0, 0059bf2c]]
// Convention: unknown
// Signature: int FUN_0059bec0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0059bec0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005fe5d0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = FUN_0059bfc0(param_1 + 0x4c,0);
  iVar1 = FUN_0040d440(iVar1 + -0x48,0);
  iVar1 = FUN_0059ab50(iVar1 + -4,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
