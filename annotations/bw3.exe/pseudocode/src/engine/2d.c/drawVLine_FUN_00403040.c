// Name: engine_2d.c_drawVLine_FUN_00403040
// Address: 00403040
// Address Range: [[00403040, 00403164]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawVLine_FUN_00403040(int x,int y1,int y2)

#include "nocturne.h"

void __cdecl engine_2d_c_drawVLine_FUN_00403040(int x,int y1,int y2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  if ((g_INT_01c6b5a8 <= x) && (x <= g_INT_01c6b5b0)) {
    if (y1 < g_INT_01c6b5ac) {
      y1 = g_INT_01c6b5ac;
    }
    if (g_INT_01c6b5b4 < y2) {
      y2 = g_INT_01c6b5b4;
    }
    if (y1 <= y2) {
      iVar2 = y2 * 4;
      iVar5 = y1 * 4;
      if ((uint)g_INT_005fba20 < 0x10) {
        if (g_INT_005fba20 != 8) {
LAB_0040313e:
          g_CHAR_PTR_01d71de0 = "..\\engine\\2d.c";
          g_INT_01d71de4 = 0x8d3;
          core_main_c_displayErrorAndQuit_FUN_004e4330("vLine - invalid bitsPerPixel");
          return;
        }
        for (; iVar5 <= iVar2; iVar5 = iVar5 + 4) {
          *(byte *)(*(int *)((int)g_ScreenBufferArray + iVar5) + x) =
               (byte)g_INT_01c6b5c0;
        }
      }
      else if ((uint)g_INT_005fba20 < 0x11) {
        uVar3 = g_ColorTable16[g_INT_01c6b5c0];
        if (y1 <= y2) {
          do {
            piVar1 = (int *)((int)g_ScreenBufferArray + iVar5);
            iVar5 = iVar5 + 4;
            *(ushort *)(*piVar1 + x * 2) = uVar3;
          } while (iVar5 <= iVar2);
        }
      }
      else {
        if (g_INT_005fba20 != 0x20) goto LAB_0040313e;
        uVar4 = g_ColorTable32[g_INT_01c6b5c0];
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
