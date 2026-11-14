// Name: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004478b0
// Address: 004478b0
// Address Range: [[004478b0, 004478cf]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004478b0(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004478b0(CDemonFilter *this_ptr)

{
  if (this_ptr->data_buffer == (uchar *)0x0) {
    return;
  }
  FUN_005b86a0(this_ptr->data_buffer);
  this_ptr->data_buffer = (uchar *)0x0;
  return;
}
