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
  
  if ((g_INT_01c6b5ac <= y) && (y <= g_INT_01c6b5b4)) {
    if (x1 < g_INT_01c6b5a8) {
      x1 = g_INT_01c6b5a8;
    }
    if (g_INT_01c6b5b0 < x2) {
      x2 = g_INT_01c6b5b0;
    }
    count = (x2 - x1) + 1;
    if (0 < (int)count) {
      if ((uint)g_INT_005fba20 < 0x10) {
        if (g_INT_005fba20 != 8) {
LAB_00403012:
          g_CHAR_PTR_01d71de0 = "..\\engine\\2d.c";
          g_INT_01d71de4 = 0x8a1;
          core_main_c_displayErrorAndQuit_FUN_004e4330("hLine - invalid bitsPerPixel");
          return;
        }
        memset(g_ARRAY_PTR_01c5faec[y] + x1,g_INT_01c6b5c0,count);
      }
      else if ((uint)g_INT_005fba20 < 0x11) {
        uVar1 = g_USHORT_ARRAY_01c6a070[g_INT_01c6b5c0];
        puVar3 = (ushort *)(g_ARRAY_PTR_01c5faec[y] + x1 * 2);
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
        if (g_INT_005fba20 != 0x20) goto LAB_00403012;
        uVar2 = g_UINT_ARRAY_01c6a270[g_INT_01c6b5c0];
        puVar4 = (uint *)(g_ARRAY_PTR_01c5faec[y] + x1 * 4);
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
