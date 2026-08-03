// Name: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0044bf20
// Address: 0044bf20
// Address Range: [[0044bf20, 0044bf6c]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0044bf20(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0044bf20(CDemonFilter *this_ptr)

{
  uchar *puVar1;
  
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0044bf70(this_ptr);
  puVar1 = (uchar *)malloc(this_ptr->size * this_ptr->count);
  this_ptr->data_buffer = puVar1;
  if (puVar1 != (uchar *)0x0) {
    return;
  }
  g_CHAR_PTR_01cc4800 = "..\\core\\dfilter.cpp";
  g_INT_01cc4804 = 0x8d;
  core_main_c_FUN_004c8440("CDemonFilter::allocMemory - Out of memory");
  return;
}
