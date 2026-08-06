// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350
// Address: 004f5350
// Address Range: [[004f5350, 004f53ed]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_004f5350(CPackedBitmapSet *this_ptr,int bitmap_count)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_004f5350(CPackedBitmapSet *this_ptr,int bitmap_count)

{
  void *array_memory;
  CPackedBitmap *pCVar1;
  int element_count;
  WatcomTypeInfo *type_info;
  char local_d0 [200];
  
  cockpit_pkbitmap_cpp_CPackedBitmapSet_FUN_004f5320(this_ptr);
  if (bitmap_count < 1) {
    return;
  }
  type_info = &g_CPackedBitmapTypeInfo_005a1340;
  element_count = bitmap_count;
  array_memory = shape_memdbg_cpp_malloc_FUN_00564c18(bitmap_count * 0x24 + 4);
  pCVar1 = (CPackedBitmap *)__vec_new(array_memory,element_count,type_info);
  this_ptr->bitmap_array = pCVar1;
  if (pCVar1 == (CPackedBitmap *)0x0) {
    _sprintf(local_d0,"Unable to allocate %u bytes for %u CPackedBitmaps in CPackedBitmapSet::alloc",bitmap_count * 0x24,bitmap_count);
    g_CurrentLineNumber = 107;
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_004c8440(local_d0);
  }
  this_ptr->bitmap_count = bitmap_count;
  return;
}
