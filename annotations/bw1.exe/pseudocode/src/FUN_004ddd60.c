// Name: FUN_004ddd60
// Address: 004ddd60
// Address Range: [[004ddd60, 004dde8d]]
// Convention: unknown
// Signature: int FUN_004ddd60(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ddd60(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  float10 fVar6;
  
  iVar3 = FUN_004a0410(param_1);
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_006012e4;
  FUN_00569f50(iVar3 + 0x158,0x5e3a48);
  fVar4 = (float)FUN_0040cc00(0x41a00000,0x420c0000);
  fVar6 = (float10)fVar4 * (float10)_DAT_005e3a51;
  FUN_005c03a0(0x40800000,0x41200000);
  *(int *)(iVar3 + 0xc26c) = (int)ROUND(fVar6);
  fVar4 = (float)FUN_0040cc00();
  *(uint *)(iVar3 + 0xc274) = 0xa0000;
  *(uint *)(iVar3 + 0xc278) = 0xffffffff;
  fVar6 = (float10)fVar4 * (float10)_DAT_005e3a51;
  *(uint *)(iVar3 + 0xc27c) = 0;
  *(uint *)(iVar3 + 0xc288) = 2;
  FUN_005c03a0(3);
  *(int *)(iVar3 + 0xc270) = (int)ROUND(fVar6);
  uVar5 = FUN_0040cc60(1);
  *(uint *)(iVar3 + 0x2fec) = 0x3f400000;
  *(uint *)(iVar3 + 0x2ff0) = 0x3fc00000;
  *(uint *)(iVar3 + 0xc2c4) = 0;
  *(uint *)(iVar3 + 0xc2c8) = 0;
  *(uint *)(iVar3 + 0xc2cc) = 0;
  *(uint *)(iVar3 + 0xc2d0) = 0;
  *(uint *)(iVar3 + 0xc2d4) = 0;
  uVar1 = _DAT_006012d0;
  *(uint *)(iVar3 + 0x252c) = 0x3fc90fdb;
  uVar2 = _DAT_006012d4;
  *(uint *)(iVar3 + 0xc284) = uVar5;
  *(uint *)(iVar3 + 0x2ff4) = uVar1;
  *(uint *)(iVar3 + 0x2ff8) = uVar2;
  return iVar3;
}
