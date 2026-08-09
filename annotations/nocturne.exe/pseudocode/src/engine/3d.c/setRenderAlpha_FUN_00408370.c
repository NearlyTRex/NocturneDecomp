// Name: engine_3d.c_setRenderAlpha_FUN_00408370
// Address: 00408370
// Address Range: [[00408370, 004083b4]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_setRenderAlpha_FUN_00408370(int alpha_color_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_setRenderAlpha_FUN_00408370(int alpha_color_value)

{
  g_CurrentAlphaValue = alpha_color_value >> 8;
  if (g_CurrentAlphaValue < 0) {
    g_CurrentAlphaValue = 0;
  }
  else if (0xff < g_CurrentAlphaValue) {
    g_CurrentAlphaValue = 0xff;
  }
  INT_005acab4 = g_CurrentAlphaValue | g_CurrentAlphaValue << 8 | g_CurrentAlphaValue << 0x10;
  _DAT_006b0284 = INT_005acab4 ^ 0xffffff;
  return _DAT_006b0284;
}
