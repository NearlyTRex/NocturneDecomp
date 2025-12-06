// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e
// Address: 0054c72e
// Address Range: [[0054c72e, 0054c794]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e(CPackedBitmapSet * this_ptr, int bitmap_index, char * filename)

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e
          (CPackedBitmapSet *this_ptr,int bitmap_index,char *filename)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->bitmap_array[bitmap_index].packed_data == (char *)0x0) {
    iVar2 = 0;
    if (0 < this_ptr->bitmap_count) {
      iVar1 = 0;
      do {
        iVar2 = iVar2 + 1;
        cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_0054a940
                  ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1));
        iVar1 = iVar1 + 0x24;
      } while (iVar2 < this_ptr->bitmap_count);
    }
    cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500
              (this_ptr,&DAT_00000001,bitmap_index);
  }
  return;
}
