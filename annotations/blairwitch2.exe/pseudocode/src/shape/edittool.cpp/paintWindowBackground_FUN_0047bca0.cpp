// Name: shape_edittool.cpp_paintWindowBackground_FUN_0047bca0
// Address: 0047bca0
// Address Range: [[0047bca0, 0047bd97]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_paintWindowBackground_FUN_0047bca0(void)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_paintWindowBackground_FUN_0047bca0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  if (g_INT_01c2559c < 1) {
    g_CHAR_PTR_01d046a0 = "..\\shape\\edittool.cpp";
    g_INT_01d046a4 = 0x3b8;
    core_main_c_displayErrorAndQuit_FUN_004e4500("paintWindowBackground called but no window was opened!");
  }
  iVar1 = (g_INT_01c2559c + -1) * 0x1f8;
  puVar6 = *(uint **)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1d8);
  if (puVar6 != (uint *)0x0) {
    iVar4 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e4) * g_INT_006141c0 >> 0x1f;
    uVar2 = (int)((*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e4) * g_INT_006141c0 + iVar4 * -8) -
                 (uint)(iVar4 << 2 < 0)) >> 3;
    iVar4 = 0;
    if (0 < *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e8)) {
      do {
        if (g_ARRAY_PTR_01c2a38c[*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e0) + iVar4] !=
            (byte *)0x0) {
          iVar5 = *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1dc) * g_INT_006141c0 >> 0x1f;
          puVar7 = puVar6;
          puVar8 = (uint *)
                   (g_ARRAY_PTR_01c2a38c[*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e0) + iVar4] +
                   ((int)((*(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1dc) * g_INT_006141c0 +
                          iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3));
          for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
          for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(byte *)puVar8 = *(byte *)puVar7;
            puVar7 = (uint *)((int)puVar7 + (uint)bVar9 * -2 + 1);
            puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
          }
        }
        puVar6 = (uint *)((int)puVar6 + uVar2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(g_CHAR_ARRAY_01c255a0 + iVar1 + 0x1e8));
    }
  }
  return;
}
