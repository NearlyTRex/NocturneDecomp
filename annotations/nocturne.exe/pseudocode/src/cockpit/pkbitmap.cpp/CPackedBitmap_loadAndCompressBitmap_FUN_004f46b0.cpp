// Name: cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0
// Address: 004f46b0
// Address Range: [[004f46b0, 004f46fb]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0(CPackedBitmap *this_ptr,int apply_palette_flag)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0(CPackedBitmap *this_ptr,int apply_palette_flag)

{
  void *pvVar1;
  
  pvVar1 = cockpit_ckptutil_c_readBitmapFile_FUN_0042d240
                     (this_ptr->filename,(void *)0x0,this_ptr->width * this_ptr->height);
  if (pvVar1 != (void *)0x0) {
    cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700
              (this_ptr,pvVar1,this_ptr->width);
    FUN_005638d0(pvVar1);
    if (apply_palette_flag != 0) {
      cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(this_ptr);
      return;
    }
  }
  return;
}
