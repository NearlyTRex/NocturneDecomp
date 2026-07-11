// Name: FUN_0041f6e0
// Address: 0041f6e0
// Address Range: [[0041f6e0, 0041f9ed]]
// Convention: unknown
// Signature: void FUN_0041f6e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f6e0(int param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  byte *puVar4;
  byte auStack_d0 [40];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int local_18;
  
  uVar1 = *(uint *)(param_1 + 0x664);
  if (uVar1 != 0) {
    local_18 = param_1 + 0x668;
    iVar3 = param_1 + 0x150;
    if (uVar1 < 2) {
      FUN_00454580(iVar3,"flashlit.kfm");
      FUN_00454510(iVar3);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_90);
      fVar2 = _DAT_005799e1;
      *(float *)(param_1 + 0x3614) = (local_90 + fStack_84) * _DAT_005799e1;
      *(float *)(param_1 + 0x3618) = (fStack_8c + fStack_80) * fVar2;
      *(float *)(param_1 + 0x361c) = fStack_7c + (float)_DAT_005799e5;
      *(uint *)(param_1 + 0x3628) = 0;
      *(uint *)(param_1 + 0x3624) = *(uint *)(param_1 + 0x3628);
      *(uint *)(param_1 + 0x3620) = *(uint *)(param_1 + 0x3624);
      *(uint *)(param_1 + 0x231c) = 0;
      *(uint *)(local_18 + 0x138) = 0x42600000;
      *(uint *)(param_1 + 0x768) = 0x42000000;
      *(uint *)(param_1 + 0x30c) = 3;
      return;
    }
    if (uVar1 == 2) {
      FUN_00454580(iVar3,"lantern.kfm");
      FUN_00454510(iVar3);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_a8);
      fStack_4c = _DAT_005799e1;
      fStack_48 = local_a8 + fStack_9c;
      fStack_3c = fStack_48 * _DAT_005799e1;
      fStack_44 = fStack_a4 + fStack_98;
      fStack_40 = fStack_a0 + fStack_94;
      fStack_38 = fStack_44 * _DAT_005799e1;
      fStack_34 = fStack_40 * _DAT_005799e1;
      *(float *)(param_1 + 0x3614) = fStack_3c;
      fStack_6c = local_a8 + fStack_9c;
      fStack_54 = fStack_6c * fStack_4c;
      fStack_68 = fStack_a4 + fStack_98;
      fStack_64 = fStack_a0 + fStack_94;
      fStack_50 = fStack_68 * fStack_4c;
      fStack_4c = fStack_64 * fStack_4c;
      *(float *)(param_1 + 0x3618) = fStack_50;
      *(float *)(param_1 + 0x361c) = fStack_94;
      *(uint *)(param_1 + 0x3628) = 0;
      *(uint *)(param_1 + 0x3624) = *(uint *)(param_1 + 0x3628);
      *(uint *)(param_1 + 0x3620) = *(uint *)(param_1 + 0x3624);
      *(uint *)(param_1 + 0x3620) = 0x3e860a92;
      *(uint *)(param_1 + 0x231c) = 0;
      *(uint *)(local_18 + 0x138) = 0x42600000;
      *(uint *)(param_1 + 0x768) = 0x42000000;
      iVar3 = DAT_007647fc;
      *(uint *)(param_1 + 0x30c) = 3;
      if (iVar3 == 0) {
        puVar4 = &DAT_0076483c;
        iVar3 = 0;
        do {
          FUN_00563c90(auStack_d0,"lantern%d.raw",iVar3);
          iVar3 = iVar3 + 1;
          FUN_0044bf90(puVar4,auStack_d0);
          puVar4 = puVar4 + 0x4c;
        } while (iVar3 < 8);
        DAT_007647fc = 1;
      }
      FUN_004501c0(param_1 + 0x668,&DAT_0076483c,0,0,0);
      return;
    }
  }
  return;
}
