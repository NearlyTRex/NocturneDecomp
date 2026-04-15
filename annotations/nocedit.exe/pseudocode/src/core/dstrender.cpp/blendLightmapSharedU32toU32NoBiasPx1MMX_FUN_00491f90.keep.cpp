// Name: core_dstrender.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00491f90
// Address: 00491f90
// MANUAL RECONSTRUCTION
// Address Range: [[00491f90, 00492000]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00491f90(uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00491f90(uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)
{
  ushort solid_ws[4];
  uint solid_raw;
  ulonglong xor_mask_bits;
  uint tex_pix;
  uint palette;
  uint lm_idx;
  ulonglong lm_data;
  ulonglong lm_xored;
  uint out_pix;
  int c;
  ushort pix;
  ushort pal_byte;
  ushort pix_pal_low;
  short lm_x_w;
  short lm_w;
  short mul1_hi;
  short solid_hi;
  short sum16;
  ushort shifted;
  int clamped;

  solid_raw = (uint)g_SolidColorMode;
  solid_ws[0] = (ushort)((solid_raw & 0xff) << 6);
  solid_ws[1] = (ushort)(((solid_raw >> 8) & 0xff) << 6);
  solid_ws[2] = (ushort)(((solid_raw >> 16) & 0xff) << 6);
  solid_ws[3] = (ushort)(((solid_raw >> 24) & 0xff) << 6);

  xor_mask_bits = __BITCAST_UINT64(g_LightmapXorMask);

  tex_pix = *texture_pixel;
  palette = g_LightmapTexturePalette[*texture_index];

  lm_idx = (uint)*lightmap_index + ((uint)*texture_index >> 1);
  lm_data = *(ulonglong *)((char *)g_LightmapData + lm_idx * 8);
  lm_xored = lm_data ^ xor_mask_bits;

  out_pix = 0;
  for (c = 0; c < 4; c = c + 1) {
    pix = (ushort)((tex_pix >> (c * 8)) & 0xff);
    pal_byte = (ushort)((palette >> (c * 8)) & 0xff);

    pix_pal_low = (ushort)(pix * pal_byte);

    lm_x_w = (short)((lm_xored >> (c * 16)) & 0xffff);
    mul1_hi = (short)(((int)(short)pix_pal_low * (int)lm_x_w) >> 16);

    lm_w = (short)((lm_data >> (c * 16)) & 0xffff);
    solid_hi = (short)(((int)(short)solid_ws[c] * (int)lm_w) >> 16);

    sum16 = (short)(mul1_hi + solid_hi);
    shifted = (ushort)sum16 >> 4;

    clamped = (shifted > 0xff) ? 0xff : (int)shifted;

    out_pix = out_pix | ((uint)(uchar)clamped << (c * 8));
  }

  *output_pixel = out_pix;
  return;
}
