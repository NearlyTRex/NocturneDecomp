// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70
// Address: 0054be70
// Address Range: [[0054be70, 0054bf37]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,char *extension,char *base_path,int stride,int apply_palette_flag)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_74 */

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,char *extension,char *base_path,int stride,int apply_palette_flag)

{
  int iVar1;
  char local_74 [116];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
            (this_ptr,(int)(base_path + (1 - (int)extension)));
  this_ptr->height = end_index;
  this_ptr->width = start_index;
  if ((int)extension <= (int)base_path) {
    iVar1 = 0;
    do {
      _sprintf(local_74,filename_format,extension);
      extension = extension + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1),local_74,start_index,
                 end_index,stride,apply_palette_flag,local_74._0_4_);
      iVar1 = iVar1 + 0x24;
    } while ((int)extension <= (int)base_path);
  }
  return;
}
