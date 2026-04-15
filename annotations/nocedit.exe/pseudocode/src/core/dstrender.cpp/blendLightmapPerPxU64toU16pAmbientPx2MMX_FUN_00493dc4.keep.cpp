// Name: core_dstrender.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00493dc4
// Address: 00493dc4
// MANUAL RECONSTRUCTION
// Address Range: [[00493dc4, 004940e8]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00493dc4(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00493dc4(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
{
  ushort solid_ws[4];
  uint solid_raw;
  ulonglong xor_mask_bits;
  ulonglong tex64;
  uint tex_pix;
  uint palette;
  uint lm_idx;
  ulonglong lm_data;
  ulonglong lm_xored;
  ulonglong pix_bytes[2];
  ulonglong bias_val;
  int p;
  int c;
  ushort pix;
  ushort pal_byte;
  ushort pix_pal_low;
  short lm_x_w;
  short lm_w;
  short mul1_hi;
  short solid_hi;
  short bias_w;
  short sum16;
  ushort shifted;
  int clamped;
  uint pix0_16;
  uint pix1_16;

  solid_raw = (uint)g_SolidColorMode;
  solid_ws[0] = (ushort)((solid_raw & 0xff) << 6);
  solid_ws[1] = (ushort)(((solid_raw >> 8) & 0xff) << 6);
  solid_ws[2] = (ushort)(((solid_raw >> 16) & 0xff) << 6);
  solid_ws[3] = (ushort)(((solid_raw >> 24) & 0xff) << 6);

  xor_mask_bits = __BITCAST_UINT64(g_LightmapXorMask);

  do {
    tex64 = *texture_buffer;

    pix_bytes[0] = 0;
    pix_bytes[1] = 0;
    for (p = 0; p < 2; p = p + 1) {
      tex_pix = (uint)((tex64 >> (p * 32)) & 0xffffffff);
      palette = g_LightmapTexturePalette[texture_indices[p]];

      lm_idx = (uint)lightmap_indices[p] + ((uint)texture_indices[p] >> 1);
      lm_data = *(ulonglong *)((char *)g_LightmapData + lm_idx * 8);
      lm_xored = lm_data ^ xor_mask_bits;

      bias_val = (p == 0) ? g_AmbientLightMMX1.mm : g_AmbientLightMMX2.mm;

      for (c = 0; c < 4; c = c + 1) {
        pix = (ushort)((tex_pix >> (c * 8)) & 0xff);
        pal_byte = (ushort)((palette >> (c * 8)) & 0xff);

        pix_pal_low = (ushort)(pix * pal_byte);

        lm_x_w = (short)((lm_xored >> (c * 16)) & 0xffff);
        mul1_hi = (short)(((int)(short)pix_pal_low * (int)lm_x_w) >> 16);

        lm_w = (short)((lm_data >> (c * 16)) & 0xffff);
        solid_hi = (short)(((int)(short)solid_ws[c] * (int)lm_w) >> 16);

        bias_w = (short)((bias_val >> (c * 16)) & 0xffff);

        sum16 = (short)(mul1_hi + solid_hi + bias_w);
        shifted = (ushort)sum16 >> 4;

        clamped = (shifted > 0xff) ? 0xff : (int)shifted;

        pix_bytes[p] = pix_bytes[p] | ((ulonglong)(uchar)clamped << (c * 8));
      }
    }

    pix0_16 = (uint)((pix_bytes[0] & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
              (uint)((pix_bytes[0] & g_GreenMask32.mm) >> g_GreenBlueBits.mm) |
              (uint)((pix_bytes[0] & g_RedMask32.mm) >> g_TotalColorBits.mm);
    pix1_16 = (uint)((pix_bytes[1] & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
              (uint)((pix_bytes[1] & g_GreenMask32.mm) >> g_GreenBlueBits.mm) |
              (uint)((pix_bytes[1] & g_RedMask32.mm) >> g_TotalColorBits.mm);

    *(uint *)output_buffer = pix0_16 | (pix1_16 << 0x10);

    texture_buffer = texture_buffer + 1;
    texture_indices = texture_indices + 2;
    lightmap_indices = lightmap_indices + 2;
    output_buffer = (ulonglong *)((int)output_buffer + 4);
    pixel_count = pixel_count - 2;
  } while (pixel_count > 0);
  return;
}
