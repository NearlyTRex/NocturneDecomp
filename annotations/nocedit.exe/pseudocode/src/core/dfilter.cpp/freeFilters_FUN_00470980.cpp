// Name: core_dfilter.cpp_freeFilters_FUN_00470980
// Address: 00470980
// Address Range: [[00470980, 00470994]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_freeFilters_FUN_00470980(CDemonFilter * * array)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_freeFilters_FUN_00470980(CDemonFilter **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,4,&g_CDemonFilterTypeInfo);
  return;
}
