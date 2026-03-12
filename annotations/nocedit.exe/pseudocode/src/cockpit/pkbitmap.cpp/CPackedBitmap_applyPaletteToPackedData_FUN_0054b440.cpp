// Name: cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
// Address: 0054b440
// Address Range: [[0054b440, 0054b49a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(CPackedBitmap *this_ptr,uchar *palette_buffer)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(CPackedBitmap *this_ptr,uchar *palette_buffer)

{
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  void *pvVar2;
  char *pcVar1;
  
  pcVar1 = this_ptr->packed_data;
  pvVar2 = this_ptr->row_pointers[this_ptr->height];
  pbVar6 = (byte *)((int)*this_ptr->row_pointers + (int)pcVar1);
  while (pbVar6 < (byte *)((int)pvVar2 + (int)pcVar1)) {
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
