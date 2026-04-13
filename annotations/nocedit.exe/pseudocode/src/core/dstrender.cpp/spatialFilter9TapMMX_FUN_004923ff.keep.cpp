// Name: core_dstrender.cpp_spatialFilter9TapMMX_FUN_004923ff
// Address: 004923ff
// MANUAL RECONSTRUCTION
// Address Range: [[004923ff, 004924a8]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_spatialFilter9TapMMX_FUN_004923ff(uint *output_buffer,uint *input_buffer,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_spatialFilter9TapMMX_FUN_004923ff(uint *output_buffer,uint *input_buffer,int pixel_count)
{
  uint center;
  uint left;
  uint right;
  uint top;
  uint bottom;
  uint tl;
  uint tr;
  uint bl;
  uint br;
  uint out_pix;
  int c;
  int sum;
  int clamped;
  int byte_c;
  int byte_l;
  int byte_r;
  int byte_t;
  int byte_b;
  int byte_tl;
  int byte_tr;
  int byte_bl;
  int byte_br;

  do {
    left   = input_buffer[-1];
    center = *input_buffer;
    right  = input_buffer[1];
    top    = input_buffer[-0x140];
    bottom = input_buffer[0x140];
    tl     = input_buffer[-0x141];
    tr     = input_buffer[-0x13f];
    bl     = input_buffer[0x13f];
    br     = input_buffer[0x141];

    out_pix = 0;
    for (c = 0; c < 4; c = c + 1) {
      byte_c  = (int)((center >> (c * 8)) & 0xff);
      byte_l  = (int)((left   >> (c * 8)) & 0xff);
      byte_r  = (int)((right  >> (c * 8)) & 0xff);
      byte_t  = (int)((top    >> (c * 8)) & 0xff);
      byte_b  = (int)((bottom >> (c * 8)) & 0xff);
      byte_tl = (int)((tl     >> (c * 8)) & 0xff);
      byte_tr = (int)((tr     >> (c * 8)) & 0xff);
      byte_bl = (int)((bl     >> (c * 8)) & 0xff);
      byte_br = (int)((br     >> (c * 8)) & 0xff);

      sum = (byte_c << 2) +
            ((byte_l + byte_r + byte_t + byte_b) << 1) +
            (byte_tl + byte_tr + byte_bl + byte_br);
      sum = sum >> 4;

      clamped = (sum > 0xff) ? 0xff : sum;
      if (clamped < 0) {
        clamped = 0;
      }

      out_pix = out_pix | ((uint)(uchar)clamped << (c * 8));
    }

    *output_buffer = out_pix;

    input_buffer = input_buffer + 1;
    output_buffer = output_buffer + 1;
    pixel_count = pixel_count - 1;
  } while (pixel_count > 0);
  return;
}
