// Name: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0045da10
// Address: 0045da10
// Address Range: [[0045da10, 0045da2f]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0045da10(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0045da10(CDemonFilter *this_ptr)

{
  if (*(int *)&this_ptr->field_0x48 == 0) {
    return;
  }
  FUN_005c09f0(*(int *)&this_ptr->field_0x48);
  *(uint *)&this_ptr->field_0x48 = 0;
  return;
}
