// Name: FUN_0045abd0
// Address: 0045abd0
// Address Range: [[0045abd0, 0045adc0]]
// Convention: unknown
// Signature: void FUN_0045abd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045abd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_1044 [1005];
  byte local_84 [4];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58 [5];
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28 [4];
  float local_18;
  float local_14;
  
  bVar4 = 0;
  FUN_0046ce90(0x01BDD7E4,(float *)(param_1 + 0x24));
  FUN_0046d1c0(DAT_005f2afc);
  local_5c = local_58[2];
  local_58[(uint)bVar4 * -2] = local_58[(uint)bVar4 * -2 + 3];
  local_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  local_28[2] = local_5c - *(float *)(param_1 + 0x24);
  local_28[3] = local_58[0] - *(float *)(param_1 + 0x28);
  local_18 = local_58[1] - *(float *)(param_1 + 0x2c);
  local_2c = local_28[2];
  local_28[(uint)bVar4 * -2] = local_28[(uint)bVar4 * -2 + 3];
  local_28[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_28[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  if (&local_5c != &local_2c) {
    local_5c = local_2c;
    local_58[0] = local_28[0];
    local_58[1] = local_28[1];
  }
  if (*(float *)(param_1 + 0x18) <=
      local_58[1] * local_58[1] + local_5c * local_5c + local_58[0] * local_58[0]) {
    local_14 = *(float *)(param_1 + 0x30) * (float)_DAT_005bafe9;
    iVar3 = 0;
    iVar2 = 0;
    do {
      local_44 = (float)*(int *)((int)&DAT_005f1954 + iVar2) * local_14;
      local_40 = (float)*(int *)((int)&DAT_005f1958 + iVar2) * local_14;
      local_3c = (float)*(int *)((int)&DAT_005f195c + iVar2) * local_14;
      local_38 = (int)ROUND(local_44 * _DAT_005de380);
      local_34 = (int)ROUND(local_40 * _DAT_005de380);
      local_30 = (int)ROUND(local_3c * _DAT_005de380);
      iVar2 = iVar2 + 0xc;
      FUN_005632a3(*0x01BDD7E4 + iVar3,&local_38);
      iVar3 = iVar3 + 0x30;
    } while (iVar2 != 0x2e8);
    iVar2 = 0;
    do {
      piVar1 = 0x01BDD7E4;
      local_80 = *(uint *)((int)&DAT_005f1c3c + iVar2);
      local_7c = *(uint *)((int)&DAT_005f1c40 + iVar2);
      local_78 = *(uint *)((int)&DAT_005f1c44 + iVar2);
      local_74 = *(uint *)((int)&DAT_005f1c48 + iVar2);
      local_6c = *(uint *)((int)&DAT_005f1c50 + iVar2);
      fVar5 = (float10)*(int *)((int)&DAT_005f1c4c + iVar2) * (float10)*(float *)(param_1 + 0x30);
      local_68 = *(uint *)((int)&DAT_005f1c54 + iVar2);
      local_64 = *(uint *)((int)&DAT_005f1c58 + iVar2);
      local_60 = *(uint *)((int)&DAT_005f1c5c + iVar2);
      iVar2 = iVar2 + 0x24;
      FUN_005a3120(local_84,&LAB_0044d060);
      local_70 = (int)ROUND(fVar5);
      FUN_0046d330(piVar1);
    } while (iVar2 != 0xbd0);
    return;
  }
  FUN_0044d020();
  return;
}
