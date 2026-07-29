// Name: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_0042d100
// Address: 0042d100
// Address Range: [[0042d100, 0042d12f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_0042d100(void *output_buffer,void *input_buffer,int pixel_count)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_0042d100(void *output_buffer,void *input_buffer,int pixel_count)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (pixel_count != 0) {
    do {
      bVar1 = *(byte *)input_buffer;
      input_buffer = (void *)((int)input_buffer + 1);
      uVar2 = uVar2 + 1;
      *(ushort *)output_buffer = *(ushort *)((uint)bVar1 * 2 + 0x1c00424);
      output_buffer = (ushort *)((int)output_buffer + 2);
    } while (uVar2 < (uint)pixel_count);
  }
  return;
}
