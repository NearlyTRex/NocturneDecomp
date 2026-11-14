// Name: core_fldnotes.cpp_SPageResourceMap_dtor_FUN_004ad3c0
// Address: 004ad3c0
// Address Range: [[004ad3c0, 004ad40d]]
// Convention: __cdecl
// Signature: SPageResourceMap * __cdecl core_fldnotes_cpp_SPageResourceMap_dtor_FUN_004ad3c0(SPageResourceMap *this_ptr,uint flags)

#include "nocturne.h"

SPageResourceMap * __cdecl core_fldnotes_cpp_SPageResourceMap_dtor_FUN_004ad3c0(SPageResourceMap *this_ptr,uint flags)

{
  SPageResourceMap *pSVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_PageResource_MapTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pSVar1 = (SPageResourceMap *)core_fldnotes_cpp_SPageResource_dtor_FUN_004a83a0(&this_ptr->base);
  if ((flags & 2) == 0) {
    return pSVar1;
  }
  FUN_005a30c4(pSVar1);
  return pSVar1;
}
