// Name: core_fldnotes.cpp_SPageResourceTwanaCharacter_dtor_FUN_004a8830
// Address: 004a8830
// Address Range: [[004a8830, 004a8884]]
// Convention: unknown
// Signature: SPageResourceTwanaCharacter * core_fldnotes_cpp_SPageResourceTwanaCharacter_dtor_FUN_004a8830(SPageResourceTwanaCharacter *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceTwanaCharacter * core_fldnotes_cpp_SPageResourceTwanaCharacter_dtor_FUN_004a8830(SPageResourceTwanaCharacter *this_ptr,uint flags)

{
  SPageResourceTwanaCharacter *pSVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete
                            (this_ptr,&g_PageResource_TwanaCharacterTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  (this_ptr->base).base.vtable = &g_SPageResourceTwanaCharacterVTable;
  pSVar1 = (SPageResourceTwanaCharacter *)
           core_fldnotes_cpp_SPageResourceBitmap_dtor_FUN_004a8710(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pSVar1;
  }
  FUN_005a30c4(pSVar1);
  return pSVar1;
}
