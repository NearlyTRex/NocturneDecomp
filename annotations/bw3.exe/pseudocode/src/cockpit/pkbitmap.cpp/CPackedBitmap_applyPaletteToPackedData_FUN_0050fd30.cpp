// Name: cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30
// Address: 0050fd30
// Address Range: [[0050fd30, 0050fd8a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30(CPackedBitmap *this_ptr,uchar *palette_buffer)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0050fd30(CPackedBitmap *this_ptr,uchar *palette_buffer)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar1 = *(int *)&this_ptr->field_0x14;
  iVar2 = (*(int **)&this_ptr->field_0x20)[*(int *)&this_ptr->field_0x1c];
  pbVar6 = (byte *)(**(int **)&this_ptr->field_0x20 + iVar1);
  while (pbVar6 < (byte *)(iVar2 + iVar1)) {
    uVar5 = (uint)*(ushort *)(pbVar6 + 2);
    pbVar3 = pbVar6 + 4;
    pbVar6 = pbVar3 + (uVar5 + 3 & 0xfffffffc);
    iVar4 = 0;
    if (uVar5 != 0) {
      do {
        iVar4 = iVar4 + 1;
        *pbVar3 = palette_buffer[*pbVar3];
        pbVar3 = pbVar3 + 1;
      } while (iVar4 < (int)uVar5);
    }
  }
  return;
}
