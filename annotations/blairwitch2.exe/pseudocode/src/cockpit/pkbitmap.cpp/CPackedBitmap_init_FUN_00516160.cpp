// Name: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_00516160
// Address: 00516160
// Address Range: [[00516160, 005161a6]]
// Convention: __cdecl
// Signature: CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_00516160(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_00516160(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

{
  int in_stack_0000001c;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_005161d0(this_ptr);
  memset(this_ptr,0,0x14);
  cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_005168e0
            (this_ptr,(char *)width,height,transparency_color,apply_palette_flag,in_stack_0000001c);
  return this_ptr;
}
