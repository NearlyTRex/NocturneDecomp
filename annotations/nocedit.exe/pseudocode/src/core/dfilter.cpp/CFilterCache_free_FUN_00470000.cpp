// Name: core_dfilter.cpp_CFilterCache_free_FUN_00470000
// Address: 00470000
// Address Range: [[00470000, 0047005b]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_00470000(CFilterCache *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_00470000(CFilterCache *this_ptr)

{
  CDemonFilter *ptr;
  CFilterCache *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->filter_count) {
    do {
      g_CurrentDebugLine = 0x4b;
      g_CurrentDebugFilename = "..\\core\\dfilter.cpp";
      if (pCVar1->filters[0] != (CDemonFilter *)0x0) {
        ptr = core_dfilter_cpp_CDemonFilter_dtor_FUN_00470240(pCVar1->filters[0],0);
        shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CFilterCache *)pCVar1->filter_names;
    } while (iVar2 < this_ptr->filter_count);
  }
  this_ptr->filter_count = 0;
  return;
}
