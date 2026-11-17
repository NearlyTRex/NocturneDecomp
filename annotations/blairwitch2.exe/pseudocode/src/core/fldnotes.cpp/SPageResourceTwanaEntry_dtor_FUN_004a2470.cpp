// Name: core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004a2470
// Address: 004a2470
// Address Range: [[004a2470, 004a24ed]]
// Convention: __cdecl
// Signature: SPageResourceTwanaEntry * __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004a2470(SPageResourceTwanaEntry *this_ptr,uint flags)

#include "nocturne.h"

SPageResourceTwanaEntry * __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004a2470(SPageResourceTwanaEntry *this_ptr,uint flags)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  SPageResourceTwanaEntry *ptr;
  void *ptr_00;
  
  iVar1 = g_INT_01cab780;
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_PageResource_TwanaEntryTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_SPageResourceTwanaEntryVTable;
  if (this_ptr == (SPageResourceTwanaEntry *)iVar1) {
    g_INT_01cab780 = 0;
  }
  pCVar2 = core_fldnotes_cpp_CAlphaBitmap_arrdtor3_FUN_004a66f0(this_ptr->slot_bitmaps,0);
  ptr = (SPageResourceTwanaEntry *)
        core_fldnotes_cpp_SPageResource_dtor_FUN_004a1e90((SPageResource *)&pCVar2[-0xb].opa);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
