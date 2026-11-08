// Name: FUN_00486360
// Address: 00486360
// Address Range: [[00486360, 00486482]]
// Convention: unknown
// Signature: void FUN_00486360(int param_1)

#include "nocturne.h"

void FUN_00486360(int param_1)

{
  uint uVar1;
  byte bVar2;
  uint auStackY_1044 [1003];
  uint *puVar3;
  byte auStack_84 [40];
  uint uStack_5c;
  uint auStack_58 [6];
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint auStack_34 [4];
  uint uStack_24;
  uint auStack_20 [3];
  uint uStack_14;
  
  bVar2 = 0;
  auStack_58[2] = 0x40a00000;
  auStack_58[3] = 0x40c00000;
  auStack_58[4] = 0xc0c00000;
  auStack_58[5] = FUN_0040cf60(0xbec90fdb,0x3ec90fdb);
  uStack_14 = auStack_58[5];
  uStack_40 = FUN_0040cf60(0xbec90fdb,0x3ec90fdb);
  uStack_3c = 0;
  uStack_14 = uStack_40;
  FUN_00449280(auStack_84,auStack_58 + 5);
  FUN_00449530(auStack_84,auStack_58 + 2);
  puVar3 = auStack_34 + 5;
  auStack_20[0] = uStack_5c;
  auStack_34[(uint)bVar2 * -2 + 6] = auStack_58[(uint)bVar2 * -2];
  auStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7] =
       auStack_58[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  FUN_00408cf0(param_1,puVar3);
  auStack_34[2] = uStack_38;
  auStack_34[(uint)bVar2 * -2 + 3] = auStack_34[(uint)bVar2 * -2];
  auStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       auStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if (auStack_58 + 2 != auStack_34 + 2) {
    auStack_58[2] = auStack_34[2];
    auStack_58[3] = auStack_34[3];
    auStack_58[4] = uStack_24;
  }
  uVar1 = FUN_0044fba0("shell.kfm");
  FUN_0049e970(0x01C3DEB4,param_1 + 0x20,param_1 + 0x30,auStack_58 + 2,uVar1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"sh-cock.wav");
  return;
}
