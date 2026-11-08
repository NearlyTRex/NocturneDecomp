// Name: FUN_0041d7b0
// Address: 0041d7b0
// Address Range: [[0041d7b0, 0041d824]]
// Convention: unknown
// Signature: int FUN_0041d7b0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_0041d7b0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f3c20);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = FUN_00449d30(param_1 + 0x7d8,0);
  iVar1 = FUN_005b1c70(iVar1 + -0x2e8,0);
  iVar1 = FUN_00408930(iVar1 + -0x4f0,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
