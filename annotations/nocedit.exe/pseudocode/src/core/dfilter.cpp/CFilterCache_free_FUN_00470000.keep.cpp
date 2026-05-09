// Name: core_dfilter.cpp_CFilterCache_free_FUN_00470000
// Address: 00470000
// MANUAL RECONSTRUCTION
// Address Range: [[00470000, 0047005b]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_00470000(CFilterCache *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_00470000(CFilterCache *this_ptr)

{
  CDemonFilter *ptr;
  int iVar2;

  iVar2 = 0;
  if (0 < this_ptr->filter_count) {
    do {
      g_CurrentDebugLine = 0x4b;
      g_CurrentDebugFilename = "..\\core\\dfilter.cpp";
      if (this_ptr->filters[iVar2] != (CDemonFilter *)0x0) {
        ptr = core_dfilter_cpp_CDemonFilter_dtor_FUN_00470240(this_ptr->filters[iVar2],0);
        shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->filter_count);
  }
  this_ptr->filter_count = 0;
  return;
}
