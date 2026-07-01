// Name: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260
// Address: 00470260
// Address Range: [[00470260, 004702b6]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00470260(CDemonFilter *this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00470260(CDemonFilter *this_ptr)

{
  uchar *puVar1;
  
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004702c0(this_ptr);
  puVar1 = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->size * this_ptr->count,"..\\core\\dfilter.cpp",140);
  this_ptr->data_buffer = puVar1;
  if (puVar1 != (uchar *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dfilter.cpp";
  g_CurrentLineNumber = 141;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::allocMemory - Out of memory");
  return;
}
