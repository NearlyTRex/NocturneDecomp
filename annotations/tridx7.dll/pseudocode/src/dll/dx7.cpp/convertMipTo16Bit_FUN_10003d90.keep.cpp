// Name: dll_dx7.cpp_convertMipTo16Bit_FUN_10003d90
// Address: 10003d90
// MANUAL RECONSTRUCTION
// Address Range: [[10003d90, 10003e3b]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_convertMipTo16Bit_FUN_10003d90(ushort *dest,uint dest_pitch,int mip_size)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_convertMipTo16Bit_FUN_10003d90(ushort *dest,uint dest_pitch,int mip_size)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  int local_4;
  char *dest_row;

  puVar3 = dll_dx7_cpp_getMipLevelPtr_FUN_10003a30(mip_size);
  if (0 < mip_size) {
    local_4 = mip_size;
    dest_row = (char *)dest;
    do {
      puVar4 = (ushort *)dest_row;
      iVar5 = mip_size;
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        uVar2 = (ushort)(uVar1 >> 0x10);
        iVar5 = iVar5 + -1;
        *puVar4 = (uVar2 >> 4 & 0xf) << ((byte)g_HWRedShift & 0x1f) |
                  ((ushort)(uVar1 >> 4) & 0xf) << ((byte)g_HWBlueShift & 0x1f) |
                  ((ushort)(uVar1 >> 0xc) & 0xf) << ((byte)g_HWGreenShift & 0x1f) | uVar2 & 0xf000;
        puVar4 = puVar4 + 1;
      } while (iVar5 != 0);
      dest_row = dest_row + (dest_pitch & 0xfffffffe);
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}
