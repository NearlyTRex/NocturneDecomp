// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_004f5c80
// Address: 004f5c80
// Address Range: [[004f5c80, 004f5ce4]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_004f5c80(CPackedBitmapSet *this_ptr,int bitmap_index)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_004f5c80(CPackedBitmapSet *this_ptr,int bitmap_index)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->bitmap_array[bitmap_index].packed_data == (ushort *)0x0) {
    iVar2 = 0;
    if (0 < this_ptr->bitmap_count) {
      iVar1 = 0;
      do {
        iVar2 = iVar2 + 1;
        cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_004f3f80
                  ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1));
        iVar1 = iVar1 + 0x24;
      } while (iVar2 < this_ptr->bitmap_count);
    }
    cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_004f5a50
              (this_ptr,1,bitmap_index);
  }
  return;
}
