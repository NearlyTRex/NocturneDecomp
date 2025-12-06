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
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_ffffff9c;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
            (this_ptr,(int)(base_path + (1 - (int)extension)));
  this_ptr->base_path = in_stack_0000001c;
  this_ptr->extension = (int)base_path;
  if ((int)extension <= (int)base_path) {
    iVar2 = 0;
    pcVar1 = extension;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff98,extension,pcVar1);
      pcVar1 = pcVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),&stack0xffffff9c,
                 in_stack_0000001c,in_stack_00000020,in_stack_0000002c,in_stack_00000030,
                 in_stack_ffffff9c);
      iVar2 = iVar2 + 0x24;
    } while ((int)pcVar1 <= (int)base_path);
  }
  return;
}
