// Name: unkafter_fldnotes.cpp_SPageResourceMap_dtor_FUN_004bf670
// Address: 004bf670
// Address Range: [[004bf670, 004bf6bd]]
// Convention: unknown
// Signature: SPageResourceMap * unkafter_fldnotes_cpp_SPageResourceMap_dtor_FUN_004bf670(SPageResourceMap *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceMap * unkafter_fldnotes_cpp_SPageResourceMap_dtor_FUN_004bf670(SPageResourceMap *this_ptr,uint flags)

{
  SPageResourceMap *pSVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_PageResource_MapTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pSVar1 = (SPageResourceMap *)unkaddr_004b9ab0_cpp_SPageResource_dtor_FUN_004ba760(&this_ptr->base)
  ;
  if ((flags & 2) == 0) {
    return pSVar1;
  }
  FUN_005c0344(pSVar1);
  return pSVar1;
}
