// Name: core_fldnotes.cpp_STextPage_findResourceAt_FUN_004a2730
// Address: 004a2730
// Address Range: [[004a2730, 004a277a]]
// Convention: __cdecl
// Signature: int * __cdecl core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a2730(STextPage *this_ptr,int param_2,int param_3)

#include "nocturne.h"

int * __cdecl core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a2730(STextPage *this_ptr,int param_2,int param_3)

{
  SPageResource *pSVar1;
  STextPage *pSVar2;
  int iVar3;
  
  iVar3 = 0;
  pSVar2 = this_ptr;
  if (0 < this_ptr->resource_count) {
    do {
      pSVar1 = pSVar2->resources[0];
      if ((((pSVar1->x <= param_2) && (param_2 < pSVar1->x + pSVar1->width)) &&
          (pSVar1->y <= param_3)) && (param_3 < pSVar1->y + pSVar1->height)) {
        return &pSVar1->x;
      }
      iVar3 = iVar3 + 1;
      pSVar2 = (STextPage *)pSVar2->resources;
    } while (iVar3 < this_ptr->resource_count);
  }
  return (int *)0x0;
}
