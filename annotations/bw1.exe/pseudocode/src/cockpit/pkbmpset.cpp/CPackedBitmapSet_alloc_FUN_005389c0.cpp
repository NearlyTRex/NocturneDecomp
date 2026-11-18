// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_005389c0
// Address: 005389c0
// Address Range: [[005389c0, 00538a5d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_005389c0(CPackedBitmapSet *this_ptr,int bitmap_count)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_005389c0(CPackedBitmapSet *this_ptr,int bitmap_count)

{
  void *array_memory;
  CPackedBitmap *pCVar1;
  int element_count;
  WatcomTypeInfo *type_info;
  char acStack_cc [196];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00538990(this_ptr);
  if (bitmap_count < 1) {
    return;
  }
  type_info = &g_CPackedBitmapTypeInfo;
  element_count = bitmap_count;
  array_memory = operator_new_array(bitmap_count * 0x24 + 4);
  pCVar1 = (CPackedBitmap *)__vec_new(array_memory,element_count,type_info);
  this_ptr->bitmap_array = pCVar1;
  if (pCVar1 == (CPackedBitmap *)0x0) {
    _sprintf(acStack_cc,"Unable to allocate %u bytes for %u CPackedBitmaps in CPackedBitmapSet::alloc");
    g_INT_01d1d404 = 0x6e;
    g_CHAR_PTR_01d1d400 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_005030e0(acStack_cc);
  }
  this_ptr->bitmap_count = bitmap_count;
  return;
}
