// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0
// Address: 004f46b0
// Address Range: [[004f46b0, 004f46fb]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0(CPackedBitmap *this_ptr,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0(CPackedBitmap *this_ptr,int apply_palette_flag)

{
  uchar *raw_bitmap_data;
  int in_stack_00000014;
  
  raw_bitmap_data =
       cockpit_ckptutil_c_readBitmapFile_FUN_0042d240
                 (this_ptr->filename,(void *)0x0,this_ptr->width * this_ptr->height);
  if (raw_bitmap_data != (uchar *)0x0) {
    cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700
              (this_ptr,raw_bitmap_data,this_ptr->width);
    FUN_005638d0();
    if (in_stack_00000014 != 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(this_ptr);
      return;
    }
  }
  return;
}
