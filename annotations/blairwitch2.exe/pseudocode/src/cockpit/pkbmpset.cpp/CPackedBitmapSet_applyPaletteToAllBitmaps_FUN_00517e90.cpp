// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00517e90
// Address: 00517e90
// Address Range: [[00517e90, 00517ec3]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00517e90(CPackedBitmapSet *this_ptr,char *palette_data)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00517e90(CPackedBitmapSet *this_ptr,char *palette_data)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)this_ptr) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00
                ((CPackedBitmap *)(*(int *)(this_ptr + 4) + iVar2),(uchar *)palette_data);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < *(int *)this_ptr);
  }
  return;
}
