// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00510740
// Address: 00510740
// Address Range: [[00510740, 00510807]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00510740(CPackedBitmapSet *this_ptr,char *filename_format,int width,int height,int start_index,int end_index,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00510740(CPackedBitmapSet *this_ptr,char *filename_format,int width,int height,int start_index,int end_index,int transparency_color,int apply_palette_flag)

{
  int iVar1;
  int in_stack_0000002c;
  int in_stack_00000030;
  char acStack_64 [84];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00510670(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_005105e0(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_005106a0(this_ptr,(end_index - start_index) + 1);
  this_ptr->height = apply_palette_flag;
  this_ptr->width = transparency_color;
  if (start_index <= end_index) {
    iVar1 = 0;
    do {
      _sprintf(acStack_64,(char *)end_index);
      start_index = start_index + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1),acStack_64,
                 transparency_color,apply_palette_flag,in_stack_0000002c,in_stack_00000030);
      iVar1 = iVar1 + 0x24;
    } while (start_index <= end_index);
  }
  return;
}
