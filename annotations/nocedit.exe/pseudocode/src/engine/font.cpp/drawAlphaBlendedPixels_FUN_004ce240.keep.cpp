// Name: engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240
// Address: 004ce240
// MANUAL RECONSTRUCTION
// Address Range: [[004ce240, 004ce2cc]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240(uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color)

#include "nocturne.h"

void __cdecl engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240(uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color)
{
  uint render_color;
  uint color;
  uint dst;
  uint out_pix;
  int c;
  ushort render_byte;
  ushort color_byte;
  ushort dst_byte;
  ushort blend_byte;
  ushort alpha;
  ushort inv_alpha;
  ushort mixed;
  ushort shifted;
  int clamped;

  render_color = (uint)g_CurrentRenderColor;

  do {
    if (*src_indices != 0) {
      color = color_table[*src_indices];
      dst = *dest_buffer;

      out_pix = 0;
      for (c = 0; c < 4; c = c + 1) {
        color_byte = (ushort)((color >> (c * 8)) & 0xff);
        render_byte = (ushort)((render_color >> (c * 8)) & 0xff);
        blend_byte = (ushort)((blend_color >> (c * 8)) & 0xff);
        dst_byte = (ushort)((dst >> (c * 8)) & 0xff);

        alpha = (ushort)((color_byte * render_byte) >> 8);
        inv_alpha = (ushort)(0xff - alpha);

        mixed = (ushort)(blend_byte * alpha + dst_byte * inv_alpha);
        shifted = mixed >> 8;

        clamped = (shifted > 0xff) ? 0xff : (int)shifted;

        out_pix = out_pix | ((uint)(uchar)clamped << (c * 8));
      }

      *dest_buffer = out_pix;
    }
    src_indices = src_indices + 1;
    dest_buffer = dest_buffer + 1;
    pixel_count = pixel_count - 1;
  } while (pixel_count > 0);
  return;
}
