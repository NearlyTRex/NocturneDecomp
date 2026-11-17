// Name: engine_3d.c_setActiveRenderColor_FUN_00404410
// Address: 00404410
// Address Range: [[00404410, 0040443e]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404410(void)

#include "nocturne.h"

void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404410(void)

{
  if (-1 < g_INT_00713a5c) {
    g_INT_01c4f020 = g_INT_ARRAY_00610600[g_INT_00713a5c];
    return;
  }
  g_INT_01c4f020 = -g_INT_00713a5c;
  return;
}
