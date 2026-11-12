// Name: core_fldnotes.cpp_SPageResourceText_dtor_FUN_004a2000
// Address: 004a2000
// Address Range: [[004a2000, 004a2054]]
// Convention: unknown
// Signature: SPageResourceText * core_fldnotes_cpp_SPageResourceText_dtor_FUN_004a2000(SPageResourceText *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceText * core_fldnotes_cpp_SPageResourceText_dtor_FUN_004a2000(SPageResourceText *this_ptr,uint flags)

{
  SPageResourceText *pSVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_PageResource_TextTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable = &g_SPageResourceTextVTable;
  pSVar1 = (SPageResourceText *)core_fldnotes_cpp_SPageResource_dtor_FUN_004a1e90(&this_ptr->base);
  if ((flags & 2) == 0) {
    return pSVar1;
  }
  FUN_005b7fdc(pSVar1);
  return pSVar1;
}
