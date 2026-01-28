// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
// Address: 0054bdb0
// Address Range: [[0054bdb0, 0054be60]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0 (CPackedBitmapSet *this_ptr,int bitmap_count)

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
          (CPackedBitmapSet *this_ptr,int bitmap_count)

{
  void *array_memory;
  CPackedBitmap *pCVar1;
  int element_count;
  WatcomTypeInfo *type_info;
  char local_d0 [200];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  if (bitmap_count < 1) {
    return;
  }
  type_info = &g_CPackedBitmapTypeInfo;
  element_count = bitmap_count;
  array_memory = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           (bitmap_count * 0x24 + 4,"..\\cockpit\\pkbmpset.cpp",100);
  pCVar1 = crt_memory_c_constructTypedObjectArray_FUN_00601272(array_memory,element_count,type_info)
  ;
  this_ptr->bitmap_array = pCVar1;
  if (pCVar1 == (CPackedBitmap *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_d0,"Unable to allocate %u bytes for %u CPackedBitmaps in CPackedBitmapSet::alloc",bitmap_count * 0x24,bitmap_count);
    g_CurrentLineNumber = 0x6c;
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_d0);
  }
  this_ptr->bitmap_count = bitmap_count;
  return;
}
