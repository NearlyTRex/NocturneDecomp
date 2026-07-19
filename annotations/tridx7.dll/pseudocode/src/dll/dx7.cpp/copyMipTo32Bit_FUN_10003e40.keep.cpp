// Name: dll_dx7.cpp_copyMipTo32Bit_FUN_10003e40
// Address: 10003e40
// MANUAL RECONSTRUCTION
// Address Range: [[10003e40, 10003e86]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_copyMipTo32Bit_FUN_10003e40(uint *dest,uint dest_pitch,int mip_size)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_copyMipTo32Bit_FUN_10003e40(uint *dest,uint dest_pitch,int mip_size)

{
  uint *puVar1;
  int iVar3;
  char *dest_row;

  puVar1 = dll_dx7_cpp_getMipLevelPtr_FUN_10003a30(mip_size);
  if (0 < mip_size) {
    iVar3 = mip_size;
    dest_row = (char *)dest;
    do {
      memcpy(dest_row,puVar1,mip_size * sizeof(*dest));
      puVar1 = puVar1 + mip_size;
      dest_row = dest_row + (dest_pitch & 0xfffffffc);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
