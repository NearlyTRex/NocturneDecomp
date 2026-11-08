// Name: FUN_00501400
// Address: 00501400
// Address Range: [[00501400, 0050147e]]
// Convention: unknown
// Signature: int FUN_00501400(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00501400(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005fa560);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  *(byte **)(param_1 + 0x2b0) = &DAT_005fa3e4;
  iVar1 = FUN_005b6e80(param_1 + 0x279c8,0);
  iVar1 = FUN_00544d50(iVar1 + -0x2388,0);
  iVar1 = FUN_004ce3d0(iVar1 + -0x25640,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
