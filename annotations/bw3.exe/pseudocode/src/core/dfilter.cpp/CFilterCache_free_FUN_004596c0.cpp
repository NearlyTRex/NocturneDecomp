// Name: core_dfilter.cpp_CFilterCache_free_FUN_004596c0
// Address: 004596c0
// Address Range: [[004596c0, 00459704]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_004596c0(CFilterCache *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_004596c0(CFilterCache *this_ptr)

{
  CDemonFilter *ptr;
  int iVar1;
  CFilterCache *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->filter_count) {
    do {
      if (pCVar2->filters[0] != (CDemonFilter *)0x0) {
        ptr = core_dfilter_cpp_CDemonFilter_dtor_FUN_004598f0(pCVar2->filters[0],0);
        debugFreeChecked(ptr);
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CFilterCache *)pCVar2->filter_names;
    } while (iVar1 < this_ptr->filter_count);
  }
  this_ptr->filter_count = 0;
  return;
}
