// Name: core_fldnotes.cpp_STextPage_clear_FUN_004a8cc0
// Address: 004a8cc0
// Address Range: [[004a8cc0, 004a8cf8]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextPage_clear_FUN_004a8cc0(STextPage *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextPage_clear_FUN_004a8cc0(STextPage *this_ptr)

{
  SPageResource *pSVar1;
  int iVar2;
  STextPage *pSVar3;
  
  iVar2 = 0;
  pSVar3 = this_ptr;
  if (0 < this_ptr->resource_count) {
    do {
      pSVar1 = pSVar3->resources[0];
      if (pSVar1 != (SPageResource *)0x0) {
        (**(code **)pSVar1->vtable)(pSVar1,2);
      }
      iVar2 = iVar2 + 1;
      pSVar3 = (STextPage *)pSVar3->resources;
    } while (iVar2 < this_ptr->resource_count);
  }
  this_ptr->resource_count = 0;
  return;
}
