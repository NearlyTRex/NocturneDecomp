// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_00517670
// Address: 00517670
// Address Range: [[00517670, 0051770d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_00517670(CPackedBitmapSet *this_ptr,int bitmap_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_00517670(CPackedBitmapSet *this_ptr,int bitmap_count)

{
  uint uVar1;
  CPackedBitmap *pCVar2;
  char acStack_cc [196];
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_00517640(this_ptr);
  if (bitmap_count < 1) {
    return;
  }
  uVar1 = operator_new_array
                    (bitmap_count * 0x24 + 4,bitmap_count,&g_CPackedBitmapTypeInfo);
  pCVar2 = (CPackedBitmap *)__vec_new(uVar1);
  this_ptr->bitmap_array = pCVar2;
  if (pCVar2 == (CPackedBitmap *)0x0) {
    _sprintf(acStack_cc,"Unable to allocate %u bytes for %u CPackedBitmaps in CPackedBitmapSet::alloc");
    _DAT_01d046a4 = 0x6c;
    _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_004e4500(acStack_cc);
  }
  this_ptr->bitmap_count = bitmap_count;
  return;
}
