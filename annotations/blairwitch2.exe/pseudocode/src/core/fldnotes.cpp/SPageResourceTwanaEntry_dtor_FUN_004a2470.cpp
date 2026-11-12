// Name: core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004a2470
// Address: 004a2470
// Address Range: [[004a2470, 004a24ed]]
// Convention: unknown
// Signature: SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004a2470(SPageResourceTwanaEntry *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004a2470(SPageResourceTwanaEntry *this_ptr,uint flags)

{
  int iVar1;
  SPageResourceTwanaEntry *pSVar2;
  void *ptr;
  
  pSVar2 = _DAT_01cab780;
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_PageResource_TwanaEntryTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_SPageResourceTwanaEntryVTable;
  if (this_ptr == pSVar2) {
    _DAT_01cab780 = (SPageResourceTwanaEntry *)0x0;
  }
  iVar1 = core_fldnotes_cpp_FUN_004a66f0(this_ptr->slot_bitmaps,0);
  pSVar2 = (SPageResourceTwanaEntry *)
           core_fldnotes_cpp_SPageResource_dtor_FUN_004a1e90((SPageResource *)(iVar1 + -0xd8));
  if ((flags & 2) == 0) {
    return pSVar2;
  }
  FUN_005b7fdc(pSVar2);
  return pSVar2;
}
