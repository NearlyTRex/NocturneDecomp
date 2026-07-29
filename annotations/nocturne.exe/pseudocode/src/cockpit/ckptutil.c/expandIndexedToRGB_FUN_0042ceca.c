// Name: cockpit_ckptutil.c_expandIndexedToRGB_FUN_0042ceca
// Address: 0042ceca
// Address Range: [[0042ceca, 0042cef7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_expandIndexedToRGB_FUN_0042ceca(void *output_buffer,void *input_buffer,int pixel_count)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_expandIndexedToRGB_FUN_0042ceca(void *output_buffer,void *input_buffer,int pixel_count)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  
  do {
    bVar1 = *(byte *)input_buffer;
    input_buffer = (void *)((int)input_buffer + 1);
    *(uint *)output_buffer = *(uint *)(&DAT_01c00024 + (uint)bVar1 * 4);
    output_buffer = (void *)((int)output_buffer + 4);
    iVar3 = pixel_count + -1;
    bVar2 = 0 < pixel_count;
    pixel_count = iVar3;
  } while (iVar3 != 0 && bVar2);
  return;
}
