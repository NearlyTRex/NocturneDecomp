// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670
// Address: 00510670
// Address Range: [[00510670, 0051069d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00510670(CPackedBitmapSet *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00510670(CPackedBitmapSet *this_ptr)

{
  void *ptr;
  
  ptr = __vec_delete(this_ptr->bitmap_array,&g_CPackedBitmapTypeInfo);
  FUN_005a30b6(ptr);
  this_ptr->bitmap_count = 0;
  this_ptr->bitmap_array = (CPackedBitmap *)0x0;
  return;
}
