// Name: engine_3d.c_setRenderAlpha_FUN_00406bf0
// Address: 00406bf0
// Address Range: [[00406bf0, 00406c34]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)

#include "nocturne.h"

int __cdecl engine_3d_c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)

{
  g_INT_005fba38 = alpha_color_value >> 8;
  if (g_INT_005fba38 < 0) {
    g_INT_005fba38 = 0;
  }
  else if (0xff < g_INT_005fba38) {
    g_INT_005fba38 = 0xff;
  }
  g_INT_005f07c0 = g_INT_005fba38 | g_INT_005fba38 << 8 | g_INT_005fba38 << 0x10;
  g_INT_00730400 = g_INT_005f07c0 ^ 0xffffff;
  return g_INT_00730400;
}
