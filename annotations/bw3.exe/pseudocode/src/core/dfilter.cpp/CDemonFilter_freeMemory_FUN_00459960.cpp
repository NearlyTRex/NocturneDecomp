// Name: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_00459960
// Address: 00459960
// Address Range: [[00459960, 0045997f]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_00459960(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_00459960(CDemonFilter *this_ptr)

{
  if (*(int *)&this_ptr->field_0x48 == 0) {
    return;
  }
  FUN_005a3770(*(int *)&this_ptr->field_0x48);
  *(uint *)&this_ptr->field_0x48 = 0;
  return;
}
