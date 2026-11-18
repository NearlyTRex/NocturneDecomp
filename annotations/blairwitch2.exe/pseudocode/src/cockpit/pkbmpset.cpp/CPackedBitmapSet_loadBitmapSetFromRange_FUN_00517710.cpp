// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710
// Address: 00517710
// Address Range: [[00517710, 005177d7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710(CPackedBitmapSet *this_ptr,char *filename_format,int width,int height,int first_index,int last_index,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710(CPackedBitmapSet *this_ptr,char *filename_format,int width,int height,int first_index,int last_index,int transparency_color,int apply_palette_flag)

{
  int iVar1;
  int in_stack_0000002c;
  int in_stack_00000030;
  char acStack_64 [84];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00517640(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_005175b0(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_00517670(this_ptr,(last_index - first_index) + 1);
  this_ptr->height = apply_palette_flag;
  this_ptr->width = transparency_color;
  if (first_index <= last_index) {
    iVar1 = 0;
    do {
      _sprintf(acStack_64,(char *)last_index);
      first_index = first_index + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_005168e0
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1),acStack_64,
                 transparency_color,apply_palette_flag,in_stack_0000002c,in_stack_00000030);
      iVar1 = iVar1 + 0x24;
    } while (first_index <= last_index);
  }
  return;
}
