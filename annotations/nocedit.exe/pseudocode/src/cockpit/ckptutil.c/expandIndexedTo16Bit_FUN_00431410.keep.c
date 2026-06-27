// Name: cockpit_ckptutil.c_expandIndexedTo16Bit_FUN_00431410
// Address: 00431410
// MANUAL RECONSTRUCTION
// Address Range: [[00431410, 004314f9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_expandIndexedTo16Bit_FUN_00431410(void *output_buffer,void *indexed_input_buffer,int pixel_count)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_expandIndexedTo16Bit_FUN_00431410(void *output_buffer,void *indexed_input_buffer,int pixel_count)

{
  byte *p_input;
  ushort *p_output;

  p_input = (byte *)indexed_input_buffer;
  p_output = (ushort *)output_buffer;
  if (g_CPUFamily < 6) {
    if (((uintptr_t)p_output & 2) != 0) {
      *p_output = g_Hardware16BitPalette[*p_input];
      p_output = p_output + 1;
      p_input = p_input + 1;
      pixel_count = pixel_count + -1;
    }
    while( true ) {
      if (pixel_count < 2) break;
      p_output[0] = g_Hardware16BitPalette[*p_input];
      p_output[1] = g_Hardware16BitPalette[p_input[1]];
      p_input = p_input + 2;
      p_output = p_output + 2;
      pixel_count = pixel_count + -2;
    }
    if (pixel_count + -2 == -1) {
      *p_output = g_Hardware16BitPalette[*p_input];
    }
    return;
  }
  if (((uintptr_t)p_output & 2) != 0) {
    *p_output = g_Hardware16BitPalette[*p_input];
    p_output = p_output + 1;
    p_input = p_input + 1;
    pixel_count = pixel_count + -1;
  }
  while (1 < pixel_count) {
    p_output[0] = g_Hardware16BitPalette[*p_input];
    p_output[1] = g_Hardware16BitPalette[p_input[1]];
    p_input = p_input + 2;
    p_output = p_output + 2;
    pixel_count = pixel_count + -2;
  }
  if (pixel_count + -2 == -1) {
    *p_output = g_Hardware16BitPalette[*p_input];
  }
  return;
}
