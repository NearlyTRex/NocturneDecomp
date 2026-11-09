// Name: core_dfilter.cpp_staticInit_FUN_00459610
// Address: 00459610
// Address Range: [[00459610, 00459686]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_staticInit_FUN_00459610(void)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_staticInit_FUN_00459610(void)

{
  WatcomStaticDestructorNode *pWStack00000004;
  
  __arrinit(CDemonFilter_ARRAY_01548c00,8,&g_CDemonFilterTypeInfo);
  _atexit(&WatcomStaticDestructorNode_005f189c);
  __arrinit(CDemonFilter_ARRAY_01548e60,4,&g_CDemonFilterTypeInfo);
  _atexit(&WatcomStaticDestructorNode_005f18ac);
  core_dfilter_cpp_CFilterCache_ctor_FUN_00459690(&g_CFilterCacheInstance);
  _atexit();
  core_dfilter_cpp_CFilterFX_ctor_FUN_00459ca0(&g_CFilterFXInstance);
  pWStack00000004 = &g_CFilterFXDestructorNode;
  _atexit();
  return;
}
