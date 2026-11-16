// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_00517c40
// Address: 00517c40
// Address Range: [[00517c40, 00517ce0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_00517c40(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_00517c40(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,int apply_palette_flag)

{
  int iVar1;
  char *in_stack_00000018;
  int in_stack_00000024;
  char acStack_64 [84];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00517640(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_005175b0(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_00517670(this_ptr,(end_index - start_index) + 1);
  if (start_index <= end_index) {
    iVar1 = 0;
    do {
      _sprintf(acStack_64,in_stack_00000018);
      start_index = start_index + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00517130
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1),acStack_64,
                 in_stack_00000024);
      iVar1 = iVar1 + 0x24;
    } while (start_index <= end_index);
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_005175e0(this_ptr);
  return;
}
