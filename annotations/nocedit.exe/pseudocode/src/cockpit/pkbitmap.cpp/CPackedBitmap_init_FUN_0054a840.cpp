// Name: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840
// Address: 0054a840
// Address Range: [[0054a840, 0054a886]]
// Convention: __cdecl
// Signature: CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840(CPackedBitmap * this_ptr, char * filename, int width, int height, int transparency_color, int stride, int apply_palette_flag)

#include "nocturne.h"

CPackedBitmap * __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_0054a840
          (CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,
          int stride,int apply_palette_flag)

{
  int unaff_EBP;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_0054a8b0(this_ptr);
  crt_memory_c_memset_FUN_005fde40(this_ptr,0,0x14);
  cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
            (this_ptr,filename,width,height,transparency_color,stride,unaff_EBP);
  return this_ptr;
}
