// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_00538900
// Address: 00538900
// Address Range: [[00538900, 0053892f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_00538900(CPackedBitmapSet *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_00538900(CPackedBitmapSet *this_ptr)

{
  this_ptr->bitmap_count = 0;
  this_ptr->bitmap_array = (CPackedBitmap *)0x0;
  this_ptr->width = 0;
  this_ptr->height = 0;
  memset(this_ptr->filename,0,0x14);
  return;
}
