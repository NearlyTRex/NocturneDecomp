// Name: core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00492e8a
// Address: 00492e8a
// MANUAL RECONSTRUCTION
// Address Range: [[00492e8a, 00492f02]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00492e8a(uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1,uint alpha2,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00492e8a(uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1,uint alpha2,int pixel_count)
{
  ushort alpha1_lo = (ushort)alpha1;
  ushort alpha1_hi = (ushort)(alpha1 >> 16);
  ushort alpha2_lo = (ushort)alpha2;
  ushort alpha2_hi = (ushort)(alpha2 >> 16);
  uint uVar1;
  uint uVar2;
  uint out_val;
  int b;
  uint src1_byte;
  uint src2_byte;
  uint a1;
  uint a2;
  int blended;

  do {
    uVar1 = *source1_buffer;
    uVar2 = *source2_buffer;
    out_val = 0;
    for (b = 0; b < 4; b = b + 1) {
      src1_byte = (uVar1 >> (b * 8)) & 0xff;
      src2_byte = (uVar2 >> (b * 8)) & 0xff;
      a1 = (b & 1) ? (uint)alpha1_hi : (uint)alpha1_lo;
      a2 = (b & 1) ? (uint)alpha2_hi : (uint)alpha2_lo;
      blended = (int)((src1_byte * a2 + src2_byte * a1) >> 16);
      if (blended > 0xff) {
        blended = 0xff;
      }
      out_val = out_val | ((uint)blended << (b * 8));
    }
    *output_buffer = out_val;
    source1_buffer = source1_buffer + 1;
    source2_buffer = source2_buffer + 1;
    output_buffer = output_buffer + 1;
    pixel_count = pixel_count - 4;
  } while (pixel_count > 0);
  return;
}
