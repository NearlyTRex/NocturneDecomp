// Name: FUN_004b2840
// Address: 004b2840
// Address Range: [[004b2840, 004b28a4]]
// Convention: unknown
// Signature: int FUN_004b2840(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004b2840(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005f7500);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = FUN_005ade00(param_1 + 0x25680,0);
  iVar1 = FUN_004ce3d0(iVar1 + -0x25680,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
