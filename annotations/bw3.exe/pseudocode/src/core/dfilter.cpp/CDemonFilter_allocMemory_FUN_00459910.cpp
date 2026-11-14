// Name: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00459910
// Address: 00459910
// Address Range: [[00459910, 0045995c]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00459910(CDemonFilter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00459910(CDemonFilter *this_ptr)

{
  uchar *puVar1;
  
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_00459960(this_ptr);
  puVar1 = (uchar *)malloc(this_ptr->size * this_ptr->count);
  this_ptr->data_buffer = puVar1;
  if (puVar1 != (uchar *)0x0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dfilter.cpp";
  _DAT_01d71de4 = 0x8d;
  core_main_c_FUN_004e4330("CDemonFilter::allocMemory - Out of memory");
  return;
}
