// Name: core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0
// Address: 004702c0
// Address Range: [[004702c0, 004702e9]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004702c0(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004702c0(CDemonFilter *this_ptr)

{
  if (this_ptr->data_buffer == (uchar *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->data_buffer,"..\\core\\dfilter.cpp",152);
  this_ptr->data_buffer = (uchar *)0x0;
  return;
}
