// Name: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00459910
// Address: 00459910
// Address Range: [[00459910, 0045995c]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00459910(CDemonFilter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00459910(CDemonFilter *this_ptr)

{
  void *pvVar1;
  
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_00459960(this_ptr);
  pvVar1 = FUN_005a3650(*(int *)this_ptr * *(int *)&this_ptr->field_0x4);
  *(void **)&this_ptr->field_0x48 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dfilter.cpp";
  _DAT_01d71de4 = 0x8d;
  core_main_c_FUN_004e4330("CDemonFilter::allocMemory - Out of memory");
  return;
}
