// Name: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004478b0
// Address: 004478b0
// Address Range: [[004478b0, 004478cf]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004478b0(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004478b0(CDemonFilter *this_ptr)

{
  if (*(int *)&this_ptr->field_0x48 == 0) {
    return;
  }
  FUN_005b86a0(*(int *)&this_ptr->field_0x48);
  *(uint *)&this_ptr->field_0x48 = 0;
  return;
}
