// Name: core_flies.cpp_drawFlyPixel_FUN_004cc230
// Address: 004cc230
// MANUAL RECONSTRUCTION
// Address Range: [[004cc230, 004cc2b6]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_drawFlyPixel_FUN_004cc230(int screen_x,int screen_y,int z_depth)

#include "nocturne.h"

void __cdecl core_flies_cpp_drawFlyPixel_FUN_004cc230(int screen_x,int screen_y,int z_depth)
{
  uint *puVar3;
  uint dst;
  uint src;
  uint blend;
  uint invblend;
  uint out_pix;
  int c;
  ushort pix_dst;
  ushort pix_src;
  ushort w_blend;
  ushort w_invblend;
  ushort mixed;
  ushort shifted;
  int clamped;

  if ((g_ZBufferScanlineArray[screen_y][screen_x] < (uint)z_depth) && (g_BitsPerPixel == 0x20)) {
    puVar3 = (uint *)((int)g_ScreenBufferArray[screen_y] + screen_x * 4);
    dst = *puVar3;
    src = (uint)g_ActiveRenderColor;
    blend = g_FlyBlendColor;
    invblend = g_FlyInvBlendColor;

    out_pix = 0;
    for (c = 0; c < 4; c = c + 1) {
      pix_dst = (ushort)((dst >> (c * 8)) & 0xff);
      pix_src = (ushort)((src >> (c * 8)) & 0xff);
      w_blend = (ushort)((blend >> (c * 8)) & 0xff);
      w_invblend = (ushort)((invblend >> (c * 8)) & 0xff);

      mixed = (ushort)(pix_src * w_invblend + pix_dst * w_blend);
      shifted = mixed >> 8;

      clamped = (shifted > 0xff) ? 0xff : (int)shifted;

      out_pix = out_pix | ((uint)(uchar)clamped << (c * 8));
    }

    *puVar3 = out_pix;
    return;
  }
  return;
}
