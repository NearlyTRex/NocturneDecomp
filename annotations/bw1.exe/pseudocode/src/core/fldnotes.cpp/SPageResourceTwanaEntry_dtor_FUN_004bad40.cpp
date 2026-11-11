// Name: core_fldnotes.cpp_SPageResourceTwanaEntry_dtor_FUN_004bad40
// Address: 004bad40
// Address Range: [[004bad40, 004badbd]]
// Convention: unknown
// Signature: SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004bad40(SPageResourceTwanaEntry *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceTwanaEntry * core_fldnotes_cpp_SPageResourceTwanaEntry_dtor_FUN_004bad40(SPageResourceTwanaEntry *this_ptr,uint flags)

{
  int iVar1;
  SPageResourceTwanaEntry *pSVar2;
  void *ptr;
  
  pSVar2 = _DAT_01cc4200;
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete
                            (this_ptr,&g_PageResource_TwanaEntryTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_SPageResourceTwanaEntryVTable;
  if (this_ptr == pSVar2) {
    _DAT_01cc4200 = (SPageResourceTwanaEntry *)0x0;
  }
  iVar1 = unkafter_fldnotes_cpp_FUN_004bf6c0(this_ptr->slot_bitmaps,0);
  pSVar2 = (SPageResourceTwanaEntry *)
           unkaddr_004b9ab0_cpp_SPageResource_dtor_FUN_004ba760((SPageResource *)(iVar1 + -0xdc));
  if ((flags & 2) == 0) {
    return pSVar2;
  }
  FUN_005c0344(pSVar2);
  return pSVar2;
}
