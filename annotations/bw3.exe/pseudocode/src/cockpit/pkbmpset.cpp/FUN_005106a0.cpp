// Name: cockpit_pkbmpset.cpp_FUN_005106a0
// Address: 005106a0
// Address Range: [[005106a0, 0051073d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_FUN_005106a0(CPackedBitmapSet *this_ptr,int bitmap_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbmpset_cpp_FUN_005106a0(CPackedBitmapSet *this_ptr,int bitmap_count)

{
  uint uVar1;
  CPackedBitmap *pCVar2;
  char acStack_d0 [200];
  
  cockpit_pkbitmap_cpp_FUN_00510670(this_ptr);
  if (bitmap_count < 1) {
    return;
  }
  uVar1 = operator_new_array
                    (bitmap_count * 0x24 + 4,bitmap_count,&g_CPackedBitmapTypeInfo);
  pCVar2 = (CPackedBitmap *)__vec_new(uVar1);
  this_ptr->bitmap_array = pCVar2;
  if (pCVar2 == (CPackedBitmap *)0x0) {
    _sprintf(acStack_d0,"Unable to allocate %u bytes for %u CPackedBitmaps in CPackedBitmapSet::alloc");
    _DAT_01d71de4 = 0x6e;
    _DAT_01d71de0 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_004e4330(acStack_d0);
  }
  this_ptr->bitmap_count = bitmap_count;
  return;
}
