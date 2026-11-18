// Name: core_fldnotes.cpp_SPageResourceTwanaCharacter_dtor_FUN_004a8830
// Address: 004a8830
// Address Range: [[004a8830, 004a8884]]
// Convention: __cdecl
// Signature: SPageResourceTwanaCharacter * __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_dtor_FUN_004a8830(SPageResourceTwanaCharacter *this_ptr,uint flags)

#include "nocturne.h"

SPageResourceTwanaCharacter * __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_dtor_FUN_004a8830(SPageResourceTwanaCharacter *this_ptr,uint flags)

{
  SPageResourceTwanaCharacter *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_PageResource_TwanaCharacterTypeInfo)
    ;
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).base.vtable = &g_SPageResourceTwanaCharacterVTable;
  ptr = (SPageResourceTwanaCharacter *)
        core_fldnotes_cpp_SPageResourceBitmap_dtor_FUN_004a8710(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
