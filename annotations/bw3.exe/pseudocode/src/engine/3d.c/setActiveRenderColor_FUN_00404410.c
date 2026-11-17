// Name: engine_3d.c_setActiveRenderColor_FUN_00404410
// Address: 00404410
// Address Range: [[00404410, 0040443e]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404410(void)

#include "nocturne.h"

void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404410(void)

{
  if (-1 < g_INT_007303dc) {
    g_INT_01c6b5c0 = g_INT_ARRAY_005f08d0[g_INT_007303dc];
    return;
  }
  g_INT_01c6b5c0 = -g_INT_007303dc;
  return;
}
