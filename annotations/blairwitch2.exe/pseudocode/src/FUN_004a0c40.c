// Name: FUN_004a0c40
// Address: 004a0c40
// Address Range: [[004a0c40, 004a0ca4]]
// Convention: unknown
// Signature: int FUN_004a0c40(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004a0c40(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f6b10);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = FUN_00408930(param_1 + 0x49c,1);
  iVar1 = FUN_00408930(iVar1 + -0x49c,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
