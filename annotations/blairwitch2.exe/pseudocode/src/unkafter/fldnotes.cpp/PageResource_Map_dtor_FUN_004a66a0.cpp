// Name: unkafter_fldnotes.cpp_PageResource_Map_dtor_FUN_004a66a0
// Address: 004a66a0
// Address Range: [[004a66a0, 004a66ed]]
// Convention: unknown
// Signature: SPageResourceMap * unkafter_fldnotes_cpp_PageResource_Map_dtor_FUN_004a66a0(SPageResourceMap *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceMap * unkafter_fldnotes_cpp_PageResource_Map_dtor_FUN_004a66a0(SPageResourceMap *this_ptr,uint flags)

{
  SPageResourceMap *pSVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_PageResource_MapTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pSVar1 = (SPageResourceMap *)unkaddr_004a1200_cpp_FUN_004a1e90(this_ptr,1);
  if ((flags & 2) == 0) {
    return pSVar1;
  }
  FUN_005b7fdc(pSVar1);
  return pSVar1;
}
