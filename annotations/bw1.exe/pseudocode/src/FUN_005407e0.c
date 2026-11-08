// Name: FUN_005407e0
// Address: 005407e0
// Address Range: [[005407e0, 0054092f]]
// Convention: unknown
// Signature: void FUN_005407e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005407e0(int param_1)

{
  uint uVar1;
  byte bVar2;
  uint auStackY_103c [1001];
  uint *puVar3;
  byte auStack_7c [40];
  uint uStack_54;
  uint auStack_50 [6];
  uint auStack_38 [5];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint auStack_14 [3];
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x568) < 1) {
    return;
  }
  auStack_50[2] = 0x40a00000;
  auStack_50[3] = 0x40c00000;
  auStack_50[4] = 0xc0c00000;
  uStack_24 = FUN_0040cc00(0xbec90fdb,0x3ec90fdb);
  auStack_14[2] = uStack_24;
  uStack_20 = FUN_0040cc00(0xbec90fdb,0x3ec90fdb);
  uStack_1c = 0;
  auStack_14[2] = uStack_20;
  FUN_0045f3e0(auStack_7c,auStack_38 + 5);
  FUN_0045f690(auStack_7c,auStack_50 + 2);
  puVar3 = auStack_38 + 2;
  auStack_38[2] = auStack_50[5];
  auStack_38[(uint)bVar2 * -2 + 3] = auStack_38[(uint)bVar2 * -2];
  auStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       auStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  FUN_00408ac0(param_1,puVar3);
  uStack_18 = uStack_54;
  auStack_14[(uint)bVar2 * -2] = auStack_50[(uint)bVar2 * -2];
  auStack_14[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       auStack_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if (auStack_50 + 2 != auStack_38 + 8) {
    auStack_50[2] = uStack_18;
    auStack_50[3] = auStack_14[0];
    auStack_50[4] = auStack_14[1];
  }
  uVar1 = FUN_00468780("$@rifbullet.kfm" + 2);
  FUN_004b7270(0x01C57074,param_1 + 0x20,param_1 + 0x30,auStack_50 + 2,uVar1);
  FUN_0057d8a0(0x02C82A60,param_1,"shotgun-cock.wav @ .3",
               *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x20);
  return;
}
