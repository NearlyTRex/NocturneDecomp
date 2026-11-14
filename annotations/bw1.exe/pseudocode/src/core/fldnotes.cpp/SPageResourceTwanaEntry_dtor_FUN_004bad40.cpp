// Name: core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004bad40
// Address: 004bad40
// Address Range: [[004bad40, 004badbd]]
// Convention: __cdecl
// Signature: SPageResourceTwanaEntry * __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004bad40(SPageResourceTwanaEntry *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SPageResourceTwanaEntry * __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004bad40(SPageResourceTwanaEntry *this_ptr,uint flags)

{
  CAlphaBitmap *pCVar1;
  SPageResourceTwanaEntry *pSVar2;
  void *ptr;
  
  pSVar2 = _DAT_01cc4200;
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_PageResource_TwanaEntryTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_SPageResourceTwanaEntryVTable;
  if (this_ptr == pSVar2) {
    _DAT_01cc4200 = (SPageResourceTwanaEntry *)0x0;
  }
  pCVar1 = core_fldnotes_cpp_CAlphaBitmap_arrdtor3_FUN_004bf6c0(this_ptr->slot_bitmaps,0);
  pSVar2 = (SPageResourceTwanaEntry *)
           core_fldnotes_cpp_SPageResource_dtor_FUN_004ba760((SPageResource *)(pCVar1 + -0xb));
  if ((flags & 2) == 0) {
    return pSVar2;
  }
  FUN_005c0344(pSVar2);
  return pSVar2;
}
