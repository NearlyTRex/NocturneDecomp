// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70
// Address: 0054be70
// Address Range: [[0054be70, 0054bf37]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70(CPackedBitmapSet *this_ptr,char *filename_format,int width,int height,int start_index,int end_index,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70(CPackedBitmapSet *this_ptr,char *filename_format,int width,int height,int start_index,int end_index,int transparency_color,int apply_palette_flag)

{
  int iVar1;
  char acStack_74 [100];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0(this_ptr,(end_index - start_index) + 1);
  this_ptr->height = height;
  this_ptr->width = width;
  if (start_index <= end_index) {
    iVar1 = 0;
    do {
      _sprintf(acStack_74,filename_format,start_index);
      start_index = start_index + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1),acStack_74,width,height
                 ,transparency_color,apply_palette_flag);
      iVar1 = iVar1 + 0x24;
    } while (start_index <= end_index);
  }
  return;
}
