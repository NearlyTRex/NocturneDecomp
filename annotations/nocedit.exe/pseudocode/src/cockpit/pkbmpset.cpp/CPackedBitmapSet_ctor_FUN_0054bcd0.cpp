// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0
// Address: 0054bcd0
// Address Range: [[0054bcd0, 0054bcff]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(CPackedBitmapSet *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(CPackedBitmapSet *this_ptr)

{
  this_ptr->bitmap_count = 0;
  this_ptr->bitmap_array = (CPackedBitmap *)0x0;
  this_ptr->extension = 0;
  this_ptr->base_path = 0;
  crt_memory_c_memset_FUN_005fde40(this_ptr->filename,0,0x14);
  return;
}
