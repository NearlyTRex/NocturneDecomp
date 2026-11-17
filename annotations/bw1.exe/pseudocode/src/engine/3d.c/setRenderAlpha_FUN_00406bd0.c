// Name: engine_3d.c_setRenderAlpha_FUN_00406bd0
// Address: 00406bd0
// Address Range: [[00406bd0, 00406c14]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)

#include "nocturne.h"

int __cdecl engine_3d_c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)

{
  g_INT_0061b4b8 = alpha_color_value >> 8;
  if (g_INT_0061b4b8 < 0) {
    g_INT_0061b4b8 = 0;
  }
  else if (0xff < g_INT_0061b4b8) {
    g_INT_0061b4b8 = 0xff;
  }
  g_INT_006104f0 = g_INT_0061b4b8 | g_INT_0061b4b8 << 8 | g_INT_0061b4b8 << 0x10;
  g_INT_00713a80 = g_INT_006104f0 ^ 0xffffff;
  return g_INT_00713a80;
}
