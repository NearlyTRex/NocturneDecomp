// Name: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
// Address: 0054b000
// Address Range: [[0054b000, 0054b07a]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000(CPackedBitmap * this_ptr, char * filename, int width, int height, int transparency_color, int stride, int apply_palette_flag)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
          (CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,
          int stride,int apply_palette_flag)

{
  uchar *bitmap_data;
  int in_stack_00000020;
  int in_stack_0000002c;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(this_ptr,(char *)width);
  bitmap_data = cockpit_ckptutil_c_readBitmapFile_FUN_00431870
                          (this_ptr->filename,(void *)0x0,stride * width);
  cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0054b190
            (this_ptr,bitmap_data,width,apply_palette_flag,in_stack_00000020,(uchar)width);
  shape_memdbg_cpp_debugFree_FUN_0050f460(bitmap_data,"..\\cockpit\\pkbitmap.cpp",0x2fb);
  if (in_stack_0000002c == 0) {
    return;
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(this_ptr);
  return;
}
