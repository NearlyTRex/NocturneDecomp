// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70
// Address: 0054be70
// Address Range: [[0054be70, 0054bf37]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70(CPackedBitmapSet * this_ptr, char * filename_format, int start_index, int end_index, char * extension, char * base_path)

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70
          (CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,
          char *extension,char *base_path)

{
  int iVar1;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_ffffff8c;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
            (this_ptr,(int)(base_path + (1 - (int)extension)));
  this_ptr->base_path = end_index;
  this_ptr->extension = start_index;
  if ((int)extension <= (int)base_path) {
    iVar1 = 0;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff8c,filename_format,extension);
      extension = extension + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar1),&stack0xffffff8c,
                 start_index,end_index,in_stack_0000001c,in_stack_00000020,in_stack_ffffff8c);
      iVar1 = iVar1 + 0x24;
    } while ((int)extension <= (int)base_path);
  }
  return;
}
