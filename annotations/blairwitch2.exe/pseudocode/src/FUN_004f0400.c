// Name: FUN_004f0400
// Address: 004f0400
// Address Range: [[004f0400, 004f04e8]]
// Convention: unknown
// Signature: int FUN_004f0400(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004f0400(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f9ff0);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x4c350);
  *(byte **)(param_1 + 0x2b0) = &DAT_005f9e94;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xd8))(iVar1,2);
  }
  *(uint *)(param_1 + 0x4c350) = 0;
  iVar1 = FUN_005b6e80(param_1 + 0x4b720,0);
  iVar1 = FUN_005ade00(iVar1 + -0x3ab60,0);
  iVar1 = FUN_0040f2b0(iVar1 + -0xd1a0,0);
  iVar1 = FUN_0059df70(iVar1 + -0x9c8,0);
  iVar1 = FUN_005b1480(iVar1 + -0x34c,0);
  iVar1 = FUN_00544d50(iVar1 + -0x2a58,0);
  iVar1 = FUN_00408930(iVar1 + -0x2b4,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
