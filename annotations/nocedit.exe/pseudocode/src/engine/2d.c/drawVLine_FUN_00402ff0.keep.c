// Name: engine_2d.c_drawVLine_FUN_00402ff0
// Address: 00402ff0
// MANUAL RECONSTRUCTION
// Address Range: [[00402ff0, 00403114]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawVLine_FUN_00402ff0(int x,int y1,int y2)

#include "nocturne.h"

void __cdecl engine_2d_c_drawVLine_FUN_00402ff0(int x,int y1,int y2)

{
  ushort uVar3;
  uint uVar4;

  if ((g_ClipLeft <= x) && (x <= g_ClipRight)) {
    if (y1 < g_ClipTop) {
      y1 = g_ClipTop;
    }
    if (g_ClipBottom < y2) {
      y2 = g_ClipBottom;
    }
    if (y1 <= y2) {
      if ((uint)g_BitsPerPixel < 0x10) {
        if (g_BitsPerPixel != 8) {
LAB_004030ee:
          g_CurrentFilename = "..\\engine\\2d.c";
          g_CurrentLineNumber = 2264;
          core_main_c_displayErrorAndQuit_FUN_00506f10("vLine - invalid bitsPerPixel");
          return;
        }
        for (; y1 <= y2; y1 = y1 + 1) {
          ((byte *)g_ScreenBufferArray[y1])[x] = (byte)g_ActiveRenderColor;
        }
      }
      else if ((uint)g_BitsPerPixel < 0x11) {
        uVar3 = g_ColorTable16[g_ActiveRenderColor];
        if (y1 <= y2) {
          do {
            ((ushort *)g_ScreenBufferArray[y1])[x] = uVar3;
            y1 = y1 + 1;
          } while (y1 <= y2);
        }
      }
      else {
        if (g_BitsPerPixel != 0x20) goto LAB_004030ee;
        uVar4 = g_ColorTable32[g_ActiveRenderColor];
        if (y1 <= y2) {
          do {
            ((uint *)g_ScreenBufferArray[y1])[x] = uVar4;
            y1 = y1 + 1;
          } while (y1 <= y2);
          return;
        }
      }
    }
  }
  return;
}
