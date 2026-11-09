// Name: core_dfilter.cpp_CFilterCache_findFilter_FUN_0045d900
// Address: 0045d900
// Address Range: [[0045d900, 0045d946]]
// Convention: __cdecl
// Signature: CDemonFilter * __cdecl core_dfilter_cpp_CFilterCache_findFilter_FUN_0045d900(CFilterCache *this_ptr,char *filter_name)

#include "nocturne.h"

CDemonFilter * __cdecl core_dfilter_cpp_CFilterCache_findFilter_FUN_0045d900(CFilterCache *this_ptr,char *filter_name)

{
  int iVar1;
  int iVar2;
  char *str1;
  
  iVar2 = 0;
  if (0 < *(int *)this_ptr) {
    str1 = &this_ptr->field_0x4;
    do {
      iVar1 = _strcmp(str1,filter_name);
      if (iVar1 == 0) {
        return *(CDemonFilter **)(&this_ptr->field_0xa04 + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x28;
    } while (iVar2 < *(int *)this_ptr);
  }
  return (CDemonFilter *)0x0;
}
