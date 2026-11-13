// Name: core_fldnotes.cpp_STextPage_findResourceAt_FUN_004a2730
// Address: 004a2730
// Address Range: [[004a2730, 004a277a]]
// Convention: __cdecl
// Signature: SPageResource * __cdecl core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a2730(STextPage *this_ptr,int x,int y)

#include "nocturne.h"

SPageResource * __cdecl core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a2730(STextPage *this_ptr,int x,int y)

{
  SPageResource *pSVar1;
  STextPage *pSVar2;
  int iVar3;
  
  iVar3 = 0;
  pSVar2 = this_ptr;
  if (0 < this_ptr->resource_count) {
    do {
      pSVar1 = pSVar2->resources[0];
      if ((((pSVar1->x <= x) && (x < pSVar1->x + pSVar1->width)) && (pSVar1->y <= y)) &&
         (y < pSVar1->y + pSVar1->height)) {
        return pSVar1;
      }
      iVar3 = iVar3 + 1;
      pSVar2 = (STextPage *)pSVar2->resources;
    } while (iVar3 < this_ptr->resource_count);
  }
  return (SPageResource *)0x0;
}
