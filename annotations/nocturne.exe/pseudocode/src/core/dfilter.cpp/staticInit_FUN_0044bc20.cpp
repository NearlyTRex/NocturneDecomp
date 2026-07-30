// Name: core_dfilter.cpp_staticInit_FUN_0044bc20
// Address: 0044bc20
// Address Range: [[0044bc20, 0044bc96]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_staticInit_FUN_0044bc20(void)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_staticInit_FUN_0044bc20(void)

{
  __arrinit(&DAT_014b8a58,8,&g_CDemonFilterTypeInfo_0059ac90);
  _atexit(&g_WatcomStaticDestructorNode_005ad4dc);
  __arrinit(&DAT_014b8cb8,4,&g_CDemonFilterTypeInfo_0059ac90);
  _atexit(&g_WatcomStaticDestructorNode_005ad4ec);
  core_dfilter_cpp_CFilterCache_ctor_FUN_0044bca0((CFilterCache *)&DAT_014b8de8);
  _atexit(&g_WatcomStaticDestructorNode_005ad4fc);
  core_dfilter_cpp_CFilterFX_ctor_FUN_0044c2b0((CFilterFx *)&DAT_014b98ec);
  _atexit(&g_WatcomStaticDestructorNode_005ad50c);
  return;
}
