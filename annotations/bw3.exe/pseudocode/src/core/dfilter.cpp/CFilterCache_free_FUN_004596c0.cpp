// Name: core_dfilter.cpp_CFilterCache_free_FUN_004596c0
// Address: 004596c0
// Address Range: [[004596c0, 00459704]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_004596c0(CFilterCache *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_004596c0(CFilterCache *this_ptr)

{
  CDemonFilter *pCVar1;
  int iVar2;
  CFilterCache *pCVar3;
  
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->filter_count) {
    do {
      if (pCVar3->filters[0] != (CDemonFilter *)0x0) {
        pCVar1 = core_dfilter_cpp_CDemonFilter_dtor_FUN_004598f0(pCVar3->filters[0],0);
        FUN_005a30c4(pCVar1);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CFilterCache *)pCVar3->filter_names;
    } while (iVar2 < this_ptr->filter_count);
  }
  this_ptr->filter_count = 0;
  return;
}
