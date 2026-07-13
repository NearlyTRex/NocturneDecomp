// Name: FUN_00423d90
// Address: 00423d90
// Address Range: [[00423d90, 00423e58]]
// Convention: unknown
// Signature: int FUN_00423d90(int param_1,byte param_2)

#include "nocturne.h"

int FUN_00423d90(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_0059b050);
    FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = FUN_00423e80(param_1 + 0xbd2c,0);
  iVar1 = FUN_0040fe50(iVar1 + -0x8968,0);
  iVar1 = FUN_0040fe30(iVar1 + -0x4b0,0);
  iVar1 = FUN_0040fe10(iVar1 + -0x20c,0);
  iVar1 = FUN_0040fe10(iVar1 + -0xb4,0);
  iVar1 = FUN_00438250(iVar1 + -0x1c8,0);
  iVar1 = FUN_0051b6e0(iVar1 + -0x293c,0);
  iVar1 = FUN_00409ea0(iVar1 + -0x150,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
