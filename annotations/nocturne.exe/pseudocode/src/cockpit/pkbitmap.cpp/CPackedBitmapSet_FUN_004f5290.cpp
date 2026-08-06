// Name: cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f5290
// Address: 004f5290
// Address Range: [[004f5290, 004f52bf]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmapSet_FUN_004f5290(CPackedBitmapSet *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmapSet_FUN_004f5290(CPackedBitmapSet *this_ptr)

{
  this_ptr->bitmap_count = 0;
  this_ptr->bitmap_array = (CPackedBitmap *)0x0;
  this_ptr->width = 0;
  this_ptr->height = 0;
  memset(this_ptr->filename,0,0x14);
  return;
}
