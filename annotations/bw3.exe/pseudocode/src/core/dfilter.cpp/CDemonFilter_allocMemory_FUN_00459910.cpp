// Name: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00459910
// Address: 00459910
// Address Range: [[00459910, 0045995c]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00459910(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00459910(CDemonFilter *this_ptr)

{
  uchar *puVar1;
  
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_00459960(this_ptr);
  puVar1 = (uchar *)malloc(this_ptr->size * this_ptr->count);
  this_ptr->data_buffer = puVar1;
  if (puVar1 != (uchar *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dfilter.cpp";
  g_CurrentLineNumber = 141;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonFilter::allocMemory - Out of memory");
  return;
}
