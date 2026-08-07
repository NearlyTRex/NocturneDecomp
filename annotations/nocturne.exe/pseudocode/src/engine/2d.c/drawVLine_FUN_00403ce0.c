// Name: engine_2d.c_drawVLine_FUN_00403ce0
// Address: 00403ce0
// Address Range: [[00403ce0, 00403e04]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawVLine_FUN_00403ce0(int x,int y1,int y2)

#include "nocturne.h"

void __cdecl engine_2d_c_drawVLine_FUN_00403ce0(int x,int y1,int y2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  if ((g_ClipLeft <= x) && (x <= g_ClipRight)) {
    if (y1 < g_ClipTop) {
      y1 = g_ClipTop;
    }
    if (g_ClipBottom < y2) {
      y2 = g_ClipBottom;
    }
    if (y1 <= y2) {
      iVar2 = y2 * 4;
      iVar5 = y1 * 4;
      if ((uint)g_BitsPerPixel < 0x10) {
        if (g_BitsPerPixel != 8) {
LAB_00403dde:
          g_CurrentFilename = "..\\engine\\2d.c";
          g_CurrentLineNumber = 2262;
          core_main_c_displayErrorAndQuit_FUN_004c8440("vLine - invalid bitsPerPixel");
          return;
        }
        for (; iVar5 <= iVar2; iVar5 = iVar5 + 4) {
          *(byte *)(*(int *)((int)g_ScreenBufferArray + iVar5) + x) =
               (byte)g_ActiveRenderColor;
        }
      }
      else if ((uint)g_BitsPerPixel < 0x11) {
        uVar3 = g_ColorTable16[g_ActiveRenderColor];
        if (y1 <= y2) {
          do {
            piVar1 = (int *)((int)g_ScreenBufferArray + iVar5);
            iVar5 = iVar5 + 4;
            *(ushort *)(*piVar1 + x * 2) = uVar3;
          } while (iVar5 <= iVar2);
        }
      }
      else {
        if (g_BitsPerPixel != 0x20) goto LAB_00403dde;
        uVar4 = g_ColorTable32[g_ActiveRenderColor];
        if (y1 <= y2) {
          do {
            piVar1 = (int *)((int)g_ScreenBufferArray + iVar5);
            iVar5 = iVar5 + 4;
            *(uint *)(*piVar1 + x * 4) = uVar4;
          } while (iVar5 <= iVar2);
          return;
        }
      }
    }
  }
  return;
}
