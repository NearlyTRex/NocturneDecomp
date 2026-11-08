// Name: FUN_0059fae0
// Address: 0059fae0
// Address Range: [[0059fae0, 0059fc02]]
// Convention: unknown
// Signature: void FUN_0059fae0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059fae0(int param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  float afStackY_1010 [1008];
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  float afStack_24 [4];
  float local_14;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x1137c) == -1) {
    return;
  }
  FUN_004089d0();
  FUN_00592720();
  afStack_24[2] = local_28;
  afStack_24[(uint)bVar3 * -2 + 3] = afStack_24[(uint)bVar3 * -2];
  afStack_24[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       afStack_24[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  afStack_24[3] = afStack_24[3] + 1.0;
  local_34 = (int)ROUND(afStack_24[2] * _DAT_005febc0);
  local_30 = (int)ROUND(afStack_24[3] * _DAT_005febc0);
  local_2c = (int)ROUND(local_14 * _DAT_005febc0);
  FUN_0055d723(*DAT_0060b280,&local_34);
  iVar1 = *DAT_0060b280;
  if ((*(byte *)(iVar1 + 0x13) & 0x80) == 0) {
    uVar2 = FUN_005035c0(param_1 + 0x2b4,(double)*(float *)(param_1 + 0x113c4));
    uVar2 = FUN_0059db70(param_1 + 0x10af8,uVar2);
    FUN_005b7790(0x2668360,"@(%s)\n%s:[%s] (%0.2f)" + 1,param_1,uVar2);
    FUN_00401fe0(0x2668360,*(int *)(iVar1 + 0x10) >> 0x10,*(int *)(iVar1 + 0x14) >> 0x10);
  }
  FUN_00408a10();
  return;
}
