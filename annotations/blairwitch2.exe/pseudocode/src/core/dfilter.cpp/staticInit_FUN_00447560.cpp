// Name: core_dfilter.cpp_staticInit_FUN_00447560
// Address: 00447560
// Address Range: [[00447560, 004475d6]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_staticInit_FUN_00447560(void)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_staticInit_FUN_00447560(void)

{
  __arrinit(CDemonFilter_ARRAY_01510e18,8,&g_CDemonFilterTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0060a044);
  __arrinit(CDemonFilter_ARRAY_01511078,4,&g_CDemonFilterTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0060a054);
  core_dfilter_cpp_CFilterCache_ctor_FUN_004475e0(&g_CFilterCacheInstance);
  _atexit(&g_CFilterCacheDestructorNode);
  core_dfilter_cpp_CFilterFX_ctor_FUN_00447bf0(&g_CFilterFXInstance);
  _atexit(&g_CFilterFXDestructorNode);
  return;
}
