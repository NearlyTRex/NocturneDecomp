// Name: FUN_00430060
// Address: 00430060
// Address Range: [[00430060, 004301df]]
// Convention: unknown
// Signature: void FUN_00430060(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430060(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  byte local_1aac [6816];
  
  FUN_00483dd0(DAT_00612560,1);
  FUN_00483de0(DAT_00612560,0xc000);
  if (param_1 == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    fVar4 = (float10)DAT_007c6178 +
            (float10)*(float *)(0x01CCF390 + 0x294) * (float10)_DAT_005d5a2f;
    FUN_005c03a0();
    DAT_007c6178 = (int)ROUND(fVar4);
  }
  iVar2 = FUN_005c084c();
  _DAT_007c617c = iVar2 % 6;
  DAT_00612560[8] = 1;
  FUN_00597a20(&DAT_00610c20 + (iVar2 % 6) * 0x18);
  iVar2 = param_1 + 0x158;
  FUN_0056acc0(iVar2,local_1aac);
  FUN_005697b0(iVar2,0x3f8ccccd,0xffffffff);
  FUN_00569180(iVar2);
  uVar3 = FUN_00569eb0(iVar2,param_1 + 0x2480);
  uVar3 = FUN_00566380(uVar3);
  FUN_00569920(iVar2,uVar3);
  FUN_0056afe0(iVar2,DAT_007c6178,0);
  iVar2 = 0;
  do {
    piVar1 = DAT_00612560;
    *(uint *)(*DAT_00612560 + 0x20 + iVar2) = 0xb332;
    *(uint *)(*piVar1 + 0x24 + iVar2) = 0xb332;
    iVar2 = iVar2 + 0x30;
    *(uint *)(*piVar1 + -8 + iVar2) = 0xffff;
  } while (iVar2 != 96000);
  FUN_00569a10(param_1 + 0x158,0x267,1);
  DAT_00612560[8] = 0;
  FUN_0056ad90(param_1 + 0x158,local_1aac);
  FUN_00483dd0(DAT_00612560,0);
  return;
}
