// Name: FUN_00444270
// Address: 00444270
// Address Range: [[00444270, 004442ce]]
// Convention: unknown
// Signature: int FUN_00444270(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00444270(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005c030f(param_1,&DAT_005fdba0);
    FUN_005c0336(uVar2);
    return param_1;
  }
  iVar1 = FUN_00442f90(param_1 + 4,0);
  iVar1 = FUN_00442bb0(iVar1 + -4,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005c0344(iVar1);
  return iVar1;
}
