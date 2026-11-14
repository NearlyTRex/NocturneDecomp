// Name: core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004a8980
// Address: 004a8980
// Address Range: [[004a8980, 004a89fd]]
// Convention: __cdecl
// Signature: SPageResourceTwanaEntry * __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004a8980(SPageResourceTwanaEntry *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SPageResourceTwanaEntry * __cdecl core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004a8980(SPageResourceTwanaEntry *this_ptr,uint flags)

{
  CAlphaBitmap *pCVar1;
  SPageResourceTwanaEntry *pSVar2;
  void *ptr;
  
  pSVar2 = _DAT_01d0cfa0;
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_PageResource_TwanaEntryTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_SPageResourceTwanaEntryVTable;
  if (this_ptr == pSVar2) {
    _DAT_01d0cfa0 = (SPageResourceTwanaEntry *)0x0;
  }
  pCVar1 = core_fldnotes_cpp_CAlphaBitmap_arrdtor3_FUN_004ad410(this_ptr->slot_bitmaps,0);
  pSVar2 = (SPageResourceTwanaEntry *)
           core_fldnotes_cpp_SPageResource_dtor_FUN_004a83a0((SPageResource *)(pCVar1 + -0xb));
  if ((flags & 2) == 0) {
    return pSVar2;
  }
  FUN_005a30c4(pSVar2);
  return pSVar2;
}
