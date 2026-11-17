// Name: engine_3d.c_setActiveRenderColor_FUN_00405840
// Address: 00405840
// Address Range: [[00405840, 0040586e]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_setActiveRenderColor_FUN_00405840(void)

#include "nocturne.h"

void __cdecl engine_3d_c_setActiveRenderColor_FUN_00405840(void)

{
  if (-1 < g_INT_006b0260) {
    g_ActiveRenderColor = g_INT_ARRAY_005acbc4[g_INT_006b0260];
    return;
  }
  g_ActiveRenderColor = -g_INT_006b0260;
  return;
}
