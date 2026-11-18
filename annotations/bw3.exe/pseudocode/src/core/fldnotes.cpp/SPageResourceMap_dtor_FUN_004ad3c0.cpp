// Name: core_fldnotes.cpp_SPageResourceMap_dtor_FUN_004ad3c0
// Address: 004ad3c0
// Address Range: [[004ad3c0, 004ad40d]]
// Convention: __cdecl
// Signature: SPageResourceMap * __cdecl core_fldnotes_cpp_SPageResourceMap_dtor_FUN_004ad3c0(SPageResourceMap *this_ptr,uint flags)

#include "nocturne.h"

SPageResourceMap * __cdecl core_fldnotes_cpp_SPageResourceMap_dtor_FUN_004ad3c0(SPageResourceMap *this_ptr,uint flags)

{
  SPageResourceMap *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_PageResource_MapTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (SPageResourceMap *)core_fldnotes_cpp_SPageResource_dtor_FUN_004a83a0(&this_ptr->base);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
