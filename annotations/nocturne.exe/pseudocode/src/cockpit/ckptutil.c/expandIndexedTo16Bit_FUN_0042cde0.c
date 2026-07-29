// Name: cockpit_ckptutil.c_expandIndexedTo16Bit_FUN_0042cde0
// Address: 0042cde0
// Address Range: [[0042cde0, 0042cec9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_expandIndexedTo16Bit_FUN_0042cde0(void *output_buffer,void *indexed_input_buffer,int pixel_count)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_expandIndexedTo16Bit_FUN_0042cde0(void *output_buffer,void *indexed_input_buffer,int pixel_count)

{
  byte *pbVar1;
  byte bVar2;
  
  if (DAT_005b7638 < 6) {
    if (((uint)output_buffer & 2) != 0) {
      *(ushort *)output_buffer =
           *(ushort *)((uint)*(byte *)indexed_input_buffer * 2 + 0x1c00424);
      output_buffer = (void *)((int)output_buffer + 2);
      indexed_input_buffer = (void *)((int)indexed_input_buffer + 1);
      pixel_count = pixel_count + -1;
    }
    while( true ) {
      if (pixel_count < 2) break;
      *(uint *)output_buffer =
           CONCAT22(*(ushort *)((uint)*(byte *)((int)indexed_input_buffer + 1) * 2 + 0x1c00424),
                    *(ushort *)((uint)*(byte *)indexed_input_buffer * 2 + 0x1c00424));
      indexed_input_buffer = (void *)((int)indexed_input_buffer + 2);
      output_buffer = (void *)((int)output_buffer + 4);
      pixel_count = pixel_count + -2;
    }
    if (pixel_count + -2 == -1) {
      *(ushort *)output_buffer =
           *(ushort *)((uint)*(byte *)indexed_input_buffer * 2 + 0x1c00424);
    }
    return;
  }
  if (((uint)output_buffer & 2) != 0) {
    *(ushort *)output_buffer =
         *(ushort *)((uint)*(byte *)indexed_input_buffer * 2 + 0x1c00424);
    output_buffer = (void *)((int)output_buffer + 2);
    indexed_input_buffer = (void *)((int)indexed_input_buffer + 1);
    pixel_count = pixel_count + -1;
  }
  while (1 < pixel_count) {
    pbVar1 = (byte *)((int)indexed_input_buffer + 1);
    bVar2 = *(byte *)indexed_input_buffer;
    indexed_input_buffer = (void *)((int)indexed_input_buffer + 2);
    *(uint *)output_buffer =
         CONCAT22(*(ushort *)((uint)*pbVar1 * 2 + 0x1c00424),
                  *(ushort *)((uint)bVar2 * 2 + 0x1c00424));
    output_buffer = (void *)((int)output_buffer + 4);
    pixel_count = pixel_count + -2;
  }
  if (pixel_count + -2 == -1) {
    *(ushort *)output_buffer =
         *(ushort *)((uint)*(byte *)indexed_input_buffer * 2 + 0x1c00424);
  }
  return;
}
