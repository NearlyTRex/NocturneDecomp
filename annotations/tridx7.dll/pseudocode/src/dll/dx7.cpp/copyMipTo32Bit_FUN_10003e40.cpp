// Name: dll_dx7.cpp_copyMipTo32Bit_FUN_10003e40
// Address: 10003e40
// Address Range: [[10003e40, 10003e86]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_copyMipTo32Bit_FUN_10003e40(uint *dest,uint dest_pitch,int mip_size)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_copyMipTo32Bit_FUN_10003e40(uint *dest,uint dest_pitch,int mip_size)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  puVar1 = dll_dx7_cpp_getMipLevelPtr_FUN_10003a30(mip_size);
  if (0 < mip_size) {
    iVar3 = mip_size;
    do {
      iVar2 = mip_size;
      puVar4 = puVar1;
      puVar5 = dest;
      if (0 < mip_size) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        puVar1 = puVar1 + mip_size;
      }
      dest = (uint *)((int)dest + (dest_pitch & 0xfffffffc));
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
