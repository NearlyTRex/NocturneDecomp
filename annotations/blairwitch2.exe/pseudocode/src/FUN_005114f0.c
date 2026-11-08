// Name: FUN_005114f0
// Address: 005114f0
// Address Range: [[005114f0, 005115d2]]
// Convention: unknown
// Signature: int FUN_005114f0(int param_1,byte param_2)

#include "nocturne.h"

int FUN_005114f0(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005faa70);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x24450);
  *(byte **)(param_1 + 0x2b0) = &DAT_005fa924;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xd8))(iVar1,2);
  }
  iVar1 = FUN_005b6e80(param_1 + 0x24454,0);
  iVar1 = FUN_00511d10(iVar1 + -0x139f4,0);
  iVar1 = FUN_0040f2b0(iVar1 + -0xd040,0);
  iVar1 = FUN_0059df70(iVar1 + -0x9c8,0);
  iVar1 = FUN_005b1480(iVar1 + -0x34c,0);
  iVar1 = FUN_00544d50(iVar1 + -0x2a58,0);
  iVar1 = FUN_00408930(iVar1 + -0x2b4,1);
  if ((param_2 & 2) != 0) {
    FUN_005b7fdc(iVar1);
    return iVar1;
  }
  return iVar1;
}
