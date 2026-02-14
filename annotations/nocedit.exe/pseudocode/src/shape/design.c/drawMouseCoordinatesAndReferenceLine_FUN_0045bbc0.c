// Name: shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0
// Address: 0045bbc0
// Address Range: [[0045bbc0, 0045bd0a]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0(void)

#include "nocturne.h"

void __cdecl shape_design_c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0(void)

{
  char local_70 [80];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_18 = (((float)g_WindowWidth * (float)3) / (float)g_WindowHeight)
             * (float)0.25;
  local_14 = (float)g_ZoomLevel *
             (((float)g_MouseX - (float)g_WindowWidth * (float)0.5) /
             ((float)g_WindowWidth * (float)0.5)) * 0.00390625f
             * local_18;
  local_1c = (float)g_ZoomLevel *
             (-((float)g_MouseY - (float)g_WindowHeight * (float)0.5) /
             ((float)g_WindowHeight * (float)0.5)) * 0.00390625f
  ;
  if (((g_MouseButtonFlags.bytes[0] & 1) != 0) && (g_MouseX < 7)) {
    g_MouseReferenceY = g_MouseY;
    g_StoredWorldYCoordinate = (int)local_1c;
  }
  local_20 = (float)g_StoredWorldYCoordinate;
  g_ActiveRenderColor = 0x1f;
  engine_2d_c_drawLine_FUN_004011b0(0,g_MouseReferenceY,6,g_MouseReferenceY);
  _sprintf
            (local_70,"%f,%f,%f",(double)local_14,(double)local_1c,(double)local_20);
  engine_2d_c_drawText_FUN_00401fd0(local_70,g_WindowWidth / 2 + 2,g_WindowHeight + -0xb);
  return;
}
