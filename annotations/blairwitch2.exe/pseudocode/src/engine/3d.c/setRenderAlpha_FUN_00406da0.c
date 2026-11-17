// Name: engine_3d.c_setRenderAlpha_FUN_00406da0
// Address: 00406da0
// Address Range: [[00406da0, 00406de4]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_setRenderAlpha_FUN_00406da0(int alpha_color_value)

#include "nocturne.h"

int __cdecl engine_3d_c_setRenderAlpha_FUN_00406da0(int alpha_color_value)

{
  g_INT_006141d8 = alpha_color_value >> 8;
  if (g_INT_006141d8 < 0) {
    g_INT_006141d8 = 0;
  }
  else if (0xff < g_INT_006141d8) {
    g_INT_006141d8 = 0xff;
  }
  g_INT_006093c0 = g_INT_006141d8 | g_INT_006141d8 << 8 | g_INT_006141d8 << 0x10;
  g_INT_0070ca80 = g_INT_006093c0 ^ 0xffffff;
  return g_INT_0070ca80;
}
