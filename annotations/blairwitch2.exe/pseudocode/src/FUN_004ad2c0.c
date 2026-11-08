// Name: FUN_004ad2c0
// Address: 004ad2c0
// Address Range: [[004ad2c0, 004ad3de]]
// Convention: unknown
// Signature: int FUN_004ad2c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ad2c0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_004ce240(param_1);
  iVar2 = FUN_005adda0(iVar2 + 0x25680);
  *(uint *)(iVar2 + -0x253d0) = 0x5f7384;
  *(uint *)(iVar2 + -0x40) = 0;
  *(uint *)(iVar2 + -0x3c) = 0;
  *(uint *)(iVar2 + -0x38) = 0;
  *(uint *)(iVar2 + -0x34) = 0;
  *(uint *)(iVar2 + -0x1c) = 0;
  *(uint *)(iVar2 + -0x30) = 0;
  *(uint *)(iVar2 + -0x2c) = 0xbf060a92;
  *(uint *)(iVar2 + -8) = 0;
  *(uint *)(iVar2 + -0x10) = 0;
  *(uint *)(iVar2 + -0x18) = 0;
  *(uint *)(iVar2 + -4) = 0;
  uVar1 = _DAT_005f736c;
  *(uint *)(iVar2 + -0x28) = 0;
  *(uint *)(iVar2 + 0x3ab30) = uVar1;
  *(uint *)(iVar2 + -0x24) = 0;
  *(uint *)(iVar2 + -0x20) = 0;
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -0x10);
  *(uint *)(iVar2 + -0x14) = *(uint *)(iVar2 + -0x18);
  FUN_005478b0(iVar2 + -0x253cc,"?gabriela.dfm" + 1);
  FUN_0044fd70(*(int *)(iVar2 + -0xcf4 + *(int *)(iVar2 + -0xe9c) * 4) + 0x2b4,0x5d6dd0);
  return iVar2 + -0x25680;
}
