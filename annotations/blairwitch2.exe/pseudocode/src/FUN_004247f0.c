// Name: FUN_004247f0
// Address: 004247f0
// Address Range: [[004247f0, 00424b4f]]
// Convention: unknown
// Signature: void FUN_004247f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004247f0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = FUN_0046b960(DAT_0060b280);
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x109d8) == -1)) {
    return;
  }
  uVar4 = FUN_00547810(param_1 + 0x2b4);
  if (*(int *)(param_1 + 0x109d8) == -2) {
    iVar3 = FUN_00543100(uVar4,&DAT_005ccca6,0);
    *(int *)(param_1 + 0x109d8) = iVar3;
    if (iVar3 == -1) {
      return;
    }
    iVar3 = FUN_00543100(uVar4,&DAT_005cccab,0);
    *(int *)(param_1 + 0x109fc) = iVar3;
    if (iVar3 == -1) {
      *(uint *)(param_1 + 0x109d8) = 0xffffffff;
      return;
    }
    uVar5 = FUN_00543100(uVar4,&DAT_005cccae,1);
    *(uint *)(param_1 + 0x10a00) = uVar5;
    uVar5 = FUN_00543100(uVar4,&DAT_005cccb1,1);
    *(uint *)(param_1 + 0x10a04) = uVar5;
    uVar5 = FUN_00543100(uVar4,&DAT_005cccb4,1);
    *(uint *)(param_1 + 0x10a08) = uVar5;
    uVar5 = FUN_00543100(uVar4,"e1_left",0);
    *(uint *)(param_1 + 0x109dc) = uVar5;
    uVar5 = FUN_00543100(uVar4,"e2_left",0);
    *(uint *)(param_1 + 0x109e0) = uVar5;
    uVar5 = FUN_00543100(uVar4,"e3_left",0);
    *(uint *)(param_1 + 0x109e4) = uVar5;
    uVar5 = FUN_00543100(uVar4,"e4_left",0);
    *(uint *)(param_1 + 0x109e8) = uVar5;
    uVar5 = FUN_00543100(uVar4,"e1_right",0);
    *(uint *)(param_1 + 0x109ec) = uVar5;
    uVar5 = FUN_00543100(uVar4,"e2_right",0);
    *(uint *)(param_1 + 0x109f0) = uVar5;
    uVar5 = FUN_00543100(uVar4,"e3_right",0);
    *(uint *)(param_1 + 0x109f4) = uVar5;
    uVar5 = FUN_00543100(uVar4,"e4_right",0);
    *(uint *)(param_1 + 0x109f8) = uVar5;
  }
  iVar3 = param_1;
  do {
    if (*(int *)(iVar3 + 0x109dc) != -1) {
      *(uint *)(param_1 + 0x23f4 + *(int *)(iVar3 + 0x109dc) * 4) = 0;
    }
    if (*(int *)(iVar3 + 0x109ec) != -1) {
      *(uint *)(param_1 + 0x23f4 + *(int *)(iVar3 + 0x109ec) * 4) = 0;
    }
    piVar1 = (int *)(iVar3 + 0x109fc);
    iVar3 = iVar3 + 4;
    *(uint *)(param_1 + 0x23f4 + *piVar1 * 4) = 0;
  } while (iVar3 != param_1 + 0x10);
  fVar2 = (float)_DAT_01c2a370 * _DAT_005cccfe;
  *(float *)(param_1 + 0x109d0) = *(float *)(param_1 + 0x109d0) - fVar2;
  if (*(int *)(param_1 + 0x109cc) == 1) {
    if (*(float *)(param_1 + 0x109d0) <= 0.0) {
      uVar5 = FUN_0040cf60(0x40a00000,0x41000000);
      *(uint *)(param_1 + 0x109c0) = 0;
      *(uint *)(param_1 + 0x109c4) = 0;
      *(uint *)(param_1 + 0x109cc) = 0;
      *(uint *)(param_1 + 0x109d0) = uVar5;
    }
  }
  else if (*(float *)(param_1 + 0x109d0) <= 0.0) {
    *(uint *)(param_1 + 0x109c4) = 3;
    *(uint *)(param_1 + 0x109cc) = 1;
    *(uint *)(param_1 + 0x109d0) = 0x3d4ccccd;
    *(uint *)(param_1 + 0x109c0) = 3;
  }
  *(float *)(param_1 + 0x109d4) = *(float *)(param_1 + 0x109d4) - fVar2;
  if (*(float *)(param_1 + 0x109d4) <= 0.0) {
    iVar3 = *(int *)(0x01E65CD0 + 4);
    if (param_1 == iVar3) {
      *(uint *)(iVar3 + 0x109d4) = 0x3e19999a;
      uVar6 = FUN_005b849c();
      *(uint *)(iVar3 + 0x109c8) = uVar6 & 3;
    }
    else {
      *(uint *)(param_1 + 0x109c8) = 0;
      *(uint *)(param_1 + 0x109d4) = 0;
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x109c0) * 4 + param_1 + 0x109dc);
  if (iVar3 != -1) {
    FUN_004246e0(uVar4,*(uint *)(param_1 + 0x109d8),iVar3);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x109c4) * 4 + param_1 + 0x109ec);
  if (iVar3 != -1) {
    FUN_004246e0(uVar4,*(uint *)(param_1 + 0x109d8),iVar3);
  }
  FUN_004246e0(uVar4,*(uint *)(param_1 + 0x109d8),
               *(uint *)(param_1 + 0x109fc + *(int *)(param_1 + 0x109c8) * 4));
  return;
}
