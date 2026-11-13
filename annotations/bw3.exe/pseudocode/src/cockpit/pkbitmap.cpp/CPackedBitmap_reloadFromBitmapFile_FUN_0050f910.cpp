// Name: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910
// Address: 0050f910
// Address Range: [[0050f910, 0050f980]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

{
  uchar *bitmap_data;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_0000003c;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0050f230(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0050f2a0(this_ptr,(char *)width);
  bitmap_data = cockpit_ckptutil_c_FUN_00438ef0
                          (this_ptr->filename,(void *)0x0,in_stack_0000001c * width);
  cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0050fa90
            (this_ptr,bitmap_data,width,in_stack_0000001c,in_stack_00000020,width);
  FUN_005a3770();
  if (in_stack_0000003c == 0) {
    return;
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0050fd90(this_ptr);
  return;
}
