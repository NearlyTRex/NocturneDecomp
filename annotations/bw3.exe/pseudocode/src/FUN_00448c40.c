// Name: FUN_00448c40
// Address: 00448c40
// Address Range: [[00448c40, 00448c9d]]
// Convention: unknown
// Signature: int FUN_00448c40(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00448c40(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005a308f(param_1,&DAT_005de000);
    FUN_005a30b6(uVar2);
    return param_1;
  }
  *(byte ***)(param_1 + 0x3c) = &PTR_FUN_005ddfe4;
  FUN_00448f30(param_1);
  iVar1 = FUN_004254d0(param_1,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005a30c4(iVar1);
  return iVar1;
}
