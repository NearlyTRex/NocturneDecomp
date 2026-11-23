// Name: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0045d9c0
// Address: 0045d9c0
// Address Range: [[0045d9c0, 0045da0c]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0045d9c0(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0045d9c0(CDemonFilter *this_ptr)

{
  uchar *puVar1;
  
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0045da10(this_ptr);
  puVar1 = (uchar *)malloc(this_ptr->size * this_ptr->count);
  this_ptr->data_buffer = puVar1;
  if (puVar1 != (uchar *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dfilter.cpp";
  g_CurrentLineNumber = 141;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonFilter::allocMemory - Out of memory");
  return;
}
