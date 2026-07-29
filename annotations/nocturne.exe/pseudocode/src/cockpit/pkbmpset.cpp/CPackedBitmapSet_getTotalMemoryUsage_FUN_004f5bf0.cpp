// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_004f5bf0
// Address: 004f5bf0
// Address Range: [[004f5bf0, 004f5c30]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_004f5bf0(CPackedBitmapSet *this_ptr)

#include "nocturne.h"

int __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_004f5bf0(CPackedBitmapSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = this_ptr->bitmap_count * 0x24;
  if (0 < this_ptr->bitmap_count) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_004f3fa0
                        ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar3));
      iVar3 = iVar3 + 0x24;
      iVar4 = iVar4 + iVar1;
    } while (iVar2 < this_ptr->bitmap_count);
  }
  return iVar4;
}
