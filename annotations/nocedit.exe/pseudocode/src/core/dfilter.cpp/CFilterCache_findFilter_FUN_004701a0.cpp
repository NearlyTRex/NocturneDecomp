// Name: core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0
// Address: 004701a0
// Address Range: [[004701a0, 004701e6]]
// Convention: __cdecl
// Signature: CDemonFilter * __cdecl core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0(CFilterCache *this_ptr,char *filter_name)

#include "nocturne.h"

CDemonFilter * __cdecl core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0(CFilterCache *this_ptr,char *filter_name)

{
  int iVar1;
  int iVar2;
  char (*str1) [40];
  
  iVar2 = 0;
  if (0 < this_ptr->filter_count) {
    str1 = this_ptr->filter_names;
    do {
      iVar1 = strcmp(*str1,filter_name);
      if (iVar1 == 0) {
        return this_ptr->filters[iVar2];
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->filter_count);
  }
  return (CDemonFilter *)0x0;
}
