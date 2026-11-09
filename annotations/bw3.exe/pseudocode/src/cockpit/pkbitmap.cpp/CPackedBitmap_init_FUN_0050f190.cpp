// Name: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0050f190
// Address: 0050f190
// Address Range: [[0050f190, 0050f1d6]]
// Convention: __cdecl
// Signature: CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_0050f190(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

#include "nocturne.h"

CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_0050f190(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)

{
  int in_stack_0000001c;
  
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_0050f200(this_ptr);
  memset(this_ptr,0,0x14);
  cockpit_pkbitmap_cpp_FUN_0050f910
            (this_ptr,(char *)width,height,transparency_color,apply_palette_flag,in_stack_0000001c);
  return this_ptr;
}
