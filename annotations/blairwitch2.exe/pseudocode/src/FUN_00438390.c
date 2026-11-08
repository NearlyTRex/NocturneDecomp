// Name: FUN_00438390
// Address: 00438390
// Address Range: [[00438390, 00438424]]
// Convention: unknown
// Signature: int FUN_00438390(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00438390(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f4810);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = FUN_0040f2b0(param_1 + 0x3a20,0);
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
