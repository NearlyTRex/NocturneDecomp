// Name: cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f5320
// Address: 004f5320
// Address Range: [[004f5320, 004f534d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmapSet_FUN_004f5320(CPackedBitmapSet *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmapSet_FUN_004f5320(CPackedBitmapSet *this_ptr)

{
  void *ptr;
  
  ptr = __vec_delete
                  (this_ptr->bitmap_array,&g_CPackedBitmapTypeInfo_005a1340);
  shape_memdbg_cpp_free_FUN_00564486(ptr);
  this_ptr->bitmap_count = 0;
  this_ptr->bitmap_array = (CPackedBitmap *)0x0;
  return;
}
