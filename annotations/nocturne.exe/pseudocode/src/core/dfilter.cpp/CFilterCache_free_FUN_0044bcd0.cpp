// Name: core_dfilter.cpp_CFilterCache_free_FUN_0044bcd0
// Address: 0044bcd0
// Address Range: [[0044bcd0, 0044bd14]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_0044bcd0(CFilterCache *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_0044bcd0(CFilterCache *this_ptr)

{
  CDemonFilter *pCVar1;
  int iVar2;
  CFilterCache *pCVar3;
  
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->filter_count) {
    do {
      if (pCVar3->filters[0] != (CDemonFilter *)0x0) {
        pCVar1 = core_dfilter_cpp_CDemonFilter_dtor_FUN_0044bf00(pCVar3->filters[0],0);
        FUN_00564494(pCVar1);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CFilterCache *)pCVar3->filter_names;
    } while (iVar2 < this_ptr->filter_count);
  }
  this_ptr->filter_count = 0;
  return;
}
