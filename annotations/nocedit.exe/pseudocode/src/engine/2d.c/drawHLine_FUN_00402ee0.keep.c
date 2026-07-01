// Name: engine_2d.c_drawHLine_FUN_00402ee0
// Address: 00402ee0
// MANUAL RECONSTRUCTION
// Address Range: [[00402ee0, 00402fe7]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawHLine_FUN_00402ee0(int x1,int y,int x2)

#include "nocturne.h"

void __cdecl engine_2d_c_drawHLine_FUN_00402ee0(int x1,int y,int x2)

{
  ushort uVar1;
  uint uVar2;
  ulong count;
  ushort *puVar3;
  uint *puVar4;
  
  if ((g_ClipTop <= y) && (y <= g_ClipBottom)) {
    if (x1 < g_ClipLeft) {
      x1 = g_ClipLeft;
    }
    if (g_ClipRight < x2) {
      x2 = g_ClipRight;
    }
    count = (x2 - x1) + 1;
    if (0 < (int)count) {
      if ((uint)g_BitsPerPixel < 0x10) {
        if (g_BitsPerPixel != 8) {
LAB_00402fc2:
          g_CurrentFilename = "..\\engine\\2d.c";
          g_CurrentLineNumber = 2214;
          core_main_c_displayErrorAndQuit_FUN_00506f10("hLine - invalid bitsPerPixel");
          return;
        }
        memset((byte *)g_ScreenBufferArray[y] + x1,g_ActiveRenderColor,count);
      }
      else if ((uint)g_BitsPerPixel < 0x11) {
        uVar1 = g_ColorTable16[g_ActiveRenderColor];
        puVar3 = (ushort *)g_ScreenBufferArray[y] + x1;
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
        if (g_BitsPerPixel != 0x20) goto LAB_00402fc2;
        uVar2 = g_ColorTable32[g_ActiveRenderColor];
        puVar4 = (uint *)g_ScreenBufferArray[y] + x1;
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
