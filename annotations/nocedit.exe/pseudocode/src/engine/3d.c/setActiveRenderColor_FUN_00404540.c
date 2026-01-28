// Name: engine_3d.c_setActiveRenderColor_FUN_00404540
// Address: 00404540
// Address Range: [[00404540, 0040456e]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404540(void)

#include "nocturne.h"

void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404540(void)

{
  if (-1 < g_CurrentPolygonColor) {
    g_ActiveRenderColor = g_ColorLookupTable[g_CurrentPolygonColor];
    return;
  }
  g_ActiveRenderColor = -g_CurrentPolygonColor;
  return;
}
