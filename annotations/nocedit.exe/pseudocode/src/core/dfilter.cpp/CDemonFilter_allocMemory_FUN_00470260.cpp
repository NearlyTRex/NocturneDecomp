// Name: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260
// Address: 00470260
// Address Range: [[00470260, 004702b6]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260(CDemonFilter * this_ptr)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00470260(CDemonFilter *this_ptr)

{
  void *pvVar1;
  
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004702c0(this_ptr);
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->size * this_ptr->count,"..\\core\\dfilter.cpp",0x8c);
  this_ptr->data_buffer = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dfilter.cpp";
  g_CurrentLineNumber = 0x8d;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonFilter::allocMemory - Out of memory");
  return;
}
