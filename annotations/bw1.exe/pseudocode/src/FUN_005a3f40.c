// Name: FUN_005a3f40
// Address: 005a3f40
// Address Range: [[005a3f40, 005a4099]]
// Convention: unknown
// Signature: int FUN_005a3f40(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a3f40(uint param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = FUN_004a0410(param_1);
  iVar1 = FUN_00468860(iVar1 + 0xc26c);
  *(byte ***)(iVar1 + -0xc118) = &PTR_FUN_00607624;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0x180) = 0;
  uVar2 = FUN_0040cc00(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar1 + 0x17c) = uVar2;
  FUN_00468950(iVar1,0x5f8b97);
  *(uint *)(iVar1 + 0x194) = 0x40a00000;
  *(uint *)(iVar1 + 400) = 0x41700000;
  fVar3 = (float)FUN_0040cc00(0x3f666666,0x3f8ccccd);
  *(float *)(iVar1 + 0x19c) = fVar3 * _DAT_005f8ba0;
  fVar3 = (float)FUN_0040cc00(0x3f666666,0x3f8ccccd);
  *(float *)(iVar1 + 0x198) = fVar3 * _DAT_005f8ba4;
  uVar2 = FUN_0040cc00(0,0x3f800000);
  *(uint *)(iVar1 + 0x1a4) = 0;
  *(uint *)(iVar1 + 0x1a8) = 0;
  *(uint *)(iVar1 + 0x1b8) = 0;
  *(uint *)(iVar1 + -0x9aac) = 0;
  *(uint *)(iVar1 + 0x230) = 0;
  *(byte *)(iVar1 + 0x1bc) = 0;
  *(uint *)(iVar1 + 0x220) = 0x41700000;
  *(uint *)(iVar1 + 0x224) = 0x41f00000;
  *(uint *)(iVar1 + 0x22c) = 0;
  *(uint *)(iVar1 + 0x1a0) = uVar2;
  return iVar1 + -0xc26c;
}
