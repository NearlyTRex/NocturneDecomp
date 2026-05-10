// Name: shape_edittool.cpp_paintWindowBackground_FUN_0049e590
// Address: 0049e590
// MANUAL RECONSTRUCTION
// Address Range: [[0049e590, 0049e69f]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_paintWindowBackground_FUN_0049e590(void)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_paintWindowBackground_FUN_0049e590(void)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x36e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("paintWindowBackground called but no window was opened!");
  }
  iVar3 = g_WindowStackCount + -1;
  puVar7 = (uint *)g_WindowStack[iVar3].screen_backup_buffer;
  if (puVar7 != (uint *)0x0) {
    iVar4 = g_WindowStack[iVar3].backup_width * g_BitsPerPixel;
    iVar5 = iVar4 >> 0x1f;
    uVar1 = (int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3;
    iVar8 = 0;
    if (0 < g_WindowStack[iVar3].backup_height) {
      do {
        iVar7 = g_WindowStack[iVar3].backup_x_offset * g_BitsPerPixel;
        iVar6 = iVar7 >> 0x1f;
        puVar9 = (uint *)
                 ((char *)g_ScreenBufferArray[g_WindowStack[iVar3].backup_y_offset + iVar8] +
                 ((int)((iVar7 + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >> 3));
        memcpy(puVar9,puVar7,uVar1);
        iVar8 = iVar8 + 1;
        puVar7 = (uint *)((char *)puVar7 + uVar1);
      } while (iVar8 < g_WindowStack[iVar3].backup_height);
    }
  }
  return;
}
