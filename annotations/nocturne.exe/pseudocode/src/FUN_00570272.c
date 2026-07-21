// Name: FUN_00570272
// Address: 00570272
// Address Range: [[00570272, 0057040f]]
// Convention: unknown
// Signature: undefined4 FUN_00570272(int param_1)

#include "nocturne.h"

uint FUN_00570272(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  int local_18;
  
  bVar12 = 0;
  if (((*(byte *)(param_1 + 0x3c) & 2) != 0) && ((*(byte *)(param_1 + 0x3c) & 1) == 0)) {
    iVar2 = *(int *)(param_1 + 4);
    iVar9 = *(int *)(param_1 + 8) - iVar2;
    local_18 = *(int *)(param_1 + 0x34);
    if (local_18 <= iVar9) {
      local_18 = iVar9 + 0x200;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar4 = shape_memdbg_cpp_malloc_FUN_00564c18(local_18);
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x2c))(local_18);
    }
    if (iVar4 != 0) {
      FUN_00571df8(param_1,iVar4,local_18 + iVar4,0);
      puVar10 = *(uint **)(param_1 + 0xc);
      if (puVar10 != (uint *)0x0) {
        iVar3 = *(int *)(param_1 + 0x14);
        iVar5 = *(int *)(param_1 + 0x10) - iVar2;
        uVar7 = iVar5 - ((int)puVar10 - iVar2);
        puVar1 = (uint *)(((int)puVar10 - iVar2) + iVar4);
        puVar11 = puVar1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(byte *)puVar11 = *(byte *)puVar10;
          puVar10 = (uint *)((int)puVar10 + (uint)bVar12 * -2 + 1);
          puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
        }
        *(uint **)(param_1 + 0xc) = puVar1;
        *(int *)(param_1 + 0x14) = (iVar3 - iVar2) + iVar4;
        *(int *)(param_1 + 0x10) = iVar5 + iVar4;
      }
      puVar10 = *(uint **)(param_1 + 0x18);
      if (puVar10 == (uint *)0x0) {
        *(int *)(param_1 + 0x18) = iVar4;
        *(int *)(param_1 + 0x20) = iVar4;
        *(int *)(param_1 + 0x1c) = local_18 + iVar4;
      }
      else {
        iVar5 = (int)puVar10 - iVar2;
        iVar3 = *(int *)(param_1 + 0x20);
        iVar6 = *(int *)(param_1 + 0x1c) - iVar2;
        uVar7 = iVar6 - iVar5;
        puVar1 = (uint *)(iVar5 + iVar4);
        puVar11 = puVar1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
          puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(byte *)puVar11 = *(byte *)puVar10;
          puVar10 = (uint *)((int)puVar10 + (uint)bVar12 * -2 + 1);
          puVar11 = (uint *)((int)puVar11 + (uint)bVar12 * -2 + 1);
        }
        *(uint **)(param_1 + 0x18) = puVar1;
        *(uint **)(param_1 + 0x20) = puVar1;
        *(int *)(param_1 + 0x1c) = iVar4 + iVar6 + (local_18 - iVar9);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + ((iVar3 - iVar2) - iVar5);
      }
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x30) == 0) {
          shape_memdbg_cpp_free_FUN_00564486(iVar2);
        }
        else {
          (**(code **)(param_1 + 0x30))(iVar2);
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}
