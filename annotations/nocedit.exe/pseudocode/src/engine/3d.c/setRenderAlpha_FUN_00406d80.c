// Name: engine_3d.c_setRenderAlpha_FUN_00406d80
// Address: 00406d80
// Address Range: [[00406d80, 00406dc4]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_setRenderAlpha_FUN_00406d80(int alpha_color_value)

#include "nocturne.h"

void __cdecl engine_3d_c_setRenderAlpha_FUN_00406d80(int alpha_color_value)

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
  return;
}
