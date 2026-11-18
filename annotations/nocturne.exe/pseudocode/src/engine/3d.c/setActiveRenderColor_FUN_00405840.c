// Name: engine_3d.c_setActiveRenderColor_FUN_00405840
// Address: 00405840
// Address Range: [[00405840, 0040586e]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_setActiveRenderColor_FUN_00405840(void)

#include "nocturne.h"

void __cdecl engine_3d_c_setActiveRenderColor_FUN_00405840(void)

{
  if (-1 < g_CurrentPolygonColor) {
    g_ActiveRenderColor = g_ColorLookupTable[g_CurrentPolygonColor];
    return;
  }
  g_ActiveRenderColor = -g_CurrentPolygonColor;
  return;
}
