// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0
// Address: 0054c3d0
// Address Range: [[0054c3d0, 0054c470]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0 (CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index, char *base_path)

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0
          (CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,
          char *base_path)

{
  int iVar1;
  char local_74 [100];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0(this_ptr,(end_index - start_index) + 1);
  if (start_index <= end_index) {
    iVar1 = 0;
    do {
      _sprintf(local_74,filename_format,start_index);
      start_index = start_index + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_0054b860
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1),local_74,(int)base_path
                );
      iVar1 = iVar1 + 0x24;
    } while (start_index <= end_index);
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_0054bd00(this_ptr);
  return;
}
