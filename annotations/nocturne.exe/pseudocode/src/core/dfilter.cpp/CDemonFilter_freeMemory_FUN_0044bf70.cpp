// Name: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0044bf70
// Address: 0044bf70
// Address Range: [[0044bf70, 0044bf8f]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0044bf70(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0044bf70(CDemonFilter *this_ptr)

{
  if (this_ptr->data_buffer == (uchar *)0x0) {
    return;
  }
  free(this_ptr->data_buffer);
  this_ptr->data_buffer = (uchar *)0x0;
  return;
}
