// Name: engine_special.cpp_renderAlphaRow16_FUN_005b55f7
// Address: 005b55f7
// MANUAL RECONSTRUCTION
// Address Range: [[005b55f7, 005b570f]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_renderAlphaRow16_FUN_005b55f7(ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)

#include "nocturne.h"

void __cdecl engine_special_cpp_renderAlphaRow16_FUN_005b55f7(ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount)
{
  uint src;
  uint dst16;
  uint dst32;
  uint effective;
  uint alpha_idx;
  ulonglong alpha_entry;
  ulonglong inv_entry;
  ulonglong result_val;
  uint result32;
  int c;
  ushort src_byte;
  ushort dst_byte;
  ushort alpha_word;
  ushort inv_word;
  ushort p1;
  ushort p2;
  ushort wrapped;
  uint additive_sum;
  ushort shifted;
  bool do_blend;
  bool write_pixel;

  do {
    src = g_Hardware32BitPalette[*srcIndices];
    effective = (uint)*srcAlpha * ((uint)globalAlpha >> 8);

    do_blend = true;
    write_pixel = true;

    if (g_BlendMode != 1) {
      if ((int)effective >= 64999) {
        do_blend = false;
        result32 = src;
      } else if ((int)effective <= 0xff) {
        do_blend = false;
        write_pixel = false;
      }
    }

    if (do_blend) {
      dst16 = (uint)*destPixels;
      dst32 = (uint)((((ulonglong)dst16 & g_BlueMask16.mm) << g_BlueBitShift.mm) |
                    (((ulonglong)dst16 & g_GreenMask16.mm) << g_GreenBlueDitherShift.mm) |
                    (((ulonglong)dst16 & g_RedMask16.mm) << g_TotalDitherShift.mm));

      alpha_idx = effective >> 8;
      alpha_entry = *(ulonglong *)&g_AlphaTable[alpha_idx];
      inv_entry = alpha_entry ^ *(ulonglong *)&g_AlphaTable[0xff];

      result_val = 0;
      for (c = 0; c < 4; c = c + 1) {
        src_byte = (ushort)((src >> (c * 8)) & 0xff);
        dst_byte = (ushort)((dst32 >> (c * 8)) & 0xff);
        alpha_word = (ushort)((alpha_entry >> (c * 16)) & 0xffff);
        p1 = (ushort)(src_byte * alpha_word);

        if (g_BlendMode == 1) {
          additive_sum = (uint)p1 + ((uint)dst_byte << 8);
          if (additive_sum > 0xffff) {
            additive_sum = 0xffff;
          }
          shifted = (ushort)(additive_sum >> 8);
        } else {
          inv_word = (ushort)((inv_entry >> (c * 16)) & 0xffff);
          p2 = (ushort)(dst_byte * inv_word);
          wrapped = (ushort)(p1 + p2);
          shifted = wrapped >> 8;
        }

        result_val = result_val | ((ulonglong)(uchar)shifted << (c * 8));
      }

      result32 = (uint)result_val;
    }

    if (write_pixel) {
      *destPixels = (ushort)(((ulonglong)result32 & g_BlueMask32.mm) >> g_BlueBitShift.mm) |
                    (ushort)(((ulonglong)result32 & g_GreenMask32.mm) >> g_GreenBlueDitherShift.mm) |
                    (ushort)(((ulonglong)result32 & g_RedMask32.mm) >> g_TotalDitherShift.mm);
    }

    srcIndices = srcIndices + 1;
    srcAlpha = srcAlpha + 1;
    destPixels = destPixels + 1;
    pixelCount = pixelCount - 1;
  } while (pixelCount > 0);
  return;
}
