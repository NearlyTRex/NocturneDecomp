// Name: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00447860
// Address: 00447860
// Address Range: [[00447860, 004478ac]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00447860(CDemonFilter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00447860(CDemonFilter *this_ptr)

{
  uchar *puVar1;
  
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004478b0(this_ptr);
  puVar1 = FUN_005b8580(this_ptr->size * this_ptr->count);
  this_ptr->data_buffer = puVar1;
  if (puVar1 != (uchar *)0x0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dfilter.cpp";
  _DAT_01d046a4 = 0x8d;
  core_main_c_FUN_004e4500("CDemonFilter::allocMemory - Out of memory");
  return;
}
