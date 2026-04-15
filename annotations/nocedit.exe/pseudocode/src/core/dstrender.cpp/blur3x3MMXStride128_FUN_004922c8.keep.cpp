// Name: core_dstrender.cpp_verticalBlur3TapMMXStride128_FUN_004922c8
// Address: 004922c8
// MANUAL RECONSTRUCTION
// Address Range: [[004922c8, 004923fe]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_verticalBlur3TapMMXStride128_FUN_004922c8(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_verticalBlur3TapMMXStride128_FUN_004922c8(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count)
{
  byte fc_bytes[8];
  byte *in_bytes;
  byte *out_bytes;
  int i;
  int sum_pixels;
  int fc_l;
  int fc_c;
  int fc_r;
  int fc_contribution;
  int sum;
  int shifted;
  int clamped;
  byte out_block[8];

  fc_bytes[0] = (byte)(g_FilterBlendConstant.mm & 0xff);
  fc_bytes[1] = (byte)((g_FilterBlendConstant.mm >> 8) & 0xff);
  fc_bytes[2] = (byte)((g_FilterBlendConstant.mm >> 16) & 0xff);
  fc_bytes[3] = (byte)((g_FilterBlendConstant.mm >> 24) & 0xff);
  fc_bytes[4] = (byte)((g_FilterBlendConstant.mm >> 32) & 0xff);
  fc_bytes[5] = (byte)((g_FilterBlendConstant.mm >> 40) & 0xff);
  fc_bytes[6] = (byte)((g_FilterBlendConstant.mm >> 48) & 0xff);
  fc_bytes[7] = (byte)((g_FilterBlendConstant.mm >> 56) & 0xff);

  in_bytes = (byte *)input_buffer;
  out_bytes = (byte *)output_buffer;

  do {
    for (i = 0; i < 8; i = i + 1) {
      sum_pixels =
          (int)in_bytes[i - 1 - 0x80] + 2 * (int)in_bytes[i - 0x80] + (int)in_bytes[i + 1 - 0x80] +
          2 * (int)in_bytes[i - 1] + 4 * (int)in_bytes[i] + 2 * (int)in_bytes[i + 1] +
          (int)in_bytes[i - 1 + 0x80] + 2 * (int)in_bytes[i + 0x80] + (int)in_bytes[i + 1 + 0x80];

      fc_l = (int)fc_bytes[(i + 7) & 7];
      fc_c = (int)fc_bytes[i];
      fc_r = (int)fc_bytes[(i + 1) & 7];
      fc_contribution = 4 * 256 * (fc_l + 2 * fc_c + fc_r);

      sum = sum_pixels + fc_contribution;
      if (sum > 0xffff) {
        sum = 0xffff;
      }

      shifted = sum >> 4;

      clamped = (shifted > 0xff) ? 0xff : shifted;

      out_block[i] = (byte)clamped;
    }

    for (i = 0; i < 8; i = i + 1) {
      out_bytes[i] = out_block[i];
    }

    in_bytes = in_bytes + 8;
    out_bytes = out_bytes + 8;
    pixel_count = pixel_count - 8;
  } while (pixel_count > 0);
  return;
}
