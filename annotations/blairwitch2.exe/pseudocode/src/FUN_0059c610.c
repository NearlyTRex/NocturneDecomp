// Name: FUN_0059c610
// Address: 0059c610
// Address Range: [[0059c610, 0059c667]]
// Convention: unknown
// Signature: int FUN_0059c610(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0059c610(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005fe8a0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte **)(param_1 + 0x2b0) = &DAT_005fe7b4;
  iVar1 = FUN_00577840(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
