// Name: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_005168e0
// Address: 005168e0
// Address Range: [[005168e0, 00516950]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_005168e0(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_005168e0(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

{
  uchar *bitmap_data;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_0000003c;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_00516200(this_ptr);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_00516270(this_ptr,(char *)width);
  bitmap_data = cockpit_ckptutil_c_FUN_0042c520
                          (this_ptr->filename,(void *)0x0,in_stack_0000001c * width);
  cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_00516a60
            (this_ptr,bitmap_data,width,in_stack_0000001c,in_stack_00000020,width);
  FUN_005b86a0();
  if (in_stack_0000003c == 0) {
    return;
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_00516d60(this_ptr);
  return;
}
