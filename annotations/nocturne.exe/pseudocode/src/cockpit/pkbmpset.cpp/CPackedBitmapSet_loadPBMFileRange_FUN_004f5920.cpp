// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_004f5920
// Address: 004f5920
// Address Range: [[004f5920, 004f59c0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_004f5920(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_004f5920(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,int apply_palette_flag)

{
  int iVar1;
  byte local_74 [100];
  
  cockpit_pkbitmap_cpp_FUN_004f5320(this_ptr);
  cockpit_pkbitmap_cpp_FUN_004f5290(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_004f5350(this_ptr,(end_index - start_index) + 1);
  if (start_index <= end_index) {
    iVar1 = 0;
    do {
      _sprintf(local_74,filename_format,start_index);
      start_index = start_index + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_004f4e40
                (this_ptr->bitmap_array->filename + iVar1,local_74,apply_palette_flag);
      iVar1 = iVar1 + 0x24;
    } while (start_index <= end_index);
  }
  cockpit_pkbitmap_cpp_FUN_004f52c0(this_ptr);
  return;
}
