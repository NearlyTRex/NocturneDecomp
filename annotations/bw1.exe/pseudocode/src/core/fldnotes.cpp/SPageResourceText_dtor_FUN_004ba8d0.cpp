// Name: core_fldnotes.cpp_SPageResourceText_dtor_FUN_004ba8d0
// Address: 004ba8d0
// Address Range: [[004ba8d0, 004ba924]]
// Convention: unknown
// Signature: SPageResourceText * core_fldnotes_cpp_SPageResourceText_dtor_FUN_004ba8d0(SPageResourceText *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceText * core_fldnotes_cpp_SPageResourceText_dtor_FUN_004ba8d0(SPageResourceText *this_ptr,uint flags)

{
  SPageResourceText *pSVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_PageResource_TextTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_SPageResourceTextVTable;
  pSVar1 = (SPageResourceText *)core_fldnotes_cpp_SPageResource_dtor_FUN_004ba760(&this_ptr->base);
  if ((flags & 2) == 0) {
    return pSVar1;
  }
  FUN_005c0344(pSVar1);
  return pSVar1;
}
