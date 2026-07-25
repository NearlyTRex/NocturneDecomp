// Name: FUN_004673e0
// Address: 004673e0
// Address Range: [[004673e0, 0046755d]]
// Convention: unknown
// Signature: void FUN_004673e0(int param_1)

#include "nocturne.h"

void FUN_004673e0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar9 = 0;
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
            (0x01BCD074,"Consolidating raytrace geometry arrays...");
  FUN_004675e0(param_1);
  *(uint *)(param_1 + 4) = 0;
  iVar5 = 0;
  for (iVar2 = 0;
      iVar2 < *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x48);
      iVar2 = iVar2 + 1) {
    piVar1 = (int *)(*(int *)(param_1 + 0x4c) + iVar5);
    iVar5 = iVar5 + 0x58;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *piVar1;
  }
  FUN_00467560(param_1);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  while (iVar2 = *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x48),
        iVar2 - local_1c != 0 && local_1c <= iVar2) {
    puVar6 = (uint *)(*(int *)(param_1 + 0x4c) + local_20);
    if (0 < (int)*puVar6) {
      puVar7 = (uint *)puVar6[1];
      puVar8 = (uint *)(local_18 * 0x38 + *(int *)(param_1 + 8));
      for (uVar3 = *puVar6 * 0x38 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(byte *)puVar8 = *(byte *)puVar7;
        puVar7 = (uint *)((int)puVar7 + (uint)bVar9 * -2 + 1);
        puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
      }
      uVar3 = *puVar6;
      puVar7 = (uint *)puVar6[0x15];
      puVar8 = (uint *)(*(int *)(param_1 + 0xc) + local_18);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(byte *)puVar8 = *(byte *)puVar7;
        puVar7 = (uint *)((int)puVar7 + (uint)bVar9 * -2 + 1);
        puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
      }
      if (puVar6[1] != 0) {
        shape_memdbg_cpp_free_FUN_00564486(puVar6[1] - 4);
      }
      shape_memdbg_cpp_free_FUN_00564486(puVar6[0x15]);
      puVar6[1] = *(int *)(param_1 + 8) + local_18 * 0x38;
      uVar3 = local_18 + *(int *)(param_1 + 0xc);
      local_18 = local_18 + *puVar6;
      puVar6[0x15] = uVar3;
    }
    local_1c = local_1c + 1;
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760
              (0x01BCD074,(float)local_1c,
               (float)(*(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44) *
                      *(int *)(param_1 + 0x48)));
    local_20 = local_20 + 0x58;
  }
  FUN_004720c0(0x01BCD074);
  return;
}
