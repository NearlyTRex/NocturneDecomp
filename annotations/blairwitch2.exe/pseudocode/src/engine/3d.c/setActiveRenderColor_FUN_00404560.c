// Name: engine_3d.c_setActiveRenderColor_FUN_00404560
// Address: 00404560
// Address Range: [[00404560, 0040458e]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404560(void)

#include "nocturne.h"

void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404560(void)

{
  if (-1 < g_CurrentPolygonColor) {
    g_INT_01c35e60 = g_ColorLookupTable[g_CurrentPolygonColor];
    return;
  }
  g_INT_01c35e60 = -g_CurrentPolygonColor;
  return;
}
