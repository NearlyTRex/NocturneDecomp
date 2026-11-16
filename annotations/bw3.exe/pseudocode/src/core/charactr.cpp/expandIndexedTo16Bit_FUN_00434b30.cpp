// Name: core_charactr.cpp_expandIndexedTo16Bit_FUN_00434b30
// Address: 00434b30
// Address Range: [[00434b30, 00434c19]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_expandIndexedTo16Bit_FUN_00434b30(void *output_buffer,void *indexed_input_buffer,int pixel_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_expandIndexedTo16Bit_FUN_00434b30(void *output_buffer,void *indexed_input_buffer,int pixel_count)

{
  byte *pbVar1;
  byte bVar2;
  
  if (_DAT_005fba34 < 6) {
    if (((uint)output_buffer & 2) != 0) {
      *(ushort *)output_buffer =
           *(ushort *)((uint)*(byte *)indexed_input_buffer * 2 + 0x1c6ad74);
      output_buffer = (void *)((int)output_buffer + 2);
      indexed_input_buffer = (void *)((int)indexed_input_buffer + 1);
      pixel_count = pixel_count + -1;
    }
    while( true ) {
      if (pixel_count < 2) break;
      *(uint *)output_buffer =
           CONCAT22(*(ushort *)((uint)*(byte *)((int)indexed_input_buffer + 1) * 2 + 0x1c6ad74),
                    *(ushort *)((uint)*(byte *)indexed_input_buffer * 2 + 0x1c6ad74));
      indexed_input_buffer = (void *)((int)indexed_input_buffer + 2);
      output_buffer = (void *)((int)output_buffer + 4);
      pixel_count = pixel_count + -2;
    }
    if (pixel_count + -2 == -1) {
      *(ushort *)output_buffer =
           *(ushort *)((uint)*(byte *)indexed_input_buffer * 2 + 0x1c6ad74);
    }
    return;
  }
  if (((uint)output_buffer & 2) != 0) {
    *(ushort *)output_buffer =
         *(ushort *)((uint)*(byte *)indexed_input_buffer * 2 + 0x1c6ad74);
    output_buffer = (void *)((int)output_buffer + 2);
    indexed_input_buffer = (void *)((int)indexed_input_buffer + 1);
    pixel_count = pixel_count + -1;
  }
  while (1 < pixel_count) {
    pbVar1 = (byte *)((int)indexed_input_buffer + 1);
    bVar2 = *(byte *)indexed_input_buffer;
    indexed_input_buffer = (void *)((int)indexed_input_buffer + 2);
    *(uint *)output_buffer =
         CONCAT22(*(ushort *)((uint)*pbVar1 * 2 + 0x1c6ad74),
                  *(ushort *)((uint)bVar2 * 2 + 0x1c6ad74));
    output_buffer = (void *)((int)output_buffer + 4);
    pixel_count = pixel_count + -2;
  }
  if (pixel_count + -2 == -1) {
    *(ushort *)output_buffer =
         *(ushort *)((uint)*(byte *)indexed_input_buffer * 2 + 0x1c6ad74);
  }
  return;
}
