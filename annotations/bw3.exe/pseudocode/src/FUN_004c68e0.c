// Name: FUN_004c68e0
// Address: 004c68e0
// Address Range: [[004c68e0, 004c6a0d]]
// Convention: unknown
// Signature: int FUN_004c68e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c68e0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  float10 fVar6;
  
  iVar3 = FUN_00488fd0(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005e0a54;
  FUN_0054eae0(iVar3 + 0x158,0x5c4054);
  fVar4 = (float)FUN_0040ce40(0x41a00000,0x420c0000);
  fVar6 = (float10)fVar4 * (float10)_DAT_005c405d;
  FUN_005a3120(0x40800000,0x41200000);
  *(int *)(iVar3 + 0xd058) = (int)ROUND(fVar6);
  fVar4 = (float)FUN_0040ce40();
  *(uint *)(iVar3 + 0xd060) = 0xa0000;
  *(uint *)(iVar3 + 0xd064) = 0xffffffff;
  fVar6 = (float10)fVar4 * (float10)_DAT_005c405d;
  *(uint *)(iVar3 + 0xd068) = 0;
  *(uint *)(iVar3 + 0xd074) = 2;
  FUN_005a3120(3);
  *(int *)(iVar3 + 0xd05c) = (int)ROUND(fVar6);
  uVar5 = FUN_0040cea0(1);
  *(uint *)(iVar3 + 0x326c) = 0x3f400000;
  *(uint *)(iVar3 + 0x3270) = 0x3fc00000;
  *(uint *)(iVar3 + 0xd0b0) = 0;
  *(uint *)(iVar3 + 0xd0b4) = 0;
  *(uint *)(iVar3 + 0xd0b8) = 0;
  *(uint *)(iVar3 + 0xd0bc) = 0;
  *(uint *)(iVar3 + 0xd0c0) = 0;
  uVar1 = _DAT_005e0a40;
  *(uint *)(iVar3 + 0x252c) = 0x3fc90fdb;
  uVar2 = _DAT_005e0a44;
  *(uint *)(iVar3 + 0xd070) = uVar5;
  *(uint *)(iVar3 + 0x3274) = uVar1;
  *(uint *)(iVar3 + 0x3278) = uVar2;
  return iVar3;
}
