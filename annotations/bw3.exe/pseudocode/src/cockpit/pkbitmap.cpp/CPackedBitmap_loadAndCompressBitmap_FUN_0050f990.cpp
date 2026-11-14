// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0050f990
// Address: 0050f990
// Address Range: [[0050f990, 0050f9db]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0050f990(CPackedBitmap *this_ptr,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0050f990(CPackedBitmap *this_ptr,int apply_palette_flag)

{
  uchar *raw_bitmap_data;
  int in_stack_00000014;
  
  raw_bitmap_data =
       cockpit_ckptutil_c_FUN_00438ef0
                 (this_ptr->filename,(void *)0x0,this_ptr->width * this_ptr->height);
  if (raw_bitmap_data != (uchar *)0x0) {
    cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0050f9e0
              (this_ptr,raw_bitmap_data,this_ptr->width);
    FUN_005a3770();
    if (in_stack_00000014 != 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0050fd90(this_ptr);
      return;
    }
  }
  return;
}
