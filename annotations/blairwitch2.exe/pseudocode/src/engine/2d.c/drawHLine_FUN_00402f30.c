// Name: engine_2d.c_drawHLine_FUN_00402f30
// Address: 00402f30
// Address Range: [[00402f30, 00403037]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawHLine_FUN_00402f30(int x1,int y,int x2)

#include "nocturne.h"

void __cdecl engine_2d_c_drawHLine_FUN_00402f30(int x1,int y,int x2)

{
  ushort uVar1;
  uint uVar2;
  ulong count;
  ushort *puVar3;
  uint *puVar4;
  
  if ((g_INT_01c35e4c <= y) && (y <= g_INT_01c35e54)) {
    if (x1 < g_INT_01c35e48) {
      x1 = g_INT_01c35e48;
    }
    if (g_ClipRight < x2) {
      x2 = g_ClipRight;
    }
    count = (x2 - x1) + 1;
    if (0 < (int)count) {
      if ((uint)g_INT_006141c0 < 0x10) {
        if (g_INT_006141c0 != 8) {
LAB_00403012:
          g_CHAR_PTR_01d046a0 = "..\\engine\\2d.c";
          g_INT_01d046a4 = 0x887;
          core_main_c_displayErrorAndQuit_FUN_004e4500("hLine - invalid bitsPerPixel");
          return;
        }
        memset(g_ScreenBufferArray[y] + x1,g_INT_01c35e60,count);
      }
      else if ((uint)g_INT_006141c0 < 0x11) {
        uVar1 = g_ColorTable16[g_INT_01c35e60];
        puVar3 = (ushort *)(g_ScreenBufferArray[y] + x1 * 2);
        if (0 < (int)count) {
          do {
            count = count - 1;
            *puVar3 = uVar1;
            puVar3 = puVar3 + 1;
          } while (0 < (int)count);
          return;
        }
      }
      else {
        if (g_INT_006141c0 != 0x20) goto LAB_00403012;
        uVar2 = g_ColorTable32[g_INT_01c35e60];
        puVar4 = (uint *)(g_ScreenBufferArray[y] + x1 * 4);
        if (0 < (int)count) {
          do {
            count = count - 1;
            *puVar4 = uVar2;
            puVar4 = puVar4 + 1;
          } while (0 < (int)count);
          return;
        }
      }
    }
  }
  return;
}
