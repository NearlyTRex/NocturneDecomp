// Name: FUN_004d4540
// Address: 004d4540
// Address Range: [[004d4540, 004d4648]]
// Convention: unknown
// Signature: int FUN_004d4540(int param_1,byte param_2)

#include "nocturne.h"

int FUN_004d4540(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = FUN_0056445f(param_1,&DAT_005a0740);
    FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x4757c);
  *(byte ***)(param_1 + 0x14c) = &PTR_FUN_005a05f4;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14c) + 200))(iVar1,2);
  }
  *(uint *)(param_1 + 0x4757c) = 0;
  iVar1 = FUN_004e0070(param_1 + 0x4694c,0);
  iVar1 = FUN_00435160(iVar1 + -0x3ab60,0);
  iVar1 = FUN_0040fe50(iVar1 + -0x8a28,0);
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
