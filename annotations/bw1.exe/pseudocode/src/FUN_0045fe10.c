// Name: FUN_0045fe10
// Address: 0045fe10
// Address Range: [[0045fe10, 0045fef8]]
// Convention: unknown
// Signature: int FUN_0045fe10(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045fe10(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_004a0410(param_1);
  iVar4 = FUN_005c0357(iVar3 + 0xc2fc,0x18,0x5feb90);
  *(byte ***)(iVar4 + -0xc1a8) = &PTR_FUN_005fea34;
  FUN_00569f50(iVar4 + -0xc1a4,0x5d8ac7);
  *(uint *)(iVar4 + -0x9310) = 0x40800000;
  *(uint *)(iVar4 + -0x930c) = 0x41000000;
  *(uint *)(iVar4 + -0x34) = 0;
  *(uint *)(iVar4 + 0x6c0) = 0;
  *(uint *)(iVar4 + 0x6c8) = 0;
  *(uint *)(iVar4 + 0x6cc) = 0;
  *(uint *)(iVar4 + 0x6c4) = 1;
  *(uint *)(iVar4 + -0xc) = 0;
  uVar1 = _DAT_005fea20;
  *(uint *)(iVar4 + -8) = 0;
  uVar2 = _DAT_005fea24;
  *(uint *)(iVar4 + -0x2c) = 0;
  *(uint *)(iVar4 + -0x28) = 6;
  *(uint *)(iVar4 + -0x9308) = uVar1;
  *(uint *)(iVar4 + -0x9304) = uVar2;
  iVar3 = iVar4 + -0xc2fc;
  do {
    iVar5 = iVar3 + 4;
    *(uint *)(iVar3 + 0xc2d8) = 0;
    iVar3 = iVar5;
  } while (iVar5 != iVar4 + -0xc2e4);
  return iVar4 + -0xc2fc;
}
