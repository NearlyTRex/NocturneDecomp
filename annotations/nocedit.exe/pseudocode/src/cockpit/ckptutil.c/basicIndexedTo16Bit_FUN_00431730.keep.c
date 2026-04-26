// Name: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_00431730
// Address: 00431730
// MANUAL RECONSTRUCTION
// Address Range: [[00431730, 0043175f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_00431730(void *output_buffer,void *input_buffer,int pixel_count)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_00431730(void *output_buffer,void *input_buffer,int pixel_count)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar1;
  ushort *puVar1;

  uVar2 = 0;
  pbVar1 = (byte *)input_buffer;
  puVar1 = (ushort *)output_buffer;
  if (pixel_count != 0) {
    do {
      bVar1 = *pbVar1;
      pbVar1 = pbVar1 + 1;
      uVar2 = uVar2 + 1;
      *puVar1 = g_Hardware16BitPalette[bVar1];
      puVar1 = puVar1 + 1;
    } while (uVar2 < (uint)pixel_count);
  }
  return;
}
