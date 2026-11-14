// Name: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0045da10
// Address: 0045da10
// Address Range: [[0045da10, 0045da2f]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0045da10(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0045da10(CDemonFilter *this_ptr)

{
  if (this_ptr->data_buffer == (uchar *)0x0) {
    return;
  }
  FUN_005c09f0(this_ptr->data_buffer);
  this_ptr->data_buffer = (uchar *)0x0;
  return;
}
