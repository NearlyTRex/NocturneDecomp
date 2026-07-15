// Name: core_dstrender.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00492f03
// Address: 00492f03
// MANUAL RECONSTRUCTION
// Address Range: [[00492f03, 0049333c] [00493340, 0049344f]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00492f03(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00492f03(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
{
  ushort solid_ws[4];
  uint solid_raw;
  ulonglong xor_mask_bits;
  ulonglong tex64;
  uint palette0;
  uint palette1;
  uint lm_idx;
  ulonglong lm_data;
  ulonglong lm_xored;
  ulonglong pix_bytes[2];
  ulonglong bias_val;
  int pixel;
  int c;
  int byte_pos;
  ushort pix;
  ushort p0;
  ushort p1;
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

  xor_mask_bits = 0x3FC03FC03FC03FC0ULL;

  do {
    tex64 = *texture_buffer;

    palette0 = g_LightmapTexturePalette[texture_indices[0]];
    palette1 = g_LightmapTexturePalette[texture_indices[1]];

    lm_idx = (uint)lightmap_indices[0] + ((uint)texture_indices[1] >> 1);
    lm_data = *(ulonglong *)((char *)g_LightmapData + lm_idx * 8);
    lm_xored = lm_data ^ xor_mask_bits;

    pix_bytes[0] = 0;
    pix_bytes[1] = 0;
    for (pixel = 0; pixel < 2; pixel = pixel + 1) {
      bias_val = (pixel == 0) ? g_LightmapBlendBias5.mm : g_LightmapBlendBias6.mm;
      for (c = 0; c < 4; c = c + 1) {
        byte_pos = pixel * 4 + c;

        pix = (ushort)((tex64 >> (byte_pos * 8)) & 0xff);

        p0 = (ushort)((palette0 >> (c * 8)) & 0xff);
        p1 = (ushort)((palette1 >> (c * 8)) & 0xff);
        if (pixel == 0) {
          pal_byte = p0;
        } else {
          pal_byte = (ushort)((p0 + p1) >> 1);
        }

        pix_pal_low = (ushort)(pix * pal_byte);

        lm_x_w = (short)((lm_xored >> (c * 16)) & 0xffff);
        mul1_hi = (short)(((int)(short)pix_pal_low * (int)lm_x_w) >> 16);

        lm_w = (short)((lm_data >> (c * 16)) & 0xffff);
        solid_hi = (short)(((int)(short)solid_ws[c] * (int)lm_w) >> 16);

        bias_w = (short)((bias_val >> (c * 16)) & 0xffff);

        sum16 = (short)(mul1_hi + solid_hi + bias_w);
        shifted = (ushort)sum16 >> 4;

        clamped = (shifted > 0xff) ? 0xff : (int)shifted;

        pix_bytes[pixel] = pix_bytes[pixel] | ((ulonglong)(uchar)clamped << (c * 8));
      }
    }

    pix0_16 = (uint)((pix_bytes[0] & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
              (uint)((pix_bytes[0] & g_GreenMask32.mm) >> g_GreenBlueDitherShift.mm) |
              (uint)((pix_bytes[0] & g_RedMask32.mm) >> g_TotalDitherShift.mm);
    pix1_16 = (uint)((pix_bytes[1] & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
              (uint)((pix_bytes[1] & g_GreenMask32.mm) >> g_GreenBlueDitherShift.mm) |
              (uint)((pix_bytes[1] & g_RedMask32.mm) >> g_TotalDitherShift.mm);

    *output_buffer = pix0_16 | (pix1_16 << 0x10);

    texture_buffer = texture_buffer + 1;
    texture_indices = texture_indices + 1;
    lightmap_indices = lightmap_indices + 1;
    output_buffer = output_buffer + 1;
    pixel_count = pixel_count - 2;
  } while (pixel_count > 0);
  return;
}
