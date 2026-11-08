// Name: FUN_0043ae70
// Address: 0043ae70
// Address Range: [[0043ae70, 0043aed4]]
// Convention: unknown
// Signature: int FUN_0043ae70(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0043ae70(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f4da0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = FUN_00408930(param_1 + 0x6d8,1);
  iVar1 = FUN_00589ae0(iVar1 + -0x6d8,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
