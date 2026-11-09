// Name: core_fldnotes.cpp_PageResource_Text_dtor_FUN_004a8510
// Address: 004a8510
// Address Range: [[004a8510, 004a8564]]
// Convention: unknown
// Signature: SPageResourceText * core_fldnotes_cpp_PageResource_Text_dtor_FUN_004a8510(SPageResourceText *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SPageResourceText * core_fldnotes_cpp_PageResource_Text_dtor_FUN_004a8510(SPageResourceText *this_ptr,uint flags)

{
  SPageResourceText *pSVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_PageResource_TextTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  *(byte ***)&this_ptr->field_0x14 =
       &PTR_core_fldnotes_cpp_PageResource_Text_dtor_FUN_004a8510_005e0294;
  pSVar1 = (SPageResourceText *)unkaddr_004a76f0_cpp_FUN_004a83a0(this_ptr,1);
  if ((flags & 2) == 0) {
    return pSVar1;
  }
  FUN_005a30c4(pSVar1);
  return pSVar1;
}
