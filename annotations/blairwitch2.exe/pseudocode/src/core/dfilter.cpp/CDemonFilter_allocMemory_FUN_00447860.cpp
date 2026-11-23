// Name: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00447860
// Address: 00447860
// Address Range: [[00447860, 004478ac]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00447860(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00447860(CDemonFilter *this_ptr)

{
  uchar *puVar1;
  
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004478b0(this_ptr);
  puVar1 = (uchar *)malloc(this_ptr->size * this_ptr->count);
  this_ptr->data_buffer = puVar1;
  if (puVar1 != (uchar *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dfilter.cpp";
  g_CurrentLineNumber = 141;
  core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonFilter::allocMemory - Out of memory");
  return;
}
