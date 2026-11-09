// Name: core_dfilter.cpp_CFilterCache_free_FUN_0045d770
// Address: 0045d770
// Address Range: [[0045d770, 0045d7b4]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_0045d770(CFilterCache *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_0045d770(CFilterCache *this_ptr)

{
  CDemonFilter *pCVar1;
  int iVar2;
  CFilterCache *pCVar3;
  
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      if (*(CDemonFilter **)&pCVar3->field_0xa04 != (CDemonFilter *)0x0) {
        pCVar1 = core_dfilter_cpp_CDemonFilter_dtor_FUN_0045d9a0
                           (*(CDemonFilter **)&pCVar3->field_0xa04,0);
        FUN_005c0344(pCVar1);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CFilterCache *)&pCVar3->field_0x4;
    } while (iVar2 < *(int *)this_ptr);
  }
  *(uint *)this_ptr = 0;
  return;
}
