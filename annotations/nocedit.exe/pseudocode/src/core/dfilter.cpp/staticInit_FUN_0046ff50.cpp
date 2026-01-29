// Name: core_dfilter.cpp_staticInit_FUN_0046ff50
// Address: 0046ff50
// Address Range: [[0046ff50, 0046ffc6]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_staticInit_FUN_0046ff50(void)

#include "nocturne.h"

void __cdecl core_dfilter_cpp_staticInit_FUN_0046ff50(void)

{
  __arrinit(CDemonFilter_ARRAY_020a4878,8,&g_CDemonFilterTypeInfo);
  _atexit(&DAT_0066ef5c);
  __arrinit(CDemonFilter_ARRAY_020a4ad8,4,&g_CDemonFilterTypeInfo);
  _atexit(&DAT_0066ef6c);
  core_dfilter_cpp_CFilterCache_ctor_FUN_0046ffd0(&g_CFilterCacheInstance);
  _atexit(&g_CFilterCacheDestructorNode);
  core_dfilter_cpp_CFilterFX_ctor_FUN_004706c0(&g_CFilterFXInstance);
  _atexit(&g_CFilterFXDestructorNode);
  return;
}
