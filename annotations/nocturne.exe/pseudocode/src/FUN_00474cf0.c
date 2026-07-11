// Name: FUN_00474cf0
// Address: 00474cf0
// Address Range: [[00474cf0, 00474d64]]
// Convention: unknown
// Signature: int FUN_00474cf0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00474cf0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_0059cad0);
    FUN_00564486(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0xc) = &PTR_FUN_0059ca94;
  FUN_00476160(param_1);
  iVar1 = FUN_00476490(param_1 + 0x138,0);
  iVar1 = FUN_00473b80(iVar1 + -0x138,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
