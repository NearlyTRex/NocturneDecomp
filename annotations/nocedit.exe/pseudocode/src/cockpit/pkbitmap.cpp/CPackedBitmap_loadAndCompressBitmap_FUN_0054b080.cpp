// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
// Address: 0054b080
// Address Range: [[0054b080, 0054b0d5]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080(CPackedBitmap * this_ptr, int apply_palette_flag)

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
          (CPackedBitmap *this_ptr,int apply_palette_flag)

{
  uchar *raw_bitmap_data;
  int in_stack_00000014;
  
  raw_bitmap_data =
       cockpit_ckptutil_c_readBitmapFile_FUN_00431870
                 (this_ptr->filename,(void *)0x0,this_ptr->width * this_ptr->height);
  if (raw_bitmap_data != (uchar *)0x0) {
    cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
              (this_ptr,raw_bitmap_data,this_ptr->width);
    shape_memdbg_cpp_debugFree_FUN_0050f460(raw_bitmap_data,"..\\cockpit\\pkbitmap.cpp",0x314);
    if (in_stack_00000014 != 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(this_ptr);
      return;
    }
  }
  return;
}
