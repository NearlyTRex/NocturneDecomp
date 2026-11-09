// Name: core_fldnotes.cpp_PageResource_TwanaCharacter_dtor_FUN_004babf0
// Address: 004babf0
// Address Range: [[004babf0, 004bac44]]
// Convention: unknown
// Signature: SPageResourceTwanaCharacter * core_fldnotes_cpp_PageResource_TwanaCharacter_dtor_FUN_004babf0(SPageResourceTwanaCharacter *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceTwanaCharacter * core_fldnotes_cpp_PageResource_TwanaCharacter_dtor_FUN_004babf0(SPageResourceTwanaCharacter *this_ptr,uint flags)

{
  SPageResourceTwanaCharacter *pSVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete
                            (this_ptr,&g_PageResource_TwanaCharacterTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  *(byte ***)&this_ptr->field_0x14 =
       &PTR_core_fldnotes_cpp_PageResource_TwanaCharacter_dtor_FUN_004babf0_00600954;
  pSVar1 = (SPageResourceTwanaCharacter *)
           core_fldnotes_cpp_PageResource_Bitmap_dtor_FUN_004baad0
                     ((SPageResourceBitmap *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pSVar1;
  }
  FUN_005c0344(pSVar1);
  return pSVar1;
}
