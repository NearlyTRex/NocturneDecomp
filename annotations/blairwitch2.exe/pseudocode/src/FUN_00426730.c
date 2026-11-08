// Name: FUN_00426730
// Address: 00426730
// Address Range: [[00426730, 004268af]]
// Convention: unknown
// Signature: void FUN_00426730(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426730(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  byte local_1aac [6816];
  
  FUN_0046b8d0(DAT_0060b280,1);
  FUN_0046b8e0(DAT_0060b280,0xc000);
  if (param_1 == *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    fVar4 = (float10)DAT_007bda90 +
            (float10)*(float *)(0x01CB6900 + 0x284) * (float10)_DAT_005ccda6;
    FUN_005b7ff0();
    DAT_007bda90 = (int)ROUND(fVar4);
  }
  iVar2 = FUN_005b849c();
  _DAT_007bda94 = iVar2 % 6;
  DAT_0060b280[8] = 1;
  FUN_00574e00(&DAT_00609a10 + (iVar2 % 6) * 0x18);
  iVar2 = param_1 + 0x2b4;
  FUN_00548620(iVar2,local_1aac);
  FUN_00547110(iVar2,0x3f8ccccd,0xffffffff);
  FUN_00546ae0(iVar2);
  uVar3 = FUN_00547810(iVar2,param_1 + 0x24ec);
  uVar3 = FUN_00543d00(uVar3);
  FUN_00547280(iVar2,uVar3);
  FUN_00548940(iVar2,DAT_007bda90,0);
  iVar2 = 0;
  do {
    piVar1 = DAT_0060b280;
    *(uint *)(*DAT_0060b280 + 0x20 + iVar2) = 0xb332;
    *(uint *)(*piVar1 + 0x24 + iVar2) = 0xb332;
    iVar2 = iVar2 + 0x30;
    *(uint *)(*piVar1 + -8 + iVar2) = 0xffff;
  } while (iVar2 != 96000);
  FUN_00547370(param_1 + 0x2b4,0x267,1);
  DAT_0060b280[8] = 0;
  FUN_005486f0(param_1 + 0x2b4,local_1aac);
  FUN_0046b8d0(DAT_0060b280,0);
  return;
}
