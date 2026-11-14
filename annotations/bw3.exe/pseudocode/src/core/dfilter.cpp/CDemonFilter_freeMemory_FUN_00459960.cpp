// Name: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_00459960
// Address: 00459960
// Address Range: [[00459960, 0045997f]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_00459960(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_00459960(CDemonFilter *this_ptr)

{
  if (this_ptr->data_buffer == (uchar *)0x0) {
    return;
  }
  FUN_005a3770(this_ptr->data_buffer);
  this_ptr->data_buffer = (uchar *)0x0;
  return;
}
