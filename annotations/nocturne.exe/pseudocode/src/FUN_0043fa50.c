// Name: FUN_0043fa50
// Address: 0043fa50
// Address Range: [[0043fa50, 0043fc78]]
// Convention: unknown
// Signature: void FUN_0043fa50(int param_1)

#include "nocturne.h"

void FUN_0043fa50(int param_1)

{
  byte bVar1;
  byte uVar2;
  uint uVar3;
  byte *puVar4;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte *local_4c;
  byte *local_48;
  byte *local_40;
  int local_3c;
  uint local_30;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_14;
  byte *puVar5;
  
  iVar7 = 0;
  FUN_00563cc0(param_1,0,0x1000);
  local_3c = 0x1000;
  do {
    iVar11 = 0;
    do {
      puVar9 = (byte *)(param_1 + iVar11 * 0x10 + local_3c);
      puVar5 = (byte *)(iVar11 * 0x10 + iVar7 + param_1);
      do {
        puVar4 = puVar5 + 0x100;
        uVar2 = FUN_0056488c();
        *puVar5 = uVar2;
        puVar5 = puVar4;
      } while (puVar4 != puVar9);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x10);
    local_3c = local_3c + 1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x10);
  local_14 = (uint)puVar4 ^ (uint)puVar9;
  local_30 = 0xffffffff;
  do {
    local_24 = 0xffffffff;
    local_1c = 0;
    local_20 = 0;
    do {
      uVar10 = 0;
      local_40 = (byte *)((local_14 + 1 & 0xf) + local_1c + param_1);
      pbVar8 = (byte *)((local_30 & 0xf) + local_1c + param_1);
      local_4c = (byte *)(local_14 + (local_20 + 1U & 0xf) * 0x10 + param_1);
      local_48 = (byte *)(local_14 + (local_24 & 0xf) * 0x10 + param_1);
      uVar12 = 0xffffffff;
      pbVar6 = (byte *)(local_14 + local_1c + param_1);
      do {
        uVar3 = uVar12 & 0xf;
        uVar10 = uVar10 + 1;
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 0x100;
        uVar12 = uVar12 + 1;
        *pbVar6 = (byte)((ulonglong)
                         ((uint)*local_40 +
                         (uint)bVar1 +
                         (uint)*local_4c +
                         (uint)*pbVar6 +
                         (uint)*(byte *)(uVar3 * 0x100 + param_1 + local_1c + local_14) +
                         (uint)*(byte *)((uVar10 & 0xf) * 0x100 + param_1 + local_1c + local_14) +
                         (uint)*local_48) / 7);
        local_40 = local_40 + 0x100;
        local_48 = local_48 + 0x100;
        local_4c = local_4c + 0x100;
        pbVar6 = pbVar6 + 0x100;
      } while ((int)uVar10 < 0x10);
      local_1c = local_1c + 0x10;
      local_20 = local_20 + 1;
      local_24 = local_24 + 1;
    } while (local_20 < 0x10);
    local_14 = local_14 + 1;
    local_30 = local_30 + 1;
  } while ((int)local_14 < 0x10);
  FUN_0043fa20(param_1);
  return;
}
