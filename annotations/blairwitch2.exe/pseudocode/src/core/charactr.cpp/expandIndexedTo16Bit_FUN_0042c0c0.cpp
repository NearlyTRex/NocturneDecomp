// Name: core_charactr.cpp_expandIndexedTo16Bit_FUN_0042c0c0
// Address: 0042c0c0
// Address Range: [[0042c0c0, 0042c1a9]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_expandIndexedTo16Bit_FUN_0042c0c0(void *output_buffer,void *indexed_input_buffer,int pixel_count)

#include "nocturne.h"

void __cdecl core_charactr_cpp_expandIndexedTo16Bit_FUN_0042c0c0(void *output_buffer,void *indexed_input_buffer,int pixel_count)

{
  byte *pbVar1;
  byte bVar2;
  
  if (g_CPUFamily < 6) {
    if (((uint)output_buffer & 2) != 0) {
      *(ushort *)output_buffer = g_Hardware16BitPalette[*(byte *)indexed_input_buffer];
      output_buffer = (void *)((int)output_buffer + 2);
      indexed_input_buffer = (void *)((int)indexed_input_buffer + 1);
      pixel_count = pixel_count + -1;
    }
    while( true ) {
      if (pixel_count < 2) break;
      *(uint *)output_buffer =
           CONCAT22(g_Hardware16BitPalette[*(byte *)((int)indexed_input_buffer + 1)],
                    g_Hardware16BitPalette[*(byte *)indexed_input_buffer]);
      indexed_input_buffer = (void *)((int)indexed_input_buffer + 2);
      output_buffer = (void *)((int)output_buffer + 4);
      pixel_count = pixel_count + -2;
    }
    if (pixel_count + -2 == -1) {
      *(ushort *)output_buffer = g_Hardware16BitPalette[*(byte *)indexed_input_buffer];
    }
    return;
  }
  if (((uint)output_buffer & 2) != 0) {
    *(ushort *)output_buffer = g_Hardware16BitPalette[*(byte *)indexed_input_buffer];
    output_buffer = (void *)((int)output_buffer + 2);
    indexed_input_buffer = (void *)((int)indexed_input_buffer + 1);
    pixel_count = pixel_count + -1;
  }
  while (1 < pixel_count) {
    pbVar1 = (byte *)((int)indexed_input_buffer + 1);
    bVar2 = *(byte *)indexed_input_buffer;
    indexed_input_buffer = (void *)((int)indexed_input_buffer + 2);
    *(uint *)output_buffer = CONCAT22(g_Hardware16BitPalette[*pbVar1],g_Hardware16BitPalette[bVar2])
    ;
    output_buffer = (void *)((int)output_buffer + 4);
    pixel_count = pixel_count + -2;
  }
  if (pixel_count + -2 == -1) {
    *(ushort *)output_buffer = g_Hardware16BitPalette[*(byte *)indexed_input_buffer];
  }
  return;
}
