// Name: engine_3d.c_setRenderAlpha_FUN_00406bd0
// Address: 00406bd0
// Address Range: [[00406bd0, 00406c14]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)

#include "nocturne.h"

int __cdecl engine_3d_c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)

{
  g_CurrentAlphaValue = alpha_color_value >> 8;
  if (g_CurrentAlphaValue < 0) {
    g_CurrentAlphaValue = 0;
  }
  else if (0xff < g_CurrentAlphaValue) {
    g_CurrentAlphaValue = 0xff;
  }
  g_CurrentRenderColor =
       g_CurrentAlphaValue | g_CurrentAlphaValue << 8 | g_CurrentAlphaValue << 0x10;
  g_CurrentInvertedColor = g_CurrentRenderColor ^ 0xffffff;
  return g_CurrentInvertedColor;
}
