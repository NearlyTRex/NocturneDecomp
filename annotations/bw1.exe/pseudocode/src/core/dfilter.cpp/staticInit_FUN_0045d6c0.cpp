// Name: core_dfilter.cpp_staticInit_FUN_0045d6c0
// Address: 0045d6c0
// Address Range: [[0045d6c0, 0045d736]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_staticInit_FUN_0045d6c0(void)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_staticInit_FUN_0045d6c0(void)

{
  __arrinit(CDemonFilter_ARRAY_0152c39c,8,&g_CDemonFilterTypeInfo);
  _atexit(&WatcomStaticDestructorNode_006112e8);
  __arrinit(CDemonFilter_ARRAY_0152c5fc,4,&g_CDemonFilterTypeInfo);
  _atexit(&WatcomStaticDestructorNode_006112f8);
  core_dfilter_cpp_CFilterCache_ctor_FUN_0045d740(&g_CFilterCacheInstance);
  _atexit(&g_CFilterCacheDestructorNode);
  core_dfilter_cpp_CFilterFX_ctor_FUN_0045dd50(&g_CFilterFXInstance);
  _atexit(&g_CFilterFXDestructorNode);
  return;
}
