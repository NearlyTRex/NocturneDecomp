// Name: shape_edittool.cpp_paintWindowBackground_FUN_0049e590
// Address: 0049e590
// Address Range: [[0049e590, 0049e69f]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_paintWindowBackground_FUN_0049e590(void)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_paintWindowBackground_FUN_0049e590(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x36e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("paintWindowBackground called but no window was opened!");
  }
  iVar3 = g_WindowStackCount + -1;
  puVar7 = g_WindowStack[iVar3].screen_backup_buffer;
  if (puVar7 != (uint *)0x0) {
    iVar4 = g_WindowStack[iVar3].backup_width * g_BitsPerPixel;
    iVar5 = iVar4 >> 0x1f;
    uVar1 = (int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
    iVar4 = 0;
    if (0 < g_WindowStack[iVar3].backup_height) {
      do {
        iVar5 = g_WindowStack[iVar3].backup_x_offset * g_BitsPerPixel;
        iVar6 = iVar5 >> 0x1f;
        puVar8 = puVar7;
        puVar9 = (uint *)
                 ((int)g_ScreenBufferArray[g_WindowStack[iVar3].backup_y_offset + iVar4] +
                 ((int)((iVar5 + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >> 3));
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
        for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(byte *)puVar9 = *(byte *)puVar8;
          puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
          puVar9 = (uint *)((int)puVar9 + (uint)bVar10 * -2 + 1);
        }
        iVar4 = iVar4 + 1;
        puVar7 = (uint *)((int)puVar7 + uVar1);
      } while (iVar4 < g_WindowStack[iVar3].backup_height);
    }
  }
  return;
}
