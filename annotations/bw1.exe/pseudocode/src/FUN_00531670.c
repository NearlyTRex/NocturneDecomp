// Name: FUN_00531670
// Address: 00531670
// Address Range: [[00531670, 0053171f]]
// Convention: unknown
// Signature: int FUN_00531670(undefined4 param_1)

#include "nocturne.h"

int FUN_00531670(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0042c080(param_1);
  iVar1 = FUN_00532fe0(iVar1 + 0xc1d0);
  *(byte ***)(iVar1 + -0xc07c) = &PTR_FUN_00604454;
  *(uint *)(iVar1 + -0x91e4) = 0x3f19999a;
  *(uint *)(iVar1 + -0x91e0) = 0x3f666666;
  *(uint *)(iVar1 + -0x91d4) = 0x3fcccccd;
  *(uint *)(iVar1 + -0x91d0) = 0xc479c000;
  uVar2 = FUN_0040cc00(0x3f666666,0x3f8ccccd);
  *(uint *)(iVar1 + 0x138e4) = uVar2;
  FUN_00569f50(iVar1 + -0xc078,"nocchar.dfm");
  *(uint *)(iVar1 + -0x9a10) = 0;
  *(uint *)(iVar1 + 0x138dc) = 0;
  *(uint *)(iVar1 + 0x138e0) = 0;
  return iVar1 + -0xc1d0;
}
