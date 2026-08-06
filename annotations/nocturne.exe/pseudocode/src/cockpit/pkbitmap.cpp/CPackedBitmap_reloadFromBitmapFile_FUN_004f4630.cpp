// Name: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630
// Address: 004f4630
// Address Range: [[004f4630, 004f46a0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

{
  uchar *bitmap_data;
  int in_stack_0000001c;
  int in_stack_00000038;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_FUN_004f3f50(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(this_ptr,filename);
  bitmap_data = cockpit_ckptutil_c_readBitmapFile_FUN_0042d240
                          (this_ptr->filename,(void *)0x0,apply_palette_flag * width);
  cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0
            (this_ptr,bitmap_data,width,apply_palette_flag,in_stack_0000001c,width);
  free(bitmap_data);
  if (in_stack_00000038 == 0) {
    return;
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(this_ptr);
  return;
}
