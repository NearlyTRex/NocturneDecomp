// Name: cockpit_ckptutil.c_expandIndexedToRGB_FUN_004314fa
// Address: 004314fa
// MANUAL RECONSTRUCTION
// Address Range: [[004314fa, 00431527]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_expandIndexedToRGB_FUN_004314fa(void *output_buffer,void *input_buffer,int pixel_count)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_expandIndexedToRGB_FUN_004314fa(void *output_buffer,void *input_buffer,int pixel_count)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *p_input;
  uint *p_output;

  p_input = (byte *)input_buffer;
  p_output = (uint *)output_buffer;
  do {
    bVar1 = *p_input;
    p_input = p_input + 1;
    *p_output = g_Hardware32BitPalette[bVar1];
    p_output = p_output + 1;
    iVar3 = pixel_count + -1;
    bVar2 = 0 < pixel_count;
    pixel_count = iVar3;
  } while (iVar3 != 0 && bVar2);
  return;
}
