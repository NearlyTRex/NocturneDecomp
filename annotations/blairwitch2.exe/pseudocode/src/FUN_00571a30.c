// Name: FUN_00571a30
// Address: 00571a30
// Address Range: [[00571a30, 00571aa4]]
// Convention: unknown
// Signature: int FUN_00571a30(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00571a30(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_005b7fa7(param_1,&DAT_005fc700);
    FUN_005b7fce(uVar2);
    return param_1;
  }
  iVar1 = FUN_005ade00(param_1 + 0x60178,0);
  iVar1 = FUN_005ade00(iVar1 + -0x3ab30,0);
  iVar1 = FUN_004ce3d0(iVar1 + -0x25648,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_005b7fdc(iVar1);
  return iVar1;
}
