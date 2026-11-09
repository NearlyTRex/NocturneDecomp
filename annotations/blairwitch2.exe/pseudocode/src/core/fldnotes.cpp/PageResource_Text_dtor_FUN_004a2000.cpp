// Name: core_fldnotes.cpp_PageResource_Text_dtor_FUN_004a2000
// Address: 004a2000
// Address Range: [[004a2000, 004a2054]]
// Convention: unknown
// Signature: SPageResourceText * core_fldnotes_cpp_PageResource_Text_dtor_FUN_004a2000(SPageResourceText *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceText * core_fldnotes_cpp_PageResource_Text_dtor_FUN_004a2000(SPageResourceText *this_ptr,uint flags)

{
  SPageResourceText *pSVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_PageResource_TextTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  *(byte ***)&this_ptr->field_0x14 =
       &PTR_core_fldnotes_cpp_PageResource_Text_dtor_FUN_004a2000_005f6ed4;
  pSVar1 = (SPageResourceText *)unkaddr_004a1200_cpp_FUN_004a1e90(this_ptr,1);
  if ((flags & 2) == 0) {
    return pSVar1;
  }
  FUN_005b7fdc(pSVar1);
  return pSVar1;
}
