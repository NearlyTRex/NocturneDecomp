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
  
  if ((g_INT_01c35e48 <= x) && (x <= g_ClipRight)) {
    if (y1 < g_INT_01c35e4c) {
      y1 = g_INT_01c35e4c;
    }
    if (g_INT_01c35e54 < y2) {
      y2 = g_INT_01c35e54;
    }
    if (y1 <= y2) {
      iVar2 = y2 * 4;
      iVar5 = y1 * 4;
      if ((uint)g_INT_006141c0 < 0x10) {
        if (g_INT_006141c0 != 8) {
LAB_0040313e:
          g_CHAR_PTR_01d046a0 = "..\\engine\\2d.c";
          g_INT_01d046a4 = 0x8b9;
          core_main_c_displayErrorAndQuit_FUN_004e4500("vLine - invalid bitsPerPixel");
          return;
        }
        for (; iVar5 <= iVar2; iVar5 = iVar5 + 4) {
          *(byte *)(*(int *)((int)g_ScreenBufferArray + iVar5) + x) =
               (byte)g_INT_01c35e60;
        }
      }
      else if ((uint)g_INT_006141c0 < 0x11) {
        uVar3 = g_ColorTable16[g_INT_01c35e60];
        if (y1 <= y2) {
          do {
            piVar1 = (int *)((int)g_ScreenBufferArray + iVar5);
            iVar5 = iVar5 + 4;
            *(ushort *)(*piVar1 + x * 2) = uVar3;
          } while (iVar5 <= iVar2);
        }
      }
      else {
        if (g_INT_006141c0 != 0x20) goto LAB_0040313e;
        uVar4 = g_ColorTable32[g_INT_01c35e60];
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
