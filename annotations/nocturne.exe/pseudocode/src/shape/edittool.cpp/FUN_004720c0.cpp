// Name: shape_edittool.cpp_FUN_004720c0
// Address: 004720c0
// Address Range: [[004720c0, 004721dc]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_004720c0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_004720c0(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  int local_14;
  
  bVar10 = 0;
  if (_DAT_01bcd07c < 1) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0x6f7;
    core_main_c_FUN_004c8440("CEditorTools::closeWindow() called but no window was opened!");
  }
  iVar1 = (_DAT_01bcd07c + -1) * 0x1d8;
  puVar7 = *(uint **)(iVar1 + 0x1bcd248);
  if (puVar7 != (uint *)0x0) {
    iVar4 = DAT_005b7624 * (*(int *)(iVar1 + 0x1bcd088) - *(int *)(iVar1 + 0x1bcd080));
    iVar5 = iVar4 >> 0x1f;
    uVar2 = (int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
    iVar4 = *(int *)(iVar1 + 0x1bcd084);
    if (iVar4 < *(int *)(iVar1 + 0x1bcd08c)) {
      local_14 = iVar4 * 4;
      do {
        iVar5 = *(int *)(iVar1 + 0x1bcd080) * DAT_005b7624;
        iVar6 = iVar5 >> 0x1f;
        iVar4 = iVar4 + 1;
        puVar8 = puVar7;
        puVar9 = (uint *)
                 (*(int *)(&DAT_01bd2fa0 + local_14) +
                 ((int)((iVar5 + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >> 3));
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
        for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(byte *)puVar9 = *(byte *)puVar8;
          puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
          puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
        }
        puVar7 = (uint *)((int)puVar7 + uVar2);
        local_14 = local_14 + 4;
      } while (iVar4 < *(int *)(iVar1 + 0x1bcd08c));
    }
  }
  shape_edittool_cpp_CEditorTools_popWindowState_FUN_004721e0(param_1);
  return;
}
