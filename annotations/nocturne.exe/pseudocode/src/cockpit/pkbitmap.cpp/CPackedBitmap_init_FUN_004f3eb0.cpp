// Name: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_004f3eb0
// Address: 004f3eb0
// Address Range: [[004f3eb0, 004f3ef6]]
// Convention: __cdecl
// Signature: CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_004f3eb0(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_004f3eb0(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

{
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_004f3f20(this_ptr);
  memset(this_ptr,0,0x14);
  cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630
            (this_ptr,filename,width,height,transparency_color,apply_palette_flag);
  return this_ptr;
}
