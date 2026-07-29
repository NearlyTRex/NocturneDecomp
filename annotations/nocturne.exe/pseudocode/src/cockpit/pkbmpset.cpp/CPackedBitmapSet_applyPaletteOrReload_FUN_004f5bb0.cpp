// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_004f5bb0
// Address: 004f5bb0
// Address Range: [[004f5bb0, 004f5bee]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_004f5bb0(CPackedBitmapSet *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_004f5bb0(CPackedBitmapSet *this_ptr)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->filename[0] != '\0') {
    cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60(this_ptr);
    return;
  }
  iVar1 = 0;
  if (0 < this_ptr->bitmap_count) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2));
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < this_ptr->bitmap_count);
  }
  return;
}
