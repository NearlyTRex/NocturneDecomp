// Name: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0044bf20
// Address: 0044bf20
// Address Range: [[0044bf20, 0044bf6c]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0044bf20(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0044bf20(int *param_1)

{
  int iVar1;
  
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_0044bf70(param_1);
  iVar1 = malloc(*param_1 * param_1[1]);
  param_1[0x12] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01cc4800 = "..\\core\\dfilter.cpp";
  _DAT_01cc4804 = 0x8d;
  FUN_004c8440("CDemonFilter::allocMemory - Out of memory");
  return;
}
