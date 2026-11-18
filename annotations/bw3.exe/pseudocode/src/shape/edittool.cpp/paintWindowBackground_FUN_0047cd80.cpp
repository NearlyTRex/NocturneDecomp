// Name: shape_edittool.cpp_paintWindowBackground_FUN_0047cd80
// Address: 0047cd80
// Address Range: [[0047cd80, 0047ce77]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_paintWindowBackground_FUN_0047cd80(void)

#include "nocturne.h"

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
  if (g_WindowStackCount < 1) {
    g_CHAR_PTR_01d71de0 = "..\\shape\\edittool.cpp";
    g_INT_01d71de4 = 0x3df;
    core_main_c_displayErrorAndQuit_FUN_004e4330("paintWindowBackground called but no window was opened!");
  }
  iVar1 = (g_WindowStackCount + -1) * 0x1f8;
  puVar7 = *(uint **)((int)g_SWindow_ARRAY_01c5b108 + iVar1 + 0x1d8);
  if (puVar7 != (uint *)0x0) {
    iVar4 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar1 + 0x1e4) * g_INT_005fba20;
    iVar5 = iVar4 >> 0x1f;
    uVar2 = (int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
    iVar4 = 0;
    if (0 < *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar1 + 0x1e8)) {
      do {
        if (g_ScreenBufferArray[*(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar1 + 0x1e0) + iVar4] !=
            (byte *)0x0) {
          iVar5 = *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar1 + 0x1dc) * g_INT_005fba20;
          iVar6 = iVar5 >> 0x1f;
          puVar8 = puVar7;
          puVar9 = (uint *)
                   (g_ScreenBufferArray
                    [*(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar1 + 0x1e0) + iVar4] +
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
      } while (iVar4 < *(int *)((int)g_SWindow_ARRAY_01c5b108 + iVar1 + 0x1e8));
    }
  }
  return;
}
