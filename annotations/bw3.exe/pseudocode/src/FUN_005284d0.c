// Name: FUN_005284d0
// Address: 005284d0
// Address Range: [[005284d0, 0052860c]]
// Convention: unknown
// Signature: void FUN_005284d0(int param_1)

#include "nocturne.h"

void FUN_005284d0(int param_1)

{
  uint uVar1;
  byte bVar2;
  uint auStackY_103c [1001];
  uint *puVar3;
  byte auStack_7c [40];
  uint uStack_54;
  uint auStack_50 [6];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint auStack_2c [4];
  uint uStack_1c;
  uint auStack_18 [3];
  uint uStack_c;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x568) < 1) {
    return;
  }
  auStack_50[2] = 0x40a00000;
  auStack_50[3] = 0x40c00000;
  auStack_50[4] = 0xc0c00000;
  auStack_50[5] = FUN_0040ce40(0xbec90fdb,0x3ec90fdb);
  uStack_c = auStack_50[5];
  uStack_38 = FUN_0040ce40(0xbec90fdb,0x3ec90fdb);
  uStack_34 = 0;
  uStack_c = uStack_38;
  FUN_0045b550(auStack_7c,auStack_50 + 5);
  FUN_0045b800(auStack_7c,auStack_50 + 2);
  puVar3 = auStack_2c + 5;
  auStack_18[0] = uStack_54;
  auStack_2c[(uint)bVar2 * -2 + 6] = auStack_50[(uint)bVar2 * -2];
  auStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
       auStack_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  FUN_00408b00(param_1,puVar3);
  auStack_2c[2] = uStack_30;
  auStack_2c[(uint)bVar2 * -2 + 3] = auStack_2c[(uint)bVar2 * -2];
  auStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       auStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if (auStack_50 + 2 != auStack_2c + 2) {
    auStack_50[2] = auStack_2c[2];
    auStack_50[3] = auStack_2c[3];
    auStack_50[4] = uStack_1c;
  }
  uVar1 = FUN_00462420("$@rifbullet.kfm" + 2);
  FUN_004a3e70(0x01C73654,param_1 + 0x20,param_1 + 0x30,auStack_50 + 2,uVar1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"shotgun-cock.wav");
  return;
}
