// Name: core_fldnotes.cpp_STextPage_draw_FUN_004bb160
// Address: 004bb160
// Address Range: [[004bb160, 004bb18b]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_STextPage_draw_FUN_004bb160(STextPage *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_STextPage_draw_FUN_004bb160(STextPage *this_ptr)

{
  int iVar1;
  STextPage *pSVar2;
  
  iVar1 = 0;
  pSVar2 = this_ptr;
  if (0 < this_ptr->resource_count) {
    do {
      iVar1 = iVar1 + 1;
      (**(code **)((int)pSVar2->resources[0]->vtable + 4))(pSVar2->resources[0]);
      pSVar2 = (STextPage *)pSVar2->resources;
    } while (iVar1 < this_ptr->resource_count);
  }
  return;
}
