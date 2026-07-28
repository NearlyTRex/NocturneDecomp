// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_004f5bb0
// Address: 004f5bb0
// Address Range: [[004f5bb0, 004f5bee]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_004f5bb0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_004f5bb0(void)

{
  int iVar1;
  int iVar2;
  CPackedBitmapSet *in_stack_00000004;
  
  if (in_stack_00000004->filename[0] != '\0') {
    cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_004f5c60(in_stack_00000004);
    return;
  }
  iVar1 = 0;
  if (0 < in_stack_00000004->bitmap_count) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0
                ((CPackedBitmap *)(in_stack_00000004->bitmap_array->filename + iVar2));
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < in_stack_00000004->bitmap_count);
  }
  return;
}
