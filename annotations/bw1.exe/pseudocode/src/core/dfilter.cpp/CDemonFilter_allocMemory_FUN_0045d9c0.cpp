// Name: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0045d9c0
// Address: 0045d9c0
// Address Range: [[0045d9c0, 0045da0c]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0045d9c0(CDemonFilter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0045d9c0(CDemonFilter *this_ptr)

{
  void *pvVar1;
  
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0045da10(this_ptr);
  pvVar1 = FUN_005c08d0(*(int *)this_ptr * *(int *)&this_ptr->field_0x4);
  *(void **)&this_ptr->field_0x48 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dfilter.cpp";
  _DAT_01d1d404 = 0x8d;
  core_main_c_FUN_005030e0("CDemonFilter::allocMemory - Out of memory");
  return;
}
