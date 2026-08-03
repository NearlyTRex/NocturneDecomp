// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0
// Address: 004f53f0
// Address Range: [[004f53f0, 004f54b7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0(CPackedBitmapSet *this_ptr,char *filename_format,int width,int height,int start_index,int end_index,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_004f53f0(CPackedBitmapSet *this_ptr,char *filename_format,int width,int height,int start_index,int end_index,int transparency_color,int apply_palette_flag)

{
  int iVar1;
  char local_74 [100];
  
  cockpit_pkbitmap_cpp_FUN_004f5320(this_ptr);
  cockpit_pkbitmap_cpp_FUN_004f5290(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_004f5350(this_ptr,(end_index - start_index) + 1);
  this_ptr->height = height;
  this_ptr->width = width;
  if (start_index <= end_index) {
    iVar1 = 0;
    do {
      _sprintf(local_74,filename_format);
      start_index = start_index + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1),local_74,width,height,
                 transparency_color,apply_palette_flag);
      iVar1 = iVar1 + 0x24;
    } while (start_index <= end_index);
  }
  return;
}
