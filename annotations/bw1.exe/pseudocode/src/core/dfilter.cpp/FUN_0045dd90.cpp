// Name: core_dfilter.cpp_FUN_0045dd90
// Address: 0045dd90
// Address Range: [[0045dd90, 0045ddaf]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_FUN_0045dd90(CFilterFX *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_FUN_0045dd90(CFilterFX *this_ptr)

{
  if (*(int *)&this_ptr->field_0x4 == 0) {
    return;
  }
  FUN_005c09f0(*(int *)&this_ptr->field_0x4);
  *(uint *)&this_ptr->field_0x4 = 0;
  return;
}
