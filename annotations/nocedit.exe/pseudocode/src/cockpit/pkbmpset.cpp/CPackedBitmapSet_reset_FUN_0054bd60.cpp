// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
// Address: 0054bd60
// Address Range: [[0054bd60, 0054bda5]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet *this_ptr)

{
  void *ptr;
  
  g_CurrentDebugFilename = "..\\cockpit\\pkbmpset.cpp";
  g_CurrentDebugLine = 0x4d;
  ptr = __vec_delete(this_ptr->bitmap_array,&g_CPackedBitmapTypeInfo);
  shape_memdbg_cpp_free_FUN_005fe659(ptr);
  this_ptr->bitmap_count = 0;
  this_ptr->bitmap_array = (CPackedBitmap *)0x0;
  return;
}
