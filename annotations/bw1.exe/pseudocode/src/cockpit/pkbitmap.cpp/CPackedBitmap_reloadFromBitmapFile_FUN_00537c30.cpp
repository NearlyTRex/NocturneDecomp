// Name: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30
// Address: 00537c30
// Address Range: [[00537c30, 00537ca0]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

{
  uchar *bitmap_data;
  int in_stack_0000001c;
  int in_stack_00000038;
  
  cockpit_pkbitmap_cpp_FUN_00537550(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_005375c0(this_ptr,filename);
  bitmap_data = cockpit_ckptutil_c_FUN_0043b2e0
                          (this_ptr->filename,(void *)0x0,apply_palette_flag * width);
  cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_00537db0
            (this_ptr,bitmap_data,width,apply_palette_flag,in_stack_0000001c,width);
  FUN_005c09f0();
  if (in_stack_00000038 == 0) {
    return;
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_005380b0(this_ptr);
  return;
}
