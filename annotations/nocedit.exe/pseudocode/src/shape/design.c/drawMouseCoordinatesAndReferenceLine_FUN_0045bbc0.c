// Name: shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0
// Address: 0045bbc0
// Address Range: [[0045bbc0, 0045bd0a]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0(void)

#include "nocturne.h"

void __cdecl shape_design_c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  char local_70 [80];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar4 = (float)g_WindowWidth;
  fVar3 = (float)3;
  fVar2 = (float)g_WindowHeight;
  fVar1 = (float)0.25;
  fVar5 = (float)g_ZoomLevel *
          (((float)g_MouseX - (float)g_WindowWidth * (float)0.5) /
          ((float)g_WindowWidth * (float)0.5)) * 0.00390625f;
  fVar6 = (float)g_ZoomLevel *
          (-((float)g_MouseY - (float)g_WindowHeight * (float)0.5) /
          ((float)g_WindowHeight * (float)0.5)) * 0.00390625f;
  if (((g_MouseButtonFlags.bytes[0] & 1) != 0) && (g_MouseX < 7)) {
    g_MouseReferenceY = g_MouseY;
    g_StoredWorldYCoordinate = (int)fVar6;
  }
  iVar7 = g_StoredWorldYCoordinate;
  g_ActiveRenderColor = 0x1f;
  engine_2d_c_drawLine_FUN_004011b0(0,g_MouseReferenceY,6,g_MouseReferenceY);
  _sprintf(local_70,"%f,%f,%f",(double)(fVar5 * ((fVar4 * fVar3) / fVar2) * fVar1),
             (double)fVar6,(double)(float)iVar7);
  engine_2d_c_drawText_FUN_00401fd0(local_70,g_WindowWidth / 2 + 2,g_WindowHeight + -0xb);
  return;
}
