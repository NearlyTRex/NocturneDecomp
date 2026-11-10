// Name: shape_edittool.cpp_paintWindowBackground_FUN_0047cd80
// Address: 0047cd80
// Address Range: [[0047cd80, 0047ce77]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_paintWindowBackground_FUN_0047cd80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_paintWindowBackground_FUN_0047cd80(void)

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
  
  bVar10 = 0;
  if (_DAT_01c5b104 < 1) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0x3df;
    core_main_c_FUN_004e4330("paintWindowBackground called but no window was opened!");
  }
  iVar1 = (_DAT_01c5b104 + -1) * 0x1f8;
  puVar7 = *(uint **)(iVar1 + 0x1c5b2e0);
  if (puVar7 != (uint *)0x0) {
    iVar4 = *(int *)(iVar1 + 0x1c5b2ec) * DAT_005fba20;
    iVar5 = iVar4 >> 0x1f;
    uVar2 = (int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 0x1c5b2f0)) {
      do {
        if (*(int *)(&DAT_01c5faec + (*(int *)(iVar1 + 0x1c5b2e8) + iVar4) * 4) != 0) {
          iVar5 = *(int *)(iVar1 + 0x1c5b2e4) * DAT_005fba20;
          iVar6 = iVar5 >> 0x1f;
          puVar8 = puVar7;
          puVar9 = (uint *)
                   (*(int *)(&DAT_01c5faec + (*(int *)(iVar1 + 0x1c5b2e8) + iVar4) * 4) +
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
        }
        puVar7 = (uint *)((int)puVar7 + uVar2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar1 + 0x1c5b2f0));
    }
  }
  return;
}
